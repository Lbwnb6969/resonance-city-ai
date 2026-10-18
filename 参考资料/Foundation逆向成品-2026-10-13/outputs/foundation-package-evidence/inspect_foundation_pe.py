from pathlib import Path
import struct,json,hashlib,re
root=Path(r'D:\steamtest\steamapps\common\Foundation'); p=root/'foundation.exe'; b=p.read_bytes()
u16=lambda x:struct.unpack_from('<H',b,x)[0];u32=lambda x:struct.unpack_from('<I',b,x)[0];u64=lambda x:struct.unpack_from('<Q',b,x)[0]
pe=u32(0x3c); assert b[pe:pe+4]==b'PE\0\0'; opt=pe+24; section_start=opt+u16(pe+20); sections=[]
for i in range(u16(pe+6)):
 s=section_start+i*40
 sections.append({'name':b[s:s+8].split(b'\0')[0].decode(),'virtual_size':u32(s+8),'rva':u32(s+12),'raw_size':u32(s+16),'raw_offset':u32(s+20),'characteristics':hex(u32(s+36))})
def rva_off(r):
 if r < u32(opt+60):return r
 for s in sections:
  if s['rva']<=r<s['rva']+s['raw_size']:return s['raw_offset']+r-s['rva']
 raise ValueError(hex(r))
def z(off):return b[off:b.index(0,off)].decode('ascii','replace')
dir_start=opt+112; import_rva=u32(dir_start+8); imports=[]
if import_rva:
 pos=rva_off(import_rva)
 while any(b[pos:pos+20]):
  original,timestamp,forwarder,name,first=struct.unpack_from('<IIIII',b,pos); dll=z(rva_off(name)); th=rva_off(original or first); symbols=[]
  while val:=u64(th):
   if val & (1<<63):symbols.append({'ordinal':val & 65535})
   else:symbols.append({'name':z(rva_off(val)+2)})
   th+=8
  imports.append({'dll':dll,'symbols':symbols});pos+=20
# scan intact printable byte runs (no deleting undecodable bytes)
patterns=['Foundation','Hurricane','Polymorph','Steam','OpenGL','Wwise','Lua','ComCPackage','package','1.12.0.14']
selected={}; source_paths=[]
for enc,expr in [('ascii',rb'[\x20-\x7e]{5,}'),('utf-16le',rb'(?:[\x20-\x7e]\x00){5,}')]:
 strings=[{'offset':m.start(),'value':m.group().decode(enc)} for m in re.finditer(expr,b)]
 selected[enc]={pat:{'count':len(hits:=[x for x in strings if re.search(re.escape(pat),x['value'],re.I)]),'examples':hits[:30]} for pat in patterns}
 source_paths.extend({'encoding':enc,**x} for x in strings if 'jenkins-workspace' in x['value'])
record={'artifact':str(p),'sha256':hashlib.sha256(b).hexdigest(),'bytes':len(b),'machine':hex(u16(pe+4)),'optional_magic':hex(u16(opt)),'image_base':hex(u64(opt+24)),'entry_rva':hex(u32(opt+16)),'entry_va':hex(u64(opt+24)+u32(opt+16)),'sections':sections,'cli_directory_rva':u32(dir_start+14*8),'imports':imports,'limits':'Static local PE parse, regular imports only; no delay-load traversal, execution, or call graph.'}
base=Path('outputs/foundation-package-evidence')
(base/'foundation-exe-pe-layout.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
(base/'foundation-exe-string-scan.json').write_text(json.dumps({'artifact':str(p),'sha256':record['sha256'],'bytes':len(b),'scan':'Exact ASCII and UTF-16LE printable byte runs >=5 characters, with original byte offsets; local heuristic, not REA inventory','matches':selected,'source_path_strings':source_paths},indent=2),encoding='utf-8')
print(json.dumps({'entry_va':record['entry_va'],'cli_rva':record['cli_directory_rva'],'sections':sections,'imports':{x['dll']:len(x['symbols']) for x in imports},'version':selected['utf-16le']['1.12.0.14']},indent=2))
