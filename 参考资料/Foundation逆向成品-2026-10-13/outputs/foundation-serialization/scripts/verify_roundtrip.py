import collections,hashlib,json,pathlib,struct,uuid
from decode_foundation import decode

def encode_value(tag,v):
 if tag in [0,1,2,4,5]:return bytes.fromhex(v['hex']) if isinstance(v,dict) else struct.pack({0:'<I',1:'<Q',2:'<i',4:'<f',5:'<d'}[tag],v)
 if tag==6:return struct.pack('<I',v)
 if tag==7:return v.encode('utf8')+b'\0'
 if tag==8:return uuid.UUID(v).bytes
 if tag==13:return struct.pack('<ii',*v)
 if tag==16:return struct.pack('<Q',v['bytes'])+bytes.fromhex(v['hex'])
 if tag==17:return v.encode('utf-16le')+b'\0\0'
 raise ValueError(tag)
def encode(d):
 names=d['dictionary'];ids={n:i for i,n in enumerate(names)};chunks={0:struct.pack('<I',d['tree'][0]['offset'])}
 def nodes(ns):
  for i,n in enumerate(ns):
   attrs=n['attributes'];children=n['children']
   chunks[n['offset']]=struct.pack('<IIII',ids[n['name']],ns[i+1]['offset'] if i+1<len(ns) else 0,children[0]['offset'] if children else 0,attrs[0]['offset'] if attrs else 0)
   for j,a in enumerate(attrs):chunks[a['offset']]=struct.pack('<III',ids[a['name']],attrs[j+1]['offset'] if j+1<len(attrs) else 0,a['tag'])+encode_value(a['tag'],a['value'])
   nodes(children)
 nodes(d['tree']);parts=[];end=0
 for off,b in sorted(chunks.items()):
  if off!=end:raise ValueError(f'coverage discontinuity {off} != {end}')
  parts.append(b);end+=len(b)
 block=b''.join(parts)
 body=struct.pack('<I',len(names))+b''.join(n.encode('utf8')+b'\0' for n in names)+struct.pack('<I',len(block))+block
 return struct.pack('<III',2,0,len(body))+body

if __name__=='__main__':
 inv=json.load(open('outputs/foundation-package-evidence/package-inventory.json',encoding='utf8'));counts=collections.Counter();errors=[];digests=[]
 for p in inv:
  with open(p['path'],'rb') as h:
   ph=hashlib.sha256();pc=0
   for r in p['files']:
    if pathlib.Path(r['path']).suffix not in ['.data','.meta','.bt','.gui','.prefab','.scene']:continue
    h.seek(r['absolute_offset']);b=h.read(r['length'])
    if b[:4]!=b'\x02\0\0\0':continue
    try:
     other=encode(decode(b))
     if other!=b:raise ValueError('bytes differ')
     counts[pathlib.Path(r['path']).suffix]+=1;pc+=1;ph.update(hashlib.sha256(b).digest())
    except Exception as e:errors.append({'package':p['path'],'resource':r['path'],'error':str(e)})
   digests.append({'package':p['path'],'verified_resources':pc,'ordered_resource_sha256_digest':ph.hexdigest()})
 result={'evidence_kind':'local-package-bytes','verification':'decode and independent re-encode produces byte-exact original','verified':dict(counts),'total_verified':sum(counts.values()),'errors':errors,'package_digest_chains':digests}
 pathlib.Path('outputs/foundation-serialization/roundtrip-validation.json').write_text(json.dumps(result,indent=2),encoding='utf8');print(json.dumps(result))
