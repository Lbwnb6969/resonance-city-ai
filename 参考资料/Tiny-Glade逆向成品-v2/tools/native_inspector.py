"""Static PE/Capstone inspection linked to an independently matched PDB index.

Requires: pip install pefile capstone
overview EXE --out report.json
function EXE --symbols pdb_symbols.jsonl --address 0x... --out NEW_DIRECTORY
No target execution. PDB procedure records give the disassembly extent. Direct
call targets are observed immediate operands; indirect targets stay unresolved.
"""
import argparse
import collections
import hashlib
import json
import pathlib
import struct
import uuid

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_REG_RIP


def hash_file(path):
    with path.open('rb') as file:
        return hashlib.file_digest(file, 'sha256').hexdigest()


def symbols(path):
    names = collections.defaultdict(list)
    procedures = {}
    for line in path.open(encoding='utf-8'):
        row = json.loads(line)
        if row.get('va'):
            address = int(row['va'], 16)
            name = row.get('demangled', row['name'])
            if name not in names[address]:
                names[address].append(name)
            if row.get('size'):
                procedures[address] = row
    return names, procedures


def overview(path, pe):
    base = pe.OPTIONAL_HEADER.ImageBase
    debug = []
    for item in getattr(pe, 'DIRECTORY_ENTRY_DEBUG', []):
        d = pe.__data__[item.struct.PointerToRawData:item.struct.PointerToRawData + item.struct.SizeOfData]
        rec = {'type': item.struct.Type, 'offset': item.struct.PointerToRawData, 'bytes': len(d)}
        if d.startswith(b'RSDS') and len(d) >= 24:
            rec.update(guid=str(uuid.UUID(bytes_le=d[4:20])), age=struct.unpack_from('<I', d, 20)[0],
                       pdb_path=d[24:].split(b'\0')[0].decode('utf-8', 'replace'))
        debug.append(rec)
    return {'file': str(path), 'sha256': hash_file(path), 'machine': hex(pe.FILE_HEADER.Machine),
            'image_base': hex(base), 'entry_va': hex(base + pe.OPTIONAL_HEADER.AddressOfEntryPoint),
            'image_size': pe.OPTIONAL_HEADER.SizeOfImage,
            'sections': [{'name': s.Name.rstrip(b'\0').decode('ascii'),
                          'rva': hex(s.VirtualAddress), 'virtual_bytes': s.Misc_VirtualSize,
                          'file_offset': s.PointerToRawData, 'file_bytes': s.SizeOfRawData,
                          'characteristics': hex(s.Characteristics)} for s in pe.sections],
            'imports': [{'dll': dll.dll.decode(), 'names': [i.name.decode() if i.name else f'ordinal:{i.ordinal}'
                                                          for i in dll.imports]}
                        for dll in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', [])], 'debug': debug,
            'cli_metadata_present': bool(pe.OPTIONAL_HEADER.DATA_DIRECTORY[14].VirtualAddress)}


def function(path, pe, names, procedures, address):
    row = procedures.get(address)
    if row is None:
        raise ValueError('address has no PDB procedure extent')
    code = pe.get_data(address - pe.OPTIONAL_HEADER.ImageBase, row['size'])
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    listing, calls, references = [], [], []
    decoded_bytes = 0
    iat = {i.address: f'{dll.dll.decode()}!{i.name.decode() if i.name else i.ordinal}'
           for dll in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []) for i in dll.imports}
    for ins in md.disasm(code, address):
        decoded_bytes += ins.size
        annotation = []
        if ins.mnemonic in ('call', 'jmp'):
            target = ins.operands[0]
            if target.type == X86_OP_IMM:
                target_va = target.imm
                candidate_names = sorted(names.get(target_va, []), key=lambda n: (len(n), n))[:8]
                calls.append({'address': hex(ins.address), 'kind': ins.mnemonic, 'target': hex(target_va),
                              'target_names': candidate_names, 'resolution': 'direct-immediate'})
                annotation.extend(candidate_names[:2])
            else:
                calls.append({'address': hex(ins.address), 'kind': ins.mnemonic,
                              'operand': ins.op_str, 'resolution': 'unresolved-indirect'})
        for operand in ins.operands:
            if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
                ref = ins.address + ins.size + operand.mem.disp
                record = {'address': hex(ins.address), 'target': hex(ref), 'operand_bytes': operand.size}
                if ref in iat:
                    record['import'] = iat[ref]
                    annotation.append(iat[ref])
                if names.get(ref):
                    record['names'] = sorted(names[ref], key=len)[:4]
                try:
                    raw = pe.get_data(ref - pe.OPTIONAL_HEADER.ImageBase, 96)
                    record['bytes_hex'] = raw[:32].hex()
                    text = raw.split(b'\0')[0]
                    if len(text) >= 4 and all(32 <= x < 127 for x in text):
                        record['ascii_candidate'] = text.decode()
                        annotation.append(repr(text.decode()))
                except pefile.PEFormatError:
                    pass
                references.append(record)
        listing.append(f'{ins.address:016x}  {ins.bytes.hex():24} {ins.mnemonic:8} {ins.op_str}'
                       + (' ; ' + ' | '.join(annotation) if annotation else ''))
    return {'source_sha256': hash_file(path), 'procedure': row,
            'bytes_sha256': hashlib.sha256(code).hexdigest(), 'code_bytes': len(code),
            'decoded_bytes': decoded_bytes, 'instructions': len(listing),
            'calls_and_jumps': calls, 'rip_references': references,
            'limitations': ['Linear decode of the PDB procedure byte extent, not a recovered CFG.',
                            'Named targets are matched-PDB identities, not execution observations.',
                            'Indirect calls, embedded data, and source-language field types stay unresolved.']}, listing


def write_json(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('x', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, indent=2)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('command', choices=['overview', 'function'])
    p.add_argument('exe', type=pathlib.Path)
    p.add_argument('--symbols', type=pathlib.Path)
    p.add_argument('--address', type=lambda s: int(s, 0))
    p.add_argument('--out', type=pathlib.Path, required=True)
    args = p.parse_args()
    pe = pefile.PE(str(args.exe))
    if args.command == 'overview':
        result = overview(args.exe, pe)
        write_json(args.out, result)
        print(json.dumps({'sha256': result['sha256'], 'sections': len(result['sections']),
                          'dlls': [d['dll'] for d in result['imports']]}))
    else:
        if not args.symbols or args.address is None:
            p.error('function requires --symbols and --address')
        names, procedures = symbols(args.symbols)
        result, assembly = function(args.exe, pe, names, procedures, args.address)
        args.out.mkdir(parents=True, exist_ok=False)
        write_json(args.out / 'function.json', result)
        (args.out / 'assembly.txt').write_text('\n'.join(assembly) + '\n', encoding='utf-8')
        print(json.dumps({'address': hex(args.address), 'instructions': len(assembly),
                          'bytes': result['decoded_bytes'], 'extent': result['code_bytes']}))


if __name__ == '__main__':
    main()
