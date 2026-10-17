"""Packed 512x512 terrain sampling and complete support-station result handling."""
import dataclasses
import math
import recovered_wall_stairs as r

@dataclasses.dataclass(frozen=True)
class Terrain512:
    samples: object  # row-major u16 grid, z rows / x columns
    low: float
    high: float
    texel_center_mode: bool

def lerp(a, b, weight):
    return r.f32(r.f32(r.f32(b - a) * weight) + a)

def sample_terrain_xz(terrain, x, z):
    """0x14140ce00 plus original u16 load/lerp helpers; both global-flag modes."""
    coordinates = [r.f32(r.f32(r.f32(v) / 130.0) + .5) for v in (x, z)]
    if terrain.texel_center_mode:
        coordinates = [max(0.0, r.f32(r.f32(min(v, 1.0) * 512.0) + -.5)) for v in coordinates]
        integer = [int(v) for v in coordinates]
        fractions = [r.f32(v - r.f32(i)) for v, i in zip(coordinates, integer)]
        low = [min(i, 511) for i in integer]
        high = [min(i + 1, 511) for i in integer]
    else:
        normalized = [max(0.0, v) for v in coordinates]
        coordinates = [r.f32(v * 512.0) if v < 1.0 else 512.0 for v in normalized]
        low = [min(int(v), 510) for v in coordinates]
        high = [v + 1 for v in low]
        fractions = [r.f32(v - r.f32(i)) for v, i in zip(coordinates, low)]
    lx, lz = low
    hx, hz = high
    fx, fz = fractions
    def load(ix, iz):
        weight = r.f32(r.f32(terrain.samples[iz * 512 + ix]) / 65535.0)
        complement = r.f32(1.0 - weight)
        return r.f32(r.f32(weight * r.f32(terrain.high)) + r.f32(complement * r.f32(terrain.low)))
    a = lerp(load(lx, lz), load(lx, hz), fz)
    b = lerp(load(hx, lz), load(hx, hz), fz)
    return lerp(a, b, fx)

@dataclasses.dataclass(frozen=True)
class GroundHit:
    tag: int = 17
    flag: int = 0
    hit_y: float = 0.0

def support_station_from_sample(position, width, tangent, terrain, raycast=None, fixed_ground=None):
    """0x1408279f0 complete branch semantics, with an explicit collision provider.

    raycast receives the original upward-offset origin and returns GroundHit.
    Tag 17 represents no hit; other unhandled tags fall back to terrain too.
    This API restores dispatch/geometry, not populated Rapier BVH traversal.
    """
    record = list(r.support_station_fixed_height(position, width, tangent,
                                                0.0 if fixed_ground is None else fixed_ground))
    if fixed_ground is not None:
        return tuple(record)
    for number, start in enumerate((0, 3, 6)):
        x, y, z = record[start:start + 3]
        origin = x, r.f32(y + r.f32(.1)), z
        hit = raycast(origin) if raycast is not None else GroundHit()
        if hit.tag == 1:
            height = r.f32(r.f32(hit.hit_y) + r.f32(.3))
        elif hit.tag == 2:
            height = r.f32(hit.hit_y) if hit.flag & 1 else r.f32(r.f32(hit.hit_y) - 1.0)
        else:
            height = sample_terrain_xz(terrain, x, z)
        record[9 + number] = height
    return tuple(record)

def nearest_curve_coord_xz(points, position):
    """0x1413fa210 uses XZ projection of a Vec3 curve and ignores its Y values."""
    px, pz = r.f32(position[0]), r.f32(position[2])
    best, best_index, best_weight = math.inf, 0, 0.0
    for i, (a, b) in enumerate(zip(points, points[1:])):
        ax, az, bx, bz = map(r.f32, (a[0], a[2], b[0], b[2]))
        dx, dz = r.f32(bx - ax), r.f32(bz - az)
        denominator = max(r.f32(r.f32(dz * dz) + r.f32(dx * dx)), r.f32(1e-8))
        numerator = r.f32(r.f32(r.f32(pz - az) * dz) + r.f32(r.f32(px - ax) * dx))
        raw = r.f32(numerator / denominator)
        lower = raw if 0.0 <= raw else 0.0
        t = lower if lower <= 1.0 else 1.0
        complement = r.f32(1.0 - t)
        cx = r.f32(r.f32(t * bx) + r.f32(complement * ax))
        cz = r.f32(r.f32(t * bz) + r.f32(complement * az))
        ox, oz = r.f32(px - cx), r.f32(pz - cz)
        distance = r.f32(math.sqrt(r.f32(r.f32(oz * oz) + r.f32(ox * ox))))
        if distance < best:
            best, best_index, best_weight = distance, i, t
    return best_index, best_weight

def support_station_at(position, points, widths, tangents, terrain, raycast=None, fixed_ground=None):
    """0x140827820: nearest segment, width/tangent interpolation, then full support."""
    segment, weight = nearest_curve_coord_xz(points, position)
    width = lerp(r.f32(widths[segment]), r.f32(widths[segment + 1]), weight)
    tangent = tuple(lerp(r.f32(a), r.f32(b), weight) for a, b in zip(tangents[segment], tangents[segment + 1]))
    square = r.f32(r.f32(tangent[1] * tangent[1]) + r.f32(tangent[0] * tangent[0]))
    if square == 0:
        tangent = 0.0, 0.0
    else:
        inverse = r.f32(1.0 / r.f32(math.sqrt(square)))
        tangent = tuple(r.f32(v * inverse) for v in tangent)
    return support_station_from_sample(position, width, tangent, terrain, raycast, fixed_ground)
