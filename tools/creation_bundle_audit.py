"""Current 3D creation-game dependencies and pack audit; no legacy demo imports."""
from pathlib import Path
import hashlib
import json
import re
import subprocess
import zipfile

ROOT = Path(__file__).resolve().parents[1]
TEXT = {'.gd', '.tscn', '.tres', '.gdshader', '.gdshaderinc', '.json', '.cfg'}
RESOURCE = re.compile(r'''res://[^\s"'`)<>,\]}]+''')
PROVENANCE = (
    '资源/自然参考/README.md', '资源/建筑参考/README.md',
    '资源/建筑参考/庭院喷泉来源.md', '资源/自然参考/坡地伴石来源.md',
    '资源/建筑参考/石砌街屋来源.md', '资源/自然参考/湿砂河岸来源.md',
    '资源/自然参考/层理岩壁来源.md', '资源/自然参考/睡莲/README.md',
    '资源/自然参考/环境声/README.md',
    '资源/生活声/README.md', '资源/生活声/来源与处理.json',
)
REFERENCE_RECORDS = (
    '参考资料/Tiny-Glade逆向成品-v2/reports/reconstruction_grass2.md',
    '参考资料/Townscaper逆向成品/outputs/townscaper_interaction_presentation.md',
    '参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-game-systems/SEMANTIC_GUIDE.md',
)


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def run(args, log, cwd):
    with log.open('w', encoding='utf-8') as stream:
        result = subprocess.run([str(x) for x in args], cwd=cwd, stdout=stream,
                                stderr=subprocess.STDOUT, timeout=180)
    text = log.read_text(encoding='utf-8', errors='replace')
    if result.returncode or re.search(r'SCRIPT ERROR:|\bERROR:|Assertion failed', text):
        raise RuntimeError(f'Build check failed; retained evidence: {log}')


def runtime_dependencies():
    """Literal preload/load/shader includes plus the gallery's dynamic covers.

    Start from the real 3D scene, not from every file under scripts/. Developer
    editor plugins/autoload tooling are deliberately outside this game closure.
    """
    pending = ['scenes/city_creation.tscn', 'icon.svg']
    kept, missing = set(), set()
    while pending:
        name = pending.pop()
        if name in kept:
            continue
        path = ROOT / name
        if not path.is_file():
            missing.add(name)
            continue
        kept.add(name)
        if path.suffix not in TEXT:
            continue
        content = path.read_text(encoding='utf-8-sig')
        for resource in RESOURCE.findall(content):
            relative = resource[6:]
            target = ROOT / relative
            if target.is_dir():
                # The gallery concatenates this directory with catalog IDs.
                if relative.rstrip('/') == '资源/界面/示范河湾':
                    pending.extend(p.relative_to(ROOT).as_posix() for p in target.glob('example_*.png'))
                elif relative.rstrip('/') == '资源/自然参考/睡莲':
                    pending.extend('资源/自然参考/睡莲/' + leaf for leaf in ('叶.json', '花.json', '叶形.png', '花色.png'))
                elif relative.rstrip('/') == '资源/生活声':
                    pending.extend(p.relative_to(ROOT).as_posix() for p in target.glob('*.wav'))
                continue
            if relative == '资源/音乐/城市同步声部库.res' and (ROOT / '资源/音乐/城市同步声部库_轻量.res').is_file():
                continue  # Production prefers the complete portable bank; raw PCM is rebuildable.
            # Save defaults are user://; a missing literal res:// dependency is
            # a genuine packaging problem, not an asset to silently skip.
            pending.append(relative)
    return {'files': sorted(kept), 'missing': sorted(missing)}


def source_audit():
    graph = runtime_dependencies()
    if graph['missing']:
        raise RuntimeError('Missing current 3D resources: ' + ', '.join(graph['missing']))
    absent = [name for name in PROVENANCE + REFERENCE_RECORDS if not (ROOT / name).is_file()]
    if absent:
        raise RuntimeError('Missing source/provenance records: ' + ', '.join(absent))
    scripts = [name for name in graph['files'] if name.endswith('.gd')]
    legacy = [name for name in scripts if not Path(name).name.startswith('city_creation') and name != 'scripts/ui/valley_ui_theme.gd']
    return {'files': graph['files'], 'runtime_scripts': len(scripts),
            'shared_scripts': legacy,
            'provenance': list(PROVENANCE), 'reference_records': list(REFERENCE_RECORDS)}


def audit(pack, imported_root=None):
    imported_root = ROOT if imported_root is None else imported_root
    report = source_audit()
    with zipfile.ZipFile(pack) as archive:
        names = archive.namelist()
        members = set(names)
        forbidden = [name for name in names if name.startswith(
            ('资产/', 'tests/', 'tools/', 'native/', '文档/', '参考资料/', '验证记录/', '废弃/', '备份/', '交付/', '.git/', '资源/测试/'))
            or name.startswith('addons/')]
        if forbidden or len(names) != len(members) or archive.testzip():
            raise RuntimeError(f'Invalid creation resource archive: {forbidden}')
        missing = []
        textures = []
        for name in report['files']:
            if name in members:
                if name.endswith('.json') and archive.read(name) != (ROOT / name).read_bytes():
                    raise RuntimeError('Stale authored creation data: ' + name)
                continue
            sidecar = next((name + suffix for suffix in ('.remap', '.import') if name + suffix in members), None)
            if sidecar is None:
                missing.append(name)
                continue
            mapping = archive.read(sidecar).decode('utf-8')
            targets = re.findall(r'(?:^|\n)path(?:\.\w+)?="res://([^"\n]+)"', mapping)
            if not targets or any(target not in members for target in targets):
                missing.append(name)
                continue
            for target in targets:
                if target.endswith('.ctex'):
                    if sha(imported_root / target) != hashlib.sha256(archive.read(target)).hexdigest():
                        raise RuntimeError('Stale imported creation texture: ' + name)
                    textures.append({'path': name, 'packed_path': target})
        if missing:
            raise RuntimeError('Missing current 3D pack dependencies: ' + ', '.join(missing))
    return {'files': names, 'textures': textures, 'forbidden': forbidden,
            'runtime_dependencies': report['files'], 'provenance': report['provenance']}
