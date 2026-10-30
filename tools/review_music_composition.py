"""Extract and check the received Gemini composition tables, never runtime music."""
from pathlib import Path
import argparse
import collections
import hashlib
import json
import math
import re

ROOT = Path(__file__).resolve().parents[1]
SOURCE = '文档/来源/20261030_Gemini_原创室内乐作曲方案_原稿.txt'
CANDIDATE = '数据/作曲候选/田园晨风_Gemini表格草案_v1.json'
ROLES = ['foundation', 'pulse', 'answer', 'lead']


def arrays(cell):
    return [json.loads(row) for row in re.findall(r'\[[\d., ]+\]', cell)]


def examine():
    raw = (ROOT / SOURCE).read_bytes()
    text = raw.decode('utf-8-sig')
    bars = []
    errors = []
    for line_no, line in enumerate(text.splitlines(), 1):
        match = re.match(r'\| \*\*Bar (\d+)\*\*', line)
        if not match:
            continue
        number = int(match[1])
        cells = line.split('|')[1:-1]
        if len(cells) != 8:
            raise ValueError(f'Unexpected source table at line {line_no}')
        chords = arrays(cells[2])
        if len(chords) != 1:
            raise ValueError(f'Unexpected harmony at bar {number}')
        notes = {role: arrays(cells[3+i]) for i, role in enumerate(ROLES)}
        bars.append(dict(bar=number, section=(number-1)//8, section_bar=(number-1)%8,
                         source_line=line_no, harmony=chords[0], notes=notes))
    if [bar['bar'] for bar in bars] != list(range(1, 49)):
        errors.append('Expected exactly bars 1..48 in source order')
    counts = collections.Counter()
    out_of_chord = []
    overlap = []
    for bar in bars:
        start = bar['section_bar']*4
        for role, notes in bar['notes'].items():
            counts[role] += len(notes)
            for note in notes:
                if len(note) != 3 or not all(isinstance(n, (int, float)) and math.isfinite(n) for n in note):
                    errors.append(f'Bad event: bar {bar["bar"]} {role}')
                    continue
                beat, beats, midi = note
                if not (start <= beat < start+4 and beats > 0 and beat+beats <= start+4
                        and beats*.75 <= 4 and midi == int(midi) and 24 <= midi <= 100
                        and abs(beat*4-round(beat*4)) < .000001):
                    errors.append(f'Bad timing/pitch: bar {bar["bar"]} {role} {note}')
                if midi % 12 not in {p % 12 for p in bar['harmony']}:
                    out_of_chord.append(dict(bar=bar['bar'], role=role, note=note))
        for lead in bar['notes']['lead']:
            for answer in bar['notes']['answer']:
                if max(lead[0], answer[0]) < min(lead[0]+lead[1], answer[0]+answer[1]):
                    overlap.append(bar['bar'])
    json_start = text.index('{"version":2')
    fragment = text[json_start:]
    try:
        json.loads(fragment)
        json_error = None
    except json.JSONDecodeError as exc:
        json_error = dict(message=exc.msg, position=exc.pos, fragment_characters=len(fragment))
    complete = []
    mismatches = []
    for match in re.finditer(r'\{"id":"P[0-5]"', fragment):
        try:
            part, _ = json.JSONDecoder().raw_decode(fragment[match.start():])
        except json.JSONDecodeError:
            continue
        complete.append(part['id'])
        p = int(part['id'][1:])
        for bar in [b for b in bars if b['section'] == p]:
            for role in ROLES:
                actual = [e[:3] for e in part['events'] if e[5] == role and int(e[0]//4) == bar['section_bar']]
                if actual != bar['notes'][role]:
                    mismatches.append(dict(bar=bar['bar'], role=role,
                                           table=bar['notes'][role], json_fragment=actual))
    sections = []
    for p in range(6):
        subset = [b for b in bars if b['section'] == p]
        sections.append(dict(id='P'+str(p), harmony=[b['harmony'] for b in subset],
                             roles={r: [note for b in subset for note in b['notes'][r]] for r in ROLES}))
    candidate = dict(kind='composition_table_draft', draft_format=1, runtime_ready=False,
                     source=SOURCE, source_sha256=hashlib.sha256(raw).hexdigest(),
                     review='文档/58_原创室内乐作曲审阅与施工映射.md',
                     status='Table-derived design candidate; not an approved runtime score',
                     proposed_style='pastoral_breeze', bpm=80, beats_per_bar=4, bars=48,
                     reference_mode=0, reference_key='D major', middle_c=60,
                     coordinates='section-local beats, zero-based; [beat, beats, midi]',
                     missing=['gain/mix decisions', 'tier/color/articulation branches',
                              'ten-mode musical rewrites', 'runtime schema and content signature',
                              'PCM/transition evidence and listening review'], sections=sections)
    report = dict(source=SOURCE, source_sha256=candidate['source_sha256'],
                  received_bytes=len(raw), received_lines=len(text.splitlines()),
                  bars=len(bars), event_counts=dict(counts), total_events=sum(counts.values()),
                  table_structure_ok=not errors, errors=errors,
                  lead_answer_note_interval_overlap=sorted(set(overlap)),
                  non_chord_notes_for_musical_review=out_of_chord,
                  embedded_json_valid=json_error is None, embedded_json_error=json_error,
                  complete_embedded_json_sections=complete, table_json_mismatches=mismatches,
                  candidate_tail_end_beat=max(n[0]+n[1] for ns in sections[-1]['roles'].values() for n in ns),
                  runtime_score_modified=False, godot_run=False, listening_review=False)
    return candidate, report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write-candidate', action='store_true')
    parser.add_argument('--report', type=Path, required=True)
    args = parser.parse_args()
    candidate, report = examine()
    if args.write_candidate:
        p = ROOT / CANDIDATE
        p.parent.mkdir(parents=True, exist_ok=True)
        with p.open('x', encoding='utf-8', newline='\n') as f:
            json.dump(candidate, f, ensure_ascii=False, indent=2)
            f.write('\n')
    else:
        existing = json.loads((ROOT / CANDIDATE).read_text(encoding='utf-8'))
        if existing != candidate:
            report['errors'].append('Stored candidate differs from source-table extraction')
            report['table_structure_ok'] = False
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps({k: report[k] for k in ('bars', 'event_counts', 'total_events', 'table_structure_ok',
                                           'embedded_json_valid', 'complete_embedded_json_sections')}, ensure_ascii=False))
    print('Table/JSON conflicting role-bars:', len(report['table_json_mismatches']))
    raise SystemExit(0 if report['table_structure_ok'] else 1)


if __name__ == '__main__':
    main()
