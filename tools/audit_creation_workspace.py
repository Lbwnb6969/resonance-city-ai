"""Read-only maintenance inventory. Candidates are never moved or deleted here."""
from pathlib import Path
import argparse
import hashlib
import json
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
    sources = []
    backlog = root / 'ai_feature_backlog.json'
    if backlog.exists():
        design = json.loads(backlog.read_text(encoding='utf-8'))['holistic_integration']['supplemental_design']
        for entry in [design, design['integrated_addendum'], design['master_score_addendum']]:
            path = root / entry['source']
            sources.append({'path': entry['source'], 'ok': path.is_file() and
                            hashlib.sha256(path.read_bytes()).hexdigest() == entry['source_sha256']})
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
    return {'ok': not missing and not errors and all(x['ok'] for x in sources),
            'documents': [p.relative_to(root).as_posix() for p in docs], 'document_links': total_links,
            'link_errors': [[str(p.relative_to(root)), n, target, reason] for p, n, target, reason in errors],
            'resource_dependencies': dependencies, 'missing_resources': missing, 'source_hashes': sources,
            'previous_archive': history, 'cache_candidates': candidates,
            'candidate_bytes': sum(x['bytes'] for x in candidates),
            'kept_import_destinations': len(keep)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out', type=Path)
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    result = scan(root)
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({k: v for k, v in result.items() if k not in ('cache_candidates', 'documents')},
                     ensure_ascii=False, indent=2))
    print('documents:', len(result['documents']), 'cache candidates:', len(result['cache_candidates']))
    return 0 if result['ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
