"""Restore unused runtime descriptor arrays collapsed to [1] by glslang.

Original SPIR-V descriptor declarations are the schema. Only global
UniformConstant variables at matching descriptor slots are considered.
Arithmetic, IDs, control flow and original binaries remain unchanged.
The derived binary is validated and reflected separately.
"""
import argparse
import hashlib
import json
import pathlib
import struct
from spirv_pointer_lower import instructions, instruction


def module(data):
    words = list(struct.unpack('<%dI' % (len(data)//4),data))
    rows = list(instructions(words))
    types = {a[0]:(op,a[1:]) for _,op,a in rows if 19<=op<=39}
    decorations = {}
    for _,op,a in rows:
        if op==71 and a[1] in (33,34):
            decorations.setdefault(a[0],{})[a[1]]=a[2]
    variables=[]
    for _,op,a in rows:
        if op==59 and a[2]==0 and a[1] in decorations:
            d=decorations[a[1]]
            if 33 in d and 34 in d:
                pointer_op,pointer_args=types[a[0]]
                if pointer_op!=32:
                    raise ValueError('variable result is not a pointer')
                variables.append((a[1],(d[34],d[33]),pointer_args[1]))
    return words,rows,types,variables


def restore(original_data,recompiled_data):
    _,original,original_types,original_variables=module(original_data)
    slots={slot for _,slot,type_ in original_variables if original_types[type_][0]==29}
    words,rows,types,variables=module(recompiled_data)
    constants={a[1]:a[2] for _,op,a in rows if op==43 and len(a)==3}
    changed={}
    for id_,slot,type_ in variables:
        op,args=types[type_]
        if slot in slots and op==28:
            if constants.get(args[1])!=1:
                raise ValueError('expected glslang collapsed array extent one')
            changed[type_]=args[0]
    for id_,slot,type_ in variables:
        if type_ in changed and slot not in slots:
            raise ValueError('array type also used by an authored sized descriptor array')
    if not changed:
        return recompiled_data,[]
    output=words[:5]
    has_cap=any(op==17 and a[0]==5302 for _,op,a in rows)
    inserted=has_cap
    proof=[]
    for offset,op,a in rows:
        if op!=17 and not inserted:
            output.extend(instruction(17,5302));inserted=True
        if op==28 and a[0] in changed:
            output.extend(instruction(29,a[0],changed[a[0]]))
            proof.append({'type_id':a[0],'element_type_id':changed[a[0]],
                          'old_opcode':'OpTypeArray','new_opcode':'OpTypeRuntimeArray',
                          'descriptor_slots':sorted({slot for _,slot,t in variables if t==a[0]})})
        else:
            output.extend(instruction(op,*a))
    return struct.pack('<%dI'%len(output),*output),proof


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original',type=pathlib.Path,required=True)
    p.add_argument('--compiled',type=pathlib.Path,required=True)
    p.add_argument('--layouts',type=pathlib.Path,required=True)
    p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();a.out.mkdir(parents=True,exist_ok=False)
    rows=json.loads(a.layouts.read_text())['records'];records=[]
    for row in rows:
        if row['interfaces_identical']:
            continue
        path=a.compiled/(row['glsl_sha256']+'.spv')
        data,proof=restore((a.original/row['original']).read_bytes(),path.read_bytes())
        if not proof:
            raise ValueError('interface difference is outside this restoration subset: '+row['original'])
        h=hashlib.sha256(data).hexdigest();dest=a.out/(row['glsl_sha256']+'.spv');dest.write_bytes(data)
        records.append({'original':row['original'],'original_sha256':row['original_sha256'],
                        'glsl_sha256':row['glsl_sha256'],'unmodified_recompiled_sha256':row['recompiled_sha256'],
                        'restored_file':dest.name,'restored_sha256':h,'replacements':proof,
                        'added_capability_if_absent':'RuntimeDescriptorArray (5302)'})
    report={'modules':len(records),'records':records,
            'limits':'Descriptor schema restoration only; no shader arithmetic is changed or runtime-tested.'}
    (a.out/'runtime_descriptor_restoration.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    print(json.dumps({'modules':len(records),'array_type_replacements':sum(len(r['replacements']) for r in records)}))


if __name__=='__main__':
    main()
