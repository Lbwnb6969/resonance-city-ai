from collect_sources import BASE, fetch
import hashlib
import json
from pathlib import Path
import re

PRECISE = {
 'BorisTheBrave/sylves': ['README.md','LICENSE.txt','src/Sylves/Extras/TownscaperGrid.cs','src/Sylves/Grid/Extras/TownscaperGrid.cs','docs/articles/tutorials/townscaper.md'],
 'KoBeWi/Godot-Palette-Swap-Shader': ['README.md','LICENSE.txt','.gitattributes'],
 'GodotWildJam/gwj-accessibility-scripts': ['README.md','LICENSE.txt','.gitattributes','addons/gwj_accessibility_scripts/options/config.gd','addons/gwj_accessibility_scripts/options/rebindable_action.gd'],
 'micah-mcgonigal/MOISE': ['src/main.cpp'],
 'libraz/midi-sketch-bach': ['src/composer/form_fugue.cpp','src/composer/subject_catalog.h'],
 'mcp-tool-shop-org/motif': ['packages/clip-engine/src/clip-transforms.ts','packages/clip-engine/src/cue-scheduler.ts','packages/runtime-pack/src/serialize.ts','packages/audio-engine/src/transitions.ts'],
 'mackron/miniaudio': ['miniaudio.h'],
 'magnificus/Procedural-Cities': ['LICENSE.md','LICENSE.txt'],
}

def main():
    results=json.loads((BASE/'来源索引.json').read_text(encoding='utf-8'))
    for r in results:
        known={f['path'] for f in r.get('files',[])}
        for p in PRECISE.get(r['repo'],[]):
            if p in known: continue
            url=f"https://raw.githubusercontent.com/{r['repo']}/{r['commit']}/{p}"
            try:
                data=fetch(url)
                if len(data)>700_000:
                    print('large file excluded',r['repo'],p,flush=True)
                    continue
                local=Path('源码')/r['repo'].replace('/','__')/p
                (BASE/local).parent.mkdir(parents=True,exist_ok=True)
                (BASE/local).write_bytes(data)
                anchors=[{'line':i,'signature':line.strip()[:180]} for i,line in enumerate(data.decode('utf-8',errors='replace').splitlines(),1) if re.match(r'^\s*(?:func |def |class |(?:static )?(?:inline )?(?:void|bool|int|float|double) \w+\s*\()',line)]
                r.setdefault('files',[]).append({'path':p,'local_path':local.as_posix(),'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),'url':f"https://github.com/{r['repo']}/blob/{r['commit']}/{p}",'raw_url':url,'anchors':anchors[:12]})
                print('raw',r['repo'],p,flush=True)
            except Exception as e:
                r.setdefault('missing_paths',[]).append({'path':p,'error':str(e)})
        if r.get('files') and r['status']=='incomplete': r['status']='selected_raw_evidence_only'
        if not r.get('files'): r['status']='no_files_collected'
    (BASE/'来源索引.json').write_text(json.dumps(results,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')

if __name__=='__main__': main()
