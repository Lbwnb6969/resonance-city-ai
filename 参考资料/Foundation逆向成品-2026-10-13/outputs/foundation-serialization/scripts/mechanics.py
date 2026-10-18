import hashlib,json,pathlib,sys
from decode_foundation import decode,compact,walk
out=pathlib.Path('outputs/foundation-serialization');inv=json.load(open('outputs/foundation-package-evidence/package-inventory.json',encoding='utf8'));defs=json.load(open(out/'uuid-definitions.json',encoding='utf8'))
wanted=['asset/Agent/AgentNeeds/NeedFoodBasic.data','asset/Agent/AgentNeeds/NeedEntertainment_Basic.data','asset/Buildings/_Functions/WorkplaceRecipe/WorkplaceRecipe_BuildingFunction_BakeryPart.data','asset/Buildings/_Functions/WorkplaceRecipe/WorkplaceRecipe_BuildingFunction_WheatFarmPart.data','asset/Buildings/_Functions/WorkplaceRecipe/WorkplaceRecipe_BuildingFunction_Windmill Part.data','Agent/Characters/Animals/Chicken/AnimalConfig_Chicken.data','Buildings/_Functions/Croft/BF_CommonCroftPart_ChickenCoop.data','Agent/Behaviors/Behavior Farmer Common Croft.bt']
result=[]
for p in inv:
 with open(p['path'],'rb') as h:
  for r in p['files']:
   if r['path'] not in wanted:continue
   h.seek(r['absolute_offset']);b=h.read(r['length']);d=decode(b);refs=[]
   for root in d['tree']:
    for path,n in walk(root):
     for a in n['attributes']:
      if a['tag']==8 and a['value'] in defs:refs.append({'property':path+'/@'+a['name'],'uuid':a['value'],'target':defs[a['value']]})
   obj={'package':p['path'],'resource':r['path'],'absolute_offset':r['absolute_offset'],'length':r['length'],'sha256':hashlib.sha256(b).hexdigest(),'roots':{n['name']:compact(n) for n in d['tree']},'resolved_references':refs}
   result.append(obj);(out/'examples'/('focused_'+pathlib.Path(r['path']).name+'.json')).write_text(json.dumps({**obj,'decoded_tree':d},ensure_ascii=False,indent=2),encoding='utf8')
(out/'mechanics-examples.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf8')
for r in result:
 if r['resource'].endswith('.bt'):continue
 print(r['resource']);print(json.dumps(r['roots'],ensure_ascii=False)[:6500]);print('REFS',[(x['property'],[(y['resource'],y.get('scriptingId')) for y in x['target']]) for x in r['resolved_references']])
