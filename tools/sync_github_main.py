"""Sync the complete tracked tree: run `prepare`, review the plan, then `push`.

Ignored backups, caches and personal data stay local. The initial independent
development history is kept by a tag before adopting an identical remote tree.
"""
from pathlib import Path
import argparse
import collections
import datetime
import json
import subprocess
import os
from github_repository_roles import MANIFEST, design_paths

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / '验证记录' / 'GitHub完整同步'
REMOTE = 'ai-sync'
BRANCH = 'main'
URL = 'https://github.com/Lbwnb6969/resonance-city-ai.git'
MAX_MAIN_BYTES = 100_000_000


def git(*args, data=None, check=True):
    result = subprocess.run(['git', *args], cwd=ROOT, input=data,
                            stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if check and result.returncode:
        raise RuntimeError(result.stderr.decode('utf-8', errors='replace'))
    return result


def value(*args):
    return git(*args).stdout.decode('utf-8').strip()


def save(name, data):
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / name).write_text(json.dumps(data, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')


def clean():
    if value('status', '--porcelain', '--untracked-files=no'):
        raise RuntimeError('Commit tracked changes before publishing.')
    if value('remote', 'get-url', REMOTE) != URL:
        raise RuntimeError('Canonical remote URL differs from project configuration.')


def files(ref):
    result = {}
    for row in git('ls-tree', '-rz', ref).stdout.split(b'\0'):
        if row:
            metadata, path = row.split(b'\t', 1)
            result[path.decode('utf-8')] = metadata.decode('ascii')
    return result


def tree_budget(ref):
    """Budget the actual published blobs, excluding local ignored originals."""
    sizes = []
    for row in git('ls-tree', '-rzl', ref).stdout.split(b'\0'):
        if row:
            metadata, _ = row.split(b'\t', 1)
            parts = metadata.split()
            if parts[1] == b'blob':
                sizes.append(int(parts[3]))
    total = sum(sizes)
    if total >= MAX_MAIN_BYTES:
        raise RuntimeError(f'Main tree is {total:,} bytes; keep it below {MAX_MAIN_BYTES:,} bytes. '
                           'Untrack bulky reference exports without moving local originals.')
    return dict(published_bytes=total, limit_bytes=MAX_MAIN_BYTES,
                largest_file_bytes=max(sizes, default=0))


def design_tree(source, parent):
    if not (ROOT / MANIFEST).is_file():
        return value('rev-parse', source+'^{tree}')
    current = files(source)
    kept = design_paths(ROOT, current)
    git_dir = Path(value('rev-parse', '--absolute-git-dir'))
    env = dict(os.environ, GIT_INDEX_FILE=str(git_dir / 'design-sync-index'))
    subprocess.run(['git', 'read-tree', source], cwd=ROOT, env=env, check=True)
    removed = b'\0'.join(p.encode() for p in sorted(set(current)-kept))+b'\0'
    subprocess.run(['git', 'update-index', '--force-remove', '-z', '--stdin'],
                   cwd=ROOT, env=env, input=removed, check=True)
    # The full clone's ignore file belongs to origin; retain ai-sync's role rules.
    ignore = git('show', parent+':.gitignore').stdout
    oid = git('hash-object', '-w', '--stdin', data=ignore).stdout.decode().strip()
    subprocess.run(['git', 'update-index', '--cacheinfo', '100644,'+oid+',.gitignore'], cwd=ROOT, env=env, check=True)
    return subprocess.check_output(['git', 'write-tree'], cwd=ROOT, env=env).decode().strip()


def backup(label, commit):
    day = datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).strftime('%Y%m%d')
    tag = f'backup/{label}-{day}-{commit[:8]}'
    existing = git('rev-parse', '--verify', 'refs/tags/' + tag, check=False)
    if existing.returncode:
        git('tag', tag, commit)
    elif existing.stdout.decode().strip() != commit:
        raise RuntimeError('Backup tag collision.')
    return tag


def prepare():
    clean()
    git('fetch', '--no-tags', REMOTE, BRANCH)
    source = value('rev-parse', 'HEAD')
    parent = value('rev-parse', 'FETCH_HEAD')
    tree = design_tree(source, parent)
    budget = tree_budget(tree)
    current, previous = files(tree), files(parent)
    changes = dict(added=sorted(current.keys() - previous.keys()),
                   removed=sorted(previous.keys() - current.keys()),
                   updated=sorted(p for p in current.keys() & previous.keys() if current[p] != previous[p]))
    local_backup = backup('local-before-main-sync', source)
    remote_backup = backup('github-before-main-sync', parent)
    if tree == value('rev-parse', parent + '^{tree}'):
        commit = parent
    elif tree == value('rev-parse', source+'^{tree}') and git('merge-base', '--is-ancestor', parent, source, check=False).returncode == 0:
        commit = source
    else:
        message = ('Sync complete project and twelve-phase development blueprint\n\n'
                   'Includes the tracked project tree and selected reference code/docs.\n'
                   f'Local development history preserved at {local_backup} ({source}).\n'
                   f'Previous GitHub main preserved at {remote_backup}.\n')
        commit = git('commit-tree', tree, '-p', parent, data=message.encode()).stdout.decode().strip()
    plan = dict(source=source, parent=parent, tree=tree, commit=commit,
                local_backup=local_backup, remote_backup=remote_backup,
                source_files=len(current), changes=changes, **budget,
                added_groups=dict(collections.Counter(p.split('/')[0] for p in changes['added'])))
    save('plan.json', plan)
    print(json.dumps({k: v for k, v in plan.items() if k != 'changes'}, ensure_ascii=False, indent=2))
    print(json.dumps({k: len(v) for k, v in changes.items()}))


def push():
    clean()
    plan = json.loads((OUT / 'plan.json').read_text(encoding='utf-8'))
    if value('rev-parse', 'HEAD') != plan['source']:
        raise RuntimeError('Local source changed after preparation; prepare again.')
    if value('ls-remote', REMOTE, 'refs/heads/' + BRANCH).split()[0] != plan['parent']:
        raise RuntimeError('Remote changed after preparation; fetch and reconcile first.')
    if value('rev-parse', plan['commit'] + '^{tree}') != plan['tree']:
        raise RuntimeError('Candidate tree differs from the local source.')
    budget = tree_budget(plan['commit'])
    # A normal push also rejects concurrent non-fast-forward server updates.
    result = git('push', REMOTE, plan['commit'] + ':refs/heads/' + BRANCH)
    print(result.stderr.decode('utf-8', errors='replace'))
    observed = value('ls-remote', REMOTE, 'refs/heads/' + BRANCH).split()[0]
    if observed != plan['commit']:
        raise RuntimeError('Published main differs from the prepared commit.')
    git('fetch', '--no-tags', REMOTE, BRANCH)
    remote_tree = value('rev-parse', 'FETCH_HEAD^{tree}')
    if remote_tree != plan['tree']:
        raise RuntimeError('Fetched remote tree differs from the complete local tree.')
    # The tag preserves old history. Identical trees allow updating only HEAD:
    # --soft leaves every working file and index entry in place.
    if value('rev-parse', 'HEAD^{tree}') == plan['tree']:
        git('reset', '--soft', observed)
        branch = value('symbolic-ref', '--short', 'HEAD')
        git('branch', '--set-upstream-to=' + REMOTE + '/' + BRANCH, branch)
    clean()
    proof = dict(ok=True, local_commit=value('rev-parse', 'HEAD'), remote_commit=observed,
                 local_tree=value('rev-parse', 'HEAD^{tree}'), remote_tree=remote_tree,
                 tracked_files=plan['source_files'], local_history_backup=plan['local_backup'],
                 design_tree=plan['tree'],
                 previous_remote_backup=plan['remote_backup'], **budget)
    save('verification.json', proof)
    print(json.dumps(proof, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['prepare', 'push'])
    args = parser.parse_args()
    prepare() if args.action == 'prepare' else push()
