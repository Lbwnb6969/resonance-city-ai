"""Independent CPU reference for recovered roof_tiles_gravity compute shader.
64-byte RoofShingle records are updated without EXE, GPU or third-party libs.
The GLSL source is the primary authority. CPU float32 operations are explicit;
GPU transcendental/FMA rounding can differ and is measured separately.
"""
import argparse,json,math,pathlib,struct
import recovered_roof as r

def half(v):return struct.unpack('<e',struct.pack('<e',v))[0]
def mix(a,b,t):return r.lerp(a,b,t)
def exp(v):return r.f32(math.exp(v))
def seed_random(seed):
    # Shader Jenkins mix, modulo 2**32, mantissa bit construction.
    m=0xffffffff;a=seed&m;a=(a+(a<<10))&m;a^=a>>6;a=(a+(a<<3))&m;a^=a>>11;a=(a+(a<<15))&m
    return r.sub(struct.unpack('<f',struct.pack('<I',(a&8388607)|1065353216))[0],1.)

def update_record(record,dt,wall_height_delta,roof_pivot_y,animation_t):
    b=bytearray(record);dt,delta,pivot,animation=map(r.f32,(dt,wall_height_delta,roof_pivot_y,animation_t))
    current=struct.unpack_from('<f',b,12)[0];velocity=struct.unpack_from('<e',b,44)[0]
    profile=struct.unpack_from('<e',b,30)[0];seed=struct.unpack_from('<I',b,52)[0]
    pull=delta<0. and r.div(delta,dt)>-120. and current<=r.sub(pivot,delta)
    t=r.mul(r.f32(math.floor(r.mul(profile,50.))),r.f32(.02))
    velocity=r.add(velocity,r.mul(r.mul(r.f32(-98.100006103515625),mix(1.,r.f32(.4),t)),dt))
    newheight=r.add(pivot if pull else current,r.mul(velocity,dt))
    if newheight<=pivot:
        velocity=min(15.,max(r.mul(r.div(delta,dt),r.f32(.166)),velocity));newheight=max(newheight,pivot)
    if t>r.f32(.9):height=pivot
    else:
        fourth=r.mul(r.mul(r.mul(t,t),t),t)
        damping=r.mul(5.,mix(0.,2.,r.sub(1.,fourth)))
        damping=r.mul(damping,1. if r.mul(seed_random(seed),t)>r.f32(.3) else 1000.)
        weight=r.sub(1.,exp(r.mul(-dt,damping)))
        height=mix(newheight,pivot,weight)
    distance=abs(r.sub(pivot,height))
    rotation=r.mul(r.sub(1.,exp(r.mul(r.mul(-distance,distance),distance))),r.f32(-1.57)) if velocity>0. else 0.
    struct.pack_into('<f',b,12,height);struct.pack_into('<ee',b,44,velocity,rotation);struct.pack_into('<f',b,48,animation)
    return bytes(b)

def update(records,dt,wall_height_delta,roof_pivot_y,animation_t):
    return [update_record(b,dt,wall_height_delta,roof_pivot_y,animation_t) for b in records]

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--input',type=pathlib.Path,required=True)
    p.add_argument('--out',type=pathlib.Path,required=True);p.add_argument('--dt',type=float,default=1/60)
    p.add_argument('--delta',type=float,default=0.);p.add_argument('--pivot',type=float,required=True)
    p.add_argument('--animation',type=float,default=1.);a=p.parse_args();data=a.input.read_bytes()
    if len(data)%64:raise ValueError('Input length must be a multiple of 64')
    records=update([data[i:i+64] for i in range(0,len(data),64)],a.dt,a.delta,a.pivot,a.animation)
    with a.out.open('xb') as f:f.write(b''.join(records))
    print(json.dumps({'records':len(records),'updated_offsets':[12,44,48]}))
