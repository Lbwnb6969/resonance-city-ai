"""Recover Vulkan GLSL from all extracted SPIR-V with SPIRV-Cross.

Optionally compile each recovered source with glslang. These are translated
sources, not recovered original Slang text; compilation alone is not semantic
equivalence. Original SPIR-V digests and every subprocess result are retained.
"""
import argparse
import hashlib
import json
import pathlib
import re
import shutil
import struct
import subprocess
from concurrent.futures import ThreadPoolExecutor


def stage(data):
    words = struct.unpack('<' + str(len(data) // 4) + 'I', data)
    i = 5
    while i < len(words):
        n, op = words[i] >> 16, words[i] & 65535
        if op == 15:
            return {0: 'vert', 4: 'frag', 5: 'comp'}[words[i + 1]]
        if not n:
            raise ValueError('zero-length SPIR-V instruction')
        i += n
    raise ValueError('missing SPIR-V entry point')


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def repair_glsl_names(source):
    # Slang debug names can shadow a GLSL built-in. Preserve function calls;
    # rename only the known local variable and its non-call identifier uses.
    if not re.search(r'\bvec3\s+texture\s*=', source):
        return source, []
    replacement = 'tg_recovered_texture_value'
    if re.search(r'\b' + replacement + r'\b', source):
        raise ValueError('replacement identifier already exists')
    result, count = re.subn(r'\btexture\b(?!\s*\()', replacement, source)
    return result, [{'old': 'texture', 'new': replacement, 'identifier_occurrences': count,
                     'reason': 'Local debug name shadows GLSL texture() built-in.'}]


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--cross', type=pathlib.Path, required=True)
    p.add_argument('--glslang', type=pathlib.Path)
    p.add_argument('--input', type=pathlib.Path, required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    p.add_argument('--jobs', type=int, default=4)
    args = p.parse_args(); args.out.mkdir(parents=True, exist_ok=False)
    cross = args.cross.resolve()
    glslang = args.glslang.resolve() if args.glslang else None
    paths = sorted(args.input.rglob('*.spv')) if args.input.is_dir() else [args.input]

    def recover(path):
        data = path.read_bytes()
        rel = path.relative_to(args.input) if args.input.is_dir() else pathlib.Path(path.name)
        kind = stage(data)
        dest = args.out / 'glsl' / rel.with_suffix('.' + kind)
        dest.parent.mkdir(parents=True, exist_ok=True)
        command = [str(cross), str(path.resolve()), '--vulkan-semantics', '--version', '460', '--output', str(dest.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, encoding='utf-8', errors='replace', timeout=120)
        row = {'source': rel.as_posix(), 'source_sha256': hashlib.sha256(data).hexdigest(),
               'stage': kind, 'cross_exit': result.returncode, 'cross_stderr': result.stderr,
               'glsl': dest.relative_to(args.out).as_posix()}
        if result.returncode == 0:
            unmodified = dest.read_text(encoding='utf-8')
            repaired, name_changes = repair_glsl_names(unmodified)
            if name_changes:
                row['cross_unmodified_glsl_sha256'] = digest(dest)
                row['glsl_name_repairs'] = name_changes
                dest.write_text(repaired, encoding='utf-8', newline='\n')
            row['glsl_sha256'] = digest(dest); row['glsl_bytes'] = dest.stat().st_size
            if glslang:
                spv = args.out / 'recompiled' / rel
                spv.parent.mkdir(parents=True, exist_ok=True)
                command = [str(glslang), '-V', '--target-env', 'vulkan1.2', '-S', kind,
                           str(dest.resolve()), '-o', str(spv.resolve())]
                r = subprocess.run(command, capture_output=True, text=True, encoding='utf-8', errors='replace', timeout=120)
                row.update(compile_exit=r.returncode, compile_log=r.stdout + r.stderr)
                if r.returncode == 0:
                    row['recompiled_sha256'] = digest(spv)
        return row

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        records = list(pool.map(recover, paths))
    result = {'input': str(args.input), 'cross_path': str(cross), 'cross_sha256': digest(cross),
              'glslang_path': str(glslang) if glslang else None,
              'glslang_sha256': digest(glslang) if glslang else None,
              'modules': len(records), 'glsl_recovered': sum(r['cross_exit'] == 0 for r in records),
              'compiled': sum(r.get('compile_exit') == 0 for r in records),
              'records': records,
              'limits': ['Translated Vulkan GLSL, not the original Slang source.',
                         'Recompilation does not prove GPU numerical or application behavioral equivalence.']}
    (args.out / 'shader_reconstruction.json').write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({k: result[k] for k in ['modules', 'glsl_recovered', 'compiled']}))
    return any(r['cross_exit'] != 0 or (glslang and r.get('compile_exit') != 0) for r in records)


if __name__ == '__main__':
    raise SystemExit(main())
