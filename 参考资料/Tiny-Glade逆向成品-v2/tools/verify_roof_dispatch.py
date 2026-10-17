"""Verify original push-constant mapping and command dispatch from synthetic state."""
import argparse,pathlib,struct,json,hashlib
import recovered_roof as r
from roof_dispatch_reference import PushConstants

def verify(exe):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE mismatch')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x100000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    push_calls=[];dispatch_calls=[]
    def ret():
        sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0]
        cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip)
    def hook(cpu,a,n,d):
        if a==0x200010:
            sp=cpu.reg_read(x.UC_X86_REG_RSP);size=struct.unpack('<I',cpu.mem_read(sp+0x28,4))[0]
            pp=struct.unpack('<Q',cpu.mem_read(sp+0x30,8))[0]
            push_calls.append({'bytes':bytes(cpu.mem_read(pp,size)).hex(),'stage':cpu.reg_read(x.UC_X86_REG_R8),
              'offset':cpu.reg_read(x.UC_X86_REG_R9),'size':size});ret();return
        if a==0x200020:
            dispatch_calls.append(tuple(cpu.reg_read(getattr(x,'UC_X86_REG_'+reg)) for reg in ['RDX','R8','R9']))
            ret();return
        if a==0x1406abac0:ret();return
        if not any(lo<=a<hi for lo,hi in [(0x1415df2e0,0x1415df4b7),(0x141780520,0x141780645),(0x1417a5fa0,0x1417a608d)]):
            raise RuntimeError(f'Unknown code/API {a:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    def run(a,rcx,rdx,r8=0):
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX,rcx);cpu.reg_write(x.UC_X86_REG_RDX,rdx);cpu.reg_write(x.UC_X86_REG_R8,r8)
        cpu.emu_start(a,0x10000,count=10000)
        if cpu.reg_read(x.UC_X86_REG_RIP)!=0x10000:raise RuntimeError('did not return')
    inputs=[PushConstants(0,1,-.1,3.,0.),PushConstants(32,32,.25,4.,.5),PushConstants(128,65,0.,2.,1.)]
    mapping=[]
    for pc in inputs:
        state=bytearray(0xa0);struct.pack_into('<I',state,0,1)
        struct.pack_into('<QQQQ',state,0x30,0x220000,0x220000,1,0x220008)
        struct.pack_into('<QQQ',state,0x50,0x230000,0x240000,0x250000)
        cpu.mem_write(0x210000,bytes(state));cpu.mem_write(0x220000,struct.pack('<II',pc.first_instance,pc.instance_count))
        cpu.mem_write(0x230000,struct.pack('<f',pc.wall_height_delta));cpu.mem_write(0x24004c,struct.pack('<f',pc.roof_pivot_y));cpu.mem_write(0x250000,struct.pack('<f',pc.animation_t))
        run(0x1415df2e0,0x260000,0x210000)
        actual=bytes(cpu.mem_read(0x260004,20));tag=struct.unpack('<I',cpu.mem_read(0x260000,4))[0]
        mapping.append({'push':pc.pack().hex(),'original':actual.hex(),'option_tag':tag,'passed':actual==pc.pack() and tag==1})
    # RgProtocol pipeline handle is a tagged pointer; lowest 6 bits select
    # pipeline index with a 64-byte stride and +0x110 descriptor prefix.
    cpu.mem_write(0x210000,struct.pack('<QQQ',0,0x220000,len(inputs)));cpu.mem_write(0x220000,b''.join(pc.pack() for pc in inputs))
    cpu.mem_write(0x230000,struct.pack('<QQ',0x240000,0x250000));cpu.mem_write(0x240050,struct.pack('<Q',12345))
    cpu.mem_write(0x250428,struct.pack('<Q',0x200010));cpu.mem_write(0x250378,struct.pack('<Q',0x200020))
    cpu.mem_write(0x260000,struct.pack('<Q',0x270000));cpu.mem_write(0x270130,struct.pack('<Q',999))
    cpu.mem_write(0x270140,struct.pack('<I',1));cpu.mem_write(0x270148,struct.pack('<Q',64|(1<<16)|(1<<32)))
    run(0x141780520,0x210000,0x230000,0x260000)
    expected_dispatch=[pc.workgroups() for pc in inputs]
    return {'exe_sha256':sha,'push_mappings':mapping,'command_push_calls':push_calls,'command_dispatch_calls':dispatch_calls,
      'expected_workgroups':expected_dispatch,'passed':all(a['passed'] for a in mapping) and
        all(a['bytes']==pc.pack().hex() and a['stage']==32 and a['offset']==0 and a['size']==20 for a,pc in zip(push_calls,inputs)) and dispatch_calls==expected_dispatch,
      'conclusion':'Original CPU mapper packs first/count, simulation delta, roof pivot_y and primary animation; original command closure pushes 20 bytes and dispatches ceil(count/64),1,1.',
      'limits':['Synthetic preallocated InstancedDraw iterator and compute API; ECS traversal/rendergraph ownership not executed.',
        'Driver function pointers intercepted before OS/GPU calls; original dispatch_threads arithmetic executed.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
