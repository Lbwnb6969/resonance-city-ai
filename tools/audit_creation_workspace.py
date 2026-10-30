"""Read-only maintenance inventory. Candidates are never moved or deleted here."""
from pathlib import Path
import argparse
import hashlib
import json
import os
import re
import subprocess
import check_doc_links

CORE = ('scripts', 'scenes', '资源', 'addons', 'tests', 'tools')


def documents(root):
    return check_doc_links.maintained_paths(root)


def imported_inputs(root):
    """Keep all published source sidecar destinations and their MD5 companions."""
    keep = set()
    paths = list(root.glob('*.import'))
    for folder in CORE:
        paths.extend((root / folder).rglob('*.import'))
    for path in paths:
        raw = path.read_text(encoding='utf-8', errors='replace')
        for name in re.findall(r'"res://(\.godot/imported/[^"\n]+)"', raw):
            keep.add(name)
            keep.add(str(Path(name).with_suffix('.md5')).replace('\\', '/'))
    return keep


def design_inventory(root, backlog):
    """Check the adopted specification as well as retained historical sources."""
    integration = backlog['holistic_integration']
    historical = integration['supplemental_design']
    current = integration.get('current_construction_spec', {})
    entries = [historical, historical['integrated_addendum'], historical['master_score_addendum']]
    errors = []
    if not current.get('document') or not current.get('source') or not current.get('source_sha256'):
        errors.append('current_construction_spec must identify the adopted document and hashed source')
    else:
        entries.append(current)
        if backlog.get('current_design_document') != current['document']:
            errors.append('current_design_document differs from current_construction_spec.document')
        if not (root / current['document']).is_file():
            errors.append('adopted construction document is missing: ' + current['document'])
        for row in integration['rounds']:
            if row.get('passes') is False and row.get('spec') != current['document']:
                errors.append(row['id'] + ' pending spec differs from the adopted construction document')
    sources = []
    def adopted_entries(value):
        if isinstance(value, dict):
            yield value
            for child in value.values():
                yield from adopted_entries(child)
        elif isinstance(value, list):
            for child in value:
                yield from adopted_entries(child)

    # Include every reviewed addendum/continuation, not only the original V7.
    adopted = list(adopted_entries(current))
    entries.extend(row for row in adopted if 'source' in row and 'source_sha256' in row)
    for row in adopted:
        for key in ('document', 'candidate', 'continuation_catalog'):
            if key in row and not (root / row[key]).is_file():
                errors.append('adopted ' + key + ' is missing: ' + row[key])
        if 'candidate_sha256' in row and (root / row['candidate']).is_file():
            if hashlib.sha256((root / row['candidate']).read_bytes()).hexdigest() != row['candidate_sha256']:
                errors.append('adopted candidate hash differs: ' + row['candidate'])
    entries = list({(row['source'], row['source_sha256']): row for row in entries}.values())
    for entry in entries:
        path = root / entry['source']
        sources.append({'path': entry['source'], 'ok': path.is_file() and
                        hashlib.sha256(path.read_bytes()).hexdigest() == entry['source_sha256']})
    return sources, errors


def checkout_inventory(root):
    """Explicit remote check; never fetch, checkout, merge, reset or stash."""
    def query(*args):
        return subprocess.check_output(['git', *args], cwd=root, text=True,
                                       stderr=subprocess.DEVNULL, timeout=30,
                                       env={**os.environ, 'GIT_OPTIONAL_LOCKS': '0'}).strip()
    try:
        head = query('rev-parse', 'HEAD')
        remote = query('ls-remote', '--exit-code', 'origin', 'refs/heads/main').split()[0]
        if not re.fullmatch(r'[0-9a-f]{40}', remote):
            return {'ok': False, 'state': 'invalid_remote_head'}
        state = 'current'
        if head != remote:
            try:
                ancestor = query('merge-base', head, remote)
            except subprocess.CalledProcessError:
                ancestor = ''
            state = 'ahead' if ancestor == remote else 'behind' if ancestor == head else 'different_or_unfetched'
        return {'ok': state in ('current', 'ahead'), 'head': head, 'remote_head': remote,
                'state': state, 'dirty': bool(query('status', '--porcelain'))}
    except (OSError, subprocess.SubprocessError, IndexError):
        return {'ok': False, 'state': 'remote_check_unavailable'}


