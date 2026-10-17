"""Construct arbitrary native mesh/box scenes and execute original RaycastWorld.

Uses original SharedShape constructors, ColliderBuilder, Rapier, QBVH and Shape
casts. Native state below is reconstructed for the SHA-bound executable; no
geometry, collision-result or query-provider hook is installed.
python raycast_scene_oracle.py EXE --verify --out NEW.json
python raycast_scene_oracle.py EXE --scene SCENE.json --ray 0 3 0 0 -1 0
"""
import argparse
import dataclasses
import json
import math
import pathlib
import struct
import recovered_scene_query as q
import recovered_stair_terrain as terrain
import stair_terrain_oracle as old
import wall_stairs_oracle as canonical

class NativeSceneOracle(old.TerrainOracle):
    def __init__(self, path):
        self.native_entries = {}
        self.observed_entries = {
            0x141b3b160: 'SharedShape::cuboid', 0x141b3b1f0: 'SharedShape::trimesh',
            0x140cd4920: 'ColliderBuilder::build', 0x1409edd20: 'RaycastWorld::raycast_simple',
            0x1409f9030: 'Rapier::raycast_simple', 0x141a08930: 'QueryPipeline::cast_ray',
            0x141d06040: 'Qbvh::traverse_best_first_node', 0x141a07850: 'map_typed_part_at',
            0x141b40060: 'local_ray_intersection_with_triangle',
        }
        super().__init__(path)
        self.hooks[0x142db07d0] = ('grow_binary_heap_stride8', lambda: self.grow(8))
        self.hooks[0x1406abad0] = ('rust_realloc', self.reallocate)

    def on_code(self, cpu, address, size, user):
        name = self.observed_entries.get(address)
        if name:
            self.native_entries[name] = self.native_entries.get(name, 0) + 1
        super().on_code(cpu, address, size, user)

    def reallocate(self):
        c, x = self.cpu, self.x
        ptr, old_size, new_size = [c.reg_read(v) for v in (x.UC_X86_REG_RCX, x.UC_X86_REG_RDX, x.UC_X86_REG_R9)]
        target = self.alloc(new_size)
        c.mem_write(target, bytes(c.mem_read(ptr, min(old_size, new_size))))
        c.reg_write(x.UC_X86_REG_RAX, target)

    def native_shape(self, collider):
        c, x = self.cpu, self.x
        if collider.kind == 'cuboid':
            self.run(0x141b3b160, xmm={i: v for i, v in enumerate(collider.half_extents)})
        elif collider.kind == 'mesh':
            vertices = self.alloc(len(collider.vertices) * 12)
            indices = self.alloc(len(collider.indices) * 12)
            for i, point in enumerate(collider.vertices):
                c.mem_write(vertices + i * 12, struct.pack('<3f', *point))
            for i, triangle in enumerate(collider.indices):
                c.mem_write(indices + i * 12, struct.pack('<3I', *triangle))
            c.mem_write(0x200700, struct.pack('<3Q', len(collider.vertices), vertices, len(collider.vertices)))
            c.mem_write(0x200720, struct.pack('<3Q', len(collider.indices), indices, len(collider.indices)))
            self.run(0x141b3b1f0, 0x200700, 0x200720)
        else:
            raise ValueError('kind must be mesh or cuboid')
        shape, vtable = c.reg_read(x.UC_X86_REG_RAX), c.reg_read(x.UC_X86_REG_RDX)
        self.observed_entries[self.readq(vtable + 0x30)] = 'Shape::cast_ray<' + collider.kind + '>'
        return shape, vtable

    def native_collider(self, collider, identity):
        c = self.cpu
        shape, vtable = self.native_shape(collider)
        self.run(0x140cd48c0, 0x200600, shape, vtable)
        c.mem_write(0x200620, struct.pack('<2Q', identity, 0))
        c.mem_write(0x200648, struct.pack('<4f', *collider.rotation_q))
        c.mem_write(0x200658, struct.pack('<3f', *collider.center))
        body = self.alloc(176)
        self.run(0x140cd4920, body, 0x200600)
        return bytes(c.mem_read(body, 176))

    def put_qbvh(self, address, boxes):
        c = self.cpu
        nodes = []
        def build(entries):
            index = len(nodes)
            nodes.append(None)
            if len(entries) <= 4:
                children = list(entries)
                volumes = [boxes[i] for i in entries]
                leaf = True
            else:
                chunk = math.ceil(len(entries) / 4)
                groups = [entries[i:i + chunk] for i in range(0, len(entries), chunk)]
                children = [build(group) for group in groups]
                volumes = [q.bounds([v for i in group for v in boxes[i]]) for group in groups]
                leaf = False
            nodes[index] = children, volumes, leaf
            return index
        build(list(range(len(boxes))))
        ptr = self.alloc(len(nodes) * 128)
        c.mem_write(ptr, bytes(len(nodes) * 128))
        for i, (children, volumes, leaf) in enumerate(nodes):
            entry = ptr + i * 128
            for axis in range(3):
                lows = [v[0][axis] for v in volumes] + [3.4028234663852886e38] * (4 - len(volumes))
                highs = [v[1][axis] for v in volumes] + [-3.4028234663852886e38] * (4 - len(volumes))
                c.mem_write(entry + axis * 16, struct.pack('<4f', *lows))
                c.mem_write(entry + 48 + axis * 16, struct.pack('<4f', *highs))
            c.mem_write(entry + 96, struct.pack('<4I', *(children + [0xffffffff] * (4 - len(children)))))
            c.mem_write(entry + 120, bytes([leaf]))
        proxies = self.alloc(len(boxes) * 16)
        for i in range(len(boxes)):
            c.mem_write(proxies + i * 16, struct.pack('<4I', 0, 0, i, 0))
        c.mem_write(address + 24, struct.pack('<3Q', len(nodes), ptr, len(nodes)))
        c.mem_write(address + 96, struct.pack('<3Q', len(boxes), proxies, len(boxes)))

    def build_scene(self, colliders):
        self.reset()
        self.native_entries = {}
        self.hooks.pop(0x1409edd20, None)
        self.colliders = [v if isinstance(v, q.Collider) else q.Collider.from_dict(v) for v in colliders]
        world = self.alloc(0x5000)
        self.cpu.mem_write(world, bytes(0x5000))
        records = self.alloc(max(40, len(colliders) * 40))
        self.cpu.mem_write(records, bytes(max(40, len(colliders) * 40)))
        self.cpu.mem_write(world, struct.pack('<3Q', len(colliders), records, len(colliders)))
        layers = {}
        for identity, collider in enumerate(self.colliders):
            if collider.layer < 0 or collider.layer >= 17:
                raise ValueError('matched Rapier scene has 17 layers, numbered 0..16')
            self.cpu.mem_write(records + identity * 40, bytes([collider.tag, collider.flag]))
            self.cpu.mem_write(records + identity * 40 + 8, struct.pack('<Q', identity))
            self.cpu.mem_write(records + identity * 40 + 32, struct.pack('<I', 1))
            layers.setdefault(collider.layer, []).append((self.native_collider(collider, identity), q.collider_bounds(collider)))
        for layer, entries in layers.items():
            arena = self.alloc(len(entries) * 192)
            self.cpu.mem_write(arena, bytes(len(entries) * 192))
            for i, (body, volume) in enumerate(entries):
                self.cpu.mem_write(arena + i * 192, struct.pack('<2I', 1, 0))
                self.cpu.mem_write(arena + i * 192 + 16, body)
            self.cpu.mem_write(world + 0x20 + layer * 0x390, struct.pack('<3Q', len(entries), arena, len(entries)))
            self.put_qbvh(world + 0xe0 + layer * 0x390, [v for _, v in entries])
        self.world = world
        return world

    def cast_ray(self, origin, direction, max_t=3.4028234663852886e38, mask=0x202):
        self.cpu.mem_write(0x200200, struct.pack('<6f', *origin, *direction))
        self.run(0x1409edd20, 0x200000, self.world, 0x200200,
                 xmm={3: max_t}, stack={0x28: struct.pack('<I', mask)})
        data = bytes(self.cpu.mem_read(0x200000, 40))
        if data[0] == 17:
            return None
        return dict(tag=data[0], flag=data[1], collider=struct.unpack_from('<Q', data, 8)[0],
                    position=struct.unpack_from('<3f', data, 24), toi=struct.unpack_from('<f', data, 36)[0])

    def station_at_scene(self, position, points, widths, tangents, samples):
        self.put_terrain(samples)
        self.put_path(points)
        self.cpu.mem_write(0x200200, struct.pack('<3f', *position))
        widthptr, tangentptr = self.alloc(len(widths) * 4), self.alloc(len(tangents) * 8)
        for i, width in enumerate(widths):
            self.cpu.mem_write(widthptr + i * 4, struct.pack('<f', width))
        for i, tangent in enumerate(tangents):
            self.cpu.mem_write(tangentptr + i * 8, struct.pack('<2f', *tangent))
        self.run(0x140827820, 0x200000, 0x200200, 0x200500, widthptr,
                 stack={0x28: struct.pack('<Q', len(widths)), 0x30: struct.pack('<Q', tangentptr),
                        0x38: struct.pack('<Q', len(tangents)), 0x40: struct.pack('<Q', 0),
                        0x48: struct.pack('<f', 0), 0x50: struct.pack('<Q', 0x200100), 0x58: struct.pack('<Q', self.world)})
        return struct.unpack('<16f', self.cpu.mem_read(0x200000, 64))

