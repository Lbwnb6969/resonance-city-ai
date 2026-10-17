"""Lower the shipped PhysicalStorageBuffer OpPtrAccessChain subset.

The original modules are preserved. Each four-operand chain is replaced by
two-word address arithmetic with signed/unsigned extended multiplication.
No Int64 capability is introduced. ArrayStride on the physical pointer type
is authoritative; unsupported chains are rejected, never guessed.
"""
import argparse
import hashlib
import json
import pathlib
import random
import struct


def instruction(op, *args):
    return [((len(args) + 1) << 16) | op, *args]


def instructions(words):
    i = 5
    while i < len(words):
        n, op = words[i] >> 16, words[i] & 65535
        if not n or i + n > len(words):
            raise ValueError('invalid instruction extent')
        yield i, op, list(words[i + 1:i + n])
        i += n


def lower(data):
    if len(data) % 4:
        raise ValueError('unaligned SPIR-V')
    words = list(struct.unpack('<%dI' % (len(data) // 4), data))
    if words[0] != 0x07230203:
        raise ValueError('not little-endian SPIR-V')
    rows = list(instructions(words))
    types = {a[0]: (op, a[1:]) for _, op, a in rows if 19 <= op <= 39}
    strides = {a[0]: a[2] for _, op, a in rows if op == 71 and a[1] == 6}
    value_types = {a[1]: a[0] for _, op, a in rows
                   if len(a) >= 2 and a[0] in types and op >= 41 and op not in (71, 72)}
    globals_added = []
    next_id = words[3]

    def fresh():
        nonlocal next_id
        result = next_id
        next_id += 1
        return result

    def get_type(op, *args):
        for id_, value in types.items():
            if value == (op, list(args)):
                return id_
        id_ = fresh()
        globals_added.extend(instruction(op, id_, *args))
        types[id_] = (op, list(args))
        return id_

    constants = {(a[0], a[2]): a[1] for _, op, a in rows if op == 43 and len(a) == 3}

    def constant(type_, value):
        key = (type_, value & 0xffffffff)
        if key not in constants:
            constants[key] = fresh()
            globals_added.extend(instruction(43, type_, constants[key], key[1]))
        return constants[key]

    uint = get_type(21, 32, 0)
    uint2 = get_type(23, uint, 2)
    boolean = get_type(20)
    zero, one = constant(uint, 0), constant(uint, 1)
    replaced = {}
    proofs = []
    for offset, op, a in rows:
        if op != 67:
            continue
        if len(a) != 4:
            raise ValueError('indexed or unsized pointer chain is outside this recovered subset')
        pointer_type, result_id, base_id, element_id = a
        ptr_op, ptr_args = types[pointer_type]
        if ptr_op != 32 or ptr_args[0] != 5349:
            raise ValueError('pointer is not PhysicalStorageBuffer')
        stride = strides.get(pointer_type)
        if stride not in (4, 16):
            raise ValueError('unverified pointer ArrayStride')
        element_type = value_types[element_id]
        int_op, int_args = types[element_type]
        if int_op != 21 or int_args[0] != 32:
            raise ValueError('index is not a 32-bit integer')
        signed = bool(int_args[1])
        mul_type = get_type(30, element_type, element_type)
        stride_id = constant(element_type, stride)
        new = []

        def emit(opcode, type_, *operands):
            id_ = fresh()
            new.extend(instruction(opcode, type_, id_, *operands))
            return id_

        addr = emit(124, uint2, base_id)
        low = emit(81, uint, addr, 0)
        high = emit(81, uint, addr, 1)
        product = emit(152 if signed else 151, mul_type, element_id, stride_id)
        offset_low = emit(81, element_type, product, 0)
        offset_high = emit(81, element_type, product, 1)
        if signed:
            offset_low = emit(124, uint, offset_low)
            offset_high = emit(124, uint, offset_high)
        sum_low = emit(128, uint, low, offset_low)
        carry_bool = emit(176, boolean, sum_low, low)
        carry = emit(169, uint, carry_bool, one, zero)
        sum_high = emit(128, uint, high, offset_high)
        sum_high = emit(128, uint, sum_high, carry)
        combined = emit(80, uint2, sum_low, sum_high)
        new.extend(instruction(124, pointer_type, result_id, combined))
        replaced[offset] = new
        proofs.append({'source_byte_offset': offset * 4, 'result_id': result_id,
                       'pointer_type': pointer_type, 'base_id': base_id,
                       'element_id': element_id, 'element_signed': signed,
                       'array_stride': stride, 'replacement_instructions': len(list(instructions([0]*5 + new)))})
    if not proofs:
        return data, []
    output = words[:5]
    output[3] = next_id
    inserted = False
    for offset, op, a in rows:
        if op == 54 and not inserted:
            output.extend(globals_added)
            inserted = True
        output.extend(replaced.get(offset, instruction(op, *a)))
    if not inserted:
        raise ValueError('missing function section')
    return struct.pack('<%dI' % len(output), *output), proofs


def verify_arithmetic():
    """Check the actual two-word formula against 64-bit modulo arithmetic."""
    rng = random.Random(0x54474c)
    bases = [0, 1, 0xffffffff, 0x100000000, 0x7fffffffffffffff, 0xffffffffffffffff]
    indices = [0, 1, 2, 0x7fffffff, 0x80000000, 0xffffffff]
    cases = [(b, e, s, signed) for b in bases for e in indices for s in (4, 16) for signed in (False, True)]
    cases += [(rng.getrandbits(64), rng.getrandbits(32), rng.choice((4,16)), bool(rng.getrandbits(1))) for _ in range(10000)]
    for base, raw_index, stride, signed in cases:
        index = raw_index - 0x100000000 if signed and raw_index & 0x80000000 else raw_index
        product = (index * stride) & 0xffffffffffffffff
        base_low = base & 0xffffffff
        low = (base_low + (product & 0xffffffff)) & 0xffffffff
        high = ((base >> 32) + (product >> 32) + int(low < base_low)) & 0xffffffff
        assert (high << 32) | low == (base + index * stride) & 0xffffffffffffffff
    return {'cases': len(cases), 'passed': len(cases), 'seed': '0x54474c'}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--input', type=pathlib.Path, required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    args = p.parse_args()
    args.out.mkdir(parents=True, exist_ok=False)
    records = []
    paths = sorted(args.input.rglob('*.spv')) if args.input.is_dir() else [args.input]
    for path in paths:
        data = path.read_bytes()
        if not any(op == 67 for _, op, _ in instructions(struct.unpack('<%dI' % (len(data)//4), data))):
            continue
        output, proof = lower(data)
        rel = path.relative_to(args.input) if args.input.is_dir() else pathlib.Path(path.name)
        dest = args.out / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(output)
        records.append({'file': rel.as_posix(), 'original_sha256': hashlib.sha256(data).hexdigest(),
                        'lowered_sha256': hashlib.sha256(output).hexdigest(), 'replacements': proof})
    result = {'modules': len(records), 'chains': sum(len(r['replacements']) for r in records),
              'arithmetic_verification': verify_arithmetic(), 'records': records,
              'scope': 'Only four-operand physical pointer chains, 32-bit signed/unsigned index, explicit stride 4 or 16.',
              'equation': '(base_u64 + sign_or_zero_extend(index32) * ArrayStride) modulo 2^64',
              'limits': 'Arithmetic identity and compiler verification do not prove complete GPU/application equivalence.'}
    (args.out/'pointer_lowering.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps({k: result[k] for k in ('modules','chains','arithmetic_verification')}))


if __name__ == '__main__':
    main()
