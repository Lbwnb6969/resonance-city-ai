"""Recovered Tiny Glade texture/foliage archive semantics, DDS and prefab resolver.

Pure Python parsers. Optional Pillow previews. All archive integers are little endian.
This module imports the previously delivered assets_tool; game files remain read-only.
"""
from __future__ import annotations
import argparse, copy, hashlib, json, math, re, struct
from pathlib import Path
import assets_tool as A

COMPRESSION = ['Default', 'Grayscale', 'NormalMap', 'None']
TEXTURE_TYPE = ['Tex1d', 'Tex1dArray', 'Tex2d', 'Tex2dArray', 'Tex3d']

def asset_recipe_id(builder_name, version, parameter_hash):
    """Native asset_id: XXH3-128(name UTF8 + zero + u64 version + u128 hash).

    The caller must supply the builder's Rust Hash-derived parameter hash.
    Packaged archive filenames are recipe IDs; archive content hashes differ.
    """
    import xxhash
    h=int(parameter_hash,16) if isinstance(parameter_hash,str) else parameter_hash
    preimage=builder_name.encode('utf8')+b'\0'+struct.pack('<Q',version)+h.to_bytes(16,'little')
    return xxhash.xxh3_128_hexdigest(preimage)

def texture_options_hash_bytes(raw):
    """Rust Hash implementation at 0x140905300; archived descriptor input."""
    has_resize,w,h,gamma,mips,limit,packed,_=raw
    b=struct.pack('<Q',has_resize)
    if has_resize==1:b+=struct.pack('<QII',2,w,h)
    b+=struct.pack('<QQ',gamma,mips)
    if mips==2:b+=struct.pack('<I',limit)
    compression,alpha,channels,_=struct.pack('<I',packed)
    return b+struct.pack('<3Q',compression,alpha,channels)

def texture_layer_ready_id(name,source_recipe_id,raw,version=8):
    """Complete BuildTextureLayer recipe for the native Ready-source variant.

    File-path source uses std::path::Path::hash and is a different input domain.
    """
    import xxhash
    sid=int(source_recipe_id,16) if isinstance(source_recipe_id,str) else source_recipe_id
    stream=name.encode('utf8')+b'\xff'+struct.pack('<Q',1)+sid.to_bytes(16,'little')+texture_options_hash_bytes(raw)
    parameter_hash=xxhash.xxh3_128_intdigest(stream)
    return asset_recipe_id('asset_pipe::texture::BuildTextureLayer',version,parameter_hash)

def texture_layer_hash_bytes(layer):
    """Shared native 80-byte TextureLayerAssetDesc Rust Hash serialization."""
    name=layer['name'];raw=layer['descriptor']
    if 'source_id' in layer:
        sid=layer['source_id'];sid=int(sid,16) if isinstance(sid,str) else sid
        source=struct.pack('<Q',1)+sid.to_bytes(16,'little')
    else:source=struct.pack('<Q',0)+windows_path_hash_bytes(layer['source_path'])
    return name.encode('utf8')+b'\xff'+source+texture_options_hash_bytes(raw)

def texture_asset_recipe_id(name,layers,is_array=False,version=8):
    """BuildTextureAsset enum Rust Hash (Single=0 / Array=1), 0x141711ee0.

    Seven complete native fixtures cover Single Ready/File, Array empty, one,
    mixed, reordered, and 12 layers. Outer name is used only for Array.
    """
    import xxhash
    if is_array:
        stream=struct.pack('<Q',1)+name.encode('utf8')+b'\xff'+struct.pack('<Q',len(layers))
        stream+=b''.join(texture_layer_hash_bytes(layer) for layer in layers)
    else:
        if len(layers)!=1:raise ValueError('Single texture requires exactly one layer')
        stream=struct.pack('<Q',0)+texture_layer_hash_bytes(layers[0])
    return asset_recipe_id('asset_pipe::texture::BuildTextureAsset',version,xxhash.xxh3_128_intdigest(stream))

