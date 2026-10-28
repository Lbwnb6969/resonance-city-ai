"""Recover the design subset when construction happens in a full-repository clone."""
from pathlib import Path
import json

MANIFEST = '数据/完整库省略清单.json'
RAW_BANK = '资源/音乐/城市同步声部库.res'


def design_paths(root, files):
    marker = root / MANIFEST
    if not marker.is_file():
        return set(files)
    baseline = set(json.loads(marker.read_text(encoding='utf-8'))['design_files'])
    selected = baseline & set(files)
    core = {'scripts', 'scenes', 'tests', 'tools', '文档', '数据', 'addons', 'song-analysis'}
    retired = ('资源/P0城市/', '资源/Demo城市/', '资源/精制河湾/', '资源/美术候选/',
               '资源/风格小景/', '资源/时代城市/', '资源/古典建筑候选/', '资源/街坊建筑变体/',
               '资源/首作声音路线/', '资源/测试/', '资源/着色器/')
    for name in files:
        if name == MANIFEST or '__pycache__' in Path(name).parts:
            continue
        if name.split('/')[0] in core or (name.startswith('资源/') and name != RAW_BANK and not name.startswith(retired)):
            selected.add(name)
    return selected
