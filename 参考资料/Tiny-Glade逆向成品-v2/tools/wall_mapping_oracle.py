"""Original-instruction validation for curve, worldspace and arch cut mapping."""
import argparse
import json
import pathlib
import struct
import wall_planners_oracle as base
import wall_stairs_oracle as old
import recovered_wall_mapping as m

class MappingOracle(base.PlannerOracle):
    def put_boardspace(self, wall_length, expanded_length, original=None, expanded=None, offset=.125):
        self.cpu.mem_write(0x200500, struct.pack('<I', 1 if original is not None else 2))
        self.cpu.mem_write(0x20051c, struct.pack('<I', 1 if expanded is not None else 2))
        if original is not None:
            self.put_rectangle(original, 0x200504)
        if expanded is not None:
            self.put_rectangle(expanded, 0x200520)
        self.cpu.mem_write(0x200538, struct.pack('<3f', wall_length, expanded_length, offset))

    def put_holes(self, holes):
        ptr = self.alloc(max(20, len(holes) * 20))
        for i, (rect, kind, origin) in enumerate(holes):
            self.cpu.mem_write(ptr + i * 20, struct.pack('<4f2B2x', *rect, kind, origin))
        self.cpu.mem_write(0x200b00, struct.pack('<3Q', len(holes), ptr, len(holes)))
        return 0x200b00

    def world_data(self, curve, openings, holes, bottom_y, wall_length, freeform,
                   expanded_length, original=None, expanded=None, offset=.125):
        self.put_curve(curve)
        self.cpu.mem_write(0x200378, struct.pack('<f', bottom_y))
        self.cpu.mem_write(0x200358, struct.pack('<I', 2 if freeform else 0))
        self.cpu.mem_write(0x200390, struct.pack('<f', wall_length))
        self.put_boardspace(wall_length, expanded_length, original, expanded, offset)
        return self.put_openings(openings), self.put_holes(holes)

    def remapped_all(self, curve, openings, holes, bottom_y, wall_length, freeform,
                     expanded_length, original=None, expanded=None, offset=.125):
        self.reset()
        arch, holesptr = self.world_data(curve, openings, holes, bottom_y, wall_length, freeform,
                                         expanded_length, original, expanded, offset)
        self.run(0x141484310, 0x200000, 0x200100, 0x200500, holesptr,
                 stack={0x28: struct.pack('<Q', arch), 0x30: struct.pack('<Q', len(openings))})
        return self.rectangles()

    def planner_world(self, regions, spacing, horizontal, curve, openings, holes,
                       bottom_y, wall_length, freeform, expanded_length, samples=(), closed=False,
                       cap_y=1, original=None, expanded=None, offset=.125):
        self.reset()
        self.hooks.pop(0x141484310, None)
        arch, holesptr = self.world_data(curve, openings, holes, bottom_y, wall_length, freeform,
                                         expanded_length, original, expanded, offset)
        self.put_pieces(regions, 0x200800)
        ptr = self.alloc(max(20, len(samples) * 20))
        for i, sample in enumerate(samples):
            self.cpu.mem_write(ptr + 20 * i, struct.pack('<5f', *sample))
        self.cpu.mem_write(0x200900, struct.pack('<3QfB3x', len(samples), ptr, len(samples), expanded_length, closed))
        if horizontal:
            self.run(0x1414877d0, 0x200000, 0x200100, 0x200500, 0x200800,
                     stack={0x28: struct.pack('<Q', holesptr), 0x30: struct.pack('<Q', arch),
                            0x38: struct.pack('<Q', len(openings)), 0x40: struct.pack('<f', spacing)})
        else:
            self.run(0x141485b80, 0x200000, 0x200100, 0x200500, 0x200900,
                     stack={0x28: struct.pack('<f', cap_y), 0x30: struct.pack('<Q', 0x200800),
                            0x38: struct.pack('<Q', holesptr), 0x40: struct.pack('<Q', arch),
                            0x48: struct.pack('<Q', len(openings)), 0x50: struct.pack('<f', spacing)})
        return self.get_pieces(0x200000)
    def put_rectangle(self, rectangle, address):
        self.cpu.mem_write(address, struct.pack('<6f', *rectangle.rotation, *rectangle.center, *rectangle.dimensions))

    def rectangle_value(self, rectangle, corner, normal=False):
        self.reset()
        self.put_rectangle(rectangle, 0x200100)
        self.run(0x140df1760 if normal else 0x140df3e10, 0x200100, corner)
        return tuple(self.read_float(reg) for reg in (self.x.UC_X86_REG_XMM0, self.x.UC_X86_REG_XMM1))

    def rectangle_remap(self, distance, original, expanded, original_length, expanded_length, offset=.125):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<I', 1))
        self.put_rectangle(original, 0x200104)
        self.cpu.mem_write(0x20011c, struct.pack('<I', 1))
        self.put_rectangle(expanded, 0x200120)
        self.cpu.mem_write(0x200138, struct.pack('<3f', original_length, expanded_length, offset))
        self.run(0x141483e90, 0x200100, xmm={1: distance})
        return self.read_float(self.x.UC_X86_REG_XMM0)
    def put_curve(self, curve, address=0x200100):
        points = self.alloc(len(curve.points) * 8)
        values = self.alloc(len(curve.u_values) * 4)
        for i, point in enumerate(curve.points):
            self.cpu.mem_write(points + i * 8, struct.pack('<2f', *point))
        for i, value in enumerate(curve.u_values):
            self.cpu.mem_write(values + i * 4, struct.pack('<f', value))
        self.cpu.mem_write(address, struct.pack('<6Qf', len(curve.points), points, len(curve.points),
                               len(curve.u_values), values, len(curve.u_values), curve.length))

    def nearest(self, curve, point, world=False):
        self.reset()
        self.put_curve(curve)
        if world:
            self.cpu.mem_write(0x200800, struct.pack('<3f', *point))
            self.run(0x140dea520, 0x200800, 0x200100)
        else:
            self.run(0x141e38fb0, 0x200100, r9=0x200900, xmm={1: point[0], 2: point[1]})
        return self.read_float(self.x.UC_X86_REG_XMM0)

    def put_openings(self, openings):
        ptr = self.alloc(max(104, len(openings) * 104))
        self.cpu.mem_write(ptr, bytes(max(104, len(openings) * 104)))
        for i, (offsets, positions) in enumerate(openings):
            heights = self.alloc(max(4, len(offsets) * 4))
            points = self.alloc(max(12, len(positions) * 12))
            for j, height in enumerate(offsets):
                self.cpu.mem_write(heights + j * 4, struct.pack('<f', height))
            for j, point in enumerate(positions):
                self.cpu.mem_write(points + j * 12, struct.pack('<3f', *point))
            self.cpu.mem_write(ptr + 104 * i, struct.pack('<6Q', len(offsets), heights, len(offsets),
                                   len(positions), points, len(positions)))
        return ptr

    def arch(self, curve, openings, bottom_y, wall_length, freeform):
        self.reset()
        self.put_curve(curve)
        self.cpu.mem_write(0x200378, struct.pack('<f', bottom_y))
        self.cpu.mem_write(0x200358, struct.pack('<I', 2 if freeform else 0))
        self.cpu.mem_write(0x200390, struct.pack('<f', wall_length))
        ptr = self.put_openings(openings)
        self.run(0x1414853f0, 0x200000, 0x200100, ptr, len(openings))
        return self.rectangles()

    def remap_x(self, distance, original_length, expanded_length):
        self.reset()
        self.cpu.mem_write(0x200100, struct.pack('<I', 2))
        self.cpu.mem_write(0x20011c, struct.pack('<I', 2))
        self.cpu.mem_write(0x200138, struct.pack('<2f', original_length, expanded_length))
        self.run(0x141483e90, 0x200100, xmm={1: distance})
        return self.read_float(self.x.UC_X86_REG_XMM0)

    def remapped_arch(self, curve, openings, bottom_y, wall_length, freeform, expanded_length):
        self.reset()
        self.put_curve(curve)
        self.cpu.mem_write(0x200378, struct.pack('<f', bottom_y))
        self.cpu.mem_write(0x200358, struct.pack('<I', 2 if freeform else 0))
        self.cpu.mem_write(0x200390, struct.pack('<f', wall_length))
        self.cpu.mem_write(0x200500, struct.pack('<I', 2))
        self.cpu.mem_write(0x20051c, struct.pack('<I', 2))
        self.cpu.mem_write(0x200538, struct.pack('<2f', wall_length, expanded_length))
        ptr = self.put_openings(openings)
        self.run(0x141484310, 0x200000, 0x200100, 0x200500, 0,
                 stack={0x28: struct.pack('<Q', ptr), 0x30: struct.pack('<Q', len(openings))})
        return self.rectangles()

