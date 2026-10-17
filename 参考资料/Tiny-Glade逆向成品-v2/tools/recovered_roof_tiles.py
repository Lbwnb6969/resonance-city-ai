"""Independent Python roof tile reconstruction; no EXE or emulator required.

Circular raw callback records are reconstructed from observed original routines.
Math operations round to binary32, and packed attributes round to binary16.
Output is the CPU callback input, before scene/render-slot postprocessing.
"""
import math,struct
import argparse,json,pathlib
import recovered_roof as r

def sqrt(v):return r.f32(math.sqrt(v))
def sin(v):return r.f32(math.sin(v))
def cos(v):return r.f32(math.cos(v))
def cross(a,b):
    return tuple(r.sub(r.mul(a[(i+1)%3],b[(i+2)%3]),r.mul(a[(i+2)%3],b[(i+1)%3])) for i in range(3))
def dot(a,b):return r.add(r.add(r.mul(a[0],b[0]),r.mul(a[1],b[1])),r.mul(a[2],b[2]))
def quat_from_columns(a,b,c):
    """Original glam matrix-to-quaternion branch and float32 operation order."""
    m00,m10,m20=a;m01,m11,m21=b;m02,m12,m22=c
    if m22<=0.:
        dif=r.sub(m11,m00)
        if dif<=0.:
            four=r.sub(r.sub(1.,m22),dif);h=r.div(.5,sqrt(four))
            return (r.mul(four,h),r.mul(r.add(m01,m10),h),r.mul(r.add(m02,m20),h),r.mul(r.sub(m21,m12),h))
        four=r.add(dif,r.sub(1.,m22));h=r.div(.5,sqrt(four))
        return (r.mul(r.add(m01,m10),h),r.mul(four,h),r.mul(r.add(m12,m21),h),r.mul(r.sub(m02,m20),h))
    total=r.add(m11,m00)
    if total<=0.:
        four=r.sub(r.add(m22,1.),total);h=r.div(.5,sqrt(four))
        return (r.mul(r.add(m02,m20),h),r.mul(r.add(m12,m21),h),r.mul(four,h),r.mul(r.sub(m10,m01),h))
    four=r.add(r.add(total,m22),1.);h=r.div(.5,sqrt(four))
    return (r.mul(r.sub(m21,m12),h),r.mul(r.sub(m02,m20),h),r.mul(r.sub(m10,m01),h),r.mul(four,h))

def rotate_vec(q,v):
    # Original glam quat*vec3, preserving multiply/add structure.
    x,y,z,w=q
    vx,vy,vz=v
    vv=r.add(r.add(r.mul(x,x),r.mul(y,y)),r.mul(z,z))
    ww=r.mul(w,w);scale=r.sub(ww,vv)
    twice_dot=r.add(dot((x,y,z),v),dot((x,y,z),v))
    twice_w=r.add(w,w)
    return tuple(r.add(r.add(r.mul(scale,v[i]),r.mul(twice_dot,(x,y,z)[i])),
                       r.mul(twice_w,cross((x,y,z),v)[i])) for i in range(3))

def pack_record(position,scale,profile,quat,render_id,seed,is_circle,body):
    record=bytearray(64)
    struct.pack_into('<3ff',record,0,*position,0.)
    struct.pack_into('<4e',record,16,0.,1.,0.,65504.)
    struct.pack_into('<4e',record,24,*scale,profile)
    struct.pack_into('<4e',record,32,*quat)
    struct.pack_into('<IIIIII',record,40,render_id,0,0,seed,is_circle,body)
    return bytes(record)

