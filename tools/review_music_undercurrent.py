"""Audit the received partial undercurrent proposal; never invent missing notes."""
from pathlib import Path
import argparse
import collections
import hashlib
import json
import re

ROOT = Path(__file__).resolve().parents[1]
SOURCE = '文档/来源/20261031_Gemini_音乐暗线重构_原稿.txt'
SOURCE_HASH = 'fdad4b4bf6cfea3ff298a6bf412d82b98c88edaa1429b3b62278f09e2e21e47e'
CANDIDATE = '数据/音乐设计候选/Gemini音乐暗线_部分规则_v1.json'


def union(events):
    intervals = []
    for event in sorted(events):
        start, end = float(event[0]), float(event[0]+event[1])
        if intervals and start <= intervals[-1][1]:
            intervals[-1][1] = max(intervals[-1][1], end)
        else:
            intervals.append([start, end])
    return sum(end-start for start, end in intervals)


def extract():
    raw = (ROOT/SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest() != SOURCE_HASH:
        raise ValueError('Source differs: review the new attachment before extraction')
    lines = raw.decode('utf-8-sig').splitlines()
    tables = {'module_dispositions': [], 'spatial_features': [],
              'envelope_parameters': [], 'transition_scenarios': []}
    for line_number, line in enumerate(lines, 1):
        category = None
        if line.startswith('| **'):
            if 94 <= line_number <= 106:
                category = 'module_dispositions'
            elif 136 <= line_number <= 142:
                category = 'spatial_features'
            elif 165 <= line_number <= 170:
                category = 'envelope_parameters'
            elif 196 <= line_number <= 203:
                category = 'transition_scenarios'
        if category:
            tables[category].append({'source_line': line_number, 'raw': line,
                'incomplete': line_number == 140})
    if [len(tables[k]) for k in tables] != [10, 5, 4, 6]:
        raise ValueError('Received table boundaries changed')
    if any(line.strip().startswith('```') for line in lines):
        raise ValueError('New code blocks need manual review')
    return {'kind': 'music_undercurrent_partial_design', 'draft_format': 1,
        'runtime_ready': False, 'source': SOURCE, 'source_sha256': SOURCE_HASH,
        'review': '文档/64_音乐暗线重构审阅与施工映射.md',
        'received_end': 'Section 7.1 statistics table ends at line 238; no note JSON or later construction chapters received',
        'tables': tables,
        'damaged_fragments': [{'source_line': n, 'raw': lines[n-1]}
                              for n in (140, 212, 238)],
        'claimed_score_statistics': {
            'P0': {'events': 69, 'roles': {'foundation': 16, 'pulse': 27, 'lead': 20, 'answer': 6},
                   'lead_beats_by_bar': [2.75, 3, 3, 2, 2.75, 3, 2, 1.5], 'lead_beats_union_claim': 20},
            'P2': {'events': 52, 'roles': {'foundation': 16, 'pulse': 26, 'lead': 7, 'answer': 3},
                   'lead_beats_by_bar': [2, 0, 2.75, 0, 2.75, 0, 2.5, 0], 'lead_beats_union_claim': 10}},
        'score_notes_received': False, 'statistics_verified_against_notes': False,
        'adoption_rule': 'Only reviewed rules in 54/64 execute; raw formulas, values and tables are candidates'}


def baseline_evidence():
    score = json.loads((ROOT/'数据/母曲/田园晨风_arrangement_ab1.json').read_text(encoding='utf-8-sig'))
    result = {}
    for section in score['sections']:
        events = section['events']
        lead = [row for row in events if row[5] == 'lead']
        answer = [row for row in events if row[5] == 'answer']
        result[section['id']] = {'events': len(events),
            'role_counts': dict(collections.Counter(row[5] for row in events)),
            'lead_beats_union': union(lead),
            'lead_midi_range': [min(e[2] for e in lead), max(e[2] for e in lead)],
            'answer_midi_range': [min(e[2] for e in answer), max(e[2] for e in answer)]}
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write-candidate', action='store_true')
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    candidate = extract()
    for claim in candidate['claimed_score_statistics'].values():
        if sum(claim['roles'].values()) != claim['events'] or sum(claim['lead_beats_by_bar']) != claim['lead_beats_union_claim']:
            raise ValueError('Claimed statistics are not even internally consistent')
    target = ROOT/CANDIDATE
    if args.write_candidate:
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(json.dumps(candidate, ensure_ascii=False, indent=2)+'\n', encoding='utf-8', newline='\n')
    if json.loads(target.read_text(encoding='utf-8')) != candidate:
        raise ValueError('Candidate differs from deterministic source extraction')
    report = {'ok': True, 'source_bytes': (ROOT/SOURCE).stat().st_size,
        'source_sha256': SOURCE_HASH, 'source_lines': 239,
        'table_rows': {k: len(v) for k, v in candidate['tables'].items()},
        'claim_arithmetic_consistent': True, 'notes_received': False,
        'claimed_statistics_verified_against_notes': False,
        'baseline_ab1': baseline_evidence(), 'runtime_ready': False,
        'game_run': False, 'listening_pass': False}
    if args.report:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
