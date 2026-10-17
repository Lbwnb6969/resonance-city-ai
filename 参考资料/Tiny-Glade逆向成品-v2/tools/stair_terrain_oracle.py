"""Original instruction validation of terrain and complete stair support branches.

Empty-world checks execute original RaycastWorld/Rapier/QueryPipeline/QBVH code;
controlled-hit checks provide explicit result records at RaycastWorld boundary.
Terrain sampling always executes original EXE instructions, including u16 loads.
"""
import argparse
import array
import hashlib
import json
import pathlib
import struct
import wall_planners_oracle as base
import wall_stairs_oracle as old
import recovered_stair_terrain as s

class TerrainOracle(base.PlannerOracle):
    def put_path(self, points):
        ptr = self.alloc(max(12, len(points) * 12))
        for i, point in enumerate(points):
            self.cpu.mem_write(ptr + i * 12, struct.pack('<3f', *point))
        self.cpu.mem_write(0x200500, struct.pack('<3Q', len(points), ptr, len(points)))

    def curve_coord(self, points, position):
        self.reset()
        self.put_path(points)
        self.run(0x1413fa210, 0x200500, xmm={1: position[0], 2: position[2]})
        return self.cpu.reg_read(self.x.UC_X86_REG_RAX) & 0xffffffff, self.read_float(self.x.UC_X86_REG_XMM0)

    def station_at(self, position, points, widths, tangents, terrain):
        self.reset()
        self.put_terrain(terrain)
        self.put_path(points)
        self.cpu.mem_write(0x200200, struct.pack('<3f', *position))
        widthptr = self.alloc(len(widths) * 4)
        tangentptr = self.alloc(len(tangents) * 8)
        for i, width in enumerate(widths):
            self.cpu.mem_write(widthptr + i * 4, struct.pack('<f', width))
        for i, tangent in enumerate(tangents):
            self.cpu.mem_write(tangentptr + i * 8, struct.pack('<2f', *tangent))
        world = self.alloc(0x5000)
        self.cpu.mem_write(world, bytes(0x5000))
        self.hooks.pop(0x1409edd20, None)
        self.observed_rays = []
        self.run(0x140827820, 0x200000, 0x200200, 0x200500, widthptr,
                 stack={0x28: struct.pack('<Q', len(widths)), 0x30: struct.pack('<Q', tangentptr),
                        0x38: struct.pack('<Q', len(tangents)), 0x40: struct.pack('<Q', 0),
                        0x48: struct.pack('<f', 0), 0x50: struct.pack('<Q', 0x200100), 0x58: struct.pack('<Q', world)})
        return struct.unpack('<16f', self.cpu.mem_read(0x200000, 64))
    def put_terrain(self, terrain):
        raw = array.array('H', terrain.samples).tobytes()
        ptr = self.alloc(len(raw))
        self.cpu.mem_write(ptr, raw)
        self.cpu.mem_write(0x200100, struct.pack('<3Q', len(terrain.samples), ptr, len(terrain.samples)))
        self.cpu.mem_write(0x200150, struct.pack('<2f', terrain.low, terrain.high))
        # Runtime data pointer referenced by the original sampler, not a code patch.
        self.cpu.mem_write(0x143ca4b38, struct.pack('<Q', 0x200f00))
        self.cpu.mem_write(0x200f00, bytes([terrain.texel_center_mode]))

    def terrain(self, terrain, x, z):
        self.reset()
        self.put_terrain(terrain)
        self.run(0x14140ce00, 0x200100, xmm={1: x, 2: z})
        return self.read_float(self.x.UC_X86_REG_XMM0)

    def hit_provider(self):
        out = self.cpu.reg_read(self.x.UC_X86_REG_RCX)
        ray = self.cpu.reg_read(self.x.UC_X86_REG_R8)
        values = struct.unpack('<6f', self.cpu.mem_read(ray, 24))
        hit = self.hits[len(self.observed_rays)]
        self.observed_rays.append(dict(origin=values[:3], direction=values[3:],
                                       mask=self.readq(self.cpu.reg_read(self.x.UC_X86_REG_RSP) + 0x28) & 0xffffffff))
        raw = bytearray(40)
        raw[0], raw[1] = hit.tag, hit.flag
        struct.pack_into('<f', raw, 28, hit.hit_y)
        self.cpu.mem_write(out, bytes(raw))

    def support_terrain(self, position, width, tangent, terrain, hits=None):
        self.reset()
        self.put_terrain(terrain)
        self.cpu.mem_write(0x200200, struct.pack('<3f', *position))
        world = self.alloc(0x5000)
        self.cpu.mem_write(world, bytes(0x5000))
        self.observed_rays = []
        if hits is None:
            self.hooks.pop(0x1409edd20, None)
        else:
            self.hits = hits
            self.hooks[0x1409edd20] = ('controlled_collision_result_provider', self.hit_provider)
        self.run(0x1408279f0, 0x200000, 0x200200, xmm={2: width, 3: tangent[0]},
                 stack={0x28: struct.pack('<f', tangent[1]), 0x30: b'\x00', 0x38: struct.pack('<f', 0),
                        0x40: struct.pack('<Q', 0x200100), 0x48: struct.pack('<Q', world)})
        return struct.unpack('<16f', self.cpu.mem_read(0x200000, 64))

