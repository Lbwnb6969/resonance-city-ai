from __future__ import annotations
import argparse, csv, hashlib, json, mimetypes, struct
from collections import Counter
from pathlib import Path


def package_digests(path: Path, chunk=1024*1024):
    h=hashlib.sha256(); md5=hashlib.md5(); position=0
    with path.open('rb') as f:
        while data:=f.read(chunk): h.update(data)
    with path.open('rb') as f:
        f.seek(36)
        while data:=f.read(chunk): md5.update(data)
    return h.hexdigest(), md5.hexdigest()


def parse_package(path: Path):
    size=path.stat().st_size
    with path.open('rb') as f:
        head=f.read(48)
        if len(head)<48: raise ValueError('short header')
        version=struct.unpack_from('<I',head,0)[0]
        package_hash=head[4:36].decode('ascii','replace')
        data_off,total_files,root_entries=struct.unpack_from('<III',head,36)
        files=[]; dirs=[]; cursor=48
        def read_u32():
            nonlocal cursor
            b=f.read(4); cursor+=4
            if len(b)!=4: raise ValueError(f'EOF u32 at {cursor-4}')
            return struct.unpack('<I',b)[0]
        def read_u64():
            return struct.unpack('<Q',read_bytes(8))[0]
        def read_bytes(n):
            nonlocal cursor
            b=f.read(n); cursor+=n
            if len(b)!=n: raise ValueError(f'EOF bytes at {cursor-n}')
            return b
        def walk(count, parent=''):
            nonlocal cursor
            for _ in range(count):
                entry_offset=cursor
                n=read_u32()
                if n>1_000_000: raise ValueError(f'filename length {n} at {entry_offset}')
                name=read_bytes(n).decode('utf-8','replace')
                is_dir=read_bytes(1)[0]
                if is_dir:
                    child_count=read_u32(); skip_offset=read_u32()
                    full=(parent+'/' if parent else '')+name
                    dirs.append({'path':full,'entry_offset':entry_offset,'entries':child_count,'skip_offset':skip_offset})
                    walk(child_count,full)
                    if cursor != skip_offset:
                        raise ValueError(f'directory skip offset mismatch: {full}')
                else:
                    rel_offset=read_u64(); data_len=read_u64()
                    full=(parent+'/' if parent else '')+name
                    files.append({'path':full,'entry_offset':entry_offset,'relative_offset':rel_offset,'absolute_offset':data_off+rel_offset,'length':data_len})
        walk(root_entries)
        index_end=cursor
        if index_end != data_off:
            raise ValueError(f'index cursor {index_end} != data offset {data_off}')
        if len(files)!=total_files:
            raise ValueError(f'parsed files {len(files)} != total {total_files}')
        for x in files:
            if x['absolute_offset']+x['length']>size:
                raise ValueError(f"range outside package: {x['path']}")
    sha256,computed_md5=package_digests(path)
    if computed_md5 != package_hash: raise ValueError(f'package MD5 mismatch: {path}')
    end=0
    for rec in sorted(files,key=lambda x:x['relative_offset']):
        if rec['relative_offset'] != end: raise ValueError(f'data gap or overlap: {rec["path"]}')
        end += rec['length']
    if data_off+end != size: raise ValueError('data coverage does not end at EOF')
    return {'path':str(path),'bytes':size,'sha256':sha256,'version':version,'package_hash':package_hash,'computed_md5_after_offset_36':computed_md5,'hash_verified':True,'data_section_offset':data_off,'total_files':total_files,'root_entries':root_entries,'directories':dirs,'files':files,'index_end':index_end,'data_coverage':'contiguous-and-complete'}


def sample_file(pkg: Path, rec, out_root: Path, package_rel: str):
    slug=Path(package_rel).with_suffix('').as_posix().replace('/', '__').replace('\\\\','__')
    out=(out_root/slug/rec['path']).resolve()
    out.parent.mkdir(parents=True,exist_ok=True)
    with pkg.open('rb') as f:
        f.seek(rec['absolute_offset']); data=f.read(rec['length'])
    out.write_bytes(data)
    return out, hashlib.sha256(data).hexdigest()


def main():
    ap=argparse.ArgumentParser(); ap.add_argument('root',type=Path); ap.add_argument('--out',type=Path,required=True); ap.add_argument('--sample-bytes',type=int,default=262144); args=ap.parse_args()
    args.out.mkdir(parents=True,exist_ok=True)
    packages=sorted(args.root.rglob('*.package'))
    inventories=[]; rows=[]; ext_counts=Counter(); size_counts=Counter()
    for pkg in packages:
        inv=parse_package(pkg); inventories.append(inv)
        for rec in inv['files']:
            ext=Path(rec['path']).suffix.lower() or '<none>'; ext_counts[ext]+=1
            size_counts[ext]+=rec['length']
            rows.append({'package':str(pkg.relative_to(args.root)),'path':rec['path'],'length':rec['length'],'absolute_offset':rec['absolute_offset'],'relative_offset':rec['relative_offset']})
    summary={'target':str(args.root),'packages':[],'total_package_bytes':sum(i['bytes'] for i in inventories),'total_files':sum(i['total_files'] for i in inventories),'total_directories':sum(len(i['directories']) for i in inventories),'extensions':dict(ext_counts.most_common()),'bytes_by_extension':dict(size_counts.most_common())}
    for i in inventories:
        summary['packages'].append({k:i[k] for k in ['path','bytes','sha256','version','package_hash','computed_md5_after_offset_36','hash_verified','data_section_offset','total_files','root_entries','index_end','data_coverage']})
    (args.out/'package-summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False),encoding='utf-8')
    (args.out/'package-inventory.json').write_text(json.dumps(inventories,indent=2,ensure_ascii=False),encoding='utf-8')
    with (args.out/'package-files.csv').open('w',newline='',encoding='utf-8') as f:
        w=csv.DictWriter(f,fieldnames=rows[0].keys()); w.writeheader(); w.writerows(rows)
    # Extract only small, representative metadata/config and image/font samples.
    sample_candidates=[]
    for inv in inventories:
        pkg=Path(inv['path'])
        eligible=[rec for rec in inv['files'] if rec['length']<=args.sample_bytes]
        selected=[]
        for ext in ['.data','.meta','.bt','.gui','.lua','.vertex','.fragment','.glsl','.txt','.png','.ttf','.prefab','.scene']:
            candidates=sorted([r for r in eligible if r['path'].lower().endswith(ext)],key=lambda r:r['path'])
            if candidates: selected.append(candidates[0])
        sample_candidates.extend((pkg,rec) for rec in selected)
    samples=[]
    for pkg,rec in sample_candidates:
        out,digest=sample_file(pkg,rec,args.out/'samples',str(pkg.relative_to(args.root)))
        samples.append({'package':str(pkg.relative_to(args.root)),'path':rec['path'],'length':rec['length'],'sha256':digest,'sample_path':str(out.relative_to(args.out.resolve()))})
    (args.out/'samples.json').write_text(json.dumps(samples,indent=2,ensure_ascii=False),encoding='utf-8')
    print(json.dumps({'packages':len(inventories),'files':len(rows),'directories':sum(len(i['directories']) for i in inventories),'summary':str(args.out/'package-summary.json'),'inventory':str(args.out/'package-inventory.json'),'samples':len(samples)},indent=2))

if __name__=='__main__': main()



