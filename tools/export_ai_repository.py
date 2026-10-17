"""Export source/design/research text into a separate, size-bounded repository.

Never removes or modifies source files. The destination must be new or empty.
Git history, art/audio assets and large reverse-engineering dumps are excluded.
"""
from pathlib import Path
import argparse
import collections
import hashlib
import json
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
LIMIT = 55_000_000  # Leave room for manifests and the new Git object database.
CODE = {'.gd', '.uid', '.tscn', '.tres', '.gdshader', '.gdshaderinc', '.cfg',
        '.py', '.cpp', '.c', '.h', '.hpp', '.json', '.cs', '.toml', '.md',
        '.txt', '.cmd', '.ps1', '.sh', '.yml', '.yaml', '.js', '.ts'}
TEXT = CODE | {'.csv', '.tsv', '.mmd', '.dot', '.jsonl', '.xml', '.ron',
               '.comp', '.vert', '.frag', '.glsl', '.shader', '.slang', '.log'}
SOURCE_DIRS = {'scripts', 'scenes', 'tests', 'tools', 'addons', 'native', '数据'}
BULK = {'native-project-pseudocode', 'reconstruction_shader_layout',
        'reconstruction_shader_layout_final', 'shader_reflection', '备份',
        '废弃', 'work', 'discarded', '__pycache__', 'analysis-databases'}
DOCUMENT_SOURCE_PACKAGES = {'01_全套重构文档_MD版', '02_全套重构文档_TXT纯文本版',
                            '03_可直接覆盖到仓库根目录'}


