from pathlib import Path
import struct,json,hashlib,collections
from PIL import Image
root=Path('outputs/foundation-resources/packages');out=Path('outputs/foundation-textures');out.mkdir(parents=True,exist_ok=True);rows=[];errors=[]
for p in sorted(root.rglob('*')):
 if not p.is_file():continue
 with p.open('rb') as f:head=f.read(32)
 if not head.startswith(b'S3TCDXT'):continue
 try:
  b=p.read_bytes();version=struct.unpack_from('<I',b,7)[0];fmt=chr(b[11]);w,h,mips=struct.unpack_from('<III',b,12);c=24;parts=[];mipinfo=[]
  for level in range(mips):
   n=struct.unpack_from('<I',b,c)[0];c+=4;expected=((max(1,w>>level)+3)//4)*((max(1,h>>level)+3)//4)*(8 if fmt=='1' else 16)
   assert n==expected;mipinfo.append({'level':level,'bytes':n,'width':max(1,w>>level),'height':max(1,h>>level)});parts.append(b[c:c+n]);c+=n
  assert c==len(b)
  # DDS preserves compressed blocks exactly, adding only the standard container header.
  flags=0x1|0x2|0x4|0x1000|0x80000|(0x20000 if mips>1 else 0);caps=0x1000|(0x8|0x400000 if mips>1 else 0)
  header=struct.pack('<7I',124,flags,h,w,len(parts[0]),0,mips)+bytes(44)+struct.pack('<II4sIIIII',32,0x4,('DXT'+fmt).encode(),0,0,0,0,0)+struct.pack('<5I',caps,0,0,0,0)
  assert len(header)==124;dest=out/'dds'/p.relative_to(root);dest=dest.with_suffix(dest.suffix+'.dds');dest.parent.mkdir(parents=True,exist_ok=True);payload=b''.join(parts);dest.write_bytes(b'DDS '+header+payload)
  assert dest.read_bytes()[128:]==payload
  preview=out/'png'/p.relative_to(root);preview=preview.with_suffix(preview.suffix+'.png');preview.parent.mkdir(parents=True,exist_ok=True)
  with Image.open(dest) as im:
   assert im.size==(w,h);im.load();rgba=im.convert('RGBA');rgba.save(preview)
  with Image.open(preview) as im:assert im.size==(w,h);im.verify()
  rows.append({'source':p.relative_to(root).as_posix(),'source_sha256':hashlib.sha256(b).hexdigest(),'version':version,'format':'DXT'+fmt,'width':w,'height':h,'mipmaps':mipinfo,'dds':dest.relative_to(out).as_posix(),'dds_sha256':hashlib.sha256(dest.read_bytes()).hexdigest(),'png':preview.relative_to(out).as_posix(),'png_sha256':hashlib.sha256(preview.read_bytes()).hexdigest(),'dds_blocks_byte_exact':True})
 except Exception as e:errors.append({'source':str(p),'error':str(e)})
summary={'converted':len(rows),'errors':errors,'formats':dict(collections.Counter(r['format'] for r in rows)),'verification':'Every mip block length verified; compressed blocks copied exactly to DDS; top mip decoded by Pillow and PNG re-opened/verified','limits':'PNG is top mip preview only; DDS retains all source mip levels. No GPU shader execution or color-space inference.'}
(out/'manifest.json').write_text(json.dumps(rows,indent=2),encoding='utf-8');(out/'summary.json').write_text(json.dumps(summary,indent=2),encoding='utf-8');print(json.dumps(summary,indent=2))
