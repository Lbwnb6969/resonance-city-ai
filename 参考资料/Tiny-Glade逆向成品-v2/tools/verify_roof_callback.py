"""Run original roof callback fastpath against isolated synthetic sparse storage."""
import argparse,hashlib,json,pathlib,struct
import recovered_roof as r

def verify(exe):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE digest mismatch')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x100000)
    ranges=[(0x142817e20,963),(0x142816720,963),(0x141f49fd0,1774)]
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    def hook(cpu,address,size,data):
        if not any(a<=address<a+n for a,n in ranges):raise RuntimeError(f'unexpected API/code {address:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook);checks=[]
    original_records=pathlib.Path(__file__).resolve().parents[1]/'evidence/reconstruction_roof/tile_samples/rectangle-default.tiles64'
    seed=original_records.read_bytes()[:64]
    for callback in [0x142817e20,0x142816720]:
        for flag in [0,1,2,3]:
            writer=bytearray(96)
            struct.pack_into('<QQ',writer,0,0x210000,256)
            struct.pack_into('<QQ',writer,40,0x220000,1)
            struct.pack_into('<QQ',writer,72,0x240000,1)
            struct.pack_into('<I',writer,88,0)
            cpu.mem_write(0x200000,bytes(writer));cpu.mem_write(0x210000,b'\0'*256)
            cpu.mem_write(0x220000,struct.pack('<QQI',0x230000,8192,0)+b'\0'*4)
            cpu.mem_write(0x240000,b'\0'*8)
            record=bytearray(seed);struct.pack_into('<I',record,60,flag)
            cpu.mem_write(0x250000,bytes(record));cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000))
            cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8);cpu.reg_write(x.UC_X86_REG_RCX,0x200000);cpu.reg_write(x.UC_X86_REG_RDX,0x250000)
            cpu.emu_start(callback,0x10000,count=2000)
            copied=bytes(cpu.mem_read(0x230000,64));dirty=struct.unpack('<Q',cpu.mem_read(0x240000,8))[0]
            usage=cpu.mem_read(0x210000,1)[0]
            checks.append({'callback':hex(callback),'input_body_flag':flag,'whole_record_copied_unchanged':copied==record,
              'dirty_bit_set':dirty==1,'slot_usage':usage,'returned':cpu.reg_read(x.UC_X86_REG_RIP)==0x10000,
              'passed':copied==record and dirty==1 and usage==1 and cpu.reg_read(x.UC_X86_REG_RIP)==0x10000})
    return {'exe_sha256':sha,'checks':checks,'passed':all(row['passed'] for row in checks),
      'conclusion':'Both roof callbacks copy all 64 bytes unchanged through SparseInstanceBufferWriter::push fastpath; no flag normalization.',
      'limits':['Synthetic allocated sparse page, successful fastpath only; growth/lock-contention/error logging not executed.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
