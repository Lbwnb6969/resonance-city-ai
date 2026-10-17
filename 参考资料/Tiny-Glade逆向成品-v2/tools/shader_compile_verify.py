"""Compile each distinct recovered GLSL once, retaining all module aliases."""
import argparse
import hashlib
import json
import pathlib
import subprocess
from concurrent.futures import ThreadPoolExecutor


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--glslang', type=pathlib.Path, required=True)
    p.add_argument('--input', type=pathlib.Path, action='append', required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    p.add_argument('--jobs', type=int, default=4)
    args = p.parse_args()
    args.out.mkdir(parents=True, exist_ok=False)
    groups = {}
    for root in args.input:
        for path in sorted(root.rglob('*')):
            if path.suffix not in ('.vert', '.frag', '.comp'):
                continue
            key = (path.suffix[1:], sha(path))
            groups.setdefault(key, []).append(path)

    def compile(item):
        (stage, digest), paths = item
        dest = args.out / (digest + '.spv')
        command = [str(args.glslang.resolve()), '-V', '--target-env', 'vulkan1.2', '-S', stage,
                   str(paths[0].resolve()), '-o', str(dest.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, encoding='utf-8', errors='replace', timeout=120)
        return {'stage': stage, 'glsl_sha256': digest, 'source_files': [str(x.resolve()) for x in paths],
                'exit': result.returncode, 'log': result.stdout + result.stderr,
                'recompiled_sha256': sha(dest) if result.returncode == 0 else None,
                'recompiled_file': dest.name if result.returncode == 0 else None}

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        records = list(pool.map(compile, groups.items()))
    result = {'compiler': str(args.glslang.resolve()), 'compiler_sha256': sha(args.glslang),
              'modules': sum(len(v) for v in groups.values()), 'distinct_sources': len(groups),
              'successful_distinct_sources': sum(r['exit'] == 0 for r in records),
              'successful_modules': sum(len(r['source_files']) for r in records if r['exit'] == 0),
              'records': records,
              'limits': 'Compilation validates GLSL syntax/type/layout requirements; it does not establish GPU runtime equivalence.'}
    (args.out/'compile_verification.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps({k: result[k] for k in ('modules','distinct_sources','successful_distinct_sources','successful_modules')}))
    return any(r['exit'] != 0 for r in records)


if __name__ == '__main__':
    raise SystemExit(main())
