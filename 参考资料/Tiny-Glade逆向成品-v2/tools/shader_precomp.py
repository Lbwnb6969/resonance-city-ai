"""Tiny Glade .precomp container reader. Standard library only; read-only input."""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path


class Reader:
    def __init__(self, data):
        self.data, self.pos = data, 0

    def take(self, n):
        start = self.pos
        if n < 0 or start + n > len(self.data):
            raise ValueError(f"truncated field at {start:#x}, length {n}")
        self.pos += n
        return self.data[start:self.pos]

    def u8(self): return self.take(1)[0]
    def u16(self): return struct.unpack('<H', self.take(2))[0]
    def u32(self): return struct.unpack('<I', self.take(4))[0]
    def u64(self): return struct.unpack('<Q', self.take(8))[0]
    def string(self): return self.take(self.u32()).decode('utf-8')
    def strings(self): return [self.string() for _ in range(self.u32())]
    def pairs(self): return [[self.string(), self.string()] for _ in range(self.u32())]
    def optional(self, fn):
        tag = self.u8()
        if tag not in (0, 1): raise ValueError(f"invalid option {tag} at {self.pos-1:#x}")
        return fn() if tag else None

    def scalar(self):
        tag = self.u32()
        if tag == 1: return {'kind': 'bool', 'tag': tag}
        if tag in (2, 3, 4):
            return {'kind': {2:'int',3:'uint',4:'float'}[tag], 'tag': tag, 'width': self.u32()}
        raise ValueError(f"unknown scalar {tag} at {self.pos-4:#x}")

    def type(self):
        tag = self.u32()
        if tag == 0: return {'kind':'scalar', 'scalar':self.scalar()}
        if tag == 1: return {'kind':'vector', 'scalar':self.scalar(), 'lanes':self.u32()}
        if tag == 2: return {'kind':'matrix', 'scalar':self.scalar(), 'rows':self.u32(), 'columns':self.u32(), 'metadata_u32':self.optional(self.u32), 'metadata_u64':self.optional(self.u64)}
        if tag == 9: return {'kind':'array', 'element':self.type(), 'length':self.optional(self.u32), 'stride':self.optional(self.u64)}
        if tag == 10: return {'kind':'struct', 'name':self.optional(self.string), 'fields':self.fields()}
        if tag == 13: return {'kind':'device_pointer', 'element':self.type()}
        raise ValueError(f"unknown type {tag} at {self.pos-4:#x}")

    def fields(self):
        return [{'name':self.optional(self.string),'offset':self.u64(),'type':self.type()} for _ in range(self.u32())]

    def stage(self):
        start = self.pos
        stage = self.u32()
        words = self.u32()
        offset = self.pos
        code = self.take(words * 4)
        if not code.startswith(b'\x03\x02\x23\x07'): raise ValueError(f"bad SPIR-V at {offset:#x}")
        group = self.optional(lambda:[self.u16() for _ in range(3)])
        inputs = [{'name':self.string(), 'location':self.u32(), 'type':self.type(), 'flag':self.u8()} for _ in range(self.u32())]
        return {'container_stage':stage,'offset':offset,'length':len(code),'workgroup':group,'vertex_inputs':inputs,'record_start':start,'record_end':self.pos,'sha256':hashlib.sha256(code).hexdigest()}, code

    def module(self):
        start = self.pos
        module_index = self.u32()
        module_name = self.string()
        descriptor_set = self.u32()
        descriptors=[]
        for _ in range(self.u32()):
            binding,kind,array_kind=self.u32(),self.u32(),self.u32()
            if array_kind not in (0,1): raise ValueError(f'unknown descriptor array tag {array_kind}')
            count=self.u32() if array_kind==0 else None
            descriptors.append({'binding':binding,'kind':kind,'array_kind':array_kind,'count':count,'name':self.string()})
        blocks=[]
        for _ in range(self.u32()):
            binding,name,size=self.u32(),self.string(),self.u64()
            fields=self.fields()
            blocks.append({'binding':binding,'name':name,'size':size,'fields':fields})
        return {'module_index':module_index,'name':module_name, 'descriptor_set':descriptor_set,'descriptors':descriptors,'blocks':blocks,'offset':start,'end':self.pos}


def parse(data):
    r=Reader(data)
    programs=[]
    all_codes=[]
    for _ in range(r.u32()):
        name=r.string();parameters=r.pairs();variants=[]
        for _ in range(r.u32()):
            start=r.pos;values=r.pairs();variant_name=r.string();stages=[]
            for _ in range(r.u32()):
                stage,code=r.stage();stages.append(stage);all_codes.append(code)
            modules=[r.module() for _ in range(r.u32())]
            push_constant_size=r.u32()
            variants.append({'name':variant_name,'values':values,'stages':stages,'modules':modules,'push_constant_size':push_constant_size,'offset':start,'end':r.pos})
        programs.append({'name':name,'parameters':parameters,'variants':variants})
    if r.pos != len(data): raise ValueError(f"unconsumed bytes {len(data)-r.pos} at {r.pos:#x}")
    return {'programs':programs,'consumed':r.pos},all_codes


