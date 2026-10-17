"""Build versioned continuous-world parameters; preserve deployed legacy data."""
from pathlib import Path
import argparse
import hashlib
import json
import math
import re

ROOT = Path(__file__).resolve().parents[1]
# Legacy runtime tables are isolated from the current gameplay specification.
SPEC = ROOT / '数据/兼容规格'
OUTPUT = ROOT / '数据/world_v2.json'


def read(name):
    return (SPEC / name).read_text(encoding='utf-8-sig')


def table(text, heading):
    if heading not in text:
        raise ValueError(f'Missing authoritative table: {heading}')
    section = text.split(heading, 1)[1].split('\n## ', 1)[0].split('\n### ', 1)[0]
    rows = [[re.sub(r'\*\*|`', '', cell.strip()) for cell in line.strip('|').split('|')]
            for line in section.splitlines()
            if line.startswith('|') and not re.fullmatch(r'[| :\-]+', line)]
    if len(rows) < 2:
        raise ValueError(f'Empty authoritative table: {heading}')
    return rows[1:]


def numbers(text):
    return [float(value) for value in re.findall(r'(?<![0-9.])-?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?', text.replace('−', '-'))]


def scalar_table(text, heading):
    result = {}
    for row in table(text, heading):
        key, value = row[:2]
        keys = [item.strip() for item in key.split('/')]
        values = numbers(value)
        if any(item in result for item in keys) or len(values) != len(keys):
            raise ValueError(f'Invalid numeric configuration row: {key}')
        result.update(zip(keys, values, strict=True))
    return result


def generate():
    docs = {p.name: read(p.name) for p in sorted(SPEC.glob('spec.*.md'))}
    space = scalar_table(docs['spec.space.md'], '## 表 SP8')
    terrain = scalar_table(docs['spec.terrain.md'], '## 表 T6')
    city = scalar_table(docs['spec.city.md'], '## 表 E7')
    score = scalar_table(docs['spec.audio.md'], '## 表 A26')
    required_space = {'schema_version', 'world_min', 'world_max', 'residential_radius',
                      'base_coupling', 'distance_sigma', 'gap_cutoff', 'industrial_factor',
                      'partial_occlusion', 'forest_factor', 'water_factor', 'comparison_tolerance',
                      'community_min', 'community_max', 'projection_x', 'projection_y',
                      'pan_divisor', 'pan_limit', 'near_neighbour_count',
                      'homogeneity_threshold', 'homogeneity_M', 'homogeneity_dv_scale'}
    if not required_space <= space.keys():
        raise ValueError(f'Missing SP8 keys: {required_space - space.keys()}')
    if space['schema_version'] != 2:
        raise ValueError('This generator supports continuous schema 2')
    a2 = dict(table(docs['spec.audio.md'], '## 表 A2'))
    a4 = dict(table(docs['spec.audio.md'], '## 表 A4'))
    musical = numbers(a2['BPM / 拍号 / 小节 / 乐句'])
    if len(musical) != 6:
        raise ValueError('A2 musical time requires six fields')
    timing = dict(bpm=musical[0], beats_per_bar=int(musical[1]),
                  bars_per_phrase=int(musical[4]), sample_rate=int(numbers(a4['PCM采样率'])[0]),
                  buffer_seconds=numbers(a4['生成缓冲长度'])[0])
    timing['phrase_frames'] = round(60 / timing['bpm'] * timing['beats_per_bar'] * timing['bars_per_phrase'] * timing['sample_rate'])
    harmony_text = docs['spec.harmony.md']
    def capture(pattern):
        match = re.search(pattern, harmony_text)
        if not match:
            raise ValueError(f'Missing harmony parameter: {pattern}')
        return float(match[1])
    harmony = dict(initial_vitality=capture(r'初始值 V_0 = ([\d.]+)'),
                   base_growth=capture(r'base_growth = \+([\d.]+)'), decay=capture(r'decay\s+= ([\d.]+)'),
                   decay_threshold=capture(r'当 R < ([\d.]+)'), net_change_cap=capture(r'单乐句净变化上限 = ±([\d.]+)'),
                   minimum_vitality=0, maximum_vitality=100,
                   empty_resonance=capture(r'无配对：R = ([\d.]+)'),
                   gray_entry=capture(r'进入：R < ([\d.]+)'), gray_exit=capture(r'退出：R > ([\d.]+)'),
                   collapse_phrases=int(capture(r'连续 ([\d.]+) 个乐句')))
    intervals = {}
    classes = [[0], [5, 7], [4, 9], [3, 8], [2, 10], [1, 11], [6]]
    for row, distances in zip(table(harmony_text, '## 表 B'), classes, strict=True):
        for distance in distances:
            intervals[str(distance)] = dict(score=numbers(row[2])[0], vitality_delta=numbers(row[3])[0], name=row[0])
    harmony['intervals'] = intervals
    bounds = numbers(re.search(r'V_next = clamp\(([^\n]+)\)', harmony_text)[1])[-2:]
    harmony['minimum_vitality'], harmony['maximum_vitality'] = bounds
    legacy_path = ROOT / '数据/spec_values.json'
    legacy = json.loads(legacy_path.read_text(encoding='utf-8'))
    # The existing synth is deliberately retained. Audit the immutable audio contract,
    # rather than regenerate legacy grid/growth parameters from the new world specs.
    if any(legacy['timing'][key] != timing[key] for key in ['bpm', 'sample_rate', 'buffer_seconds', 'bars_per_phrase']):
        raise ValueError('Legacy synth timing changed: migrate the shared audio contract explicitly')
    for key, value in intervals.items():
        if any(legacy['harmony']['intervals'][key][field] != value[field] for field in ['score', 'vitality_delta']):
            raise ValueError('Approved interval table B changed')
    result = dict(schema_version=2, world_model='continuous', space=space, terrain=terrain, city=city, score=score,
                  timing=timing, harmony=harmony,
                  legacy_audio_contract_sha256=hashlib.sha256(legacy_path.read_bytes()).hexdigest(),
                  sources={name: hashlib.sha256(text.encode('utf-8')).hexdigest() for name, text in docs.items()})
    result['distance_reference'] = {str(d): space['base_coupling'] * math.exp(-(d / space['distance_sigma'])**2)
                                    for d in [0, .5, 1, 1.5, 2, 3, 4]}
    return json.dumps(result, ensure_ascii=False, indent=2) + '\n'


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    expected = generate()
    if args.check:
        if not OUTPUT.is_file() or OUTPUT.read_text(encoding='utf-8') != expected:
            raise SystemExit('Stale world_v2.json: run python tools/build_spec_data.py')
        print('SPEC_DATA PASS: continuous schema 2 matches compatibility tables; legacy data preserved')
    else:
        OUTPUT.parent.mkdir(parents=True, exist_ok=True)
        OUTPUT.write_text(expected, encoding='utf-8', newline='\n')
        print(f'Generated {OUTPUT.relative_to(ROOT)}; legacy spec_values.json unchanged')
