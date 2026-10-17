"""Verify original sparse page doubling and slot allocation without OS APIs.
Scratch allocation and OnceLock uncontended initialization are explicit hooks.
"""
import argparse,pathlib,struct,json,hashlib
import roof_sparse_reference as ref
import recovered_roof as r

def verify(exe,exhausted=False):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE digest mismatch')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x200000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    allocations=[];hooks={}
    def ret():
        sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0]
        cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip)
    def hook(cpu,a,n,d):
        if a in [0x140e9a150,0x140e9a350,0x14007ee60,0x1406abac0]:hooks[hex(a)]=hooks.get(hex(a),0)+1;ret();return
        if a==0x1406abab0:
            size=cpu.reg_read(x.UC_X86_REG_RCX);align=cpu.reg_read(x.UC_X86_REG_RDX);allocations.append({'bytes':size,'alignment':align})
            if size!=0x80000:raise RuntimeError('Unexpected allocation')
            cpu.reg_write(x.UC_X86_REG_RAX,0x300000);ret();return
        if a==0x142e294d7:
            # Known OnceLock<Box<[RoofTileSsbo]>> uncontended initialization,
            # replacing only platform once/lock operations. Box pointer/length
            # consumed from input, preserving original move ownership.
            obj=cpu.reg_read(x.UC_X86_REG_RCX);value=cpu.reg_read(x.UC_X86_REG_RDX)
            box=bytes(cpu.mem_read(value,16));cpu.mem_write(obj,box);cpu.mem_write(obj+16,b'\0'*4)
            cpu.mem_write(value,b'\0'*8);hooks['OnceLock::initialize']=hooks.get('OnceLock::initialize',0)+1;ret();return
        if not 0x141f49fd0<=a<0x141f4a6be:raise RuntimeError(f'Unexpected native API/path {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    writer=bytearray(96);struct.pack_into('<QQ',writer,0,0x210000,512)
    struct.pack_into('<QQ',writer,16,0x260000,8);struct.pack_into('<Q',writer,32,0x280000)
    struct.pack_into('<QQ',writer,40,0x220000,2);struct.pack_into('<Q',writer,56,0x2c0000)
    struct.pack_into('<Q',writer,64,0x290000);struct.pack_into('<QQ',writer,72,0x270000,8)
    cpu.mem_write(0x200000,bytes(writer));cpu.mem_write(0x210000,b'\x20'+b'\0'*511)
    cpu.mem_write(0x220000,struct.pack('<QQI',0x230000,8192,0)+b'\0'*4+struct.pack('<QQI',0,0,1)+b'\0'*4)
    cpu.mem_write(0x280000,struct.pack('<QQQ',8,0x2a0000,1));cpu.mem_write(0x2a0000,struct.pack('<I',0))
    cpu.mem_write(0x290000,struct.pack('<QQQQ',0,512,0x2b0000,0));cpu.mem_write(0x260000,struct.pack('<Q',1))
    cpu.mem_write(0x2c0000,struct.pack('<Q',1));record=struct.pack('<16I',*range(16))
    if exhausted:
        # One allocated page, max one page, no free slots, current slot full.
        cpu.mem_write(0x200030,struct.pack('<Q',1))
    cpu.mem_write(0x250000,record);cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000))
    cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8);cpu.reg_write(x.UC_X86_REG_RCX,0x200000);cpu.reg_write(x.UC_X86_REG_RDX,0x250000)
    cpu.emu_start(0x141f49fd0,0x10000,count=200000)
    if exhausted:
        storage=ref.SparseRoofStorage(max_pages=1);storage.free_slots=[];storage.usage[0]=32;storage.allocated=1
        model=ref.SparseRoofWriter(storage,current_slot=0,owned_slots=[0]);success=model.push(record)
        checks={'returned_failure':bool(cpu.reg_read(x.UC_X86_REG_RAX)&1) and not success,
          'page_count_unchanged':struct.unpack('<Q',cpu.mem_read(0x2c0000,8))[0]==1,
          'usage_unchanged':cpu.mem_read(0x210000,1)[0]==32,
          'dirty_unchanged':bytes(cpu.mem_read(0x270000,64))==b'\0'*64,
          'page_data_unchanged':bytes(cpu.mem_read(0x230000,64))==b'\0'*64,
          'no_allocation':not allocations,'returned':cpu.reg_read(x.UC_X86_REG_RIP)==0x10000}
        return {'exe_sha256':sha,'case':'maximum-page-capacity-exhaustion','passed':all(checks.values()),'checks':checks,'hooks':hooks,
          'limits':['Single-thread exhausted capacity; deadlock detector bookkeeping skipped.']}
    storage=ref.SparseRoofStorage(max_pages=2);storage.free_slots=[];storage.usage[0]=32;storage.allocated=1
    model=ref.SparseRoofWriter(storage,current_slot=0,owned_slots=[0]);model.push(record)
    pageptr,length,once=struct.unpack('<QQI',cpu.mem_read(0x220018,20))
    freecount=struct.unpack('<Q',cpu.mem_read(0x290018,8))[0]
    freevals=list(struct.unpack('<'+'I'*freecount,cpu.mem_read(0x2b0000,freecount*4)))
    current=struct.unpack('<I',cpu.mem_read(0x200058,4))[0]
    actual_page=bytes(cpu.mem_read(pageptr,0x80000))
    dirty=int.from_bytes(cpu.mem_read(0x270000,64),'little');owned=int.from_bytes(cpu.mem_read(0x260000,64),'little')
    checks={'page_count_doubled':struct.unpack('<Q',cpu.mem_read(0x2c0000,8))[0]==len(storage.pages)==2,
      'new_page_8192_records':length==8192,'once_initialized':once==0,
      'new_page_data_bit_equal':actual_page==storage.pages[1],'free_list_bit_equal':freevals==storage.free_slots,
      'current_slot':current==model.current_slot==256,'usage':cpu.mem_read(0x210100,1)[0]==storage.usage[256]==1,
      'dirty_bit_256':dirty==storage.dirty,'owned_bits':owned==storage.allocated,
      'returned':cpu.reg_read(x.UC_X86_REG_RIP)==0x10000}
    return {'exe_sha256':sha,'passed':all(checks.values()),'checks':checks,'allocations':allocations,
      'hooks':hooks,'conclusion':'Original page-doubling, clearing, descending free-slot append, LIFO slot 256 selection and record/dirty/ownership updates match independent source.',
      'limits':['OnceLock platform initialization and parking_lot debug bookkeeping replaced with declared uncontended hooks.',
        'Concurrent initialization, contention and OS synchronization not exercised.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    p.add_argument('--exhausted',action='store_true');a=p.parse_args();v=verify(a.exe,a.exhausted)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
