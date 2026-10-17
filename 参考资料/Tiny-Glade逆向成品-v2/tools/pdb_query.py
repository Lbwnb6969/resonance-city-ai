"""Search pdb_inspect.py exports by name/address/source, without dependencies."""
import argparse, csv, json, pathlib, re

def demangle_legacy(name):
    m=re.match(r'^_?ZN',name)
    if not m:return name
    p=m.end();parts=[]
    while p<len(name) and name[p]!='E':
        m=re.match(r'\d+',name[p:])
        if not m:return name
        n=int(m.group());p+=len(m.group());s=name[p:p+n];p+=n
        replacements={'SP':'@','BP':'*','RF':'&','LT':'<','GT':'>','LP':'(','RP':')','C':','}
        s=re.sub(r'\$([A-Za-z0-9]+)\$',lambda m:chr(int(m[1][1:],16)) if m[1].startswith('u') else replacements.get(m[1],m[0]),s)
        s=s.replace('..','::')
        if s.startswith('_') and s[1:2]=='<':s=s[1:]
        parts.append(s)
    if parts and re.fullmatch('h[0-9a-f]{16}',parts[-1]):parts.pop()
    return '::'.join(parts)

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('evidence',type=pathlib.Path)
    ap.add_argument('--name',help='Case insensitive substring or regex with --regex')
    ap.add_argument('--regex',action='store_true')
    ap.add_argument('--address',type=lambda s:int(s,0),help='Preferred-image VA, e.g. 0x141920a00')
    ap.add_argument('--source',help='Substring of original build source path')
    ap.add_argument('--limit',type=int,default=50)
    ap.add_argument('--public',action='store_true',help='Include public/data symbols as well as procedures')
    args=ap.parse_args();rows=[];pat=re.compile(args.name,re.I) if args.regex and args.name else None
    with (args.evidence/'pdb_symbols.jsonl').open(encoding='utf-8') as f:
        for line in f:
            r=json.loads(line)
            if not args.public and r['kind'] not in ('0x110f','0x1110'):continue
            n=demangle_legacy(r['name'])
            if args.name and not (pat.search(n) if pat else args.name.lower() in n.lower()):continue
            if args.address is not None:
                if r['va'] is None:continue
                start=int(r['va'],16)
                if not (start==args.address or (r['size'] and start<=args.address<start+r['size'])):continue
            r['display_name']=n;rows.append(r)
    # C13 can provide several paths/lines at one address because inlining is retained.
    wanted={int(r['va'],16):[] for r in rows if r['va']}
    if args.source or args.address is not None or args.name:
        with (args.evidence/'pdb_project_lines.csv').open(encoding='utf-8',newline='') as f:
            for r in csv.DictReader(f):
                a=int(r['va'],16)
                if a in wanted and (not args.source or args.source.lower() in r['source'].lower()):
                    wanted[a].append(dict(source=r['source'],line=int(r['line']),end_delta=int(r['end_delta'])))
    for r in rows:r['source_start_candidates']=wanted.get(int(r['va'],16),[]) if r['va'] else []
    if args.source:rows=[r for r in rows if r['source_start_candidates']]
    seen=set();unique=[]
    for r in rows:
        key=(r['va'],r['display_name'])
        if key not in seen:seen.add(key);unique.append(r)
    result=dict(matches=len(unique),returned=min(len(unique),args.limit),symbols=unique[:args.limit])
    print(json.dumps(result,ensure_ascii=False,indent=2))
if __name__=='__main__':main()
