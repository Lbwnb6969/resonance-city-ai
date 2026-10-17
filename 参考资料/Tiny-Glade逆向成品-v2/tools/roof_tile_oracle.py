"""Isolated original Tiny Glade circular and rectangular roof tile generators.

Requires the digest-matched game EXE, pefile and unicorn; never launches game.
Generates original 64-byte tile callback records with scratch-only allocation.
Python substitutes pure CRT math and IEEE binary16 conversion. No OS API executes.
The callback is intercepted before it reaches ECS/resources/render state.
"""
import argparse,hashlib,json,math,pathlib,struct
from dataclasses import asdict
import recovered_roof as r

SIZES={0x142816ba0:4728,0x140b73b80:299,0x140b73b40:49,
 0x140b772d0:842,0x140b77a00:335,0x140b768b0:687,0x142802660:454,
 0x140b771f0:136,0x140df4540:27,0x140def2a0:29,0x140de8220:16,
 0x140deff30:14,0x140e02880:56,0x140de8290:296,0x140def2c0:181,
 0x140df4520:21,0x140def5e0:135,0x140de8bb0:737,0x140080c90:682}
SIZES.update({0x142812c70:15015,0x140b73b00:49,0x140df2970:106,
 0x140ac6200:55,0x140df1b90:121,0x140df1c10:29,0x140b77b60:38,
 0x140b76870:62,0x140b77190:60,0x140df37e0:723,0x140df0010:219,
 0x140ac6110:103,0x140ac5730:2438,0x140fc8030:366,
 0x142d89250:106,0x142802830:597,0x142d8d7f0:106,0x142d7f0f0:177,0x141f100f0:888})

def decode_record(record):
    """Callback input layout matches shader RoofShingle_natural stride 64.

    cpu callback can still apply defaults before writing GPU instances.
    'flags' are kept raw instead of assuming CPU tags already are GPU bools.
    """
    return {'raw_hex':record.hex(),'position':struct.unpack_from('<3f',record),
      'current_height':struct.unpack_from('<f',record,12)[0],
      'clipping_plane_f16':struct.unpack_from('<4e',record,16),
      'scale_f16':struct.unpack_from('<3e',record,24),
      'profile_f16':struct.unpack_from('<e',record,30)[0],
      'rotation_f16':struct.unpack_from('<4e',record,32),
      'render_id':struct.unpack_from('<I',record,40)[0],
      'velocity_rotation_raw':struct.unpack_from('<I',record,44)[0],
      'animation_t':struct.unpack_from('<f',record,48)[0],
      'ordinal':struct.unpack_from('<I',record,52)[0],
      'flags':struct.unpack_from('<2I',record,56)}

