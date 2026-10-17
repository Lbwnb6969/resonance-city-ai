"""Build a searchable static gameplay catalog from previously verified decoded data."""
from __future__ import annotations
import argparse,collections,csv,gzip,hashlib,json,pathlib,re,shutil,sqlite3,zlib,sys,os
BASE=pathlib.Path('outputs/foundation-serialization');OUT=pathlib.Path(os.environ.get('FOUNDATION_SEMANTICS_OUTPUT','outputs/foundation-game-systems'))
UUID=re.compile(r'^[0-9a-f]{8}-(?:[0-9a-f]{4}-){3}[0-9a-f]{12}$');ZERO='00000000-0000-0000-0000-000000000000'
def js(x):return json.dumps(x,ensure_ascii=False,separators=(',',':'))
def items(x):return x if isinstance(x,list) else [x] if isinstance(x,dict) else []
def val(x):return x.get('@',{}).get('value') if isinstance(x,dict) else None
def simple(x):
 if not isinstance(x,dict):return x
 a=x.get('@',{});ch={k:v for k,v in x.items() if k!='@'}
 if not ch:return a.get('value',a)
 return {**({'@':a} if a else {}),**{k:[simple(n) for n in v] if isinstance(v,list) else simple(v) for k,v in ch.items()}}
def walk(x,path=''):
 if not isinstance(x,dict):return
 yield path,x
 for k,v in x.items():
  if k=='@':continue
  for i,n in enumerate(items(v)):yield from walk(n,path+'/'+k+(f'[{i}]' if isinstance(v,list) else ''))
def stamp(x):return {k:x[k] for k in ['package','resource','absolute_offset','length','sha256']}
def system_members(x):
 t=x['metadata'].get('type','');p=x['resource'];out=[]
 rules={'production':t=='PlaCAssetWorkplaceRecipe' or t.startswith(('PlaCAssetCropFieldConfig','PlaCAssetAnimalCroftConfig')) or t in ['PlaCAssetBuildingFunctionCommonCroftPart','PlaCAssetBuildingFunctionResourceGenerator'],
 'jobs':t.startswith('PlaCAssetJob'),'needs':t.startswith('PlaCAssetAgentNeedType'),'villager_status':t.startswith('PlaCAssetVillagerStatus') or t in ['PlaCAssetDataVillagerManager','PlaCAssetAgentProfile'],
 'building_functions':t.startswith('PlaCAssetBuildingFunction'),'trade':t=='PlaCAssetResource' or any(q in t for q in ['TradingVillage','TradeRoute','GameRuleTrade','Trader']),
 'happiness':t.startswith('PlaCAssetHappinessFactor') or 'ImmigrationFactorHappiness' in t,
 'quests_conditions':t.startswith(('PlaCAssetQuest','PlaCAssetVictoryCondition','PlaCAssetAchievementGiver','PlaCAssetBuildingGameCondition')),
 'military':t.startswith(('PlaCAssetMilitary','PlaCAssetEventMilitary')) or '/Military/' in p and p.endswith('.data'),
 'map_generation':t.startswith(('MagC','PlaCAssetMapGenerator','PlaCAssetGeneratedMap','PlaCAssetLegacyMapGenerator')) or ('/Map Generation/' in p or '/Map Generation/' in '/'+p or '/Map Generation/' in p.replace('Map Generation','Map Generation')) and p.endswith(('.data','.scene')),
 'behavior_trees':p.endswith('.bt')}
 for k,v in rules.items():
  if v:out.append(k)
 return out
def declaration(path,n):
 a=n.get('@',{});name=path.rsplit('/',1)[-1].split('[')[0]
 if name=='meta' and UUID.fullmatch(str(a.get('id',''))):return a['id'],'metadata_or_subasset',a
 if name=='Node' and UUID.fullmatch(str(a.get('id',''))):return a['id'],'graph_node',a
 if name=='object' and UUID.fullmatch(str(a.get('id',''))):return a['id'],'gui_or_scene_object',a
 if name.lower()=='id':
  u=a.get('guid',a.get('value'))
  if UUID.fullmatch(str(u)):return u,'local_object_or_variable',a
 return None
