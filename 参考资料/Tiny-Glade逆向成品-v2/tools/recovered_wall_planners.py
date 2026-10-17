"""Higher-level wall-board planner reconstruction, with explicit pre-remapped cuts.

Machine addresses are bound by recovered_wall_stairs.EXE_SHA256. Algorithm uses
finite f32 rectangles, region tags 0/1, and strictly ordered sampler distances.
"""
import dataclasses
import recovered_wall_stairs as r

@dataclasses.dataclass(frozen=True)
class Piece:
    rectangle: tuple
    tag: int = 0
    key: int = 0
    flag: int = 0
    flag2: int = 0

def same_identity(a, b):
    return (a.tag & 1) == (b.tag & 1) and (not (a.tag & 1) or a.key == b.key)

def sort_pieces(pieces):
    def total_key(value):
        word = r.bits(value)
        return (~word & 0xffffffff) if word & 0x80000000 else word ^ 0x80000000
    return sorted(pieces, key=lambda p: (total_key(p.rectangle[0]), total_key(p.rectangle[1])))

def merge_adjacent_regions(pieces, horizontal):
    # Horizontal joins along Y; vertical joins along X.
    axis = 1 if horizontal else 0
    other = 1 - axis
    eps = r.f32(.01)
    touch = r.f32(.001)
    pieces = [dataclasses.replace(p, rectangle=tuple(map(r.f32, p.rectangle))) for p in pieces]
    used = set()
    result = []
    for i, piece in enumerate(pieces):
        if i in used:
            continue
        used.add(i)
        rect = list(piece.rectangle)
        changed = True
        while changed:
            changed = False
            for j, neighbor in enumerate(pieces):
                n = neighbor.rectangle
                if j in used or not same_identity(piece, neighbor) or piece.flag != neighbor.flag:
                    continue
                if (abs(r.f32(rect[other] - n[other])) <= eps and
                    abs(r.f32(rect[other + 2] - n[other + 2])) <= eps and
                    rect[axis] <= r.f32(n[axis + 2] + touch) and
                    n[axis] <= r.f32(rect[axis + 2] + touch)):
                    rect[axis] = min(rect[axis], n[axis])
                    rect[axis + 2] = max(rect[axis + 2], n[axis + 2])
                    used.add(j)
                    changed = True
        result.append(dataclasses.replace(piece, rectangle=tuple(rect)))
    return sort_pieces(result)

def merge_narrow_planks(pieces, horizontal):
    # A narrow horizontal plank has insufficient height; a vertical plank width.
    axis = 1 if horizontal else 0
    other = 1 - axis
    eps = r.f32(.01)
    current = [dataclasses.replace(p, rectangle=tuple(map(r.f32, p.rectangle))) for p in pieces]
    i, merges = 0, 0
    while i < len(current):
        piece = current[i]
        rect = piece.rectangle
        if r.f32(rect[axis + 2] - rect[axis]) >= r.f32(.1):
            i += 1
            continue
        best = None
        best_size = -1
        for j, neighbor in enumerate(current):
            n = neighbor.rectangle
            if j == i or not same_identity(piece, neighbor) or piece.flag != neighbor.flag:
                continue
            if rect[axis] > r.f32(n[axis + 2] + eps) or n[axis] > r.f32(rect[axis + 2] + eps):
                continue
            lo, hi = max(rect[other], n[other]), min(rect[other + 2], n[other + 2])
            if lo < hi:
                size = r.f32(hi - lo)
                if size >= best_size:
                    best, best_size = (j, lo, hi), size
        if best is None:
            i += 1
            continue
        j, lo, hi = best
        neighbor = current[j]
        for index in sorted((i, j), reverse=True):
            current.pop(index)
        for original in (neighbor, piece):
            a = original.rectangle
            if a[other] < lo:
                rest = list(a); rest[other + 2] = lo
                current.append(dataclasses.replace(original, rectangle=tuple(rest)))
            if hi < a[other + 2]:
                rest = list(a); rest[other] = hi
                current.append(dataclasses.replace(original, rectangle=tuple(rest)))
        combined = list(rect)
        combined[other], combined[other + 2] = lo, hi
        combined[axis] = min(rect[axis], neighbor.rectangle[axis])
        combined[axis + 2] = max(rect[axis + 2], neighbor.rectangle[axis + 2])
        current.append(dataclasses.replace(piece, rectangle=tuple(combined), flag=piece.flag & 1,
                                           flag2=piece.flag2 & 1))
        merges += 1
        if merges == 1024:
            break
        i = max(0, i - 2)
    return sort_pieces(current)

def plan_wall_boards(regions, remapped_cutouts, spacing, horizontal, samples=(), length=1,
                     closed=False, cap_y=1):
    """Complete planner logic after its window/arch->wallspace dependency.

    Return ordered 40-byte semantic records. See planner verification report for
    separate full-original-empty-cut and supplied-remapped-cut execution coverage.
    """
    fragments = r.subtract_wall_cutouts(remapped_cutouts, regions, horizontal)
    merged = merge_adjacent_regions(fragments, horizontal)
    planks = []
    for region in merged:
        direction = True if horizontal else r.classify_region_orientation(samples, length, closed,
                                                                         region.rectangle, cap_y)
        for rect in r.subdivide_region_into_planks(region.rectangle, direction, spacing):
            planks.append(dataclasses.replace(region, rectangle=rect, flag=int(direction), flag2=region.flag))
    return merge_narrow_planks(planks, horizontal)
