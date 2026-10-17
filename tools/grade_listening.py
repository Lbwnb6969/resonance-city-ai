"""Strictly grade completed human sessions; automated output never counts."""
from pathlib import Path
import argparse
import collections
import csv
import json

ROOT=Path(__file__).resolve().parents[1]

def grade(paths, condition):
    values=json.loads((ROOT/'数据/spec_values.json').read_text(encoding='utf-8'))['listening']
    protocol=json.loads((ROOT/'数据/listening_fixtures.json').read_text(encoding='utf-8'))
    truth={(r['stage'],str(r['trial_id'])):r for r in protocol['trials']}
    groups=collections.defaultdict(list)
    for path in paths:
        for row in csv.DictReader(path.open(encoding='utf-8-sig',newline='')):
            assert row['origin']=='human',f'Automated record cannot count as human: {path}'
            assert row['device']==condition,f'Mixed device condition: {path}'
            assert row['protocol']==values['version'],'Protocol version mismatch'
            assert row['device_notes'].strip(),'Actual device notes required'
            groups[row['tester_id']].append(row)
    assert len(groups)==values['tester_count'],f'PENDING: expected {values["tester_count"]} testers, got {len(groups)}'
    result={}
    for tester,rows in sorted(groups.items()):
        assert len(rows)==values['practice_count']+values['formal_count'],f'{tester}: incomplete or duplicate session'
        assert len({(r['stage'],r['trial_id']) for r in rows})==len(rows),f'{tester}: repeated trial'
        formal=[]
        for row in rows:
            expected=truth[(row['stage'],row['trial_id'])]
            for key in ['seed','layout_id','truth_direction','truth_type']:
                assert row[key]==str(expected[key]),f'{tester}: changed fixture {key}'
            assert int(row['skips'])==0,f'{tester}: audio underrun invalidates trial'
            assert row['answer_direction'] in ['left','center','right'] and row['answer_type'] in ['minor','tritone'],f'{tester}: unanswered trial'
            narrow=condition=='speaker_narrowband'
            assert row['assist_state'].lower()==str(narrow).lower(),'Unexpected assist state'
            assert row['device_mode']==('narrowband' if narrow else 'standard'),'Unexpected device mode'
            assert len(row['pcm_sha256'])==64,'Missing rendered PCM identity'
            if row['stage']=='formal':
                formal.append(row)
        assert len(formal)==values['formal_count'],f'{tester}: incomplete formal set'
        score=sum(r['answer_direction']==r['truth_direction'] and r['answer_type']==r['truth_type'] for r in formal)
        result[tester]={'score':score,'trials':len(formal),'passed':score>=values['required_correct']}
    return {'condition':condition,'protocol':values['version'],'testers':result,'passed':all(r['passed'] for r in result.values())}

if __name__=='__main__':
    p=argparse.ArgumentParser()
    p.add_argument('files',nargs='+',type=Path)
    p.add_argument('--condition',required=True,choices=['headphones_standard','speaker_standard','speaker_narrowband'])
    p.add_argument('--output',type=Path)
    a=p.parse_args()
    try:
        result=grade(a.files,a.condition)
    except (AssertionError,KeyError,FileNotFoundError,ValueError) as exc:
        print('HUMAN-AUDIO PENDING/INVALID:',exc)
        raise SystemExit(2)
    text=json.dumps(result,ensure_ascii=False,indent=2)+'\n'
    if a.output:
        a.output.parent.mkdir(parents=True,exist_ok=True)
        a.output.write_text(text,encoding='utf-8',newline='\n')
    print(text)
    print('HUMAN-AUDIO PASS' if result['passed'] else 'HUMAN-AUDIO FAIL')
    raise SystemExit(0 if result['passed'] else 1)
