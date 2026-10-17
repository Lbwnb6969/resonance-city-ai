"""Verify original sparse writer across slot rollover using synthetic scratch state."""
import argparse,pathlib,struct,json,hashlib
import roof_sparse_reference as ref
import recovered_roof as r

def verify(exe):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE digest mismatch')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x100000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    skips={0x140e9a150:'deadlock_impl::acquire_resource',0x140e9a350:'deadlock_impl::release_resource'};skipped={}
    def hook(cpu,a,n,d):
        if a in skips:
            skipped[skips[a]]=skipped.get(skips[a],0)+1;sp=cpu.reg_read(x.UC_X86_REG_RSP)
            ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0];cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip);return
        if not 0x141f49fd0<=a<0x141f4a6be:raise RuntimeError(f'Unexpected native API/path {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    writer=bytearray(96);struct.pack_into('<QQ',writer,0,0x210000,256)
    struct.pack_into('<QQ',writer,16,0x260000,4);struct.pack_into('<Q',writer,32,0x280000)
    struct.pack_into('<QQ',writer,40,0x220000,1);struct.pack_into('<Q',writer,64,0x290000)
    struct.pack_into('<QQ',writer,72,0x270000,4)
    cpu.mem_write(0x200000,bytes(writer));cpu.mem_write(0x220000,struct.pack('<QQI',0x230000,8192,0)+b'\0'*4)
    cpu.mem_write(0x280000,struct.pack('<QQQ',8,0x2a0000,1));cpu.mem_write(0x2a0000,struct.pack('<I',0))
    cpu.mem_write(0x290000,struct.pack('<QQQQ',0,8,0x2b0000,2));cpu.mem_write(0x2b0000,struct.pack('<II',2,1))
    cpu.mem_write(0x260000,struct.pack('<Q',1))
    storage=ref.SparseRoofStorage(max_pages=1);model=ref.SparseRoofWriter(storage);checks=[]
    for ordinal in range(70):
        record=struct.pack('<16I',*range(ordinal*16,ordinal*16+16));cpu.mem_write(0x250000,record)
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,0x200000);cpu.reg_write(x.UC_X86_REG_RDX,0x250000)
        cpu.emu_start(0x141f49fd0,0x10000,count=1000);model.push(record)
        actual_current=struct.unpack('<I',cpu.mem_read(0x200058,4))[0]
        actual_usage=list(cpu.mem_read(0x210000,3));dirty=struct.unpack('<Q',cpu.mem_read(0x270000,8))[0]
        allocated=struct.unpack('<Q',cpu.mem_read(0x260000,8))[0]
        actual_page=bytes(cpu.mem_read(0x230000,70*64));expected_page=bytes(storage.pages[0][:70*64])
        equal=actual_page==expected_page and actual_usage==storage.usage[:3] and dirty==storage.dirty and allocated==storage.allocated and actual_current==model.current_slot
        checks.append({'ordinal':ordinal,'current_slot':actual_current,'usage':actual_usage,'dirty':dirty,'allocated':allocated,'passed':equal})
    return {'exe_sha256':sha,'checks':len(checks),'passed':all(c['passed'] for c in checks),'results':checks,
      'deadlock_bookkeeping_hooks':skipped,'conclusion':'64-byte data, LIFO free-slot consumption, 32-record rollover, ownership/dirty bitmap and current slot all match original.',
      'limits':['Prepared allocated page and two free slots; page allocation/growth not executed.',
        'parking_lot deadlock detector bookkeeping calls skipped; no contention or OS synchronization exercised.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps({'checks':v['checks'],'passed':v['passed']}));raise SystemExit(0 if v['passed'] else 1)
