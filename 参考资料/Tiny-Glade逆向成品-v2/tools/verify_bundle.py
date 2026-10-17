"""Verify every retained delivery file against SHA256SUMS.json (read-only).
Usage: python tools/verify_bundle.py .
Reproducible extracted assets and temporary caches are not part of the manifest.
"""
import argparse
import hashlib
import json
import pathlib


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('root', type=pathlib.Path)
    args = p.parse_args()
    root = args.root.resolve()
    manifest = json.loads((root / 'SHA256SUMS.json').read_text(encoding='utf-8'))
    failures = []
    for row in manifest['files']:
        path = root / row['path']
        if not path.exists():
            failures.append({'file': row['path'], 'error': 'missing'})
            continue
        with path.open('rb') as f:
            digest = hashlib.file_digest(f, 'sha256').hexdigest()
        if digest != row['sha256'] or path.stat().st_size != row['bytes']:
            failures.append({'file': row['path'], 'error': 'digest or length changed'})
    print(json.dumps({'files_checked': len(manifest['files']), 'failures': failures,
                      'passed': not failures}, ensure_ascii=False))
    return bool(failures)


if __name__ == '__main__':
    raise SystemExit(main())
