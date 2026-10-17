"""Recovered CPU wall-board algorithms, bound to the matched Tiny Glade EXE.

All geometry operations round to IEEE-754 f32 as the original SSE instructions.
Finite ordered rectangles and positive spacing form the supported input domain.
Use wall_stairs_oracle.py to verify against original instructions in isolation.
"""
import dataclasses
import bisect
import math
import struct

EXE_SHA256 = '4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5'
MASK64 = (1 << 64) - 1

def f32(value):
    return struct.unpack('<f', struct.pack('<f', value))[0]

def bits(value):
    return struct.unpack('<I', struct.pack('<f', value))[0]

def fastrand_f32(seed):
    """0x140e02880: one f32 draw; returns updated state and draw."""
    state = (seed + 0xa0761d6478bd642f) & MASK64
    product = (state ^ 0xe7037ed1a0b428db) * state
    word = ((product >> 64) ^ product) & 0xffffffff
    value = struct.unpack('<f', struct.pack('<I', (word >> 9) | 0x3f800000))[0]
    return state, f32(value - 1.0)

def split_oversized_board_piece(rectangle, wall_tag, piece_index, horizontal,
                                max_height, max_width):
    """0x1414882c0: recursively split X if horizontal, otherwise Y.

    Horizontal describes the board direction. It is deliberately separate from
    subdivision's horizontal flag, which selects dividing a region along Y.
    Result order is the original depth-first, lower-coordinate-first order.
    """
    limits = [max(f32(max_width), f32(.05)), max(f32(max_height), f32(.05))]
    axis = 0 if horizontal else 1
    stack = [tuple(map(f32, rectangle))]
    result = []
    while stack:
        rect = stack.pop()
        size = f32(rect[axis + 2] - rect[axis])
        if size <= limits[axis]:
            result.append(rect)
            continue
        seed = (wall_tag ^ ((piece_index * 1000003) & MASK64)
                ^ ((bits(rect[axis]) * 68719) & MASK64)
                ^ ((bits(rect[axis + 2]) * 97531) & MASK64))
        _, random = fastrand_f32(seed)
        if horizontal:
            ratio = f32(f32(random * f32(.85)) +
                        f32(f32(1.0 - random) * f32(.15)))
        else:
            ratio = f32(f32(random * f32(.4)) + f32(.3))
        cut = f32(f32(size * ratio) + rect[axis])
        low, high = list(rect), list(rect)
        low[axis + 2], high[axis] = cut, cut
        stack.extend((tuple(high), tuple(low)))
    return result

def subdivide_region_into_planks(rectangle, horizontal, spacing):
    """0x1414887e0: round the division count, then equal-space boundaries."""
    rect = tuple(map(f32, rectangle))
    axis = 1 if horizontal else 0
    extent = f32(rect[axis + 2] - rect[axis])
    quotient = f32(extent / f32(spacing))
    count = max(1, math.floor(quotient + .5))
    result = []
    for i in range(count):
        low, high = list(rect), list(rect)
        low[axis] = f32(f32(f32(f32(i) * extent) / f32(count)) + rect[axis])
        high[axis + 2] = f32(f32(f32(f32(i + 1) * extent) / f32(count)) + rect[axis])
        result.append(tuple(low[:2] + high[2:]))
    return result

@dataclasses.dataclass(frozen=True)
class BoardPiece:
    # The original 40-byte record has two opaque u64 fields at +0/+8,
    # Aabb2 at +16, and a preserved byte at +32. Tags 0/1 are non-sentinel.
    rectangle: tuple
    tag: int = 0
    key: int = 0
    flag: int = 0

