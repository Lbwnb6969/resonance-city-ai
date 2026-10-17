"""Execute original horizontal/vertical planners and compare recovered output.

Windows/arch cut providers are absent in empty-cut checks and execute original
remapped_wall_cutouts. Other checks substitute only that provider with explicit
pre-remapped cuts; downstream complete planner instructions still execute.
"""
import argparse
import dataclasses
import json
import pathlib
import struct
import random
import wall_stairs_oracle as old
import recovered_wall_stairs as r
import recovered_wall_planners as p

class PlannerOracle(old.Oracle):
    def __init__(self, path):
        super().__init__(path)
        self.hooks.update({0x1406abae0: ('rust_alloc_zeroed', self.zero_alloc),
                           0x142d7f1b0: ('reserve_vec', self.reserve),
                           0x142d7c6d0: ('windows_chkstk_mapped_stack', lambda: None),
                           0x142e32760: ('memcpy', self.copy),
                           0x142e32770: ('memmove', self.copy)})

    def zero_alloc(self):
        size = self.cpu.reg_read(self.x.UC_X86_REG_RCX)
        ptr = self.alloc(size)
        self.cpu.mem_write(ptr, bytes(size))
        self.cpu.reg_write(self.x.UC_X86_REG_RAX, ptr)

    def reserve(self):
        c, x = self.cpu, self.x
        vec = c.reg_read(x.UC_X86_REG_RCX)
        length = c.reg_read(x.UC_X86_REG_RDX)
        additional = c.reg_read(x.UC_X86_REG_R8)
        stride = self.readq(c.reg_read(x.UC_X86_REG_RSP) + 0x28)
        cap, ptr = struct.unpack('<2Q', c.mem_read(vec, 16))
        newcap = max(4, cap * 2, length + additional)
        newptr = self.alloc(newcap * stride)
        if length:
            c.mem_write(newptr, bytes(c.mem_read(ptr, length * stride)))
        c.mem_write(vec, struct.pack('<2Q', newcap, newptr))

    def copy(self):
        c, x = self.cpu, self.x
        dest, source, count = [c.reg_read(a) for a in (x.UC_X86_REG_RCX, x.UC_X86_REG_RDX, x.UC_X86_REG_R8)]
        if count:
            c.mem_write(dest, bytes(c.mem_read(source, count)))
        c.reg_write(x.UC_X86_REG_RAX, dest)

    def put_pieces(self, pieces, address):
        ptr = self.alloc(max(40, len(pieces) * 40))
        for i, piece in enumerate(pieces):
            self.cpu.mem_write(ptr + 40 * i, struct.pack('<2Q4f2B6x', piece.tag, piece.key,
                                *piece.rectangle, piece.flag, piece.flag2))
        self.cpu.mem_write(address, struct.pack('<3Q', len(pieces), ptr, len(pieces)))

    def get_pieces(self, address):
        cap, ptr, count = struct.unpack('<3Q', self.cpu.mem_read(address, 24))
        result = []
        for i in range(count):
            values = struct.unpack('<2Q4f2B6x', self.cpu.mem_read(ptr + 40 * i, 40))
            result.append(p.Piece(tuple(values[2:6]), values[0], values[1], values[6], values[7]))
        return result

    def merge(self, pieces):
        self.reset()
        self.put_pieces(pieces, 0x200000)
        self.run(0x141488be0, 0x200000)
        return self.get_pieces(0x200000)

    def remapped_provider(self):
        out = self.cpu.reg_read(self.x.UC_X86_REG_RCX)
        ptr = self.alloc(max(16, len(self.cuts) * 16))
        for i, cut in enumerate(self.cuts):
            self.cpu.mem_write(ptr + 16 * i, struct.pack('<4f', *cut))
        self.cpu.mem_write(out, struct.pack('<3Q', len(self.cuts), ptr, len(self.cuts)))

    def planner(self, regions, cuts, spacing, horizontal, samples=(), length=1, closed=False, cap_y=1):
        self.reset()
        self.put_pieces(regions, 0x200800)
        ptr = self.alloc(max(20, len(samples) * 20))
        for i, sample in enumerate(samples):
            self.cpu.mem_write(ptr + 20 * i, struct.pack('<5f', *sample))
        self.cpu.mem_write(0x200900, struct.pack('<3QfB3x', len(samples), ptr, len(samples), length, closed))
        self.cpu.mem_write(0x200538, struct.pack('<2f', length, length))
        self.cpu.mem_write(0x20051c, struct.pack('<I', 2))
        self.cuts = cuts
        if cuts:
            self.hooks[0x141484310] = ('supplied_pre_remapped_cut_provider', self.remapped_provider)
        else:
            self.hooks.pop(0x141484310, None)
        if horizontal:
            self.run(0x1414877d0, 0x200000, 0x200100, 0x200500, 0x200800,
                     stack={0x28: struct.pack('<Q', 0), 0x30: struct.pack('<Q', 0),
                            0x38: struct.pack('<Q', 0), 0x40: struct.pack('<f', spacing)})
        else:
            self.run(0x141485b80, 0x200000, 0x200100, 0x200500, 0x200900,
                     stack={0x28: struct.pack('<f', cap_y), 0x30: struct.pack('<Q', 0x200800),
                            0x38: struct.pack('<Q', 0), 0x40: struct.pack('<Q', 0),
                            0x48: struct.pack('<Q', 0), 0x50: struct.pack('<f', spacing)})
        return self.get_pieces(0x200000)