def priority(path: Path, size: int):
    parts, suffix = path.parts, path.suffix.lower()
    if any(p in BULK for p in parts): return None
    if len(parts) == 1:
        return 0 if suffix in {'.md', '.godot', '.cfg', '.cmd'} or path.name in {'.gitattributes', '.editorconfig'} else None
    if parts[0] == '文档':
        # Export the corrected active blueprint/guides once. Original user
        # packages remain in the full workspace, including their code templates.
        if len(parts) > 1 and parts[1] in DOCUMENT_SOURCE_PACKAGES: return None
        return 0 if suffix in TEXT else None
    if parts[0] in SOURCE_DIRS:
        return 0 if suffix in CODE or path.name in {'SConstruct', 'LICENSE', 'LICENSE.txt'} else None
    if parts[0] in {'资源', '资产'}:
        return 2 if suffix == '.md' or '许可记录' in parts and suffix == '.txt' else None
    if parts[0] == '验证记录':
        return 3 if suffix in {'.md', '.txt', '.json', '.log', '.csv'} and size <= 128_000 else None
    if parts[0] != '参考资料': return None
    if len(parts) > 1 and parts[1].startswith('Cities Skylines II'):
        # Keep the new reverse-engineering project together: reports, targeted
        # decompiled code, manifests and small CIL evidence are all useful to
        # the AI workflow, while large captures remain local.
        return 1 if (suffix in TEXT or suffix in {'.bin', '.il'}) and size <= 1_000_000 else None
    if suffix == '.md': return 1
    if suffix not in TEXT and not path.name.endswith('.jsonl.gz'): return None
    if size > 1_000_000: return None
    if any(p.startswith('shaders-') and p != 'shaders-source' for p in parts): return None
    if len(parts) > 1 and parts[1].startswith('Foundation'):
        return 4 if 'foundation-game-systems' in parts or 'foundation-systems' in parts else 8
    if len(parts) > 1 and parts[1].startswith('Tiny'):
        if 'evidence' in parts and size > 128_000: return None
        if 'evidence' in parts and any(p.startswith(('reconstruction_grass', 'reconstruction_wall', 'reconstruction_roof', 'reconstruction_resources')) for p in parts): return 4
        return 5 if 'reconstruction' in parts or 'tools' in parts else 9
    if len(parts) > 1 and parts[1].startswith('Townscaper'):
        return 7 if 'native_application' in parts or 'native_funclets' in parts else 4
    return 6


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    dest = args.output.resolve()
    if dest == ROOT or ROOT in dest.parents and '备份' not in dest.relative_to(ROOT).parts:
        raise SystemExit('Export only to a separate directory or the local 备份 folder.')
    if dest.exists() and any(dest.iterdir()): raise SystemExit('Destination must be empty.')
    tracked = subprocess.check_output(['git', 'ls-files', '-z'], cwd=ROOT).decode('utf-8').split('\0')
    paths = {p for p in tracked if p and (ROOT / p).is_file()}
    for folder in SOURCE_DIRS:
        paths.update(p.relative_to(ROOT).as_posix() for p in (ROOT / folder).rglob('*') if p.is_file() and p.suffix.lower() in CODE and not any(k in BULK for k in p.relative_to(ROOT).parts))
    candidates, omitted = [], []
    for name in sorted(paths):
        p = Path(name)
        size = (ROOT / p).stat().st_size
        rank = priority(p, size)
        if name == 'README.md': continue  # Use a README specific to this export.
        if rank is None:
            if name.startswith('参考资料/'): omitted.append({'path': name, 'bytes': size, 'reason': 'asset_or_bulk_data'})
        else: candidates.append((rank, name, size))
    selected, total = [], 0
    for rank, name, size in sorted(candidates):
        if total + size > LIMIT:
            omitted.append({'path': name, 'bytes': size, 'reason': 'size_budget'})
            continue
        selected.append((name, size)); total += size
    dest.mkdir(parents=True, exist_ok=True)
    included, summary = [], collections.defaultdict(lambda: {'files': 0, 'bytes': 0})
    for name, size in selected:
        target = dest / name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(ROOT / name, target)
        included.append({'path': name, 'bytes': size, 'sha256': hashlib.sha256(target.read_bytes()).hexdigest()})
        group = '/'.join(Path(name).parts[:2]) if name.startswith('参考资料/') else Path(name).parts[0]
        summary[group]['files'] += 1; summary[group]['bytes'] += size
    head = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=ROOT).decode().strip()
    manifest = {'schema': 1, 'source_base_commit': head, 'snapshot': 'current working source, no old history',
                'payload_limit_bytes': LIMIT, 'payload_bytes': total,
                'summary': dict(summary), 'included': included, 'omitted_research': omitted}
    ai = dest / 'AI资料'; ai.mkdir(exist_ok=True)
    (ai / '参考资料发布清单.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    (ai / 'README.md').write_text('''# 精简 AI 协作资料

本仓库是当前工作源码和设计资料快照，文件预算55 MB，独立Git历史。
完整文档和四个研究库的全部已入库Markdown报告保留原路径；关键代码、行为图、语义表和小型证据按发布清单选入。
Tiny Glade的全量原生函数伪代码、重复shader反射/布局、大型资源/调用图、原生数据库、艺术/音频原件、截图和旧Git历史不在此快照中。
Shader源代码与程序几何属于技术实现，已保留；它们不含模型、纹理或声音素材。

[发布清单](参考资料发布清单.json)列出路径、字节数和SHA256，以及未包含的研究文件。
研究报告内链接指向未包含的大文件时，应先查同目录机制报告；不要把缺少素材等同于研究结论失效。
本库适合设计决策、源码审阅和继续实现；完整旧场景、素材依赖的测试和原生模块运行须从完整项目恢复依赖。
当前Godot源码包含仍在开发的功能，当前状态与验证范围以根PROJECT.md为准。
''', encoding='utf-8')
    (dest / 'README.md').write_text('''# 共鸣之城 · AI源码与设计资料

当前Godot城市音乐项目的精简协作快照。独立私有仓库 `resonance-city-ai`；源码/资料与独立Git数据总大小控制在100 MB内。

从 [AI_START_HERE](AI_START_HERE.md) 开始，先读 [PROJECT](PROJECT.md)，再按 [参考索引](文档/参考索引.md) 阅读四个逆向研究库。

- [现行设计文档](文档/README.md)：目标、玩法、声音、美术、地形、城市和验收规格。
- [Tiny Glade研究](参考资料/Tiny-Glade逆向成品-v2/README.md)：首选美术、道路、水岸和植被机制。
- [Foundation研究](参考资料/Foundation逆向成品-2026-10-13/DELIVERY_INDEX.md)：用途、职业、需求、生产与真实居民行为。
- [Townscaper研究](参考资料/Townscaper逆向成品/README.md)：局部拓扑、生成、交互和编辑历史。
- [Cities: Skylines II研究](参考资料/Cities%20Skylines%20II逆向分析-六项底层机制-2026-10-17/README.md)：预览提交、增量失效、时间边界、身份序列化、随机稳定性和资产编译链。
- [精确资料范围](AI资料/README.md)：发布清单、校验与未包含项。

`scripts/`、`scenes/`、`native/`、`addons/`、`tests/`和`tools/`保留代码；程序几何、着色器和原创程序音乐代码仍在。
剔除了美术素材、声音/视频、截图、二进制插件、导入缓存、大型分析数据、独立备份及完整旧Git历史。
这是源码与研究资料仓库。由于素材和编译二进制已移除，它不提供完整项目的直接运行保证；Godot 4.7.2及完整运行依赖见原项目。

完整项目仓库：[resonance-city](https://github.com/Lbwnb6969/resonance-city)。未包含资料留在完整项目/本地原件中，源项目未被删除或修改。
''', encoding='utf-8')
    (dest / '.gitignore').write_text('.godot/\n.mcp.json\n__pycache__/\n*.pyc\n/备份/\n/废弃/\n/交付/\n', encoding='utf-8')
    (dest / '.gitattributes').write_text('* -text\n', encoding='utf-8')  # Preserve manifest byte hashes across clones.
    entry = dest / 'AI_START_HERE.md'
    entry.write_text(entry.read_text(encoding='utf-8').replace('的 `local_only`', '的 `omitted_research`') + '\n## 本仓库的精简边界\n\n当前仓库是独立的源码/设计资料快照，未包含美术素材、声音/截图、大型分析转储和旧Git历史。参考报告和现行文档保留原路径；精确内容及校验见 [发布清单](AI资料/参考资料发布清单.json)，运行依赖见根README。\n', encoding='utf-8')
    for name in ['AI_START_HERE.md', '.gitattributes']:
        target = dest / name
        row = next(row for row in included if row['path'] == name)
        row.update(bytes=target.stat().st_size, sha256=hashlib.sha256(target.read_bytes()).hexdigest())
    manifest['payload_bytes'] = sum(row['bytes'] for row in included)
    (ai / '参考资料发布清单.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    tree_bytes = sum(p.stat().st_size for p in dest.rglob('*') if p.is_file())
    if tree_bytes >= 65_000_000: raise SystemExit('Export exceeds the tree budget.')
    print(json.dumps({'output': str(dest), 'files': len(included), 'payload_bytes': total,
                      'tree_bytes': tree_bytes, 'summary': dict(summary)}, ensure_ascii=False))


if __name__ == '__main__': main()
