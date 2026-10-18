"""Read-only Foundation v2 serialization decoder. Local artifact evidence, not REA."""
from __future__ import annotations
import argparse,collections,gzip,hashlib,json,math,pathlib,struct,uuid
from probe import structure

TAGS={0:'uint32',1:'uint64',2:'int32',4:'float32',5:'float64',6:'bool32',7:'utf8_z',8:'uuid_network_order',13:'int32x2',16:'blob_u64_length',17:'utf16le_z'}
SIZES={0:4,1:8,2:4,4:4,5:8,6:4,8:16,13:8}
def value(tag,payload):
 if tag in SIZES and len(payload)!=SIZES[tag]:raise ValueError(f'tag {tag} width {len(payload)}')
 if tag in [0,1,2,4,5]:
  v=struct.unpack({0:'<I',1:'<Q',2:'<i',4:'<f',5:'<d'}[tag],payload)[0]
  return v if not isinstance(v,float) or math.isfinite(v) else {'nonfinite':str(v),'hex':payload.hex()}
 if tag==6:
  v=struct.unpack('<I',payload)[0]
  if v not in [0,1]:raise ValueError('noncanonical boolean')
  return bool(v)
 if tag==7:
  if not payload.endswith(b'\0') or b'\0' in payload[:-1]:raise ValueError('invalid utf8 terminator')
  return payload[:-1].decode('utf8')
 if tag==8:return str(uuid.UUID(bytes=payload))
 if tag==13:return list(struct.unpack('<ii',payload))
 if tag==17:
  if not payload.endswith(b'\0\0'):raise ValueError('invalid utf16 terminator')
  return payload[:-2].decode('utf-16le')
 if tag==16:
  if len(payload)<8 or struct.unpack_from('<Q',payload)[0]!=len(payload)-8:raise ValueError('blob length mismatch')
  return {'bytes':len(payload)-8,'sha256':hashlib.sha256(payload[8:]).hexdigest(),'hex':payload[8:].hex()}
 raise ValueError('unsupported tag '+str(tag))

def decode(b):
 names,buf,recs=structure(b);offsets=sorted(recs)+[len(buf)]
 if offsets[0]!=4:raise ValueError('root gap')
 attrs={};tags=collections.Counter()
 for i,off in enumerate(offsets[:-1]):
  rec=recs[off];end=offsets[i+1]
  if rec[0]=='attr':
   payload=buf[off+12:end];tag=rec[3];tags[tag]+=1
   attrs[off]={'name':names[rec[1]],'tag':tag,'value':value(tag,payload),'offset':off}
  elif end-off!=16:raise ValueError('node gap '+str(end-off))
 def chain(off,kind):
  result=[]
  while off:
   rec=recs[off]
   if rec[0]!=kind:raise ValueError('record kind mismatch')
   if kind=='attr':result.append(attrs[off])
   else:result.append({'name':names[rec[1]],'offset':off,'attributes':chain(rec[4],'attr'),'children':chain(rec[3],'node')})
   off=rec[2]
  return result
 roots=chain(struct.unpack_from('<I',buf)[0],'node')
 return {'format_version':2,'dictionary':names,'tree':roots,'record_count':len(recs),'tag_counts':dict(tags)}

def compact(node):
 attrs={a['name']:a['value'] for a in node['attributes']}
 children=collections.defaultdict(list)
 for n in node['children']:children[n['name']].append(compact(n))
 return {'@':attrs,**{k:v if len(v)>1 or k in ['Item','Node','Slot','Connection'] else v[0] for k,v in children.items()}}

