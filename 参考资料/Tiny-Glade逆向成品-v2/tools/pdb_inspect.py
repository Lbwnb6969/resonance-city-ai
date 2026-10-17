"""Dependency-free MSF7/CodeView reader. Reads PDB/PE; writes analysis copies only."""
import argparse, collections, csv, hashlib, json, mmap, pathlib, re, struct, uuid

def u16(b, p): return struct.unpack_from('<H', b, p)[0]
def u32(b, p): return struct.unpack_from('<I', b, p)[0]
def zstr(b, p=0):
    e = b.find(b'\0', p)
    return b[p:e if e >= 0 else len(b)].decode('utf-8', 'replace')
def digest(path):
    h=hashlib.sha256()
    with open(path,'rb') as f:
        for b in iter(lambda:f.read(1024*1024),b''): h.update(b)
    return h.hexdigest()

class MSF:
    def __init__(self,path):
        self.file=open(path,'rb'); self.data=mmap.mmap(self.file.fileno(),0,access=mmap.ACCESS_READ)
        if self.data[:32] != b'Microsoft C/C++ MSF 7.00\r\n\x1aDS\0\0\0': raise ValueError('Not MSF 7.0')
        self.block_size,free_map,self.blocks,dir_size,unknown,map_block=struct.unpack_from('<6I',self.data,32)
        n=(dir_size+self.block_size-1)//self.block_size
        directory_blocks=struct.unpack_from('<%dI'%n,self.data,map_block*self.block_size)
        directory=b''.join(self.block(b) for b in directory_blocks)[:dir_size]
        count=u32(directory,0); sizes=struct.unpack_from('<%dI'%count,directory,4); p=4+count*4
        self.streams=[]
        for size in sizes:
            n=0 if size==0xffffffff else (size+self.block_size-1)//self.block_size
            blocks=struct.unpack_from('<%dI'%n,directory,p);p+=n*4
            self.streams.append((size,blocks))
    def block(self,i): return self.data[i*self.block_size:(i+1)*self.block_size]
    def stream(self,i):
        size,blocks=self.streams[i]
        return b''.join(self.block(b) for b in blocks)[:size] if size!=0xffffffff else b''
    def identity(self):
        b=self.stream(1)
        return dict(version=u32(b,0),signature=u32(b,4),age=u32(b,8),guid=str(uuid.UUID(bytes_le=b[12:28])))
    def named_streams(self):
        b=self.stream(1);n=u32(b,28);names=b[32:32+n];p=32+n
        count,capacity=struct.unpack_from('<2I',b,p);p+=8
        words=u32(b,p);p+=4
        present=struct.unpack_from('<%dI'%words,b,p);p+=4*words
        words=u32(b,p);p+=4+4*words
        result={}
        for i in range(capacity):
            if i//32<len(present) and present[i//32]&(1<<(i%32)):
                off,stream=struct.unpack_from('<2I',b,p);p+=8;result[zstr(names,off)]=stream
        if len(result)!=count:raise ValueError('PDB named stream count mismatch')
        return result

def pe_info(path):
    b=pathlib.Path(path).read_bytes(); pe=u32(b,0x3c); n=u16(b,pe+6); opt=pe+24
    magic=u16(b,opt); image_base=struct.unpack_from('<Q',b,opt+24)[0] if magic==0x20b else u32(b,opt+28)
    dd=opt+(112 if magic==0x20b else 96); sec=opt+u16(b,pe+20); sections=[]
    for i in range(n):
        p=sec+i*40
        sections.append(dict(name=zstr(b[p:p+8]),virtual_size=u32(b,p+8),rva=u32(b,p+12),raw_size=u32(b,p+16),raw_offset=u32(b,p+20)))
    def rva_to_file(rva):
        for s in sections:
            if s['rva']<=rva<s['rva']+max(s['virtual_size'],s['raw_size']):return s['raw_offset']+rva-s['rva']
        raise ValueError('Unmapped RVA')
    debug_rva,debug_size=struct.unpack_from('<2I',b,dd+6*8); identities=[]
    for p in range(rva_to_file(debug_rva),rva_to_file(debug_rva)+debug_size,28):
        if u32(b,p+12)==2:
            raw=u32(b,p+24);size=u32(b,p+16);cv=b[raw:raw+size]
            if cv[:4]==b'RSDS':identities.append(dict(guid=str(uuid.UUID(bytes_le=cv[4:20])),age=u32(cv,20),path=zstr(cv,24),file_offset=raw))
    return dict(image_base=image_base,image_base_hex=hex(image_base),entry_rva=u32(b,opt+16),sections=sections,codeview=identities)

