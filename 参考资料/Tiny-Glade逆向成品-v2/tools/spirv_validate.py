"""Validate distinct original/lowered/recompiled SPIR-V with SPIRV-Tools.

Keep universal SPIR-V validation separate from strict Vulkan validation.
Shipped binaries can fail newer strict validators even when drivers accept
them. Every diagnostic is retained; failures are never suppressed.
"""
import argparse
import hashlib
import json
import pathlib
import struct
import subprocess
from concurrent.futures import ThreadPoolExecutor


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--validator', type=pathlib.Path, required=True)
    p.add_argument('--input', type=pathlib.Path, action='append', required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    p.add_argument('--universal', action='store_true')
    p.add_argument('--scalar-block-layout', action='store_true', help='Explicit Vulkan scalarBlockLayout feature profile')
    p.add_argument('--jobs', type=int, default=4)
    args = p.parse_args()
    groups = {}
    for root in args.input:
        for path in sorted(root.rglob('*.spv')):
            groups.setdefault(hashlib.sha256(path.read_bytes()).hexdigest(), []).append(path)

    def validate(item):
        digest, paths = item
        version = struct.unpack_from('<I', paths[0].read_bytes(), 4)[0]
        checks = []
        envs = ['vulkan1.2']
        if args.universal:
            envs.insert(0, f'spv{version >> 16}.{(version >> 8) & 255}')
        for env in envs:
            command = [str(args.validator.resolve()), '--target-env', env]
            if args.scalar_block_layout and env.startswith('vulkan'):
                command.append('--scalar-block-layout')
            result = subprocess.run(command + [str(paths[0].resolve())],
                                    capture_output=True, text=True, encoding='utf-8', errors='replace', timeout=120)
            checks.append({'environment': env, 'exit': result.returncode, 'log': result.stdout + result.stderr})
        return {'sha256': digest, 'source_files': [str(p.resolve()) for p in paths], 'checks': checks}

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        records = list(pool.map(validate, groups.items()))
    result = {'validator': str(args.validator.resolve()),
              'validator_sha256': hashlib.sha256(args.validator.read_bytes()).hexdigest(),
              'modules': sum(len(v) for v in groups.values()), 'distinct_modules': len(groups),
              'scalar_block_layout': args.scalar_block_layout,
              'universal_distinct_passed': sum(r['checks'][0]['exit'] == 0 for r in records) if args.universal else None,
              'vulkan_distinct_passed': sum(r['checks'][-1]['exit'] == 0 for r in records), 'records': records}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k not in ('records','validator')}))
    return any(c['exit'] for r in records for c in r['checks'])


if __name__ == '__main__':
    raise SystemExit(main())
