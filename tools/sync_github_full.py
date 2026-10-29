"""Publish the construction repository to origin/main under 1 GB.

Preserve every design-repository input, all project code/resources and reference
source first; omit rebuildable caches and large reference payloads with a manifest.
Prepare and push use a separate index and never change local HEAD or work files.
"""
from pathlib import Path
import argparse
import collections
import datetime
import hashlib
import json
import os
import subprocess
from github_repository_roles import design_paths

ROOT = Path(__file__).resolve().parents[1]
GIT = ROOT / '.git'
OUT = ROOT / '验证记录/GitHub完整库同步'
WORK = GIT / 'full-sync'
REMOTE = 'origin'
URL = 'https://github.com/Lbwnb6969/resonance-city.git'
REF = 'refs/full-sync/candidate'
EXCLUDED = {'废弃', '验证记录', '资产', '备份', 'UI', '新文档', 'AI资料', 'work', '.venv', '.pytest_cache', '.mypy_cache', '.ruff_cache'}
LOCAL_ONLY_FILES = {'.mcp.json'}
ANALYSIS_LOCAL_DIRS = {'.venv', 'work', 'input', 'results', 'deprecated', 'backups'}
ANALYSIS_MEDIA = {'.mp3', '.wav', '.flac', '.m4a', '.ogg', '.opus', '.aac', '.aif', '.aiff', '.wma', '.mp4'}
MAX_BYTES = 1_000_000_000
INPUT_BUDGET = 930_000_000  # Leave room for the published omission manifest.
MAX_FILE = 95_000_000
MANIFEST = '数据/完整库省略清单.json'
TEXT = {'.md', '.gd', '.gdshader', '.gdshaderinc', '.cs', '.lua', '.glsl', '.shader', '.py', '.c', '.h',
        '.cpp', '.hpp', '.js', '.ts', '.sh', '.txt', '.cfg', '.ini', '.toml', '.xml',
        '.yaml', '.yml', '.html', '.svg', '.ps1', '.bat', '.cmd', '.tres', '.tscn',
        '.il', '.cil'}


