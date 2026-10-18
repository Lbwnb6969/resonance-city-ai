import gzip,json,collections,numpy as np
from pathlib import Path
stats=collections.Counter();bad=[];allrows=[]
for line in gzip.open('outputs/foundation-serialization/decoded-caches.jsonl.gz','rt',encoding='utf8'):
 row=json.loads(line)
 if row['cache']['format']!='fbx-xbin':continue
 label='game' if row['package'].endswith('game.package') else 'dlc__'+Path(row['package']).parent.name+'__content'
 path=Path('outputs/foundation-resources/packages')/label/row['resource']
 if not path.exists():print('missing',label,row['package']);break
 b=path.read_bytes()
 for m in row['cache']['meshes']:
  stats['mesh']+=1;stats['empty_vertices']+=m['vertex_count']==0;stats['empty_indices']+=m['index_count']==0;stats['skin']+=m['attribute_flags_normals_tangent_bitangent_skin_candidate'][3]
  if m['vertex_count']==0:continue
  a=np.frombuffer(b,dtype='<f4',count=m['vertex_float_count'],offset=m['vertex_offset']).reshape(m['vertex_count'],-1)
  colorcol=3+3*sum(m['attribute_flags_normals_tangent_bitangent_skin_candidate'][:3])+2
  fields=np.delete(a,colorcol,axis=1)
  if m['attribute_flags_normals_tangent_bitangent_skin_candidate'][3]:fields=fields[:,:-4]
  stats['nonfinite_rows']+=int(np.sum(~np.isfinite(fields)))
  if not np.all(np.isfinite(a[:,:3])):bad.append((row['resource'],m['name'],'positions_nonfinite'))
  if m['attribute_flags_normals_tangent_bitangent_skin_candidate'][0]:
   lens=np.linalg.norm(a[:,3:6],axis=1);stats['zero_normals']+=int(np.sum(lens<1e-10));stats['notunit_normals']+=int(np.sum(np.abs(lens-1)>1e-4))
print(stats,'bad',bad[:8])
