"""Query offline native_callgraph.sqlite by exact address or name fragment."""
import argparse,json,sqlite3

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('database');group=ap.add_mutually_exclusive_group(required=True);group.add_argument('--address',type=lambda s:int(s,0));group.add_argument('--name');ap.add_argument('--direction',choices=['callees','callers'],default='callees');ap.add_argument('--limit',type=int,default=50);args=ap.parse_args()
    db=sqlite3.connect('file:'+args.database.replace('\\','/')+'?mode=ro',uri=True);db.row_factory=sqlite3.Row
    if args.address is not None:funcs=db.execute('SELECT * FROM functions WHERE va=?',(args.address,)).fetchall()
    else:funcs=db.execute('SELECT DISTINCT f.* FROM functions f JOIN aliases a ON a.va=f.va WHERE a.name LIKE ? ORDER BY length(f.name) LIMIT ?',('%'+args.name+'%',args.limit)).fetchall()
    result=[]
    for f in funcs:
        addr=f['va'];where='caller' if args.direction=='callees' else 'target';other='target' if args.direction=='callees' else 'caller'
        total=db.execute('SELECT count(*) FROM edges WHERE '+where+'=?',(addr,)).fetchone()[0]
        edges=[]
        for row in db.execute('SELECT e.*,f.name AS other_name FROM edges e LEFT JOIN functions f ON f.va=e.'+other+' WHERE e.'+where+'=? ORDER BY site LIMIT ?',(addr,args.limit)):
            r=dict(row)
            for k in ['caller','site','target']:r[k]=hex(r[k]) if r[k] is not None else None
            edges.append(r)
        item=dict(f);item['va']=hex(addr);item.update(direction=args.direction,sites_total=total,sites=edges);result.append(item)
    print(json.dumps(dict(functions=result,limitation='Offline linear direct-call index; indirect targets unresolved; no execution observed.'),ensure_ascii=False,indent=2))
if __name__=='__main__':main()
