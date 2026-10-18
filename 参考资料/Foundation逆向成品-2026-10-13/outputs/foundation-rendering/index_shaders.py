from pathlib import Path
import json,re,hashlib,collections
root=Path('outputs/foundation-resources/packages');out=Path('outputs/foundation-rendering');out.mkdir(parents=True,exist_ok=True);rows=[];include_edges=[];uniforms=collections.Counter();errors=[]
for p in sorted(root.rglob('*')):
 if p.suffix.lower() not in ['.vertex','.fragment','.glsl','.tcs','.tes','.shaderpackage']:continue
 b=p.read_bytes()
 try:s=b.decode('utf-8-sig');encoding='utf-8-sig'
 except UnicodeDecodeError:s=b.decode('cp1252');encoding='cp1252-fallback-comment-byte'
 includes=re.findall(r'^\s*#include\s*[<"]([^>"]+)[>"]',s,re.M);unis=re.findall(r'^\s*uniform\s+([\w]+)\s+([\w]+)([^;\n]*);',s,re.M);attrs=re.findall(r'^\s*(?:layout\([^)]*\)\s*)?(in|out)\s+(\w+)\s+(\w+)([^;\n]*);',s,re.M);defines=re.findall(r'^\s*#(?:if|ifdef|ifndef|elif|define)\s+([^\n]+)',s,re.M)
 rec={'source':p.relative_to(root).as_posix(),'bytes':len(b),'sha256':hashlib.sha256(b).hexdigest(),'encoding_used':encoding,'includes':includes,'uniforms':[{'type':t,'name':n,'array_or_qualifier':suffix.strip()} for t,n,suffix in unis],'attributes':[{'direction':di,'type':t,'name':n,'suffix':su.strip()} for di,t,n,su in attrs],'preprocessor_conditions_and_defines':defines,'version_directive':re.findall(r'^\s*#version\s+([^\n]+)',s,re.M)};rows.append(rec);uniforms.update(n for t,n,suffix in unis)
 for i in includes:include_edges.append({'from':rec['source'],'target_literal':i,'resolved_candidates':[q.relative_to(root).as_posix() for q in root.rglob(Path(i).name)]})
(out/'shader-index.json').write_text(json.dumps(rows,indent=2),encoding='utf-8');(out/'includes.json').write_text(json.dumps(include_edges,indent=2),encoding='utf-8');summary={'source_count':len(rows),'by_extension':dict(collections.Counter(Path(r['source']).suffix for r in rows)),'uniform_name_count':len(uniforms),'top_uniforms':uniforms.most_common(25),'errors':errors,'limits':'Declared source syntax only, regex declaration inventory; includes and generated preprocessor need native loader context; not a GPU compile/execution result.'};(out/'summary.json').write_text(json.dumps(summary,indent=2),encoding='utf-8');print(json.dumps(summary,indent=2))
