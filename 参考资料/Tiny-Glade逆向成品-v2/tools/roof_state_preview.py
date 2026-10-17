"""Advance or settle independent roof state from a saved snapshot.
Uses recovered source only; .tiles64 records retain auxiliary saved Roof.id.
"""
import argparse,pathlib,json,hashlib,struct
from dataclasses import asdict
import snapshot_roofs,save_inspector
from roof_dispatch_reference import RoofState,prepare_dispatches
from roof_sparse_reference import SparseRoofStorage,SparseRoofWriter

def preview(snapshot,roof_id,out,frames=120,dt=1/60,settle=False):
    _,_,decoded=save_inspector.snapshot(snapshot);scene=decoded[0][0]
    saved=next(a for a in scene['Roofs'] if a['id']==roof_id);roof=snapshot_roofs.from_saved(saved)
    state=RoofState.create(roof,render_id=roof_id);initial=b''.join(state.records);requests=[]
    if settle:state.settle()
    else:
        for n in range(frames):requests.extend({'frame':n,**event} for event in state.advance(dt))
    storage=SparseRoofStorage(max_pages=2);writer=SparseRoofWriter(storage)
    for rec in state.records:
        if not writer.push(rec):raise RuntimeError('Preview sparse capacity exceeded')
    ranges=prepare_dispatches(writer,state.simulation,roof,state.animation)
    positions=state.world_positions()
    report={'saved_roof_id':roof_id,'auxiliary_render_id':roof_id,'roof':asdict(roof),'mode':'settle' if settle else 'advance',
      'frames':0 if settle else frames,'dt':dt,'records':len(state.records),
      'initial_sha256':hashlib.sha256(initial).hexdigest(),'output_sha256':hashlib.sha256(b''.join(state.records)).hexdigest(),
      'animation':asdict(state.animation),'simulation':asdict(state.simulation),'sound_requests':requests,
      'world_origin_bounds':{'min':[min(p[i] for p in positions) for i in range(3)],'max':[max(p[i] for p in positions) for i in range(3)]} if positions else None,
      'dispatches':[{'page':a['page'],'push_constants_hex':a['push_constants'].pack().hex(),'workgroups':a['push_constants'].workgroups()} for a in ranges],
      'limits':['Uses independent recovered source, no EXE or GPU runtime.',
        'Roof ID marks auxiliary identity; original wall_slot_id/resource binding are not inferred.',
        'Frame sequence is an explicit portable model, not recovered full ECS scheduling.',
        'World origin positions add base_position.y and current_height; final vertex deformation/rendering not represented.']}
    out.mkdir(parents=True,exist_ok=False);(out/'roof.tiles64').write_bytes(b''.join(state.records))
    (out/'state.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    (out/'tile-origins.obj').write_text('# Tile origins only; recovered world y\n'+''.join('v %.9g %.9g %.9g\n'%p for p in positions),encoding='utf-8')
    return report

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('snapshot',type=pathlib.Path);p.add_argument('--roof-id',type=int,required=True)
    p.add_argument('--out',type=pathlib.Path,required=True);p.add_argument('--frames',type=int,default=120);p.add_argument('--dt',type=float,default=1/60)
    p.add_argument('--settle',action='store_true');a=p.parse_args();r=preview(a.snapshot,a.roof_id,a.out,a.frames,a.dt,a.settle)
    print(json.dumps({k:r[k] for k in ['records','animation','simulation','world_origin_bounds']}))
