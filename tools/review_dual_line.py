"""Extract both received scores and compare their actual branches and claims."""
from pathlib import Path
import argparse
import hashlib
import itertools
import json
import math
import re
from review_music_undercurrent import union

ROOT = Path(__file__).resolve().parents[1]
SOURCES = [('文档/来源/20261031_Gemini_明暗双线与AI储备_原稿.txt',
            'b5d54dd41cdd6c11d559fc7167bc179e5d7c948a7d68f2e2aef6d20cc5e78a74'),
           ('文档/来源/20261031_Gemini_音乐暗线重构_续稿1.txt',
            'f3c0f1e2f11310ffaa00013a789a1bd12cc70163c11a35d2b88fa2060d57ae03')]
DEST = '数据/音乐设计候选/Gemini明暗双线_续谱与储备_v1.json'


def statistics(section, selection):
    selected = {role: section['roles'][role][key] for role, key in selection.items()}
    events = [(role, event) for role, branch in selected.items() for event in branch['events']]
    lead = [event for role, event in events if role == 'lead']
    collisions = []
    for (role, a), (other, b) in itertools.combinations(events, 2):
        overlap = min(a[0]+a[1], b[0]+b[1])-max(a[0], b[0])
        if overlap > .000001 and abs(a[2]-b[2]) == 1:
            collisions.append({'roles': [role, other], 'beat': max(a[0], b[0]),
                               'beats': overlap, 'midi': [a[2], b[2]]})
    return {'events': len(events), 'role_counts': {r: len(b['events']) for r, b in selected.items()},
        'lead_events': len(lead), 'lead_beats_union': union(lead),
        'lead_midi_range': [min(e[2] for e in lead), max(e[2] for e in lead)],
        'lead_silent_global_bars': [section['index']*8+i+1 for i in range(8)
            if not any(e[0] < (i+1)*4 and e[0]+e[1] > i*4 for e in lead)],
        'semitone_overlaps_on_score': collisions}


def extract():
    items = []
    for path, expected in SOURCES:
        raw = (ROOT/path).read_bytes()
        if hashlib.sha256(raw).hexdigest() != expected:
            raise ValueError('Source changed: '+path)
        text = raw.decode('utf-8-sig').replace('\r\n', '\n')
        start = text.index('{\n')
        score, end = json.JSONDecoder().raw_decode(text[start:])
        following = text[start+end:].lstrip()
        if not following.startswith(('```', '5.4 ', '7.5 ')):
            raise ValueError('Expected the next received chapter after closed JSON')
        stats = {}
        for section in score['sections']:
            for role, branches in section['roles'].items():
                for key, branch in branches.items():
                    for event in branch['events']:
                        if len(event) != 5 or not all(isinstance(n, (int, float)) and math.isfinite(n) for n in event[:4]):
                            raise ValueError('Invalid numeric event')
                        beat, beats, midi, gain, timbre = event
                        if not (0 <= beat < 32 and 0 < beats <= 16 and beat+beats <= 32
                                and 24 <= midi <= 100 and midi == int(midi) and 0 < gain <= .18
                                and abs(beat*4-round(beat*4)) < .000001):
                            raise ValueError('Invalid event bounds')
                    if branch['silent'] != (not branch['events']):
                        raise ValueError('Silence declaration differs from events')
            for key in ['base', 'cross']:
                if all(key in branches for branches in section['roles'].values()):
                    stats[f'P{section["index"]}_{key}'] = statistics(section, {r: key for r in section['roles']})
        items.append({'source': path, 'source_sha256': expected,
            'json_source_line': text[:start].count('\n')+1, 'received_score': score, 'actual_statistics': stats})
    common_mismatches, additional = [], []
    for a, b in zip(items[0]['received_score']['sections'], items[1]['received_score']['sections']):
        for role, branches in a['roles'].items():
            for key, branch in branches.items():
                if b['roles'][role].get(key) != branch:
                    common_mismatches.append([a['index'], role, key])
            additional.extend([b['index'], role, key] for key in b['roles'][role] if key not in branches)
    return {'kind': 'dual_line_reviewed_source_catalog', 'draft_format': 1, 'runtime_ready': False,
        'review': '文档/65_明暗双线与AI储备审阅及施工映射.md',
        'scores': items, 'common_branch_mismatches': common_mismatches,
        'additional_continuation_branches': additional,
        'adoption': 'Use the richer continuation as music material after review; preserve both originals, do not install into runtime',
        'remaining_gaps': ['P1/P3/P4/P5 and all colors absent', 'current v3 identity/articulation/timbre/branch keys reject these drafts',
            'P0_cross actual Lead union 20.75, not claimed 20.0', 'P2_cross has two MIDI54/55 score overlaps',
            'cantabile is flute-only without the described delayed lower-sixth companion',
            'raw economic switch conflicts with cutoff/default/serialization and must be versioned',
            'automated tests and perceptual quality are not verified by this source extraction']}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write-candidate', action='store_true')
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    candidate = extract()
    target = ROOT/DEST
    if args.write_candidate:
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(json.dumps(candidate, ensure_ascii=False, indent=2)+'\n', encoding='utf-8', newline='\n')
    if json.loads(target.read_text(encoding='utf-8')) != candidate:
        raise ValueError('Candidate differs from exact source extraction')
    report = {'ok': True, 'scores': [{k: v for k, v in row.items() if k != 'received_score'} for row in candidate['scores']],
        'common_branch_mismatches': candidate['common_branch_mismatches'],
        'additional_continuation_branches': candidate['additional_continuation_branches'],
        'runtime_ready': False, 'godot_validator_run': False, 'listening_pass': False}
    if args.report:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
