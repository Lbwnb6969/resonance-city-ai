"""Standalone mesh/box scene queries and Tiny Glade stair integration.

Triangle intersection follows the matched parry3d 0.17.0 implementation:
https://docs.rs/parry3d/0.17.0/src/parry3d/query/ray/ray_triangle.rs.html
Scalar operations use f32. The median binary BVH is a new portable acceleration
structure; it does not claim to reproduce the game's four-wide QBVH topology.
python recovered_scene_query.py --scene SCENE.json --ray 0 3 0 0 -1 0
"""
import argparse
import dataclasses
import json
import math
import pathlib
import recovered_wall_stairs as r

def add(a, b):
    return tuple(r.f32(x + y) for x, y in zip(a, b))

def sub(a, b):
    return tuple(r.f32(x - y) for x, y in zip(a, b))

def mul(a, value):
    return tuple(r.f32(x * value) for x in a)

def dot(a, b):
    return r.f32(r.f32(r.f32(a[0] * b[0]) + r.f32(a[1] * b[1])) + r.f32(a[2] * b[2]))

def cross(a, b):
    return (r.f32(r.f32(a[1] * b[2]) - r.f32(a[2] * b[1])),
            r.f32(r.f32(a[2] * b[0]) - r.f32(a[0] * b[2])),
            r.f32(r.f32(a[0] * b[1]) - r.f32(a[1] * b[0])))

def rotate(vector, quaternion):
    xyz, w = quaternion[:3], quaternion[3]
    twice = mul(cross(xyz, vector), 2.0)
    return add(add(vector, mul(twice, w)), cross(xyz, twice))

def ray_triangle(origin, direction, a, b, c):
    ab, ac = sub(b, a), sub(c, a)
    normal = cross(ab, ac)
    denominator = dot(normal, direction)
    if denominator == 0:
        return None
    ap = sub(origin, a)
    signed = dot(ap, normal)
    if (signed < 0 and denominator < 0) or (signed > 0 and denominator > 0):
        return None
    denominator = abs(denominator)
    edge = mul(cross(direction, ap), -1.0)
    if signed < 0:
        v, w = -dot(ac, edge), dot(ab, edge)
    else:
        v, w = dot(ac, edge), -dot(ab, edge)
    if v < 0 or v > denominator or w < 0 or r.f32(v + w) > denominator:
        return None
    return r.f32(abs(signed) * r.f32(1.0 / denominator))

def ray_aabb(origin, direction, bounds, solid=True):
    near, far = -math.inf, math.inf
    for i, component in enumerate(direction):
        low, high = bounds[0][i], bounds[1][i]
        if component == 0:
            if origin[i] < low or high < origin[i]:
                return None
            continue
        a = r.f32(r.f32(low - origin[i]) / component)
        b = r.f32(r.f32(high - origin[i]) / component)
        near, far = max(near, min(a, b)), min(far, max(a, b))
        if far < near:
            return None
    if far < 0:
        return None
    if near <= 0:
        return 0.0 if solid else far
    return near

@dataclasses.dataclass(frozen=True)
class Collider:
    kind: str
    layer: int = 1
    tag: int = 2
    flag: int = 1
    center: tuple = (0.0, 0.0, 0.0)
    rotation_q: tuple = (0.0, 0.0, 0.0, 1.0)
    half_extents: tuple = (1.0, 1.0, 1.0)
    vertices: tuple = ()
    indices: tuple = ()

    @classmethod
    def from_dict(cls, item):
        values = dict(item)
        for key in ('center', 'rotation_q', 'half_extents'):
            if key in values:
                values[key] = tuple(map(r.f32, values[key]))
        values['vertices'] = tuple(tuple(map(r.f32, v)) for v in values.get('vertices', ()))
        values['indices'] = tuple(tuple(v) for v in values.get('indices', ()))
        return cls(**values)

    def world_point(self, point):
        return add(rotate(point, self.rotation_q), self.center)

@dataclasses.dataclass(frozen=True)
class Hit:
    tag: int
    flag: int
    toi: float
    position: tuple
    collider: int
    primitive: int

def bounds(points):
    return (tuple(min(p[i] for p in points) for i in range(3)),
            tuple(max(p[i] for p in points) for i in range(3)))