def windows_path_hash_bytes(path):
    """Windows std::path::PathBuf::hash, including all six prefix variants.

    String input is encoded as Windows WTF-8 (surrogatepass). Prefix parsing is
    corroborated with Rust 1.95.0 windows_prefix.rs and original EXE hash oracle.
    """
    b=path.encode('utf8','surrogatepass');prefix=b'';body=b;verbatim=False
    def component(value,verb):
        found=next((i for i,c in enumerate(value) if c==92 or c==47 and not verb),len(value))
        return value[:found],value[found+1:] if found<len(value) else b''
    def os_hash(v):return struct.pack('<Q',len(v))+v
    def drive(v):return len(v)>=2 and (65<=v[0]<=90 or 97<=v[0]<=122) and v[1]==58
    normalized=b[:8].replace(b'/',b'\\')
    if normalized.startswith(b'\\\\'):
        if normalized.startswith(b'\\\\?\\') and b'/' not in b[:4]:
            verbatim=True;rest=b[4:]
            if normalized.startswith(b'\\\\?\\UNC\\'):
                server,tail=component(b[8:],True);share,_=component(tail,True)
                prefix=struct.pack('<Q',1)+os_hash(server)+os_hash(share);body=b[8+len(server)+(1 if share else 0)+len(share):]
            elif drive(rest) and (len(rest)==2 or rest[2] in (47,92)):
                prefix=struct.pack('<Q',2)+bytes([rest[0]&~32]);body=rest[2:]
            else:
                value,_=component(rest,True);prefix=struct.pack('<Q',0)+os_hash(value);body=rest[len(value):]
        elif normalized.startswith(b'\\\\.\\'):
            value,_=component(b[4:],False);prefix=struct.pack('<Q',3)+os_hash(value);body=b[4+len(value):]
        else:
            server,tail=component(b[2:],False);share,_=component(tail,False)
            if server and share:
                prefix=struct.pack('<Q',4)+os_hash(server)+os_hash(share);body=b[3+len(server)+len(share):]
    elif drive(b):
        prefix=struct.pack('<Q',5)+bytes([b[0]&~32]);body=b[2:]
    state=0;parts=[];mask=(1<<64)-1
    components=body.split(b'\\') if verbatim else re.split(rb'[/\\]',body)
    for i,part in enumerate(components):
        if not part or not verbatim and part==b'.' and i>0:continue
        parts.append(part);value=(state+len(part))&mask;state=((value>>2)|(value<<62))&mask
    return prefix+b''.join(parts)+struct.pack('<Q',state)

def relative_path_hash_bytes(path):
    """Compatibility name; now supports all Windows prefixes."""
    return windows_path_hash_bytes(path)

def texture_layer_file_id(name,source_path,raw,version=8):
    """Complete BuildTextureLayer recipe for a Windows file-path source."""
    import xxhash
    stream=name.encode('utf8')+b'\xff'+struct.pack('<Q',0)+relative_path_hash_bytes(source_path)+texture_options_hash_bytes(raw)
    return asset_recipe_id('asset_pipe::texture::BuildTextureLayer',version,xxhash.xxh3_128_intdigest(stream))

def descriptor(raw):
    """Archived TextureOpts (28 bytes), then Archived TextureAssetType (u32)."""
    b = struct.pack('<8I', *raw)
    has_resize, w, h = struct.unpack_from('<3I', b)
    gamma, mips, limit = struct.unpack_from('<3I', b, 12)
    compression, alpha, channels, pad = b[24:28]
    kind = struct.unpack_from('<I', b, 28)[0]
    return dict(resize=[w,h] if has_resize else None,
                gamma=['Linear','sRGB'][gamma],
                mips=['None','Full','Limited'][mips],
                mip_limit=limit if mips == 2 else None,
                compression=COMPRESSION[compression],
                alpha_mips=['Average','AlphaDistribution'][alpha],
                channels=['Rgba','R'][channels], texture_type=TEXTURE_TYPE[kind],
                archived_padding_byte=pad)

def subresources(meta):
    """Layer outer loop, mip inner loop, then z slices. Native 0x140e16fc0."""
    offset = 0
    for layer in range(meta['layers']):
        for mip, n in enumerate(meta['mip_bytes_per_layer']):
            width, height, depth = (max(1,meta[k] >> mip) for k in ['width','height','depth'])
            yield dict(layer=layer,mip=mip,width=width,height=height,depth=depth,offset=offset,bytes=n)
            offset += n
    if offset != meta['payload_bytes']:
        raise ValueError('Texture subresource byte counts differ from archive')

