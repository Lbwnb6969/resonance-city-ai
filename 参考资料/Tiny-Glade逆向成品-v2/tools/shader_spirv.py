"""Reflect and list SPIR-V instructions using Khronos JSON grammar; no external binaries."""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import struct


def read_string(words):
    raw=struct.pack('<'+'I'*len(words),*words)
    end=raw.find(b'\0')
    if end < 0: raise ValueError('unterminated SPIR-V string')
    return raw[:end].decode('utf-8'),end//4+1


def reflect(data,grammar):
    if len(data)%4 or len(data)<20: raise ValueError('SPIR-V size')
    words=struct.unpack('<'+'I'*(len(data)//4),data)
    if words[0]!=0x07230203: raise ValueError('SPIR-V magic')
    opcodes={i['opcode']:i['opname'] for i in grammar['instructions']}
    enums={k['kind']:{int(e['value'],0) if isinstance(e['value'],str) else e['value']:e['enumerant'] for e in k.get('enumerants',[])} for k in grammar['operand_kinds']}
    enum=lambda kind,value:enums.get(kind,{}).get(value,str(value))
    instructions=[];counts=Counter();names={};member_names={};decorations=defaultdict(list);member_decorations=defaultdict(list)
    entries=[];modes=[];types={};variables=[];capabilities=[];extensions=[];sources=[];imports={};constants={};unknown=set()
    i=5
    while i<len(words):
        wc,opcode=words[i]>>16,words[i]&65535
        if wc==0 or i+wc>len(words):raise ValueError(f'invalid instruction at byte {i*4:#x}')
        a=list(words[i+1:i+wc]);name=opcodes.get(opcode,f'OpUnknown_{opcode}')
        if opcode not in opcodes:unknown.add(opcode)
        instructions.append({'offset':i*4,'opcode':opcode,'opname':name,'operands':a});counts[name]+=1
        if opcode==5:names[a[0]]=read_string(a[1:])[0]
        elif opcode==6:member_names[(a[0],a[1])]=read_string(a[2:])[0]
        elif opcode==15:
            text,n=read_string(a[2:]);entries.append({'model':enum('ExecutionModel',a[0]),'function_id':a[1],'name':text,'interfaces':a[2+n:]})
        elif opcode==16:modes.append({'function_id':a[0],'mode':enum('ExecutionMode',a[1]),'operands':a[2:]})
        elif opcode==17:capabilities.append(enum('Capability',a[0]))
        elif opcode==10:extensions.append(read_string(a)[0])
        elif opcode==3:sources.append({'language':enum('SourceLanguage',a[0]),'version':a[1],'operands':a[2:]})
        elif opcode==11:imports[a[0]]=read_string(a[1:])[0]
        elif 19<=opcode<=39 or name in ('OpTypeRayQueryKHR','OpTypeAccelerationStructureKHR'):
            types[a[0]]={'opname':name,'operands':a[1:]}
        elif opcode==59:variables.append({'type_id':a[0],'id':a[1],'storage_class':enum('StorageClass',a[2]),'initializer':a[3:]})
        elif opcode==71:decorations[a[0]].append({'decoration':enum('Decoration',a[1]),'operands':a[2:]})
        elif opcode==72:member_decorations[(a[0],a[1])].append({'decoration':enum('Decoration',a[2]),'operands':a[3:]})
        elif opcode in (41,42,43,44,48,49,50,51):constants[a[1]]={'opname':name,'type_id':a[0],'operands':a[2:]}
        i+=wc
    for v in variables:
        v['name']=names.get(v['id']);v['decorations']=decorations[v['id']]
        for d in v['decorations']:
            if d['decoration'] in ('Binding','DescriptorSet','Location','BuiltIn'):v[d['decoration']]=d['operands'][0]
    for tid,t in types.items():
        t['name']=names.get(tid);t['decorations']=decorations[tid]
        if t['opname']=='OpTypeStruct':
            t['members']=[{'index':j,'type_id':ft,'name':member_names.get((tid,j)),'decorations':member_decorations[(tid,j)]} for j,ft in enumerate(t['operands'])]
    return {'header':{'version':f'{(words[1]>>16)&255}.{(words[1]>>8)&255}','generator':words[2],'bound':words[3],'schema':words[4]},'sha256':hashlib.sha256(data).hexdigest(),'bytes':len(data),'instruction_count':len(instructions),'unknown_opcodes':sorted(unknown),'capabilities':capabilities,'extensions':extensions,'sources':sources,'imports':imports,'entries':entries,'modes':modes,'names':names,'types':types,'variables':variables,'constants':constants,'opcounts':dict(counts)},instructions


class Assembly:
    """Grammar-driven textual instruction decoding with original numeric IDs."""
    def __init__(self,grammar):
        self.kinds={x['kind']:x for x in grammar['operand_kinds']}
        self.ops={x['opcode']:x for x in grammar['instructions']}

    def kind(self,kind,words,pos):
        spec=self.kinds[kind];category=spec['category'];v=words[pos]
        if category=='Id':return [f'%{v}'],pos+1
        if category=='Literal':
            if kind=='LiteralString':
                s,n=read_string(words[pos:]);return [json.dumps(s,ensure_ascii=False)],pos+n
            if kind=='LiteralContextDependentNumber':return [hex(x) for x in words[pos:]],len(words)
            return [str(v)],pos+1
        if category=='Composite':
            out=[]
            for base in spec['bases']:
                t,pos=self.kind(base,words,pos);out+=t
            return out,pos
        if category in ('ValueEnum','BitEnum'):
            by={int(e['value'],0) if isinstance(e['value'],str) else e['value']:e for e in spec['enumerants']}
            selected=[by[v]] if category=='ValueEnum' and v in by else [e for bit,e in by.items() if bit and (v&bit)==bit] if category=='BitEnum' and v else [by[0]] if v==0 and 0 in by else []
            out=['|'.join(e['enumerant'] for e in selected) if selected else str(v)];pos+=1
            for e in selected:
                for p in e.get('parameters',[]):
                    t,pos=self.kind(p['kind'],words,pos);out+=t
            return out,pos
        raise ValueError('operand category '+category)

    def instruction(self,ins):
        words=ins['operands'];pos=0;out=[];result=None
        for operand in self.ops[ins['opcode']].get('operands',[]):
            quantifier=operand.get('quantifier')
            if quantifier=='?' and pos==len(words):break
            if quantifier=='*':
                while pos<len(words):t,pos=self.kind(operand['kind'],words,pos);out+=t
                continue
            t,pos=self.kind(operand['kind'],words,pos)
            if operand['kind']=='IdResult':result=t[0]
            else:out+=t
        if pos!=len(words):raise ValueError(f"undecoded operands for {ins['opname']} at {ins['offset']:#x}: {pos}/{len(words)}")
        return (result+' = ' if result else '')+ins['opname']+(' '+' '.join(out) if out else '')


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('input',type=Path)
    ap.add_argument('--grammar',type=Path,default=Path(__file__).resolve().parent.parent/'evidence/shader_spirv.core.grammar.json')
    ap.add_argument('--output',type=Path,required=True)
    ap.add_argument('--instructions',action='store_true')
    ap.add_argument('--assembly',action='store_true',help='Also emit grammar-decoded .spvasm, preserving numeric IDs')
    args=ap.parse_args();grammar=json.loads(args.grammar.read_text(encoding='utf-8'));args.output.mkdir(parents=True,exist_ok=True)
    asm=Assembly(grammar)
    paths=sorted(args.input.rglob('*.spv')) if args.input.is_dir() else [args.input]
    records=[];failures=[];totals=Counter();models=Counter();caps=Counter();versions=Counter();unknown=Counter()
    for p in paths:
        rel=p.relative_to(args.input).as_posix() if args.input.is_dir() else p.name
        try:
            rec,ins=reflect(p.read_bytes(),grammar);rec['path']=rel
            records.append(rec);totals.update(rec['opcounts']);models.update(e['model'] for e in rec['entries']);caps.update(set(rec['capabilities']));versions.update([rec['header']['version']]);unknown.update(rec['unknown_opcodes'])
            if args.instructions:
                dest=args.output/'instructions'/Path(rel).with_suffix('.txt');dest.parent.mkdir(parents=True,exist_ok=True)
                lines=['; Numeric operand listing, not a semantic decompiler.','; SHA256 '+rec['sha256']]
                lines += [f"{i['offset']:08x}: {i['opname']} "+' '.join(str(x) for x in i['operands']) for i in ins]
                dest.write_text('\n'.join(lines)+'\n',encoding='utf-8')
            if args.assembly:
                dest=args.output/'assembly'/Path(rel).with_suffix('.spvasm');dest.parent.mkdir(parents=True,exist_ok=True)
                lines=['; SPIR-V '+rec['header']['version'],'; SHA256 '+rec['sha256'],'; Hex literal words are raw IEEE/integer bits; no external assembler validation.']
                lines += [asm.instruction(i)+f" ; byte 0x{i['offset']:x}" for i in ins]
                dest.write_text('\n'.join(lines)+'\n',encoding='utf-8')
        except Exception as e:failures.append({'path':rel,'error':str(e)})
    report={'files':len(paths),'decoded':len(records),'failures':failures,'versions':dict(versions),'entry_models':dict(models),'capability_modules':dict(caps),'unknown_opcode_modules':dict(unknown),'total_opcounts':dict(totals),'records':records}
    (args.output/'shader_reflection.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps({k:v for k,v in report.items() if k not in ('records','total_opcounts')},ensure_ascii=False,indent=2))
    return bool(failures)


if __name__=='__main__':raise SystemExit(main())