def subtract_wall_cutouts(cutouts, pieces, horizontal):
    """0x141484710: subtract ordered AABBs; keep metadata and output order.

    True chooses bottom/top strips first and accepts any positive dimensions.
    False chooses left/right strips first and discards height below f32(.05).
    The original makes at most 16 passes, stopping when no overlap was found.
    """
    cuts = [tuple(map(f32, c)) for c in cutouts]
    current = [dataclasses.replace(p, rectangle=tuple(map(f32, p.rectangle))) for p in pieces]
    for _ in range(16):
        changed = False
        for cx0, cy0, cx1, cy1 in cuts:
            result = []
            for piece in current:
                x0, y0, x1, y1 = piece.rectangle
                if not (x1 > cx0 and cx1 > x0 and cy0 < y1 and y0 < cy1):
                    result.append(piece)
                    continue
                changed = True
                if horizontal:
                    candidates = []
                    if y0 < cy0: candidates.append((x0, y0, x1, min(y1, cy0)))
                    if cy1 < y1: candidates.append((x0, max(y0, cy1), x1, y1))
                    ya, yb = max(y0, cy0), min(y1, cy1)
                    if ya < yb:
                        if x0 < cx0: candidates.append((x0, ya, min(x1, cx0), yb))
                        if cx1 < x1: candidates.append((max(x0, cx1), ya, x1, yb))
                else:
                    candidates = []
                    if x0 < cx0: candidates.append((x0, y0, min(x1, cx0), y1))
                    if cx1 < x1: candidates.append((max(x0, cx1), y0, x1, y1))
                    xa, xb = max(x0, cx0), min(x1, cx1)
                    if xa < xb:
                        if y0 < cy0: candidates.append((xa, y0, xb, min(y1, cy0)))
                        if cy1 < y1: candidates.append((xa, max(y0, cy1), xb, y1))
                for rect in candidates:
                    width, height = f32(rect[2] - rect[0]), f32(rect[3] - rect[1])
                    if width > 0 and (height > 0 if horizontal else height >= f32(.05)):
                        result.append(dataclasses.replace(piece, rectangle=rect))
            current = result
        if not changed:
            break
    return current

def align_outgoing_dir(kind, vector_at_4, vector_at_12):
    """0x140c016f0: enum tag 0 returns +4/+8, tag 1 returns +12/+16."""
    if kind not in (0, 1):
        raise ValueError('AlignKind::None has no defined outgoing_dir')
    return tuple(map(f32, vector_at_4 if kind == 0 else vector_at_12))

def align_position_offset(kind, byte1, byte2, vector_at_4, vector_at_12, scale):
    """0x140c01750: exact finite scalar/vector operations and branch order."""
    a, b = tuple(map(f32, vector_at_4)), tuple(map(f32, vector_at_12))
    scale = f32(scale)
    if kind == 1:
        vector = tuple(f32(x + y) for x, y in zip(a, b)) if byte1 else a
        scale = f32(scale * .5)
    elif kind == 0 and (byte1 or byte2):
        vector = a
    else:
        return (0.0, 0.0)
    return tuple(f32(x * scale) for x in vector)

def sample_pair_at(samples, length, closed, distance):
    """0x141483090: samples are (x, z, arc_distance, bottom_y, top_y).

    Returns (lower sample, upper sample, f32 interpolation weight), or None.
    Distances must be strictly ascending. The 20-byte sample stride and every
    field offset are instruction observations; bottom/top names are inferred.
    """
    points = [tuple(map(f32, s)) for s in samples]
    if not points:
        return None
    length, distance = f32(length), f32(distance)
    if closed:
        distance = f32(math.fmod(distance, length))
        if distance < 0:
            distance = f32(abs(length) + distance)
        if distance < points[0][2]:
            distance = f32(distance + length)
    else:
        distance = min(length, max(0.0, distance))
    if distance <= points[0][2]:
        return points[0], points[0], 0.0
    if points[-1][2] <= distance:
        return points[-1], points[-1], 0.0
    hi = bisect.bisect_left([p[2] for p in points], distance)
    lo = hi - 1
    denominator = max(f32(points[hi][2] - points[lo][2]), f32(.0001))
    weight = min(1.0, max(0.0, f32(f32(distance - points[lo][2]) / denominator)))
    return points[lo], points[hi], weight

def tangent_between(samples, length, closed, start, end):
    """0x141483320: sampled curve tangent in XZ, with numerical fallback."""
    length, start, end = f32(length), f32(start), f32(end)
    if closed:
        def wrap(value):
            rem = f32(math.fmod(value, length))
            return f32(abs(length) + rem) if rem < 0 else rem
        start, end = wrap(start), wrap(end)
    else:
        start, end = min(length, max(0.0, start)), min(length, max(0.0, end))
    if end < start and closed:
        end = f32(end + length)
    def position(distance):
        pair = sample_pair_at(samples, length, closed, distance)
        if pair is None:
            return 0.0, 0.0
        lo, hi, t = pair
        complement = f32(1.0 - t)
        return tuple(f32(f32(t * b) + f32(complement * a)) for a, b in zip(lo[:2], hi[:2]))
    def difference(a, b):
        pa, pb = position(a), position(b)
        dx, dz = f32(pb[0] - pa[0]), f32(pb[1] - pa[1])
        return dx, dz, f32(f32(dz * dz) + f32(dx * dx))
    dx, dz, square = difference(start, end)
    if square <= f32(.0001):
        middle = f32(f32(start + end) * .5)
        radius = max(f32(length * f32(.001)), f32(.01))
        dx, dz, square = difference(f32(middle - radius), f32(middle + radius))
        if square <= f32(.0001):
            return 1.0, 0.0, 0.0
    inverse = f32(1.0 / f32(math.sqrt(square)))
    return f32(dx * inverse), 0.0, f32(dz * inverse)