def texture_catalog(root,include_foliage=False):
    root=Path(root);rows=A.texture_index(root)['entries']
    if include_foliage:
        for p in sorted((root/'compiled-assets/foliage-package').rglob('*.bin')):
            if p.name=='manifest.bin':continue
            try:
                meta=A.texture_metadata(p)
                if not meta['payload_size_matches']:continue
            except (ValueError,struct.error,OSError):continue
            rel=p.relative_to(root).as_posix();season=p.parent.name
            rows.append(dict(meta,name='foliage_'+season+'_'+p.stem,id=p.stem,file=rel,descriptor_u32_raw=None))
    return rows

def dds(meta, payload):
    kind = meta['format_kind_bits']; vk = meta['vk_format']
    if kind not in (2,3,4) or vk not in A.VK:
        raise ValueError('Unsupported texture kind/format')
    if len(payload) != meta['payload_bytes']: raise ValueError('Truncated texture payload')
    list(subresources(meta))
    volume = kind == 4
    if volume and meta['layers'] != 1: raise ValueError('3D texture has unexpected array layers')
    flags = 0x1007 | (0x20000 if meta['mips'] > 1 else 0) | (0x800000 if volume else 0)
    compressed = vk in (139,145,146)
    flags |= 0x80000 if compressed else 8
    pitch = meta['mip_bytes_per_layer'][0] if compressed else meta['width'] * A.VK[vk][2]
    caps = 0x1000 | (0x400008 if meta['mips'] > 1 else 0) | (8 if volume or meta['layers']>1 else 0)
    header = [124,flags,meta['height'],meta['width'],pitch,meta['depth'] if volume else 0,meta['mips']] + [0]*11
    pixel = [32,4,int.from_bytes(b'DX10','little'),0,0,0,0,0]
    tail = [caps,0x200000 if volume else 0,0,0,0]
    dx10 = [A.VK[vk][1],4 if volume else 3,0,meta['layers'] if not volume else 1,0]
    return b'DDS ' + struct.pack('<36I',*(header+pixel+tail+dx10)) + payload

