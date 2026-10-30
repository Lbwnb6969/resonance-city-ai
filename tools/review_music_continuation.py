"""Reassemble received composition proposals; never install them as runtime scores."""
from pathlib import Path
import argparse
import hashlib
import json
import math
import re
from review_music_composition import examine

ROOT = Path(__file__).resolve().parents[1]
SOURCES = ['文档/来源/20261030_Gemini_原创室内乐作曲方案_'+s+'.txt' for s in ['原稿','续稿1','续稿2']]
DEST = '数据/作曲候选/Gemini音乐续稿_素材目录_v1.json'
ROLES = {'foundation':1,'pulse':2,'answer':2,'lead':3}
TIMBRES = ['flute','guitar','bass','horn','felt_nocturne','felt_piano','cello_harmonic']


def decode(text, marker):
    return json.JSONDecoder().raw_decode(text[text.index(marker):])[0]


def numeric_checks(events):
    errors = []
    for i, e in enumerate(events):
        if len(e)!=7 or not all(isinstance(e[j],(float,int)) and math.isfinite(e[j]) for j in range(4)):
            errors.append([i,'event shape']);continue
        beat, beats, midi, gain, timbre, role, layer = e
        if not (0<=beat<32 and 0<beats*.75<=4 and 24<=midi<=100 and midi==int(midi)
                and 0<=gain<=.18 and abs(beat*4-round(beat*4))<.000001
                and role in ROLES and ROLES[role]==layer and isinstance(timbre,str)):
            errors.append([i,'timing/pitch/gain/role'])
    return errors


