"""Extract received music-comfort tables as candidates; never install or synthesize them."""
from pathlib import Path
import argparse
import hashlib
import json
import re

ROOT = Path(__file__).resolve().parents[1]
SOURCE = '文档/来源/20261030_Gemini_背景音乐柔和配器与长听品质_原稿.txt'
SHA256 = 'e93362d9e7ec6510b8367c4e70fd07ff5143351c7344311863a381bef3a42f4a'
CANDIDATE = '数据/作曲候选/Gemini柔和长听_部分谱与参数_v1.json'
ROLES = {'Foundation': ('foundation', 'bass', 1), 'Pulse': ('pulse', 'guitar', 2),
         'Lead': ('lead', 'flute', 3), 'Answer': ('answer', 'cello_harmonic', 2)}


def union_beats(events):
    merged = []
    for event in sorted(events, key=lambda row: row['beat']):
        a, b = event['beat'], event['beat'] + event['beats']
        if merged and a <= merged[-1][1]:
            merged[-1][1] = max(merged[-1][1], b)
        else:
            merged.append([a, b])
    return sum(b-a for a, b in merged)


def extract():
    raw = (ROOT / SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest() != SHA256:
        raise ValueError('Source changed: review the new original before extraction')
    sections = {'P0': [], 'P2': []}
    harmony = {'P0': [], 'P2': []}
    for line_number, line in enumerate(raw.decode('utf-8-sig').splitlines(), 1):
        match = re.match(r'^\| \*\*Bar (\d+)\*\*', line)
        if not match:
            continue
        bar = int(match[1])
        section = 'P0' if 1 <= bar <= 8 else 'P2' if 17 <= bar <= 24 else ''
        if not section:
            continue
        cells = line.split('|')
        harmony[section].append({'global_bar': bar, 'source_line': line_number,
                                 'raw_harmony_cell': cells[2].strip()})
        parts = re.split(r'• \*\*(Foundation|Pulse|Lead|Answer)', cells[4])
        found = set()
        for index in range(1, len(parts), 2):
            label, text = parts[index], parts[index+1]
            found.add(label)
            role, timbre, layer = ROLES[label]
            # Four numbers are explicitly written; timbre/role are context,
            # not invented fifth numeric values or imported runtime schema.
            for array in re.findall(r'\[([^\[\]]+)\]', text):
                fields = [piece.strip() for piece in array.split(',')]
                if len(fields) != 4 or not all(re.fullmatch(r'-?\d*\.?\d+', x) for x in fields):
                    continue
                beat, beats, midi, gain = map(float, fields)
                if not (0 <= beat < 32 and 0 < beats <= 8 and midi == int(midi) and 0 <= gain <= .18):
                    raise ValueError(f'Invalid candidate values at source line {line_number}')
                sections[section].append({'beat': beat, 'beats': beats, 'midi': int(midi),
                    'gain': gain, 'role': role, 'layer': layer, 'timbre': timbre,
                    'source_line': line_number, 'global_bar': bar})
        if found != set(ROLES):
            raise ValueError(f'Missing role label at source line {line_number}')
    if [len(harmony[s]) for s in ['P0', 'P2']] != [8, 8]:
        raise ValueError('Expected all received 16 table bars')
    statistics = {}
    for name, events in sections.items():
        lead = [e for e in events if e['role'] == 'lead']
        statistics[name] = {'events': len(events), 'lead_events': len(lead),
            'answer_events': sum(e['role'] == 'answer' for e in events),
            'lead_beats_union': union_beats(lead), 'lead_fraction': union_beats(lead)/32,
            'lead_midi_range': [min(e['midi'] for e in lead), max(e['midi'] for e in lead)],
            'lead_silent_global_bars': [h['global_bar'] for h in harmony[name]
                if not any(e['global_bar'] == h['global_bar'] for e in lead)]}
    parameters = []
    in_table = False
    for line_number, line in enumerate(raw.decode('utf-8-sig').splitlines(), 1):
        if line.startswith('| 音色 ID'):
            in_table = True
        elif in_table and not line.startswith('|'):
            in_table = False
        if in_table and line.startswith('| **'):
            parameters.append({'source_line': line_number, 'raw_cells':
                               [cell.strip() for cell in line.split('|')[1:-1]]})
    result = {'kind': 'music_comfort_partial_candidate', 'draft_format': 1,
        'runtime_ready': False, 'source': SOURCE, 'source_sha256': SHA256,
        'review': '文档/63_背景音乐柔和配器与长听审阅及施工映射.md',
        'received_end': '3.6 panning row truncated; no final implementation/listening chapter received',
        'coordinate': 'Section-local beats; 80 BPM, 0.75 seconds/beat; global_bar retained',
        'timbre_normalization': 'P0 explicit role timbres; abbreviated P2 roles inherit P0 solely for catalog context, not approved instrumentation',
        'sections': sections, 'raw_harmony_cells': harmony, 'statistics': statistics,
        'raw_timbre_parameter_rows': parameters,
        'unresolved': ['P0 summary claims 16.5 beats/5 Answer; actual tables 21/6',
            'P2 summary claims 6 Lead,9.5 beats,22 events; actual 7,11.5,24',
            'P2 global progression and Bar22 differ; final sus4 resolution lacks timed harmony',
            'P4/P5 prose conflicts with range/rest/harmony declarations; full six-section v3 absent',
            'All DSP/mix/sample claims require versioned routing, actual audio and listening review']}
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write-candidate', action='store_true')
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    candidate = extract()
    if args.write_candidate:
        target = ROOT / CANDIDATE
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(json.dumps(candidate, ensure_ascii=False, indent=2)+'\n', encoding='utf-8', newline='\n')
    existing = json.loads((ROOT / CANDIDATE).read_text(encoding='utf-8'))
    if existing != candidate:
        raise ValueError('Candidate differs from deterministic source extraction')
    report = {'ok': True, 'source_sha256': SHA256, 'source_bytes': (ROOT/SOURCE).stat().st_size,
              'candidate': CANDIDATE, 'statistics': candidate['statistics'],
              'parameter_rows': len(candidate['raw_timbre_parameter_rows']),
              'runtime_ready': False, 'audio_synthesized': False, 'listening_pass': False}
    if args.report:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
