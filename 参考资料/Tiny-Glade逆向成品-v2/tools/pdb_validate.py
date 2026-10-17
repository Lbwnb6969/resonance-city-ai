"""Cross-check exported CodeView procedures against independent PE unwind data."""
import argparse, collections, json, pathlib, struct
from pdb_inspect import MSF, records, u32

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('evidence',type=pathlib.Path);args=ap.parse_args();out=args.evidence
    ident=json.loads((out/'pdb_identity.json').read_text(encoding='utf-8'))
    b=pathlib.Path(ident['exe_path']).read_bytes();pe=ident['pe'];sec=next(x for x in pe['sections'] if x['name']=='.pdata')
    raw=b[sec['raw_offset']:sec['raw_offset']+sec['virtual_size']]
    starts={struct.unpack_from('<3I',raw,o)[0]:struct.unpack_from('<3I',raw,o)[1] for o in range(0,len(raw)-11,12)}
    counts=collections.Counter();mismatches=[];unique=set();rust_types=collections.Counter()
    for line in (out/'pdb_symbols.jsonl').open(encoding='utf-8'):
        r=json.loads(line)
        if r['kind'] not in ('0x110f','0x1110'):continue
        if r['name'].startswith(('country_core::','asset_pipe::','tiny_glade::','rhapsody::')):rust_types[r['type_index']]+=1
        key=(r['rva'],r['size'])
        if key in unique:continue
        unique.add(key)
        if r['segment']!=1:counts['not_text']+=1
        elif r['rva'] in starts:
            counts['pdata_start_match']+=1
            if r['rva']+r['size']==starts[r['rva']]:counts['pdata_end_match']+=1
            else:
                counts['pdata_end_diff']+=1
                if len(mismatches)<10:mismatches.append(dict(name=r['name'],rva=hex(r['rva']),pdb_end=hex(r['rva']+r['size']),pdata_end=hex(starts[r['rva']])))
        else:counts['leaf_or_no_exact_unwind_entry']+=1
    msf=MSF(ident['pdb_path']);tpi=msf.stream(2);actual=sum(1 for _ in records(tpi,u32(tpi,4)));expected=u32(tpi,12)-u32(tpi,8)
    result=dict(identity_matched=ident['matched'],procedure_unique_ranges=len(unique),unwind_count=len(starts),procedure_validation=dict(counts),sample_end_differences=mismatches,tpi_expected_records=expected,tpi_actual_records=actual,tpi_header_version=u32(tpi,0),project_function_type_indices=dict(rust_types),limitations=['Unwind data omits leaf functions; absent .pdata entry is not parser failure.','End differences can be CodeView debug range vs chained unwind range; not assumed corruption.'])
    (out/'pdb_validation.json').write_text(json.dumps(result,indent=2),encoding='utf-8');print(json.dumps(result,indent=2))
    if not ident['matched'] or expected!=actual or counts['not_text']:raise SystemExit(1)
if __name__=='__main__':main()
