"""Read-only Foundation proprietary FBX metadata parser (versions 29-46).
Source bytes remain authoritative; field labels marked candidate are inferred.
"""
import collections,gzip,hashlib,json,math,struct
from pathlib import Path

class Reader:
 def __init__(self,b):self.b=b;self.c=0
 def take(self,n):
  if n<0 or self.c+n>len(self.b):raise ValueError(('range',self.c,n,len(self.b)))
  data=self.b[self.c:self.c+n];self.c+=n;return data
 def u32(self):return struct.unpack('<I',self.take(4))[0]
 def string(self):
  n=self.u32();return self.take(n).decode('utf8')

def decode(b):
 r=Reader(b);flag=r.take(1)[0];version=r.u32();nv=r.u32();nt=r.u32();animations=[r.string() for _ in range(r.u32())];meshes=[]
 for i in range(r.u32()):
  off=r.c;meshes.append({'index':i,'offset':off,'name':r.string(),'material_index':r.u32(),'vertex_count':r.u32(),'triangle_count':r.u32()})
 materials=[]
 for i in range(r.u32()):
  off=r.c;name=r.string();guid=r.take(16).hex() if version>=45 else None;tex=[]
  for j in range(r.u32()):tex.append({'kind_u32':r.u32(),'filename':r.string()})
  color=struct.unpack('<4f',r.take(16));flags=r.take(1)[0]
  materials.append({'index':i,'offset':off,'name':name,'guid_raw_hex':guid,'textures':tex,'color_rgba':color,'flags_u8_raw':flags})
 lods=[]
 for i in range(r.u32()):
  off=r.c;name=r.string();indices=[r.u32() for _ in range(5)]
  lods.append({'index':i,'offset':off,'name':name,'mesh_indices_by_lod_candidate':indices})
 hasroot=r.take(1)[0]
 def node(depth=0):
  if depth>500:raise ValueError('unexpected deep hierarchy')
  off=r.c;name=r.string();guid=r.take(16).hex() if version>=33 else None;extra=r.take(16).hex() if version>=33 else None
  fields=[r.u32() for _ in range(3)];matrix=list(struct.unpack('<16f',r.take(64)))
  count=r.u32();children=[node(depth+1) for _ in range(count)]
  return {'offset':off,'name':name,'guid_raw_hex':guid,'additional16_raw_hex':extra,'indices_u32_raw':fields,'local_matrix_column_major_candidate':matrix,'children':children}
 nodes=[node()] if hasroot else []
 if r.c!=len(b):raise ValueError(('trailing',r.c,len(b)))
 if flag!=0 or hasroot not in (0,1):raise ValueError('unobserved header flag')
 for m in meshes:
  if m['material_index']!=0xFFFFFFFF and m['material_index']>=len(materials):raise ValueError('material index outside table')
 for l in lods:
  if any(i!=0xFFFFFFFF and i>=len(meshes) for i in l['mesh_indices_by_lod_candidate']):raise ValueError('LOD index outside mesh table')
 def validate(n):
  if not all(math.isfinite(v) for v in n['local_matrix_column_major_candidate']):raise ValueError('nonfinite matrix')
  for c in n['children']:validate(c)
 for n in nodes:validate(n)
 return {'format':'proprietary-fbx-metadata','version':version,'flag':flag,'total_vertices':nv,'total_triangles':nt,'animations':animations,'meshes':meshes,'materials':materials,'lod_groups':lods,'has_root':hasroot,'nodes':nodes,'consumed_bytes':r.c}

def main():
 root=Path('outputs/foundation-resources/packages');out=Path('outputs/foundation-models');out.mkdir(exist_ok=True)
 errors=[];counts=collections.Counter();rows=[]
 with gzip.open(out/'model-metadata.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
  for p in root.rglob('*.fbx'):
   b=p.read_bytes();rel=p.relative_to(root).as_posix()
   try:
    d=decode(b);row={'path':rel,'bytes':len(b),'sha256':hashlib.sha256(b).hexdigest(),'metadata':d};f.write(json.dumps(row,ensure_ascii=False,separators=(',',':'))+'\n')
    counts[str(d['version'])]+=1;rows.append({'path':rel,'version':d['version'],'meshes':len(d['meshes']),'lod_groups':len(d['lod_groups'])})
   except Exception as e:errors.append({'path':rel,'error':repr(e)})
 summary={'files':len(rows)+len(errors),'parsed':len(rows),'version_counts':dict(counts),'errors':errors,'rows':rows}
 (out/'metadata-summary.json').write_text(json.dumps(summary,indent=2)+'\n',encoding='utf8')
 print(json.dumps({k:v for k,v in summary.items() if k!='rows'},indent=2))
if __name__=='__main__':main()