def records(b,start=0):
    p=start
    while p+4<=len(b):
        size=u16(b,p);kind=u16(b,p+2)
        if size<2 or p+2+size>len(b): break
        yield p,kind,b[p+4:p+size+2]
        p+=size+2

def dbi_info(msf):
    b=msf.stream(3)
    fields=struct.unpack_from('<iIIHHHHHHiiiiIiiHHI',b,0)
    # DBI header layout is fixed at 64 bytes.
    mods_size,seccon_size,secmap_size,file_size,typeserver_size=struct.unpack_from('<5i',b,24)
    p=64;end=p+mods_size;modules=[]
    while p+64<=end:
        stream=u16(b,p+34);sym,c11,c13=struct.unpack_from('<3I',b,p+36)
        name=zstr(b,p+64);q=p+64+len(name.encode('utf-8'))+1; obj=zstr(b,q)
        q+=len(obj.encode('utf-8'))+1
        modules.append(dict(name=name,object=obj,stream=stream,symbol_bytes=sym,c11_bytes=c11,c13_bytes=c13))
        p=(q+3)&~3
    file_off=64+mods_size+seccon_size+secmap_size;fi=b[file_off:file_off+file_size]
    sources=[]
    if len(fi)>=4:
        nm,nf=struct.unpack_from('<2H',fi,0)
        counts=struct.unpack_from('<%dH'%nm,fi,4+nm*2);nf=sum(counts)
        offsets=struct.unpack_from('<%dI'%nf,fi,4+nm*4);names=fi[4+nm*4+nf*4:]
        sources=list(dict.fromkeys(zstr(names,o) for o in offsets))
    return dict(symbol_stream=u16(b,20),global_stream=u16(b,12),public_stream=u16(b,16),modules=modules,sources=sources,header_fields=fields)

def symbols(msf,dbi,pe):
    sections=pe['sections'];base=pe['image_base']
    def row(kind,p,raw,module,stream):
        if kind==0x110e and len(raw)>=10:
            flags,off,seg=struct.unpack_from('<IIH',raw,0);name=zstr(raw,10);size=None;typ=None
        elif kind in (0x110f,0x1110,0x1146,0x1147) and len(raw)>=35:
            size=u32(raw,12);typ=u32(raw,24);off=u32(raw,28);seg=u16(raw,32);name=zstr(raw,35);flags=None
        elif kind in (0x110c,0x110d) and len(raw)>=10:
            typ,off,seg=struct.unpack_from('<IIH',raw,0);name=zstr(raw,10);size=None;flags=None
        else:return
        rva=sections[seg-1]['rva']+off if 1<=seg<=len(sections) else None
        return dict(kind=hex(kind),stream=stream,record_offset=p,module=module,name=name,segment=seg,offset=off,rva=rva,va=hex(base+rva) if rva is not None else None,size=size,type_index=hex(typ) if typ is not None else None,flags=flags)
    s=dbi['symbol_stream']
    if s!=0xffff:
        for p,k,raw in records(msf.stream(s)):
            r=row(k,p,raw,'',s)
            if r:yield r
    for mod in dbi['modules']:
        s=mod['stream']
        if s==0xffff:continue
        b=msf.stream(s)[:mod['symbol_bytes']]
        for p,k,raw in records(b,4):
            r=row(k,p,raw,mod['name'],s)
            if r:yield r

