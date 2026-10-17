"""Fill precise source entries and retrieve lightweight evidence for large upstream archives."""
from collect_sources import BASE, collect, fetch
import concurrent.futures as futures
import hashlib
import json
from pathlib import Path
import re

EXTRA = {
 'mcp-tool-shop-org/motif': ('music', ['motif', 'scene', 'runtime-pack', 'voice']),
 'micah-mcgonigal/MOISE': ('music', ['engine', 'synth', 'sequence', 'condition']),
 'BorisTheBrave/sylves': ('fabric', ['Townscaper', 'PlanarLazyMeshGrid', 'RelaxModifier']),
 'Signalsmith-Audio/dsp': ('audio', ['delay.h', 'filters.h', 'envelopes.h', 'curves.h']),
 'mackron/miniaudio': ('audio', ['miniaudio.h', 'engine_advanced', 'custom_backend']),
 'GodotWildJam/gwj-accessibility-scripts': ('ux', ['colorblind', 'motion', 'contrast', 'remap']),
 'stechyo/godot-steam-audio': ('audio', ['audio_stream', 'geometry', 'occlusion']),
}
PRECISE = {
 'anokta/barelymusician': ['platforms/godot/engine.cpp','src/engine/engine_processor.h','src/engine/cmd_queue.h','src/engine/voice_state.h'],
 'hyprtuna/divisi': ['addons/divisi/divisi_clock.gd','addons/divisi/divisi_player.gd'],
 'timoncool/godot-strudel': ['addons/strudel/audio/engine.gd','addons/strudel/strudel_player.gd'],
 'Briganti-Games/Straight-Skeleton-Generator': ['Runtime/Geometry2D.cs'],
 'mxgmn/WaveFunctionCollapse': ['README.md','LICENSE','Model.cs','SimpleTiledModel.cs','OverlappingModel.cs'],
 'xjmusic/xjmusic': ['README.md','LICENSE.txt'],
 'magnificus/Procedural-Cities': ['README.md','LICENSE'],
 'xpTURN/Klotho': ['README.md','LICENSE','Docs/Replay.md','Docs/DeterministicMath.md'],
 'sgossner/VSCO-2-CE': ['README.md','LICENSE'],
}

def main():
    results = json.loads((BASE/'来源索引.json').read_text(encoding='utf-8'))
    with futures.ThreadPoolExecutor(max_workers=4) as pool:
        jobs = [pool.submit(collect, r, *cfg) for r,cfg in EXTRA.items()]
        for job in futures.as_completed(jobs):
            r = job.result()
            results.append(r)
            print(r['repo'], r['status'], r.get('error',''), flush=True)
    for r in results:
        paths = PRECISE.get(r['repo'], [])
        known = {f['path'] for f in r.get('files',[])}
        for p in paths:
            if p in known:
                continue
            url = f"https://raw.githubusercontent.com/{r['repo']}/{r['commit']}/{p}"
            try:
                data = fetch(url)
                local = Path('源码')/r['repo'].replace('/','__')/p
                (BASE/local).parent.mkdir(parents=True,exist_ok=True)
                (BASE/local).write_bytes(data)
                anchors = [{'line':i,'signature':line.strip()[:180]} for i,line in enumerate(data.decode('utf-8',errors='replace').splitlines(),1) if re.match(r'^\s*(?:func |def |class |(?:static )?(?:inline )?(?:void|bool|int|float|double) \w+\s*\()',line)]
                r.setdefault('files',[]).append({'path':p,'local_path':local.as_posix(),'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),'url':f"https://github.com/{r['repo']}/blob/{r['commit']}/{p}",'raw_url':url,'anchors':anchors[:12]})
                print('raw',r['repo'],p,flush=True)
            except Exception as e:
                r.setdefault('missing_paths',[]).append({'path':p,'error':str(e)})
        if r.get('files') and r['status']=='incomplete':
            r['status']='selected_raw_evidence_only'
    (BASE/'来源索引.json').write_text(json.dumps(sorted(results,key=lambda r:r['repo']),ensure_ascii=False,indent=2)+'\n',encoding='utf-8')

if __name__=='__main__':
    main()
