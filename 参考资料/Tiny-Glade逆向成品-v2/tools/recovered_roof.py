"""Recovered Tiny Glade roof geometry kernels, portable Python (stdlib only).

Addresses bind to tiny-glade.exe SHA-256 4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5.
All arithmetic operations round to binary32 to match SSE. Numeric domain:
finite positive shape dimensions; normalized editable parameters in [0,1].
This module reconstructs geometry kernels. The companion recovered_roof_tiles
module reconstructs tile assembly; ECS and game frame scheduling remain separate.
Run --demo FILE.obj to export a sampled continuous roof surface.
"""
import argparse
import bisect
from dataclasses import dataclass
import math
import pathlib
import struct

EXE_SHA256='4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5'
def f32(a): return struct.unpack('<f',struct.pack('<f',a))[0]
def add(a,b): return f32(a+b)
def sub(a,b): return f32(a-b)
def mul(a,b): return f32(a*b)
def div(a,b): return f32(a/b)
def clamp(a): return max(0.0,min(1.0,a))
def lerp(a,b,t): return add(mul(b,t),mul(sub(1.,t),a))
def smoothstep(t): return mul(mul(sub(3.,add(t,t)),t),t)

@dataclass(frozen=True)
class WallShape:
    kind: str='rectangle'
    width: float=5.
    length: float=4.
    radius: float=2.
    pivot_x: float=0.
    pivot_z: float=0.
    axis_x: float=1.
    axis_z: float=0.
    yaw: float=0.

    def dims(self):
        # VA 0x140b77170
        if self.kind=='circle': return (add(self.radius,self.radius),)*2
        return f32(self.width),f32(self.length)

@dataclass(frozen=True)
class Roof:
    wall: WallShape=WallShape()
    profile_01: float=.5
    height_01: float=.5
    ridge_length_01: float=.5
    eave_length_01: float=.5
    ridge_direction: int=0
    tip_offset_x: float=0.
    tip_offset_z: float=0.
    pivot_y: float=0.

    def is_flat(self): return f32(self.height_01)<=f32(.1)
    def is_gable(self): return not self.is_flat() and f32(self.ridge_length_01)==1.
    def gable_sides(self):
        # VA 0x140b77190: enum Option<(Side,Side)> represented by tag + 2 u64s.
        return (self.ridge_direction,self.ridge_direction|2) if self.is_gable() else None
    def ridge_dims(self):
        if self.wall.kind=='circle': return None
        return ridge_dims(self.ridge_length_01,self.ridge_direction,*self.wall.dims())
    def tip_center_local(self):
        # VA 0x140ac6200
        w,l=self.wall.dims()
        return mul(mul(w,f32(self.tip_offset_x)),1.),mul(mul(l,f32(self.tip_offset_z)),1.)
    def tip_offset_world(self):
        # VA 0x140b771f0. 0x142e36f40/60 vectors are (0.5,0.5,...).
        x,z=self.tip_center_local();x=mul(x,.5);z=mul(z,.5)
        if self.wall.kind=='circle': return x,z
        a,b=f32(self.wall.axis_x),f32(self.wall.axis_z)
        return add(mul(a,x),mul(-b,z)),add(mul(b,x),mul(a,z))
    def height(self):
        # VA 0x140b77a00
        h=f32(self.height_01)
        if h<=f32(.1): return 0.
        if self.wall.kind=='rectangle':
            size=div(sub(max(self.wall.dims()),2.25),12.75);base=9.
        else:
            size=div(add(f32(self.wall.radius),f32(-.9000000357627869)),f32(7.1));base=8.
        q=smoothstep(clamp(div(size,f32(.4))))
        limit=lerp(base,12.,q)
        return min(limit,max(0.,lerp(f32(.4),12.,h)))
    def shape_at(self,t):
        # VA 0x140b77bc0. t is normalized vertical coordinate.
        p=f32(self.profile_01)
        exponent=add(mul(sub(1.,p),.5),mul(p,1.5))
        k=f32(math.pow(f32(t),div(1.,exponent)))
        root=f32(math.sqrt(p))
        growth=mul(mul(f32(self.eave_length_01),1.5),lerp(.5,1.,root))
        if self.wall.kind=='rectangle':
            w,l=self.wall.dims();rw,rl=self.ridge_dims()
            return WallShape('rectangle',lerp(add(add(w,growth),f32(.28)),rw,k),
                 lerp(add(add(l,growth),f32(.28)),rl,k),self.wall.radius,
                 self.wall.pivot_x,self.wall.pivot_z,self.wall.axis_x,self.wall.axis_z)
        growth=mul(add(mul(growth,f32(1.2)),f32(.28)),.5)
        return WallShape('circle',radius=lerp(add(f32(self.wall.radius),growth),f32(.2),k),
                         pivot_x=self.wall.pivot_x,pivot_z=self.wall.pivot_z,yaw=self.wall.yaw)
    def shape_at_intersection_y(self,y):
        # VA 0x140b77620 excludes eave/outline growth used by shape_at().
        y=f32(y);pivot=f32(self.pivot_y);h=self.height()
        if y==pivot:return self.wall
        if y<pivot or add(pivot,h)<=y:return None
        p=f32(self.profile_01)
        k=f32(math.pow(div(sub(y,pivot),h),div(1.,lerp(.5,1.5,p))))
        if self.wall.kind=='rectangle':
            w,l=self.wall.dims();rw,rl=self.ridge_dims()
            return WallShape('rectangle',lerp(w,rw,k),lerp(l,rl,k),self.wall.radius,
                             self.wall.pivot_x,self.wall.pivot_z,self.wall.axis_x,self.wall.axis_z)
        return WallShape('circle',radius=mul(f32(self.wall.radius),sub(1.,k)),
                         pivot_x=self.wall.pivot_x,pivot_z=self.wall.pivot_z,yaw=self.wall.yaw)