def compiler_records(msf,dbi):
    producers={}
    for mod in dbi['modules']:
        if mod['stream']==0xffff:continue
        for p,k,raw in records(msf.stream(mod['stream'])[:mod['symbol_bytes']],4):
            if k!=0x113c or len(raw)<22:continue
            key=(zstr(raw,22),u16(raw,4),tuple(u16(raw,o) for o in range(6,22,2)),u32(raw,0))
            item=producers.setdefault(key,dict(records=0,streams=set(),names=[]));item['records']+=1;item['streams'].add(mod['stream'])
            if mod['name'] not in item['names'] and len(item['names'])<3:item['names'].append(mod['name'])
    return [dict(producer=key[0],machine=key[1],version_parts=key[2],flags=hex(key[3]),record_count=item['records'],distinct_module_stream_count=len(item['streams']),example_modules=item['names']) for key,item in producers.items()]

def numeric(b,p):
    leaf=u16(b,p)
    if leaf<0x8000:return leaf,p+2
    fmts={0x8000:'b',0x8001:'h',0x8002:'H',0x8003:'i',0x8004:'I',0x8009:'q',0x800a:'Q'}
    if leaf not in fmts:raise ValueError('Unsupported numeric leaf '+hex(leaf))
    fmt='<'+fmts[leaf];return struct.unpack_from(fmt,b,p+2)[0],p+2+struct.calcsize(fmt)

def field_list(raw):
    out=[];p=0
    while p+2<=len(raw):
        if raw[p]>=0xf0:p+=raw[p]-0xf0;continue
        k=u16(raw,p);r=dict(kind=hex(k),field_record_offset=p)
        if k==0x150d:
            off,q=numeric(raw,p+8);r.update(attributes=u16(raw,p+2),type_index=hex(u32(raw,p+4)),offset=off,name=zstr(raw,q));q+=len(raw[q:].split(b'\0')[0])+1
        elif k==0x1502:
            value,q=numeric(raw,p+4);r.update(attributes=u16(raw,p+2),value=value,name=zstr(raw,q));q+=len(raw[q:].split(b'\0')[0])+1
        elif k==0x1404:q=p+8;r['continuation']=hex(u32(raw,p+4))
        elif k==0x1400:
            off,q=numeric(raw,p+8);r.update(attributes=u16(raw,p+2),base_type=hex(u32(raw,p+4)),offset=off)
        elif k in (0x150e,0x1510):
            q=p+8;r.update(attributes=u16(raw,p+2),type_index=hex(u32(raw,p+4)),name=zstr(raw,q));q+=len(raw[q:].split(b'\0')[0])+1
        elif k==0x1409:q=p+8;r['type_index']=hex(u32(raw,p+4))
        elif k==0x150f:
            q=p+8;r.update(count=u16(raw,p+2),method_list=hex(u32(raw,p+4)),name=zstr(raw,q));q+=len(raw[q:].split(b'\0')[0])+1
        elif k==0x1511:
            attr=u16(raw,p+2);q=p+8;r.update(attributes=attr,type_index=hex(u32(raw,p+4)))
            if ((attr>>2)&7) in (4,6):r['vbase_offset']=u32(raw,q);q+=4
            r['name']=zstr(raw,q);q+=len(raw[q:].split(b'\0')[0])+1
        else:
            out.append(dict(kind=hex(k),field_record_offset=p,unparsed_tail=raw[p:].hex()));break
        out.append(r);p=q
    return out

