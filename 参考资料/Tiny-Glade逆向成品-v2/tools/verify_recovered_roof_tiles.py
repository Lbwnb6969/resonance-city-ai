"""Verify independent source against preserved original-generator fixtures.

Runtime needs only Python stdlib, supplied reconstructed source and evidence.
Entire output SHA-256 equality verifies every float bit and integer field,
including signed zero, binary16 packing, order and random-state consumption.
"""
import argparse,hashlib,json,pathlib,time
import recovered_roof as r
import recovered_roof_tiles as t

def cases():
    return [('circle-default',r.Roof(r.WallShape('circle',radius=2.))),
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

def verify(evidence,out):
    authoritative=json.loads((evidence/'tile_verification.json').read_text(encoding='utf-8'))
    expected={row['case']:row for row in authoritative['cases']};results=[]
    for name,roof in cases():
        start=time.perf_counter();records=t.generate(roof,0x1234);elapsed=time.perf_counter()-start
        data=b''.join(records);digest=hashlib.sha256(data).hexdigest();ref=expected[name]
        row={'case':name,'tiles':len(records),'expected_tiles':ref['tiles'],
          'source_kind':'structured-Python' if roof.wall.kind=='circle' else 'basic-block-lifted-Python',
          'sha256_recovered':digest,'sha256_original':ref['record_bytes_sha256'],
          'all_64byte_record_bits_equal':digest==ref['record_bytes_sha256'],
          'passed':len(records)==ref['tiles'] and digest==ref['record_bytes_sha256'],
          'elapsed_seconds':round(elapsed,6)}
        results.append(row)
    result={'exe_required':False,'third_party_runtime_dependencies':[],
      'fixture_exe_sha256':authoritative['exe_sha256'],'cases':results,
      'nonflat_records':sum(row['tiles'] for row in results),
      'passed':all(row['passed'] for row in results),'absolute_error':0.,
      'authority':'Full packed output bit identity to preserved isolated-original-generator fixtures.',
      'limits':['Fixtures bind to original code with documented pure CRT/f16 substitutes, not live game frames.',
        'Rectangle control flow is reconstructed low-level source; source authors original Rust/type names not recovered.',
        'Successful original callback copies these complete records unchanged; upload scheduling remains separate.']}
    out.parent.mkdir(parents=True,exist_ok=True)
    with out.open('x',encoding='utf-8') as f:json.dump(result,f,indent=2)
    return result

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--evidence',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]/'evidence/reconstruction_roof/tile_samples')
    p.add_argument('--out',type=pathlib.Path,required=True);a=p.parse_args();v=verify(a.evidence,a.out)
    print(json.dumps(v,indent=2));raise SystemExit(0 if v['passed'] else 1)
