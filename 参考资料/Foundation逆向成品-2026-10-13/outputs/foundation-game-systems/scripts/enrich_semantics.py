import collections,csv,gzip,hashlib,json,pathlib,sqlite3,zlib
from build_semantics import OUT,js,walk,declaration,stamp,simple,system_members,items,val,UUID,ZERO,label_uuid,collection
db=sqlite3.connect(OUT/'semantic-index.sqlite');coverage=json.load(open(OUT/'coverage.json',encoding='utf8'));tot=coverage['totals'];nextid=db.execute('SELECT max(rid) FROM resources').fetchone()[0]
for line in (OUT/'additional-v2.jsonl').read_text(encoding='utf8').splitlines():
 x=json.loads(line);rid=db.execute('SELECT rid FROM resources WHERE package=? AND path=?',(x['package'],x['resource'])).fetchone()[0]
 old=db.execute('SELECT payload FROM resources WHERE rid=?',(rid,)).fetchone()[0]
 if old:continue
 db.execute('UPDATE resources SET payload=?,sha256=? WHERE rid=?',(zlib.compress(line.encode(),3),x['sha256'],rid));systems=system_members(x);db.executemany('INSERT INTO memberships VALUES(?,?)',[(s,rid) for s in systems]);flat=[];decls=[];uuidfields=[]
 for path,n in walk(x['roots']):
  d=declaration(path,n)
  if d and d[0]!=ZERO:decls.append((d[0],rid,path,d[1],d[2].get('type',''),str(d[2].get('name',''))))
  for name,v in n.get('@',{}).items():
   fv={k:q for k,q in v.items() if k!='hex'} if isinstance(v,dict) and 'hex' in v else v;flat.append((rid,path,name,js(fv)))
   if isinstance(v,str) and UUID.fullmatch(v):uuidfields.append((path,name,v))
 db.executemany('INSERT INTO fields VALUES(?,?,?,?)',flat);db.executemany('INSERT INTO declarations VALUES(?,?,?,?,?,?)',decls);tot['decoded_resources']+=1;tot['fields']+=len(flat);tot['declarations']+=len(decls);tot['uuid_shaped_fields']+=len(uuidfields)
 for p,n,u in uuidfields:
  ds=db.execute('SELECT rid,path,role,type,label FROM declarations WHERE uuid=?',(u,)).fetchall();local=[d for d in ds if d[0]==rid];own=[d for d in local if d[1]==p];assets=[d for d in ds if d[2]=='root_asset'];sub=[d for d in ds if d[2]=='metadata_or_subasset']
  status,targets=('null',[]) if u==ZERO else ('declaration',own) if own else ('resolved_local',local) if local else ('resolved_asset',assets) if assets else ('resolved_subasset',sub) if sub else ('resolved_cross_resource_object',ds) if ds else ('unresolved',[]);target=targets[0] if targets else (None,None,None,None,None);db.execute('INSERT INTO refs VALUES(?,?,?,?,?,?,?,?)',(rid,p+'/@'+n,u,status,target[0],target[1],target[2],len(targets)));tot['references_'+status]+=1
 for s in systems:
  coverage['systems'][s]=coverage['systems'].get(s,0)+1
  with gzip.open(OUT/(s+'.jsonl.gz'),'at',encoding='utf8') as f:f.write(js({**stamp(x),'rid':rid,'type':x['metadata'].get('type',''),'uuid':x['metadata'].get('id',''),'scripting_id':x['metadata'].get('scriptingId',''),'data':simple(x['roots'])})+'\n')
  root=next(iter(x['roots'].values()));scalars={k:val(v) for k,v in root.items() if k!='@' and isinstance(v,dict) and list(v)==['@']}
  with (OUT/(s+'.csv')).open('a',newline='',encoding='utf8') as f:
   csv.writer(f).writerow([rid,x['package'],x['resource'],x['absolute_offset'],x['length'],x['sha256'],x['metadata'].get('type',''),x['metadata'].get('id',''),x['metadata'].get('scriptingId',''),js({k:v for k,v in scalars.items() if any(q in k for q in ['Name','Description','Title'])}),js(scalars),js([(p+'/@'+n,u) for p,n,u in uuidfields])])
db.commit()

def load_type(t):
 for rid,payload in db.execute('SELECT rid,payload FROM resources WHERE type=? AND payload IS NOT NULL',(t,)):
  x=json.loads(zlib.decompress(payload));yield rid,x,x['roots'].get('object',{})
def export(name,rows):
 (OUT/(name+'.json')).write_text(json.dumps(rows,ensure_ascii=False,indent=2),encoding='utf8')
 if not rows:return
 with (OUT/(name+'.csv')).open('w',newline='',encoding='utf-8-sig') as f:
  w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader()
  for row in rows:w.writerow({k:js(v) if isinstance(v,(dict,list)) else v for k,v in row.items()})
def refs_list(n):return [label_uuid(db,val(it)) for it in items(n.get('Item',[]))]
status=[]
for rid,x,o in load_type('PlaCAssetVillagerStatus'):
 status.append({**stamp(x),'rid':rid,'uuid':x['metadata'].get('id'),'scripting_id':x['metadata'].get('scriptingId'),'importance':val(o.get('StatusImportance',{})),'needs':refs_list(o.get('AssetAgentNeedList',{})),'remove_needs':refs_list(o.get('AssetAgentNeedToRemoveList',{})),'compatible_jobs':refs_list(o.get('CompatibleJobList',{})),'additional_behavior':label_uuid(db,val(o.get('OptionalAdditionalBehavior',{}))),'all_fields':simple(o)})
