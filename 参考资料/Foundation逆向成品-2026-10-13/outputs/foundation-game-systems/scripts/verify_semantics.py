import collections,gzip,json,pathlib,sqlite3,os
OUT=pathlib.Path(os.environ.get('FOUNDATION_SEMANTICS_OUTPUT','outputs/foundation-game-systems'));db=sqlite3.connect(f'file:{(OUT/"semantic-index.sqlite").as_posix()}?mode=ro',uri=True);coverage=json.load(open(OUT/'coverage.json',encoding='utf8'));failures=[]
def check(ok,msg):
 if not ok:failures.append(msg)
physical=db.execute('SELECT count(*) FROM resources').fetchone()[0];decoded=db.execute('SELECT count(*) FROM resources WHERE payload IS NOT NULL').fetchone()[0];check(physical==34884,'physical count');check(decoded==26290,'decoded count');check(db.execute('SELECT count(*) FROM resources WHERE length(sha256)!=64').fetchone()[0]==0,'physical resource missing sha256')
reference_status=dict(db.execute('SELECT status,count(*) FROM refs GROUP BY status'));check(sum(reference_status.values())==coverage['totals']['uuid_shaped_fields'],'reference count consistency')
check(db.execute('SELECT count(*) FROM refs e LEFT JOIN resources r ON r.rid=e.target_rid WHERE e.target_rid IS NOT NULL AND r.rid IS NULL').fetchone()[0]==0,'dangling database target')
counts={}
for system,expected in coverage['systems'].items():
 with gzip.open(OUT/(system+'.jsonl.gz'),'rt',encoding='utf8') as f:actual=sum(1 for line in f if json.loads(line))
 counts[system]=actual;check(actual==expected,f'{system} file count')
graphs=json.load(open(OUT/'behavior-tree-index.json',encoding='utf8'));check(len(graphs)==70,'behavior graph count');nodecount=edgecount=unreachable=0
for g in graphs:
 x=json.load(open(OUT/g['json'],encoding='utf8'));ids=[n['id'] for n in x['nodes']];check(len(ids)==len(set(ids)),f'duplicate nodes {g["rid"]}');check(x['root_id'] in ids,f'root missing {g["rid"]}');check(all(e['from'] in ids and e['to'] in ids for e in x['edges']),f'edge missing {g["rid"]}');check(not x['validation_issues'],f'slot binding issues {g["rid"]}');nodecount+=len(ids);edgecount+=len(x['edges']);unreachable+=len(x['unreachable_node_ids'])
check(nodecount==817 and edgecount==735,'behavior totals');recipes=json.load(open(OUT/'production-recipes.json',encoding='utf8'));check(len(recipes)==106,'recipe count');check(all(pair['resource']['status']=='resolved' for r in recipes for side in ['inputs','outputs'] for pair in r[side]),'recipe resource target missing')
trueconditions=db.execute("SELECT count(*) FROM conditions WHERE type LIKE 'PlaCDataGameCondition%'").fetchone()[0]
result={'evidence_kind':'local-semantic-index-verification','physical_resources':physical,'decoded_resources':decoded,'systems':counts,'references':reference_status,'behavior_graphs':len(graphs),'behavior_nodes':nodecount,'behavior_edges':edgecount,'unreachable_nodes_preserved':unreachable,'production_recipes':len(recipes),'concrete_game_condition_nodes':trueconditions,'typed_condition_and_asset_nodes_total':coverage['totals']['conditions'],'failures':failures};(OUT/'semantic-validation.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf8');print(json.dumps(result,ensure_ascii=False));db.close()
if failures:raise SystemExit(1)
