"""Recovered History::closest_resolved_snapshot, independent Python.

0x140ae4d80 filters original snapshot cell +16 values >=2, then binary
searches signed-i32 chain indices. Equal distance prefers the later snapshot.
Original i32 subtraction/absolute-value overflow behavior is preserved.
"""
import argparse
import json
import pathlib


def i32(value):
    return ((int(value)+0x80000000)&0xffffffff)-0x80000000


def abs_i32(value):
    value=i32(value);negated=i32(-value)
    return value if negated<0 else negated


def closest_resolved_snapshot(snapshots,chain_index):
    rows=[dict(row,chain_index=i32(row['chain_index'])) for row in snapshots
          if row.get('snapshot_id') is not None and int(row['snapshot_id'])>=2]
    if not rows:
        return None
    target=i32(chain_index);base=0;size=len(rows)
    while size>1:
        half=size>>1;middle=base+half
        if target>rows[middle]['chain_index']:
            base=middle
        size-=half
    pos=base+int(target>rows[base]['chain_index'])
    if pos>=len(rows):
        return rows[-1]
    if pos:
        before=abs_i32(i32(rows[pos-1]['chain_index']-target))
        after=abs_i32(i32(rows[pos]['chain_index']-target))
        if after>before:
            pos-=1
    return rows[pos]


def inspect(path,target=None,available_only=False):
    root=json.loads(path.read_text(encoding='utf-8'));history=root['History']
    snapshots=history['snapshots'];rows=[]
    for row in snapshots:
        row=dict(row);id_=row.get('snapshot_id')
        file=path.parent/'snapshots'/f'{id_}.snapshot'
        row['file']=str(file.resolve());row['file_present']=file.is_file()
        if available_only and not row['file_present']:
            row['snapshot_id']=None
        rows.append(row)
    target=history['chain_index'] if target is None else target
    selected=closest_resolved_snapshot(rows,target)
    return {'history':str(path.resolve()),'target_chain_index':target,'available_only':available_only,
            'snapshot_count':len(rows),'selected':selected,
            'limits':['Snapshot cell resolved/unresolved state is explicit; CLI available-only uses file presence as its selection policy.',
                      'Input snapshot sequence must have original signed chain-index ordering.',
                      'Selection is restored; load validation, history migration and edit replay are separate behaviors.']}


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('history',type=pathlib.Path)
    p.add_argument('--chain-index',type=int);p.add_argument('--available-only',action='store_true');p.add_argument('--out',type=pathlib.Path)
    a=p.parse_args();r=inspect(a.history,a.chain_index,a.available_only);text=json.dumps(r,indent=2)
    if a.out:
        with a.out.open('x',encoding='utf-8') as f:f.write(text)
    print(text)


if __name__=='__main__':main()