def walk(n,path=''):
 path=path+'/'+n['name']
 yield path,n
 for child in n['children']:yield from walk(child,path)

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--inventory',type=pathlib.Path,default=pathlib.Path('outputs/foundation-package-evidence/package-inventory.json'));ap.add_argument('--out',type=pathlib.Path,default=pathlib.Path('outputs/foundation-serialization'));ap.add_argument('--resource');ap.add_argument('--package',help='Optional package path suffix to disambiguate');args=ap.parse_args();args.out.mkdir(parents=True,exist_ok=True)
 inv=json.loads(args.inventory.read_text(encoding='utf8'));definitions=collections.defaultdict(list);types=collections.Counter();status=[];totals=collections.Counter();tags=collections.Counter();errors=[];refs=[];selected=[];schemas=collections.defaultdict(lambda:collections.defaultdict(collections.Counter))
 if args.resource:
  matches=[(p,r) for p in inv for r in p['files'] if r['path']==args.resource and (not args.package or p['path'].endswith(args.package))]
  if len(matches)!=1:raise ValueError(f'Expected one matching resource, found {len(matches)}; disambiguate with --package')
  p,r=matches[0]
  with open(p['path'],'rb') as h:h.seek(r['absolute_offset']);b=h.read(r['length'])
  d=decode(b);target=args.out/(pathlib.Path(r['path']).name+'.json');target.write_text(json.dumps({'package':p['path'],'resource':r['path'],'absolute_offset':r['absolute_offset'],'length':r['length'],'sha256':hashlib.sha256(b).hexdigest(),'evidence_kind':'local-package-bytes','roots':{n['name']:compact(n) for n in d['tree']},'decoded_tree':d},ensure_ascii=False,indent=2),encoding='utf8');print(target);return
 # First pass metadata declarations creates a resolvable UUID/type registry.
 for pkg in inv:
  with open(pkg['path'],'rb') as h:
   for r in pkg['files']:
    if not r['path'].endswith('.meta'):continue
    h.seek(r['absolute_offset']);b=h.read(r['length'])
    if b[:4]!=b'\x02\0\0\0':continue
    d=decode(b)
    for root in d['tree']:
     a={x['name']:x['value'] for x in root['attributes']}
     if 'id' in a:
      entry={'package':pkg['path'],'resource':r['path'][:-5],**a};definitions[a['id']].append(entry)
      if 'type' in a:types[a['type']]+=1
 by_resource={(e['package'],e['resource']):e for es in definitions.values() for e in es}
 with gzip.open(args.out/'decoded-resources.jsonl.gz','wt',encoding='utf8',compresslevel=5) as archive,gzip.open(args.out/'uuid-references.jsonl.gz','wt',encoding='utf8',compresslevel=5) as refout:
  for pkg in inv:
   with open(pkg['path'],'rb') as h:
    for r in pkg['files']:
     ext=pathlib.Path(r['path']).suffix
     if ext not in ['.data','.meta','.bt','.gui','.prefab','.scene']:continue
     h.seek(r['absolute_offset']);b=h.read(r['length']);base={'package':pkg['path'],'resource':r['path'],'absolute_offset':r['absolute_offset'],'length':len(b),'sha256':hashlib.sha256(b).hexdigest()}
     if b[:4]!=b'\x02\0\0\0':
      status.append({**base,'status':'other_format','prefix_hex':b[:20].hex()});totals['other_format']+=1;continue
     try:d=decode(b)
     except Exception as e:errors.append({**base,'error':str(e)});totals['failed']+=1;continue
     totals['decoded']+=1;totals['nodes_and_attributes']+=d['record_count'];tags.update(d['tag_counts']);status.append({**base,'status':'decoded','records':d['record_count']})
     own=by_resource.get((pkg['path'],r['path']),{})
     # Build per-resource refs, excluding metadata declaration id itself.
     rr=[]
     for root in d['tree']:
      for path,n in walk(root):
       for a in n['attributes']:
        if own.get('type'):schemas[own['type']][path+'/@'+a['name']][a['tag']]+=1
        if a['tag']==8 and not(ext=='.meta' and n['name']=='meta' and a['name']=='id'):
         u=a['value'];res=definitions.get(u,[])
         kind='null' if u=='00000000-0000-0000-0000-000000000000' else 'resolved_metadata' if res else 'unresolved_or_local_id'
         totals['uuid_'+kind]+=1;rr.append({'property':path+'/@'+a['name'],'uuid':u,'status':kind,'targets':res})
     refout.write(json.dumps({**base,'references':rr},ensure_ascii=False,separators=(',',':'))+'\n')
     out={**base,'evidence_kind':'local-package-bytes','metadata':own,'roots':{n['name']:compact(n) for n in d['tree']}}
     archive.write(json.dumps(out,ensure_ascii=False,separators=(',',':'))+'\n')
     is_selected=(args.resource and args.resource==r['path']) or (not args.resource and ((ext in ['.bt','.scene','.prefab','.gui'] and not any(s['extension']==ext for s in selected)) or ('AgentNeeds/NeedFood' in r['path'] and ext=='.data') or ('NeedEntertainment_Basic.data' in r['path']) or ('Production' in r['path'] and any(k in r['path'].lower() for k in ['bread','flour','wheat']) and ext=='.data') or ('agriculture' in pkg['path'] and any(k in r['path'] for k in ['ChickenCoop','CommonCroft','FestivalMeal','Hen_State','Production']) and ext=='.data')))
     if is_selected:
      fname=f"{len(selected)+1:03d}_"+pathlib.Path(r['path']).name+'.json';path=args.out/'examples'/fname;path.parent.mkdir(parents=True,exist_ok=True)
      path.write_text(json.dumps({**out,'decoded_tree':d,'references':rr},ensure_ascii=False,indent=2),encoding='utf8');selected.append({'extension':ext,**base,'output':'examples/'+fname})
 (args.out/'resource-status.json').write_text(json.dumps(status,ensure_ascii=False,indent=2),encoding='utf8')
 (args.out/'uuid-definitions.json').write_text(json.dumps(definitions,ensure_ascii=False,indent=2),encoding='utf8')
 (args.out/'asset-types.json').write_text(json.dumps(dict(types.most_common()),indent=2),encoding='utf8')
 (args.out/'observed-type-schemas.json').write_text(json.dumps(schemas,indent=2),encoding='utf8')
 (args.out/'examples.json').write_text(json.dumps(selected,ensure_ascii=False,indent=2),encoding='utf8')
 summary={'evidence_kind':'local-package-bytes','totals':totals,'tags':{k:{'interpretation':TAGS.get(k,'unknown'),'count':v} for k,v in tags.items()},'metadata_uuids':len(definitions),'duplicate_uuids':{k:v for k,v in definitions.items() if len(v)>1},'asset_type_count':len(types),'errors':errors,'examples':len(selected),'limitations':['Tags0/1/2/5 meanings corroborated by local Ghidra readers 1403267d0/140326ef0/140326680/1403279d0; tag13 int32x2 interpretation from graph coordinates.','Unresolved UUIDs include local graph/component IDs, engine-builtins, subassets and noncovered resources; absence is not a broken-reference diagnosis.','Decoder supports only six selected extensions with uncompressed version-2 signature; native supports compressed and v3 paths outside this decoder. Other .meta cache formats are handled separately by decode_caches.py.','Blob tag16 uses u64 length in files; all high32 zero; native validator uses only length low32. Field-dependent blob inner schema is opaque.','Static packaged values do not establish runtime execution or actual DLC ownership.']}
 (args.out/'validation-summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2),encoding='utf8');print(json.dumps(summary['totals']));print('Examples',len(selected))
if __name__=='__main__':main()
