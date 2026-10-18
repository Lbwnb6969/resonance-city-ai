"""Read-only geometry/animation, DXT, font, PNG and TIFF cache inventory."""
import collections,hashlib,json,math,pathlib,struct,zlib
OUT=pathlib.Path('outputs/foundation-serialization')
def sha(b):return hashlib.sha256(b).hexdigest()
class Reader:
 def __init__(self,b):self.b=b;self.c=0;self.ranges=[]
 def take(self,n,kind='field'):
  if n<0 or self.c+n>len(self.b):raise ValueError(f'Range outside cache at {self.c}, length {n}')
  off=self.c;v=self.b[off:off+n];self.c+=n
  if kind!='field':self.ranges.append({'kind':kind,'offset':off,'length':n,'sha256':sha(v)})
  return v
 def u32(self):return struct.unpack('<I',self.take(4))[0]
 def string(self):return self.take(self.u32()).decode('utf8')
 def done(self):
  if self.c!=len(self.b):raise ValueError(f'Trailing bytes {len(self.b)-self.c} at {self.c}')
def fbx(b):
 r=Reader(b);flag=r.take(1)[0];version=r.u32();unknown=r.u32();na=r.u32();animations=[]
 if flag!=0 or unknown!=0:raise ValueError('Unobserved cache header flags')
 for i in range(na):
  name=r.string();duration,tps=struct.unpack('<dd',r.take(16));channels=[]
  for j in range(r.u32()):
   cname=r.string();nk=r.u32();off=r.c;keys=r.take(nk*40,'animation_TRS_float32x10');trailer=r.take(13)
   channels.append({'name':cname,'uniform_key_count':nk,'key_offset':off,'first_key_TRS':list(struct.unpack_from('<10f',keys)) if nk else None,'post_keys_13bytes_hex':trailer.hex()})
  morphs=[]
  for j in range(r.u32()):
   mn=r.string();shape_names=[r.string() for _ in range(r.u32())];width=r.u32();nv=r.u32();off=r.c;values=r.take(nv*4,'morph_animation_weights_float32');indices=r.take(nv*4,'morph_animation_shape_indices_uint32')
   if (width and nv%width) or (not width and nv):raise ValueError('Morph frame width mismatch')
   morphs.append({'mesh':mn,'shape_names':shape_names,'width':width,'value_count':nv,'frame_count':nv//width if width else 0,'first_weights':list(struct.unpack_from('<'+'f'*min(width,nv),values)),'offset':off})
  animations.append({'name':name,'duration_seconds_candidate':duration,'ticks_per_second':tps,'channels':channels,'morph_channels':morphs})
 meshes=[]
 for i in range(r.u32()):
  name=r.string();bones=[]
  for j in range(r.u32()):
   bn=r.string();matrix=struct.unpack('<16f',r.take(64));bones.append({'name':bn,'matrix_float32x16':list(matrix)})
  flags=list(r.take(4));uv=r.u32();color=r.u32();reserved=r.u32();nv=r.u32();off=r.c;verts=r.take(nv*4,'mesh_interleaved_vertex_buffer');ni=r.u32();ioff=r.c;ids=r.take(ni*4,'mesh_indices_uint32');targets=[]
  stride=3+3*sum(flags[:3])+2+color+8*flags[3]
  if any(f not in [0,1] for f in flags) or nv%stride:raise ValueError('Vertex layout mismatch')
  nvertices=nv//stride;imin=imax=None
  if ni:
   idx=struct.unpack('<'+'I'*ni,ids);imin=min(idx);imax=max(idx)
   if imax>=nvertices:raise ValueError('Index outside vertex range')
  for j in range(r.u32()):
   tn=r.string();nt=r.u32();toff=r.c;data=r.take(nt*4,'mesh_morph_delta_float32')
   if nt!=nvertices*3:raise ValueError('Morph delta count mismatch')
   targets.append({'name':tn,'float_count':nt,'offset':toff,'first_position_delta':list(struct.unpack_from('<3f',data)) if nt else None})
  meshes.append({'name':name,'bones':bones,'attribute_flags_normals_tangent_bitangent_skin_candidate':flags,'auxiliary_u32_fields':[uv,color,reserved],'vertex_offset':off,'vertex_float_count':nv,'vertex_stride_bytes':stride*4,'vertex_count':nvertices,'first_vertex_float32_slots':list(struct.unpack_from('<'+'f'*stride,verts)) if nv else None,'index_count':ni,'index_offset':ioff,'index_min':imin,'index_max':imax,'morph_targets':targets})
 r.done();return {'format':'fbx-xbin','version':version,'flag_u8':flag,'reserved_u32':unknown,'animations':animations,'meshes':meshes,'payload_ranges':r.ranges,'coverage':'all fields and payloads consumed exactly to EOF; geometry indices and strides validated'}
def dxt(b):
 r=Reader(b)
 if r.take(7)!=b'S3TCDXT':raise ValueError('DXT signature')
 version=r.u32();fmt=r.take(1).decode('ascii');w=r.u32();h=r.u32();count=r.u32();levels=[]
 if fmt not in ['1','3','5']:raise ValueError('Unknown DXT format')
 if not 1<=count<=int(math.log2(max(w,h)))+1:raise ValueError('Mipmap count mismatch')
 for i in range(count):
  size=r.u32();mw=max(1,w>>i);mh=max(1,h>>i);expected=((mw+3)//4)*((mh+3)//4)*(8 if fmt=='1' else 16)
  if size!=expected:raise ValueError(f'Mip {i} size {size} != {expected}')
  off=r.c;payload=r.take(size,'DXT'+fmt+'_mip'+str(i));levels.append({'level':i,'width':mw,'height':mh,'offset':off,'length':size})
 r.done();return {'format':'S3TCDXT','version':version,'compression':'DXT'+fmt,'width':w,'height':h,'mipmaps':levels,'payload_ranges':r.ranges,'coverage':'all mip dimensions and block lengths validated to EOF'}
def png(b):
 r=Reader(b)
 if r.take(8)!=b'\x89PNG\r\n\x1a\n':raise ValueError('PNG signature')
 chunks=[];compressed=[];ihdr=None
 while r.c<len(b):
  n=struct.unpack('>I',r.take(4))[0];tag=r.take(4);off=r.c;data=r.take(n,'PNG_'+tag.decode('ascii'));crc=struct.unpack('>I',r.take(4))[0]
  if zlib.crc32(tag+data)!=crc:raise ValueError('PNG CRC mismatch')
  chunks.append({'tag':tag.decode('ascii'),'offset':off,'length':n})
  if tag==b'IHDR':ihdr=struct.unpack('>IIBBBBB',data)
  if tag==b'IDAT':compressed.append(data)
  if tag==b'IEND':break
 r.done();raw=zlib.decompress(b''.join(compressed));w,h,depth,color,comp,filtering,interlace=ihdr
 if interlace==0:
  row=(w*depth*{0:1,2:3,3:1,4:2,6:4}[color]+7)//8
  if len(raw)!=(row+1)*h:raise ValueError('PNG scanline byte count')
 return {'format':'PNG','width':w,'height':h,'bit_depth':depth,'color_type':color,'interlace':interlace,'chunks':chunks,'decompressed_bytes':len(raw),'coverage':'chunk bounds, all CRCs, zlib and scanline length validated'}
def tiff(b):
 if b[:4]!=b'II*\0':raise ValueError('Unsupported TIFF endian/version')
 c=struct.unpack_from('<I',b,4)[0];n=struct.unpack_from('<H',b,c)[0];fields={};sizes={1:1,2:1,3:2,4:4,5:8,6:1,7:1,8:2,9:4,10:8,11:4,12:8}
 if c+2+n*12+4>len(b):raise ValueError('TIFF IFD bounds')
 for i in range(n):
  tag,kind,count,ptr=struct.unpack_from('<HHII',b,c+2+i*12);length=count*sizes[kind];off=c+2+i*12+8 if length<=4 else ptr
  if off+length>len(b):raise ValueError('TIFF value bounds')
  raw=b[off:off+length];val=list(struct.unpack('<'+{1:'B',3:'H',4:'I',11:'f',12:'d'}.get(kind,'B')*(count if kind in [1,3,4,11,12] else length),raw));fields[tag]=val
 nxt=struct.unpack_from('<I',b,c+2+n*12)[0]
 if nxt:raise ValueError('Unobserved multi-IFD TIFF')
 strips=[];comp=fields.get(259,[1])[0]
 for off,size in zip(fields[273],fields[279]):
  if off+size>len(b):raise ValueError('TIFF strip bounds')
  data=b[off:off+size];raw=zlib.decompress(data) if comp in [8,32946] else data
  strips.append({'offset':off,'length':size,'decompressed_length':len(raw),'sha256':sha(data)})
 expected=fields[256][0]*fields[257][0]*sum(fields[258])//8
 if sum(s['decompressed_length'] for s in strips)!=expected:raise ValueError('TIFF sample buffer length')
 return {'format':'TIFF','ifd_offset':c,'tags':fields,'strips':strips,'width':fields[256][0],'height':fields[257][0],'compression':comp,'coverage':'IFD tags/value/strip bounds and decompressed pixel byte count validated'}
def font(b):
 r=Reader(b);version=r.u32();digest=r.take(33)
 if digest[-1:]!=b'\0' or any(c not in b'0123456789abcdef' for c in digest[:-1]):raise ValueError('Font digest')
 x=r.u32();y=r.u32();row=r.u32();flag=r.take(1)[0];ns=r.u32();nm=r.u32();sizes=[r.u32() for _ in range(ns)];nr=r.u32();rectoff=r.c;rectbytes=r.take(nr*18,'glyph_rectangles_u16_4xu32');rects=[struct.unpack_from('<HIIII',rectbytes,j*18) for j in range(nr)];moff=r.c;stride=2+ns*28;metrics=r.take(nm*stride,'glyph_metrics_u16_7xf32_per_size');glyphs=[struct.unpack_from('<H'+'f'*(7*ns),metrics,j*stride) for j in range(nm)]
 r.done();return {'format':'font-cache','version':version,'declared_hash_string':digest[:-1].decode(),'atlas_cursor_x_candidate':x,'atlas_cursor_y_candidate':y,'atlas_row_height_candidate':row,'flag':flag,'font_sizes':sizes,'rectangle_count':nr,'metrics_count':nm,'rectangles_offset':rectoff,'metrics_offset':moff,'metric_stride_bytes':stride,'first_rectangle':list(rects[0]) if nr else None,'first_metric_record':list(glyphs[0]) if nm else None,'character_code_range':[min(g[0] for g in glyphs),max(g[0] for g in glyphs)] if nm else None,'payload_ranges':r.ranges,'coverage':'glyph size list, rectangle and metrics arrays consumed exactly to EOF'}
def main():
 rows=[r for r in json.load(open(OUT/'resource-status.json',encoding='utf8')) if r['status']=='other_format'];results=[];errors=[];tot=collections.Counter();counts=collections.Counter()
 for r in rows:
  with open(r['package'],'rb') as h:h.seek(r['absolute_offset']);b=h.read(r['length'])
  fn=fbx if r['resource'].lower().endswith('.fbx.data-xbin.meta') else dxt if b.startswith(b'S3TCDXT') else png if b.startswith(b'\x89PNG') else tiff if b.startswith(b'II*\0') else font if r['resource'].endswith('.cache.meta') else None
  try:
   if fn is None:raise ValueError('Unrecognized cache format')
   d=fn(b);results.append({**r,'cache_status':'decoded','cache':d});tot[d['format']]+=1
   if d['format']=='fbx-xbin':counts['animations']+=len(d['animations']);counts['meshes']+=len(d['meshes']);counts['vertices']+=sum(m['vertex_count'] for m in d['meshes']);counts['indices']+=sum(m['index_count'] for m in d['meshes'])
  except Exception as e:errors.append({**r,'error':str(e)})
 import gzip
 with gzip.open(OUT/'decoded-caches.jsonl.gz','wt',encoding='utf8',compresslevel=5) as f:
  for r in results:f.write(json.dumps(r,ensure_ascii=False,separators=(',',':'))+'\n')
 summary={'evidence_kind':'local-package-bytes','cache_count':len(rows),'parsed':dict(tot),'payload_totals':counts,'errors':errors,'limitations':['Animation 13-byte post-key fields, font metric component meanings and FBX header reserved field are retained without claiming all semantics.','DXT color blocks inventoried and validated by dimensions; no GPU execution or texture rendering.','FBX vertices, matrices, morphs, and animation key samples are decoded; full source FBX reconstruction not attempted.']}
 (OUT/'cache-validation-summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2),encoding='utf8')
 chosen={}
 for r in results:
  key=r['cache']['format']
  if key not in chosen:chosen[key]=r
  if key=='fbx-xbin' and 'A_AGR_Chick_Eating_01A' in r['resource']:chosen['animation-xbin']=r
 (OUT/'cache-examples.json').write_text(json.dumps(chosen,ensure_ascii=False,indent=2),encoding='utf8');print(json.dumps({**summary,'errors':len(errors),'error_preview':errors[:3]},ensure_ascii=False))
if __name__=='__main__':main()
