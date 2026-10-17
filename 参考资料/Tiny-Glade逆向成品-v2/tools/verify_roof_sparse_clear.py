"""Verify original clear fastpath and portable draw-range coalescing."""
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
    def ret():
        sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0];cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip)
    def hook(cpu,a,n,d):
        if a in [0x140e9a150,0x140e9a350,0x1406abac0,0x14007ee60,0x1409693f0]:ret();return
        if not 0x141f4a6c0<=a<0x141f4a9e1:raise RuntimeError(f'Unknown native path {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    writer=bytearray(96);struct.pack_into('<QQ',writer,0,0x210000,256);struct.pack_into('<QQ',writer,16,0x260000,8);struct.pack_into('<Q',writer,32,0x280000);struct.pack_into('<QQ',writer,40,0x220000,2);struct.pack_into('<Q',writer,64,0x290000);struct.pack_into('<QQ',writer,72,0x270000,8);cpu.mem_write(0x200000,bytes(writer));cpu.mem_write(0x210000,b'\x20'+b'\0'*255)
    cpu.mem_write(0x220000,struct.pack('<QQI',0x230000,8192,0)+b'\0'*4+struct.pack('<QQI',0,0,1)+b'\0'*4);cpu.mem_write(0x280000,struct.pack('<QQQ',8,0x2a0000,1));cpu.mem_write(0x2a0000,struct.pack('<I',0));cpu.mem_write(0x290000,struct.pack('<QQQQ',0,8,0x2b0000,2));cpu.mem_write(0x2b0000,struct.pack('<II',2,1));cpu.mem_write(0x260000,struct.pack('<Q',1));cpu.mem_write(0x270000,struct.pack('<Q',1));cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8);cpu.reg_write(x.UC_X86_REG_RCX,0x200000)
    cpu.emu_start(0x141f4a6c0,0x10000,count=100000)
    storage=ref.SparseRoofStorage(max_pages=2);storage.usage[0]=1;storage.allocated=1;storage.dirty=1;storage.free_slots=[];writer_ref=ref.SparseRoofWriter(storage,current_slot=0,owned_slots=[0]);writer_ref.clear()
    usage=list(cpu.mem_read(0x210000,1));allocated=struct.unpack('<Q',cpu.mem_read(0x260000,8))[0];dirty=struct.unpack('<Q',cpu.mem_read(0x270000,8))[0]
    return {'exe_sha256':sha,'passed':usage==[0] and allocated==0 and dirty==1,'original_usage':usage,'original_allocated':allocated,'original_dirty':dirty,
      'portable_usage':storage.usage[0],'portable_allocated':storage.allocated,
      'portable_dirty':storage.dirty,'portable_free_slots':storage.free_slots,'portable_ranges':ref.to_draw_ranges(storage),
      'limits':['Original clear used synthetic single nonempty slot and successful deadlock bookkeeping hooks.',
        'Dirty is intentionally retained for the subsequent GPU flush; concurrent clear is outside this check.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True);a=p.parse_args();v=verify(a.exe);a.out.write_text(json.dumps(v,indent=2));print(json.dumps(v));raise SystemExit(0 if v['passed'] else 1)