def support_station_fixed_height(position, width, tangent, ground_height):
    """0x1408279f0 with its fixed-ground-height branch enabled.

    Terrain/collision sampling branch is outside this function's reconstruction.
    Returns the exact 16-float support record: left/right/center XYZ, three
    ground samples, outgoing tangent XYZ, and original width.
    """
    x, y, z = tuple(map(f32, position))
    tx, tz = tuple(map(f32, tangent))
    width, ground_height = f32(width), f32(ground_height)
    center = x, f32(y + f32(-.34)), z
    offset = max(0.0, f32(f32(.5 * width) + f32(-.11)))
    normal = f32(-tz), 0.0, tx
    scaled = tuple(f32(v * offset) for v in normal)
    left = tuple(f32(c - d) for c, d in zip(center, scaled))
    right = tuple(f32(c + d) for c, d in zip(center, scaled))
    return left + right + center + (ground_height,) * 3 + (tx, 0.0, tz, width)

def rectangle_point_u(width, height, corner):
    """0x140df0700: normalized perimeter coordinate for corners 0 through 4."""
    width, height = f32(width), f32(height)
    if corner == 0:
        return 0.0
    if corner == 4:
        return 1.0
    if corner == 1:
        return f32(height / f32(2.0 * f32(width + height)))
    if corner == 2:
        summed = f32(height + width)
        return f32(summed / f32(summed + summed))
    if corner == 3:
        return f32(f32(f32(height * 2.0) + width) / f32(2.0 * f32(width + height)))
    raise ValueError('Rectangle2d corner index must be in 0..4')

def rectangle_side_wallspace_ranges(width, height, expanded_length, shape_tag=1):
    """0x141483c00: 4 continuous perimeter intervals or None for nonrectangle."""
    if shape_tag == 2 or not shape_tag & 1:
        return None
    length = f32(expanded_length)
    corners = [f32(rectangle_point_u(width, height, i) * length) for i in range(5)]
    return list(zip(corners, corners[1:]))

def top_rim_step_pattern_info(width, height, expanded_length, mode, shape_tag, side, distance):
    """0x141486f80: local rim coordinate, available length, rectangle mode flag."""
    length, distance = f32(expanded_length), f32(distance)
    if mode == 1 and shape_tag & 1:
        start, end = rectangle_side_wallspace_ranges(width, height, length, 1)[side]
        return max(0.0, f32(distance - start)), f32(end - start), True
    coordinate = f32(math.fmod(distance, length))
    if coordinate < 0:
        coordinate = f32(abs(length) + coordinate)
    return coordinate, length, False

def classify_region_orientation(samples, length, closed, rectangle, cap_y):
    """0x1414871b0: True selects a straightish, interior, sufficiently wide region.

    Checks at minX, middleX, maxX; bottom/top margins are .05; local tangents
    at ±.01 must have abs(dot(reference, tangent)) >= .85. Final aspect > .5.
    """
    x0, y0, x1, y1 = tuple(map(f32, rectangle))
    cap_y = f32(cap_y)
    middle = f32(f32(x0 + x1) * .5)
    for distance in (x0, middle, x1):
        pair = sample_pair_at(samples, length, closed, distance)
        bottom, top = f32(.05), 1.0
        if pair:
            lo, hi, t = pair
            complement = f32(1.0 - t)
            bottom = f32(f32(f32(hi[3] * t) + f32(lo[3] * complement)) + f32(.05))
            top = f32(f32(hi[4] * t) + f32(lo[4] * complement))
        if not (bottom < y0 and y1 < f32(min(top, cap_y) + f32(-.05))):
            return False
    def tangent(distance):
        vector = tangent_between(samples, length, closed, f32(f32(-.01) + distance),
                                 f32(distance + f32(.01)))
        return vector[0], vector[2]
    reference = tangent(x0)
    for distance in (middle, x1):
        vector = tangent(distance)
        dot = f32(f32(vector[0] * reference[0]) + f32(vector[1] * reference[1]))
        if abs(dot) < f32(.85):
            return False
    return f32(f32(x1 - x0) / f32(y1 - y0)) > .5
