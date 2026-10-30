"""Export a current, music-focused UTF-8 design snapshot; never edit source assets."""
from pathlib import Path
import argparse
import datetime as dt
import hashlib
import json
import subprocess

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_REFERENCE = ROOT.parent / 'AI参考包' / '共鸣之城_Gemini参考_精简_20261030_152222.txt'
DOCS = [
    '文档/Gemini_音乐作曲委托.md', 'PROJECT.md', 'AI_START_HERE.md',
    '文档/54_V7_最终施工改造总案.md', '文档/56_free成长权益映射.md',
    '文档/工程维护.md', '文档/53_功能区与母曲编配施工记录.md',
    '文档/Demo快速开始.md', 'project.godot',
]
PATTERNS = [
    'scripts/audio/*.gd', 'scripts/ui/*score*.gd',
    'scripts/world/*contract.gd', 'scripts/world/*role_seed.gd',
    'scripts/world/city_creation_functional_zones.gd',
    'scripts/world/city_creation_prototype_resonance.gd',
    'scripts/world/city_creation_score_modifiers.gd',
    'scripts/world/city_creation_spatial_voice.gd',
    '数据/母曲/*.json', '数据/原创谱材/河湾练习_v1/*.json',
    'tests/test_city_creation_*score*.gd',
    'tests/test_city_creation_master_performance.gd',
    'tools/check_creation_continuous_master_live.gd',
]


def git(*args):
    return subprocess.check_output(['git', *args], cwd=ROOT).decode('utf-8')


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference', type=Path, default=DEFAULT_REFERENCE)
    parser.add_argument('--out-dir', type=Path, default=ROOT.parent / 'AI参考包')
    args = parser.parse_args()
    reference = args.reference.resolve()
    original = reference.read_bytes()
    stamp = dt.datetime.now(dt.timezone(dt.timedelta(hours=8))).strftime('%Y%m%d_%H%M%S')
    args.out_dir.mkdir(parents=True, exist_ok=True)
    dest = args.out_dir / f'共鸣之城_Gemini音乐参考_{stamp}.txt'
    manifest_path = dest.with_suffix('.manifest.json')
    head = git('rev-parse', 'HEAD').strip()
    status = git('status', '--porcelain=v1', '-z', '--untracked-files=all')
    dirty = set()
    rows = iter(status.split('\0'))
    for row in rows:
        if row:
            dirty.add(row[3:])
            if 'R' in row[:2] or 'C' in row[:2]:
                next(rows, '')
    selected = list(DOCS)
    for pattern in PATTERNS:
        selected.extend(p.relative_to(ROOT).as_posix() for p in sorted(ROOT.glob(pattern)))
    selected = list(dict.fromkeys(selected))
    tracked = set(filter(None, git('ls-files', '-z').split('\0')))
    context_raw = {name: (ROOT / name).read_bytes() for name in ('ai_feature_backlog.json', 'ai_progress.log')}
    backlog = json.loads(context_raw['ai_feature_backlog.json'].decode('utf-8-sig'))
    progress = '\n'.join(context_raw['ai_progress.log'].decode('utf-8-sig').splitlines()[-30:])
    chunks = [
        '共鸣之城：Gemini音乐作曲参考精简包',
        f'快照：{stamp}（北京时间）；Git HEAD：{head}',
        f'旧包：{reference.name}；SHA256：{sha(original)}；原件保持。',
        '用途：具体作曲、逐小节谱面与空间编配设计；不是可运行工程或听感证明。',
        '事实优先级：PROJECT/最近验收日志说明状态；54为整合规格，56为权益；源码说明实现。',
        '旧55/57已并入54，不沿用旧包停止点；M84～M86未整体验收，连续母曲源码包含未提交施工。',
        '工作区快照不等于远端已发布，谱面合法/PCM零削波不等于已经听评。',
        '相较旧包聚焦音乐，省略State/Demo/Renderer/Life巨型主文件及大量非音乐源码；不删除本地工程。',
        '以下选入文本完整保留非空行；JSON只压缩空白。未包含音频、模型、原图和个人存档。',
        '\n===== 工作区未提交路径 =====\n' + '\n'.join(sorted(dirty)),
        '\n===== 最近进度日志（末30行） =====\n' + progress,
        '\n===== holistic_integration（原结构，非历史milestones全表） =====\n'
        + json.dumps(backlog['holistic_integration'], ensure_ascii=False, separators=(',', ':')),
    ]
    manifest = []
    for name in selected:
        raw = (ROOT / name).read_bytes()
        content = raw.decode('utf-8-sig')
        if name.endswith('.json'):
            content = json.dumps(json.loads(content), ensure_ascii=False, separators=(',', ':'))
        else:
            content = '\n'.join(line.rstrip() for line in content.splitlines() if line.strip())
        state = '未提交施工快照，不据此判为验收完成' if name in dirty else 'HEAD已跟踪内容'
        chunks.append(f'\n===== {name} [{state}] =====\n{content}')
        manifest.append(dict(path=name, bytes=len(raw), sha256=sha(raw),
                             rendered_sha256=sha(content.encode('utf-8')), dirty=name in dirty))
    omitted = sorted(p for p in tracked - set(selected)
                     if p.startswith(('scripts/', 'scenes/', '数据/', '文档/', 'tests/', 'tools/'))
                     and p.endswith(('.gd', '.gdshader', '.json', '.md', '.tscn', '.py')))
    chunks.append('\n===== 省略文本索引：缺页不代表功能不存在 =====\n' + '\n'.join(omitted))
    text = '\n'.join(chunks) + '\n'
    # Verify every source again: concurrent construction must not silently mix revisions.
    for item in manifest:
        if sha((ROOT / item['path']).read_bytes()) != item['sha256']:
            raise RuntimeError('Source changed during export: ' + item['path'])
    for name, raw in context_raw.items():
        if (ROOT / name).read_bytes() != raw:
            raise RuntimeError('Context changed during export: ' + name)
    if git('rev-parse', 'HEAD').strip() != head or git('status', '--porcelain=v1', '-z', '--untracked-files=all') != status:
        raise RuntimeError('Git state changed during export; rerun for a coherent snapshot')
    if reference.read_bytes() != original:
        raise RuntimeError('Reference changed during export')
    with dest.open('x', encoding='utf-8', newline='\n') as stream:
        stream.write(text)
    report = dict(head=head, timestamp=stamp, reference=str(reference), reference_sha256=sha(original),
                  output=str(dest.resolve()), output_sha256=sha(dest.read_bytes()),
                  output_bytes=dest.stat().st_size, original_bytes=len(original),
                  selected=manifest, omitted_paths=omitted, dirty_paths=sorted(dirty),
                  context_sha256={name: sha(raw) for name, raw in context_raw.items()},
                  verification='All selected source hashes rechecked; no game/audio tests run')
    with manifest_path.open('x', encoding='utf-8', newline='\n') as stream:
        json.dump(report, stream, ensure_ascii=False, indent=2)
        stream.write('\n')
    print(json.dumps({k: report[k] for k in ('output', 'output_bytes', 'original_bytes', 'output_sha256')}, ensure_ascii=False))


if __name__ == '__main__':
    main()
