import collections,json,pathlib,sys,os
OUT=pathlib.Path(os.environ.get('FOUNDATION_SEMANTICS_OUTPUT','outputs/foundation-game-systems'));sys.path.insert(0,str(pathlib.Path('outputs/foundation-serialization/scripts').resolve()));from decode_foundation import decode,walk
schema=json.load(open('outputs/foundation-serialization/observed-type-schemas.json',encoding='utf8'));types=json.load(open(OUT/'asset-types.json',encoding='utf8'));additional=[json.loads(l) for l in (OUT/'additional-v2.jsonl').read_text(encoding='utf8').splitlines()]
for x in additional:
 t=x['metadata'].get('type')
 if not t:continue
 with open(x['package'],'rb') as h:h.seek(x['absolute_offset']);d=decode(h.read(x['length']))
 for n in d['tree']:
  for p,child in walk(n):
   for a in child['attributes']:
    counts=schema.setdefault(t,{}).setdefault(p+'/@'+a['name'],{});k=str(a['tag']);counts[k]=counts.get(k,0)+1
for t in types:schema.setdefault(t,{})
(OUT/'observed-type-schemas.json').write_text(json.dumps(schema,ensure_ascii=False,indent=2),encoding='utf8');(OUT/'type-schema-coverage.json').write_text(json.dumps({'declared_asset_types':len(types),'schema_entries':len(schema),'v2_attribute_schema_types':sum(bool(v) for v in schema.values()),'types_without_v2_attributes':[t for t,v in schema.items() if not v],'notes':'EdiCAssetShaderAssembly is a shader assembly payload outside v2 object serializer; its empty attribute schema is explicit, not a missing scan.'},indent=2),encoding='utf8');print(len(schema))
