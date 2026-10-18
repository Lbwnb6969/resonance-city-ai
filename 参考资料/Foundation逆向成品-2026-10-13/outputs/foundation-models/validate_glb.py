import json,struct,hashlib,math
from pathlib import Path
OUT=Path('outputs/foundation-models');m=json.loads((OUT/'glb-manifest.json').read_text(encoding='utf8'));errors=[];tot=0
for row in m['rows']:
 p=OUT/row['path'];b=p.read_bytes();assert len(b)==row['bytes'] and hashlib.sha256(b).hexdigest()==row['sha256'];assert b[:4]==b'glTF' and struct.unpack_from('<I',b,4)[0]==2
 pos=12;chunks=[]
 while pos<len(b):
  n,t=struct.unpack_from('<II',b,pos);payload=b[pos+8:pos+8+n];chunks.append((t,payload));pos+=8+n
 j=json.loads(next(x for t,x in chunks if t==0x4e4f534a));bin_=next(x for t,x in chunks if t==0x004e4942)
 assert j['buffers'][0]['byteLength']<=len(bin_)
 for v in j['bufferViews']:
  assert v['byteOffset']+v['byteLength']<=len(bin_)
  if 'byteStride' in v:assert v['byteStride']%4==0
 for a in j['accessors']:
  v=j['bufferViews'][a['bufferView']];comps={'SCALAR':1,'VEC2':2,'VEC3':3,'VEC4':4,'MAT4':16}[a['type']];sz={5121:1,5123:2,5125:4,5126:4}[a['componentType']];stride=v.get('byteStride',comps*sz);end=v.get('byteOffset',0)+a.get('byteOffset',0)+(max(0,a['count']-1)*stride)+comps*sz;assert end<=v['byteOffset']+v['byteLength']
 for n in j['nodes']:
  assert all(math.isfinite(float(v)) for v in n.get('matrix',[]))
  for c in n.get('children',[]):assert c<len(j['nodes'])
 for s in j.get('skins',[]):
  assert len(s['joints'])==j['accessors'][s['inverseBindMatrices']]['count']
 tot+=1
print({'glb_count':tot,'errors':errors,'manifest_errors':len(m['errors']),'totals':m['totals']});assert not errors and not m['errors']
