from pathlib import Path
import json,zipfile,struct,hashlib,re
root=Path(r'D:\steamtest\steamapps\common\Foundation'); base=Path('outputs/foundation-systems');base.mkdir(parents=True,exist_ok=True)
zips=[]
for p in sorted((root/'mods').glob('*.zip')):
 with zipfile.ZipFile(p) as z:
  members=[{'path':i.filename,'bytes':i.file_size,'compressed_bytes':i.compress_size,'crc32':f'{i.CRC:08x}'} for i in z.infolist()]
  scripts=[]
  for i in z.infolist():
   if i.filename.lower().endswith(('.lua','.json','.txt')):
    b=z.read(i);out=base/'mod-examples'/p.stem/i.filename;out.parent.mkdir(parents=True,exist_ok=True);out.write_bytes(b)
    scripts.append({'path':i.filename,'sha256':hashlib.sha256(b).hexdigest(),'artifact_path':out.as_posix()})
  zips.append({'path':str(p),'sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'members':members,'scripts':scripts})
notices=(root/'third-party-legal-notices.txt').read_text(encoding='utf-8-sig')
segments=re.split(r'^\*{20,}\s*$',notices.replace('\r',''),flags=re.M)
sections=[part.strip().splitlines() for part in segments[1::2] if part.strip()]
audio=[]
for p in sorted((root/'audio').iterdir()):
 with p.open('rb') as f:b=f.read(65536)
 record={'path':str(p.relative_to(root)),'bytes':p.stat().st_size,'header_hex':b[:64].hex()}
 if b[:4]==b'BKHD':
  chunks=[];off=0
  with p.open('rb') as f:
   while off+8<=p.stat().st_size:
    f.seek(off);head=f.read(8);size=struct.unpack_from('<I',head,4)[0];kind=head[:4].decode('ascii','replace');chunks.append({'kind':kind,'offset':off,'length':size});off+=8+size
  record['chunks']=chunks;record['chunks_end_equals_file_size']=off==p.stat().st_size
  record['bank_version']=struct.unpack_from('<I',b,8)[0];record['bank_id']=struct.unpack_from('<I',b,12)[0]
 audio.append(record)
langs={}
for d in sorted((root/'localization').iterdir()):
 if d.is_dir():
  files=[]
  for p in sorted(d.glob('*.json')):
   try:
    doc=json.loads(p.read_text(encoding='utf-8-sig'));files.append({'path':str(p.relative_to(root)),'keys':list(doc)[:30],'sha256':hashlib.sha256(p.read_bytes()).hexdigest()})
   except Exception as e:files.append({'path':str(p.relative_to(root)),'error':str(e)})
  langs[d.name]=files
raw_snippets=(root/'mods/vs-code-snippets.json').read_text(encoding='utf-8-sig')
# The shipped VS Code snippet file contains trailing commas (JSONC).
parts=[];inside=False;escaped=False
for index,char in enumerate(raw_snippets):
 if inside:
  parts.append(char)
  if escaped: escaped=False
  elif char=='\\': escaped=True
  elif char=='"': inside=False
 else:
  if char=='"': inside=True
  if char==',' and raw_snippets[index+1:].lstrip().startswith(('}',']')): continue
  parts.append(char)
snippets=json.loads(''.join(parts))
summary={'mod_examples':zips,'legal_notice_components':[{'name':part[0],'header':part} for part in sections],'audio_containers':audio,'localization':langs,'snippet_count':len(snippets),'snippet_prefixes':[v.get('prefix') for v in snippets.values() if isinstance(v,dict)]}
(base/'shipped-systems-inventory.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False),encoding='utf-8')
print(json.dumps({'zip_members':{Path(z['path']).name:len(z['members']) for z in zips},'script_files':sum(len(z['scripts']) for z in zips),'legal_components':len(sections),'audio':audio,'languages':len(langs),'localization_json':sum(len(v) for v in langs.values()),'snippets':len(snippets)},indent=2))
