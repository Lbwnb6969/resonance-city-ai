"""Cross-check container stage/local size/bindings against SPIR-V declarations."""
import argparse
from collections import Counter
import json
from pathlib import Path


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('containers',type=Path)
    ap.add_argument('reflection',type=Path)
    ap.add_argument('--output',type=Path,required=True)
    args=ap.parse_args();c=json.loads(args.containers.read_text('utf-8'));r=json.loads(args.reflection.read_text('utf-8'))
    refl={x['path']:x for x in r['records']};issues=[];modules=Counter();kinds=Counter();flags=Counter();local_sizes=Counter();bindings_checked=0;stages_checked=0;push_constants=Counter();variant_count=0;unused_pc=[]
    for file in c['records']:
        index=0
        for p in file['programs']:
            for v in p['variants']:
                variant_count+=1;push_constants[v['push_constant_size']]+=1
                meta={(m['descriptor_set'],d['binding']):d for m in v['modules'] for d in m['descriptors']}
                for m in v['modules']:
                    modules[m['module_index']]+=1;kinds.update(d['kind'] for d in m['descriptors'])
                for s in v['stages']:
                    key=file['path'].removesuffix('.precomp')+f'/{index:03d}.spv';index+=1;ref=refl[key];stages_checked+=1
                    expected={0:'GLCompute',1:'Vertex',2:'Fragment'}[s['container_stage']]
                    if [e['model'] for e in ref['entries']]!=[expected]:issues.append({'stage':key,'kind':'execution_model'})
                    if ref['sha256']!=s['sha256']:issues.append({'stage':key,'kind':'digest'})
                    if s['workgroup'] is not None:
                        local_sizes[str(s['workgroup'])]+=1
                        if not any(m['mode']=='LocalSize' and m['operands']==s['workgroup'] for m in ref['modes']):issues.append({'stage':key,'kind':'local_size'})
                    flags.update(x['flag'] for x in s['vertex_inputs'])
                    for x in ref['variables']:
                        if 'Binding' in x and 'DescriptorSet' in x:
                            bindings_checked+=1
                            if (x['DescriptorSet'],x['Binding']) not in meta:issues.append({'stage':key,'kind':'missing_metadata_binding','variable':x})
                    has_pc=any(x['storage_class']=='PushConstant' for x in ref['variables'])
                    if has_pc and v['push_constant_size']==0:issues.append({'stage':key,'kind':'push_constant_missing_size'})
                    if not has_pc and v['push_constant_size']>0:unused_pc.append(key)
    result={'container_files':c['files'],'roundtrip_verified':c['roundtrip_verified'],'variant_count':variant_count,'stages_checked':stages_checked,'bindings_checked':bindings_checked,'issues':issues,'metadata_push_constant_not_used_by_stage':unused_pc,'module_index_counts':dict(modules),'descriptor_kind_counts':dict(kinds),'vertex_flag_counts':dict(flags),'workgroups':dict(local_sizes),'push_constant_sizes':dict(push_constants)}
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(result,ensure_ascii=False,indent=2));return bool(issues)


if __name__=='__main__':raise SystemExit(main())
