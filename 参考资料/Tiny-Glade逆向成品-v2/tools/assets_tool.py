#!/usr/bin/env python3
"""Read-only Tiny Glade asset inventory, integrity, archive index and extraction.

Python 3.11+. The inspect command uses blake3 for shipped build integrity.
Optional Pillow enables BC4/BC7 DDS previews; other commands use the standard library.
All output is caller-selected; game files are never written.
"""
from __future__ import annotations
import argparse
import collections
import hashlib
import json
import math
from pathlib import Path
import re
import struct
import tomllib
import zlib

VK = {37: ('R8G8B8A8_UNORM', 28, 4), 43: ('R8G8B8A8_SRGB', 29, 4),
      139: ('BC4_UNORM_BLOCK', 80, 8), 145: ('BC7_UNORM_BLOCK', 98, 16),
      146: ('BC7_SRGB_BLOCK', 99, 16), 123: ('E5B9G9R9_UFLOAT_PACK32', 67, 4)}

def dump(path, data):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2), encoding='utf-8')

def sha(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as f:
        for b in iter(lambda: f.read(1024 * 1024), b''):
            h.update(b)
    return h.hexdigest()

def blake(path):
    import blake3
    h=blake3.blake3()
    with Path(path).open('rb') as f:
        for b in iter(lambda:f.read(1024*1024),b''):h.update(b)
    return h.hexdigest()

def manifest(path):
    b = Path(path).read_bytes()
    o = 0
    def take(n):
        nonlocal o
        if o + n > len(b):
            raise ValueError('Truncated manifest')
        v = b[o:o+n]; o += n; return v
    def string():
        return take(struct.unpack('<Q', take(8))[0]).decode('utf-8')
    n = struct.unpack('<Q', take(8))[0]
    rows = []
    for _ in range(n):
        name = string()
        key = f'{int.from_bytes(take(16), "little"):032x}'
        typ = string()
        rows.append({'name': name, 'id': key, 'rust_type': typ,
                     'file_exists': (Path(path).parent / (key + '.bin')).is_file()})
    if o != len(b):
        raise ValueError(f'{len(b)-o} unparsed manifest bytes')
    return rows

def archived_string(b, offset):
    if b[offset] & 128:
        w, rel = struct.unpack_from('<Ii', b, offset)
        length = ((w >> 8) << 7) | (w & 127)
        start = offset + rel
        if start < 0 or start + length > len(b):
            raise ValueError('ArchivedString points outside archive')
        return b[start:start+length].decode('utf-8')
    return b[offset:offset+8].split(b'\xff', 1)[0].decode('utf-8')

def texture_metadata(path):
    p = Path(path)
    with p.open('rb') as f:
        f.seek(-28, 2); footer = f.read(28)
    w, h, d, mips, layers, fmt, rel, n = struct.unpack('<IIIHHIiI', footer)
    size = p.stat().st_size
    start = size - 8 + rel
    if not all((w, h, d, mips, layers)) or mips > 32 or start < 0 or start + n > size - 28:
        raise ValueError('Invalid texture archive footer')
    vk = fmt & 255
    sizes = []
    if vk in VK:
        block_bytes = VK[vk][2]
        for i in range(mips):
            mw, mh, md = max(1, w >> i), max(1, h >> i), max(1, d >> i)
            sizes.append((max(1, (mw+3)//4) * max(1, (mh+3)//4) if vk in (139,145,146)
                          else mw * mh) * md * block_bytes)
    expected = sum(sizes) * layers if sizes else None
    # The shipped 3D LUT uses depth=48, layers=1; its mip formula includes depth.
    return {'width': w, 'height': h, 'depth': d, 'mips': mips, 'layers': layers,
            'format_word': fmt, 'format_kind_bits': fmt >> 8, 'vk_format': vk,
            'vk_format_name': VK.get(vk, ('unknown',))[0], 'payload_offset': start,
            'payload_bytes': n, 'file_bytes': size, 'mip_bytes_per_layer': sizes,
            'expected_payload_bytes': expected, 'payload_size_matches': n == expected,
            'footer_offset': size-28}

def texture_index(root):
    package = Path(root) / 'compiled-assets/texture-package'
    rows = manifest(package / 'manifest.bin')
    item = next(row for row in rows if row['rust_type'] == 'asset_pipe::texture::TextureAssetList')
    path = package / (item['id'] + '.bin'); b = path.read_bytes()
    end = len(b)-8
    rel, count = struct.unpack_from('<iI', b, end)
    start = end+rel
    if start < 0 or end-start != count*64:
        raise ValueError('Texture list does not match observed 64-byte layout')
    out = []
    for i in range(count):
        o = start+i*64
        name = archived_string(b, o)
        key = f'{int.from_bytes(b[o+16:o+32], "little"):032x}'
        p = package / (key + '.bin')
        row = {'name': name, 'id': key, 'file': str(p.relative_to(root)).replace('\\','/'),
               'entry_offset': o, 'descriptor_u32_raw': list(struct.unpack_from('<8I', b, o+32)),
               'file_exists': p.is_file()}
        if p.is_file(): row.update(texture_metadata(p))
        out.append(row)
    return {'list_file': str(path.relative_to(root)).replace('\\','/'),
            'sha256': sha(path), 'entry_size': 64, 'entries_offset': start,
            'count': count, 'entries': out}

def compiled_mesh(path, decode=False):
    p=Path(path); b=p.read_bytes(); o=len(b)-16
    ip,n,ap,c=struct.unpack_from('<iIiI',b,o); index_start=o+ip; attrs_start=o+8+ap
    if not (0<c<100 and 0<=index_start and index_start+n*4<=attrs_start and
            0<=attrs_start and attrs_start+c*20==o):
        raise ValueError('Not the observed compiled foliage mesh layout')
    attrs=[]; d={'indices':{'type':['int',1]},'attributes':[],'double_sided':False}
    vertex_count=None
    for i in range(c):
        a=attrs_start+i*20; name=archived_string(b,a)
        typ,ptr,count=struct.unpack_from('<IiI',b,a+8); start=a+12+ptr
        if typ not in (0,1,2) or start<0 or start+count*(typ+1)*4>attrs_start:
            raise ValueError('Unknown or invalid compiled attribute')
        if vertex_count is None:vertex_count=count
        if count!=vertex_count:raise ValueError('Compiled attribute counts disagree')
        attrs.append({'name':name,'type_enum':typ,'components':typ+1,'count':count,'offset':start,'bytes':count*(typ+1)*4})
        d['attributes'].append(name)
        if decode:
            vals=struct.unpack_from('<'+'f'*(count*(typ+1)),b,start)
            d[name]={'type':['float',typ+1],'buffer':list(vals) if typ==0 else [list(vals[j:j+typ+1]) for j in range(0,len(vals),typ+1)]}
    inds=struct.unpack_from('<'+'I'*n,b,index_start)
    if n%3 or any(i>=vertex_count for i in inds):raise ValueError('Invalid compiled mesh indices')
    if 'Vertex_Position' not in d['attributes']:raise ValueError('No position attribute')
    if decode:d['indices']['buffer']=list(inds)
    meta={'file_bytes':len(b),'root_offset':o,'indices_offset':index_start,'indices':n,
          'vertices':vertex_count,'triangles':n//3,'attribute_table_offset':attrs_start,'attributes':attrs}
    return (meta,d) if decode else meta

def compiled_index(root):
    rows=[]
    for p in sorted((Path(root)/'compiled-assets').rglob('*.bin')):
        row={'file':p.relative_to(root).as_posix(),'file_bytes':p.stat().st_size}
        if p.name=='manifest.bin':row['kind']='package_manifest'
        else:
            try:
                tex=texture_metadata(p)
                if not tex['payload_size_matches']:raise ValueError('Payload length differs')
                row.update(tex);row['kind']='texture_archive'
            except (ValueError,struct.error,OSError):
                try:row.update(compiled_mesh(p));row['kind']='foliage_mesh_archive'
                except (ValueError,struct.error,UnicodeError):
                    entries=manifest(p.parent/'manifest.bin')
                    match=next((r for r in entries if p.stem==r['id']),None)
                    row['kind']='typed_root_archive' if match else 'unknown'
                    if match:row['rust_type']=match['rust_type']
        rows.append(row)
    return {'counts':dict(collections.Counter(r['kind'] for r in rows)),'files':rows}

def foliage_config(path):
    p=Path(path);b=p.read_bytes();o=len(b)-64
    rel,count=struct.unpack_from('<iI',b,o);start=o+rel
    if not (0<count<100 and 0<=start and start+count*36<=o):raise ValueError('Unknown foliage root layout')
    groups=[]
    for i in range(count):
        a=start+i*36;name=archived_string(b,a);scalar_values=list(struct.unpack_from('<5f',b,a+8))
        ptr,n=struct.unpack_from('<iI',b,a+28);v=a+28+ptr
        if v<0 or v+n*112>start:raise ValueError('Invalid exemplar table')
        exemplars=[]
        for j in range(n):
            e=v+j*112;key=f'{int.from_bytes(b[e+16:e+32],"little"):032x}'
            exemplars.append({'name':archived_string(b,e),'mesh_id':key,'file_exists':(p.parent/(key+'.bin')).is_file(),
                              'offset':e,'record_bytes':112,'body_u32_raw':list(struct.unpack_from('<20I',b,e+32))})
        groups.append({'offset':a,'world_albedo_tint_reference':name,'scalar_fields_raw_f32':scalar_values,'exemplars':exemplars})
    refs=[f'{int.from_bytes(b[o+16+i*16:o+32+i*16],"little"):032x}' for i in range(3)]
    return {'file':str(p),'file_bytes':len(b),'root_offset':o,'groups':groups,
            'root_texture_ids':[{'id':key,'file_exists':(p.parent/(key+'.bin')).is_file()} for key in refs],
            'semantic_limit':'Group float fields and exemplar body arrays retain raw values; their gameplay meaning is unresolved.'}

def audio_bank(path):
    p=Path(path);b=p.read_bytes()
    if b[:4]!=b'RIFF' or b[8:12]!=b'FEV ':raise ValueError('Not RIFF/FEV bank')
    declared=struct.unpack_from('<I',b,4)[0]+8
    if declared!=len(b):raise ValueError('RIFF declared size differs')
    o=12;chunks=[];fsbs=[]
    while o+8<=len(b):
        cid,n=struct.unpack_from('<4sI',b,o);end=o+8+n
        if end>len(b):raise ValueError('RIFF chunk extends beyond bank')
        chunks.append({'id':cid.decode('ascii'),'offset':o,'data_offset':o+8,'bytes':n})
        if cid==b'SND ':
            at=b.find(b'FSB5',o+8,end)
            if at!=-1:
                version,count,hsize,nsize,dsize,mode=struct.unpack_from('<6I',b,at+4)
                size=60+hsize+nsize+dsize
                if version!=1 or at+size>end:raise ValueError('Unrecognized FSB5 header')
                names=[];ns=at+60+hsize
                if nsize:
                    if count*4>nsize:raise ValueError('Invalid FSB5 name offsets')
                    for i in range(count):
                        off=struct.unpack_from('<I',b,ns+i*4)[0];st=ns+off;z=b.find(b'\0',st,ns+nsize)
                        if z==-1:raise ValueError('Unterminated FSB sample name')
                        names.append(b[st:z].decode('utf-8'))
                fsbs.append({'offset':at,'bytes':size,'version':version,'sample_count':count,
                             'sample_headers_bytes':hsize,'name_table_bytes':nsize,'audio_data_bytes':dsize,
                             'codec_mode_raw':mode,'names':names})
        o=end+(n&1)
    if o!=len(b):raise ValueError('Trailing RIFF bytes')
    return {'file':str(p),'bytes':len(b),'chunks':chunks,'fsb5':fsbs}

def audio(root,out,names,extract=False):
    root=Path(root);out=Path(out);rows=[]
    for p in sorted((root/'assets/audio').rglob('*.bank')):
        if names and p.name not in names:continue
        row=audio_bank(p)
        if extract:
            out.mkdir(parents=True,exist_ok=True)
            with p.open('rb') as f:
                for i,item in enumerate(row['fsb5']):
                    dest=out/(p.stem+f'.{i}.fsb');f.seek(item['offset']);dest.write_bytes(f.read(item['bytes']));item['extracted']=str(dest)
        rows.append(row)
    dump(out/'assets_audio_banks.json',rows)
    print(json.dumps({'banks':len(rows),'fsb5':sum(len(r['fsb5']) for r in rows),
                      'samples':sum(f['sample_count'] for r in rows for f in r['fsb5']),
                      'extracted':extract,'output':str(out)}))

def inspect(root, out):
    root = Path(root).resolve(); out = Path(out)
    files = sorted(p for p in root.rglob('*') if p.is_file())
    rows = []
    groups = collections.defaultdict(lambda: {'count': 0, 'bytes': 0, 'extensions': collections.Counter()})
    for p in files:
        rel = p.relative_to(root).as_posix(); size = p.stat().st_size
        top = rel.split('/')[0] if '/' in rel else '(root)'
        g = groups[top]; g['count'] += 1; g['bytes'] += size; g['extensions'][p.suffix.lower()] += 1
        rows.append({'path':rel, 'bytes':size, 'sha256':sha(p)})
    for g in groups.values(): g['extensions'] = dict(g['extensions'])
    dump(out/'assets_inventory.json', {'root':str(root), 'count':len(rows),
                                      'bytes':sum(t['bytes'] for t in rows), 'groups':dict(groups), 'files':rows})
    expected = json.loads((root/'build-info/manifest.json').read_text(encoding='utf-8'))
    actual = {r['path']:r for r in rows}
    checked = []
    for path, digest in expected['files']:
        row = actual.get(path)
        observed = blake(root/path) if row else None
        status = 'missing' if row is None else 'match' if observed == digest.lower() else 'mismatch'
        checked.append({'path':path, 'expected_blake3':digest, 'actual_blake3':observed,
                        'status':status})
    check = {'hash_algorithm':'BLAKE3', 'manifest_version':expected['version'], 'listed':len(checked),
             'status_counts':dict(collections.Counter(r['status'] for r in checked)),
             'mismatches':[r for r in checked if r['status']!='match'],
             'unlisted':[r['path'] for r in rows if r['path'] not in {p for p,h in expected['files']}],
             'entries':checked}
    dump(out/'assets_integrity.json', check)
    packages = tomllib.loads((root/'build-info/Cargo.lock').read_text(encoding='utf-8'))['package']
    local = [p for p in packages if 'source' not in p]
    dump(out/'assets_dependencies.json', {'toolchain':json.loads((root/'build-info/toolchain-info.json').read_text()),
                                         'packages':packages, 'local_packages':local,
                                         'count':len(packages), 'local_count':len(local)})
    manifests = [{'file':p.relative_to(root).as_posix(), 'sha256':sha(p), 'entries':manifest(p)}
                 for p in sorted((root/'compiled-assets').rglob('manifest.bin'))]
    dump(out/'assets_package_manifests.json', manifests)
    tex = texture_index(root); dump(out/'assets_textures.json', tex)
    compiled=compiled_index(root);dump(out/'assets_compiled_index.json',compiled)
    foliage=[]
    for m in sorted((root/'compiled-assets/foliage-package').rglob('manifest.bin')):
        item=manifest(m)[0];foliage.append(foliage_config(m.parent/(item['id']+'.bin')))
    dump(out/'assets_foliage_configs.json',foliage)
    schemas = []
    for p in sorted((root/'assets').rglob('*.json')):
        value = json.loads(p.read_text(encoding='utf-8'))
        schema = {'file':p.relative_to(root).as_posix(), 'root_type':type(value).__name__}
        if isinstance(value, dict):
            schema['fields']={k: ('object:' + ','.join(v.keys()) if isinstance(v,dict) else
                                  f'list:{len(v)}' if isinstance(v,list) else type(v).__name__) for k,v in value.items()}
        elif isinstance(value,list): schema['count']=len(value)
        schemas.append(schema)
    dump(out/'assets_json_schemas.json', schemas)
    refs = []
    for p in sorted((root/'assets').rglob('*.ron')):
        s = p.read_text(encoding='utf-8')
        # This is a source reference index, not a RON parser or semantic inheritance resolver.
        refs.append({'file':p.relative_to(root).as_posix(), 'bytes':p.stat().st_size,
                     'references':[{'field':m.group(1), 'value':json.loads(m.group(2)), 'offset':m.start()}
                                   for m in re.finditer(r'\b(mesh|shader|texture|material|prefab)\s*:\s*("(?:[^"\\]|\\.)*")',s)]})
    dump(out/'assets_ron_reference_index.json', refs)
    print(json.dumps({'files':len(rows),'integrity':check['status_counts'],
                      'mismatches':check['mismatches'][:10], 'textures':tex['count'],
                      'texture_payload_checks':dict(collections.Counter(r['payload_size_matches'] for r in tex['entries'])),
                      'compiled_assets':compiled['counts'],
                      'cargo_packages':len(packages), 'local_packages':len(local), 'output':str(out)},ensure_ascii=False,indent=2))

def dds(meta, payload):
    vk = meta['vk_format']
    if vk not in VK or meta['layers'] != 1 or meta['depth'] != 1 or meta['format_kind_bits'] != 2:
        raise ValueError('DDS output supports confirmed single-layer 2D textures only; raw extraction supports all')
    flags=0x1|0x2|0x4|0x1000|0x20000
    pitch = meta['mip_bytes_per_layer'][0] if vk in (139,145,146) else meta['width']*VK[vk][2]
    flags |= 0x80000 if vk in (139,145,146) else 0x8
    caps = 0x1000 | (0x400008 if meta['mips']>1 else 0)
    header = [124,flags,meta['height'],meta['width'],pitch,0,meta['mips']]+[0]*11
    pixel = [32,4,int.from_bytes(b'DX10','little'),0,0,0,0,0]
    tail = [caps,0,0,0,0]
    return b'DDS '+struct.pack('<31I',*(header+pixel+tail))+struct.pack('<5I',VK[vk][1],3,0,1,0)+payload

def texture_extract(root, out, names, all_items=False, previews=False):
    root=Path(root).resolve(); out=Path(out).resolve(); out.mkdir(parents=True,exist_ok=True)
    index = texture_index(root)
    wanted=[r for r in index['entries'] if all_items or r['name'] in names]
    if not wanted: raise ValueError('No matching texture names; inspect assets_textures.json')
    produced=[]
    for row in wanted:
        p=root/row['file']; b=p.read_bytes(); payload=b[row['payload_offset']:row['payload_offset']+row['payload_bytes']]
        dest=out / re.sub(r'[^A-Za-z0-9_.-]','_',row['name'])
        raw=dest.with_suffix('.raw'); raw.write_bytes(payload)
        dump(dest.with_suffix('.json'),row)
        record={'name':row['name'],'raw':str(raw),'payload_sha256':hashlib.sha256(payload).hexdigest()}
        if row['layers']==row['depth']==1 and row['format_kind_bits']==2 and row['vk_format'] in VK:
            dp=dest.with_suffix('.dds'); dp.write_bytes(dds(row,payload));record['dds']=str(dp)
            if previews:
                try:
                    from PIL import Image
                    with Image.open(dp) as im:
                        im.load(); png=dest.with_suffix('.png'); im.save(png);record['png']=str(png)
                        record['decoded_dimensions']=list(im.size)
                except (ImportError,OSError,NotImplementedError) as e: record['preview_error']=str(e)
        produced.append(record)
    dump(out/'extraction.json',produced)
    print(json.dumps({'textures':len(wanted), 'dds':sum('dds' in r for r in produced),
                      'png':sum('png' in r for r in produced),'output':str(out)},ensure_ascii=False))

def mesh_export(path, out, data=None):
    p=Path(path); d=data if data is not None else json.loads(p.read_text(encoding='utf-8'))
    pos=d['Vertex_Position']['buffer']; inds=d['indices']['buffer']
    if d['Vertex_Position']['type'] != ['float',3] or len(inds)%3 or any(not isinstance(i,int) or not 0<=i<len(pos) for i in inds):
        raise ValueError('Mesh is not valid indexed float3 triangle geometry')
    nrm=d.get('Vertex_Normal',{}).get('buffer'); uv=d.get('Vertex_UV',{}).get('buffer')
    if nrm is not None and len(nrm)!=len(pos): raise ValueError('Normal count differs')
    if uv is not None and len(uv)!=len(pos): raise ValueError('UV count differs')
    out=Path(out);out.parent.mkdir(parents=True,exist_ok=True)
    with out.open('w',encoding='utf-8') as f:
        f.write('# Tiny Glade JSON mesh; original coordinate system; no transforms applied\n')
        for v in pos: f.write('v '+' '.join(map(str,v))+'\n')
        if uv is not None:
            for v in uv:f.write('vt '+' '.join(map(str,v[:2]))+'\n')
        if nrm is not None:
            for v in nrm:f.write('vn '+' '.join(map(str,v))+'\n')
        for i in range(0,len(inds),3):
            def ref(j):
                v=j+1
                return f'{v}/{v}/{v}' if uv is not None and nrm is not None else f'{v}/{v}' if uv is not None else f'{v}//{v}' if nrm is not None else str(v)
            f.write('f '+' '.join(ref(j) for j in inds[i:i+3])+'\n')
    report={'source':str(p),'source_sha256':sha(p),'output':str(out),'vertices':len(pos),'triangles':len(inds)//3,
            'bounds':[[min(v[i] for v in pos),max(v[i] for v in pos)] for i in range(3)],
            'preserved_attributes':['Vertex_Position']+(['Vertex_Normal'] if nrm else [])+(['Vertex_UV'] if uv else []),
            'not_exported_attributes':[a for a in d.get('attributes',[]) if a not in ('Vertex_Position','Vertex_Normal','Vertex_UV')],
            'double_sided':d.get('double_sided')}
    dump(out.with_suffix('.source.json'),report);return report

def meshes(root,out):
    root=Path(root);out=Path(out);reports=[];other=[]
    for p in sorted((root/'assets/meshes').rglob('*.json')):
        d=json.loads(p.read_text(encoding='utf-8'))
        if not isinstance(d,dict) or not all(k in d for k in ('Vertex_Position','indices')):
            other.append({'file':p.relative_to(root).as_posix(),'status':'not indexed position mesh'});continue
        if len(d['indices']['buffer'])%3:
            other.append({'file':p.relative_to(root).as_posix(),'status':'non-triangle index sequence; primitive topology not declared',
                          'vertices':len(d['Vertex_Position']['buffer']),'indices':d['indices']['buffer']});continue
        dest=(out/p.relative_to(root/'assets/meshes')).with_suffix('.obj')
        reports.append(mesh_export(p,dest))
    dump(out/'mesh-export.json',{'exported':reports,'other':other})
    print(json.dumps({'exported':len(reports),'non_geometry':len(other),'vertices':sum(r['vertices'] for r in reports),
                      'triangles':sum(r['triangles'] for r in reports),'output':str(out)}))

def compiled_meshes(root,out):
    root=Path(root);out=Path(out);reports=[]
    for row in compiled_index(root)['files']:
        if row['kind']!='foliage_mesh_archive':continue
        path=root/row['file'];meta,d=compiled_mesh(path,True)
        dest=(out/path.relative_to(root/'compiled-assets/foliage-package')).with_suffix('.obj')
        report=mesh_export(path,dest,d);report['archive_layout']=meta;reports.append(report)
    dump(out/'compiled-mesh-export.json',reports)
    print(json.dumps({'exported':len(reports),'vertices':sum(r['vertices'] for r in reports),
                      'triangles':sum(r['triangles'] for r in reports),'output':str(out)}))

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    sub=parser.add_subparsers(dest='command',required=True)
    for name in ('inspect','textures','meshes','compiled-meshes','audio'):
        p=sub.add_parser(name);p.add_argument('--root',required=True,type=Path);p.add_argument('--out',required=True,type=Path)
        if name=='textures':
            p.add_argument('--name',action='append',default=[]);p.add_argument('--all',action='store_true');p.add_argument('--png',action='store_true')
        if name=='audio':p.add_argument('--name',action='append',default=[]);p.add_argument('--extract',action='store_true')
    p=sub.add_parser('manifest');p.add_argument('path',type=Path)
    p=sub.add_parser('mesh');p.add_argument('path',type=Path);p.add_argument('--out',type=Path,required=True)
    args=parser.parse_args()
    if hasattr(args,'root') and args.out.resolve().is_relative_to(args.root.resolve()):
        parser.error('Output must be outside game directory')
    if args.command=='inspect':inspect(args.root,args.out)
    elif args.command=='textures':texture_extract(args.root,args.out,args.name,args.all,args.png)
    elif args.command=='meshes':meshes(args.root,args.out)
    elif args.command=='compiled-meshes':compiled_meshes(args.root,args.out)
    elif args.command=='audio':audio(args.root,args.out,args.name,args.extract)
    elif args.command=='mesh':print(json.dumps(mesh_export(args.path,args.out),ensure_ascii=False))
    elif args.command=='manifest':print(json.dumps(manifest(args.path),ensure_ascii=False,indent=2))

if __name__=='__main__':main()