def verify(path):
    oracle = PlannerOracle(path)
    rows = []
    def check(name, inputs, expected, observed):
        a, b = old.canonical(expected), old.canonical(observed)
        rows.append(dict(routine=name, inputs=old.canonical(inputs), recovered=a,
                         original_instruction_oracle=b, bit_exact=a == b,
                         substituted_calls=dict(oracle.hook_counts)))
    tests = [[], [p.Piece((0, 0, 2, .06), 0, 0, 1, 0), p.Piece((0, .06, 2, .4), 0, 0, 1, 0)],
             [p.Piece((0, 0, 3, .06), 1, 3, 1, 1), p.Piece((1, .06, 2, .4), 1, 3, 1, 0)],
             [p.Piece((0, .2, 3, .25), 0, 0, 1, 0), p.Piece((0, 0, 2, .2), 0, 0, 1, 1),
              p.Piece((1, .25, 3, .4), 0, 0, 1, 0)]]
    for pieces in tests:
        check('merge_narrow_planks_horizontal', pieces, p.merge_narrow_planks(pieces, True), oracle.merge(pieces))
    region_cases = [[], [p.Piece((0, .2, 3, 2.4))],
                    [p.Piece((0, .2, 2, 1.2), 1, 0, 1), p.Piece((0, 1.2, 2, 2.4), 1, 0, 1)],
                    [p.Piece((0, .2, 1, 1.2), 0, 9, 0), p.Piece((1, .2, 2, 1.2), 0, 77, 0)],
                    [p.Piece((.2, .2, 1.1, 2.4)), p.Piece((1.1, .2, 2.4, 2.4))]]
    samples = [(0, 0, 0, 0, 3), (2, 0, 2, 0, 3), (3, 1, 4, 0, 3)]
    for regions in region_cases:
        for cuts in [[], [(.8, .6, 1.3, 1.9)], [(0, -.2, 3, .22)]]:
            for h in (False, True):
                for spacing in (.3, .8):
                    args = (regions, cuts, spacing, h, samples, 4, False, 2.8)
                    check('plan_horizontal_wall_boards' if h else 'plan_vertical_wall_boards', args,
                          p.plan_wall_boards(*args), oracle.planner(*args))
    rng = random.Random(39072)
    for trial in range(18):
        regions = []
        columns, lines = (5, 5) if trial == 0 else (3, 2)
        for iy in range(lines):
            for ix in range(columns):
                tag = rng.randrange(2)
                regions.append(p.Piece((ix * .43, .2 + iy * .34, (ix + 1) * .43, .2 + (iy + 1) * .34),
                                       tag, rng.randrange(3), rng.randrange(2)))
        rng.shuffle(regions)
        cuts = [] if trial % 3 == 0 else [(.38, .23, .83, .73), (.99, .3, 1.15, 1.8)]
        h = trial % 2 == 0
        spacing = [.06, .18, .7][trial % 3]
        args = (regions, cuts, spacing, h, samples, 4, bool(trial % 4), 2.8)
        check('plan_horizontal_wall_boards' if h else 'plan_vertical_wall_boards', args,
              p.plan_wall_boards(*args), oracle.planner(*args))
    zero_regions = [p.Piece((0.0,.2,1,.8),0,0,0), p.Piece((-0.0,.2,1,.8),1,2,1)]
    for h in (False, True):
        args = (zero_regions, [], .3, h, samples, 4, False, 2.8)
        check('plan_wall_boards::float_total_order_signed_zero', args, p.plan_wall_boards(*args), oracle.planner(*args))
    return dict(exe_sha256=oracle.sha, checks=len(rows), passed=all(r['bit_exact'] for r in rows),
                mismatches=sum(not r['bit_exact'] for r in rows), results=rows,
                limitations=['Finite tested inputs; original instructions execute complete planner entry points.',
                             'Nonempty cuts are supplied pre-remapped; empty-cut checks execute original remapping dependency.',
                             'Allocator, Vec reserve/growth, memcpy/memmove and finite CRT roundf/fmodf use declared host adapters.',
                             'Six padding bytes per output piece are excluded; both semantic flags and identity fields are checked.'])

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('exe', type=pathlib.Path)
    ap.add_argument('--out', type=pathlib.Path, required=True)
    args = ap.parse_args()
    result = verify(args.exe)
    with args.out.open('x', encoding='utf-8') as f:
        json.dump(result, f, indent=2)
    print(json.dumps({k: result[k] for k in ['checks', 'passed', 'mismatches']}))
    return 0 if result['passed'] else 1

if __name__ == '__main__':
    raise SystemExit(main())
