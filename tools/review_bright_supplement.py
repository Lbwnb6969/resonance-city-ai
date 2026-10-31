"""Catalog the supplied bright-line supplement without installing its patches."""
from pathlib import Path
import argparse
import hashlib
import json
import re

ROOT = Path(__file__).resolve().parents[1]
SOURCE = '文档/来源/20261031_Gemini_明线深审与储备补充_原稿.txt'
HASH = 'a86f7cc9a72fb4de1c8e1bcabfd4f378d23e92162f2bce1fbec70db10b3cc46d'
DEST = '数据/美术候选/Gemini明线深审_建筑与质感储备_v1.json'


def extract():
    raw = (ROOT/SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest() != HASH:
        raise ValueError('Supplement changed: review the new original')
    lines = raw.decode('utf-8-sig').splitlines()
    prototypes = []
    for number, line in enumerate(lines, 1):
        if 196 <= number <= 207:
            identifier = re.search(r'\*\*`([a-z_]+)`\*\*', line)
            if not identifier:
                raise ValueError('Expected all twelve prototype rows')
            prototypes.append({'id': identifier[1], 'source_line': number, 'raw': line})
    if len(prototypes) != 12 or len({p['id'] for p in prototypes}) != 12:
        raise ValueError('Prototype identity inventory differs')
    palettes = re.findall(r'([a-z]+_[a-z]+)（', lines[215])
    if len(palettes) != 6:
        raise ValueError('Expected six named palette candidates')
    return {'kind': 'bright_line_supplement_candidate', 'draft_format': 1, 'runtime_ready': False,
        'source': SOURCE, 'source_sha256': HASH,
        'review': '文档/65_明暗双线与AI储备审阅及施工映射.md',
        'prototype_rows': prototypes, 'palette_candidate_ids': palettes,
        'window_layers_raw': [{'source_line': i, 'raw': lines[i-1]} for i in range(103, 107)],
        'specular_patch_raw': '\n'.join(lines[129:137]),
        'morphology_slot_rows_raw': [{'source_line': i, 'raw': lines[i-1]} for i in range(171, 177)],
        'stages_raw': [{'source_line': i, 'raw': lines[i-1]} for i in range(249, 253)],
        'unresolved': ['cozy_progression is a second draft name, not a second runtime switch',
            'do not change house.seed to reroll new details or assume unchanged old appearance',
            'recessed glass needs real wall openings; shared materials do not guarantee unchanged draw calls',
            'Blinn-Phong candidate is not GGX, COLOR.a has no automatic AO binding',
            '12 prototype labels do not imply support for geometry/roles/sound, old candidate aliases require consolidation',
            'UNORM8 base-color spacing does not prove all 27 derived recipe identities or a universal fast path']}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write-candidate', action='store_true')
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    value = extract()
    target = ROOT/DEST
    if args.write_candidate:
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(json.dumps(value, ensure_ascii=False, indent=2)+'\n', encoding='utf-8', newline='\n')
    if json.loads(target.read_text(encoding='utf-8')) != value:
        raise ValueError('Stored catalog differs from exact source extraction')
    report = {'ok': True, 'source_sha256': HASH, 'source_bytes': (ROOT/SOURCE).stat().st_size,
        'prototype_ids': [p['id'] for p in value['prototype_rows']],
        'palette_ids': value['palette_candidate_ids'], 'window_layers': len(value['window_layers_raw']),
        'runtime_ready': False, 'shader_compiled': False, 'game_run': False, 'image_quality_pass': False}
    if args.report:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
