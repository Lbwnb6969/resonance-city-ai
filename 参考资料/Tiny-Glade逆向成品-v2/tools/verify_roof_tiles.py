"""Verify original tile-generator cases and preserve callback-record evidence."""
import argparse,hashlib,json,math,pathlib,struct
import recovered_roof as r
import roof_tile_oracle as oracle

def verify(exe,out):
    out.mkdir(parents=True,exist_ok=True);rows=[]
    cases=[('circle-default',r.Roof(r.WallShape('circle',radius=2.))),
      ('rectangle-default',r.Roof()),
      ('circle-flat',r.Roof(r.WallShape('circle',radius=2.),height_01=0.)),
      ('circle-shallow',r.Roof(r.WallShape('circle',radius=.3),profile_01=0.,height_01=.100001,eave_length_01=0.)),
      ('circle-steep',r.Roof(r.WallShape('circle',radius=4.),profile_01=1.,height_01=1.,eave_length_01=1.)),
      ('rectangle-flat',r.Roof(height_01=0.)),
      ('rectangle-shallow',r.Roof(r.WallShape(width=1.,length=1.),profile_01=0.,height_01=.100001,eave_length_01=0.)),
      ('rectangle-gable-x',r.Roof(ridge_length_01=1.,ridge_direction=0)),
      ('rectangle-gable-z',r.Roof(ridge_length_01=1.,ridge_direction=1)),
      ('rectangle-pyramid',r.Roof(ridge_length_01=0.,height_01=1.,profile_01=1.)),
      ('rectangle-offset',r.Roof(r.WallShape(width=6.,length=3.,axis_x=.6,axis_z=.8,
          pivot_x=10.,pivot_z=-5.),tip_offset_x=.3,tip_offset_z=-.2,pivot_y=3.))]
    for name,roof in cases:
        result=oracle.generate(exe,roof,render_id=0x1234)
        data=b''.join(bytes.fromhex(v['raw_hex']) for v in result['records'])
        finite=all(math.isfinite(v) for rec in result['records']
          for v in (*rec['position'],*rec['scale_f16'],*rec['rotation_f16'],rec['profile_f16']))
        ids=all(rec['render_id']==0x1234 for rec in result['records'])
        # Both include roof trim/special tiles sharing row ordinals.
        positive=all(all(v>0. for v in rec['scale_f16']) for rec in result['records'])
        row={'case':name,'tiles':result['tiles'],'instructions':result['emulated_instructions'],
          'record_bytes_sha256':hashlib.sha256(data).hexdigest(),'finite_fields':finite,
          'render_id_preserved':ids,'positive_scale':positive,'passed':finite and ids and positive}
        rows.append(row)
        if name in ['circle-default','rectangle-default','rectangle-gable-x','circle-flat']:
            with (out/(name+'.json')).open('x',encoding='utf-8') as f:json.dump(result,f,indent=2)
            (out/(name+'.tiles64')).write_bytes(data)
    repeated=oracle.generate(exe,cases[0][1],render_id=0x1234)
    same=hashlib.sha256(b''.join(bytes.fromhex(v['raw_hex']) for v in repeated['records'])).hexdigest()==rows[0]['record_bytes_sha256']
    report={'exe_sha256':r.EXE_SHA256,'cases':rows,'deterministic_repeat_same_records':same,
      'passed':same and all(row['passed'] for row in rows),'evidence_type':'original-instruction-execution-in-Unicorn',
      'limits':['Assertions check callback output shape/domain and determinism; they do not compare rendered gameplay.',
       'Pure CRT math/f16 substitutions and scratch allocator remain explicit oracle assumptions.']}
    with (out/'tile_verification.json').open('x',encoding='utf-8') as f:json.dump(report,f,indent=2)
    return report

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();v=verify(a.exe,a.out);print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
