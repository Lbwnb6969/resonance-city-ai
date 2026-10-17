"""Discover v2 signature outside six prior extensions and verify exact roundtrip."""
import hashlib,json,pathlib,sys,os
OUT=pathlib.Path(os.environ.get('FOUNDATION_SEMANTICS_OUTPUT','outputs/foundation-game-systems'));OUT.mkdir(parents=True,exist_ok=True)
sys.path.insert(0,str(pathlib.Path('outputs/foundation-serialization/scripts').resolve()))
from decode_foundation import decode,compact
from verify_roundtrip import encode
inv=json.load(open('outputs/foundation-package-evidence/package-inventory.json',encoding='utf8'));rows=[]
for p in inv:
 with open(p['path'],'rb') as h:
  for r in p['files']:
   if r['path'].endswith(('.data','.meta','.bt','.gui','.prefab','.scene')):continue
   h.seek(r['absolute_offset']);header=h.read(min(8,r['length']))
   if header!=b'\x02\0\0\0\0\0\0\0':continue
   h.seek(r['absolute_offset']);b=h.read(r['length']);d=decode(b)
   if encode(d)!=b:raise ValueError('Roundtrip mismatch '+r['path'])
   meta=next((m for m in p['files'] if m['path']==r['path']+'.meta'),None);m={}
   if meta and meta['length']:
    h.seek(meta['absolute_offset']);mb=h.read(meta['length'])
    if mb[:8]==b'\x02\0\0\0\0\0\0\0':
     md=decode(mb);m={a['name']:a['value'] for root in md['tree'] if root['name']=='meta' for a in root['attributes']};m={'package':p['path'],'resource':r['path'],**m}
   rows.append({'package':p['path'],'resource':r['path'],'absolute_offset':r['absolute_offset'],'length':r['length'],'sha256':hashlib.sha256(b).hexdigest(),'evidence_kind':'local-package-bytes','metadata':m,'roots':{n['name']:compact(n) for n in d['tree']}})
(OUT/'additional-v2.jsonl').write_text('\n'.join(json.dumps(x,ensure_ascii=False) for x in rows)+'\n',encoding='utf8');(OUT/'additional-v2-validation.json').write_text(json.dumps({'resources':len(rows),'all_byte_roundtrip_verified':True,'resources_list':[{'resource':x['resource'],'sha256':x['sha256']} for x in rows]},indent=2),encoding='utf8');print(len(rows))
