"""Export observed snapshot raster planes and sample packed terrain.

Terrain 512x512 little-endian u16 matches recovered native sampler layout.
The default -2.5..24 height range is the shipped terrain shader range;
runtime sampler mode remains an explicit input, not a captured setting.
Grass2 is exported as raw four-byte channels without inventing field names.
"""
import argparse
import array
import hashlib
import json
import pathlib
import struct
import save_inspector
import recovered_stair_terrain as terrain_math
import recovered_wall_stairs as numeric


def terrain_from_snapshot(path, low=-2.5, high=24.0, texel_center=True):
    _,parts,decoded=save_inspector.snapshot(path)
    for (magic,_,_),(_,raw) in zip(parts,decoded):
        if magic==b'Terrain\0':
            if len(raw)!=512*512*2:
                raise ValueError('unrecognized terrain dimensions')
            values=struct.unpack('<262144H',raw)
            return terrain_math.Terrain512(values,low,high,texel_center),raw
    raise ValueError('snapshot has no Terrain block')


def export(path,out,low,high):
    audit,parts,decoded=save_inspector.snapshot(path)
    out.mkdir(parents=True,exist_ok=False)
    rows=[]
    for chunk,(_,_,_),(_,raw) in zip(audit['chunks'],parts,decoded):
        if raw is None:
            continue
        name=chunk['logical_name'];row={'name':name,'decoded_bytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest()}
        (out/(name+'.raw')).write_bytes(raw)
        row['raw_file']=name+'.raw'
        if name=='Terrain' and len(raw)==524288:
            values=struct.unpack('<262144H',raw)
            big_endian=struct.pack('>262144H',*values)
            (out/'Terrain.u16.pgm').write_bytes(b'P5\n512 512\n65535\n'+big_endian)
            heights=[]
            for value in values:
                weight=numeric.f32(numeric.f32(value)/65535.0)
                heights.append(numeric.f32(numeric.f32(weight*numeric.f32(high))+numeric.f32(numeric.f32(1.0-weight)*numeric.f32(low))))
            # PFM bottom row first, negative scale denotes little-endian.
            pixels=[v for z in range(511,-1,-1) for v in heights[z*512:(z+1)*512]]
            (out/'Terrain.height.pfm').write_bytes(b'Pf\n512 512\n-1.0\n'+struct.pack('<262144f',*pixels))
            row.update(format='u16-LE',width=512,height=512,height_range_input=[low,high],
                       range_authority='Shipped terrain sampling GLSL mix(-2.5,24.0,texture(...)) for defaults.',
                       pgm_file='Terrain.u16.pgm',pfm_file='Terrain.height.pfm',sample_min=min(values),sample_max=max(values))
        elif len(raw)==262144:
            file=name+'.u8.pgm';(out/file).write_bytes(b'P5\n512 512\n255\n'+raw)
            row.update(format='u8',width=512,height=512,pgm_file=file)
        elif name=='Grass2' and len(raw)==1048576:
            row.update(format='four-raw-bytes-per-pixel',width=512,height=512,
                       channel_semantics='unresolved; byte-plane visualization only')
            for i in range(4):
                file=f'Grass2.byte{i}.pgm';(out/file).write_bytes(b'P5\n512 512\n255\n'+raw[i::4])
        rows.append(row)
    result={'snapshot':str(path.resolve()),'snapshot_sha256':audit['sha256'],'rasters':rows,
            'limits':['The original snapshot is not modified.','Runtime low/high overrides and sampling-mode setting were not captured.',
                      'PGM/PFM are numeric exports; Grass2 byte channels are not labeled as authored semantics.']}
    (out/'raster_exports.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('snapshot',type=pathlib.Path)
    p.add_argument('--out',type=pathlib.Path);p.add_argument('--low',type=float,default=-2.5);p.add_argument('--high',type=float,default=24.0)
    p.add_argument('--sample-xz',type=float,nargs=2);p.add_argument('--mode',choices=('center','edge'),default='center')
    a=p.parse_args()
    if a.sample_xz:
        terrain,_=terrain_from_snapshot(a.snapshot,a.low,a.high,a.mode=='center')
        print(json.dumps({'sample_xz':a.sample_xz,'height':terrain_math.sample_terrain_xz(terrain,*a.sample_xz),'mode':a.mode,'range':[a.low,a.high]}))
    if a.out:
        result=export(a.snapshot,a.out,a.low,a.high);print(json.dumps({'rasters':len(result['rasters'])}))
    if not a.sample_xz and not a.out:
        p.error('--out or --sample-xz is required')


if __name__=='__main__':
    main()
