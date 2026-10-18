from pathlib import Path
exec(Path(__file__).with_name('select_native.py').read_text(encoding='utf-8').split('pat=re.compile')[0])
pat=re.compile(r'GamCPrimitivePropertySerializer.*::read|GamCDoublePropertySerializer::read|GamCAssetManager::buildSerializer|data.xbin|GamCFloatPropertySerializer::read')
strings=[]
for m in re.finditer(rb'[\x20-\x7e]{5,}',b):
 s=m.group().decode()
 if pat.search(s) and len(s)<700:strings.append({'offset':m.start(),'va':hex(off_va(m.start())),'value':s,'xrefs':[]})
targets={int(x['va'],16):x for x in strings}
text=next(s for s in sec if s['name']=='.text');lo=text['raw_offset'];hi=lo+text['raw_size']
for m in re.finditer(rb'[\x48-\x4f][\x8d\x8b][\x05\x0d\x15\x1d\x25\x2d\x35\x3d]',b[lo:hi]):
 off=lo+m.start();addr=off_va(off);dest=addr+7+struct.unpack_from('<i',b,off+3)[0]
 if dest in targets:
  f=containing(addr);targets[dest]['xrefs'].append({'instruction':hex(addr),'function':hex(f[0]) if f else None,'end_exclusive':hex(f[1]) if f else None})
selected={}
for s in strings:
 for x in s['xrefs']:
  if x['function']:selected.setdefault(x['function'],{'start':x['function'],'end_exclusive':x['end_exclusive'],'seeds':[]})['seeds'].append(s['value'])
for a,label in [(0x14015a8e0,'Package checksum stream helper'),(0x14012e6f0,'checksum digest formatting helper'),(0x14012eae0,'checksum comparison helper'),(0x1401bb540,'GamCAssetManager package index reader caller'),(0x140151410,'package first entry helper'),(0x140151790,'package next sibling helper'),(0x140151220,'package entry name helper'),(0x140151340,'package child entry helper')]:
 f=containing(a)
 if f:selected[hex(a)]={'start':hex(a),'end_exclusive':hex(f[1]),'seeds':[label]}
# Locate the serializer vtable from exact stored pointer to readFromData.
rd=next(s for s in sec if s['name']=='.rdata'); found=[];needle=struct.pack('<Q',0x140164af0)
for m in re.finditer(re.escape(needle),b[rd['raw_offset']:rd['raw_offset']+rd['raw_size']]):
 off=rd['raw_offset']+m.start(); rows=[]
 for slot in range(-8,36):
  at=off+slot*8;a=struct.unpack_from('<Q',b,at)[0];f=containing(a)
  if f and f[0]==a:
   rows.append({'va':hex(off_va(at)),'function':hex(a),'relative_slot':slot})
   if -3<=slot<=28:selected[hex(a)]={'start':hex(a),'end_exclusive':hex(f[1]),'seeds':['Serializer virtual method slot relative to readFromData '+str(slot)]}
 found.append({'readFromData_pointer_va':hex(off_va(off)),'neighbors':rows})
(out/'drill-seeds.json').write_text(json.dumps({'strings':strings,'vtable_candidates':found,'explicit_helpers':'Addresses obtained by direct calls from original focused decompilation; vtable pointer neighbors remain candidate slots until function behavior confirms them.'},indent=2),encoding='utf-8')
(root/'work/native/drill-seeds.tsv').write_text(''.join(x['start']+'\t'+x['end_exclusive']+'\t'+' | '.join(x['seeds'])+'\n' for x in selected.values()),encoding='utf-8')
print(json.dumps({'selected_count':len(selected),'selected':list(selected.values()),'vtables':found},indent=2))
