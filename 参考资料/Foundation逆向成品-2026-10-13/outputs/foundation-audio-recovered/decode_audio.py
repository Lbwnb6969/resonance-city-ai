"""Decode recovered Wwise media with official vgmstream CLI; no playback.
Preserve original bytes, ignore loop repetition, verify every PCM WAV header.
"""
import concurrent.futures,hashlib,json,subprocess,wave
from pathlib import Path

OUT=Path('outputs/foundation-audio-recovered').resolve()
TOOL=Path('work/full-audio/vendor/vgmstream-win64/vgmstream-cli.exe').resolve()
rows=json.loads((OUT/'original-media-manifest.json').read_text(encoding='utf-8'))['rows']
rows=[r for r in rows if r['magic'] in ('RIFF','RIFX')]
LOG=Path('work/full-audio/decode-progress.jsonl')

def decode(row):
    source=OUT/row['path']
    target=OUT/'decoded'/Path(row['path']).relative_to('original').with_suffix('.wav')
    target.parent.mkdir(parents=True,exist_ok=True)
    meta=subprocess.run([str(TOOL),'-I','-m',str(source)],capture_output=True,text=True,encoding='utf-8',errors='replace')
    r={'original_path':row['path'],'original_sha256':row['sha256'],'decoded_path':target.relative_to(OUT).as_posix(),'metadata_exit_code':meta.returncode,'metadata_stdout':meta.stdout.strip(),'metadata_stderr':meta.stderr.strip()}
    try: info=json.loads(meta.stdout)
    except Exception as e:
        r.update(success=False,error='metadata JSON: '+str(e));return r
    if meta.returncode: r.update(success=False,error='metadata decoder failed');return r
    r['metadata']=info
    if target.exists():
        r['decode_exit_code']=0;r['decode_status']='existing output verified'
    else:
        run=subprocess.run([str(TOOL),'-i','-W','1','-o',str(target),str(source)],capture_output=True,text=True,encoding='utf-8',errors='replace')
        r.update(decode_exit_code=run.returncode,decode_stdout=run.stdout.strip(),decode_stderr=run.stderr.strip())
        if run.returncode: r.update(success=False,error='decode failed');return r
    try:
        with wave.open(str(target),'rb') as wav:
            frames=wav.getnframes();rate=wav.getframerate();channels=wav.getnchannels();width=wav.getsampwidth()
            assert rate==info['sampleRate']==row['sample_rate']
            assert channels==info['channels']==row['channels']
            assert frames==info['numberOfSamples']
            assert width==2 and wav.getcomptype()=='NONE'
            # Validate physical PCM range to catch truncated successful outputs.
            data_bytes=0
            while True:
                chunk=wav.readframes(65536)
                if not chunk: break
                data_bytes+=len(chunk)
            assert data_bytes==frames*channels*width
        h=hashlib.sha256()
        with target.open('rb') as f:
            while chunk:=f.read(1024*1024): h.update(chunk)
        r.update(success=True,decoded_sha256=h.hexdigest(),decoded_bytes=target.stat().st_size,frames=frames,sample_rate=rate,channels=channels,sample_width_bytes=width,duration_seconds=frames/rate,physical_pcm_bytes=data_bytes)
    except Exception as e: r.update(success=False,error='WAV validation: '+repr(e))
    return r

results=[]
with LOG.open('w',encoding='utf-8') as log:
    with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:
        for result in pool.map(decode,rows):
            results.append(result);log.write(json.dumps(result,ensure_ascii=False)+'\n');log.flush()
            if len(results)%100==0: print('Decoded/validated',len(results),'of',len(rows),'failed',sum(not x['success'] for x in results),flush=True)
summary={'tool':str(TOOL),'tool_sha256':hashlib.sha256(TOOL.read_bytes()).hexdigest(),'version':'r2117','loop_policy':'-i: one full source stream, ignore loop repetition','output_format':'-W 1: PCM16 WAV','requested':len(rows),'succeeded':sum(x['success'] for x in results),'failed':sum(not x['success'] for x in results),'decoded_bytes':sum(x.get('decoded_bytes',0) for x in results),'total_duration_seconds':sum(x.get('duration_seconds',0) for x in results),'rows':results}
(OUT/'decoded-media-manifest.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(json.dumps({k:v for k,v in summary.items() if k!='rows'},indent=2))
