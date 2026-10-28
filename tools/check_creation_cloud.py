"""Run the portable construction checks with Python and a supplied Godot executable."""
from pathlib import Path
import argparse
import datetime
import json
import os
import re
import shutil
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--godot', default=os.environ.get('GODOT_BIN', 'godot'))
    parser.add_argument('--out-dir', type=Path)
    args = parser.parse_args()
    godot = shutil.which(args.godot)
    if not godot:
        parser.error('Godot executable not found; supply --godot or GODOT_BIN (Godot 4.7.2).')
    out = args.out_dir or ROOT / '验证记录' / ('cloud_' + datetime.datetime.now().strftime('%Y%m%d_%H%M%S'))
    out = out.resolve()
    out.mkdir(parents=True, exist_ok=True)
    # A local report directory must not become an editor-scanned nested project.
    if out.is_relative_to(ROOT):
        (out / '.gdignore').touch()
    checks = [
        ('engine', [godot, '--version']),
        ('harness', [sys.executable, 'tools/check_ai_harness.py']),
        ('links', [sys.executable, 'tools/check_doc_links.py']),
        ('workspace', [sys.executable, 'tools/audit_creation_workspace.py', '--out', str(out / 'workspace.json')]),
        ('harness_tests', [sys.executable, '-B', 'tests/test_ai_harness.py']),
        ('import', [godot, '--headless', '--editor', '--path', '.', '--import']),
    ]
    for name, script in [('legacy', 'tests/test_city_creation_legacy_roundtrip.gd'),
                         ('roof_uv', 'tests/test_city_creation_hinge_roof_uv.gd')]:
        checks.append((name, [godot, '--headless', '--path', '.', '--audio-driver', 'Dummy',
                              '--script', script, '--', '--isolated-session']))
    report = {'ok': False, 'platform': sys.platform, 'root': str(ROOT), 'checks': [],
              'scope': 'Portable import, code/resource/source audits and isolated CPU regressions; '
                       'headless Dummy does not validate GPU, actual audio or listening.'}
    for name, command in checks:
        started = time.monotonic()
        result = subprocess.run(command, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        (out / (name + '.log')).write_bytes(result.stdout)
        output = result.stdout.decode('utf-8', errors='replace')
        errors = re.findall(r'^(?:SCRIPT ERROR:|ERROR:).*', output, flags=re.MULTILINE)
        ok = result.returncode == 0 and not errors
        if name == 'engine':
            ok = ok and output.strip().startswith('4.7.2.')
        row = dict(name=name, command=command, exit_code=result.returncode, errors=errors,
                   ok=ok, elapsed_seconds=round(time.monotonic() - started, 3))
        report['checks'].append(row)
        report['ok'] = ok and len(report['checks']) == len(checks)
        (out / 'report.json').write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
        print(name, 'PASS' if ok else 'FAIL', row['elapsed_seconds'], flush=True)
        if not ok:
            print(output[-3000:], flush=True)
            return 1
    print('CLOUD_CONSTRUCTION PASS:', out / 'report.json', flush=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