def analyze():
    raw = [(ROOT/p).read_bytes() for p in SOURCES]
    old, one, two = [r.decode('utf-8-sig') for r in raw]
    # Continuation 1 restarts P4 in full, replacing only the truncated suffix.
    prefix = old[old.index('{"version":2'):old.index('{"id":"P4"')]
    suffix = one[one.index('{"id":"P4"'):].splitlines()[0]
    master = json.loads(prefix+suffix)
    table, _ = examine()
    mismatches = []
    for section, expected in zip(master['sections'],table['sections']):
        if section['id']!=expected['id'] or section['harmony']!=expected['harmony']:
            mismatches.append([section['id'],'identity/harmony'])
        for role in ROLES:
            if [e[:3] for e in section['events'] if e[5]==role]!=expected['roles'][role]:
                mismatches.append([section['id'],role])
    arrays = []
    for m in re.finditer(r'^\[\s*$',one,re.M):
        try:
            data, _ = json.JSONDecoder().raw_decode(one[m.start():])
        except json.JSONDecodeError:
            continue
        arrays.append((one[:m.start()].count('\n')+1,data))
    keys = ['foundation_warm_p0','pulse_sway_p0','answer_canon_p0','lead_virtuoso_p4',
            'deep_flow_theme_a','felt_nocturne_theme_a','renaissance_arcade_theme_a','clockwork_chimes_theme_a']
    if len(arrays)!=len(keys):
        raise ValueError('Unexpected standalone event-array inventory')
    materials = {key:dict(source=SOURCES[1],source_line=line,events=events)
                 for key,(line,events) in zip(keys,arrays)}
    # Continuation 2 restarts a whole repeated row. Drop the partial row, not notes.
    high = one[one.index('8.5 母曲六'):]
    high = high[re.search(r'^\[\s*$',high,re.M).start():]
    restart = '[4.0,3.5,40'
    first = high[:high.index(restart)]
    last = two[two.index(restart):]
    literal = '" cello_harmonic".strip_edges()'
    assert last.count(literal)==1
    normalized = last.replace(literal,'"cello_harmonic"',1)
    high_events, _ = json.JSONDecoder().raw_decode(first+normalized)
    materials['highland_echoes_theme_a'] = dict(source=SOURCES[1:],events=high_events,
        normalization='Restart repeated bar-2 row once; replace the one explicitly annotated timbre expression with its literal string; no code evaluated')
    m80 = decode(one,'{"bars":8')
    cross_start = re.search(r'^\{\s*\n\s*"version": 3',one,re.M).start()
    cross = json.JSONDecoder().raw_decode(one[cross_start:])[0]
    materials['cross_district_p0'] = dict(source=SOURCES[1],
        proposed_container_not_runtime_schema=cross,events=cross['events'])
    checks = {}
    for p in master['sections']:
        checks['master_'+p['id']] = dict(events=len(p['events']),numeric_errors=numeric_checks(p['events']))
    for key,item in materials.items():
        events=item['events']
        checks[key]=dict(events=len(events),numeric_errors=numeric_checks(events),
            timbres=sorted({e[4] for e in events}),
            start_bars=sorted({int(e[0]//4)+1 for e in events}),
            end_beat=max(e[0]+e[1] for e in events),
            outside_external_timbres=sorted({e[4] for e in events}-set(TIMBRES)))
    fields=['schema','id','style','origin','bpm','beats_per_bar','bars','harmony_mode','events','features_sha256']
    efields=['beat','beats','midi','gain','timbre','role','layer']
    m80_notes=[[e[k] for k in ['beat','beats','midi','gain','timbre','role','layer']] for e in m80['events']]
    feature_sha=hashlib.sha256((ROOT/'数据/原创谱材/河湾练习_v1/features.json').read_bytes()).hexdigest()
    m80_checks=dict(top_fields_exact=set(m80)==set(fields),event_fields_exact=all(set(e)==set(efields) for e in m80['events']),
        transport_and_style_ok=m80['schema']==1 and m80['bars']==8 and m80['bpm']==80 and m80['beats_per_bar']==4 and m80['harmony_mode']==0 and m80['style']=='pastoral_breeze' and m80['origin']=='authored',
        identifier_ok=re.fullmatch(r'[a-z0-9_]{1,48}',m80['id']) is not None,
        event_count_ok=0<len(m80_notes)<=256,all_four_roles={e[5] for e in m80_notes}==set(ROLES),
        numeric_errors=numeric_checks(m80_notes),timbres_ok=all(e[4] in TIMBRES for e in m80_notes),
        existing_features_hash_matches=m80['features_sha256']==feature_sha,actual_document_validate_run=False)
    # Measurements expose contradictions without guessing a musical correction.
    conflicts = []
    for bar in range(8):
        b=bar*4
        notes=cross['events']
        if [e for e in notes if e[5]=='pulse' and b+2<=e[0]<b+4]:
            conflicts.append(bar+1)
    slow_bass=[e for e in materials['deep_flow_theme_a']['events'] if e[5]=='foundation' and e[0]+e[1]>32]
    overlaps=[]
    theme=materials['highland_echoes_theme_a']['events']
    for a in [e for e in theme if e[5]=='answer']:
        if any(max(a[0],l[0])<min(a[0]+a[1],l[0]+l[1]) for l in theme if l[5]=='lead'):
            overlaps.append(a[0])
    source_info=[dict(path=p,bytes=len(r),sha256=hashlib.sha256(r).hexdigest()) for p,r in zip(SOURCES,raw)]
    candidate=dict(kind='composition_continuation_catalog',draft_format=1,runtime_ready=False,
        sources=source_info,review='文档/58_原创室内乐作曲审阅与施工映射.md',
        note='Received materials with explicit splice/normalization; proposals only, not installed runtime content',
        merged_master_v2_proposal=master,external_schema1_example=m80,materials=materials,
        unresolved=['six-section tier expansion','flowing color1/color2 full event data','ten-mode authored scores',
                    'remaining five complete 48-bar scores','shared harmony for theme seeds','playback and listening evidence'])
    report=dict(sources=source_info,merged_sections=[p['id'] for p in master['sections']],
        merged_events=sum(len(p['events']) for p in master['sections']),table_mismatches=mismatches,
        extracted_materials=checks,m80_static_checks=m80_checks,
        crossed_district_pulse_second_half_bars=conflicts,
        deep_flow_events_past_section_end=slow_bass,
        highland_lead_answer_note_overlaps_at_beats=overlaps,
        stored_content_note='Syntactic/numeric checks do not approve score quality, v3 API support or full coverage',
        runtime_files_modified=False,godot_run=False,listening_review=False)
    errors=[k for k,c in checks.items() if c['numeric_errors']]
    report['extraction_ok']=len(master['sections'])==6 and not mismatches and not errors and all(
        v is True for k,v in m80_checks.items() if k not in {'numeric_errors','actual_document_validate_run'}) and not m80_checks['numeric_errors']
    return candidate,report


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--write-candidate',action='store_true')
    ap.add_argument('--report',type=Path,required=True)
    args=ap.parse_args();candidate,report=analyze()
    target=ROOT/DEST
    if args.write_candidate:
        with target.open('x',encoding='utf-8',newline='\n') as f:
            json.dump(candidate,f,ensure_ascii=False,indent=2);f.write('\n')
    elif json.loads(target.read_text(encoding='utf-8'))!=candidate:
        report['extraction_ok']=False
        report['stored_candidate_mismatch']=True
    args.report.parent.mkdir(parents=True,exist_ok=True)
    args.report.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:report[k] for k in ['extraction_ok','merged_sections','merged_events','table_mismatches','m80_static_checks']},ensure_ascii=False))
    print('Material event counts:',json.dumps({k:v['events'] for k,v in report['extracted_materials'].items()}))
    raise SystemExit(0 if report['extraction_ok'] else 1)


if __name__=='__main__':main()
