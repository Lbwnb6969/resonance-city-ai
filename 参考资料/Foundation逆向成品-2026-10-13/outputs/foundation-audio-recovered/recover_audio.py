"""Export every indexed Foundation audio carrier, preserving original bytes.
Run from workspace root; does not execute the game or overwrite existing media.
"""
import hashlib,json
from pathlib import Path

ROOT=Path('D:/steamtest/steamapps/common/Foundation')
INDEX=Path('outputs/foundation-audio')
OUT=Path('outputs/foundation-audio-recovered')
rows=[]
for kind in ('bnk','pck'):
    for p in sorted(INDEX.glob(f'*{kind}.json')):
        index=json.loads(p.read_text(encoding='utf-8'))
        source=ROOT/index['path']
        items=index['media'] if kind=='bnk' else [x for x in index['files'] if x['section']!='bank']
        with source.open('rb') as f:
            for item in items:
                magic=item['riff']['magic']
                rel=Path('original')/Path(index['path']).with_suffix('')/(str(item['id'])+('.wem' if magic in ('RIFF','RIFX') else '.plug'))
                target=OUT/rel;target.parent.mkdir(parents=True,exist_ok=True)
                offset=item.get('absolute_offset',item['offset'])
                f.seek(offset);data=f.read(item['bytes'])
                assert len(data)==item['bytes']
                sha=hashlib.sha256(data).hexdigest()
                if target.exists(): assert hashlib.sha256(target.read_bytes()).hexdigest()==sha
                else: target.write_bytes(data)
                r=item['riff']
                rows.append({'source':str(source),'source_relative':index['path'],'source_sha256':index['sha256'],'id':item['id'],'offset':offset,'bytes':len(data),'sha256':sha,'path':rel.as_posix(),'magic':magic,'format_tag':r.get('format_tag'),'codec':r.get('codec_label_from_vgmstream'),'sample_rate':r.get('sample_rate'),'channels':r.get('channels'),'exact_file_verified':True})
manifest={'mode':'read-only-original-byte-recovery','rows':rows,'pck_embedded_banks':json.loads((INDEX/'summary.json').read_text(encoding='utf-8'))['embedded_bank_matches'],'embedded_bank_policy':'Already present as original installation BNK files; exact SHA256 identity recorded, no duplicate carrier export.'}
(OUT/'original-media-manifest.json').write_text(json.dumps(manifest,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(json.dumps({'carriers':len(rows),'bytes':sum(x['bytes'] for x in rows),'waves':sum(x['magic'] in ('RIFF','RIFX') for x in rows),'plugs':sum(x['magic']=='PLUG' for x in rows)}))