def build():
 OUT.mkdir(parents=True,exist_ok=True);(OUT/'behavior-trees').mkdir(exist_ok=True);db=sqlite3.connect(OUT/'semantic-index.sqlite');db.execute('PRAGMA journal_mode=OFF');db.execute('PRAGMA synchronous=OFF')
 db.executescript('''CREATE TABLE resources(rid INTEGER PRIMARY KEY,package TEXT,path TEXT,offset INTEGER,length INTEGER,sha256 TEXT,type TEXT,uuid TEXT,scripting_id TEXT,payload BLOB);
 CREATE TABLE declarations(uuid TEXT,rid INTEGER,path TEXT,role TEXT,type TEXT,label TEXT);
 CREATE TABLE fields(rid INTEGER,path TEXT,name TEXT,value_json TEXT);
 CREATE TABLE memberships(system TEXT,rid INTEGER);
 CREATE TABLE refs(rid INTEGER,path TEXT,uuid TEXT,status TEXT,target_rid INTEGER,target_path TEXT,target_role TEXT,match_count INTEGER);
 CREATE TABLE conditions(rid INTEGER,path TEXT,type TEXT,body_json TEXT);
 CREATE TABLE graphs(rid INTEGER,body_json TEXT);''')
 totals=collections.Counter();systemcounts=collections.Counter();conditiontypes=collections.Counter();observed=collections.Counter();systemfiles={};csvwriters={};opened=[]
 for s in ['production','jobs','needs','villager_status','building_functions','trade','happiness','quests_conditions','military','map_generation','behavior_trees']:
  systemfiles[s]=gzip.open(OUT/(s+'.jsonl.gz'),'wt',encoding='utf8',compresslevel=5)
  f=(OUT/(s+'.csv')).open('w',newline='',encoding='utf-8-sig');opened.append(f);w=csv.DictWriter(f,fieldnames=['rid','package','resource','absolute_offset','length','sha256','type','uuid','scripting_id','name_keys','scalar_fields_json','references_json']);w.writeheader();csvwriters[s]=w
 inventory=json.load(open(BASE/'package-inventory.json',encoding='utf8')) if (BASE/'package-inventory.json').exists() else json.load(open('outputs/foundation-package-evidence/package-inventory.json',encoding='utf8'))
 inventory_lookup={(p['path'],r['path']):r for p in inventory for r in p['files']}
 # Decoded roots are reused; no package decode is repeated here.
 with gzip.open(BASE/'decoded-resources.jsonl.gz','rt',encoding='utf8') as src:
  import itertools
  extras=(OUT/'additional-v2.jsonl').read_text(encoding='utf8').splitlines() if (OUT/'additional-v2.jsonl').exists() else []
  for rid,line in enumerate(itertools.chain(src,extras),1):
   x=json.loads(line);meta=x['metadata'];t=meta.get('type','');u=meta.get('id','');sid=meta.get('scriptingId','');observed[t]+=1;systems=system_members(x);systemcounts.update(systems)
   db.execute('INSERT INTO resources VALUES(?,?,?,?,?,?,?,?,?,?)',(rid,x['package'],x['resource'],x['absolute_offset'],x['length'],x['sha256'],t,u,sid,zlib.compress(line.encode(),3)))
   db.executemany('INSERT INTO memberships VALUES(?,?)',[(s,rid) for s in systems]);flat=[];refs=[];decls=[];conds=[]
   for path,n in walk(x['roots']):
    d=declaration(path,n)
    if d and d[0]!=ZERO:
     label=d[2].get('name',d[2].get('scriptingId',''));decls.append((d[0],rid,path,d[1],d[2].get('type',''),str(label)))
    typ=n.get('@',{}).get('type','')
    if isinstance(typ,str) and any(k in typ for k in ['GameCondition','QuestCondition','VictoryCondition']):conds.append((rid,path,typ,js(n)));conditiontypes[typ]+=1
    for name,v in n.get('@',{}).items():
     full=path+'/@'+name
     if isinstance(v,str) and UUID.fullmatch(v):refs.append((full,v))
     # Large blobs retain their size/digest; their raw hex remains in original decoded archive.
     fv={k:q for k,q in v.items() if k!='hex'} if isinstance(v,dict) and 'hex' in v else v
     flat.append((rid,path,name,js(fv)))
   totals['fields']+=len(flat);totals['declarations']+=len(decls);totals['uuid_shaped_fields']+=len(refs);totals['conditions']+=len(conds)
   db.executemany('INSERT INTO declarations VALUES(?,?,?,?,?,?)',decls);db.executemany('INSERT INTO fields VALUES(?,?,?,?)',flat);db.executemany('INSERT INTO conditions VALUES(?,?,?,?)',conds)
   for s in systems:
    record={**stamp(x),'rid':rid,'type':t,'uuid':u,'scripting_id':sid,'data':simple(x['roots'])}
    systemfiles[s].write(js(record)+'\n')
    root=next(iter(x['roots'].values()));scalars={k:val(v) for k,v in root.items() if k!='@' and isinstance(v,dict) and list(v)==['@']};namekeys={k:v for k,v in scalars.items() if any(q in k for q in ['Name','Description','Title'])}
    csvwriters[s].writerow({**stamp(x),'rid':rid,'type':t,'uuid':u,'scripting_id':sid,'name_keys':js(namekeys),'scalar_fields_json':js(scalars),'references_json':js(refs)})
   if x['resource'].endswith('.bt'):db.execute('INSERT INTO graphs VALUES(?,?)',(rid,js(x)))
   if rid%2000==0:db.commit();print('indexed',rid,flush=True)
 totals['decoded_resources']=rid
 for f in systemfiles.values():f.close()
 for f in opened:f.close()
 # Root asset declarations include binary PNG/FBX/etc whose data are not v2 objects.
 defs=json.load(open(BASE/'uuid-definitions.json',encoding='utf8'));bysource={(p,r):rid for rid,p,r in db.execute('SELECT rid,package,path FROM resources')};nextid=rid
 for u,ds in defs.items():
  for e in ds:
   rid=bysource.get((e['package'],e['resource']))
   if rid is None:
    rec=inventory_lookup.get((e['package'],e['resource']))
    if rec is None:continue # Folder meta is a virtual namespace identity, not a physical asset.
    nextid+=1;rid=nextid;bysource[(e['package'],e['resource'])]=rid
    db.execute('INSERT INTO resources VALUES(?,?,?,?,?,?,?,?,?,?)',(rid,e['package'],e['resource'],rec['absolute_offset'],rec['length'],'',e.get('type',''),u,e.get('scriptingId',''),None))
   db.execute('INSERT INTO declarations VALUES(?,?,?,?,?,?)',(u,rid,'/metadata','root_asset',e.get('type',''),e.get('scriptingId','')))
 # Add every remaining physical resource to index for search, even if no decoder/meta exists.
 for p in inventory:
  for rec in p['files']:
   if (p['path'],rec['path']) not in bysource:
    nextid+=1;bysource[(p['path'],rec['path'])]=nextid
    db.execute('INSERT INTO resources VALUES(?,?,?,?,?,?,?,?,?,?)',(nextid,p['path'],rec['path'],rec['absolute_offset'],rec['length'],'','','','',None))
 db.executescript('CREATE INDEX decl_uuid ON declarations(uuid);CREATE INDEX decl_scope ON declarations(rid,uuid);CREATE INDEX fields_rid ON fields(rid);CREATE INDEX resources_path ON resources(path);CREATE INDEX resources_uuid ON resources(uuid);CREATE INDEX resources_type ON resources(type);CREATE INDEX memberships_system ON memberships(system);')
 db.commit();resolve_refs(db,totals)
 db.execute('CREATE INDEX refs_uuid ON refs(uuid)');db.execute('CREATE INDEX refs_rid ON refs(rid)');db.execute('CREATE INDEX refs_target ON refs(target_rid)');db.commit()
 export_graphs(db,totals);export_conditions(db);export_production(db);export_bridges(db)
 totals['physical_resources_indexed']=nextid
 (OUT/'coverage.json').write_text(json.dumps({'evidence_kind':'local-verified-decoded-payload','totals':totals,'systems':systemcounts,'condition_types':conditiontypes,'metadata_391_type_schema':'observed-type-schemas.json','limitations':['Static configurations and node links do not establish runtime condition evaluation.','Reference fields are UUID-shaped attributes including declaration IDs and string-valued behavior node type UUIDs; declaration occurrences are classified separately.','Some local identities repeat in many instances; match_count and scoped target selection are preserved.','Physical resources without decoded payload carry package offset and length; SHA-256 is blank pending raw-export manifest.','Binary blob field-dependent semantics and engine-built-in references remain unresolved explicitly.']},ensure_ascii=False,indent=2),encoding='utf8')
 shutil.copy2(BASE/'observed-type-schemas.json',OUT/'observed-type-schemas.json');shutil.copy2(BASE/'asset-types.json',OUT/'asset-types.json');db.close()
 print(js({'totals':totals,'systems':systemcounts}),flush=True)

