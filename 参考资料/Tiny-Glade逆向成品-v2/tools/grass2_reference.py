"""Portable Grass2 card-splat packed-record decoder.

Field names and bit positions are taken from the shipped card_splats GLSL and
SPIR-V reflection. This module decodes bytes; it does not claim to reproduce
the full GPU cull/scan/indirect-draw scheduler.
"""
import argparse
import dataclasses
import json
import pathlib
import struct


def f16_pair(word):
    return struct.unpack('<2e',struct.pack('<I',word & 0xffffffff))


def u8_unorm(value): return float(value & 255) / 255.0


@dataclasses.dataclass(frozen=True)
class Clump:
    center_xy: int
    center_z_wind: int
    scale_packed: int
    rot_flags: int

    def decode(self):
        x,y=f16_pair(self.center_xy);z,wind=f16_pair(self.center_z_wind)
        sx,sy=f16_pair(self.scale_packed);rf=self.rot_flags
        return {'center_xy':(x,y),'center_z_wind':(z,wind),'scale':(sx,sy),
                'rotation_xy_unorm':(u8_unorm(rf),u8_unorm(rf>>8)),
                'rotation_xy_signed':(u8_unorm(rf)*2.0-1.0,u8_unorm(rf>>8)*2.0-1.0),
                'object_push_enabled':bool((rf>>16)&1),'terrain_follow_enabled':bool((rf>>17)&1),
                'grass_removal_enabled':bool((rf>>18)&1),'discard_opacity':u8_unorm(rf>>19),
                'rot_flags_raw':rf}


def decode_position(position_word,bounds_origin,bounds_range):
    """CardPointPosition: four unorm8 channels against half2 origin/range pairs."""
    nx,ny,nz,nw=[u8_unorm(position_word>>shift) for shift in (0,8,16,24)]
    ox,rx=bounds_origin[0],bounds_range[0];oy,ry=bounds_origin[1],bounds_range[1];oz,rz=bounds_origin[2],bounds_range[2]
    return {'normalized':(nx,ny,nz,nw),'local_xyz':(ox+nx*rx,oy+ny*ry,oz+nz*rz),'w_raw_unorm':nw}


def decode_plant_offset(word):
    low=word&0xffff; x=u8_unorm(low);z=u8_unorm(low>>8)
    return ((x*2.0-1.0)*2.0,(z*2.0-1.0)*2.0)


def decode_visible_instance(clump_mip,range_count,bounds_x,bounds_y,bounds_z):
    """The fields used by card_splats cull indexing; retain raw values."""
    return {'clump_mip':clump_mip,'range_count':range_count,'bounds':(bounds_x,bounds_y,bounds_z),
            'range_start':range_count&0xfffff,'range_length':(range_count>>20)&0xfff,
            'global_point_start':(range_count&0xfffff)|(((clump_mip>>26)&3)<<20),
            'lod_power':(clump_mip>>23)&7,'clump_index':clump_mip&0x1ffff,
            'range_bank':(clump_mip>>26)&3,'raw':{'clump_mip':clump_mip,'range_count':range_count}}


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--clump',type=pathlib.Path)
    p.add_argument('--position',type=lambda x:int(x,0));p.add_argument('--origin',type=float,nargs=6)
    p.add_argument('--plant-offset',type=lambda x:int(x,0));p.add_argument('--out',type=pathlib.Path)
    a=p.parse_args();result={}
    if a.clump:
        data=a.clump.read_bytes()
        if len(data)%16:raise ValueError('clump records must be 16-byte')
        result['clumps']=[Clump(*struct.unpack_from('<4I',data,i)).decode() for i in range(0,len(data),16)]
    if a.position is not None:
        if not a.origin or len(a.origin)!=6:raise ValueError('--origin requires originXYZ rangeXYZ')
        result['position']=decode_position(a.position,a.origin[:3],a.origin[3:])
    if a.plant_offset is not None:result['plant_offset_xz']=decode_plant_offset(a.plant_offset)
    text=json.dumps(result,indent=2)
    if a.out:a.out.write_text(text,encoding='utf-8')
    else:print(text)


if __name__=='__main__':main()
