"""Execute complete original History snapshot filtering/nearest selection.

Only scratch allocator/Vec capacity and CRT adapters are substituted. Original
collector and selection instructions execute; game/saves are never written.
"""
import argparse
import hashlib
import json
import pathlib
import random
import struct
import recovered_history as history
from wall_planners_oracle import PlannerOracle


class HistoryOracle(PlannerOracle):
    def closest(self,rows,index):
        self.reset();ptr=self.alloc(max(16,len(rows)*16))
        for i,row in enumerate(rows):
            cell=self.alloc(32);snapshot=row.get('snapshot_id')
            self.cpu.mem_write(cell,struct.pack('<4Q',1,1,0 if snapshot is None else snapshot,0))
            self.cpu.mem_write(ptr+i*16,struct.pack('<Qi4x',cell,history.i32(row['chain_index'])))
        self.cpu.mem_write(0x200020,struct.pack('<2Q',ptr,len(rows)))
        self.run(0x140ae4d80,0x200100,0x200000,index&0xffffffff)
        tag=struct.unpack('<Q',self.cpu.mem_read(0x200100,8))[0]
        if not tag:
            return None
        id_,index=struct.unpack('<Qi',self.cpu.mem_read(0x200108,12))
        return {'snapshot_id':id_,'chain_index':index}


def verify(exe):
    oracle=HistoryOracle(exe);rows=[];inputs=[]
    tests=[[],[{'snapshot_id':2,'chain_index':0}],
           [{'snapshot_id':3,'chain_index':-10},{'snapshot_id':4,'chain_index':0},{'snapshot_id':5,'chain_index':10}],
           [{'snapshot_id':None,'chain_index':0},{'snapshot_id':0,'chain_index':3},{'snapshot_id':1,'chain_index':4}],
           [{'snapshot_id':7,'chain_index':-0x80000000},{'snapshot_id':8,'chain_index':0x7fffffff}]]
    targets=[-0x80000000,-11,-10,-5,0,5,10,11,0x7fffffff]
    for test in tests:
        inputs.extend((test,target) for target in targets)
    rng=random.Random(0x48495354)
    for _ in range(40):
        indices=sorted(rng.sample(range(-1000,1000),rng.randrange(2,14)))
        test=[{'snapshot_id':None if rng.randrange(4)==0 else (rng.getrandbits(63)+2),'chain_index':i} for i in indices]
        inputs.append((test,rng.randrange(-1500,1500)))
    for test,target in inputs:
        a=history.closest_resolved_snapshot(test,target);a=None if a is None else {k:a[k] for k in ('snapshot_id','chain_index')}
        b=oracle.closest(test,target)
        rows.append({'inputs':test,'target':target,'independent':a,'original':b,'equal':a==b,'substitutions':dict(oracle.hook_counts)})
    return {'exe_sha256':oracle.sha,'checks':len(rows),'passed':all(r['equal'] for r in rows),'results':rows,
            'limits':['Snapshot cells constructed with original Arc/value ABI; game asynchronous resolution is not executed.',
                      'Allocator and Vec reserve are host scratch adapters; collector/selection are original machine code.',
                      'Binary search assumes original sorted chain indices; no history replay occurs.']}


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--exe',type=pathlib.Path,required=True);p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();r=verify(a.exe)
    with a.out.open('x',encoding='utf-8') as f:json.dump(r,f,indent=2)
    print(json.dumps({'checks':r['checks'],'passed':r['passed']}));return not r['passed']


if __name__=='__main__':raise SystemExit(main())
