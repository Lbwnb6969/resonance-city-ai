import csv,gzip,json,pathlib,sqlite3,os
OUT=pathlib.Path(os.environ.get('FOUNDATION_SEMANTICS_OUTPUT','outputs/foundation-game-systems'));root=pathlib.Path('D:/steamtest/steamapps/common/Foundation');db=sqlite3.connect(OUT/'semantic-index.sqlite');manifest=json.load(open('outputs/foundation-resources/package-resource-manifest.json',encoding='utf8'));errors=[]
for rec in manifest:
 package=str(root/pathlib.Path(rec['package']));row=db.execute('SELECT rid,offset,length,sha256 FROM resources WHERE package=? AND path=?',(package,rec['resource'])).fetchone()
 if row is None:errors.append('Missing '+rec['resource']);continue
 rid,off,n,digest=row
 if off!=rec['source_absolute_offset'] or n!=rec['bytes'] or (digest and digest!=rec['sha256']):errors.append('Evidence mismatch '+rec['resource']);continue
 db.execute('UPDATE resources SET sha256=? WHERE rid=?',(rec['sha256'],rid))
if errors:raise ValueError(errors[:10])
db.commit()
with (OUT/'resource-catalog.csv').open('w',newline='',encoding='utf-8-sig') as f:
 w=csv.writer(f);w.writerow(['rid','package','resource','absolute_offset','length','sha256','type','uuid','scripting_id','decoded_payload'])
 for row in db.execute('SELECT rid,package,path,offset,length,sha256,type,uuid,scripting_id,payload IS NOT NULL FROM resources'):w.writerow(row)
with gzip.open(OUT/'resource-reference-graph.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
 for row in db.execute('SELECT e.rid,r.package,r.path,r.offset,r.sha256,e.path,e.uuid,e.status,e.target_rid,e.target_path,e.target_role,e.match_count FROM refs e JOIN resources r ON r.rid=e.rid'):
  f.write(json.dumps(dict(zip(['rid','package','resource','absolute_offset','sha256','property','uuid','status','target_rid','target_property','target_role','match_count'],row)),ensure_ascii=False,separators=(',',':'))+'\n')
with gzip.open(OUT/'unresolved-references.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
 for row in db.execute("SELECT e.rid,r.package,r.path,r.offset,r.sha256,e.path,e.uuid,e.status FROM refs e JOIN resources r ON r.rid=e.rid WHERE e.status='unresolved'"):
  f.write(json.dumps(dict(zip(['rid','package','resource','absolute_offset','sha256','property','uuid','status'],row)),ensure_ascii=False,separators=(',',':'))+'\n')
cov=json.load(open(OUT/'coverage.json',encoding='utf8'));cov['physical_manifest_corrobation']={'resources':len(manifest),'offset_length_sha256_matches':True,'source_manifest':'../foundation-resources/package-resource-manifest.json'};cov['limitations']=[s for s in cov['limitations'] if not s.startswith('Physical resources without')];(OUT/'coverage.json').write_text(json.dumps(cov,ensure_ascii=False,indent=2),encoding='utf8');print(len(manifest),'physical hashes attached');db.close()
