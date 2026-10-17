"""Focused static memory/loop/math evidence for selected extracted SPIR-V modules."""
import argparse
from collections import Counter
import json
from pathlib import Path
import struct
from shader_spirv import reflect


def analyze(path,grammar,ext):
    rec,ins=reflect(path.read_bytes(),grammar)
    names={int(k):v for k,v in rec['names'].items()};definitions={};loops=[];math=Counter()
    for i in ins:
        a=i['operands'];op=i['opname']
        if op in ('OpAccessChain','OpInBoundsAccessChain','OpPtrAccessChain','OpBitcast','OpCopyObject','OpLoad','OpSampledImage'):definitions[a[1]]=i
        if op=='OpLoopMerge':loops.append({'offset':i['offset'],'merge_label':a[0],'continue_label':a[1],'control':a[2:]})
        if op=='OpExtInst':math[ext.get(a[3],str(a[3]))]+=1
    def pointer(pid,seen=None):
        seen=set() if seen is None else seen
        if pid in seen:return f'%{pid}'
        seen.add(pid)
        if pid in names:return f"%{pid}:{names[pid]}"
        i=definitions.get(pid)
        if i:
            if i['opname'] in ('OpAccessChain','OpInBoundsAccessChain','OpPtrAccessChain'):
                return pointer(i['operands'][2],seen)+'['+','.join(f'%{x}' for x in i['operands'][3:])+']'
            if i['opname'] in ('OpBitcast','OpCopyObject'):return pointer(i['operands'][2],seen)
            if i['opname'] in ('OpLoad','OpSampledImage'):return pointer(i['operands'][2],seen)
        return f'%{pid}'
    accesses=[]
    for i in ins:
        a=i['operands'];op=i['opname'];pid=None
        if op=='OpLoad':pid=a[2]
        elif op=='OpStore':pid=a[0]
        elif op.startswith('OpAtomic'):pid=a[2]
        elif op=='OpImageWrite':pid=a[0]
        elif op in ('OpImageRead','OpImageFetch','OpImageSampleExplicitLod','OpImageSampleImplicitLod'):pid=a[2]
        if pid is not None:accesses.append({'offset':i['offset'],'opname':op,'pointer':pointer(pid),'operands':a})
    interesting_types={k:v for k,v in rec['types'].items() if v.get('name') and any(x.lower() in v['name'].lower() for x in ['Bvh','Triangle','Terrain','Grass','Blade','Stroke','Ray','Instance','Draw','Push','RootFinder'])}
    constants={}
    for cid,c in rec['constants'].items():
        if c['opname']=='OpConstant' and len(c['operands'])==1:
            t=rec['types'][c['type_id']];bits=c['operands'][0]
            if t['opname']=='OpTypeFloat' and t['operands']==[32]:value=struct.unpack('<f',struct.pack('<I',bits))[0]
            elif t['opname']=='OpTypeInt' and t['operands']==[32,1]:value=struct.unpack('<i',struct.pack('<I',bits))[0]
            else:value=bits
            constants[cid]={'bits':bits,'value':value,'type':t}
    return {'path':str(path),'sha256':rec['sha256'],'entries':rec['entries'],'modes':rec['modes'],'capabilities':rec['capabilities'],'opcounts':rec['opcounts'],'glsl_math':dict(math),'bindings':[v for v in rec['variables'] if 'Binding' in v],'interesting_types':interesting_types,'names':rec['names'],'constants':constants,'loops':loops,'memory_accesses':accesses}


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('root',type=Path);ap.add_argument('--match',action='append',required=True);ap.add_argument('--output',type=Path,required=True)
    args=ap.parse_args();base=Path(__file__).resolve().parent.parent/'evidence';grammar=json.loads((base/'shader_spirv.core.grammar.json').read_text('utf-8'));eg=json.loads((base/'shader_extinst.glsl.std.450.grammar.json').read_text('utf-8'));ext={x['opcode']:x['opname'] for x in eg['instructions']}
    records=[analyze(p,grammar,ext) for p in sorted(args.root.rglob('*.spv')) if any(m in p.as_posix() for m in args.match)]
    args.output.write_text(json.dumps({'search_matches':args.match,'count':len(records),'records':records},ensure_ascii=False,indent=2),encoding='utf-8');print('focused modules',len(records))


if __name__=='__main__':main()
