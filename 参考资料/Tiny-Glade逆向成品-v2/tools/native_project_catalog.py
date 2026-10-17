"""Bind every native procedure containing private-project PDB source lines.

Produces a complete queryable catalog and bounded Ghidra targets. This is
debug-line attribution, not original source recovery or behavior coverage.
"""
import argparse
import bisect
import collections
import csv
import json
import pathlib
import sqlite3


def build(evidence,out):
    connection=sqlite3.connect(f'file:{(evidence/"native_callgraph.sqlite").resolve().as_posix()}?mode=ro',uri=True)
    functions=connection.execute('select va,name,size from functions order by va').fetchall()
    starts=[r[0] for r in functions]
    sources=collections.defaultdict(lambda:collections.defaultdict(list))
    with (evidence/'pdb_project_lines.csv').open(encoding='utf-8',newline='') as f:
        for row in csv.DictReader(f):
            address=int(row['va'],16);index=bisect.bisect_right(starts,address)-1
            if index>=0 and address<functions[index][0]+functions[index][2]:
                sources[index][row['source']].append((address,int(row['line'])))
    out.mkdir(parents=True,exist_ok=False)
    records=[]
    for index,paths in sorted(sources.items()):
        address,name,size=functions[index]
        primary=max(paths,key=lambda p:len(paths[p]))
        if '/crates/' in primary:
            crate=primary.split('/crates/',1)[1].split('/src/',1)[0]
        elif '/build/' in primary:
            crate='generated/'+primary.split('/build/',1)[1].split('/',1)[0]
        else:
            crate='private-other'
        records.append({'va':hex(address),'name':name,'size':size,'primary_crate':crate,
                        'primary_source':primary,'source_spans':[{'file':p,'mapped_addresses':len(v),
                        'first_line':min(x[1] for x in v),'last_line':max(x[1] for x in v)} for p,v in sorted(paths.items())]})
    groups=collections.defaultdict(lambda:{'functions':0,'procedure_bytes':0})
    for r in records:
        g=groups[r['primary_crate']];g['functions']+=1;g['procedure_bytes']+=r['size']
    result={'procedures':len(records),'procedure_bytes':sum(r['size'] for r in records),'groups':dict(groups),
            'records':records,'limits':['PDB contains private-project line mappings, not original Rust text.',
            'Procedures with no retained project line mapping are outside this catalog.',
            'Generic/inline source attribution is not proof of function ownership or behavioral equivalence.']}
    (out/'native_project_catalog.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    (out/'project_targets.tsv').write_text('\n'.join(f"{r['va']}\t{r['size']}\t{r['name']}\t{r['primary_crate']}\t{r['primary_source']}" for r in records),encoding='utf-8')
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--evidence',type=pathlib.Path,required=True)
    p.add_argument('--out',type=pathlib.Path,required=True)
    a=p.parse_args();r=build(a.evidence,a.out)
    print(json.dumps({k:r[k] for k in ('procedures','procedure_bytes','groups')}))


if __name__=='__main__':
    main()
