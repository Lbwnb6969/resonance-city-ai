"""Original x86-64 instruction oracle for recovered wall/stair routines.

No game process is started. Only memory allocation/free/Vec growth and the
imported C roundf are substituted. Geometry, RNG and branches execute EXE bytes.
Requires pefile and unicorn. python wall_stairs_oracle.py EXE --out NEW.json
"""
import argparse
import dataclasses
import hashlib
import json
import math
import pathlib
import random
import struct
import recovered_wall_stairs as r

class Oracle:
    def __init__(self, path):
        import pefile
        import unicorn as u
        import unicorn.x86_const as x
        self.u, self.x = u, x
        with path.open('rb') as f:
            self.sha = hashlib.file_digest(f, 'sha256').hexdigest()
        if self.sha != r.EXE_SHA256:
            raise ValueError('EXE differs from the address-bound recovery')
        pe = pefile.PE(str(path), fast_load=True)
        self.cpu = c = u.Uc(u.UC_ARCH_X86, u.UC_MODE_64)
        base = pe.OPTIONAL_HEADER.ImageBase
        c.mem_map(base, (pe.OPTIONAL_HEADER.SizeOfImage + 4095) & ~4095)
        for s in pe.sections:
            c.mem_write(base + s.VirtualAddress, s.get_data())
        c.mem_map(0x100000, 0x20000)
        c.mem_map(0x200000, 0x1000000)
        c.reg_write(x.UC_X86_REG_CR4, c.reg_read(x.UC_X86_REG_CR4) | 0x600)
        self.hooks = {
            0x1406abab0: ('rust_alloc', self.alloc_hook),
            0x1406abac0: ('rust_dealloc', lambda: None),
            0x142d7ef30: ('grow_vec_aabb_stride16', lambda: self.grow(16)),
            0x142d7ede0: ('grow_vec_piece_stride40', lambda: self.grow(40)),
            0x142e32b00: ('imported_roundf_finite', self.round_hook),
            0x142e32a70: ('imported_fmodf_finite', self.fmod_hook),
        }
        c.hook_add(u.UC_HOOK_CODE, self.on_code)
        self.reset()

    def alloc(self, size):
        ptr = self.heap
        self.heap += (size + 31) & ~31
        if self.heap > 0x11f0000:
            raise ValueError('oracle scratch heap exhausted')
        return ptr

    def readq(self, address):
        return struct.unpack('<Q', self.cpu.mem_read(address, 8))[0]

    def alloc_hook(self):
        self.cpu.reg_write(self.x.UC_X86_REG_RAX, self.alloc(self.cpu.reg_read(self.x.UC_X86_REG_RCX)))

    def grow(self, stride):
        c, x = self.cpu, self.x
        vec = c.reg_read(x.UC_X86_REG_RCX)
        cap, ptr, length = struct.unpack('<3Q', c.mem_read(vec, 24))
        new_cap = max(4, cap * 2, length + 1)
        new_ptr = self.alloc(new_cap * stride)
        if length:
            c.mem_write(new_ptr, bytes(c.mem_read(ptr, length * stride)))
        c.mem_write(vec, struct.pack('<3Q', new_cap, new_ptr, length))

    def round_hook(self):
        value = self.read_float(self.x.UC_X86_REG_XMM0)
        self.set_float(self.x.UC_X86_REG_XMM0,
                       math.floor(value + .5) if value >= 0 else math.ceil(value - .5))

    def fmod_hook(self):
        self.set_float(self.x.UC_X86_REG_XMM0, math.fmod(self.read_float(self.x.UC_X86_REG_XMM0),
                                                      self.read_float(self.x.UC_X86_REG_XMM1)))

    def on_code(self, cpu, address, size, user):
        if address in self.hooks:
            name, callback = self.hooks[address]
            self.hook_counts[name] = self.hook_counts.get(name, 0) + 1
            callback()
            rsp = cpu.reg_read(self.x.UC_X86_REG_RSP)
            ret = self.readq(rsp)
            cpu.reg_write(self.x.UC_X86_REG_RSP, rsp + 8)
            cpu.reg_write(self.x.UC_X86_REG_RIP, ret)

    def reset(self):
        self.heap = 0x210000
        self.hook_counts = {}
        self.cpu.mem_write(0x200000, bytes(0x10000))
        for reg in range(self.x.UC_X86_REG_XMM0, self.x.UC_X86_REG_XMM15 + 1):
            self.cpu.reg_write(reg, 0)
        self.cpu.reg_write(self.x.UC_X86_REG_EFLAGS, 2)

    def set_float(self, reg, value):
        self.cpu.reg_write(reg, r.bits(value))

    def read_float(self, reg):
        return struct.unpack('<f', struct.pack('<I', self.cpu.reg_read(reg) & 0xffffffff))[0]

    def run(self, address, rcx=0, rdx=0, r8=0, r9=0, xmm=None, stack=None):
        c, x = self.cpu, self.x
        rsp = 0x10fff8
        c.mem_write(rsp, struct.pack('<Q', 0x10000))
        c.reg_write(x.UC_X86_REG_RSP, rsp)
        for reg, value in [(x.UC_X86_REG_RCX, rcx), (x.UC_X86_REG_RDX, rdx),
                           (x.UC_X86_REG_R8, r8), (x.UC_X86_REG_R9, r9)]:
            c.reg_write(reg, value)
        for number, value in (xmm or {}).items():
            self.set_float(x.UC_X86_REG_XMM0 + number, value)
        for offset, data in (stack or {}).items():
            c.mem_write(rsp + offset, data)
        try:
            c.emu_start(address, 0x10000, count=2000000)
        except Exception as exc:
            raise RuntimeError(f'oracle {address:#x} stopped at {c.reg_read(x.UC_X86_REG_RIP):#x}: {exc}') from exc
        if c.reg_read(x.UC_X86_REG_RIP) != 0x10000:
            raise ValueError('original routine exceeded instruction budget')

    def rectangles(self, address=0x200000):
        cap, ptr, count = struct.unpack('<3Q', self.cpu.mem_read(address, 24))
        return [struct.unpack('<4f', self.cpu.mem_read(ptr + i * 16, 16)) for i in range(count)]

    def split(self, rect, tag, index, horizontal, mh, mw):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<4f', *rect))
        self.cpu.mem_write(0x200210, struct.pack('<2f', mh, mw))
        self.run(0x1414882c0, 0x200000, tag, index, 0x200100,
                 stack={0x28: struct.pack('<Q', horizontal), 0x30: struct.pack('<Q', 0x200200)})
        return self.rectangles()

    def subdivide(self, rect, horizontal, spacing):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<4f', *rect))
        self.run(0x1414887e0, 0x200000, 0x200100, horizontal, xmm={3: spacing})
        return self.rectangles()

    def subtract(self, cuts, pieces, horizontal):
        self.reset()
        for i, cut in enumerate(cuts):
            self.cpu.mem_write(0x200100 + 16 * i, struct.pack('<4f', *cut))
        ptr = self.alloc(40 * max(1, len(pieces)))
        for i, piece in enumerate(pieces):
            self.cpu.mem_write(ptr + 40 * i,
                               struct.pack('<2Q4fB7x', piece.tag, piece.key, *piece.rectangle, piece.flag))
        self.cpu.mem_write(0x200000, struct.pack('<3Q', len(pieces), ptr, len(pieces)))
        self.run(0x141484710, 0x200100, len(cuts), 0x200000, horizontal)
        cap, ptr, count = struct.unpack('<3Q', self.cpu.mem_read(0x200000, 24))
        result = []
        for i in range(count):
            fields = struct.unpack('<2Q4fB7x', self.cpu.mem_read(ptr + 40 * i, 40))
            result.append(r.BoardPiece(tuple(fields[2:6]), fields[0], fields[1], fields[6]))
        return result

    def align(self, kind, b1, b2, a, b, scale, outgoing=False):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<3Bx4f', kind, b1, b2, *a, *b))
        self.run(0x140c016f0 if outgoing else 0x140c01750, 0x200100, xmm={1: scale})
        return tuple(self.read_float(reg) for reg in (self.x.UC_X86_REG_XMM0, self.x.UC_X86_REG_XMM1))

    def sampler(self, samples, length, closed):
        self.reset()
        ptr = self.alloc(max(20, len(samples) * 20))
        for i, sample in enumerate(samples):
            self.cpu.mem_write(ptr + 20 * i, struct.pack('<5f', *sample))
        self.cpu.mem_write(0x200100, struct.pack('<3QfB3x', len(samples), ptr, len(samples), length, closed))

    def pair(self, samples, length, closed, distance):
        self.sampler(samples, length, closed)
        self.run(0x141483090, 0x200000, 0x200100, xmm={2: distance})
        fields = struct.unpack('<I11f', self.cpu.mem_read(0x200000, 48))
        if fields[0] == 0:
            return None
        return tuple(fields[1:6]), tuple(fields[6:11]), fields[11]

    def tangent(self, samples, length, closed, start, end):
        self.sampler(samples, length, closed)
        self.run(0x141483320, 0x200000, 0x200100, xmm={2: start, 3: end})
        return struct.unpack('<3f', self.cpu.mem_read(0x200000, 12))

    def support(self, position, width, tangent, height):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<3f', *position))
        self.run(0x1408279f0, 0x200000, 0x200100, xmm={2: width, 3: tangent[0]},
                 stack={0x28: struct.pack('<f', tangent[1]), 0x30: b'\x01', 0x38: struct.pack('<f', height)})
        return struct.unpack('<16f', self.cpu.mem_read(0x200000, 64))

    def rectangle(self, width, height, length, tag=1):
        self.reset()
        self.cpu.mem_write(0x200130, struct.pack('<2f', width, height))
        self.cpu.mem_write(0x20011c, struct.pack('<I', tag))
        self.cpu.mem_write(0x20013c, struct.pack('<f', length))

    def point_u(self, width, height, corner):
        self.rectangle(width, height, 1)
        self.run(0x140df0700, 0x200120, corner)
        return self.read_float(self.x.UC_X86_REG_XMM0)

    def side_ranges(self, width, height, length, tag):
        self.rectangle(width, height, length, tag)
        self.run(0x141483c00, 0x200000, 0x200100)
        if struct.unpack('<I', self.cpu.mem_read(0x200000, 4))[0] == 0:
            return None
        vals = struct.unpack('<8f', self.cpu.mem_read(0x200004, 32))
        return [(vals[i], vals[i+1]) for i in range(0, 8, 2)]

    def rim(self, width, height, length, mode, tag, side, distance):
        self.rectangle(width, height, length, tag)
        self.run(0x141486f80, 0x200000, 0x200100, mode, side,
                 stack={0x28: struct.pack('<f', distance)})
        coordinate, size, mode = struct.unpack('<2fB', self.cpu.mem_read(0x200000, 9))
        return coordinate, size, bool(mode)

    def classify(self, samples, length, closed, rect, cap_y):
        self.sampler(samples, length, closed)
        self.cpu.mem_write(0x200200, struct.pack('<4f', *rect))
        self.run(0x1414871b0, 0x200100, 0x200200, xmm={2: cap_y})
        return bool(self.cpu.reg_read(self.x.UC_X86_REG_RAX) & 0xff)

