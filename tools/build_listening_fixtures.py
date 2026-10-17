"""Lock reproducible nine-voice trials from spec.audio A11; no human answers."""
from pathlib import Path
import hashlib
import json
import argparse

ROOT=Path(__file__).resolve().parents[1]
OUTPUT=ROOT/'数据/listening_fixtures.json'

def digest(value):
    return hashlib.sha256(value.encode()).hexdigest()

def generate():
    values=json.loads((ROOT/'数据/spec_values.json').read_text(encoding='utf-8'))
    spec=values['listening']; seed=spec['seed']; directions=['left','center','right']
    pairs={
        'practice':[(kind,direction) for kind in spec['case_counts'] for direction in directions],
        'formal':[(kind,direction) for kind,counts in spec['case_counts'].items()
                  for direction,count in zip(directions,counts) for _ in range(count)],
    }
    trials=[]
    for stage,cases in pairs.items():
        cases=list(enumerate(cases))
        cases.sort(key=lambda item:digest(f'{seed}:{stage}:order:{item[0]}'))
        for number,(original,(kind,direction)) in enumerate(cases,1):
            trial_seed=digest(f'{seed}:{stage}:layout:{original}')[:16]
            region=values['synthesis']['pan_regions'][directions.index(direction)]
            x=int(digest(trial_seed+':x')[:8],16)%(region[1]-region[0]+1)+region[0]
            y=int(digest(trial_seed+':y')[:8],16)%(values['city']['height']-1)
            target=[x,y+1]; root=[x,y]
            cells=[[cx,cy] for cx in range(values['city']['width']) for cy in range(values['city']['height'])
                   if [cx,cy] != root and abs(cx-target[0])+abs(cy-target[1]) > 1]
            cells.sort(key=lambda cell:digest(f'{trial_seed}:{cell[0]}:{cell[1]}'))
            voices=[]; per_type=values['city']['initial_count']//len(values['voices'])
            for voice_type in values['voices']:
                for index in range(per_type):
                    cell=root if voice_type=='residential' and index==0 else target if voice_type=='industrial' and index==0 else cells.pop()
                    midi=spec['minor_midi' if kind=='minor' else 'tritone_midi'] if cell==target else spec['base_midi']
                    voices.append({'id':f'{voice_type}_{index}','type':voice_type,'cell':cell,'midi':midi})
            assert len(voices)==values['city']['initial_count'] and len({tuple(v['cell']) for v in voices})==len(voices)
            trials.append({'stage':stage,'trial_id':number,'seed':trial_seed,'layout_id':f'{spec["version"]}:{stage}:{original}',
                           'truth_direction':direction,'truth_type':kind,'voices':voices})
    body={'version':spec['version'],'seed':seed,'audio_spec_sha256':values['sources']['spec.audio.md'],'trials':trials}
    return json.dumps(body,ensure_ascii=False,indent=2)+'\n'

if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--check',action='store_true'); args=p.parse_args()
    text=generate()
    if args.check:
        assert OUTPUT.read_text(encoding='utf-8')==text,'Stale locked listening fixtures'
        print('LISTENING_FIXTURES PASS: fixed protocol and layouts')
    else:
        OUTPUT.write_text(text,encoding='utf-8',newline='\n')
        print('Generated listening fixtures')
