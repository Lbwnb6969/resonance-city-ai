"""Build an offline direct-call index from matched PDB procedure extents.

Linear decoding only: not a CFG, runtime trace, or resolution of indirect calls.
Requires capstone. All database writes go to --out; target is read-only.
"""
import argparse, collections, hashlib, json, pathlib, re, sqlite3, sys, time
from pdb_inspect import pe_info, digest

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('exe',type=pathlib.Path);ap.add_argument('--symbols',required=True,type=pathlib.Path);ap.add_argument('--identity',required=True,type=pathlib.Path);ap.add_argument('--out',required=True,type=pathlib.Path);ap.add_argument('--deps',type=pathlib.Path);ap.add_argument('--max-function-bytes',type=int,default=1048576);args=ap.parse_args()
    if args.out.exists():raise SystemExit('Choose a new --out database; existing evidence is preserved.')
    if args.deps:sys.path.insert(0,str(args.deps.resolve()))
    from capstone import Cs, CS_ARCH_X86, CS_MODE_64, __version__ as capstone_version
    identity=json.loads(args.identity.read_text(encoding='utf-8'));actual_sha=digest(args.exe)
    if not identity['matched'] or actual_sha!=identity['exe_sha256']:raise SystemExit('EXE hash/PDB identity does not match supplied evidence')
    pe=pe_info(args.exe);data=args.exe.read_bytes();base=pe['image_base'];procedures={};record_count=0
    for line in args.symbols.open(encoding='utf-8'):
        r=json.loads(line)
        if r['kind'] not in ('0x110f','0x1110') or r['va'] is None:continue
        record_count+=1;addr=int(r['va'],16)
        item=procedures.setdefault(addr,dict(va=addr,names=set(),sizes=set(),modules=set()))
        item['names'].add(r['name']);item['sizes'].add(r['size']);item['modules'].add(r['module'])
    args.out.parent.mkdir(parents=True,exist_ok=True);db=sqlite3.connect(args.out)
    db.executescript('''
      PRAGMA journal_mode=OFF; PRAGMA synchronous=OFF;
      CREATE TABLE metadata(key TEXT PRIMARY KEY,value TEXT);
      CREATE TABLE functions(va INTEGER PRIMARY KEY,name TEXT,size INTEGER,size_variants TEXT,module TEXT,file_offset INTEGER,decoded_bytes INTEGER,instructions INTEGER,status TEXT);
      CREATE TABLE aliases(va INTEGER,name TEXT,PRIMARY KEY(va,name));
      CREATE TABLE edges(caller INTEGER,site INTEGER,kind TEXT,target INTEGER,operand TEXT,resolution TEXT);
    ''')
    md=Cs(CS_ARCH_X86,CS_MODE_64);md.detail=False;md.skipdata=False
    counts=collections.Counter();instruction_count=0;requested_bytes=0;decoded_total=0;t0=time.monotonic()
    for i,(addr,item) in enumerate(sorted(procedures.items())):
        size=max(item['sizes']);rva=addr-base;name=min(item['names'],key=lambda s:(len(s),s));module=min(item['modules']);sec=next((s for s in pe['sections'] if s['rva']<=rva<s['rva']+s['raw_size']),None)
        # The matched PDB is trusted only for the requested extent, never for a path to write.
        status='decoded';fileoff=None;decoded=0;instructions=0;edges=[];requested_bytes+=size
        if size<=0:status='skipped_zero_size'
        elif sec is None or sec['name']!='.text':status='skipped_outside_text'
        elif rva+size>sec['rva']+sec['raw_size']:status='skipped_cross_section_extent'
        else:
            fileoff=sec['raw_offset']+rva-sec['rva'];limit=min(size,args.max_function_bytes);code=data[fileoff:fileoff+limit]
            for site,nbytes,mnemonic,operand in md.disasm_lite(code,addr):
                decoded=site+nbytes-addr;instructions+=1
                if mnemonic not in ('call','jmp'):continue
                if re.fullmatch(r'0x[0-9a-f]+',operand):
                    target=int(operand,16)
                    if mnemonic=='call' or (target in procedures and not addr<=target<addr+size):
                        edges.append((addr,site,mnemonic,target,operand,'direct-immediate'));counts['direct_'+mnemonic+'_sites']+=1
                elif mnemonic=='call' or mnemonic=='jmp':
                    edges.append((addr,site,mnemonic,None,operand,'unresolved-indirect'));counts['indirect_'+mnemonic+'_sites']+=1
            if limit<size:status='capped_function_extent'
            elif decoded<size:status='decode_stopped_before_extent_end'
        counts[status]+=1;instruction_count+=instructions;decoded_total+=decoded
        db.execute('INSERT INTO functions VALUES(?,?,?,?,?,?,?,?,?)',(addr,name,size,json.dumps(sorted(item['sizes'])),module,fileoff,decoded,instructions,status))
        db.executemany('INSERT INTO aliases VALUES(?,?)',((addr,n) for n in sorted(item['names'])))
        db.executemany('INSERT INTO edges VALUES(?,?,?,?,?,?)',edges)
        if (i+1)%10000==0:db.commit();print(json.dumps(dict(functions_processed=i+1,total=len(procedures),elapsed_seconds=round(time.monotonic()-t0,1))),flush=True)
    db.executescript('CREATE INDEX edges_caller ON edges(caller); CREATE INDEX edges_target ON edges(target); CREATE INDEX alias_name ON aliases(name);')
    known_direct=db.execute("SELECT count(*) FROM edges WHERE target IN (SELECT va FROM functions)").fetchone()[0]
    coverage=dict(exe_sha256=actual_sha,pdb_sha256=identity['pdb_sha256'],image_base=hex(base),capstone_version=capstone_version,procedure_records=record_count,unique_function_starts=len(procedures),extent_variant_function_starts=sum(len(x['sizes'])>1 for x in procedures.values()),requested_extent_bytes=requested_bytes,decoded_bytes=decoded_total,instructions=instruction_count,status_and_site_counts=dict(counts),direct_sites_resolved_to_indexed_function=known_direct,elapsed_seconds=round(time.monotonic()-t0,2),limitations=['PDB extents are decoded linearly, including unreachable bytes and compiler padding.','No CFG reconstruction, target execution, RIP memory dereference, or indirect-call target resolution.','Same-VA symbol aliases share a function; largest supplied extent is chosen and all size variants retained.','Direct jumps are retained only when they target a different indexed function.','Each function status records skipped, capped, and incomplete decode coverage.'])
    for k,v in coverage.items():db.execute('INSERT INTO metadata VALUES(?,?)',(k,json.dumps(v,ensure_ascii=False)))
    db.commit();db.close();args.out.with_suffix('.coverage.json').write_text(json.dumps(coverage,indent=2),encoding='utf-8');print(json.dumps(coverage,indent=2))
if __name__=='__main__':main()
