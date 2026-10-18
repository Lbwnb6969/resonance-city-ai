"""Lossless export of every indexed Foundation resource and shipped loose file."""
from pathlib import Path,PurePosixPath
import argparse,hashlib,json,shutil,os

def stream_copy(src,dst,length):
 h=hashlib.sha256();left=length
 with dst.open('wb') as out:
  while left:
   chunk=src.read(min(left,1024*1024))
   if not chunk:raise ValueError('Unexpected EOF')
   out.write(chunk);h.update(chunk);left-=len(chunk)
 with dst.open('rb') as f:
  verify=hashlib.file_digest(f,'sha256').hexdigest()
 if verify!=h.hexdigest():raise ValueError('Export SHA mismatch')
 return verify

def main():
 ap=argparse.ArgumentParser();ap.add_argument('--inventory',type=Path,default=Path('outputs/foundation-package-evidence/package-inventory.json'));ap.add_argument('--installation',type=Path,default=Path('outputs/foundation-systems/installation-manifest.json'));ap.add_argument('--out',type=Path,default=Path('outputs/foundation-resources'));args=ap.parse_args()
 inv=json.loads(args.inventory.read_text(encoding='utf-8'));installation=json.loads(args.installation.read_text(encoding='utf-8'));root=Path(installation['root']);args.out.mkdir(parents=True,exist_ok=True);all_rows=[];package_results=[]
 for pkg in inv:
  rel=Path(pkg['path']).relative_to(root);slug=rel.with_suffix('').as_posix().replace('/','__');folder=(args.out/'packages'/slug).resolve();folder.mkdir(parents=True,exist_ok=True)
  file_count=0;exported_bytes=0;entries=[]
  with open(pkg['path'],'rb') as source:
   for item in pkg['directories']:
    dest=(folder/item['path']).resolve()
    if not dest.is_relative_to(folder):raise ValueError('Invalid directory path')
    dest.mkdir(parents=True,exist_ok=True)
   for item in pkg['files']:
    dest=(folder/item['path']).resolve()
    if not dest.is_relative_to(folder):raise ValueError('Invalid file path')
    dest.parent.mkdir(parents=True,exist_ok=True);source.seek(item['absolute_offset']);sha=stream_copy(source,dest,item['length']);file_count+=1;exported_bytes+=item['length']
    entries.append({'package':rel.as_posix(),'resource':item['path'],'source_absolute_offset':item['absolute_offset'],'bytes':item['length'],'sha256':sha,'output':dest.relative_to(args.out.resolve()).as_posix()})
  package_results.append({'package':rel.as_posix(),'package_sha256':pkg['sha256'],'files':file_count,'exported_bytes':exported_bytes,'all_exported_file_hashes_reread_verified':True});all_rows.extend(entries)
  (args.out/'export-progress.json').write_text(json.dumps({'completed_packages':package_results,'complete':False},indent=2),encoding='utf-8');print(json.dumps(package_results[-1]),flush=True)
 loose=[]
 for item in installation['files']:
  # Source packages have been exported and already have immutable hash manifests.
  if item['path'].endswith('.package'):continue
  # Audio media recovery has its own branch; the original banks are still exported here.
  dest=args.out/'loose'/item['path'];dest.parent.mkdir(parents=True,exist_ok=True)
  with (root/item['path']).open('rb') as source:sha=stream_copy(source,dest,item['bytes'])
  if sha!=item['sha256']:raise ValueError('Loose file changed: '+item['path'])
  loose.append({'path':item['path'],'bytes':item['bytes'],'sha256':sha,'output':dest.relative_to(args.out).as_posix()})
 result={'source_root':str(root),'package_exports':package_results,'total_package_files':len(all_rows),'package_payload_bytes':sum(r['bytes'] for r in all_rows),'loose_files':len(loose),'loose_bytes':sum(r['bytes'] for r in loose),'verification':'Every exported file re-read and SHA-256 verified; loose file SHA matches full installation baseline; package payloads bound to original verified package digest/offset','limits':'Raw byte export; filenames and original formats preserved, not a declaration of source format compatibility.'}
 (args.out/'package-resource-manifest.json').write_text(json.dumps(all_rows,indent=2,ensure_ascii=False),encoding='utf-8');(args.out/'loose-file-manifest.json').write_text(json.dumps(loose,indent=2,ensure_ascii=False),encoding='utf-8');(args.out/'export-summary.json').write_text(json.dumps(result,indent=2),encoding='utf-8');(args.out/'export-progress.json').write_text(json.dumps({'complete':True,**result},indent=2),encoding='utf-8');print(json.dumps(result,indent=2),flush=True)
if __name__=='__main__':main()
