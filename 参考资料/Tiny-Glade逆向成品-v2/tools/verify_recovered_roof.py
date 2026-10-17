"""Compare recovered_roof against isolated original x86-64 routines.

pip install pefile unicorn
python verify_recovered_roof.py --exe EXE --out NEW_JSON
Never launches the game. Only selected pure code may run; allocation is scratch
memory, powf/cosf/atan2f are Python math hooks, and polyline constructors stop
execution at their input. Unknown code and OS API calls are rejected.
"""
import argparse,hashlib,json,math,pathlib,random,struct
import recovered_roof as r

def verify(exe):
    import pefile,unicorn as u,unicorn.x86_const as x
    sha=hashlib.file_digest(exe.open('rb'),'sha256').hexdigest()
    if sha!=r.EXE_SHA256:raise ValueError('EXE digest differs from recovered addresses')
    pe=pefile.PE(str(exe),fast_load=True);base=pe.OPTIONAL_HEADER.ImageBase
    cpu=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64)
    cpu.mem_map(base,(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095)
    for s in pe.sections:cpu.mem_write(base+s.VirtualAddress,s.get_data())
    cpu.mem_map(0x100000,0x20000);cpu.mem_map(0x200000,0x100000)
    cpu.reg_write(x.UC_X86_REG_CR4,cpu.reg_read(x.UC_X86_REG_CR4)|0x600)
    xs=[getattr(x,'UC_X86_REG_XMM'+str(i)) for i in range(16)]
    ranges=[(0x140ac60c0,0x140ac6237),(0x140b76870,0x140b76b5f),
      (0x140b76fd0,0x140b77d8a),(0x140dedcd0,0x140dedfae),
      (0x140df1c10,0x140df1c2d),(0x140df3380,0x140df340e),
      (0x140de8220,0x140de8230),(0x140def2a0,0x140def2bd),
      (0x140e02880,0x140e028b8),(0x140de8bb0,0x140de8e91),
      (0x140080c90,0x140080f3a),(0x142802660,0x142802826),
      (0x140def2c0,0x140def375),(0x140def5e0,0x140def667)]
    captured=[];hooks={};steps=[0];stop_factory=[True]
    def getf(i):return struct.unpack('<f',struct.pack('<I',cpu.reg_read(xs[i])&0xffffffff))[0]
    def setf(i,v):cpu.reg_write(xs[i],struct.unpack('<I',struct.pack('<f',v))[0])
    def ret():
        sp=cpu.reg_read(x.UC_X86_REG_RSP);ip=struct.unpack('<Q',cpu.mem_read(sp,8))[0]
        cpu.reg_write(x.UC_X86_REG_RSP,sp+8);cpu.reg_write(x.UC_X86_REG_RIP,ip)
    def code(cpu,address,size,data):
        steps[0]+=1
        if address==0x14007ee60:ret();return
        if address==0x1406abab0:
            cpu.reg_write(x.UC_X86_REG_RAX,0x210000);ret();return
        if address==0x140080c90 and stop_factory[0]:
            vp=cpu.reg_read(x.UC_X86_REG_RDX)
            cap,ptr,n=struct.unpack('<QQQ',cpu.mem_read(vp,24))
            captured[:]=[struct.unpack('<ff',cpu.mem_read(ptr+i*8,8)) for i in range(n)]
            cpu.emu_stop();return
        if address in (0x142e32ad0,0x142e329e0,0x142e32980,0x142e32b30,0x142e32a70):
            name={0x142e32ad0:'powf',0x142e329e0:'cosf',0x142e32980:'atan2f',
                  0x142e32b30:'sinf',0x142e32a70:'fmodf'}[address]
            hooks[name]=hooks.get(name,0)+1
            if name=='powf':v=math.pow(getf(0),getf(1))
            elif name=='cosf':v=math.cos(getf(0))
            elif name=='atan2f':v=math.atan2(getf(0),getf(1))
            elif name=='sinf':v=math.sin(getf(0))
            else:v=math.fmod(getf(0),getf(1))
            setf(0,v);ret();return
        if not any(a<=address<b for a,b in ranges):
            raise RuntimeError(f'unknown executable path {address:#x}')
    cpu.hook_add(u.UC_HOOK_CODE,code)
    def run(a,regs=None,xmm=None):
        captured.clear();steps[0]=0
        cpu.mem_write(0x10fff8,struct.pack('<Q',0x10000))
        cpu.reg_write(x.UC_X86_REG_RSP,0x10fff8)
        for reg in xs:cpu.reg_write(reg,0)
        for name,value in (regs or {}).items():cpu.reg_write(getattr(x,'UC_X86_REG_'+name),value)
        for i,value in (xmm or {}).items():setf(i,value)
        cpu.emu_start(a,0x10000,count=20000)
        if not captured and cpu.reg_read(x.UC_X86_REG_RIP)!=0x10000:
            raise RuntimeError('original routine did not return')
        return getf(0)
    def wallbytes(w):
        if w.kind=='circle':return struct.pack('<Iffff',0,w.pivot_x,w.pivot_z,w.radius,0.)+b'\0'*8
        return struct.pack('<Iffffff',1,w.axis_x,w.axis_z,w.pivot_x,w.pivot_z,w.width,w.length)
    def putroof(roof):
        b=bytearray(0x58);b[8:36]=wallbytes(roof.wall)
        struct.pack_into('<ffffffB',b,0x24,roof.tip_offset_x,roof.tip_offset_z,roof.profile_01,
                 roof.height_01,roof.ridge_length_01,roof.eave_length_01,roof.ridge_direction)
        struct.pack_into('<f',b,0x4c,roof.pivot_y);cpu.mem_write(0x200000,bytes(b))
    checks=[]
    def compare(name,observed,expected,args):
        aa=list(observed) if isinstance(observed,(tuple,list)) else [observed]
        bb=list(expected) if isinstance(expected,(tuple,list)) else [expected]
        error=max([abs(a-b) for a,b in zip(aa,bb)] or [0.])
        checks.append({'routine':name,'args':args,'original':observed,'recovered':expected,'absolute_error':error})
    rng=random.Random(0x54474c44)
    for i in range(80):
        w=r.WallShape('rectangle' if i%2 else 'circle',width=r.f32(rng.uniform(.3,30.)),
          length=r.f32(rng.uniform(.3,30.)),radius=r.f32(rng.uniform(.2,12.)),
          pivot_x=1.25,pivot_z=-2.,axis_x=.6,axis_z=.8)
        roof=r.Roof(w,profile_01=r.f32(rng.random()),height_01=[0.,.1,.100001,.5,1.][i%5],
          ridge_length_01=[0.,.5,1.][i%3],eave_length_01=r.f32(rng.random()),
          ridge_direction=i%2,tip_offset_x=.2,tip_offset_z=-.3,pivot_y=2.)
        putroof(roof)
        compare('Roof::height',run(0x140b77a00,{'RCX':0x200000}),roof.height(),{'case':i})
        run(0x140b77b50,{'RCX':0x200000})
        compare('Roof::is_flat',float(cpu.reg_read(x.UC_X86_REG_RAX)&0xff),float(roof.is_flat()),{'case':i})
        run(0x140b77170,{'RCX':0x200000})
        compare('Roof::shape_dims',(getf(0),getf(1)),w.dims(),{'case':i})
        run(0x140ac6200,{'RCX':0x200000},{1:.3,2:-.4})
        compare('calc_roof_tip_center_ls',(getf(0),getf(1)),
          (r.mul(r.mul(w.dims()[0],r.f32(.2)),r.f32(.3)),r.mul(r.mul(w.dims()[1],r.f32(-.3)),r.f32(-.4))),{'case':i})
        run(0x140b771f0,{'RCX':0x200000})
        compare('Roof::roof_tip_offset_xz',(getf(0),getf(1)),roof.tip_offset_world(),{'case':i})
        run(0x140b77190,{'RCX':0x220000,'RDX':0x200000})
        tag=struct.unpack('<Q',cpu.mem_read(0x220000,8))[0]
        sides=tuple(struct.unpack('<QQ',cpu.mem_read(0x220008,16))) if tag else None
        if sides!=roof.gable_sides():raise AssertionError(('gable_sides',sides,roof.gable_sides()))
        compare('Roof::gable_sides',float(bool(tag)),float(roof.is_gable()),{'case':i})
        for t in [0.,.25,.8,1.]:
            run(0x140b77bc0,{'RCX':0x220000,'RDX':0x200000},{2:t})
            out=bytes(cpu.mem_read(0x220000,28));shape=roof.shape_at(t)
            observed=struct.unpack_from('<ff',out,20) if w.kind=='rectangle' else (struct.unpack_from('<f',out,12)[0],)
            compare('Roof::get_roof_shape',observed,shape.dims() if w.kind=='rectangle' else (shape.radius,),{'case':i,'t':t})
        for t in [-.1,0.,.3,1.,1.1]:
            y=r.add(roof.pivot_y,r.mul(roof.height(),t))
            run(0x140b77620,{'RCX':0x220000,'RDX':0x200000},{2:y})
            out=bytes(cpu.mem_read(0x220000,28));tag=struct.unpack_from('<I',out)[0];shape=roof.shape_at_intersection_y(y)
            if tag==2:
                if shape is not None:raise AssertionError('intersection expected outside')
                compare('Roof::roof_shape_at_intersection_y',2.,2.,{'case':i,'t':t})
            else:
                if shape is None:raise AssertionError('intersection expected inside')
                observed=struct.unpack_from('<ff',out,20) if tag==1 else (struct.unpack_from('<f',out,12)[0],)
                compare('Roof::roof_shape_at_intersection_y',observed,shape.dims() if tag==1 else (shape.radius,),{'case':i,'t':t})
        run(0x140b772d0,{'RCX':0x220000,'RDX':0x200000})
        compare('Roof::profile_curve_normalized',[a for p in captured for a in p],
          [a for p in r.normalized_profile(roof.profile_01) for a in p],{'case':i})
        cpu.mem_write(0x230000,wallbytes(w))
        compare('roof_height_ws_from_wall_shape',run(0x140b76fd0,{'RCX':0x230000}),r.roof_height_ws_from_wall_shape(w),{'case':i})
        width,length=w.dims();direction=i%2;ridge=r.f32(rng.random())
        run(0x140ac60c0,{'RDX':direction},{0:ridge,2:width,3:length})
        observed=struct.unpack('<ff',struct.pack('<Q',cpu.reg_read(x.UC_X86_REG_RAX)))
        compare('RoofRidgeDims::calc',observed,r.ridge_dims(ridge,direction,width,length),{'case':i})
        value=r.mul(length if direction else width,r.f32(rng.random()))
        compare('inverse_ridge_01_param',run(0x140ac6180,{'RDX':direction},{0:value,2:width,3:length}),
          r.inverse_ridge_01_param(value,direction,width,length),{'case':i})
    for n in [1,2,3,4,5,8,19,20,21,40]:
        points=[(r.f32(rng.random()),r.f32(rng.random())) for _ in range(n)]
        cpu.mem_write(0x230000,struct.pack('<QQQ',n,0x240000,n))
        cpu.mem_write(0x240000,b''.join(struct.pack('<ff',*p) for p in points))
        # Fifth positional float height is at entry RSP+0x28.
        cpu.mem_write(0x110020,struct.pack('<f',3.25))
        run(0x140b768b0,{'RCX':0x220000,'RDX':0x230000},{2:.2,3:6.})
        compare('profile_curve_ws',[a for p in captured for a in p],
          [a for p in r.profile_curve_ws(points,.2,6.,3.25) for a in p],{'points':n})
    stop_factory[0]=False
    for seed in [0,1,0xffffffffffffffff,0x4d595df4d0f33173]:
        rr=r.Fastrand(seed);cpu.mem_write(0x260000,struct.pack('<Q',seed))
        for i in range(30):
            compare('fastrand::Rng::f32',run(0x140e02880,{'RCX':0x260000}),rr.f32(),{'seed':seed,'step':i})
            if struct.unpack('<Q',cpu.mem_read(0x260000,8))[0]!=rr.state:raise AssertionError('Rng state mismatch')
    for n in [2,3,4,7,20,50]:
        for jitter in [0.,.001,.1,1.]:
            cpu.mem_write(0x260000,struct.pack('<Q',3))
            cpu.mem_write(0x230000,struct.pack('<QQQ',n,0x240000,0))
            run(0x140de8bb0,{'RCX':n,'R8':0x260000,'R9':0x230000},{1:jitter})
            observed=list(struct.unpack('<'+'f'*n,cpu.mem_read(0x240000,n*4)))
            compare('utils::random_splits_into',observed,r.random_splits(n,jitter,r.Fastrand(3)),{'n':n,'jitter':jitter})
    for n in [2,3,4,8,20,21]:
        curve=r.Curve(r.normalized_profile(.5)[:n] if n<=20 else [(i/20,(i/20)**1.4) for i in range(n)])
        cpu.mem_write(0x230000,struct.pack('<QQQ',n,0x240000,n))
        cpu.mem_write(0x240000,b''.join(struct.pack('<ff',*p) for p in curve.points))
        run(0x140080c90,{'RCX':0x270000,'RDX':0x230000,'R8':0})
        observed=list(struct.unpack('<'+'f'*n,cpu.mem_read(0x210000,n*4)))
        compare('Curve::try_new_from_points.u',observed,curve.u,{'n':n})
        length=struct.unpack('<f',cpu.mem_read(0x270030,4))[0]
        compare('Curve::try_new_from_points.length',length,curve.length,{'n':n})
        for t in [-1.,0.,.001,.2,.8,.999,1.,2.]:
            observed_t=run(0x142802660,{'RCX':0x270000},{1:t});idx=cpu.reg_read(x.UC_X86_REG_RAX)
            expected_idx,expected_t=curve.coord(t)
            if idx!=expected_idx:raise AssertionError(('curve index',idx,expected_idx))
            compare('Curve::get_coord_at_u',observed_t,expected_t,{'n':n,'t':t})
    for yaw in [-8.,-1.,0.,1.,8.]:
        for t in [0.,.1,.5,1.]:
            cpu.mem_write(0x230000,struct.pack('<ffff',1.25,-2.,3.5,yaw))
            run(0x140def2c0,{'RCX':0x230000},{1:t})
            compare('Circle2d::get_pos_at_u',(getf(0),getf(1)),r.circle_point_at_u(3.5,t,yaw,(1.25,-2.)),{'yaw':yaw,'u':t})
            run(0x140def5e0,{'RCX':0x230000},{1:t})
            compare('Circle2d::get_normal_at_u',(getf(0),getf(1)),r.circle_point_at_u(3.5,t,yaw,normal=True),{'yaw':yaw,'u':t})
    groups={}
    for row in checks:
        g=groups.setdefault(row['routine'],{'checks':0,'max_absolute_error':0.})
        g['checks']+=1;g['max_absolute_error']=max(g['max_absolute_error'],row['absolute_error'])
    return {'exe_sha256':sha,'passed':all(g['max_absolute_error']<4e-6 for g in groups.values()),
      'checks':len(checks),'tolerance':4e-6,'routines':groups,'math_hooks':hooks,'results':checks,
      'authority':'Original isolated machine instructions with declared host math substitutions.',
      'limits':['powf, cosf and atan2f substituted with correctly rounded Python math results; CRT implementation itself not verified.',
        'Profile allocation uses scratch memory; stop before polyline cache construction.',
        'Finite sampled positive dimensions and normalized inputs; not exhaustive IEEE754 proof.',
        'No game, ECS, random tile generator, or native OS API executed.']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe);a.out.parent.mkdir(parents=True,exist_ok=True)
    with a.out.open('x',encoding='utf-8') as f:json.dump(v,f,indent=2)
    print(json.dumps({k:v[k] for k in ['passed','checks','routines']}));raise SystemExit(0 if v['passed'] else 1)