def ridge_dims(ridge_01,direction,width,length):
    # VA 0x140ac60c0 / 0x140ac6110, returned as two f32 bits in RAX.
    n=lerp(f32(.1),f32(length if direction else width),f32(ridge_01))
    return (f32(.1),n) if direction else (n,f32(.1))

def inverse_ridge_01_param(value,direction,width,length):
    # VA 0x140ac6180. A selected dimension of 0.1 is an original panic domain.
    dim=f32(length if direction else width)
    if dim==f32(.1): raise ValueError('selected dimension equals original panic threshold 0.1')
    return clamp(div(add(f32(value),f32(-.1)),add(dim,f32(-.1))))

def normalized_profile(profile_01):
    # VA 0x140b772d0 creates exactly 20 points, x=i/19, y=x**(0.5+profile).
    p=f32(profile_01);exponent=lerp(.5,1.5,p)
    return [(f32(i/19),f32(math.pow(f32(i/19),exponent))) for i in range(20)]

def profile_curve_ws(points,inner_radius,outer_radius,height):
    # VA 0x140b768b0: map each point; constructor/polyline cache is separate.
    a,b,h=map(f32,(inner_radius,outer_radius,height))
    return [(lerp(a,b,f32(x)),mul(f32(y),h)) for x,y in points]

def roof_height_ws_from_wall_shape(shape):
    # VA 0x140b76fd0 calls EasingFunction variant 2, cosine interpolation.
    if shape.kind=='rectangle':
        q=div(sub(max(shape.dims()),2.25),12.75);lo,hi=3.,6.
    else:
        q=div(add(f32(shape.radius),f32(-.9000000357627869)),f32(7.1));lo,hi=4.,10.
    # The original cosine's input is rounded after multiplying by binary32 PI.
    q=mul(q,f32(math.pi))
    eased=mul(add(f32(math.cos(q)),-1.),-.5)
    return mul(clamp(div(lerp(lo,hi,eased),12.)),12.)

class Fastrand:
    """VA 0x140e02880: original 64-bit wyrand state and float bit conversion."""
    def __init__(self,seed=0):self.state=seed&((1<<64)-1)
    def f32(self):
        mask=(1<<64)-1
        self.state=(self.state+0xa0761d6478bd642f)&mask
        product=self.state*(self.state^0xe7037ed1a0b428db)
        value=((product>>64)^(product&mask))&0xffffffff
        value=(value>>9)|0x3f800000
        return sub(struct.unpack('<f',struct.pack('<I',value))[0],1.)

def random_splits(count,jitter,rng):
    """VA 0x140de8bb0; count includes endpoints, interior jitter never reorders."""
    if count<3:return [0.,1.]
    delta=div(1.,f32(count-1))
    jitter=min(f32(jitter),mul(delta,f32(.495)))
    return [0.]+[add(mul(add(rng.f32(),-.5),jitter),mul(f32(i),delta))
                  for i in range(1,count-1)]+[1.]

