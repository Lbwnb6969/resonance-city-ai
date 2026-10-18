import sys,gzip,json,numpy as np,collections
sys.path.insert(0,'outputs/foundation-models')
from decode_model_metadata import decode
from pathlib import Path
for line in gzip.open('outputs/foundation-serialization/decoded-caches.jsonl.gz','rt',encoding='utf8'):
 row=json.loads(line)
 if row['cache']['format']!='fbx-xbin' or not any(m['bones'] for m in row['cache']['meshes']):continue
 label='game' if row['package'].endswith('game.package') else 'dlc__'+Path(row['package']).parent.name+'__content'
 p=Path('outputs/foundation-resources/packages')/label/row['resource'][:-len('.data-xbin.meta')];d=decode(p.read_bytes());worlds=collections.defaultdict(list);meshworld={}
 def walk(n,parent):
  local=np.array(n['local_matrix_column_major_candidate']).reshape(4,4,order='F');world=parent@local;worlds[n['name']].append(world)
  idx=n['indices_u32_raw'][0]
  if idx!=0xFFFFFFFF:meshworld[idx]=world
  for c in n['children']:walk(c,world)
 for n in d['nodes']:walk(n,np.eye(4))
 m=next(m for m in row['cache']['meshes'] if m['bones']);mi=row['cache']['meshes'].index(m);errs=[]
 for bone in m['bones'][:12]:
  candidate=worlds.get(bone['name'],[])
  if len(candidate)==1:
   w=candidate[0];bm=np.array(bone['matrix_float32x16']).reshape(4,4,order='F');mw=meshworld.get(mi,np.eye(4))
   errs.append([bone['name'],np.max(np.abs(w@bm-np.eye(4))),np.max(np.abs(w@bm-mw)),np.max(np.abs(w-bm))])
 print(p.name,'meshworld',meshworld.get(mi),'errs',errs[:8])
 if 'Chick' in p.name:break