def collider_bounds(collider):
    if collider.kind == 'mesh':
        return bounds([collider.world_point(v) for v in collider.vertices])
    corners = [collider.world_point(tuple(collider.half_extents[j] * signs[j] for j in range(3)))
               for signs in ((a, b, c) for a in (-1, 1) for b in (-1, 1) for c in (-1, 1))]
    return bounds(corners)

class Scene:
    def __init__(self, colliders):
        self.colliders = [v if isinstance(v, Collider) else Collider.from_dict(v) for v in colliders]
        self.primitives = []
        for cid, collider in enumerate(self.colliders):
            if collider.kind == 'mesh':
                for primitive, indices in enumerate(collider.indices):
                    triangle = tuple(collider.world_point(collider.vertices[i]) for i in indices)
                    self.primitives.append((bounds(triangle), cid, primitive, triangle))
            elif collider.kind == 'cuboid':
                self.primitives.append((collider_bounds(collider), cid, 0, None))
            else:
                raise ValueError('kind must be mesh or cuboid')
        self.nodes = []
        self.root = self._build(list(range(len(self.primitives)))) if self.primitives else None

    @classmethod
    def from_json(cls, path):
        return cls(json.loads(pathlib.Path(path).read_text(encoding='utf-8'))['colliders'])

    def _build(self, entries):
        volume = bounds([v for i in entries for v in self.primitives[i][0]])
        index = len(self.nodes)
        self.nodes.append(None)
        if len(entries) <= 4:
            self.nodes[index] = volume, entries, None
        else:
            axis = max(range(3), key=lambda i: volume[1][i] - volume[0][i])
            entries.sort(key=lambda i: self.primitives[i][0][0][axis] + self.primitives[i][0][1][axis])
            middle = len(entries) // 2
            self.nodes[index] = volume, None, (self._build(entries[:middle]), self._build(entries[middle:]))
        return index

    def cast_ray(self, origin, direction, max_t=3.4028234663852886e38, mask=0x202, solid=True):
        origin, direction, max_t = tuple(map(r.f32, origin)), tuple(map(r.f32, direction)), r.f32(max_t)
        result = None
        if self.root is None:
            return None
        pending = [self.root]
        while pending:
            node = pending.pop()
            volume, entries, children = self.nodes[node]
            lower = ray_aabb(origin, direction, volume)
            if lower is None or max_t < lower:
                continue
            if entries is None:
                pending.extend(reversed(children))
                continue
            for entry in entries:
                volume, cid, primitive, triangle = self.primitives[entry]
                collider = self.colliders[cid]
                if not (mask & (1 << collider.layer)):
                    continue
                if collider.kind == 'mesh':
                    toi = ray_triangle(origin, direction, *triangle)
                else:
                    inv = tuple(-v for v in collider.rotation_q[:3]) + (collider.rotation_q[3],)
                    local_origin, local_direction = rotate(sub(origin, collider.center), inv), rotate(direction, inv)
                    half = collider.half_extents
                    toi = ray_aabb(local_origin, local_direction, (tuple(-v for v in half), half), solid)
                if toi is not None and toi < max_t:
                    max_t = toi
                    result = Hit(collider.tag, collider.flag, toi, add(origin, mul(direction, toi)), cid, primitive)
        return result

    def ground_provider(self, origin):
        import recovered_stair_terrain as terrain
        hit = self.cast_ray(origin, (0.0, -1.0, -0.0), mask=0x202)
        return terrain.GroundHit() if hit is None else terrain.GroundHit(hit.tag, hit.flag, hit.position[1])

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--scene', type=pathlib.Path, required=True)
    ap.add_argument('--ray', type=float, nargs=6, required=True, metavar=('OX','OY','OZ','DX','DY','DZ'))
    ap.add_argument('--mask', type=lambda v: int(v, 0), default=0x202)
    ap.add_argument('--max-t', type=float, default=1000)
    args = ap.parse_args()
    hit = Scene.from_json(args.scene).cast_ray(args.ray[:3], args.ray[3:], args.max_t, args.mask)
    print(json.dumps(None if hit is None else dataclasses.asdict(hit), indent=2))

if __name__ == '__main__':
    main()