@dataclass
class Curve:
    """VA 0x140080c90: two-dimensional cumulative arc-length polyline."""
    points: list
    def __post_init__(self):
        self.points=[(f32(a),f32(b)) for a,b in self.points]
        if len(self.points)<2:raise ValueError('original curve requires at least 2 points')
        self.length=0.;lengths=[0.]
        for (a,b),(c,d) in zip(self.points,self.points[1:]):
            x,y=sub(a,c),sub(b,d)
            self.length=add(self.length,f32(math.sqrt(add(mul(x,x),mul(y,y)))))
            lengths.append(self.length)
        if self.length==0.:raise ValueError('original curve has zero arc length')
        self.u=[div(v,self.length) for v in lengths]
    def coord(self,u):
        # VA 0x142802660 returns index in RAX and local factor in XMM0.
        u=f32(u)
        if u<=0.:return 0,0.
        if u>=1.:return len(self.points)-2,1.
        i=bisect.bisect_right(self.u,u)-1
        return i,div(sub(u,self.u[i]),sub(self.u[i+1],self.u[i]))
    def point(self,u):
        i,t=self.coord(u);a,b=self.points[i];c,d=self.points[i+1]
        return lerp(a,c,t),lerp(b,d,t)

def circle_point_at_u(radius,u,yaw=0.,pivot=(0.,0.),normal=False):
    # VA 0x140def2c0/0x140def5e0. Circle parameterization runs clockwise.
    tau=f32(2*math.pi);phase=f32(math.fmod(f32(yaw),tau))
    if phase<0.:phase=add(tau,phase)
    angle=add(phase,mul(sub(1.,f32(u)),tau))
    c,s=f32(math.cos(angle)),f32(math.sin(angle))
    if normal:return c,s
    return add(mul(c,f32(radius)),f32(pivot[0])),add(mul(s,f32(radius)),f32(pivot[1]))

def circular_row_plan(roof):
    """Observed circular assembly row/ring spacing only; no tile transforms.

    VA 0x142816ba0 uses arc-length sampling, ceil(length/0.4375), minimum 1,
    leaves the last roof tip out, circumference/(0.5*scale), minimum 3 tiles.
    Random phase and gaps, packed orientation and callback are separate.
    """
    if roof.wall.kind!='circle':raise ValueError('circular wall required')
    profile=Curve(profile_curve_ws(normalized_profile(roof.profile_01),
                                  roof.shape_at(0.).radius,f32(.2),roof.height()))
    count=max(1,math.ceil(div(profile.length,f32(.4375))))
    thickness=mul(div(profile.length,f32(count)),f32(1.4285714626312256))
    rows=[]
    for i in range(count-1):
        u=div(f32(i),f32(count-1));radius,y=profile.point(u)
        blend=clamp(div(sub(radius,f32(.9)),sub(f32(.3),f32(.9))))
        scale=add(mul(blend,.5),sub(1.,blend))
        perimeter=mul(radius,f32(2*math.pi))
        tile_count=max(3,math.ceil(div(perimeter,mul(scale,.5))))
        rows.append({'u':u,'radius':radius,'y':y,'tile_count':tile_count,
                     'length':thickness,'width_scale':scale})
    return rows

def export_surface(roof,path,rings=20,segments=48):
    """A reconstruction visualization, not original tile layout/randomization."""
    verts=[];faces=[];h=roof.height()
    for r in range(rings):
        t=f32(r/(rings-1));s=roof.shape_at(t)
        for j in range(segments):
            a=j/segments*2*math.pi
            if s.kind=='circle':x,z=s.radius*math.cos(a),s.radius*math.sin(a)
            else:
                scale=max(abs(math.cos(a)),abs(math.sin(a)))
                x,z=s.width*.5*math.cos(a)/scale,s.length*.5*math.sin(a)/scale
            dx,dz=roof.tip_offset_world()
            verts.append((s.pivot_x+x*s.axis_x-z*s.axis_z+dx,roof.pivot_y+t*h,
                          s.pivot_z+x*s.axis_z+z*s.axis_x+dz))
    for r in range(rings-1):
        for j in range(segments):
            a=r*segments+j+1;b=r*segments+(j+1)%segments+1
            faces.append((a,b,b+segments,a+segments))
    path.write_text('# Recovered continuous surface; tile generation not represented\n'+
        ''.join('v %.9g %.9g %.9g\n'%v for v in verts)+
        ''.join('f %d %d %d %d\n'%f for f in faces),encoding='utf-8')

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--demo',type=pathlib.Path,required=True)
    a=p.parse_args();export_surface(Roof(),a.demo)