def resolve_refs(db,totals):
 registry=collections.defaultdict(list)
 for u,rid,p,role,t,label in db.execute('SELECT * FROM declarations'):registry[u].append((rid,p,role,t,label))
 out=gzip.open(OUT/'resource-reference-graph.jsonl.gz','wt',encoding='utf8',compresslevel=5);unresolved=gzip.open(OUT/'unresolved-references.jsonl.gz','wt',encoding='utf8',compresslevel=5);rows=[]
 for rid,p,n,vj in db.execute('SELECT rid,path,name,value_json FROM fields'):
  if len(vj)!=38:continue
  v=json.loads(vj)
  if not isinstance(v,str) or not UUID.fullmatch(v):continue
  full=p+'/@'+n;defs=registry.get(v,[]);local=[d for d in defs if d[0]==rid];assets=[d for d in defs if d[2]=='root_asset'];sub=[d for d in defs if d[2]=='metadata_or_subasset'];own=[d for d in local if d[1]==p]
  if v==ZERO:status='null';targets=[]
  elif own:status='declaration';targets=own
  elif local:status='resolved_local';targets=local
  elif assets:status='resolved_asset';targets=assets
  elif sub:status='resolved_subasset';targets=sub
  elif defs:status='resolved_cross_resource_object';targets=defs
  else:status='unresolved';targets=[]
  totals['references_'+status]+=1
  target=targets[0] if targets else (None,None,None,None,None)
  rows.append((rid,full,v,status,target[0],target[1],target[2],len(targets)))
  edge={'rid':rid,'property':full,'uuid':v,'status':status,'target_count':len(targets),'targets':[{'rid':d[0],'path':d[1],'role':d[2],'type':d[3],'label':d[4]} for d in targets]};out.write(js(edge)+'\n')
  if status=='unresolved':unresolved.write(js(edge)+'\n')
  if len(rows)==10000:db.executemany('INSERT INTO refs VALUES(?,?,?,?,?,?,?,?)',rows);rows=[]
 if rows:db.executemany('INSERT INTO refs VALUES(?,?,?,?,?,?,?,?)',rows)
 out.close();unresolved.close()
 with gzip.open(OUT/'uuid-registry.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
  for u,defs in registry.items():f.write(js({'uuid':u,'declarations':[{'rid':d[0],'path':d[1],'role':d[2],'type':d[3],'label':d[4]} for d in defs]})+'\n')
 totals['uuid_registry_unique']=len(registry)

def export_graphs(db,totals):
 index=[];issues=[];gout=gzip.open(OUT/'behavior-graphs.jsonl.gz','wt',encoding='utf8')
 for rid,body in db.execute('SELECT * FROM graphs'):
  x=json.loads(body);root=x['roots'].get('root',{});g=root.get('NodeGraph',{});nodes=items(g.get('NodeList',{}).get('Node',[]));edges=items(g.get('ConnectionList',{}).get('Connection',[]));nodeids=[n.get('@',{}).get('id') for n in nodes];known=set(nodeids);rootid=g.get('@',{}).get('rootNodeId');vars=items(root.get('BehaviorTree',{}).get('VariableList',{}).get('Item',[]));variables={val(v.get('Id',{})):val(v.get('Name',{})) for v in vars};bad=[]
  if len(known)!=len(nodeids):bad.append('duplicate node IDs')
  if rootid not in known:bad.append('root not in NodeList')
  normalized=[]
  for n in nodes:
   a=n['@'];typ=a.get('type');target=db.execute("SELECT r.rid,r.path,r.type FROM declarations d JOIN resources r ON r.rid=d.rid WHERE d.uuid=? AND d.role='root_asset'",(typ,)).fetchall();slots=[]
   for s in items(n.get('SlotList',{}).get('Slot',[])):
    sa=s['@'];u=sa.get('value');status='null' if u==ZERO else 'variable' if u in variables else 'unresolved';slots.append({**sa,'binding_status':status,'variable_name':variables.get(u)})
    if status=='unresolved':bad.append('unmatched slot '+str(u))
   normalized.append({'id':a.get('id'),'name':a.get('name'),'type':typ,'position':a.get('position'),'behavior_asset_targets':target,'slots':slots,'data':simple(n.get('Data',{}))})
  ee=[]
  for ordinal,e in enumerate(edges):
   a=e['@'];valid=a.get('from') in known and a.get('to') in known
   if not valid:bad.append('edge endpoint outside NodeList')
   ee.append({**a,'ordinal':ordinal,'valid_endpoints':valid})
  reachable=set();pending=[rootid];adj=collections.defaultdict(list)
  for e in ee:adj[e['from']].append(e['to'])
  while pending:
   u=pending.pop()
   if u in reachable:continue
   reachable.add(u);pending.extend(adj[u])
  graph={**stamp(x),'rid':rid,'root_id':rootid,'variables':simple(root.get('BehaviorTree',{}).get('VariableList',{})),'nodes':normalized,'edges':ee,'unreachable_node_ids':sorted(known-reachable),'validation_issues':bad}
  gout.write(js(graph)+'\n');slug=f'{rid:05d}_'+re.sub(r'[^A-Za-z0-9_-]+','_',pathlib.Path(x['resource']).stem);jsonpath=OUT/'behavior-trees'/(slug+'.json');jsonpath.write_text(json.dumps(graph,ensure_ascii=False,indent=2),encoding='utf8');labels={n['id']:str(n['name'] or n['type']) for n in normalized};aliases={u:f'n{i}' for i,u in enumerate(nodeids)}
  dot=['digraph behavior {','  rankdir=TB;']+[f'  {aliases[u]} [label={json.dumps(labels[u])},shape={"doubleoctagon" if u==rootid else "box"}];' for u in nodeids]
  mer=['flowchart TD']+[f'  {aliases[u]}["{labels[u].replace(chr(34),chr(39))}"]' for u in nodeids]
  for e in ee:
   if e['valid_endpoints']:dot.append(f'  {aliases[e["from"]]} -> {aliases[e["to"]]} [label="{e["ordinal"]}"];');mer.append(f'  {aliases[e["from"]]} -->|{e["ordinal"]}| {aliases[e["to"]]}')
  dot.append('}');(OUT/'behavior-trees'/(slug+'.dot')).write_text('\n'.join(dot),encoding='utf8');(OUT/'behavior-trees'/(slug+'.mmd')).write_text('\n'.join(mer),encoding='utf8')
  index.append({**stamp(x),'rid':rid,'nodes':len(nodes),'edges':len(edges),'variables':len(vars),'issues':bad,'json':'behavior-trees/'+slug+'.json','dot':'behavior-trees/'+slug+'.dot','mermaid':'behavior-trees/'+slug+'.mmd'})
  totals['behavior_nodes']+=len(nodes);totals['behavior_edges']+=len(edges);totals['behavior_validation_issues']+=len(bad)
  if bad:issues.append({'rid':rid,'resource':x['resource'],'issues':bad})
 gout.close();(OUT/'behavior-tree-index.json').write_text(json.dumps(index,ensure_ascii=False,indent=2),encoding='utf8');(OUT/'behavior-validation.json').write_text(json.dumps({'graphs':len(index),'issues':issues},ensure_ascii=False,indent=2),encoding='utf8')

def export_conditions(db):
 with gzip.open(OUT/'all-condition-instances.jsonl.gz','wt',encoding='utf8') as f,(OUT/'all-condition-instances.csv').open('w',newline='',encoding='utf-8-sig') as cf:
  w=csv.writer(cf);w.writerow(['rid','package','resource','absolute_offset','sha256','property','condition_type','condition_json'])
  for rid,p,t,b in db.execute('SELECT * FROM conditions'):
   package,res,off,sha=db.execute('SELECT package,path,offset,sha256 FROM resources WHERE rid=?',(rid,)).fetchone();record={'rid':rid,'package':package,'resource':res,'absolute_offset':off,'sha256':sha,'property':p,'condition_type':t,'condition':simple(json.loads(b))};f.write(js(record)+'\n');w.writerow([rid,package,res,off,sha,p,t,js(record['condition'])])

def label_uuid(db,u):
 if not u:return {'uuid':u,'status':'empty'}
 rs=db.execute("SELECT r.rid,r.path,r.type,r.scripting_id FROM declarations d JOIN resources r ON r.rid=d.rid WHERE d.uuid=? AND d.role='root_asset'",(u,)).fetchall()
 return {'uuid':u,'status':'resolved' if rs else 'unresolved','assets':[{'rid':r[0],'resource':r[1],'type':r[2],'scripting_id':r[3]} for r in rs]}
def collection(db,n):
 out=[]
 for it in items(n.get('Collection',{}).get('Item',[])):
  out.append({'resource':label_uuid(db,val(it.get('Resource',{}))),'quantity':val(it.get('Quantity',{}))})
 return out
def export_production(db):
 recipes=[];linked=collections.defaultdict(list)
 for rid,payload in db.execute("SELECT r.rid,r.payload FROM resources r JOIN memberships m ON m.rid=r.rid WHERE m.system='building_functions'"):
  x=json.loads(zlib.decompress(payload));o=x['roots'].get('object',{})
  for it in items(o.get('AssetWorkplaceRecipeList',{}).get('Item',[])):linked[val(it)].append({'rid':rid,'resource':x['resource'],'production_cycle_seconds':val(o.get('ProductionCycleDurationInSec',{})),'work_cycles_needed':val(o.get('WorkCycleNeededToProduceOnce',{})),'worker_capacity':val(o.get('WorkerCapacity',{}))})
 for rid,payload in db.execute("SELECT rid,payload FROM resources WHERE type='PlaCAssetWorkplaceRecipe'"):
  x=json.loads(zlib.decompress(payload));o=x['roots']['object'];u=x['metadata'].get('id');recipes.append({**stamp(x),'rid':rid,'uuid':u,'scripting_id':x['metadata'].get('scriptingId'),'inputs':collection(db,o.get('ResourceListNeeded',{})),'outputs':collection(db,o.get('ResourceListProduced',{})),'building_functions':linked.get(u,[]),'other_fields':simple(o)})
 (OUT/'production-recipes.json').write_text(json.dumps(recipes,ensure_ascii=False,indent=2),encoding='utf8')
 with (OUT/'production-recipes.csv').open('w',newline='',encoding='utf-8-sig') as f:
  w=csv.DictWriter(f,fieldnames=['rid','package','resource','absolute_offset','sha256','uuid','inputs','outputs','building_functions']);w.writeheader()
  for r in recipes:w.writerow({k:js(r[k]) if k in ['inputs','outputs','building_functions'] else r[k] for k in w.fieldnames})
 mer=['flowchart LR'];aliases={};lines=set()
 for i,r in enumerate(recipes):
  rn=f'p{i}';mer.append(f'  {rn}["recipe {r["rid"]}"]')
  for direction in ['inputs','outputs']:
   for pair in r[direction]:
    u=pair['resource']['uuid']
    if u not in aliases:
     alias=f'r{len(aliases)}';aliases[u]=alias;assets=pair['resource'].get('assets',[]);label=(assets[0]['scripting_id'] or pathlib.Path(assets[0]['resource']).stem) if assets else u;mer.append(f'  {alias}["{label}"]')
    line=f'  {aliases[u]} -->|{pair["quantity"]}| {rn}' if direction=='inputs' else f'  {rn} -->|{pair["quantity"]}| {aliases[u]}'
    if line not in lines:mer.append(line);lines.add(line)
 (OUT/'production-network.mmd').write_text('\n'.join(mer),encoding='utf8')

def export_bridges(db):
 relations=[]
 for system in ['jobs','needs','villager_status','building_functions','trade','happiness','military','map_generation','quests_conditions']:
  with gzip.open(OUT/(system+'-relations.jsonl.gz'),'wt',encoding='utf8') as f:
   for rid,payload in db.execute('SELECT r.rid,r.payload FROM resources r JOIN memberships m ON m.rid=r.rid WHERE m.system=?',(system,)):
    x=json.loads(zlib.decompress(payload));refs=[{'property':p,'uuid':u,'status':s,'target_rid':tr,'target_property':tp,'target_role':role,'match_count':count} for p,u,s,tr,tp,role,count in db.execute('SELECT path,uuid,status,target_rid,target_path,target_role,match_count FROM refs WHERE rid=?',(rid,))];f.write(js({**stamp(x),'rid':rid,'references':refs})+'\n')
 with (OUT/'resource-catalog.csv').open('w',newline='',encoding='utf-8-sig') as f:
  w=csv.writer(f);w.writerow(['rid','package','resource','absolute_offset','length','sha256','type','uuid','scripting_id','decoded_payload'])
  for row in db.execute('SELECT rid,package,path,offset,length,sha256,type,uuid,scripting_id,payload IS NOT NULL FROM resources'):w.writerow(row)
if __name__=='__main__':
 ap=argparse.ArgumentParser();ap.add_argument('--out',type=pathlib.Path,default=OUT);args=ap.parse_args();OUT=args.out
 if (OUT/'semantic-index.sqlite').exists():raise SystemExit('Output database already exists. Pass --out work/full-semantics/rebuilt for a new result.')
 build()
