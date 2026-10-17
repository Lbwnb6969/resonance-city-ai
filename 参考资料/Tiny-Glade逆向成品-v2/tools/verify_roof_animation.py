"""Verify roof state constructors and numeric animation core with original code."""
import argparse,pathlib,hashlib,json,struct
import roof_animation_reference as ref
import recovered_roof as r

def verify(exe):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE identity mismatch')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x100000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    regs=[getattr(x,'UC_X86_REG_XMM'+str(i)) for i in range(16)]
    def setf(i,v):cpu.reg_write(regs[i],struct.unpack('<I',struct.pack('<f',v))[0])
    def hook(cpu,a,n,d):
        if a==0x14280836b:cpu.emu_stop();return
        if not any(lo<=a<hi for lo,hi in [(0x1428085b4,0x142808678),(0x1409e1370,0x1409e138f),(0x140a007b0,0x140a007c5),(0x140a007d0,0x140a007d7)]):
            raise RuntimeError(f'Unknown code {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    checks=[]
    def start(a):
        cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8);cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000))
        cpu.emu_start(a,0x10000,count=1000)
    for pivot in [-4.,0.,1.25,8.]:
        cpu.mem_write(0x210000,b'\xff'*24);cpu.reg_write(x.UC_X86_REG_RCX,0x210000);setf(1,pivot);start(0x1409e1370)
        actual=bytes(cpu.mem_read(0x210000,21));expected=ref.RoofTileSimulation.new(pivot).pack()[:21]
        checks.append({'routine':'RoofTileSimulation::new','pivot':pivot,'passed':actual==expected,
                       'written_21_bytes':actual.hex(),'padding_not_verified':True})
    start(0x140a007d0)
    checks.append({'routine':'RoofAnimation::new','passed':cpu.reg_read(regs[0])==0 and cpu.reg_read(regs[1])==0})
    for t in [0.,.5,.99,1.]:
        cpu.mem_write(0x210000,struct.pack('<ff',t,.4));cpu.reg_write(x.UC_X86_REG_RCX,0x210000);start(0x140a007b0)
        observed=bool(cpu.reg_read(x.UC_X86_REG_RAX)&1)
        checks.append({'routine':'RoofAnimation::is_being_animated','t':t,'passed':observed==ref.RoofAnimation(t,.4).is_being_animated()})
    for dt in [0.,1/60,.25]:
        for primary in [0.,.5,.99,.999,1.]:
            for flat in [False,True]:
                for deleted in [False,True]:
                    cpu.mem_write(0x200028,struct.pack('<f',dt));cpu.mem_write(0x210000,struct.pack('<ff',primary,.4))
                    cpu.mem_write(0x110060,struct.pack('<Q',0x200000));cpu.mem_write(0x110034,struct.pack('<I',123))
                    cpu.reg_write(x.UC_X86_REG_R12,0x210000);cpu.reg_write(x.UC_X86_REG_RSI,0x220000)
                    cpu.reg_write(x.UC_X86_REG_RBP,int(deleted));cpu.reg_write(x.UC_X86_REG_RAX,int(flat))
                    for reg in regs:cpu.reg_write(reg,0)
                    for i,v in {6:-4.,7:-10.,8:0.,9:1.,10:2.,11:2.857142925262451,12:3.3333332538604736,13:.9900000095367432}.items():setf(i,v)
                    start(0x1428085b4)
                    actual=bytes(cpu.mem_read(0x210000,8));expected=ref.RoofAnimation(primary,.4).step(dt,flat,deleted).pack()
                    checks.append({'routine':'roof_animation per-entity arithmetic','dt':dt,'primary':primary,'flat':flat,'deleted':deleted,
                                   'original':actual.hex(),'recovered':expected.hex(),'passed':actual==expected})
    return {'exe_sha256':sha,'checks':len(checks),'passed':all(a['passed'] for a in checks),'results':checks,
      'limits':['Animation numerical tail executed with explicit reconstructed register inputs, stopping before ECS loop.',
        'State constructors and is_being_animated executed as complete original functions.',
        'Simulation constructor padding bytes 21..23 are not written by original function.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps({'checks':v['checks'],'passed':v['passed']}));raise SystemExit(0 if v['passed'] else 1)
