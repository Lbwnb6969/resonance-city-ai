"""Regenerate roof-generator records directly from Tiny Glade snapshots.

Only independent recovered Python source executes. Output is the original
64-byte CPU generator record stage, with an explicit auxiliary render ID.
It is not a game scene renderer or a complete ECS/SparseSlot reconstruction.
"""
import argparse
import hashlib
import json
import pathlib
import struct
from dataclasses import asdict
import recovered_roof as r
import recovered_roof_tiles as tiles
import save_inspector


def from_saved(saved):
    shape = saved['wall_shape']
    if 'Rectangle' in shape:
        s = shape['Rectangle']; x,z = s['center']; ax,az = s['orientation']
        wall = r.WallShape('rectangle', width=s['width'], length=s['length'],
                           pivot_x=x, pivot_z=z, axis_x=ax, axis_z=az)
    elif 'Circle' in shape:
        s = shape['Circle']; x,z = s['center']
        wall = r.WallShape('circle', radius=s['radius'], pivot_x=x, pivot_z=z, yaw=s.get('yaw',0.0))
    else:
        raise ValueError('unrecovered saved roof shape: '+repr(shape))
    p = saved['params']; direction = {'Width':0, 'Length':1}[p['ridge_dir']]
    return r.Roof(wall, profile_01=p['profile_01'], height_01=p['height_01'],
                  ridge_length_01=p['ridge_length_01'], eave_length_01=p['eave_length_01'],
                  ridge_direction=direction, tip_offset_x=p['tip_offset_01'][0],
                  tip_offset_z=p['tip_offset_01'][1], pivot_y=saved['pivot_y'])


def decode_records(records):
    return [{'index':i, 'base_position':struct.unpack_from('<3f',v,0),
             'current_height':struct.unpack_from('<f',v,12)[0],
             'clipping_plane_half':struct.unpack_from('<4e',v,16),
             'scale_profile_half':struct.unpack_from('<4e',v,24),
             'rotation_quaternion_half':struct.unpack_from('<4e',v,32),
             'auxiliary_render_id':struct.unpack_from('<I',v,40)[0],
             'velocity_rotation_half':struct.unpack_from('<2e',v,44),
             'animation_t':struct.unpack_from('<f',v,48)[0],
             'seed_circle_main_raw':struct.unpack_from('<3I',v,52)} for i,v in enumerate(records)]


def recover(path, output, selected=None, flag=0, include_json=False, settled=False):
    audit, _, decoded = save_inspector.snapshot(path)
    scene = decoded[0][0]
    output.mkdir(parents=True, exist_ok=False)
    rows = []
    for saved in scene.get('Roofs', []):
        id_ = saved['id']
        if selected is not None and id_ not in selected:
            continue
        roof = from_saved(saved)
        records = tiles.generate(roof, render_id=id_, flag=flag)
        data = b''.join(records)
        name = f'roof-{id_}.tiles.bin'
        (output/name).write_bytes(data)
        row = {'snapshot_roof_id':id_, 'auxiliary_render_id':id_, 'generator_flag':flag,
               'input':asdict(roof), 'saved_style':{k:saved[k] for k in ('color_id','flat_roof_style','gable_style') if k in saved},
               'file':name, 'records':len(records), 'bytes':len(data), 'sha256':hashlib.sha256(data).hexdigest(),
               'flat':roof.is_flat()}
        if include_json:
            json_name = f'roof-{id_}.tiles.json'
            (output/json_name).write_text(json.dumps(decode_records(records),indent=2),encoding='utf-8')
            row['decoded_records_file'] = json_name
        if settled:
            from roof_dispatch_reference import RoofState
            state = RoofState(roof=roof, records=records)
            from roof_animation_reference import RoofTileSimulation
            state.simulation = RoofTileSimulation.new(roof.pivot_y)
            state.settle()
            settled_name = f'roof-{id_}.settled.tiles.bin'
            settled_bytes = b''.join(state.records)
            (output/settled_name).write_bytes(settled_bytes)
            positions_name = f'roof-{id_}.settled.positions.json'
            (output/positions_name).write_text(json.dumps(state.world_positions()),encoding='utf-8')
            row['steady_state_helper'] = {'file':settled_name, 'sha256':hashlib.sha256(settled_bytes).hexdigest(),
                                          'world_positions':positions_name,
                                          'scope':'Explicit steady-state assignment, not captured original frame history.'}
        rows.append(row)
    result = {'snapshot':str(path.resolve()), 'snapshot_sha256':audit['sha256'],
              'exe_required':False, 'records_stride':64, 'roofs':rows,
              'roof_count':len(rows), 'record_count':sum(v['records'] for v in rows),
              'limits':['Generator record stage only; current_height/animation begin at generator defaults.',
                        'Auxiliary render ID equals saved roof ID for attribution; original wall_slot_id is resolved by ECS.',
                        'Flag is explicit caller input; saved visual style dispatch is not inferred.',
                        'Materials, flat roof surfaces/rims, scene buffers and render scheduling are not synthesized.']}
    (output/'snapshot_roofs.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('snapshot',type=pathlib.Path)
    p.add_argument('--out',type=pathlib.Path,required=True)
    p.add_argument('--roof-id',type=int,action='append')
    p.add_argument('--flag',type=int,choices=(0,1),default=0)
    p.add_argument('--json-records',action='store_true')
    p.add_argument('--settled',action='store_true',help='Additionally export explicit steady-state records/world positions')
    a=p.parse_args(); result=recover(a.snapshot,a.out,a.roof_id,a.flag,a.json_records,a.settled)
    print(json.dumps({k:result[k] for k in ('roof_count','record_count','exe_required')}))


if __name__=='__main__':
    main()
