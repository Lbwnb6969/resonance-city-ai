from pathlib import Path
exec(Path(__file__).with_name('select_native.py').read_text(encoding='utf-8').split('pat=re.compile')[0])
u16=lambda o:struct.unpack_from('<H',b,o)[0];u32=lambda o:struct.unpack_from('<I',b,o)[0];u64=lambda o:struct.unpack_from('<Q',b,o)[0]
pe=u32(0x3c); opt=pe+24; r=u32(opt+112+8); pos=va_off(base+r); imports={}
while any(b[pos:pos+20]):
 original,ts,fwd,name,first=struct.unpack_from('<IIIII',b,pos); th=va_off(base+(original or first));i=0
 while val:=u64(th+i*8):
  if not val & (1<<63):
   off=va_off(base+val)+2;s=b[off:b.index(0,off)].decode('ascii');imports[s]=base+first+i*8
  i+=1
 pos+=20
text=next(s for s in sec if s['name']=='.text');lo=text['raw_offset'];hi=lo+text['raw_size'];selected={};calls=[]
for m in re.finditer(rb'\xff\x15',b[lo:hi]):
 off=lo+m.start();a=off_va(off);dest=a+6+struct.unpack_from('<i',b,off+2)[0]
 if dest==imports.get('fread'):
  f=containing(a)
  if f and f[0]<0x140300000:
   prev=b[max(lo,off-100):off];read8=b'\xba\x08\x00\x00\x00' in prev
   calls.append({'call_va':hex(a),'function':hex(f[0]),'candidate_read8':read8})
   if read8:selected[hex(f[0])]=(f[0],f[1])
(out/'fread-8-candidates.json').write_text(json.dumps({'iat':hex(imports['fread']),'limit':'Direct IAT fread calls below VA 0x140300000; heuristic MOV EDX,8 within 100 preceding bytes requires decoded-function confirmation.','calls':calls},indent=2),encoding='utf-8')
(root/'work/native/read8-drill.tsv').write_text(''.join(hex(a)+'\t'+hex(e)+'\tCandidate fread with eight-byte field\n' for a,e in selected.values() if a!=0x140166160),encoding='utf-8')
print(json.dumps({'candidates':list(selected),'all_fread_calls':len(calls)},indent=2))
