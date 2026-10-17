"""Prepare a small visual review set; never modify P0 or Demo source images."""
from pathlib import Path
import copy
import hashlib
import json
import sys

import numpy as np
from PIL import Image

sys.dont_write_bytecode = True
from prepare_demo_art import COLORS, rgb

ROOT = Path(__file__).resolve().parents[1]
BASE = ROOT / '资源/风格小景'
PRODUCTION = ROOT / '资产/03_入库/风格小景'
SELECTED = ['residential_building_type_b_02_base', 'residential_compound_gable_01',
            'residential_compound_terrace_01', 'tree_tree_small_01_base',
            'tree_tree_large_02_base', 'decoration_planter_02_base',
            'decoration_light_square_04_base']


def main():
    original = json.loads((ROOT / '资源/P0城市/manifest.json').read_text(encoding='utf-8'))
    demo = json.loads((ROOT / '资源/Demo城市/manifest.json').read_text(encoding='utf-8'))
    all_entries = {e['id']: e for e in original['entries']}
    all_entries.update({e['id']: e for e in demo['entries']})
    palette = json.loads((ROOT / '资源/P0城市/palette.json').read_text(encoding='utf-8'))
    old_colors = np.array([rgb(e['hex']) for e in palette], dtype=np.float32)
    new_colors = np.array([rgb(c) for c in COLORS], dtype=np.float32)
    entries = []
    for identifier in SELECTED:
        entry = copy.deepcopy(all_entries[identifier])
        source = ROOT / entry['texture']
        rgba = np.array(Image.open(source).convert('RGBA'))
        if entry['category'] in ('tree', 'decoration') and 'lighting' not in entry:
            indexed = np.array(Image.open(ROOT / entry['indexed_master']).convert('RGBA'))
            assert indexed.shape == rgba.shape
            slots = np.clip(np.rint((indexed[..., 0].astype(np.float32)-8)/10), 0, 23).astype(np.int32)
            before = rgba[..., :3].astype(np.float32) @ [.2126, .7152, .0722]
            base = old_colors[slots] @ [.2126, .7152, .0722]
            shade = .78+.22*np.clip(before/np.maximum(base, 1), 0, 1.3)
            rgba[..., :3] = np.clip(new_colors[slots]*shade[..., None], 0, 255).astype(np.uint8)
            rgba[rgba[..., 3] == 0, :3] = 0
        for directory in (BASE, PRODUCTION):
            (directory/'整图').mkdir(parents=True, exist_ok=True)
            Image.fromarray(rgba).save(directory/'整图'/f'{identifier}.png')
        entry['source_texture'] = str(source.relative_to(ROOT)).replace('\\', '/')
        entry['source_texture_sha256'] = hashlib.sha256(source.read_bytes()).hexdigest()
        entry['texture'] = f'资源/风格小景/整图/{identifier}.png'
        entry['texture_sha256'] = hashlib.sha256((ROOT/entry['texture']).read_bytes()).hexdigest()
        entry['availability'] = 'visual_review_candidate; not_a_frozen_style_standard'
        entry['processing'] = 'Retained Demo building, or P0 indexed slot -> same pastel palette; alpha/origin retained'
        entries.append(entry)
    manifest = {'schema_version': 1, 'camera': original['camera'], 'entries': entries,
                'human_art': 'PENDING', 'palette': COLORS,
                'purpose': 'Small style review scene; existing gameplay is unchanged'}
    for directory in (BASE, PRODUCTION):
        (directory/'manifest.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(f'STYLE_FRAME prepared {len(entries)} images from retained sources')


if __name__ == '__main__':
    main()
