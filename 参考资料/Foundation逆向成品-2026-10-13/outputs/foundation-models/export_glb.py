"""Recover all cached Foundation geometry to standard GLB and animation JSON.
Preserves raw attributes as custom attributes; no invented skin/animation timing.
"""
import collections,gzip,hashlib,json,math,struct,sys
from pathlib import Path
import numpy as np
from decode_model_metadata import decode

RAW=Path('outputs/foundation-resources/packages');OUT=Path('outputs/foundation-models')
COUNTS=collections.Counter()
TEXTURES=collections.defaultdict(list)
for tex in json.loads(Path('outputs/foundation-textures/manifest.json').read_text(encoding='utf8')):
 source=Path(tex['source']);key=(source.parts[0],source.name[:-len('.dxt.meta')].lower());TEXTURES[key].append(tex)

class GLB:
 def __init__(self):
  self.b=bytearray();self.j={'asset':{'version':'2.0','generator':'Foundation read-only cached geometry recovery'},'bufferViews':[],'accessors':[],'meshes':[],'nodes':[],'materials':[]}
 def view(self,data,target=None,stride=None):
  self.b.extend(b'\0'*((-len(self.b))%4));off=len(self.b);self.b.extend(data)
  v={'buffer':0,'byteOffset':off,'byteLength':len(data)}
  if target:v['target']=target
  if stride:v['byteStride']=stride
  i=len(self.j['bufferViews']);self.j['bufferViews'].append(v);return i
 def accessor(self,view,count,type_,component=5126,offset=0,normalized=False,min_=None,max_=None):
  a={'bufferView':view,'byteOffset':offset,'componentType':component,'count':count,'type':type_}
  if normalized:a['normalized']=True
  if min_ is not None:a['min']=min_;a['max']=max_
  i=len(self.j['accessors']);self.j['accessors'].append(a);return i
 def array(self,a,type_,component=5126,target=34962,bounds=False):
  a=np.ascontiguousarray(a);v=self.view(a.tobytes(),target)
  return self.accessor(v,len(a),type_,component,min_=np.min(a,axis=0).tolist() if bounds else None,max_=np.max(a,axis=0).tolist() if bounds else None)
 def write(self,path):
  self.j['buffers']=[{'byteLength':len(self.b)}]
  js=json.dumps(self.j,ensure_ascii=False,separators=(',',':'),allow_nan=False).encode('utf8');js+=b' '*((-len(js))%4);self.b.extend(b'\0'*((-len(self.b))%4))
  data=struct.pack('<III',0x46546C67,2,28+len(js)+len(self.b))+struct.pack('<II',len(js),0x4E4F534A)+js+struct.pack('<II',len(self.b),0x004E4942)+self.b
  path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(data)
  return hashlib.sha256(data).hexdigest(),len(data)