def verify(path):
    oracle = MappingOracle(path)
    results = []
    def check(name, inputs, expected, observed):
        a, b = old.canonical(expected), old.canonical(observed)
        results.append(dict(routine=name, inputs=old.canonical(inputs), recovered=a,
                            original_instruction_oracle=b, bit_exact=a == b,
                            substituted_calls=dict(oracle.hook_counts)))
    curves = [m.Curve2(((0, 0), (1, 0), (1, 3)), (0, .25, 1), 4),
              m.Curve2(((0, 0), (1, 0), (1, 1), (0, 1), (0, 0)), (0, .25, .5, .75, 1), 4),
              m.Curve2(((1, 2), (1, 2), (3, -1)), (0, 0, 1), 3.605551275)]
    for curve in curves:
        for point in [(-.2, .2), (.4, .03), (1.2, 2.3), (.1, .9), (3.4, -.8)]:
            check('Curve::get_approx_u_from_pos', (curve, point), m.nearest_curve_u(curve, point), oracle.nearest(curve, point))
            xyz = (point[0], 99.0, point[1])
            check('WallSpaceCoord::from_world_space', (curve, xyz), m.world_to_wallspace(curve, xyz), oracle.nearest(curve, xyz, True))
    closed_curve = curves[1]
    opening_cases = [[], [([], [])], [([1, 2], [(0, .3, .1), (.5, .4, 0)])],
                     [([1, 2, 1], [(0, .2, .2), (.3, .4, 0), (.6, .2, 0)])],
                     [([1, 1, 2], [(0, .2, .2), (1, .2, .7), (.1, .3, 1)])],
                     [([1, 2, 1], [(.1, .3, 0), (.3, .2, 0), (.6, .4, 0)])],
                     [([1, 2], [(.1, .3, 0), (.6, .4, 0)]), ([2, 1], [(0, .2, .2), (.5, .3, 0)])]]
    for openings in opening_cases:
        for freeform in (False, True):
            args = (closed_curve, openings, .2, 4, freeform)
            expected = m.arch_openings_to_aabb2(*args)
            check('arch_openings_to_aabb2', args, expected, oracle.arch(*args))
            args2 = args + (4.8,)
            check('remapped_wall_cutouts::arch_linear', args2,
                  m.remap_cutouts_linear(expected, 4, 4.8), oracle.remapped_arch(*args2))
    for original, expanded in [(4, 4.8), (2.3, 1.9)]:
        for distance in (-.2, 0, .2, 1.8, 2.3, 4, 4.9):
            args = (distance, original, expanded)
            check('BoardWallSpace::remap_x::linear', args, m.remap_x_linear(*args), oracle.remap_x(*args))
    for rectangle in [m.Rectangle2((1, 0), (0, 0), (2, 3)),
                      m.Rectangle2((.6, .8), (-1.2, .3), (.8, 2.3)),
                      m.Rectangle2((0, -1), (1, -.2), (3, 1))]:
        for corner in range(5):
            args = (rectangle, corner)
            check('Rectangle2d::get_point', args, m.rectangle_point(*args), oracle.rectangle_value(*args))
        for edge in range(4):
            args = (rectangle, edge)
            check('Rectangle2d::get_edge_normal', args, m.rectangle_edge_normal(*args), oracle.rectangle_value(*args, normal=True))
        expanded = m.Rectangle2(rectangle.rotation, rectangle.center, tuple(v + .25 for v in rectangle.dimensions))
        original_length = sum(rectangle.dimensions) * 2
        expanded_length = sum(expanded.dimensions) * 2
        for distance in [-.2, 0, .2, 1.2, 2.5, original_length - .00005, original_length, original_length + 1]:
            args = (distance, rectangle, expanded, original_length, expanded_length)
            check('BoardWallSpace::remap_x::rectangle', args, m.remap_x_rectangle(*args), oracle.rectangle_remap(*args))
    world = curves[1]
    holes = [((.2, .4, .8, 1.6), 0, 0), ((.4, .6, 1.1, 2.1), 1, 3), ((3.1, .2, 4, .8), 2, 1)]
    for openings in opening_cases:
        for freeform in (False, True):
            args = (world, openings, holes, .2, 4, freeform, 4.8)
            check('remapped_wall_cutouts::holes_and_arch', args, m.remapped_wall_cutouts(*args), oracle.remapped_all(*args))
            for horizontal in (False, True):
                regions = [base.p.Piece((0, .2, 4.8, 2.5)), base.p.Piece((1, 2.5, 3, 3), 1, 1, 1)]
                samples = [(0, 0, 0, 0, 3), (1, 0, 1.2, 0, 3), (1, 1, 2.4, 0, 3),
                           (0, 1, 3.6, 0, 3), (0, 0, 4.8, 0, 3)]
                planner_args = (regions, .31, horizontal) + args + (samples, not freeform, 2.9)
                check('plan_horizontal_wall_boards::world_inputs' if horizontal else 'plan_vertical_wall_boards::world_inputs',
                      planner_args, m.plan_wall_boards_from_world(*planner_args), oracle.planner_world(*planner_args))
    for original in [m.Rectangle2((1, 0), (0, 0), (2, 3)), m.Rectangle2((.6, .8), (-1.2, .3), (.8, 2.3))]:
        expanded = m.Rectangle2(original.rotation, original.center, tuple(v + .25 for v in original.dimensions))
        wall_length = sum(original.dimensions) * 2
        expanded_length = sum(expanded.dimensions) * 2
        points = tuple(m.rectangle_point(original, i) for i in range(5))
        us = tuple(base.r.rectangle_point_u(*original.dimensions, i) for i in range(5))
        curve = m.Curve2(points, us, wall_length)
        ax, az = m.rectangle_point(original, 0)
        bx, bz = m.rectangle_point(original, 1)
        openings = [([1.3, 1.5], [(ax, .4, az), (ax * .3 + bx * .7, .3, az * .3 + bz * .7)])]
        holes = [((.2, .8, .9, 1.4), 1, 0), ((1.1, .5, 1.8, .9), 0, 1)]
        mapping_args = (curve, openings, holes, .2, wall_length, False, expanded_length, original, expanded)
        check('remapped_wall_cutouts::rectangle_world_inputs', mapping_args,
              m.remapped_wall_cutouts(*mapping_args), oracle.remapped_all(*mapping_args))
        samples = [(*m.rectangle_point(expanded, i), base.r.f32(base.r.rectangle_point_u(*expanded.dimensions, i) * expanded_length), 0, 3)
                   for i in range(5)]
        for horizontal in (False, True):
            for spacing in (.3, .6):
                regions = [base.p.Piece((0, .2, expanded_length, 2.5))]
                args = (regions, spacing, horizontal, curve, openings, holes, .2, wall_length, False,
                        expanded_length, samples, True, 2.9, original, expanded)
                check('plan_horizontal_wall_boards::rectangle_world_inputs' if horizontal else 'plan_vertical_wall_boards::rectangle_world_inputs',
                      args, m.plan_wall_boards_from_world(*args), oracle.planner_world(*args))
    return dict(exe_sha256=oracle.sha, checks=len(results), passed=all(v['bit_exact'] for v in results),
                mismatches=sum(not v['bit_exact'] for v in results), results=results,
                limitations=['Finite sampled domains; line-segment curve points/u-values supplied as actual ABI data.',
                             'Original nearest, world conversion, arch conversion and remap instructions execute without geometry hooks.',
                             'Only declared allocator/Vec/memory/finite-CRT adapters inherited from planner oracle are substituted.',
                             'Both linear and rectangle-to-expanded-rectangle mapping are represented.',
                             'Window holes use actual 20-byte records; arch data uses two vectors per 104-byte record.',
                             'The original complete planner consumes world arch/window inputs without any geometry/provider hooks.'])

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