def verify(path):
    oracle = TerrainOracle(path)
    data = array.array('H', ((x * 97 + z * 211 + (x * z % 17) * 1301) % 65536
                             for z in range(512) for x in range(512)))
    digest = hashlib.sha256(data.tobytes()).hexdigest()
    results = []
    def check(name, inputs, expected, observed):
        a, b = old.canonical(expected), old.canonical(observed)
        results.append(dict(routine=name, inputs=old.canonical(inputs), recovered=a,
                            original_instruction_oracle=b, bit_exact=a == b,
                            substituted_calls=dict(oracle.hook_counts), rays=oracle.observed_rays if hasattr(oracle, 'observed_rays') else []))
    points = [(0, 0), (.13, .17), (-64.99, -64.97), (64.99, 64.97), (-65, -65), (65, 65),
              (-80, 2), (3, 90), (4.31, -2.7), (-12.3, 41.8), (.001, -.001)]
    for mode in (False, True):
        for low, high in [(0, 1), (-2.3, 4.1)]:
            terrain = s.Terrain512(data, low, high, mode)
            metadata = dict(samples_sha256=digest, low=low, high=high, texel_center_mode=mode)
            for x, z in points:
                check('TerrainHeightsData::sample_at_world_xz', (metadata, x, z),
                      s.sample_terrain_xz(terrain, x, z), oracle.terrain(terrain, x, z))
            for position in [(.4, 2.1, -.7), (64.95, .3, -64.95)]:
                for tangent in [(.6, -.8), (1, 0)]:
                    args = (position, 1.3, tangent, terrain)
                    check('support_station_from_sample::original_empty_collision_world',
                          (position, 1.3, tangent, metadata), s.support_station_from_sample(*args), oracle.support_terrain(*args))
                    for hits in [[s.GroundHit(1, 0, .7), s.GroundHit(2, 0, 1.1), s.GroundHit(2, 1, -.4)],
                                 [s.GroundHit(17), s.GroundHit(3, 0, .8), s.GroundHit(0, 0, .4)]]:
                        iterator = iter(hits)
                        expected = s.support_station_from_sample(*args, raycast=lambda origin: next(iterator))
                        observed = oracle.support_terrain(*args, hits=hits)
                        check('support_station_from_sample::controlled_collision_results',
                              (position, 1.3, tangent, metadata, hits), expected, observed)
    paths = [[(0, 0, 0), (1, 3, 0), (1, -7, 3)], [(0, 0, 0), (0, 5, 0), (1, -2, 1)]]
    terrain = s.Terrain512(data, -2.3, 4.1, True)
    for points in paths:
        for position in [(.3, 99, .1), (1.2, -10, 2.3), (-.4, 1, -.2), (3, 2, 4)]:
            check('Curve<Vec3>::get_approx_coord_from_pos', (points, position),
                  s.nearest_curve_coord_xz(points, position), oracle.curve_coord(points, position))
            for tangents in [[(1, 0), (.6, .8), (0, 1)], [(0, 0), (0, 0), (0, 0)]]:
                widths = [1.1, .8, 1.4]
                check('support_station_at::original_empty_collision_world', (points, position, widths, tangents, digest),
                      s.support_station_at(position, points, widths, tangents, terrain),
                      oracle.station_at(position, points, widths, tangents, terrain))
    return dict(exe_sha256=oracle.sha, checks=len(results), passed=all(v['bit_exact'] for v in results),
                mismatches=sum(not v['bit_exact'] for v in results), results=results,
                terrain_grid=dict(side=512, samples_sha256=digest, format='little-endian-u16',
                                  generator='(x*97 + z*211 + ((x*z)%17)*1301) % 65536'),
                limitations=['Two runtime sampling-flag modes are explicit inputs; installed game current flag was not observed.',
                             'Empty collision-world path executes original Rapier/QBVH query code with zero nodes.',
                             'Populated-collision results are explicitly substituted at RaycastWorld boundary; original dispatch/terrain remain intact.',
                             'Original terrain u16 decoder and bilinear sampler execute, with supplied 512x512 sample grid.',
                             'Arbitrary populated Rapier collider/QBVH generation and traversal are not yet reconstructed.'])

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
