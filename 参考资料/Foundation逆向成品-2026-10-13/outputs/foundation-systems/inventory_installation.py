from pathlib import Path
import json,hashlib,collections
root=Path(r'D:\steamtest\steamapps\common\Foundation');base=Path('outputs/foundation-systems'); rows=[]
for p in sorted(root.rglob('*')):
 if not p.is_file():continue
 h=hashlib.sha256()
 with p.open('rb') as f:
  while b:=f.read(1024*1024):h.update(b)
 rows.append({'path':p.relative_to(root).as_posix(),'bytes':p.stat().st_size,'sha256':h.hexdigest()})
manifest={'root':str(root),'count':len(rows),'bytes':sum(r['bytes'] for r in rows),'files':rows}
(base/'installation-manifest.json').write_text(json.dumps(manifest,indent=2),encoding='utf-8')
old=json.loads(Path('outputs/foundation-package-evidence/root-file-inventory.json').read_text(encoding='utf-8'));lookup={r['path']:r for r in rows}
assert all(lookup[x['path']]['sha256']==x['sha256'] and lookup[x['path']]['bytes']==x['bytes'] for x in old)
(base/'source-integrity-check.json').write_text(json.dumps({'baseline':'../foundation-package-evidence/root-file-inventory.json','baseline_root_files':len(old),'all_root_hashes_unchanged':True,'all_root_sizes_unchanged':True,'other_files':'Current complete installation manifest; no earlier full-tree baseline exists.'},indent=2),encoding='utf-8')
print(json.dumps({'files':manifest['count'],'bytes':manifest['bytes'],'root_baseline_verified':len(old),'extensions':dict(collections.Counter(Path(r['path']).suffix for r in rows))},indent=2))