def types(msf):
    b=msf.stream(2);header=u32(b,4);first=u32(b,8)
    for i,(p,k,raw) in enumerate(records(b,header),first):
        item=dict(index=hex(i),kind=hex(k),record_offset=p)
        if k in (0x1504,0x1505) and len(raw)>=18:
            size,q=numeric(raw,16);item.update(count=u16(raw,0),properties=u16(raw,2),field_list=hex(u32(raw,4)),size=size,name=zstr(raw,q))
        elif k==0x1506 and len(raw)>=10:
            size,q=numeric(raw,8);item.update(count=u16(raw,0),properties=u16(raw,2),field_list=hex(u32(raw,4)),size=size,name=zstr(raw,q))
        elif k==0x1507 and len(raw)>=12:item.update(count=u16(raw,0),properties=u16(raw,2),underlying=hex(u32(raw,4)),field_list=hex(u32(raw,8)),name=zstr(raw,12))
        elif k==0x1503 and len(raw)>=10:
            size,q=numeric(raw,8);item.update(element_type=hex(u32(raw,0)),index_type=hex(u32(raw,4)),size=size,name=zstr(raw,q))
        elif k==0x1002 and len(raw)>=8:item.update(referent=hex(u32(raw,0)),attributes=hex(u32(raw,4)))
        elif k==0x1001 and len(raw)>=6:item.update(referent=hex(u32(raw,0)),attributes=hex(u16(raw,4)))
        elif k==0x1203:item.update(raw_hex=raw.hex(),fields=field_list(raw))
        elif k==0x1008 and len(raw)>=12:item.update(return_type=hex(u32(raw,0)),calling_convention=raw[4],parameter_count=u16(raw,6),argument_list=hex(u32(raw,8)))
        elif k==0x1201 and len(raw)>=4:item['arguments']=[hex(u32(raw,q)) for q in range(4,min(len(raw),4+u32(raw,0)*4),4)]
        else:continue
        yield item

def source_lines(msf,dbi,pe):
    names_stream=msf.named_streams().get('/names')
    if names_stream is None:return
    ns=msf.stream(names_stream)
    if u32(ns,0)!=0xeffeeffe:raise ValueError('Invalid /names stream')
    ns=ns[12:12+u32(ns,8)]
    for mod in dbi['modules']:
        if mod['stream']==0xffff or not mod['c13_bytes']:continue
        s=msf.stream(mod['stream']);p=mod['symbol_bytes']+mod['c11_bytes'];end=p+mod['c13_bytes'];subs=[];checksums={}
        while p+8<=end:
            kind,size=struct.unpack_from('<2I',s,p);raw=s[p+8:p+8+size];subs.append((kind,raw));p=(p+8+size+3)&~3
        for kind,raw in subs:
            if kind==0xf4:
                q=0
                while q+6<=len(raw):
                    nameoff=u32(raw,q);size=raw[q+4];checksums[q]=dict(source=zstr(ns,nameoff),checksum_kind=raw[q+5],checksum=raw[q+6:q+6+size].hex());q=(q+6+size+3)&~3
        for kind,raw in subs:
            if kind!=0xf2 or len(raw)<12:continue
            off,seg,flags,length=struct.unpack_from('<IHHI',raw,0);q=12
            if not 1<=seg<=len(pe['sections']):continue
            base=pe['image_base']+pe['sections'][seg-1]['rva']+off
            while q+12<=len(raw):
                fileid,count,blocksize=struct.unpack_from('<3I',raw,q)
                if blocksize<12 or q+blocksize>len(raw):break
                fileinfo=checksums.get(fileid,{})
                for i in range(count):
                    pos=q+12+i*8
                    if pos+8>q+blocksize:break
                    delta,line=struct.unpack_from('<2I',raw,pos)
                    yield dict(va=hex(base+delta),line=line&0xffffff,end_delta=(line>>24)&0x7f,statement=bool(line>>31),module=mod['name'],stream=mod['stream'],**fileinfo)
                q+=blocksize