export('status-needs-jobs',status)
jobs=[]
for rid,x,o in load_type('PlaCAssetJob'):
 jobs.append({**stamp(x),'rid':rid,'uuid':x['metadata'].get('id'),'job_name':val(o.get('JobName',{})),'needed_mastered_jobs':refs_list(o.get('NeededMasteredJobList',{})),'progression':label_uuid(db,val(o.get('AssetJobProgression',{}))),'default_behavior':label_uuid(db,val(o.get('DefaultBehavior',{}))),'use_workplace_behavior':val(o.get('UseWorkplaceBehavior',{})),'compatible_statuses':[{'rid':s['rid'],'resource':s['resource'],'importance':s['importance']} for s in status if any(j['uuid']==x['metadata'].get('id') for j in s['compatible_jobs'])],'all_fields':simple(o)})
export('job-requirements',jobs)
prices=[]
for rid,x,o in load_type('PlaCAssetResource'):
 prices.append({**stamp(x),'rid':rid,'uuid':x['metadata'].get('id'),'scripting_id':x['metadata'].get('scriptingId'),'name_key':val(o.get('ResourceName',{})),'is_tradable':val(o.get('IsTradable',{})),'resource_types':[val(it) for it in items(o.get('ResourceTypeList',{}).get('Item',[]))],'buying_price':collection(db,o.get('TradeBuyingPrice',{})),'selling_price':collection(db,o.get('TradeSellingPrice',{}))})
export('trade-prices',prices)
villages=[]
for rid,x,o in load_type('PlaCAssetTradingVillage'):
 villages.append({**stamp(x),'rid':rid,'uuid':x['metadata'].get('id'),'name_key':val(o.get('VillageName',{})),'buying_resource_list':simple(o.get('BuyingResourceList',{})),'selling_resource_list':simple(o.get('SellingResourceList',{})),'all_fields':simple(o)})
export('trade-villages',villages)
functions=[]
for rid,payload in db.execute("SELECT r.rid,r.payload FROM resources r JOIN memberships m ON m.rid=r.rid WHERE m.system='building_functions'"):
 x=json.loads(zlib.decompress(payload));o=x['roots'].get('object',{});job=o.get('RelatedJob',{});functions.append({**stamp(x),'rid':rid,'type':x['metadata'].get('type'),'uuid':x['metadata'].get('id'),'name_key':val(o.get('Name',{})),'related_job':label_uuid(db,val(job.get('Job',{}))),'behavior':label_uuid(db,val(job.get('Behavior',{}))),'worker_capacity':val(o.get('WorkerCapacity',{})),'output_capacity':val(o.get('OutputCapacity',{})),'cycle_seconds':val(o.get('ProductionCycleDurationInSec',{})),'work_cycles_needed':val(o.get('WorkCycleNeededToProduceOnce',{})),'recipes':refs_list(o.get('AssetWorkplaceRecipeList',{})),'all_fields':simple(o)})
export('building-function-links',functions)
unres=collections.Counter();examples={}
for rid,p,u in db.execute("SELECT rid,path,uuid FROM refs WHERE status='unresolved'"):unres[p.rsplit('/',1)[-1]]+=1;examples.setdefault(p.rsplit('/',1)[-1],[]).append({'rid':rid,'property':p,'uuid':u})
coverage['unresolved_attribute_counts']=dict(unres);coverage['unresolved_unique_uuid_count']=db.execute("SELECT count(DISTINCT uuid) FROM refs WHERE status='unresolved'").fetchone()[0];coverage['semantic_views']={'status_needs_jobs':len(status),'job_requirements':len(jobs),'trade_prices':len(prices),'trade_villages':len(villages),'building_function_links':len(functions)};coverage['totals']['uuid_registry_unique']=db.execute('SELECT count(DISTINCT uuid) FROM declarations').fetchone()[0]
(OUT/'coverage.json').write_text(json.dumps(coverage,ensure_ascii=False,indent=2),encoding='utf8');(OUT/'unresolved-groups.json').write_text(json.dumps({'counts':unres,'examples':{k:v[:5] for k,v in examples.items()}},indent=2),encoding='utf8')
# Refresh graph and catalogs with added payloads from SQLite, without rereading package or decoder.
with gzip.open(OUT/'resource-reference-graph.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
 for row in db.execute('SELECT rid,path,uuid,status,target_rid,target_path,target_role,match_count FROM refs'):f.write(js(dict(zip(['rid','property','uuid','status','target_rid','target_property','target_role','match_count'],row)))+'\n')
with gzip.open(OUT/'uuid-registry.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
 for row in db.execute('SELECT * FROM declarations'):f.write(js(dict(zip(['uuid','rid','property','role','type','label'],row)))+'\n')
with (OUT/'resource-catalog.csv').open('w',newline='',encoding='utf-8-sig') as f:
 w=csv.writer(f);w.writerow(['rid','package','resource','absolute_offset','length','sha256','type','uuid','scripting_id','decoded_payload'])
 for row in db.execute('SELECT rid,package,path,offset,length,sha256,type,uuid,scripting_id,payload IS NOT NULL FROM resources'):w.writerow(row)
db.commit();print(js({'totals':coverage['totals'],'systems':coverage['systems'],'semantic_views':coverage['semantic_views'],'unresolved_unique':coverage['unresolved_unique_uuid_count']}));db.close()
