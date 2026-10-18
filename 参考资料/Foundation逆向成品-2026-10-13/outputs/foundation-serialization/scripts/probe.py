import json,struct,collections,pathlib
INV=json.load(open('outputs/foundation-package-evidence/package-inventory.json',encoding='utf8'))
def structure(b):
 if struct.unpack_from('<III',b)!= (2,0,len(b)-12):raise ValueError('header mismatch')
 c=16; names=[]
 for i in range(struct.unpack_from('<I',b,12)[0]):
  e=b.index(0,c);names.append(b[c:e].decode('utf8'));c=e+1
 size,root=struct.unpack_from('<II',b,c);start=c+4;buf=b[start:]
 if size!=len(buf):raise ValueError('block size mismatch')
 records={}; pending=[('node',root)]
 while pending:
  kind,off=pending.pop()
  if not off:continue
  if off in records:raise ValueError('duplicate reference '+str(off))
  if kind=='node':
   name,sib,child,attr=struct.unpack_from('<IIII',buf,off)
   records[off]=(kind,name,sib,child,attr)
   pending.extend([('node',sib),('node',child),('attr',attr)])
  else:
   name,sib,tag=struct.unpack_from('<III',buf,off)
   records[off]=(kind,name,sib,tag)
   pending.append(('attr',sib))
  if name>=len(names):raise ValueError('name out of range')
 return names,buf,records
if __name__=='__main__':
 tags=collections.defaultdict(collections.Counter);samples=collections.defaultdict(list);errs=[];tot=collections.Counter()
 for pkg in INV:
  with open(pkg['path'],'rb') as h:
   for r in pkg['files']:
    if pathlib.Path(r['path']).suffix not in ['.data','.meta','.bt','.gui','.prefab','.scene']:continue
    h.seek(r['absolute_offset']);b=h.read(r['length'])
    if b[:4]!=b'\x02\0\0\0':tot['non-header']+=1;continue
    try:
     names,buf,recs=structure(b); offsets=sorted(recs)+[len(buf)]
     for i,off in enumerate(offsets[:-1]):
      rec=recs[off];end=offsets[i+1]
      if rec[0]=='attr':
       payload=buf[off+12:end];tag=rec[3];tags[tag][len(payload)]+=1
       if len(samples[tag])<10:samples[tag].append([r['path'],names[rec[1]],payload.hex(),repr(payload)])
      elif end-off!=16:raise ValueError('node gap '+str(end-off))
     tot['ok']+=1
    except Exception as e:errs.append([pkg['path'],r['path'],str(e)]);tot['failed']+=1
 print(json.dumps({'totals':tot,'tags':tags,'samples':samples,'errors':errs[:20]},indent=2))
