from pathlib import Path
import json,struct,numpy as np,re,hashlib,zlib,sys
from PIL import Image
sys.path.insert(0,str(Path('outputs/foundation-serialization/scripts').resolve()))
from decode_caches import tiff
base=Path('outputs/foundation-resources'); rows=json.loads((base/'format-catalog.json').read_text(encoding='utf-8'));out=Path('outputs/foundation-textures');recovered=[];errors=[]
for r in rows:
 if r['detected_format'] not in ['PNG','TIFF','Radiance-HDR-RGBE']:continue
 # Create standard extension variants only for mislabelled standard pictures, plus HDR float arrays.
 if r['extension_matches_standard_format'] and r['detected_format']!='Radiance-HDR-RGBE':continue
 try:
  p=base/r['output'];b=p.read_bytes();relative=Path(r['output']).relative_to('packages');ext={'PNG':'.png','TIFF':'.tiff','Radiance-HDR-RGBE':'.hdr'}[r['detected_format']];target=out/'standard-images'/relative;target=target.with_suffix(target.suffix+ext);target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(b);assert target.read_bytes()==b
  rec={'source':r['output'],'source_sha256':r['sha256'],'format':r['detected_format'],'standard_extension_copy':target.relative_to(out).as_posix(),'byte_exact':True}
  if r['detected_format']=='Radiance-HDR-RGBE':
   c=b.index(b'\n\n')+2;e=b.index(b'\n',c);orientation=b[c:e].decode();m=re.fullmatch(r'-Y (\d+) \+X (\d+)',orientation);assert m;h,w=map(int,m.groups());c=e+1;rgbe=np.zeros((h,w,4),dtype=np.uint8)
   for y in range(h):
    assert b[c:c+2]==b'\x02\x02' and int.from_bytes(b[c+2:c+4],'big')==w;c+=4
    for ch in range(4):
     x=0
     while x<w:
      count=b[c];c+=1
      if count>128:n=count-128;rgbe[y,x:x+n,ch]=b[c];c+=1
      else:n=count;rgbe[y,x:x+n,ch]=np.frombuffer(b[c:c+n],dtype=np.uint8);c+=n
      assert n>0 and x+n<=w;x+=n
   assert c==len(b);scale=np.ldexp(np.ones((h,w),np.float32),rgbe[:,:,3].astype(np.int32)-136);rgb=rgbe[:,:,:3].astype(np.float32)*scale[:,:,None];rgb[rgbe[:,:,3]==0]=0
   hdr=target.with_suffix('.linear.npy');np.save(hdr,rgb);assert np.array_equal(np.load(hdr),rgb)
   preview=target.with_suffix('.preview.png');ldr=np.clip(rgb/(1+rgb),0,1)**(1/2.2);Image.fromarray(np.round(ldr*255).astype(np.uint8)).save(preview);rec.update({'width':w,'height':h,'hdr_array':hdr.relative_to(out).as_posix(),'hdr_array_sha256':hashlib.sha256(hdr.read_bytes()).hexdigest(),'preview':preview.relative_to(out).as_posix(),'preview_transform':'Reinhard per-channel rgb/(1+rgb), gamma 1/2.2; preview only, original HDR is authoritative','full_rgbe_scanlines_to_eof':True})
  elif r['detected_format']=='TIFF':
   meta=tiff(b);tags=meta['tags'];w,h=meta['width'],meta['height']
   assert tags[258]==[32,32,32] and tags[339]==[3,3,3] and tags[284]==[1] and tags.get(317,[1])==[1] and tags[274]==[1] and meta['compression'] in [8,32946]
   raw=b''.join(zlib.decompress(b[s['offset']:s['offset']+s['length']]) for s in meta['strips']);rgb=np.frombuffer(raw,dtype='<f4').reshape(h,w,3);assert np.isfinite(rgb).all()
   hdr=target.with_suffix('.linear.npy');np.save(hdr,rgb);assert np.load(hdr).tobytes()==raw
   preview=target.with_suffix('.preview.png');ldr=np.clip(rgb/(1+rgb),0,1)**(1/2.2);Image.fromarray(np.round(ldr*255).astype(np.uint8)).save(preview);rec.update({'width':w,'height':h,'hdr_array':hdr.relative_to(out).as_posix(),'hdr_array_sha256':hashlib.sha256(hdr.read_bytes()).hexdigest(),'preview':preview.relative_to(out).as_posix(),'preview_transform':'Reinhard per-channel rgb/(1+rgb), gamma 1/2.2; preview only, float TIFF is authoritative','float_samples_byte_exact':True,'tiff_tags':tags})
  else:
   with Image.open(target) as im:im.verify()
  recovered.append(rec)
 except Exception as e:errors.append({'source':r['output'],'error':str(e)})
(out/'standard-image-manifest.json').write_text(json.dumps(recovered,indent=2),encoding='utf-8');(out/'standard-image-summary.json').write_text(json.dumps({'recovered':len(recovered),'by_format':{k:sum(r['format']==k for r in recovered) for k in ['PNG','TIFF','Radiance-HDR-RGBE']},'errors':errors},indent=2),encoding='utf-8');print(json.dumps({'recovered':len(recovered),'hdr':sum(r['format']=='Radiance-HDR-RGBE' for r in recovered),'errors':errors},indent=2))