def canonical(value):
    if dataclasses.is_dataclass(value):
        return canonical(dataclasses.asdict(value))
    if isinstance(value, float):
        return {'f32_hex': struct.pack('<f', value).hex(), 'value': value}
    if isinstance(value, (tuple, list)):
        return [canonical(v) for v in value]
    if isinstance(value, dict):
        return {k: canonical(v) for k, v in value.items()}
    return value

def verify(path):
    oracle = Oracle(path)
    checks = []
    def check(name, inputs, expected, observed):
        checks.append({'routine': name, 'inputs': canonical(inputs), 'recovered': canonical(expected),
                       'original_instruction_oracle': canonical(observed),
                       'bit_exact': canonical(expected) == canonical(observed),
                       'substituted_calls': dict(oracle.hook_counts)})
    rects = [(0, 0, 1, 1), (-2, -.5, 4, 3), (.15, .03, 1.78, 4.12),
             (0, 0, .05, .049), (1, 2, 1.4, 2.7)]
    for rect in rects:
        for h in (False, True):
            for tag, index in [(0, 0), (0x0123456789abcdef, 17), (0xffffffffffffffff, 3)]:
                args = (rect, tag, index, h, .61, .91)
                check('split_oversized_board_piece', args, r.split_oversized_board_piece(*args), oracle.split(*args))
            for spacing in (.2, .6, 1.0):
                args = (rect, h, spacing)
                check('subdivide_region_into_planks', args, r.subdivide_region_into_planks(*args), oracle.subdivide(*args))
    cuts_cases = [[], [(1, 1, 2, 2)], [(-1, -1, 5, 5)], [(4, 1, 5, 3)],
                  [(1, -.1, 2, .03)], [(1, -.1, 2, 3.97)], [(1, 1, 2, 2), (1.5, 0, 3, 3)],
                  [(1, 1, 2, 2), (2, 1, 3, 2)], [(0, 0, 0, 0)]]
    for h in (False, True):
        for cuts in cuts_cases:
            pieces = [r.BoardPiece((0, 0, 4, 4), 1, 0x12345678, 1),
                      r.BoardPiece((-.2, -.2, .4, .4), 0, 77, 0)]
            check('subtract_wall_cutouts', (cuts, pieces, h), r.subtract_wall_cutouts(cuts, pieces, h),
                  oracle.subtract(cuts, pieces, h))
    for kind in (0, 1, 2):
        for b1, b2 in [(0, 0), (1, 0), (0, 1), (1, 1)]:
            for scale in (-2.5, 0, 1.2):
                args = (kind, b1, b2, (.6, -.8), (-.4, .7), scale)
                check('AlignKind::position_offset', args, r.align_position_offset(*args), oracle.align(*args))
        if kind < 2:
            args = (kind, 0, 0, (.6, -.8), (-.4, .7), 0)
            check('AlignKind::outgoing_dir', args, r.align_outgoing_dir(kind, args[3], args[4]), oracle.align(*args, outgoing=True))
    samples_cases = [[], [(1, 2, 0, .2, 3)],
                     [(0, 0, 0, .1, 1), (2, 0, 2, .4, 3), (2, 3, 5, .2, 2)],
                     [(1, 1, .25, .1, 1), (1, 1, 2, .4, 3), (1, 1, 5, .2, 2)]]
    for samples in samples_cases:
        for closed in (False, True):
            for distance in (-1, 0, .25, 1.2, 2, 4.3, 5, 6.2):
                args = (samples, 5, closed, distance)
                check('WallSampler::sample_pair_at', args, r.sample_pair_at(*args), oracle.pair(*args))
            for start, end in [(0, 5), (1.2, 1.2), (4.3, .5), (-.3, 6.1)]:
                args = (samples, 5, closed, start, end)
                check('WallSampler::tangent_between', args, r.tangent_between(*args), oracle.tangent(*args))
    for position in [(1, 2, 3), (-2.3, .4, .9)]:
        for width in (.1, .22, .3, 1.2, 3):
            for tangent in [(1, 0), (.6, -.8), (0, 1)]:
                args = (position, width, tangent, -.2)
                check('support_station_from_sample::fixed_ground_height', args,
                      r.support_station_fixed_height(*args), oracle.support(*args))
    for width, height, length in [(1, 1, 4.5), (.6, 2.3, 6.8), (3.5, .8, 9.1)]:
        for corner in range(5):
            args = (width, height, corner)
            check('Rectangle2d::get_point_u', args, r.rectangle_point_u(*args), oracle.point_u(*args))
        for tag in (0, 1, 2):
            args = (width, height, length, tag)
            check('rectangle_side_wallspace_ranges', args, r.rectangle_side_wallspace_ranges(*args), oracle.side_ranges(*args))
        for mode, tag in [(1, 1), (0, 1), (1, 0)]:
            for side in range(4):
                args = (width, height, length, mode, tag, side, -1.2 + side * 2.1)
                check('top_rim_step_pattern_info', args, r.top_rim_step_pattern_info(*args), oracle.rim(*args))
    for samples in [[], [(0, 0, 0, 0, 3), (2, 0, 2, 0, 3), (4, 0, 4, 0, 3)],
                    [(0, 0, 0, 0, 3), (2, 0, 2, .2, 2), (2, 2, 4, .4, 1)],
                    [(0, 0, 0, 0, 3), (1, .3, 1, .2, 2), (3, .5, 4, .4, 1)]]:
        for closed in (False, True):
            for rect in [(.2, .4, 1.4, .8), (.4, .4, .6, 1.2), (.1, .01, 3, .8),
                         (.1, .4, 3, 2.8), (.1, .4, 3, .9)]:
                args = (samples, 4, closed, rect, 2.5)
                check('classify_region_orientation', args, r.classify_region_orientation(*args), oracle.classify(*args))
    return {'exe_sha256': oracle.sha, 'authority': 'controlled-original-instruction-emulation',
            'emulator': 'Unicorn ' + oracle.u.__version__, 'checks': len(checks),
            'passed': all(c['bit_exact'] for c in checks),
            'mismatches': sum(not c['bit_exact'] for c in checks),
            'limitations': ['Finite sampled domain; no full game execution.',
                            'Allocation/free/growth are simulated host plumbing; geometry and RNG execute original EXE.',
                            'The imported roundf is substituted by its exact finite-input rounding rule.',
                            'The imported fmodf uses host math.fmod rounded to f32 on finite inputs.',
                            'Padding bytes of 40-byte BoardPiece are excluded; semantic metadata is compared.',
                            'Tags 0 and 1 are used; tag 2 sentinel/malformed records are outside the reconstructed domain.'],
            'results': checks}

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('exe', type=pathlib.Path)
    p.add_argument('--out', type=pathlib.Path, required=True)
    args = p.parse_args()
    result = verify(args.exe)
    args.out.parent.mkdir(exist_ok=True, parents=True)
    with args.out.open('x', encoding='utf-8') as f:
        json.dump(result, f, indent=2)
    print(json.dumps({k: result[k] for k in ['checks', 'passed', 'mismatches']}))
    return 0 if result['passed'] else 1

if __name__ == '__main__':
    raise SystemExit(main())