def read_dds(data):
    """Independent DX10 DDS header consumer, validates the entire data section."""
    if data[:4] != b'DDS ' or len(data)<148: raise ValueError('Not a DX10 DDS')
    h=struct.unpack_from('<31I',data,4);dx=struct.unpack_from('<5I',data,128)
    if h[0]!=124 or h[18]!=32 or h[20]!=int.from_bytes(b'DX10','little'):raise ValueError('Bad DDS header')
    vk=next(k for k,v in A.VK.items() if v[1]==dx[0])
    w,hgt,d=h[3],h[2],h[5] if dx[1]==4 else 1
    mips=max(1,h[6]);layers=dx[3]
    sizes=[]
    for m in range(mips):
        mw,mh,md=max(1,w>>m),max(1,hgt>>m),max(1,d>>m)
        sizes.append(((mw+3)//4)*((mh+3)//4)*md*A.VK[vk][2] if vk in (139,145,146) else mw*mh*md*A.VK[vk][2])
    if sum(sizes)*layers != len(data)-148:raise ValueError('DDS payload differs from dimensions')
    return dict(width=w,height=hgt,depth=d,mips=mips,layers=layers,vk_format=vk,resource_dimension=dx[1],payload=data[148:])

def rgb9e5(value):
    """Losslessly decode a shared-exponent E5B9G9R9 packed word to exact floats."""
    scale=math.ldexp(1.0,(value>>27)-24)
    return [(value & 511)*scale,((value>>9)&511)*scale,((value>>18)&511)*scale]

def card_point_normalized(value):
    """SPIR-V 0x352c..0x3664: 4 unsigned normalized 8-bit channels.

    XYZ requires the instance's decoded bounds origin/scale for local position;
    W is separately consumed by the shader and remains named channel_w here.
    """
    return [(value>>shift & 255)/255.0 for shift in (0,8,16,24)]

def card_point_plant_offset_xz(value):
    """SPIR-V 0x2dd4..0x2e94: packed 2x unorm8, affine range [-2,+2]."""
    value &= 65535
    return [(value>>shift & 255)/255.0*4.0-2.0 for shift in (0,8)]

def pack_plant_offset_words(values):
    """Native 0x1415ea9b0: pack two archived low-u16 values into each GPU u32."""
    return [(values[i]&65535)|((values[i+1]&65535)<<16 if i+1<len(values) else 0) for i in range(0,len(values),2)]

def vector(b, field, stride, decode):
    rel,count=struct.unpack_from('<iI',b,field);start=field+rel
    if start<0 or start+count*stride>len(b):raise ValueError('Archived vector outside file')
    return [decode(b,start+i*stride) for i in range(count)]

def foliage(path, include_data=True):
    """Every 112-byte exemplar field, and all pointed-to records, with named fields."""
    path=Path(path);b=path.read_bytes();o=len(b)-64
    def key(off):return f'{int.from_bytes(b[off:off+16],"little"):032x}'
    def raw(fmt):return lambda data,off:list(struct.unpack_from(fmt,data,off))
    def positions(data,off):return struct.unpack_from('<I',data,off)[0]
    def piece(data,off):
        a,c,x,y,z=struct.unpack_from('<II3f',data,off)
        return dict(start=a,count=c,bounds=dict(radius_xz=x,center_y=y,half_y=z))
    def group(data,off):
        a,c=struct.unpack_from('<II',data,off);return dict(first_piece=a,piece_count=c)
    def part(data,off):
        return dict(color_texture=key(off),normal_texture=key(off+16),albedo_style_scale=struct.unpack_from('<f',data,off+32)[0])
    def exemplar(data,off):
        r=dict(lod0_mesh_name=A.archived_string(data,off),lod0_mesh=key(off+16),max_y=struct.unpack_from('<f',data,off+32)[0],
               cull_bounds=dict(zip(['radius_xz','center_y','half_y'],struct.unpack_from('<3f',data,off+68))),
               shadow_opacity=struct.unpack_from('<f',data,off+88)[0], archive_offset=off)
        specs=[('card_point_positions',36,4,positions),('card_point_plant_offsets',44,4,positions),
               ('card_point_pieces',52,20,piece),('card_point_piece_groups',60,8,group),
               ('lod0_parts',80,48,part),('card_point_attrib_indices',92,2,lambda d,o:struct.unpack_from('<H',d,o)[0])]
        for name,field,stride,fun in specs:
            if include_data:
                r[name]=vector(data,off+field,stride,fun)
            else:
                rel,count=struct.unpack_from('<iI',data,off+field);start=off+field+rel
                if start<0 or start+count*stride>len(data):raise ValueError('Archived vector outside file')
                r[name]=dict(count=count,stride=stride,offset=start,bytes=count*stride,
                             sha256=hashlib.sha256(data[start:start+count*stride]).hexdigest())
        return r
    def slot(data,off):
        r=dict(world_albedo_tint=A.archived_string(data,off),archive_offset=off)
        r.update(zip(['wind_wave_scale','height_scale_min','height_scale_max','xz_scale_min','xz_scale_max'],struct.unpack_from('<5f',data,off+8)))
        r['exemplars']=vector(data,off+28,112,exemplar)
        return r
    return dict(file=str(path),sha256=hashlib.sha256(b).hexdigest(),slots=vector(b,o,36,slot),
                card_textures=dict(zip(['card_direction_lut','card_point_attrib_palette_albedo','card_point_attrib_palette_normal'],[key(o+16+i*16) for i in range(3)])),
                packed_position_status='positions=u32 4x unorm8; plant_offsets=u32 low 16 bits 2x unorm8 mapped to [-2,2]; native XYZ also needs per-instance decoded bounds and transforms')

class Ron:
    """Parser for packaged RON subset, with explicit enums; does not execute Rust."""
    token=re.compile(r'\s+|//[^\n]*|/\*[\s\S]*?\*/|"(?:[^"\\]|\\.)*"|[-+]?(?:\d+\.\d*|\.\d+|\d+)(?:[eE][-+]?\d+)?|[A-Za-z_]\w*|[(){}\[\],:]')
    def __init__(self,s):
        self.t=[];end=0
        for m in self.token.finditer(s):
            if s[end:m.start()].strip():raise ValueError('Unsupported RON token at '+str(end))
            end=m.end();v=m[0]
            if not v.isspace() and not v.startswith(('//','/*')):self.t.append(v)
        if s[end:].strip():raise ValueError('Trailing unsupported RON')
        self.i=0
    def pop(self):v=self.t[self.i];self.i+=1;return v
    def peek(self):return self.t[self.i] if self.i<len(self.t) else None
    def value(self):
        v=self.pop()
        if v in ('(', '{','['):
            close={'(':')','{':'}','[':']'}[v];seq=[];mapping={};is_map=v=='{'
            while self.peek()!=close:
                a=self.value()
                if self.peek()==':':
                    self.pop();is_map=True
                    if isinstance(a,dict) and set(a)=={'$variant'}:a=a['$variant']
                    if not isinstance(a,str):raise ValueError('Unsupported map key')
                    mapping[a]=self.value()
                else:seq.append(a)
                if self.peek()==',':self.pop()
                elif self.peek()!=close:raise ValueError('Expected RON comma')
            self.pop();return mapping if is_map or v=='(' and not seq else seq
        if v.startswith('"'):return json.loads(v)
        if v in ('true','false'):return v=='true'
        if re.match(r'[-+]?\d|[-+]?\.',v):return float(v) if any(c in v for c in '.eE') else int(v)
        if v=='None':return None
        if self.peek()=='(':
            val=self.value();return {'$variant':v,'$value':val}
        return {'$variant':v}
    def parse(self):
        v=self.value()
        if self.i!=len(self.t):raise ValueError('Unconsumed RON tokens')
        return v

def inherit(child,parent):
    """Shipped implicit-value subset: child leaf wins; structures inherit recursively.

    Missing keys inherit. Explicit None is a specified value. Enums are atomic.
    Extended Inheritable reset/disable syntax is deliberately not inferred.
    """
    if not isinstance(child,dict) or not isinstance(parent,dict) or '$variant' in child or '$variant' in parent:return copy.deepcopy(child)
    r=copy.deepcopy(parent)
    for k,v in child.items():r[k]=inherit(v,parent[k]) if k in parent else copy.deepcopy(v)
    return r

def rt_config_vector_defaults(config):
    """Four implicit vec3 defaults in resolved Specified RT config, 0x14270d410.

    Byte-sized mesh/semantic enums require their declarations for named defaults;
    this helper leaves those keys as supplied instead of guessing enum names.
    Explicit optional None and Inheritable state variants are outside this helper.
    """
    r=copy.deepcopy(config)
    for name in ['mesh_scale','summer_albedo','autumn_albedo','winter_albedo']:
        if name not in r:r[name]=[1.0,1.0,1.0]
    return r

def prefabs(root):
    base=Path(root)/'assets/prefabs';rows=[]
    for path in sorted(base.rglob('*.ron')):
        if path.name=='default.ron':continue
        merged={};sources=[]
        chain=[];at=path.parent
        while True:
            chain.append(at)
            if at==base:break
            at=at.parent
        for directory in reversed(chain):
            default=directory/'default.ron'
            if default.exists():
                merged=inherit(Ron(default.read_text(encoding='utf8')).parse(),merged);sources.append(default.relative_to(root).as_posix())
        merged=inherit(Ron(path.read_text(encoding='utf8')).parse(),merged);sources.append(path.relative_to(root).as_posix())
        rows.append(dict(name=path.relative_to(base).with_suffix('').as_posix(),sources=sources,config=merged))
    return dict(prefabs=rows,count=len(rows),scope='All shipped assets/prefabs RON implicit values; extended Inheritable reset syntax is not supported.')

def export_textures(root,out,names,all_items=False,png=False,include_foliage=False):
    root=Path(root);out=Path(out);out.mkdir(parents=True,exist_ok=True);rows=[]
    for meta in texture_catalog(root,include_foliage):
        if not all_items and meta['name'] not in names:continue
        b=(root/meta['file']).read_bytes();payload=b[meta['payload_offset']:meta['payload_offset']+meta['payload_bytes']]
        data=dds(meta,payload);parsed=read_dds(data)
        if parsed.pop('payload')!=payload:raise ValueError('DDS payload round trip failed')
        stem=re.sub(r'[^A-Za-z0-9_.-]','_',meta['name']);dest=out/(stem+'.dds');dest.write_bytes(data)
        r=dict(name=meta['name'],dds=str(dest),payload_sha256=hashlib.sha256(payload).hexdigest(),descriptor=descriptor(meta['descriptor_u32_raw']) if meta['descriptor_u32_raw'] else None,dds_header=parsed,subresources=list(subresources(meta)))
        if png:
            from PIL import Image
            previews=[]
            for sub in r['subresources']:
                if sub['mip']!=0:continue
                if meta['vk_format']==123:
                    n=sub['width']*sub['height'];values=struct.unpack('<'+'I'*(len(payload)//4),payload)
                    for z in range(sub['depth']):
                        rgb=[rgb9e5(v) for v in values[z*n:(z+1)*n]]
                        pf=out/(stem+f'.z{z:02d}.pfm')
                        # PFM convention stores rows bottom-to-top; little-endian floats.
                        floats=[v for y in reversed(range(sub['height'])) for color in rgb[y*sub['width']:(y+1)*sub['width']] for v in color]
                        pf.write_bytes(f'PF\n{sub["width"]} {sub["height"]}\n-1.0\n'.encode()+struct.pack('<'+'f'*len(floats),*floats))
                        im=Image.new('RGB',(sub['width'],sub['height']));im.putdata([tuple(round(max(0,min(1,c))*255) for c in px) for px in rgb])
                        p=out/(stem+f'.z{z:02d}.png');im.save(p);previews.append(str(p))
                else:
                    single=dict(meta,width=sub['width'],height=sub['height'],depth=1,mips=1,layers=1,format_kind_bits=2,payload_bytes=sub['bytes'],mip_bytes_per_layer=[sub['bytes']])
                    one=dds(single,payload[sub['offset']:sub['offset']+sub['bytes']]);import io
                    with Image.open(io.BytesIO(one)) as im:
                        im.load();p=out/(stem+f'.layer{sub["layer"]:02d}.png');im.save(p);previews.append(str(p))
            r['previews']=previews
        rows.append(r)
    A.dump(out/'recovered-textures.json',rows)
    return dict(textures=len(rows),preview_count=sum(len(r.get('previews',[])) for r in rows),output=str(out))

def main():
    ap=argparse.ArgumentParser(description=__doc__);sp=ap.add_subparsers(dest='cmd',required=True)
    p=sp.add_parser('asset-id');p.add_argument('--builder',required=True);p.add_argument('--version',type=int,required=True);p.add_argument('--parameter-hash',required=True)
    p=sp.add_parser('texture-layer-id');p.add_argument('--name',required=True);g=p.add_mutually_exclusive_group(required=True);g.add_argument('--source-id');g.add_argument('--source-path');p.add_argument('--descriptor',required=True,help='JSON array of 8 archived u32 descriptor values');p.add_argument('--version',type=int,default=8)
    p=sp.add_parser('texture-asset-id');p.add_argument('--recipe',type=Path,required=True,help='JSON {name,layers:[{name,source_id|source_path,descriptor}],is_array,version}')
    for cmd in ['textures','foliage','prefabs']:
        p=sp.add_parser(cmd);p.add_argument('--root',type=Path,required=True);p.add_argument('--out',type=Path,required=True)
        if cmd=='textures':p.add_argument('--name',action='append',default=[]);p.add_argument('--all',action='store_true');p.add_argument('--png',action='store_true');p.add_argument('--include-foliage',action='store_true')
        if cmd=='foliage':p.add_argument('--summary',action='store_true')
    a=ap.parse_args()
    if a.cmd=='asset-id':
        print(json.dumps(dict(asset_recipe_id=asset_recipe_id(a.builder,a.version,a.parameter_hash))));return
    if a.cmd=='texture-layer-id':
        raw=json.loads(a.descriptor)
        key=texture_layer_ready_id(a.name,a.source_id,raw,a.version) if a.source_id is not None else texture_layer_file_id(a.name,a.source_path,raw,a.version)
        print(json.dumps(dict(asset_recipe_id=key)));return
    if a.cmd=='texture-asset-id':
        print(json.dumps(dict(asset_recipe_id=texture_asset_recipe_id(**json.loads(a.recipe.read_text(encoding='utf8'))))));return
    if a.out.resolve().is_relative_to(a.root.resolve()):ap.error('Output must be outside game directory')
    if a.cmd=='textures':r=export_textures(a.root,a.out,a.name,a.all,a.png,a.include_foliage)
    elif a.cmd=='prefabs':r=prefabs(a.root);A.dump(a.out,r);r={'prefabs':r['count'],'output':str(a.out)}
    else:
        configs=[]
        for p in (a.root/'compiled-assets/foliage-package').rglob('manifest.bin'):
            configs.append(foliage(p.parent/(A.manifest(p)[0]['id']+'.bin'),not a.summary))
        A.dump(a.out,configs);r=dict(configs=len(configs),slots=sum(len(c['slots']) for c in configs),exemplars=sum(len(s['exemplars']) for c in configs for s in c['slots']),output=str(a.out))
    print(json.dumps(r))

if __name__=='__main__':main()