def generate(exe,roof,render_id=0,flag=0):
    import pefile,unicorn as u,unicorn.x86_const as x
    with exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE digest differs from recovered addresses')
    # Observed caller VA 0x141f46490 skips BOTH assembly routines for flat roofs.
    # Calling the internal rectangle routine directly at height=0 crosses this
    # precondition and produces NaNs; preserve the recovered dispatch behavior.
    if roof.is_flat():
        return {'exe_sha256':sha,'input':asdict(roof),'generator_va':'flat-dispatch','tiles':0,
          'emulated_instructions':0,'math_substitutions':{},'scratch_bytes':0,'records':[],
          'limits':['Flat skip branch recovered from original assemble_roof_tiles caller; no tile generator executed.']}
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64)
    cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for sec in pe.sections:cpu.mem_write(base+sec.VirtualAddress,sec.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x1000000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    alloc=[0x300000];records=[];math_calls={};counts=[0]
    xmm=[getattr(x,'UC_X86_REG_XMM'+str(i)) for i in range(16)]
    def getf(i):return struct.unpack('<f',struct.pack('<I',cpu.reg_read(xmm[i])&0xffffffff))[0]
    def setf(i,v):cpu.reg_write(xmm[i],struct.unpack('<I',struct.pack('<f',v))[0])
    def ret():
        sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0]
        cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip)
    def hook(cpu,address,size,data):
        counts[0]+=1
        if address in [0x14007ee60,0x1406abac0]:ret();return
        if address in [0x1406abab0,0x1406abad0]:
            length=cpu.reg_read(x.UC_X86_REG_RCX if address==0x1406abab0 else x.UC_X86_REG_R9);ptr=alloc[0]
            alloc[0]+=(length+15)&~15
            if alloc[0]>=0x1200000:raise MemoryError('scratch heap full')
            if address==0x1406abad0:
                old=cpu.reg_read(x.UC_X86_REG_RCX);old_size=cpu.reg_read(x.UC_X86_REG_RDX)
                cpu.mem_write(ptr,bytes(cpu.mem_read(old,min(old_size,length))))
            cpu.reg_write(x.UC_X86_REG_RAX,ptr);ret();return
        if address in [0x142817e20,0x142816720]:
            ptr=cpu.reg_read(x.UC_X86_REG_RDX);records.append(bytes(cpu.mem_read(ptr,64)))
            ret();return
        mathmap={0x142e32ad0:'powf',0x142e329e0:'cosf',0x142e32b30:'sinf',
                 0x142e32990:'atanf',0x142e32a70:'fmodf',0x142e329c0:'ceilf',0x142e32b00:'roundf'}
        if address in mathmap:
            name=mathmap[address];math_calls[name]=math_calls.get(name,0)+1;a=getf(0)
            if name=='powf':v=math.pow(a,getf(1))
            elif name=='fmodf':v=math.fmod(a,getf(1))
            elif name=='cosf':v=math.cos(a)
            elif name=='sinf':v=math.sin(a)
            elif name=='atanf':v=math.atan(a)
            elif name=='ceilf':v=math.ceil(a)
            else:v=math.copysign(math.floor(abs(a)+.5),a)
            setf(0,v);ret();return
        if address in [0x1424e5b90,0x140df4560,0x141e3c420,0x141e3c580,0x141e3c5c0]:
            if address==0x141e3c420:packed=struct.pack('<e',getf(0))
            else:
                n={0x1424e5b90:4,0x140df4560:3,0x141e3c580:3,0x141e3c5c0:4}[address]
                fs=struct.unpack('<'+'f'*n,cpu.mem_read(cpu.reg_read(x.UC_X86_REG_RCX),n*4))
                packed=struct.pack('<'+'e'*n,*fs)
            cpu.reg_write(x.UC_X86_REG_RAX,int.from_bytes(packed,'little'));ret();return
        if not any(a<=address<a+n for a,n in SIZES.items()):
            raise RuntimeError(f'Unknown original code path {address:#x}; no OS calls permitted')
    cpu.hook_add(u.UC_HOOK_CODE,hook)
    w=roof.wall;b=bytearray(0x58)
    if w.kind=='circle':struct.pack_into('<Iffff',b,8,0,w.pivot_x,w.pivot_z,w.radius,w.yaw)
    else:struct.pack_into('<Iffffff',b,8,1,w.axis_x,w.axis_z,w.pivot_x,w.pivot_z,w.width,w.length)
    struct.pack_into('<ffffffB',b,0x24,roof.tip_offset_x,roof.tip_offset_z,
        roof.profile_01,roof.height_01,roof.ridge_length_01,roof.eave_length_01,roof.ridge_direction)
    struct.pack_into('<f',b,0x4c,roof.pivot_y);cpu.mem_write(0x200000,bytes(b))
    cpu.mem_write(0x220000,struct.pack('<ffff',w.pivot_x,w.pivot_z,w.radius,w.yaw) if w.kind=='circle'
                  else struct.pack('<ffffff',w.axis_x,w.axis_z,w.pivot_x,w.pivot_z,w.width,w.length))
    cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000));cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
    # Argument 5/6 callback environment is intercepted and can be a null pointer.
    cpu.mem_write(0x110020,struct.pack('<Q',0))
    cpu.reg_write(x.UC_X86_REG_RCX,0x220000);cpu.reg_write(x.UC_X86_REG_RDX,0x200000)
    cpu.reg_write(x.UC_X86_REG_R8,render_id);cpu.reg_write(x.UC_X86_REG_R9,flag)
    generator=0x142816ba0 if w.kind=='circle' else 0x142812c70
    cpu.emu_start(generator,0x10000,count=5000000)
    if cpu.reg_read(x.UC_X86_REG_RIP)!=0x10000:raise RuntimeError('generator instruction bound exceeded')
    decoded=[decode_record(record) for record in records]
    return {'exe_sha256':sha,'input':asdict(roof),'generator_va':hex(generator),'tiles':len(records),
        'emulated_instructions':counts[0],'math_substitutions':math_calls,
        'scratch_bytes':alloc[0]-0x300000,'records':decoded,
        'limits':['Original machine-code generation with host pure math/f16 substitutions, not recovered original source.',
          '64-byte callback input records match RoofShingle_natural shader offsets; callback postprocessing not executed.',
          'ECS registration, resource lookup, GPU physics and rendering do not execute.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True)
    p.add_argument('--radius',type=float,default=2.);p.add_argument('--profile',type=float,default=.5)
    p.add_argument('--kind',choices=['circle','rectangle'],default='circle')
    p.add_argument('--width',type=float,default=5.);p.add_argument('--length',type=float,default=4.)
    p.add_argument('--height',type=float,default=.5);p.add_argument('--eave',type=float,default=.5)
    p.add_argument('--ridge',type=float,default=.5);p.add_argument('--direction',type=int,choices=[0,1],default=0)
    p.add_argument('--yaw',type=float,default=0.,help='wall shape yaw in radians')
    p.add_argument('--tip-x',type=float,default=0.);p.add_argument('--tip-z',type=float,default=0.)
    p.add_argument('--pivot-x',type=float,default=0.);p.add_argument('--pivot-y',type=float,default=0.);p.add_argument('--pivot-z',type=float,default=0.)
    p.add_argument('--render-id',type=int,default=0);p.add_argument('--flag',type=int,choices=[0,1],default=0)
    p.add_argument('--out',type=pathlib.Path,required=True);a=p.parse_args()
    roof=r.Roof(r.WallShape(a.kind,radius=a.radius,width=a.width,length=a.length,
          pivot_x=a.pivot_x,pivot_z=a.pivot_z,axis_x=r.f32(math.cos(a.yaw)),axis_z=r.f32(math.sin(a.yaw)),yaw=a.yaw),
          profile_01=a.profile,height_01=a.height,eave_length_01=a.eave,
          ridge_length_01=a.ridge,ridge_direction=a.direction,tip_offset_x=a.tip_x,tip_offset_z=a.tip_z,pivot_y=a.pivot_y)
    out=generate(a.exe,roof,render_id=a.render_id,flag=a.flag)
    with a.out.open('x',encoding='utf-8') as f:json.dump(out,f,indent=2)
    print(json.dumps({k:out[k] for k in ['tiles','emulated_instructions','scratch_bytes']}))
