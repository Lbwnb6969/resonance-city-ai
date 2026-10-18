from pathlib import Path
import struct, json, re, hashlib, bisect
root=Path.cwd().resolve()
out=root/'outputs/foundation-native-analysis'; out.mkdir(parents=True,exist_ok=True)
p=Path(r'D:\steamtest\steamapps\common\Foundation\foundation.exe'); b=p.read_bytes()
layout=json.loads((root/'outputs/foundation-package-evidence/foundation-exe-pe-layout.json').read_text())
base=int(layout['image_base'],16); sec=layout['sections']
def off_va(off):
 for s in sec:
  if s['raw_offset']<=off<s['raw_offset']+s['raw_size']: return base+s['rva']+off-s['raw_offset']
def va_off(va):
 for s in sec:
  if base+s['rva']<=va<base+s['rva']+s['raw_size']:return s['raw_offset']+va-base-s['rva']
pdata=next(s for s in sec if s['name']=='.pdata')
func=[]
for off in range(pdata['raw_offset'],pdata['raw_offset']+pdata['virtual_size']-11,12):
 a,e,u=struct.unpack_from('<III',b,off)
 if a and e>a:func.append((base+a,base+e,base+u))
func.sort(); starts=[x[0] for x in func]
def containing(va):
 i=bisect.bisect_right(starts,va)-1
 return func[i] if i>=0 and va<func[i][1] else None
pat=re.compile(r'ComCPackage|ComCPackager|ComCBinarySerializer|GamCLuaManager|MD5|Invalid package|package.*(?:corrupt|checksum|version)|(?:checksum|corrupt).*package',re.I)
strings=[]
for m in re.finditer(rb'[\x20-\x7e]{5,}',b):
 s=m.group().decode()
 if pat.search(s) and len(s)<700:strings.append({'offset':m.start(),'va':hex(off_va(m.start())),'value':s,'xrefs':[]})
targets={int(x['va'],16):x for x in strings}
text=next(s for s in sec if s['name']=='.text')
# Candidate RIP-relative LEA/MOV references. Validate these via Ghidra decoding.
lo=text['raw_offset']; hi=lo+text['raw_size']
for m in re.finditer(rb'[\x48-\x4f][\x8d\x8b][\x05\x0d\x15\x1d\x25\x2d\x35\x3d]',b[lo:hi]):
 off=lo+m.start(); addr=off_va(off); dest=addr+7+struct.unpack_from('<i',b,off+3)[0]
 if dest in targets:
  f=containing(addr); targets[dest]['xrefs'].append({'instruction':hex(addr),'function':hex(f[0]) if f else None,'end_exclusive':hex(f[1]) if f else None})
record={'artifact':str(p),'sha256':hashlib.sha256(b).hexdigest(),'image_base':hex(base),'pdata_records':len(func),'selection':'Exact ASCII strings matching package/serializer/LuaManager/MD5, candidate xrefs matched from RIP-relative LEA/MOV byte patterns then bounded by .pdata RUNTIME_FUNCTION entries. Xrefs require Ghidra decoding verification.','strings':strings}
(out/'native-seeds.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
selected={}
for s in strings:
 for x in s['xrefs']:
  if x['function']:selected.setdefault(x['function'],{'start':x['function'],'end_exclusive':x['end_exclusive'],'seeds':[]})['seeds'].append(s['value'])
(root/'work/native/seeds.tsv').write_text(''.join(x['start']+'\t'+x['end_exclusive']+'\t'+' | '.join(x['seeds'])+'\n' for x in selected.values()),encoding='utf-8')
(out/'pdata-functions.json').write_text(json.dumps([{'start':hex(a),'end_exclusive':hex(e),'unwind':hex(u)} for a,e,u in func]),encoding='utf-8')
print(json.dumps({'strings':len(strings),'xref_functions':len(selected),'seeds':list(selected.values())},indent=2))