def scan(root):
    root = root.resolve()
    candidates = []

    def candidate(path, reason):
        candidates.append({'path': path.relative_to(root).as_posix(), 'reason': reason,
                           'bytes': path.stat().st_size})

    keep = imported_inputs(root)
    for path in (root / '.godot/imported').glob('*'):
        if path.is_file() and path.relative_to(root).as_posix() not in keep:
            candidate(path, 'orphan_or_ignored_source_import_cache')
    for folder in CORE:
        for path in (root / folder).rglob('*.gd.uid'):
            if not path.with_suffix('').is_file():
                candidate(path, 'uid_without_source_script')
    dependencies = 0
    missing = []
    tracked = subprocess.check_output(['git', 'ls-files', '-z'], cwd=root).decode('utf-8').split('\0')
    canonical = {name.casefold(): name for name in tracked if name}
    case_errors = []
    pattern = r'(?:preload\s*\(|load\s*\(|extends\s+|#include\s+)\s*["\x27](res://[^"\x27]+)'
    for folder in ('scripts', 'scenes', 'addons', 'tests', 'tools'):
        for path in (root / folder).rglob('*'):
            if path.suffix not in {'.gd', '.gdshader', '.gdshaderinc', '.tscn'}:
                continue
            raw = '\n'.join(line for line in path.read_text(encoding='utf-8', errors='replace').splitlines()
                            if not line.lstrip().startswith(('#', '//')) or line.lstrip().startswith('#include'))
            for name in re.findall(pattern, raw):
                dependencies += 1
                if not (root / name[6:]).exists():
                    missing.append([path.relative_to(root).as_posix(), name])
                elif canonical.get(name[6:].casefold(), name[6:]) != name[6:]:
                    case_errors.append([path.relative_to(root).as_posix(), name, canonical[name[6:].casefold()]])
    sources = []
    design_errors = []
    backlog = root / 'ai_feature_backlog.json'
    if backlog.exists():
        sources, design_errors = design_inventory(root, json.loads(backlog.read_text(encoding='utf-8')))
    archive = root / '文档/归档映射.json'
    history = None
    if archive.exists():
        info = json.loads(archive.read_text(encoding='utf-8'))
        history = {'path': info['archive_relative'], 'present': (root / info['archive_relative']).is_dir(),
                   'git_recovery_commits': {}}
        for key in ('local_and_design_commit', 'previous_full_commit'):
            commit = info[key]
            result = subprocess.run(['git', 'cat-file', '-e', commit + '^{commit}'], cwd=root,
                                    stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            history['git_recovery_commits'][commit] = result.returncode == 0
    docs = documents(root)
    total_links, errors = check_doc_links.check(docs, root)
    return {'ok': not missing and not case_errors and not errors and not design_errors and all(x['ok'] for x in sources),
            'documents': [p.relative_to(root).as_posix() for p in docs], 'document_links': total_links,
            'link_errors': [[str(p.relative_to(root)), n, target, reason] for p, n, target, reason in errors],
            'resource_dependencies': dependencies, 'missing_resources': missing, 'resource_case_errors': case_errors, 'source_hashes': sources,
            'design_contract_errors': design_errors,
            'previous_archive': history, 'cache_candidates': candidates,
            'candidate_bytes': sum(x['bytes'] for x in candidates),
            'kept_import_destinations': len(keep)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out', type=Path)
    parser.add_argument('--check-remote', action='store_true',
                        help='Read origin/main from GitHub and reject an outdated checkout; never changes files or refs.')
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    result = scan(root)
    if args.check_remote:
        result['checkout'] = checkout_inventory(root)
        result['ok'] = result['ok'] and result['checkout']['ok']
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({k: v for k, v in result.items() if k not in ('cache_candidates', 'documents')},
                     ensure_ascii=False, indent=2))
    print('documents:', len(result['documents']), 'cache candidates:', len(result['cache_candidates']))
    return 0 if result['ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