def git(*args, data=None, env=None):
    result = subprocess.run(['git', *args], cwd=ROOT, input=data, env=env,
                            stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if result.returncode:
        raise RuntimeError(result.stderr.decode('utf-8', errors='replace'))
    return result.stdout


def value(*args):
    return git(*args).decode('utf-8').strip()


def save(name, data):
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / name).write_text(json.dumps(data, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')


def ready():
    global GIT, WORK
    if value('remote', 'get-url', REMOTE) != URL:
        raise RuntimeError('Full repository origin differs from the configured destination.')
    if value('status', '--porcelain', '--untracked-files=no'):
        raise RuntimeError('Commit authored project changes before preparing the full repository.')
    GIT = Path(value('rev-parse', '--absolute-git-dir'))
    WORK = GIT / 'full-sync'
    WORK.mkdir(parents=True, exist_ok=True)


def inventory():
    result = {}
    for directory, dirs, files in os.walk(ROOT):
        base = Path(directory)
        if base == ROOT:
            dirs[:] = [d for d in dirs if d not in EXCLUDED | {'.godot'}]
        dirs[:] = [d for d in dirs if d not in {'.git', '__pycache__'}]
        if base == ROOT / 'song-analysis':
            dirs[:] = [d for d in dirs if d not in ANALYSIS_LOCAL_DIRS]
        for name in files:
            path = base / name
            relative = path.relative_to(ROOT)
            if name == '.git' or name.endswith('.pyc') or relative.as_posix() in LOCAL_ONLY_FILES:
                continue
            if relative.parts[0] in {'tools', 'tests'} and name.endswith('.gd.uid'):
                continue
            if relative.parts[0] == 'song-analysis' and (path.suffix.lower() in ANALYSIS_MEDIA or
                    relative.as_posix() == 'song-analysis/tools/essentia_streaming_extractor_music.exe'):
                continue
            stat = path.stat()
            result[path.relative_to(ROOT).as_posix()] = [stat.st_size, stat.st_mtime_ns]
    return result


def blob(data):
    return git('hash-object', '-w', '--stdin', data=data).decode().strip()


def selection(items):
    tracked = design_paths(ROOT, set(filter(None, git('ls-files', '-z').decode().split('\0'))))
    kept, omitted, optional = set(), {}, []
    total = 0
    for path, facts in items.items():
        size = facts[0]
        if size >= MAX_FILE:
            omitted[path] = [size, 'large_rebuildable_or_reference_payload']
            continue
        project = path.split('/')[0] not in {'参考资料', 'UI'}
        if path in tracked or project:
            kept.add(path)
            total += size
        else:
            if any(part in {'work', 'discarded', '备份', 'verified-il'} for part in Path(path).parts):
                omitted[path] = [size, 'reference_work_snapshot_or_duplicate']
                continue
            source = Path(path).suffix.lower() in TEXT and size <= 20_000_000
            if not source:
                omitted[path] = [size, 'reference_bulk_data_or_media_local_original']
                continue
            optional.append((0, size, path))
    if total > INPUT_BUDGET:
        raise RuntimeError('Required project inputs exceed the full repository budget.')
    for _, size, path in sorted(optional):
        if total + size <= INPUT_BUDGET:
            kept.add(path)
            total += size
        else:
            omitted[path] = [size, 'reference_payload_budget']
    absent = tracked - set(items)
    if absent:
        raise RuntimeError('Tracked project inputs absent from inventory: '+', '.join(sorted(absent)))
    missing = tracked - kept
    if missing:
        raise RuntimeError('Required design inputs were excluded: '+', '.join(sorted(missing)))
    return kept, omitted


def checkpoint(label, commit):
    day = datetime.datetime.now().strftime('%Y%m%d')
    tag = f'backup/{label}-{day}-{commit[:8]}'
    existing = subprocess.run(['git', 'rev-parse', '--verify', 'refs/tags/'+tag], cwd=ROOT,
                              stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    if existing.returncode:
        git('tag', tag, commit)
    return tag


def staging_paths(items, kept):
    total, selected = collections.Counter(), collections.Counter()
    for name in items:
        for parent in Path(name).parents:
            if parent == Path('.'):
                continue
            key = parent.as_posix()
            total[key] += 1
            if name in kept:
                selected[key] += 1
    covered = set()
    for name in sorted(selected, key=lambda p: (p.count('/'), p)):
        if selected[name] == total[name] and selected[name] > 1 and not any(p.as_posix() in covered for p in Path(name).parents):
            covered.add(name)
    leaves = {p for p in kept if not any(parent.as_posix() in covered for parent in Path(p).parents)}
    targets = [':(top,literal)'+p for p in sorted(covered | leaves)]
    return targets + [':(top,glob,exclude)**/__pycache__/**', ':(top,glob,exclude)**/*.pyc']


def prepare():
    ready()
    git('fetch', '--no-tags', REMOTE, 'main')
    source = value('rev-parse', 'HEAD')
    parent = value('rev-parse', 'FETCH_HEAD')
    items = inventory()
    kept, omitted = selection(items)
    attrs = (ROOT / '.gitattributes').read_bytes()
    attr_blob = blob(attrs)
    attr_tree = git('mktree', data=f'100644 blob {attr_blob}\t.gitattributes\n'.encode()).decode().strip()
    index_env = dict(os.environ, GIT_INDEX_FILE=str(WORK / 'index'), GIT_ATTR_SOURCE=attr_tree)
    git('read-tree', '--empty', env=index_env)
    print(json.dumps({'phase': 'stage', 'files': len(kept), 'input_bytes': sum(items[p][0] for p in kept),
                      'omitted_files': len(omitted)}, ensure_ascii=False), flush=True)
    # These are exact inventory files, not pathspecs. Feed them directly to
    # the index so Git never scans the research tree for each match pattern.
    git('-c', 'core.longpaths=true', 'update-index', '--add', '-z', '--stdin',
        data=b'\0'.join(p.encode('utf-8') for p in sorted(kept))+b'\0', env=index_env)
    ignore = ('# Construction repository: user exclusions and rebuildable large caches.\n'
              +''.join('/'+d+'/\n' for d in sorted(EXCLUDED))
              +'/.godot/\n/.mcp.json\n/tools/**/*.gd.uid\n/tests/**/*.gd.uid\n**/__pycache__/\n/资源/音乐/城市同步声部库.res\n')
    prior = ROOT / MANIFEST
    if prior.is_file():
        previous = json.loads(prior.read_text(encoding='utf-8'))['omitted']
        omitted.update({p: facts for p, facts in previous.items() if p not in items})
    manifest = dict(policy='origin construction repository <1GB; ai-sync design repository <100MB',
                    excluded_directories=sorted(EXCLUDED), excluded_files=sorted(LOCAL_ONLY_FILES),
                    generated_uid_directories=['tools', 'tests'], omitted_cache_directories=['.godot', '__pycache__'],
                    analysis_local_directories=sorted(ANALYSIS_LOCAL_DIRS),
                    analysis_media_extensions=sorted(ANALYSIS_MEDIA),
                    input_budget_bytes=INPUT_BUDGET, limit_bytes=MAX_BYTES,
                    design_files=sorted(design_paths(ROOT, set(filter(None, git('ls-files', '-z').decode().split('\0'))))),
                    omitted=omitted)
    manifest_blob = blob((json.dumps(manifest, ensure_ascii=False, indent=2)+'\n').encode())
    for name, oid in [('.gitattributes', attr_blob), ('.gitignore', blob(ignore.encode())), (MANIFEST, manifest_blob)]:
        git('update-index', '--add', '--cacheinfo', '100644,'+oid+','+name, env=index_env)
    staged = git('ls-files', '-z', env=index_env).decode().split('\0')
    if set(filter(None, staged)) != kept | {MANIFEST}:
        raise RuntimeError('Full index paths differ from the actual project inventory.')
    if inventory() != items:
        raise RuntimeError('Project files changed while staging; stop the running editor and prepare again.')
    tree = git('write-tree', env=index_env).decode().strip()
    sizes = [int(row.split(b'\t', 1)[0].split()[3]) for row in git('ls-tree', '-rzl', tree).split(b'\0') if row]
    if sum(sizes) >= MAX_BYTES or max(sizes) >= MAX_FILE:
        raise RuntimeError('Actual published tree exceeds the construction repository budget.')
    message = f'Sync complete construction project under 1GB\n\nDesign source: {source}\nExcluded: 废弃, 验证记录, 资产. Large omissions listed in {MANIFEST}.\n'
    commit = git('commit-tree', tree, '-p', parent, data=message.encode()).decode().strip()
    git('update-ref', REF, commit)
    local_backup = checkpoint('local-before-full-sync', source)
    remote_backup = checkpoint('github-before-full-sync', parent)
    plan = dict(source=source, parent=parent, commit=commit, tree=tree, files=len(kept | {MANIFEST}),
                published_bytes=sum(sizes), limit_bytes=MAX_BYTES, largest_file_bytes=max(sizes),
                omitted_files=len(omitted), excluded=sorted(EXCLUDED),
                groups=dict(collections.Counter(p.split('/')[0] for p in kept)),
                local_backup=local_backup, remote_backup=remote_backup,
                inventory_sha256=hashlib.sha256(json.dumps(items, sort_keys=True).encode()).hexdigest())
    save('inventory.json', items)
    save('omitted.json', manifest)
    save('plan.json', plan)
    print(json.dumps(plan, ensure_ascii=False, indent=2), flush=True)


def stream(*args):
    subprocess.run(['git', *args], cwd=ROOT, check=True)


def push():
    ready()
    plan = json.loads((OUT / 'plan.json').read_text(encoding='utf-8'))
    if value('rev-parse', 'HEAD') != plan['source']:
        raise RuntimeError('Source HEAD changed; prepare the full repository again.')
    if inventory() != json.loads((OUT / 'inventory.json').read_text(encoding='utf-8')):
        raise RuntimeError('Project inventory changed after preparation; prepare again.')
    if value('ls-remote', REMOTE, 'refs/heads/main').split()[0] != plan['parent']:
        raise RuntimeError('Full repository changed remotely; reconcile before publishing.')
    if value('rev-parse', REF+'^{tree}') != plan['tree']:
        raise RuntimeError('Candidate tree differs from the reviewed plan.')
    print('Uploading reviewed construction tree to origin.', flush=True)
    stream('push', REMOTE, plan['commit']+':refs/heads/main')
    remote = value('ls-remote', REMOTE, 'refs/heads/main').split()[0]
    if remote != plan['commit']:
        raise RuntimeError('Remote full commit differs from the prepared candidate.')
    git('fetch', '--no-tags', REMOTE, 'main')
    if value('rev-parse', 'FETCH_HEAD^{tree}') != plan['tree']:
        raise RuntimeError('Fetched full tree differs from the complete project candidate.')
    proof = dict(ok=True, remote_commit=remote, remote_tree=plan['tree'],
                 design_source=plan['source'], files=plan['files'], published_bytes=plan['published_bytes'],
                 limit_bytes=MAX_BYTES, omitted_files=plan['omitted_files'],
                 excluded=plan['excluded'], source_inventory_verified=True,
                 payload_upload_acknowledged=True, local_head_unchanged=value('rev-parse', 'HEAD')==plan['source'])
    save('verification.json', proof)
    print(json.dumps(proof, ensure_ascii=False, indent=2), flush=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['prepare', 'push'])
    args = parser.parse_args()
    prepare() if args.action == 'prepare' else push()