class Writer:
    """Inverse encoding for byte-exact coverage verification; never modifies input."""
    def __init__(self):self.data=bytearray()
    def raw(self,data):self.data.extend(data)
    def u8(self,x):self.raw(struct.pack('<B',x))
    def u16(self,x):self.raw(struct.pack('<H',x))
    def u32(self,x):self.raw(struct.pack('<I',x))
    def u64(self,x):self.raw(struct.pack('<Q',x))
    def string(self,x):
        data=x.encode('utf-8');self.u32(len(data));self.raw(data)
    def pairs(self,x):
        self.u32(len(x))
        for a,b in x:self.string(a);self.string(b)
    def optional(self,x,fn):
        self.u8(int(x is not None))
        if x is not None:fn(x)
    def scalar(self,x):
        self.u32(x['tag'])
        if x['tag']!=1:self.u32(x['width'])
    def fields(self,fields):
        self.u32(len(fields))
        for f in fields:self.optional(f['name'],self.string);self.u64(f['offset']);self.type(f['type'])
    def type(self,x):
        kind=x['kind'];self.u32({'scalar':0,'vector':1,'matrix':2,'array':9,'struct':10,'device_pointer':13}[kind])
        if kind in ('scalar','vector','matrix'):self.scalar(x['scalar'])
        if kind=='vector':self.u32(x['lanes'])
        if kind=='matrix':
            self.u32(x['rows']);self.u32(x['columns']);self.optional(x['metadata_u32'],self.u32);self.optional(x['metadata_u64'],self.u64)
        if kind=='array':self.type(x['element']);self.optional(x['length'],self.u32);self.optional(x['stride'],self.u64)
        if kind=='struct':self.optional(x['name'],self.string);self.fields(x['fields'])
        if kind=='device_pointer':self.type(x['element'])
    def module(self,m):
        self.u32(m['module_index']);self.string(m['name']);self.u32(m['descriptor_set']);self.u32(len(m['descriptors']))
        for d in m['descriptors']:
            self.u32(d['binding']);self.u32(d['kind']);self.u32(d['array_kind'])
            if d['array_kind']==0:self.u32(d['count'])
            self.string(d['name'])
        self.u32(len(m['blocks']))
        for b in m['blocks']:self.u32(b['binding']);self.string(b['name']);self.u64(b['size']);self.fields(b['fields'])


def encode(record,codes):
    w=Writer();codes=iter(codes);w.u32(len(record['programs']))
    for p in record['programs']:
        w.string(p['name']);w.pairs(p['parameters']);w.u32(len(p['variants']))
        for v in p['variants']:
            w.pairs(v['values']);w.string(v['name']);w.u32(len(v['stages']))
            for s in v['stages']:
                code=next(codes);w.u32(s['container_stage']);w.u32(len(code)//4);w.raw(code)
                w.optional(s['workgroup'],lambda dims:[w.u16(x) for x in dims]);w.u32(len(s['vertex_inputs']))
                for f in s['vertex_inputs']:w.string(f['name']);w.u32(f['location']);w.type(f['type']);w.u8(f['flag'])
            w.u32(len(v['modules']))
            for m in v['modules']:w.module(m)
            w.u32(v['push_constant_size'])
    return bytes(w.data)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('input',type=Path)
    ap.add_argument('--output',type=Path,required=True)
    ap.add_argument('--extract',action='store_true')
    args=ap.parse_args();args.output.mkdir(parents=True,exist_ok=True)
    paths=sorted(args.input.rglob('*.precomp')) if args.input.is_dir() else [args.input]
    records=[];failures=[];stages_total=0
    for p in paths:
        data=p.read_bytes();relative=str(p.relative_to(args.input) if args.input.is_dir() else p.name).replace('\\','/')
        try:
            record,codes=parse(data)
            if encode(record,codes)!=data:raise ValueError('roundtrip encoding differs')
            record.update(path=relative,size=len(data),sha256=hashlib.sha256(data).hexdigest())
            stages_total+=len(codes)
            if args.extract:
                dest=args.output/'spirv'/relative.removesuffix('.precomp');dest.mkdir(parents=True,exist_ok=True)
                for index,code in enumerate(codes): (dest/f'{index:03d}.spv').write_bytes(code)
            records.append(record)
        except Exception as e: failures.append({'path':relative,'error':str(e),'sha256':hashlib.sha256(data).hexdigest()})
    report={'source':str(args.input.resolve()),'files':len(paths),'decoded':len(records),'roundtrip_verified':len(records),'stages':stages_total,'failures':failures,'records':records}
    (args.output/'shader_containers.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps({'files':len(paths),'decoded':len(records),'stages':stages_total,'failures':failures[:25]},ensure_ascii=False,indent=2))
    return bool(failures)


if __name__=='__main__': raise SystemExit(main())
