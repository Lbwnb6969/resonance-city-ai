"""Recover the design subset when construction happens in a full-repository clone."""
from pathlib import Path
import json

MANIFEST = '数据/完整库省略清单.json'
RAW_BANK = '资源/音乐/城市同步声部库.res'
FULL_ONLY_METADATA = ('数据/音乐资产/目录/', '数据/音乐资产/游戏音乐包/20261103_evening_v1/',
    '文档/来源/20261031_Gemini_明暗双线与AI储备_原稿.txt',
    '文档/来源/20261031_Gemini_明线深审与储备补充_原稿.txt',
    '文档/来源/20261031_Gemini_渐进内容储备深化与首批生产_原稿.txt')
DESIGN_REFERENCE_ENTRIES = {
    '参考资料/Foundation逆向成品-2026-10-13/DELIVERY_INDEX.md',
    '参考资料/Tiny-Glade逆向成品-v2/README.md',
    '参考资料/Townscaper逆向成品/README.md',
}


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
    # Detailed reference code and superseded/offline music reports stay in
    # origin. Keep current runtime manifests, metadata and reference entry docs.
    return {name for name in selected if not name.startswith(FULL_ONLY_METADATA)
            and (not name.startswith('参考资料/') or name in DESIGN_REFERENCE_ENTRIES)}
