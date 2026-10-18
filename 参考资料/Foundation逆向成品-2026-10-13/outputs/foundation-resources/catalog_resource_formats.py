from pathlib import Path
import json,struct,csv,collections,zipfile,hashlib
base=Path('outputs/foundation-resources');out=base/'format-catalog.json';rows=json.loads((base/'package-resource-manifest.json').read_text(encoding='utf-8'));counts=collections.Counter()
for row in rows:
 p=base/row['output'];b=p.open('rb').read(32);ext=Path(row['resource']).suffix.lower();fmt='opaque'
 if b.startswith(b'\x89PNG\r\n\x1a\n'):fmt='PNG'
 elif b.startswith((b'II*\0',b'MM\0*')):fmt='TIFF'
 elif b.startswith(b'#?RADIANCE'):fmt='Radiance-HDR-RGBE'
 elif b.startswith(b'S3TCDXT'):fmt='Hurricane-DXT-cache'
 elif b.startswith(b'OTTO'):fmt='OpenType-CFF'
 elif b.startswith(b'\0\1\0\0'):fmt='TrueType'
 elif b.startswith(b'\x1aE\xdf\xa3'):fmt='EBML-WebM'
 elif b.startswith(b'\xff\xd8\xff'):fmt='JPEG'
 elif ext in ['.fragment','.vertex','.glsl','.tcs','.tes','.shaderpackage']:fmt='shader-source'
 elif ext in ['.lua','.txt']:fmt='text-source'
 elif ext=='.geo':fmt='Houdini-JSON-geometry'
 elif len(b)>=12 and struct.unpack_from('<III',b)==(2,0,row['bytes']-12):fmt='Hurricane-v2-serialized'
 elif row['resource'].lower().endswith('.fbx.data-xbin.meta'):fmt='Hurricane-model-buffer-cache'
 elif ext=='.fbx':fmt='Hurricane-model-metadata'
 elif row['resource'].endswith('.cache.meta'):fmt='Hurricane-font-cache'
 elif row['bytes']==0:fmt='empty-placeholder'
 row['detected_format']=fmt;row['file_extension']=ext;row['extension_matches_standard_format']=fmt not in ['PNG','JPEG','TIFF','OpenType-CFF','TrueType'] or ext in {'PNG':['.png'],'JPEG':['.jpg','.jpeg'],'TIFF':['.tif','.tiff'],'OpenType-CFF':['.otf'],'TrueType':['.ttf']}[fmt];counts[fmt]+=1
out.write_text(json.dumps(rows,indent=2,ensure_ascii=False),encoding='utf-8')
with (base/'format-catalog.csv').open('w',newline='',encoding='utf-8') as f:
 w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
opaque=[r for r in rows if r['detected_format']=='opaque'];(base/'format-summary.json').write_text(json.dumps({'total':len(rows),'formats':dict(counts),'unclassified':opaque,'extension_mismatches':sum(not r['extension_matches_standard_format'] for r in rows),'signature_precedence':True,'limits':'Detected formats have signature/range evidence; classifications do not establish all original editor metadata or execution.'},indent=2),encoding='utf-8')
# Recover all ZIP members beyond previously selected Lua examples.
mods=[]
for p in (base/'loose/mods').glob('*.zip'):
 root=(base/'mod-examples-complete'/p.stem).resolve();root.mkdir(parents=True,exist_ok=True)
 with zipfile.ZipFile(p) as z:
  for e in z.infolist():
   dest=(root/e.filename).resolve()
   if not dest.is_relative_to(root):raise ValueError('Invalid zip path')
   if e.is_dir():dest.mkdir(parents=True,exist_ok=True);continue
   dest.parent.mkdir(parents=True,exist_ok=True);b=z.read(e);dest.write_bytes(b);assert dest.read_bytes()==b
   mods.append({'zip':p.name,'member':e.filename,'bytes':len(b),'sha256':hashlib.sha256(b).hexdigest(),'output':dest.relative_to(base.resolve()).as_posix()})
(base/'mod-zip-export-manifest.json').write_text(json.dumps(mods,indent=2),encoding='utf-8');print(json.dumps({'formats':dict(counts),'opaque':[(r['resource'],r['bytes']) for r in opaque],'mod_members':len(mods)},indent=2))
