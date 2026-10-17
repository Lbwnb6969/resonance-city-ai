"""Query the read-only Foundation static index. No third-party dependencies."""
import argparse,json,pathlib,sqlite3,zlib
ap=argparse.ArgumentParser();ap.add_argument('--db',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]/'semantic-index.sqlite');ap.add_argument('--search');ap.add_argument('--type');ap.add_argument('--system');ap.add_argument('--uuid');ap.add_argument('--rid',type=int);ap.add_argument('--field');ap.add_argument('--limit',type=int,default=30);args=ap.parse_args()
db=sqlite3.connect(f'file:{args.db.as_posix()}?mode=ro',uri=True);db.row_factory=sqlite3.Row
if args.rid:
 row=db.execute('SELECT * FROM resources WHERE rid=?',(args.rid,)).fetchone()
 if row is None:raise SystemExit('No resource with that rid')
 x=dict(row);p=x.pop('payload');x['decoded_payload']=json.loads(zlib.decompress(p)) if p else None;print(json.dumps(x,ensure_ascii=False,indent=2))
elif args.uuid:
 declarations=[dict(r) for r in db.execute('SELECT d.*,r.package,r.path AS resource,r.offset,r.sha256 FROM declarations d JOIN resources r ON r.rid=d.rid WHERE d.uuid=?',(args.uuid,))]
 incoming=[dict(r) for r in db.execute('SELECT e.*,r.path AS source_resource FROM refs e JOIN resources r ON r.rid=e.rid WHERE e.uuid=? LIMIT ?',(args.uuid,args.limit))];print(json.dumps({'declarations':declarations,'incoming_fields':incoming},ensure_ascii=False,indent=2))
elif args.field:
 q='SELECT f.*,r.package,r.path AS resource,r.offset,r.sha256 FROM fields f JOIN resources r ON r.rid=f.rid WHERE f.path LIKE ? OR f.name LIKE ? LIMIT ?';term='%'+args.field+'%';print(json.dumps([dict(r) for r in db.execute(q,(term,term,args.limit))],ensure_ascii=False,indent=2))
else:
 clauses=[];vals=[]
 if args.search:clauses.append('(r.path LIKE ? OR r.scripting_id LIKE ? OR r.type LIKE ?)');vals.extend(['%'+args.search+'%']*3)
 if args.type:clauses.append('r.type=?');vals.append(args.type)
 if args.system:clauses.append('EXISTS(SELECT 1 FROM memberships m WHERE m.rid=r.rid AND m.system=?)');vals.append(args.system)
 q='SELECT r.rid,r.package,r.path AS resource,r.offset,r.length,r.sha256,r.type,r.uuid,r.scripting_id,r.payload IS NOT NULL AS decoded FROM resources r'+(' WHERE '+' AND '.join(clauses) if clauses else '')+' ORDER BY r.rid LIMIT ?';vals.append(args.limit);print(json.dumps([dict(r) for r in db.execute(q,vals)],ensure_ascii=False,indent=2))
db.close()