def export(row):
 package='game' if row['package'].endswith('game.package') else 'dlc__'+Path(row['package']).parent.name+'__content'
 rel=Path(package)/row['resource'][:-len('.data-xbin.meta')]
 source=RAW/package/row['resource'];metasource=RAW/rel
 b=source.read_bytes();assert hashlib.sha256(b).hexdigest()==row['sha256']
 meta=decode(metasource.read_bytes());cache=row['cache'];assert len(cache['meshes'])==len(meta['meshes'])
 glb=GLB();j=glb.j;issues=[];texture_map=[];embedded_textures={}
 for mat in meta['materials']:
  rgba=mat['color_rgba'];color=[min(1,max(0,float(v))) for v in rgba]
  material={'name':mat['name'],'pbrMetallicRoughness':{'baseColorFactor':color,'metallicFactor':0,'roughnessFactor':1},'extras':{'foundation_material':mat,'texture_embedding':'same-package unique basename match only; proprietary shader not reconstructed'}}
  for reference in mat['textures']:
   matches=TEXTURES.get((package,Path(reference['filename']).name.lower()),[])
   mapping={'material_index':mat['index'],'reference':reference,'candidate_sources':[t['source'] for t in matches],'status':'unique same-package basename' if len(matches)==1 else 'ambiguous' if matches else 'not found'};texture_map.append(mapping)
   if len(matches)==1 and reference['kind_u32']==0:
    t=matches[0];key=t['png']
    if key not in embedded_textures:
     png=Path('outputs/foundation-textures')/key;data=png.read_bytes();assert hashlib.sha256(data).hexdigest()==t['png_sha256']
     image=len(j.setdefault('images',[]));j['images'].append({'name':Path(reference['filename']).name,'bufferView':glb.view(data),'mimeType':'image/png'})
     texture=len(j.setdefault('textures',[]));j['textures'].append({'source':image});embedded_textures[key]=texture
    material['pbrMetallicRoughness']['baseColorTexture']={'index':embedded_textures[key]}
    mapping['embedded_as']='baseColorTexture kind0 candidate'
  j['materials'].append(material)
 bones=[]
 for i,m in enumerate(cache['meshes']):
  mm=meta['meshes'][i];assert m['name']==mm['name'] and m['vertex_count']==mm['vertex_count'] and m['index_count']==mm['triangle_count']*3
  stride=m['vertex_stride_bytes'];n=m['vertex_count'];flags=m['attribute_flags_normals_tangent_bitangent_skin_candidate'];aux=m['auxiliary_u32_fields']
  v=glb.view(b[m['vertex_offset']:m['vertex_offset']+n*stride],34962,stride)
  a=np.frombuffer(b,dtype='<f4',count=m['vertex_float_count'],offset=m['vertex_offset']).reshape(n,stride//4)
  attrs={'POSITION':glb.accessor(v,n,'VEC3',offset=0,min_=a[:,:3].min(axis=0).tolist(),max_=a[:,:3].max(axis=0).tolist())};offset=12
  if flags[0]:
   normals=a[:,offset//4:offset//4+3];lengths=np.linalg.norm(normals,axis=1)
   attrs['_SOURCE_NORMAL']=glb.accessor(v,n,'VEC3',offset=offset)
   if np.all(lengths>1e-10):attrs['NORMAL']=glb.array((normals/lengths[:,None]).astype('<f4'),'VEC3')
   else:issues.append({'mesh':i,'kind':'zero_source_normals','count':int(np.sum(lengths<=1e-10))})
   offset+=12
  if flags[1]:attrs['_SOURCE_TANGENT']=glb.accessor(v,n,'VEC3',offset=offset);offset+=12
  if flags[2]:attrs['_SOURCE_BITANGENT']=glb.accessor(v,n,'VEC3',offset=offset);offset+=12
  attrs['TEXCOORD_0']=glb.accessor(v,n,'VEC2',offset=offset);offset+=8
  if aux[1]:
   # Packed order remains unproven: keep bytes as normalized custom attribute.
   attrs['_PACKED_COLOR_BYTES']=glb.accessor(v,n,'VEC4',5121,offset,normalized=True);offset+=4*aux[1]
  if flags[3]:
   attrs['_BONE_WEIGHTS']=glb.accessor(v,n,'VEC4',offset=offset);offset+=16
   for boneidx in range(4):attrs['_BONE_ID_'+str(boneidx)+'_BYTES']=glb.accessor(v,n,'VEC4',5121,offset+boneidx*4,normalized=True)
   offset+=16
   weights=a[:,(offset-32)//4:(offset-16)//4]
   ids=np.frombuffer(b,dtype='<u4',count=m['vertex_float_count'],offset=m['vertex_offset']).reshape(n,stride//4)[:,(offset-16)//4:offset//4]
   active=ids[weights>0]
   if len(active) and active.max()>=len(m['bones']):issues.append({'mesh':i,'kind':'weighted_bone_index_outside_declared_bones','count':int(np.sum((weights>0)&(ids>=len(m['bones'])))),'maximum_id':int(active.max()),'bone_count':len(m['bones'])})
  assert offset==stride
  idx=np.frombuffer(b,dtype='<u4',count=m['index_count'],offset=m['index_offset']);assert idx.max()<n
  iv=glb.view(idx.tobytes(),34963);ia=glb.accessor(iv,len(idx),'SCALAR',5125,min_=[int(idx.min())],max_=[int(idx.max())])
  primitive={'attributes':attrs,'indices':ia,'mode':4}
  if mm['material_index']!=0xFFFFFFFF:primitive['material']=mm['material_index']
  targets=[]
  for target in m['morph_targets']:
   values=np.frombuffer(b,dtype='<f4',count=target['float_count'],offset=target['offset']).reshape(n,3)
   assert np.isfinite(values).all();targets.append({'POSITION':glb.array(values,'VEC3',bounds=True)})
  if targets:primitive['targets']=targets
  mesh={'name':m['name'],'primitives':[primitive],'extras':{'source_mesh_index':i,'source_cache_vertex_offset':m['vertex_offset'],'source_cache_index_offset':m['index_offset'],'source_attribute_flags':flags,'source_auxiliary_u32':aux,'targetNames':[x['name'] for x in m['morph_targets']]}}
  if targets:mesh['weights']=[0]*len(targets)
  j['meshes'].append(mesh)
  if m['bones']:bones.append({'mesh_index':i,'mesh_name':m['name'],'bones':m['bones'],'skin_status':'raw weights/ids/matrices retained; glTF skin not asserted without inverse-bind convention proof'})

 # Original source tree, LOD0 attachments, plus independent all-mesh inventory.
 names=collections.defaultdict(list);worlds={};source_mesh_nodes=collections.defaultdict(list);lod_refs=collections.defaultdict(list)
 def node(n,parentworld=np.eye(4)):
  id_=len(j['nodes']);names[n['name']].append(id_)
  item={'name':n['name'],'matrix':n['local_matrix_column_major_candidate'],'extras':{'foundation_node_indices':n['indices_u32_raw'],'guid_raw_hex':n['guid_raw_hex'],'additional16_raw_hex':n['additional16_raw_hex']}}
  j['nodes'].append(item)
  world=parentworld@np.array(n['local_matrix_column_major_candidate']).reshape(4,4,order='F');worlds[id_]=world
  mesh_id=n['indices_u32_raw'][0];lod_id=n['indices_u32_raw'][2]
  if mesh_id!=0xFFFFFFFF:
   assert mesh_id<len(j['meshes']);item['mesh']=mesh_id;source_mesh_nodes[mesh_id].append(id_)
  children=[node(c,world) for c in n['children']]
  if lod_id!=0xFFFFFFFF:
   assert lod_id<len(meta['lod_groups']);lod_refs[lod_id].append(id_)
   lod=meta['lod_groups'][lod_id];mesh0=lod['mesh_indices_by_lod_candidate'][0]
   if mesh0!=0xFFFFFFFF:
    child=len(j['nodes']);j['nodes'].append({'name':lod['name']+' [LOD0]','mesh':mesh0,'extras':{'lod_group':lod_id}});worlds[child]=world;children.append(child);source_mesh_nodes[mesh0].append(child)
  if children:item['children']=children
  return id_
 roots=[node(n) for n in meta['nodes']]
 skin_evidence=[]
 for i,m in enumerate(cache['meshes']):
  if not m['bones']:continue
  n=m['vertex_count'];stride=m['vertex_stride_bytes'];a=np.frombuffer(b,dtype='<f4',count=m['vertex_float_count'],offset=m['vertex_offset']).reshape(n,stride//4)
  weights=a[:,-8:-4];ids=np.frombuffer(b,dtype='<u4',count=m['vertex_float_count'],offset=m['vertex_offset']).reshape(n,stride//4)[:,-4:]
  if (ids[weights>0]>=len(m['bones'])).any() or (weights<0).any() or (weights.sum(axis=1)<=0).any():
   skin_evidence.append({'mesh':i,'status':'unresolved source bone index or weight'});continue
  if not source_mesh_nodes.get(i):skin_evidence.append({'mesh':i,'status':'no source hierarchy mesh attachment'});continue
  for meshnode in source_mesh_nodes[i]:
   mw=worlds[meshnode];joints=[];residuals=[];ambiguities=[]
   for bone in m['bones']:
    bm=np.array(bone['matrix_float32x16']).reshape(4,4,order='F');candidate=[]
    for joint in names.get(bone['name'],[]):candidate.append((float(np.max(np.abs(worlds[joint]@bm-mw))),joint))
    candidate.sort()
    if not candidate or candidate[0][0]>0.003 or (len(candidate)>1 and candidate[1][0]-candidate[0][0]<1e-5):
     ambiguities.append({'bone':bone['name'],'candidates':candidate});break
    residuals.append(candidate[0][0]);joints.append(candidate[0][1])
   if ambiguities:
    skin_evidence.append({'mesh':i,'mesh_node':meshnode,'status':'bone matching/bind identity unproven','details':ambiguities});continue
   inversebind=np.array([bone['matrix_float32x16'] for bone in m['bones']],dtype='<f4')
   accessor=glb.array(inversebind,'MAT4',target=None)
   skin=len(j.setdefault('skins',[]));j['skins'].append({'name':m['name'],'inverseBindMatrices':accessor,'joints':joints,'extras':{'verified_max_bind_residual':max(residuals),'bind_identity':'joint_global_rest * original_matrix = mesh_global_rest'}});j['nodes'][meshnode]['skin']=skin
   attrs=j['meshes'][i]['primitives'][0]['attributes']
   if 'JOINTS_0' not in attrs:
    sanitized=np.where(weights>0,ids,0).astype('<u2');attrs['JOINTS_0']=glb.array(sanitized,'VEC4',5123)
    attrs['WEIGHTS_0']=glb.array((weights/weights.sum(axis=1)[:,None]).astype('<f4'),'VEC4')
   skin_evidence.append({'mesh':i,'mesh_node':meshnode,'status':'skin exported','joints':joints,'maximum_bind_residual':max(residuals)})
 source_count=len(j['nodes']);inventory=[]
 for i,m in enumerate(cache['meshes']):
  inventory.append(len(j['nodes']));j['nodes'].append({'name':m['name']+' [mesh inventory]','mesh':i})
 j['scenes']=[{'name':'Recovered source hierarchy and LOD0','nodes':roots},{'name':'All cached mesh entries (includes all LODs; inspection only)','nodes':inventory}];j['scene']=0
 # Ensure all geometry is present even where source tree only references LOD groups.
 if not roots:j['scene']=1
 j['extras']={'source_metadata_path':rel.as_posix(),'source_cache_path':row['resource'],'source_cache_sha256':row['sha256'],'lod_groups':meta['lod_groups'],'geometry_count':len(cache['meshes']),'skin_policy':'skin exported only with full unambiguous bone name matches and verified joint_global_rest * inverseBind = mesh_global_rest; original weights/ids retained','animation_policy':'all source TRS/morph key arrays separately recovered; unproven sample timing not invented','source_normal_policy':'standard NORMAL normalized when all vectors nonzero; exact source normals retained in _SOURCE_NORMAL','color_policy':'packed color byte order unproven, exact normalized bytes custom attribute'}
 outrel=Path('glb')/rel.with_suffix('.glb');sha,size=glb.write(OUT/outrel)
 # Full animation arrays in compressed JSON, preserving trailer and offsets.
 anims=[]
 for anim in cache['animations']:
  an={k:v for k,v in anim.items() if k not in ('channels','morph_channels')};an['channels']=[];an['morph_channels']=[]
  for channel in anim['channels']:
   count=channel['uniform_key_count'];data=np.frombuffer(b,dtype='<f4',count=count*10,offset=channel['key_offset']).reshape(count,10)
   assert np.isfinite(data).all()
   an['channels'].append({**channel,'target_source_nodes':names.get(channel['name'],[]),'all_keys_TRS':data.tolist(),'time_policy':'sample order preserved; 13byte trailer and duration/tps preserved, no runtime timing inferred'})
  for morph in anim['morph_channels']:
   off=morph['offset'];count=morph['value_count'];values=np.frombuffer(b,dtype='<f4',count=count,offset=off);ids=np.frombuffer(b,dtype='<u4',count=count,offset=off+count*4)
   an['morph_channels'].append({**morph,'all_weights':values.tolist(),'all_shape_indices':ids.tolist()})
  anims.append(an)
 side=Path('sidecars')/rel.with_suffix('.json.gz');(OUT/side).parent.mkdir(parents=True,exist_ok=True)
 with gzip.open(OUT/side,'wt',encoding='utf8',compresslevel=5) as f:
  json.dump({'metadata':meta,'source_cache_identity':{'path':row['resource'],'sha256':row['sha256'],'bytes':len(b)},'mesh_bones':bones,'skin_bind_evidence':skin_evidence,'texture_matches':texture_map,'animations':anims,'source_name_to_node_indices':dict(names),'source_mesh_to_node_indices':dict(source_mesh_nodes),'lod_group_to_source_node_indices':dict(lod_refs),'issues':issues},f,ensure_ascii=False,separators=(',',':'),allow_nan=False)
 return {'path':outrel.as_posix(),'sha256':sha,'bytes':size,'metadata':rel.as_posix(),'cache_sha256':row['sha256'],'sidecar':side.as_posix(),'mesh_entries':len(cache['meshes']),'vertices':sum(m['vertex_count'] for m in cache['meshes']),'indices':sum(m['index_count'] for m in cache['meshes']),'animations':len(anims),'morph_targets':sum(len(m['morph_targets']) for m in cache['meshes']),'skinned_meshes_raw':len(bones),'skins_exported':len(j.get('skins',[])),'skin_status_counts':dict(collections.Counter(e['status'] for e in skin_evidence)),'texture_match_counts':dict(collections.Counter(t['status'] for t in texture_map)),'source_nodes':source_count,'normal_issues':issues}

def main():
 rows=[];errors=[]
 for line in gzip.open('outputs/foundation-serialization/decoded-caches.jsonl.gz','rt',encoding='utf8'):
  row=json.loads(line)
  if row['cache']['format']!='fbx-xbin':continue
  try:rows.append(export(row))
  except Exception as e:errors.append({'resource':row['resource'],'package':row['package'],'error':repr(e)});print('ERROR',errors[-1],flush=True)
  if (len(rows)+len(errors))%50==0:print('Exported',len(rows),'errors',len(errors),flush=True)
 totals={k:sum(x[k] for x in rows) for k in ('bytes','mesh_entries','vertices','indices','animations','morph_targets','skinned_meshes_raw','skins_exported','source_nodes')}
 manifest={'requested':len(rows)+len(errors),'exported':len(rows),'errors':errors,'totals':totals,'rows':rows}
 (OUT/'glb-manifest.json').write_text(json.dumps(manifest,indent=2,ensure_ascii=False)+'\n',encoding='utf8')
 print(json.dumps({k:v for k,v in manifest.items() if k!='rows'},indent=2))
if __name__=='__main__':main()