def verify(path):
    oracle = NativeSceneOracle(path)
    plane = q.Collider('mesh', vertices=((-3, 0, -3), (3, 0, -3), (3, 0, 3), (-3, 0, 3)), indices=((0,1,2),(0,2,3)))
    slope = dataclasses.replace(plane, vertices=tuple((x, .2*x + .3*z + .4, z) for x,y,z in plane.vertices))
    cube = q.Collider('cuboid', half_extents=(1.4,.7,1.2), center=(.2,.3,-.1))
    rotated = dataclasses.replace(cube, rotation_q=(0,0,.382683432365,.923879532511))
    grid_vertices = tuple((x*2, .1*x + .07*z, z*2) for z in range(-2,3) for x in range(-2,3))
    grid_indices = tuple(t for z in range(4) for x in range(4)
                         for t in ((z*5+x,z*5+x+1,(z+1)*5+x+1), (z*5+x,(z+1)*5+x+1,(z+1)*5+x)))
    grid_mesh = q.Collider('mesh', vertices=grid_vertices, indices=grid_indices, flag=0)
    scenes = [[], [plane], [slope], [cube], [rotated],
              [plane, dataclasses.replace(cube, layer=9, tag=1, flag=0)],
              [dataclasses.replace(plane, layer=3), dataclasses.replace(cube, layer=9)],
              [dataclasses.replace(cube, center=(x*3,.3,0)) for x in range(-3,4)], [grid_mesh]]
    rays = [((0,4,0),(0,-1,0),100,0x202), ((.4,3,-.7),(0,-1,0),100,0x202),
            ((4,3,4),(0,-1,0),100,0x202), ((-2,2,-1),(.2,-1,.1),100,0x202),
            ((0,4,0),(0,-1,0),.2,0x202), ((0,4,0),(0,-1,0),100,1<<9),
            ((0,4,0),(0,-1,0),100,1<<3), ((0,.3,0),(1,0,0),100,0x202)]
    results = []
    for colliders in scenes:
        scene = q.Scene(colliders)
        oracle.build_scene(colliders)
        for args in rays:
            recovered = scene.cast_ray(*args)
            observed = oracle.cast_ray(*args)
            expected = None if recovered is None else dataclasses.asdict(recovered)
            if expected is not None:
                expected.pop('primitive')
            passed = (expected is None) == (observed is None)
            error = 0.0
            if expected is not None and observed is not None:
                passed &= all(expected[k] == observed[k] for k in ('tag','flag','collider'))
                error = max(abs(expected['toi'] - observed['toi']), *(abs(a-b) for a,b in zip(expected['position'],observed['position'])))
                passed &= error <= 2e-5
            results.append(dict(routine='RaycastWorld::raycast_simple::populated_scene',
                                colliders=canonical.canonical(colliders), ray=canonical.canonical(args),
                                recovered=expected, original=observed, max_absolute_error=error, passed=passed,
                                native_entry_counts=dict(oracle.native_entries), substituted_calls=dict(oracle.hook_counts)))
        ground = terrain.Terrain512([0] * (512*512), -.5, 0, True)
        for position in ((.3,2.4,-.2), (1.5,2.7,.4)):
            points, widths, tangents = [(-2,0,0),(0,1,0),(2,2,0)], [1.1,.8,1.4], [(1,0),(.6,.8),(0,1)]
            expected = terrain.support_station_at(position, points, widths, tangents, ground, raycast=scene.ground_provider)
            observed = oracle.station_at_scene(position, points, widths, tangents, ground)
            error = max(abs(a-b) for a,b in zip(expected,observed))
            results.append(dict(routine='support_station_at::populated_native_scene',
                                colliders=canonical.canonical(colliders), position=position,
                                recovered=expected, original=observed, max_absolute_error=error, passed=error <= 2e-5,
                                native_entry_counts=dict(oracle.native_entries), substituted_calls=dict(oracle.hook_counts)))
    return dict(exe_sha256=oracle.sha, checks=len(results), passed=all(v['passed'] for v in results),
                mismatches=sum(not v['passed'] for v in results), max_absolute_error=max(v['max_absolute_error'] for v in results),
                tolerance=2e-5, results=results,
                limitations=['Independent math and median BVH are distinguished from original constructors/QBVH/ShapeCast.',
                             'Native oracle includes arbitrary finite valid triangular meshes and boxes with unit-quaternion transforms.',
                             'The scene ABI uses 17 layers, 192-byte collider Arena entries, 128-byte QBVH nodes and 16-byte proxies.',
                             'Native meshes are built by original EXE instructions; no geometry/query/result hook is installed.',
                             'Equal-distance tie ordering, malformed meshes, full collider lifecycle/update scheduling remain outside this validation.'])

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('exe', type=pathlib.Path)
    ap.add_argument('--verify', action='store_true')
    ap.add_argument('--out', type=pathlib.Path)
    ap.add_argument('--scene', type=pathlib.Path)
    ap.add_argument('--ray', type=float, nargs=6)
    ap.add_argument('--mask', type=lambda v: int(v,0), default=0x202)
    ap.add_argument('--max-t', type=float, default=1000)
    args = ap.parse_args()
    if args.verify:
        result = verify(args.exe)
        with args.out.open('x',encoding='utf-8') as f:
            json.dump(result,f,indent=2)
        print(json.dumps({k:result[k] for k in ('checks','passed','mismatches','max_absolute_error')}))
        return 0 if result['passed'] else 1
    oracle = NativeSceneOracle(args.exe)
    oracle.build_scene(q.Scene.from_json(args.scene).colliders)
    print(json.dumps(oracle.cast_ray(args.ray[:3],args.ray[3:],args.max_t,args.mask),indent=2))
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