def main():
    ap=argparse.ArgumentParser();ap.add_argument('pdb');ap.add_argument('--exe',required=True);ap.add_argument('--out',required=True);args=ap.parse_args()
    out=pathlib.Path(args.out);out.mkdir(parents=True,exist_ok=True)
    msf=MSF(args.pdb);pe=pe_info(args.exe);di=dbi_info(msf);pi=msf.identity()
    identity=dict(pdb_path=str(pathlib.Path(args.pdb).resolve()),pdb_sha256=digest(args.pdb),exe_path=str(pathlib.Path(args.exe).resolve()),exe_sha256=digest(args.exe),pdb=pi,pe=pe,matched=any(x['guid']==pi['guid'] and x['age']==pi['age'] for x in pe['codeview']),block_size=msf.block_size,stream_count=len(msf.streams),stream_sizes=[s[0] for s in msf.streams],named_streams=msf.named_streams())
    (out/'pdb_identity.json').write_text(json.dumps(identity,indent=2),encoding='utf-8')
    (out/'pdb_modules.json').write_text(json.dumps(di,indent=2,ensure_ascii=False),encoding='utf-8')
    (out/'pdb_compilers.json').write_text(json.dumps(compiler_records(msf,di),indent=2),encoding='utf-8')
    crates=collections.Counter();deps=collections.Counter();git=collections.Counter()
    for src in di['sources']:
        match=re.search(r'country-slice-private/(.+?)/src/',src)
        if match:crates[match.group(1)]+=1
        match=re.search(r'/registry/src/[^/]+/([^/]+)/',src)
        if match:deps[match.group(1)]+=1
        match=re.search(r'/git/checkouts/([^/]+/[^/]+)/',src)
        if match:git[match.group(1)]+=1
    inventory=dict(project_crates_source_counts=dict(crates.most_common()),dependency_sources=dict(deps.most_common()),git_dependencies=dict(git.most_common()))
    (out/'pdb_source_inventory.json').write_text(json.dumps(inventory,indent=2),encoding='utf-8')
    embedded=[]
    for name,index in msf.named_streams().items():
        if not name.startswith('/src/files/'):continue
        directory=out/'pdb_embedded_sources';directory.mkdir(exist_ok=True)
        # Never use a source-controlled path as an output path.
        filename=name.replace('\\','/').split('/')[-1]
        target=directory/filename;payload=msf.stream(index);target.write_bytes(payload)
        embedded.append(dict(name=name,stream=index,bytes=len(payload),sha256=hashlib.sha256(payload).hexdigest(),output=str(target)))
    (out/'pdb_embedded_sources.json').write_text(json.dumps(embedded,indent=2),encoding='utf-8')
    counts=collections.Counter();roots=collections.Counter()
    with open(out/'pdb_symbols.jsonl','w',encoding='utf-8') as f:
        for r in symbols(msf,di,pe):
            f.write(json.dumps(r,ensure_ascii=False)+'\n');counts[r['kind']]+=1
            if r['module']:roots[r['module'].split('\\')[-1].split('/')[-1]]+=1
    tc=collections.Counter()
    with open(out/'pdb_types.jsonl','w',encoding='utf-8') as f:
        for r in types(msf):f.write(json.dumps(r,ensure_ascii=False)+'\n');tc[r['kind']]+=1
    line_count=0;project_lines=0;source_checksums={}
    with open(out/'pdb_project_lines.csv','w',encoding='utf-8',newline='') as f:
        writer=csv.writer(f);writer.writerow(['va','source','line','end_delta','module','stream'])
        for r in source_lines(msf,di,pe):
            line_count+=1
            if 'country-slice-private/' in r.get('source',''):
                project_lines+=1;writer.writerow([r.get(k,'') for k in ['va','source','line','end_delta','module','stream']]);source_checksums[r['source']]=dict(kind=r.get('checksum_kind'),checksum=r.get('checksum'))
    (out/'pdb_project_source_checksums.json').write_text(json.dumps(source_checksums,indent=2),encoding='utf-8')
    summary=dict(identity_matched=identity['matched'],symbol_counts=dict(counts),type_counts=dict(tc),modules=len(di['modules']),source_files=len(di['sources']),source_line_records=line_count,project_line_records=project_lines)
    (out/'pdb_summary.json').write_text(json.dumps(summary,indent=2),encoding='utf-8');print(json.dumps(summary,indent=2))
if __name__=='__main__':main()
