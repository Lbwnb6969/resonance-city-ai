"""Reference features -> authored brief -> validated JSON study; never executes input."""
from pathlib import Path
import argparse
import hashlib
import json
import sys
from music_reference_features import profile, raw
from music_authored_score import author, canonical, STYLES


def build(input_path, output, kind, style):
    features = profile(input_path) if kind=='profile' else raw(input_path)
    brief = dict(schema=1,kind='authored_style_brief',features_sha256=hashlib.sha256(canonical(features).encode()).hexdigest(),
                 style=dict(value=style,origin='authored',reason='Explicit development choice; not a classifier result'),
                 transport=dict(bpm=80,beats_per_bar=4,bars=8,origin='authored',reason='Existing game clock retained'),
                 directions=[dict(origin='authored',text='Write a presentation, answer, development and D cadence'),
                             dict(origin='authored',text='Leave real rests; keep one melodic owner and one pulse')],
                 limitations=['BPM/key are estimates','RMS is not LUFS','chords_key does not specify a progression',
                              'No melody, harmony sequence, stems or subjective judgment were extracted'])
    score = author(features, style)
    output = Path(output);output.mkdir(parents=True,exist_ok=True)
    for name,value in [('features',features),('brief',brief),('score',score)]:
        (output/(name+'.json')).write_text(canonical(value),encoding='utf-8',newline='\n')
    return {name:hashlib.sha256((output/(name+'.json')).read_bytes()).hexdigest() for name in ['features','brief','score']}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('input');parser.add_argument('--kind',choices=['profile','summary'],required=True)
    parser.add_argument('--style',choices=sorted(STYLES),default='deep_flow');parser.add_argument('--out-dir',required=True)
    args=parser.parse_args()
    try: print(json.dumps(dict(ok=True,hashes=build(args.input,args.out_dir,args.kind,args.style)),ensure_ascii=False))
    except (ValueError,KeyError,TypeError,OSError,json.JSONDecodeError) as exc:
        print(json.dumps(dict(ok=False,error=str(exc)),ensure_ascii=False));return 1
    return 0
if __name__=='__main__':sys.exit(main())
