"""Native oracle for recovered archive mappings and texture subresource order.

Runs only two isolated machine-code routines in Unicorn, without launching game.
Requires pefile, unicorn. Verifies every named texture against its native iterator.
"""
import argparse, hashlib, json, struct
from pathlib import Path
import recovered_resources as R
import assets_tool as A

EXE_SHA256='4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5'

def verify(root):
    import pefile,unicorn as u,unicorn.x86_const as x
    exe=Path(root)/'tiny-glade.exe'
    digest=A.sha(exe)
    if digest!=EXE_SHA256:raise ValueError('Recovered addresses require original EXE identity')
    pe=pefile.PE(str(exe),fast_load=True);cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64)
    base=pe.OPTIONAL_HEADER.ImageBase;cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x10000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    def run(address,a=0x200000,b=0x201000,c=0):
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,a);cpu.reg_write(x.UC_X86_REG_RDX,b);cpu.reg_write(x.UC_X86_REG_R8,c)
        cpu.emu_start(address,0x10000,count=5000)
        if cpu.reg_read(x.UC_X86_REG_RIP)!=0x10000:raise ValueError('Native routine exceeded instruction limit')
    textures=R.texture_catalog(root,True);results=[];regions=0
    for meta in textures:
        state=bytearray(48);ptr=0x400000
        block=4 if meta['vk_format'] in (139,145,146) else 1
        stride=A.VK[meta['vk_format']][2]
        base_iter=struct.pack('<3H6B',meta['width'],meta['height'],meta['depth'],block,block,0,meta['mips'],stride,0)
        struct.pack_into('<QQ',state,0,ptr,meta['payload_bytes']);state[16:28]=base_iter;state[28:40]=base_iter
        struct.pack_into('<HH',state,40,0,meta['layers']);cpu.mem_write(0x201000,bytes(state))
        for sub in R.subresources(meta):
            run(0x140e16fc0);out=bytes(cpu.mem_read(0x200000,48))
            p,n=struct.unpack_from('<QQ',out);w,h,d,m,l=struct.unpack_from('<5I',out,28)
            expected=[ptr+sub['offset'],sub['bytes'],sub['width'],sub['height'],sub['depth'],sub['mip'],sub['layer']]
            observed=[p,n,w,h,d,m,l]
            if expected!=observed:raise ValueError((meta['name'],expected,observed))
            regions+=1
        run(0x140e16fc0)
        if struct.unpack('<Q',cpu.mem_read(0x200000,8))[0]!=0:raise ValueError('Iterator did not reach end')
        archive=(Path(root)/meta['file']).read_bytes();payload=archive[meta['payload_offset']:meta['payload_offset']+meta['payload_bytes']]
        data=R.dds(meta,payload);parsed=R.read_dds(data)
        if parsed['payload']!=payload:raise ValueError('DDS byte oracle mismatch')
        for k in ['width','height','depth','mips','layers','vk_format']:
            if parsed[k]!=meta[k]:raise ValueError('DDS dimension oracle mismatch')
        results.append(dict(name=meta['name'],id=meta['id'],subresources=meta['mips']*meta['layers'],kind=meta['format_kind_bits'],payload_sha256=hashlib.sha256(payload).hexdigest(),dds_payload_exact=True))
    # Native archive->descriptor serializer is POD: compare recovered field names
    # through its original mapping for each actual descriptor. Native layout24B.
    for meta in textures:
        raw=meta['descriptor_u32_raw']
        if raw is None:continue
        b=struct.pack('<8I',*raw)
        native=bytearray(24);native[:12]=b[:12];native[12:20]=b[16:24]
        native[20]=b[12];native[21]=b[25];native[22]=b[26];native[23]=b[24]
        cpu.mem_write(0x200000,bytes(native));cpu.mem_write(0x202000,b'\0'*32)
        bits=native[0] | native[20]<<8 | native[21]<<16 | native[22]<<24 | native[12]<<32 | native[23]<<40
        run(0x141db1d20,0x200000,bits,0x202000)
        out=bytes(cpu.mem_read(0x202000,28));actual=b[:28]
        # Option/enum inactive payload and padding are unspecified by Rust.
        mask=[0,12,16,24,25,26]
        if raw[0]:mask+=list(range(4,12))
        if raw[4]==2:mask+=list(range(20,24))
        if any(out[i]!=actual[i] for i in mask):raise ValueError('Descriptor archive oracle mismatch')
        R.descriptor(raw)
    # Allocation/copy/free are test-harness services; hash instructions execute
    # unmodified. Only short input names are exercised, avoiding AVX dispatch.
    cpu.mem_map(0x300000,0x10000)
    def service(uc,address,size,user):
        if address not in (0x142d7f1b0,0x142dc7d20,0x142e32760,0x142e32780,0x1406abac0,0x1406abab0,0x14007ee60):return
        a=uc.reg_read(x.UC_X86_REG_RCX);b=uc.reg_read(x.UC_X86_REG_RDX);n=uc.reg_read(x.UC_X86_REG_R8)
        if address in (0x142d7f1b0,0x142dc7d20):
            old=struct.unpack('<3Q',uc.mem_read(a,24));uc.mem_write(a,struct.pack('<3Q',0x10000,0x300000,old[2]))
        elif address==0x142e32760:
            uc.mem_write(a,bytes(uc.mem_read(b,n)));uc.reg_write(x.UC_X86_REG_RAX,a)
        elif address==0x142e32780:
            uc.mem_write(a,bytes([b&255])*n);uc.reg_write(x.UC_X86_REG_RAX,a)
        elif address==0x1406abab0:uc.reg_write(x.UC_X86_REG_RAX,0x308000)
        rsp=uc.reg_read(x.UC_X86_REG_RSP);ret=struct.unpack('<Q',uc.mem_read(rsp,8))[0]
        uc.reg_write(x.UC_X86_REG_RSP,rsp+8);uc.reg_write(x.UC_X86_REG_RIP,ret)
    cpu.hook_add(u.UC_HOOK_CODE,service)
    ids=[]
    names=['','x','asset_pipe::texture::BuildTextureLayer','asset::foliage::Grass2RuntimeConfigAsset','a'*100,'b'*200]
    for name in names:
        for version,h in [(0,0),(8,1),(0xffffffffffffffff,0x1234567890abcdef1122334455667788)]:
            b=name.encode();cpu.mem_write(0x205000,b or b'\0');cpu.mem_write(0x110020,struct.pack('<Q',h>>64))
            cpu.reg_write(x.UC_X86_REG_R9,h & ((1<<64)-1));run(0x141747730,0x205000,len(b),version)
            observed=f'{cpu.reg_read(x.UC_X86_REG_RDX):016x}{cpu.reg_read(x.UC_X86_REG_RAX):016x}'
            expected=R.asset_recipe_id(name,version,h)
            if observed!=expected:raise ValueError(('asset_id native oracle',name,version,observed,expected))
            ids.append(dict(builder=name,version=version,parameter_hash=f'{h:032x}',recipe_id=expected,native_matches=True))
    # Prefab POD inheritance independently verifies child-wins / absent-inherits
    # on all 16 four-field presence masks, including semantic inheritance.
    for mask in range(16):
        child=bytearray(72);parent=bytearray(72)
        for j in range(4):
            struct.pack_into('<I3f',child,j*16,2 if mask&(1<<j) else 0,1+j,2+j,3+j)
            struct.pack_into('<I3f',parent,j*16,2,10+j,20+j,30+j)
        child[64]=0;parent[64]=1;child[65]=2;parent[65]=0
        cpu.mem_write(0x200000,bytes(child));cpu.mem_write(0x201000,bytes(parent));run(0x14270a6c0)
        observed=bytes(cpu.mem_read(0x200000,66))
        for j in range(4):
            expected=(child if mask&(1<<j) else parent)[j*16:j*16+16]
            if observed[j*16:j*16+16]!=expected:raise ValueError('Prefab POD inheritance differs')
        if observed[64:66]!=b'\x01\x00':raise ValueError('Prefab semantic/boolean inheritance differs')
    # Original String::clone executes, using only a controlled allocator/copy.
    child=bytearray(72);parent=bytearray(72)
    mesh=b'olden_tree_large';shader=b'country_core/clearing/tree_trunk'
    cpu.mem_write(0x205000,mesh);cpu.mem_write(0x206000,shader)
    struct.pack_into('<3Q',child,0,len(mesh),0x205000,len(mesh));struct.pack_into('<Q',child,24,0x8000000000000000)
    struct.pack_into('<3Q',parent,24,len(shader),0x206000,len(shader))
    struct.pack_into('<Q',child,48,0x8000000000000001);struct.pack_into('<Q',parent,48,0x8000000000000000)
    cpu.mem_write(0x200000,bytes(child));cpu.mem_write(0x201000,bytes(parent));run(0x14270a830)
    out=bytes(cpu.mem_read(0x200000,72))
    for offset,expected in [(0,mesh),(24,shader)]:
        cap,pointer,count=struct.unpack_from('<3Q',out,offset)
        if bytes(cpu.mem_read(pointer,count))!=expected:raise ValueError('Native prefab render inheritance differs')
    resolved=R.prefabs(root)
    naked=next(p for p in resolved['prefabs'] if p['name']=='clearing/naked_tree/large')
    if naked['config']['parts']['trunk']['render']!=dict(shader=shader.decode(),mesh=mesh.decode()):raise ValueError('Shipped prefab resolution differs from native render oracle')
    plants=[[],[0],[65535],[0x45a9,0x4078],[0,0xffff,0x1234],[0x12345678,0xabcdef01,0xffffffff],[0xff]*16]
    for values in plants:
        cpu.mem_write(0x205000,struct.pack('<'+'I'*len(values),*values) or b'\0'*4)
        cpu.mem_write(0x201000,struct.pack('<3Q',0x205000,len(values),2));run(0x1415ea9b0)
        cap,pointer,n=struct.unpack('<3Q',cpu.mem_read(0x200000,24))
        expected=R.pack_plant_offset_words(values)
        observed=list(struct.unpack('<'+'I'*n,cpu.mem_read(pointer,4*n))) if n else []
        if observed!=expected:raise ValueError('Original CPU plant-offset packing differs')
    # Observe each original Rust Hash serialization call, without substituting
    # the caller's control flow. The hash primitive has separate native checks.
    import xxhash
    capture=dict(mode=None,chunks=[],args=None)
    def hash_service(uc,address,size,user):
        mode=capture['mode']
        if not mode:return
        if mode in ('complete','assetcomplete'):
            if address==(0x141710b13 if mode=='complete' else 0x14171214c):
                capture['complete_id']=uc.reg_read(x.UC_X86_REG_RAX)|(uc.reg_read(x.UC_X86_REG_RDX)<<64);uc.emu_stop();return
            if address!=0x142565cc0:return
            uc.reg_write(x.UC_X86_REG_RAX,1)
            rsp=uc.reg_read(x.UC_X86_REG_RSP);ret=struct.unpack('<Q',uc.mem_read(rsp,8))[0]
            uc.reg_write(x.UC_X86_REG_RSP,rsp+8);uc.reg_write(x.UC_X86_REG_RIP,ret);return
        if address==0x1417ca2e0:
            ptr=uc.reg_read(x.UC_X86_REG_RDX);n=uc.reg_read(x.UC_X86_REG_R8)
            capture['chunks'].append(bytes(uc.mem_read(ptr,n)))
        elif mode in ('ready','file','asset') and address==0x142565cc0:uc.reg_write(x.UC_X86_REG_RAX,1)
        elif mode in ('ready','file','asset') and address==0x1417ca880:pass
        elif mode in ('ready','file','asset') and address==0x1417c9b80:
            value=xxhash.xxh3_128_intdigest(b''.join(capture['chunks']))
            uc.reg_write(x.UC_X86_REG_RAX,value&((1<<64)-1));uc.reg_write(x.UC_X86_REG_RDX,value>>64)
        elif mode in ('ready','file','asset') and address==0x141747730:
            ptr=uc.reg_read(x.UC_X86_REG_RCX);n=uc.reg_read(x.UC_X86_REG_RDX);version=uc.reg_read(x.UC_X86_REG_R8)
            lo=uc.reg_read(x.UC_X86_REG_R9);rsp=uc.reg_read(x.UC_X86_REG_RSP);hi=struct.unpack('<Q',uc.mem_read(rsp+40,8))[0]
            capture['args']=(bytes(uc.mem_read(ptr,n)).decode(),version,lo|(hi<<64));uc.emu_stop();return
        else:return
        rsp=uc.reg_read(x.UC_X86_REG_RSP);ret=struct.unpack('<Q',uc.mem_read(rsp,8))[0]
        uc.reg_write(x.UC_X86_REG_RSP,rsp+8);uc.reg_write(x.UC_X86_REG_RIP,ret)
    cpu.hook_add(u.UC_HOOK_CODE,hash_service)
    descriptor_rows=[m for m in textures if m['descriptor_u32_raw'] is not None]
    unique={tuple(m['descriptor_u32_raw']) for m in descriptor_rows}
    # Supplemental Limited/resize/alpha/channel fixture exercises rarely shipped
    # enum payload branches without requiring a new game asset.
    unique.add((1,64,128,0,2,5,0x010102,2))
    def native_opts(raw):
        b=struct.pack('<8I',*raw);native=bytearray(24);native[:12]=b[:12];native[12:20]=b[16:24]
        native[20]=b[12];native[21]=b[25];native[22]=b[26];native[23]=b[24];return bytes(native)
    for raw in unique:
        capture.update(mode='opts',chunks=[],args=None);cpu.mem_write(0x200000,native_opts(raw));run(0x140905300)
        if b''.join(capture['chunks'])!=R.texture_options_hash_bytes(raw):raise ValueError('Original TextureOpts Rust Hash stream differs')
    ready_checks=[]
    for raw in sorted(unique)[:6]+[(1,64,128,0,2,5,0x010102,2)]:
        name='test-texture';sid=0x1234567890abcdef1122334455667788
        layer=bytearray(80);struct.pack_into('<4Q',layer,0,0x8000000000000000,0,sid&((1<<64)-1),sid>>64)
        layer[32:56]=native_opts(raw);struct.pack_into('<2Q',layer,64,0x206000,len(name));cpu.mem_write(0x205000,bytes(layer));cpu.mem_write(0x206000,name.encode())
        capture.update(mode='ready',chunks=[],args=None)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x203000);cpu.reg_write(x.UC_X86_REG_RDX,0x205000)
        cpu.emu_start(0x141710980,0x10000,count=10000)
        if capture['args'] is None:raise ValueError('BuildTextureLayer did not reach asset_id')
        builder,version,ph=capture['args']
        expected_stream=name.encode()+b'\xff'+struct.pack('<Q',1)+sid.to_bytes(16,'little')+R.texture_options_hash_bytes(raw)
        if b''.join(capture['chunks'])!=expected_stream:raise ValueError('BuildTextureLayer parameter stream differs')
        native_id=R.asset_recipe_id(builder,version,ph);recovered_id=R.texture_layer_ready_id(name,sid,raw)
        if native_id!=recovered_id:raise ValueError('BuildTextureLayer Ready recipe differs')
        ready_checks.append(dict(descriptor=raw,builder=builder,version=version,recipe_id=recovered_id,serialization_matches=True))
    file_checks=[]
    paths=['','assets/black.png','assets\\black.png','./assets/black.png','a/./b','a//b','../a','a/../b','data/花.png','/a/b','a/.','a/././b',
           'C:/a/b','c:/a/b','C:a/b','C:\\a\\b','\\a\\b','\\\\server\\share\\a\\b','//server/share/a/b',
           '\\\\?\\C:\\a\\b','\\\\?\\UNC\\server\\share\\a\\b','\\\\?\\Volume{123}\\a\\b','\\\\.\\pipe\\a\\b',
           '\\\\?\\C:\\a/./b','\\\\?\\C:\\a\\.\\b','\\\\?\\C:/a/b','//?/C:/a/b','C:','C:\\','\\\\server\\share','\\\\server','\\\\.\\COM1',
           'C:./a','\\\\?\\UNC\\server\\','\\\\?\\UNC\\server','\\\\?\\UNC\\','\\\\?\\unc\\server\\share',
           '\\\\?\\C:foo\\bar','\\\\.\\','////a/b','\\\\?\\D:\\花\\x']
    for path in paths:
        name='test-texture';raw=(0,0,0,1,1,0,0,2);pb=path.encode();layer=bytearray(80)
        struct.pack_into('<3Q',layer,0,len(pb),0x207000,len(pb));layer[32:56]=native_opts(raw);struct.pack_into('<2Q',layer,64,0x206000,len(name))
        cpu.mem_write(0x205000,bytes(layer));cpu.mem_write(0x206000,name.encode());cpu.mem_write(0x207000,pb or b'\0')
        capture.update(mode='file',chunks=[],args=None)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x203000);cpu.reg_write(x.UC_X86_REG_RDX,0x205000)
        cpu.emu_start(0x141710980,0x10000,count=10000)
        if capture['args'] is None:raise ValueError('File-source BuildTextureLayer did not reach asset_id')
        builder,version,ph=capture['args'];expected_stream=name.encode()+b'\xff'+struct.pack('<Q',0)+R.relative_path_hash_bytes(path)+R.texture_options_hash_bytes(raw)
        if b''.join(capture['chunks'])!=expected_stream:raise ValueError(('File Path Rust Hash stream differs',path,[c.hex() for c in capture['chunks']],expected_stream.hex()))
        native_id=R.asset_recipe_id(builder,version,ph);recovered_id=R.texture_layer_file_id(name,path,raw)
        if native_id!=recovered_id:raise ValueError('BuildTextureLayer file-source recipe differs')
        file_checks.append(dict(path=path,recipe_id=recovered_id,serialization_matches=True))
    capture['mode']=None
    # Original streaming Hash128 constructor/write/finish. Select its supported
    # SSE dispatch branch inside emulator memory; no host feature probing occurs.
    feature_ptr=struct.unpack('<Q',pe.get_data(0x143cad8c0-base,8))[0]
    cpu.mem_write(feature_ptr,struct.pack('<Q',1));hash_checks=[]
    for length in [0,1,63,64,239,240,241,512,2048]:
        data=bytes((i*73+19)&255 for i in range(length));run(0x1417ca880)
        for start in range(0,length,73):
            chunk=data[start:start+73];cpu.mem_write(0x205000,chunk);run(0x1417ca2e0,0x200000,0x205000,len(chunk))
        run(0x1417c9b80)
        observed=cpu.reg_read(x.UC_X86_REG_RAX)|(cpu.reg_read(x.UC_X86_REG_RDX)<<64);expected=xxhash.xxh3_128_intdigest(data)
        if observed!=expected:raise ValueError(('Original streaming Hash128 differs',length,f'{observed:032x}',f'{expected:032x}'))
        hash_checks.append(dict(bytes=length,stream_chunk_bytes=73,hash=f'{expected:032x}',native_matches=True))
    complete=[]
    cases=[('ready',entry['descriptor']) for entry in ready_checks]+[('file',entry['path']) for entry in file_checks]
    for kind,arg in cases:
        name='test-texture';sid=0x1234567890abcdef1122334455667788;layer=bytearray(80)
        if kind=='ready':
            raw=arg;struct.pack_into('<4Q',layer,0,0x8000000000000000,0,sid&((1<<64)-1),sid>>64)
            expected=R.texture_layer_ready_id(name,sid,raw)
        else:
            raw=(0,0,0,1,1,0,0,2);pb=arg.encode();struct.pack_into('<3Q',layer,0,len(pb),0x207000,len(pb));cpu.mem_write(0x207000,pb or b'\0')
            expected=R.texture_layer_file_id(name,arg,raw)
        layer[32:56]=native_opts(raw);struct.pack_into('<2Q',layer,64,0x206000,len(name))
        cpu.mem_write(0x205000,bytes(layer));cpu.mem_write(0x206000,name.encode());capture.update(mode='complete',complete_id=None)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x203000);cpu.reg_write(x.UC_X86_REG_RDX,0x205000);cpu.emu_start(0x141710980,0x10000,count=10000)
        if capture['complete_id'] is None or f'{capture["complete_id"]:032x}'!=expected:raise ValueError(('Complete native texture recipe differs',kind,arg,expected,capture['complete_id']))
        complete.append(dict(source_kind=kind,recipe_id=expected,native_full_hash_matches=True))
    capture['mode']=None
    asset_checks=[]
    basic=(0,0,0,1,1,0,0,2);extra=(1,64,128,0,2,5,0x010102,2)
    layer_a=dict(name='layer-a',source_id='1234567890abcdef1122334455667788',descriptor=basic)
    layer_b=dict(name='layer-b',source_path='C:\\Textures\\flowers.png',descriptor=extra)
    recipes=[dict(name='single-ready',layers=[layer_a],is_array=False),dict(name='single-file',layers=[layer_b],is_array=False),
             dict(name='empty-array',layers=[],is_array=True),dict(name='one-array',layers=[layer_a],is_array=True),dict(name='mixed-array',layers=[layer_a,layer_b],is_array=True),
             dict(name='reverse-array',layers=[layer_b,layer_a],is_array=True),dict(name='many-array',layers=[layer_a]*12,is_array=True)]
    def fixture_layer(layer,at,storage):
        data=bytearray(80);name=layer['name'].encode()
        if 'source_id'in layer:
            sid=int(layer['source_id'],16);struct.pack_into('<4Q',data,0,0x8000000000000000,0,sid&((1<<64)-1),sid>>64)
        else:
            pb=layer['source_path'].encode();cpu.mem_write(storage+0x100,pb);struct.pack_into('<3Q',data,0,len(pb),storage+0x100,len(pb))
        data[32:56]=native_opts(layer['descriptor']);struct.pack_into('<2Q',data,64,storage,len(name));cpu.mem_write(storage,name or b'\0');cpu.mem_write(at,bytes(data));return data
    for recipe in recipes:
        def write_fixture():
            if recipe['is_array']:
                data=bytearray(80);name=recipe['name'].encode();cpu.mem_write(0x208000,name)
                struct.pack_into('<6Q',data,0,len(name),0x208000,len(name),len(recipe['layers']),0x20a000,len(recipe['layers']))
                struct.pack_into('<Q',data,56,0x8000000000000000);cpu.mem_write(0x205000,bytes(data))
                for i,layer in enumerate(recipe['layers']):fixture_layer(layer,0x20a000+i*80,0x20b000+i*0x200)
            else:fixture_layer(recipe['layers'][0],0x205000,0x208000)
        write_fixture();capture.update(mode='asset',chunks=[],args=None)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x203000);cpu.reg_write(x.UC_X86_REG_RDX,0x205000);cpu.emu_start(0x141711ee0,0x10000,count=15000)
        if capture['args'] is None:raise ValueError('BuildTextureAsset failed to reach asset_id')
        builder,version,ph=capture['args'];recovered=R.texture_asset_recipe_id(**recipe)
        if R.asset_recipe_id(builder,version,ph)!=recovered:raise ValueError(('BuildTextureAsset serialization differs',recipe,builder,version,capture['chunks']))
        write_fixture();capture.update(mode='assetcomplete',complete_id=None)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x203000);cpu.reg_write(x.UC_X86_REG_RDX,0x205000);cpu.emu_start(0x141711ee0,0x10000,count=20000)
        if capture['complete_id'] is None or f'{capture["complete_id"]:032x}'!=recovered:raise ValueError('Complete BuildTextureAsset native recipe differs')
        asset_checks.append(dict(recipe=recipe,id=recovered,builder=builder,version=version,hash_stream_hex=b''.join(capture['chunks']).hex(),native_complete_matches=True))
    capture['mode']=None
    for mask in range(16):
        child=bytearray(72);parent=bytearray(72);struct.pack_into('<I',parent,0,3)
        for j in range(4):struct.pack_into('<I3f',child,j*16,2 if mask&(1<<j) else 0,1+j,2+j,3+j)
        child[64]=0;child[65]=2;cpu.mem_write(0x200000,bytes(child));cpu.mem_write(0x201000,bytes(parent));run(0x14270d410)
        actual=bytes(cpu.mem_read(0x200000,66))
        for j in range(4):
            expected=child[j*16:j*16+16] if mask&(1<<j) else struct.pack('<I3f',2,1,1,1)
            if actual[j*16:j*16+16]!=expected:raise ValueError('Original RT config vec3 default differs')
        if actual[64:66]!=b'\x01\x00':raise ValueError('Original RT config enum raw defaults differ')
    return dict(exe_sha256=digest,evidence_type='isolated-original-machine-code-emulation',texture_archives=len(textures),native_subresource_checks=regions,descriptor_native_checks=len(descriptor_rows),dds_byte_checks=len(textures),asset_id_native_checks=len(ids),prefab_pod_native_checks=16,prefab_render_native_checks=1,prefab_rt_default_native_checks=16,prefabs_resolved=resolved['count'],plant_offset_pack_native_checks=len(plants),texture_opts_hash_stream_checks=len(unique),texture_layer_ready_recipe_checks=len(ready_checks),texture_layer_file_recipe_checks=len(file_checks),streaming_hash128_native_checks=len(hash_checks),texture_recipe_complete_native_checks=len(complete),texture_asset_recipe_native_checks=len(asset_checks),passed=True,results=results,asset_id_results=ids,ready_recipe_results=ready_checks,file_recipe_results=file_checks,streaming_hash_results=hash_checks,complete_recipe_results=complete,texture_asset_results=asset_checks,limitations=['No game process launched.','Texture preview colors do not validate full in-game sampling/color management.','Asset ID/prefab oracle uses allocator/memcpy/memset/free harness stubs; original hash/inheritance instructions remain unmodified.','Texture serialization capture phase stubs the hash primitive/registry guard; complete phase executes original streaming hash and asset_id, stops after asset_id returns, and stubs only registry guard and memory services.','Streaming Hash128 chooses its SSE branch in emulated feature-cache memory, without host feature detection.','Other builder parameter serialization remains separate from recovered texture recipes.','Prefab directory resolver covers shipped implicit values; raw Inheritable RT tag transitions are separately captured by inheritable_state_probe.py, but RON extension syntax and raw tag names are not asserted.'])

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--root',type=Path,required=True);p.add_argument('--out',type=Path,required=True);a=p.parse_args()
    result=verify(a.root);A.dump(a.out,result);print(json.dumps({k:v for k,v in result.items() if not isinstance(v,list) or k=='limitations'}))
if __name__=='__main__':main()
