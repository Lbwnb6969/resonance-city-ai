"""Validate recovered roof gravity CPU reference against original SPIR-V on GPU.
Requires Windows Vulkan loader and a Vulkan compute device; uses scratch buffers.
"""
import argparse,json,pathlib,struct,hashlib,math
import vulkan_roof_dispatch as gpu
import roof_gpu_reference as ref

def verify(spv,tiles,out):
    data=tiles.read_bytes();records=[]
    for n in range(257):
        b=bytearray(data[n*64:n*64+64]);struct.pack_into('<f',b,12,[3.8,4.,4.02,5.,8.][n%5])
        struct.pack_into('<ee',b,44,[-10.,0.,1.,25.][n//5%4],0.)
        struct.pack_into('<e',b,30,[0.,.2,.5,.8,.9,.92,1.,.88][n//20%8]);records.append(bytes(b))
    cases=[('stationary',1/60,0.,4.,.3),('slow-lowering',1/60,-.02,4.,.3),
      ('fast-lowering',1/60,-3.,4.,.3),('raising',1/60,.25,4.,.6),
      ('strong-raising',1/60,2.,4.,1.),('long-timestep',1/15,-.1,4.,.9)]
    results=[];device=None
    for name,dt,delta,pivot,animation in cases:
        actual=gpu.dispatch(spv,records,dt,delta,pivot,animation);device=actual['device']
        expected=ref.update(records,dt,delta,pivot,animation)
        errors={};bits={};ulps={};unchanged=True;finite=True
        for a,b,old in zip(actual['records'],expected,records):
            for offset,size in [(0,12),(16,28),(52,12)]:unchanged &= a[offset:offset+size]==old[offset:offset+size]
            for offset,fmt,field in [(12,'f','height'),(44,'e','velocity'),(46,'e','rotation'),(48,'f','animation')]:
                x,y=struct.unpack_from('<'+fmt,a,offset)[0],struct.unpack_from('<'+fmt,b,offset)[0]
                finite &= math.isfinite(x) and math.isfinite(y)
                errors[field]=max(errors.get(field,0.),abs(x-y));bits[field]=bits.get(field,0)+(a[offset:offset+struct.calcsize(fmt)]!=b[offset:offset+struct.calcsize(fmt)])
                if fmt=='e':
                    xx,yy=struct.unpack_from('<H',a,offset)[0],struct.unpack_from('<H',b,offset)[0]
                    # Treat signed zero as the same numeric value.
                    rankx=32768-(xx&32767) if xx&32768 else 32768+xx
                    ranky=32768-(yy&32767) if yy&32768 else 32768+yy
                    distance=abs(rankx-ranky)
                    ulps[field]=max(ulps.get(field,0),distance)
        passed=unchanged and finite and errors['height']<=4e-6 and errors['animation']==0. and all(v<=2 for v in ulps.values())
        results.append({'case':name,'records':len(records),'workgroups':5,'dt':dt,'delta':delta,
          'max_absolute_error':errors,'different_field_bits':bits,'max_half_ulp_error':ulps,
          'all_other_52_bytes_unchanged':unchanged,'all_results_finite':finite,
          'gpu_bytes_sha256':hashlib.sha256(b''.join(actual['records'])).hexdigest(),
          'cpu_bytes_sha256':hashlib.sha256(b''.join(expected)).hexdigest(),'passed':passed})
    report={'device':device,'original_spirv':str(spv),'original_spirv_sha256':hashlib.sha256(spv.read_bytes()).hexdigest(),
      'validation_kind':'Actual original SPIR-V Vulkan compute dispatch on scratch host-visible buffers.',
      'cases':results,'total_record_updates':sum(row['records'] for row in results),'passed':all(row['passed'] for row in results),
      'tolerance':{'height_abs':4e-6,'velocity_rotation_half_ulp':2,'animation_abs':0},
      'limits':['This verifies the recovered gravity kernel, not game scheduling or full visual frames.',
        'Float32 FMA and exp intrinsic differences between GPU driver and CPU libm are measured, not hidden.',
        'The runner requires Windows Vulkan and currently selects the observed NVIDIA device.']}
    out.parent.mkdir(parents=True,exist_ok=True)
    with out.open('x',encoding='utf-8') as f:json.dump(report,f,indent=2)
    return report

if __name__=='__main__':
    base=pathlib.Path(__file__).resolve().parents[1];p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--spv',type=pathlib.Path,default=base/'evidence/shader_decode/spirv/country-core/compiled/roof_tiles_gravity/000.spv')
    p.add_argument('--tiles',type=pathlib.Path,default=base/'evidence/reconstruction_roof/tile_samples/rectangle-default.tiles64')
    p.add_argument('--out',type=pathlib.Path,required=True);a=p.parse_args();v=verify(a.spv,a.tiles,a.out)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
