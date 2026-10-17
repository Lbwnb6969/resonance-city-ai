"""Compare independent audio simulation state/requests to original numerical core."""
import argparse,pathlib,struct,json,hashlib,math
import roof_animation_reference as ref
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
    regs=[getattr(x,'UC_X86_REG_XMM'+str(i)) for i in range(16)]
    def setf(i,v):cpu.reg_write(regs[i],struct.unpack('<I',struct.pack('<f',v))[0])
    def hook(cpu,a,n,d):
        if a==0x142808d00:cpu.emu_stop();return
        if a==0x142e32a20:
            v=struct.unpack('<f',struct.pack('<I',cpu.reg_read(regs[0])&0xffffffff))[0];setf(0,math.pow(2.,v))
            sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0]
            cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip);return
        if not 0x142808f1e<=a<0x1428091e4:raise RuntimeError(f'Unexpected original API/path {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    cases=[('initial-settle',1/60,0.,4.,0.,0.,False,0.),
      ('begin-falling',1/60,0.,4.,8.,0.,False,0.),
      ('continue-falling',1/60,0.,4.,8.,0.,True,.05),
      ('quiet-landing',1/60,0.,4.,4.01,-1.,True,.005),
      ('audible-landing',1/60,0.,4.,4.01,-1.,True,.08),
      ('strong-landing',1/60,0.,4.,4.01,-10.,True,.3),
      ('raising',1/60,.25,4.,4.,0.,False,0.),
      ('fast-lowering',1/60,-3.,2.,4.,0.,False,0.),
      ('slow-lowering',1/60,-.02,3.98,4.,0.,False,0.),
      ('large-timestep',.1,0.,4.,8.,1.,True,.1),
      ('upward-falling-state',1/60,0.,4.,8.,10.,True,.1)]
    checks=[]
    for name,dt,delta,pivot,height,velocity,falling,duration in cases:
        model=ref.RoofTileSimulation(delta,4.,height,velocity,duration,falling)
        cpu.mem_write(0x210000,model.pack());cpu.mem_write(0x200028,struct.pack('<f',dt))
        sp=0x10ff00;cpu.mem_write(sp,b'\0'*0x100)
        cpu.mem_write(sp+0x74,struct.pack('<fff',2.,pivot,3.))
        cpu.mem_write(sp+0x38,struct.pack('<II',123,456));cpu.mem_write(sp+0x90,struct.pack('<Q',0x230000))
        cpu.mem_write(sp+0x40,struct.pack('<Q',0x240000));cpu.mem_write(0x240000,b'\0'*0x50)
        cpu.mem_write(0x240020,struct.pack('<QQQ',4,0x250000,0));cpu.mem_write(0x240040,struct.pack('<Q',9))
        cpu.mem_write(0x250000,b'\0'*160)
        cpu.reg_write(x.UC_X86_REG_RSP,sp);cpu.reg_write(x.UC_X86_REG_RDI,0x210000)
        cpu.reg_write(x.UC_X86_REG_R12,0x220000);cpu.reg_write(x.UC_X86_REG_R14,0x200000)
        for reg in regs:cpu.reg_write(reg,0)
        for i,v in {6:0.,7:-120.,9:-13.300004005432129,10:1.,12:.10000000149011612,14:15.}.items():setf(i,v)
        cpu.reg_write(regs[11],0x7fffffff)
        cpu.emu_start(0x142808f1e,0x10000,count=1000)
        actual=bytes(cpu.mem_read(0x210000,24));events=model.advance_audio(dt,pivot)
        count=struct.unpack('<Q',cpu.mem_read(0x240030,8))[0];tag=cpu.mem_read(0x250008,1)[0] if count else None
        gain=struct.unpack('<f',cpu.mem_read(0x25000c,4))[0] if tag==4 else None
        event_equal=count==len(events) and (not count or tag==events[0]['tag']) and (tag!=4 or gain==events[0]['gain'])
        checks.append({'case':name,'original_state':actual[:21].hex(),'recovered_state':model.pack()[:21].hex(),
          'original_event_tag':tag,'original_event_gain':gain,'recovered_requests':events,
          'state_bits_equal':actual[:21]==model.pack()[:21],'request_equal':event_equal,
          'passed':actual[:21]==model.pack()[:21] and event_equal})
    return {'exe_sha256':sha,'checks':len(checks),'passed':all(row['passed'] for row in checks),'results':checks,
      'entry':'0x142808f1e','stop':'0x142808d00','math_hook':'Original IAT exp2f replaced with Python math.pow(2,x), f32-rounded.',
      'limits':['Isolated per-entity core, synthetic preallocated event writer; ECS query traversal not executed.',
        'Verified simulation data and event discriminant/gain; full event payload resource identity/position not claimed.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