def circular(roof,render_id=0,flag=0):
    if roof.is_flat():return []
    if roof.wall.kind!='circle':raise ValueError('circular wall required')
    curve=r.Curve(r.profile_curve_ws(r.normalized_profile(roof.profile_01),
                    roof.shape_at(0.).radius,r.f32(.2),roof.height()))
    rows=max(1,math.ceil(r.div(curve.length,r.f32(.4375))))
    rowlength=r.mul(r.div(curve.length,r.f32(rows)),r.f32(1.4285714626312256))
    rng=r.Fastrand(0);records=[];seed=0;tau=r.f32(2*math.pi)
    for row in range(rows-1):
        u=r.div(r.f32(row),r.f32(rows-1));radius,y=curve.point(u)
        dx,dz=roof.tip_offset_world()
        center=(r.add(r.mul(dx,u),r.f32(roof.wall.pivot_x)),y,
                r.add(r.mul(dz,u),r.f32(roof.wall.pivot_z)))
        blend=r.clamp(r.div(r.sub(radius,r.f32(.9)),r.sub(r.f32(.3),r.f32(.9))))
        widthfactor=r.add(r.mul(blend,.5),r.sub(1.,blend))
        perimeter=r.mul(radius,tau)
        phase=r.mul(rng.f32(),tau);sp,cp=sin(phase),cos(phase)
        tiles=max(3,math.ceil(r.div(perimeter,r.mul(widthfactor,.5))))
        splits=r.random_splits(tiles+1,0.,rng)
        segment,_=curve.coord(u)
        ax,ay=curve.points[segment];bx,by=curve.points[segment+1]
        dr,dy=r.sub(bx,ax),r.sub(by,ay)
        invlength=r.div(1.,sqrt(r.add(r.mul(dr,dr),r.mul(dy,dy))))
        slope=r.f32(math.atan(r.div(r.mul(dy,invlength),r.mul(dr,invlength))))
        half=r.mul(r.sub(r.f32(-.1745329201221466),slope),-.5)
        sh,ch=sin(half),cos(half)
        def rotate2(p):
            a,b=p
            return (r.add(r.mul(a,cp),r.mul(b,-sp)),r.add(r.mul(a,sp),r.mul(b,cp)))
        for start,end in zip(splits,splits[1:]):
            a=rotate2(r.circle_point_at_u(radius,start,roof.wall.yaw));b=rotate2(r.circle_point_at_u(radius,end,roof.wall.yaw))
            midpoint=(r.mul(r.add(a[0],b[0]),.5),0.,r.mul(r.add(a[1],b[1]),.5))
            rand=rng.f32();length=r.mul(r.add(r.mul(rand,r.f32(1.2)),r.mul(r.sub(1.,rand),r.f32(.8))),rowlength)
            nx,nz=rotate2(r.circle_point_at_u(radius,r.mul(r.add(start,end),.5),roof.wall.yaw,normal=True))
            normal=(nx,0.,nz);axis=(-nz,0.,nx)
            q=tuple(r.mul(c,sh) for c in axis)+(ch,)
            rotated=rotate_vec(q,normal)
            basisz=cross(axis,rotated)
            quat=quat_from_columns(axis,rotated,basisz)
            width=sqrt(r.add(r.mul(r.sub(a[0],b[0]),r.sub(a[0],b[0])),
                             r.mul(r.sub(a[1],b[1]),r.sub(a[1],b[1]))))
            profile=r.clamp(r.add(r.mul(rng.f32(),r.f32(.2)),u))
            position=tuple(r.add(a,b) for a,b in zip(midpoint,center))
            records.append(pack_record(position,(width,length,r.f32(.1)),profile,quat,render_id,seed,1,2 if row==0 or flag else 1))
            if row==0:
                halfd=tuple(r.mul(r.mul(c,length),.5) for c in rotated)
                startp=(r.sub(position[0],halfd[0]),r.add(position[1],halfd[1]),r.sub(position[2],halfd[2]))
                endp=(r.add(position[0],halfd[0]),r.add(position[1],halfd[1]),r.add(position[2],halfd[2]))
                trimlength=sqrt(r.add(r.add(r.mul(r.sub(startp[0],endp[0]),r.sub(startp[0],endp[0])),
                              r.mul(r.sub(startp[1],endp[1]),r.sub(startp[1],endp[1]))),
                              r.mul(r.sub(startp[2],endp[2]),r.sub(startp[2],endp[2]))))
                if trimlength>r.f32(.1):
                    pos=tuple(r.add(r.mul(a,.5),r.mul(b,.5)) for a,b in zip(startp,endp))
                    # Specialized original trim frame: preserve its four terms,
                    # which differ from the main shingle's normal/tangent basis.
                    if nz<=0.:
                        h=r.div(.5,sqrt(r.sub(1.,nz)))
                        quat=(r.mul(h,r.sub(1.,nz)),r.mul(h,nx),r.mul(h,nx),r.mul(h,r.sub(nz,1.)))
                    else:
                        h=r.div(.5,sqrt(r.add(1.,nz)))
                        quat=(r.mul(h,nx),r.mul(h,r.add(1.,nz)),r.mul(r.add(nz,1.),h),r.mul(h,-nx))
                    records.append(pack_record(pos,(width,trimlength,r.f32(.1)),0.,quat,render_id,seed,1,2))
            seed+=1
    return records

def rectangular(roof,render_id=0,flag=0):
    """Full independent low-level Python reconstruction of rectangle core.

    Basic-block source is readable in roof_rectangle_lifted.py. Its named
    temporary register values preserve optimized Rust control/data flow;
    it does not read or execute EXE bytes and uses stdlib only.
    """
    if roof.wall.kind!='rectangle':raise ValueError('rectangular wall required')
    from roof_rectangle_lifted import generate
    return generate(roof,render_id,flag)

def generate(roof,render_id=0,flag=0):
    return circular(roof,render_id,flag) if roof.wall.kind=='circle' else rectangular(roof,render_id,flag)

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--kind',choices=['circle','rectangle'],default='rectangle')
    p.add_argument('--radius',type=float,default=2.);p.add_argument('--width',type=float,default=5.)
    p.add_argument('--length',type=float,default=4.);p.add_argument('--height',type=float,default=.5)
    p.add_argument('--profile',type=float,default=.5);p.add_argument('--eave',type=float,default=.5)
    p.add_argument('--ridge',type=float,default=.5);p.add_argument('--direction',type=int,choices=[0,1],default=0)
    p.add_argument('--yaw',type=float,default=0.)
    p.add_argument('--tip-x',type=float,default=0.);p.add_argument('--tip-z',type=float,default=0.)
    p.add_argument('--pivot-x',type=float,default=0.);p.add_argument('--pivot-z',type=float,default=0.)
    p.add_argument('--pivot-y',type=float,default=0.);p.add_argument('--render-id',type=int,default=0)
    p.add_argument('--flag',type=int,choices=[0,1],default=0)
    p.add_argument('--out',type=pathlib.Path,required=True);a=p.parse_args()
    roof=r.Roof(r.WallShape(a.kind,a.width,a.length,a.radius,a.pivot_x,a.pivot_z,
          r.f32(math.cos(a.yaw)),r.f32(math.sin(a.yaw)),a.yaw),a.profile,a.height,a.ridge,a.eave,a.direction,
          a.tip_x,a.tip_z,a.pivot_y)
    records=generate(roof,a.render_id,a.flag)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    with a.out.open('xb') as f:f.write(b''.join(records))
    print(json.dumps({'tiles':len(records),'bytes':len(records)*64,'requires_exe':False}))
