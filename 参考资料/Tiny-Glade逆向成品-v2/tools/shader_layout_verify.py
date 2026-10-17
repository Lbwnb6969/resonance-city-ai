"""Compare original versus recovered/recompiled descriptor and block layouts.

SPIRV-Cross reflection is cached per binary digest. Type IDs/debug names are
excluded; offsets, strides, matrices, array dimensions and resource types are
compared recursively. This verifies shader host interfaces, not math behavior.
"""
import argparse
import hashlib
import json
import pathlib
import subprocess
from concurrent.futures import ThreadPoolExecutor

GROUPS = ('ssbos','ubos','textures','separate_images','separate_samplers','images','subpass_inputs','acceleration_structures','push_constants')
MEMBER_KEYS = ('offset','array','array_size_is_literal','array_stride','matrix_stride','row_major')
RESOURCE_KEYS = ('set','binding','block_size','array','array_size_is_literal','format')


def signature(reflection):
    types = reflection.get('types', {})

    def type_shape(type_, visited=()):
        if type_ not in types:
            return type_
        if type_ in visited:
            return 'recursive-type'
        result = []
        for member in types[type_].get('members', []):
            row = {key: member[key] for key in MEMBER_KEYS if key in member}
            if member.get('physical_pointer'):
                # A physical pointer occupies eight bytes. GLSL represents its
                # pointee via a one-member buffer_reference wrapper; unwrap
                # that representation without confusing it with inline data.
                target = types.get(member['type'], {})
                members = target.get('members', [])
                if not members:
                    pointee = target['name']
                elif len(members) == 1 and members[0].get('offset') == 0 and members[0]['name'] == 'value':
                    pointee = type_shape(members[0]['type'], visited+(type_,))
                else:
                    pointee = type_shape(member['type'], visited+(type_,))
                row.pop('array_stride', None)  # Pointee stride, not inline array stride.
                row['type'] = {'physical_pointer_bytes':8, 'pointee':pointee}
            else:
                row['type'] = type_shape(member['type'], visited+(type_,))
            result.append(row)
        return result

    result = []
    for group in GROUPS:
        for resource in reflection.get(group, []):
            row = {key: resource[key] for key in RESOURCE_KEYS if key in resource}
            row['group'] = group
            row['type'] = type_shape(resource['type'])
            result.append(row)
    return sorted(result, key=lambda r: (r['group'],r.get('set',-1),r.get('binding',-1),json.dumps(r,sort_keys=True)))


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--cross', type=pathlib.Path, required=True)
    p.add_argument('--original', type=pathlib.Path, required=True)
    p.add_argument('--source', type=pathlib.Path, action='append', required=True, help='Recovery roots containing shader_reconstruction.json')
    p.add_argument('--compiled', type=pathlib.Path, required=True)
    p.add_argument('--descriptor-restored', type=pathlib.Path, help='Optional root containing runtime_descriptor_restoration.json')
    p.add_argument('--out', type=pathlib.Path, required=True)
    p.add_argument('--jobs', type=int, default=4)
    args = p.parse_args(); args.out.mkdir(parents=True, exist_ok=False)
    source_records = {}
    for source in args.source:
        for r in json.loads((source/'shader_reconstruction.json').read_text())['records']:
            if r['cross_exit'] == 0:
                source_records[r['source']] = dict(r, source_root=str(source.resolve()))
    compiled = {r['glsl_sha256']: r for r in json.loads((args.compiled/'compile_verification.json').read_text())['records']}
    patches = {}
    if args.descriptor_restored:
        patches = {r['original']:r for r in json.loads((args.descriptor_restored/'runtime_descriptor_restoration.json').read_text())['records']}
    paths = {}
    pairs = []
    for key, row in sorted(source_records.items()):
        original = args.original / key
        recomp = args.compiled / compiled[row['glsl_sha256']]['recompiled_file']
        if key in patches:
            recomp = args.descriptor_restored / patches[key]['restored_file']
        a,b = [hashlib.sha256(p.read_bytes()).hexdigest() for p in (original,recomp)]
        paths.setdefault(a,original); paths.setdefault(b,recomp)
        pairs.append((key,row,a,b))
    cache = args.out/'reflections'; cache.mkdir()

    def reflect(item):
        digest, path = item
        dest = cache/(digest+'.json')
        r = subprocess.run([str(args.cross.resolve()),str(path.resolve()),'--reflect','--output',str(dest.resolve())],
                           capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
        if r.returncode:
            raise RuntimeError(f'{path}: {r.stderr}')
        return digest,json.loads(dest.read_text())

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        reflections = dict(pool.map(reflect,paths.items()))
    records=[]
    for key,row,a,b in pairs:
        original, new = signature(reflections[a]), signature(reflections[b])
        removed = [r for r in original if r not in new]
        added = [r for r in new if r not in original]
        records.append({'original':key,'original_sha256':a,'glsl':str(pathlib.Path(row['source_root'])/row['glsl']),
                        'glsl_sha256':row['glsl_sha256'],'recompiled_sha256':b,
                        'interfaces_identical':not removed and not added,'original_resources':len(original),
                        'runtime_descriptor_restored':key in patches,
                        'recompiled_resources':len(new),'removed_or_changed':removed,'added_or_changed':added})
    result={'modules':len(records),'distinct_reflections':len(paths),
            'identical_interfaces':sum(r['interfaces_identical'] for r in records),'records':records,
            'limits':'Descriptor/block interface equivalence only; arithmetic and rendered images are not validated here.'}
    (args.out/'layout_verification.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    print(json.dumps({k:result[k] for k in ('modules','distinct_reflections','identical_interfaces')}))
    return any(not r['interfaces_identical'] for r in records)


if __name__ == '__main__':
    raise SystemExit(main())
