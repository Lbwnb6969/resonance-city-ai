import json
from pathlib import Path
base=Path('outputs/foundation-package-evidence')
inv=json.loads((base/'package-inventory.json').read_text()); reports=[]
for p in inv:
 items=sorted([dict(x,kind='directory') for x in p['directories']]+[dict(x,kind='file') for x in p['files']],key=lambda x:x['entry_offset'])
 stack=[];checked=0
 def close_at(end):
  global checked
  d=stack.pop(); assert d['skip_offset']==end,(p['path'],d['path'],d['skip_offset'],end)
  checked+=1
 for x in items:
  while stack and not x['path'].startswith(stack[-1]['path']+'/'):close_at(x['entry_offset'])
  if x['kind']=='directory':stack.append(x)
 while stack:close_at(p['data_section_offset'])
 reports.append({'package':p['path'],'directories_verified':checked,'skip_offset_semantics':'absolute index offset immediately after the last descendant'})
(base/'directory-skip-verification.json').write_text(json.dumps(reports,indent=2),encoding='utf-8')
print(json.dumps(reports,indent=2))
