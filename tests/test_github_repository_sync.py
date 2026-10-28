"""Real local remotes prove role separation and index/working-tree preservation."""
from pathlib import Path
import importlib.util
import json
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))


def module(name):
    spec = importlib.util.spec_from_file_location(name, ROOT / 'tools' / (name+'.py'))
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


def git(root, *args):
    return subprocess.check_output(['git', *args], cwd=root, stderr=subprocess.PIPE).decode().strip()


def put(root, name, data):
    target = root / name
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_bytes(data)


with tempfile.TemporaryDirectory(prefix='city-dual-sync-') as temporary:
    base = Path(temporary)
    work = base / 'work'
    work.mkdir()
    git(work, 'init')
    git(work, 'config', 'user.name', 'Sync Fixture')
    git(work, 'config', 'user.email', 'fixture@localhost')
    put(work, '.gitignore', '参考资料/\n验证记录/\n资产/\n废弃/\n.godot/\n'.encode())
    put(work, '.gitattributes', b'* text=auto eol=lf\n')
    put(work, 'project.godot', b'config_version=5\n')
    put(work, 'scripts/game.gd', b'extends Node\n')
    git(work, 'add', '.')
    git(work, 'commit', '-m', 'baseline')
    remotes = {}
    for role in ['origin', 'ai-sync']:
        target = base / (role+'.git')
        git(base, 'init', '--bare', str(target))
        git(work, 'remote', 'add', role, str(target))
        git(work, 'push', role, 'HEAD:refs/heads/main')
        remotes[role] = str(target)
    put(work, '参考资料/source.cs', b'public class Evidence {}\n'*40)
    put(work, '参考资料/large.bin', b'x'*5000)
    put(work, '参考资料/small.bin', b'y'*300)
    put(work, 'UI/theme/a.gd', b'extends Control\n')
    put(work, 'UI/theme/b.gd', b'extends Control\n')
    put(work, 'UI/__pycache__/local.pyc', b'local cache')
    put(work, 'song-analysis/analyze.py', b'print("portable analysis fixture")\n')
    for directory in ['资产', '废弃', '验证记录', '.godot']:
        put(work, directory+'/excluded.txt', b'not published')
    full = module('sync_github_full')
    full.ROOT, full.GIT = work, work / '.git'
    full.WORK, full.OUT = work / '.git/full-sync', work / '验证记录/full-proof'
    full.URL, full.MAX_FILE, full.INPUT_BUDGET, full.MAX_BYTES = remotes['origin'], 4096, 4000, 10000
    old_head = git(work, 'rev-parse', 'HEAD')
    old_index = (work / '.git/index').read_bytes()
    old_ignore = (work / '.gitignore').read_bytes()
    full.prepare()
    assert (work / '.git/index').read_bytes() == old_index
    assert (work / '.gitignore').read_bytes() == old_ignore
    assert git(work, 'rev-parse', 'HEAD') == old_head
    plan = json.loads((full.OUT / 'plan.json').read_text(encoding='utf-8'))
    assert '参考资料/source.cs' in full.git('ls-tree', '-rz', '--name-only', plan['tree']).decode().split('\0')
    manifest = json.loads(full.git('show', plan['commit']+':'+full.MANIFEST))
    assert '参考资料/large.bin' in manifest['omitted']
    full.push()
    assert git(work, 'ls-remote', 'origin', 'refs/heads/main').split()[0] == plan['commit']
    cloud = base / 'cloud'
    git(base, 'clone', '--branch', 'main', remotes['origin'], str(cloud))
    git(cloud, 'config', 'user.name', 'Cloud Fixture')
    git(cloud, 'config', 'user.email', 'fixture@localhost')
    git(cloud, 'remote', 'add', 'ai-sync', remotes['ai-sync'])
    assert (cloud / '参考资料/source.cs').is_file()
    assert not (cloud / '资产').exists() and not (cloud / '.godot').exists()
    assert (cloud / 'UI/theme/a.gd').is_file() and not (cloud / 'UI/__pycache__').exists()
    put(cloud, 'scripts/new_feature.gd', b'extends RefCounted\n')
    git(cloud, 'add', 'scripts/new_feature.gd')
    git(cloud, 'commit', '-m', 'cloud feature')
    cloud_head = git(cloud, 'rev-parse', 'HEAD')
    cloud_index = (cloud / '.git/index').read_bytes()
    design = module('sync_github_main')
    design.ROOT, design.OUT, design.URL = cloud, cloud / '验证记录/design-proof', remotes['ai-sync']
    design.prepare()
    design.push()
    assert git(cloud, 'rev-parse', 'HEAD') == cloud_head
    assert (cloud / '.git/index').read_bytes() == cloud_index
    assert git(cloud, 'status', '--porcelain', '--untracked-files=no') == ''
    remote = git(cloud, 'ls-remote', 'ai-sync', 'refs/heads/main').split()[0]
    paths = set(design.git('ls-tree', '-r', '--name-only', remote).stdout.decode().splitlines())
    assert 'scripts/new_feature.gd' in paths
    assert 'song-analysis/analyze.py' in paths
    assert full.MANIFEST not in paths and not any(p.startswith('参考资料/') for p in paths)
    # Cloud construction can use a linked worktree; its .git is a file.
    linked = base / 'linked'
    git(cloud, 'worktree', 'add', '-b', 'fixture-linked', str(linked))
    put(linked, 'scripts/worktree_feature.gd', b'extends Node\n')
    git(linked, 'add', 'scripts/worktree_feature.gd')
    git(linked, 'commit', '-m', 'linked feature')
    linked_head = git(linked, 'rev-parse', 'HEAD')
    linked_git = Path(git(linked, 'rev-parse', '--absolute-git-dir'))
    linked_index = (linked_git / 'index').read_bytes()
    full.ROOT, full.OUT = linked, linked / '验证记录/full-proof'
    full.prepare()
    assert full.WORK == linked_git / 'full-sync'
    full.push()
    design.ROOT, design.OUT = linked, linked / '验证记录/design-proof'
    design.prepare()
    design.push()
    assert git(linked, 'rev-parse', 'HEAD') == linked_head
    assert (linked_git / 'index').read_bytes() == linked_index
    assert git(cloud, 'rev-parse', 'HEAD') == cloud_head
    assert (cloud / '.git/index').read_bytes() == cloud_index
    assert git(linked, 'status', '--porcelain', '--untracked-files=no') == ''
    for role in ['origin', 'ai-sync']:
        remote_head = git(linked, 'ls-remote', role, 'refs/heads/main').split()[0]
        assert 'scripts/worktree_feature.gd' in git(linked, 'ls-tree', '-r', '--name-only', remote_head).splitlines()
    print('DUAL_REPOSITORY_SYNC PASS: real full/design pushes from clone and linked worktree; source HEAD/index preserved.')
