"""Standalone CPU reference for the Tiny Glade Grass2 card-splat transform.

The card_splats and card_splats_shadow GLSL recovered from the shipped SPIR-V
contain the complete per-card transform.  This module mirrors that transform
without Vulkan or the original executable: packed clump/point words are
decoded, plant offsets are rotated, removal/object-push textures are sampled,
terrain following is applied, and the wind offset/opacity are returned.

Texture callbacks receive a normalized ``(u, v)`` pair and return RGBA floats.
The default callbacks are deterministic zero/flat textures, so the module is
useful as a small CLI and as an importable reference implementation.
"""
from __future__ import annotations

import argparse
import dataclasses
import json
import math
import pathlib
import struct
from typing import Callable, Iterable, Mapping, Sequence

RGBA = tuple[float, float, float, float]
Vec2 = tuple[float, float]
Vec3 = tuple[float, float, float]
Texture = Callable[[Vec2], RGBA]

_INV_255 = 1.0 / 255.0
_WORLD_SCALE = 130.0
_WIND_COEFF = 1.1144999265670776


def f32(value: float) -> float:
    """Round one operation to the IEEE-754 binary32 used by GLSL floats."""
    return struct.unpack("<f", struct.pack("<f", float(value)))[0]


def _clamp(value: float, lo: float, hi: float) -> float:
    return max(lo, min(hi, value))


def _fract(value: float) -> float:
    return value - math.floor(value)


def _mix(a: float, b: float, t: float) -> float:
    return a + (b - a) * t


def _half2(word: int) -> Vec2:
    return struct.unpack("<2e", struct.pack("<I", word & 0xFFFFFFFF))


def _unorm8(word: int, shift: int = 0) -> float:
    return ((word >> shift) & 0xFF) * _INV_255


@dataclasses.dataclass(frozen=True)
class Clump:
    center_xy: int
    center_z_wind: int
    scale_packed: int
    rot_flags: int

    @classmethod
    def from_words(cls, words: Sequence[int]) -> "Clump":
        if len(words) != 4:
            raise ValueError("a clump record has four u32 words")
        return cls(*(int(x) & 0xFFFFFFFF for x in words))

    @classmethod
    def from_bytes(cls, data: bytes, offset: int = 0) -> "Clump":
        return cls.from_words(struct.unpack_from("<4I", data, offset))

    def decoded(self) -> Mapping[str, object]:
        cx, cy = _half2(self.center_xy)
        cz, wind = _half2(self.center_z_wind)
        sx, sy = _half2(self.scale_packed)
        return {
            "center": (cx, cy, cz),
            "wind": wind,
            "scale": (sx, sy),
            "rotation": (_unorm8(self.rot_flags) * 2.0 - 1.0,
                          _unorm8(self.rot_flags, 8) * 2.0 - 1.0),
            "grass_removal": bool((self.rot_flags >> 18) & 1),
            "terrain_follow": bool((self.rot_flags >> 17) & 1),
            "object_push": bool((self.rot_flags >> 16) & 1),
            "discard_opacity": _unorm8(self.rot_flags, 19),
        }


def decode_point(position_word: int, bounds: Sequence[tuple[float, float]]) -> tuple[Vec3, float]:
    """Decode one ``Grass2CardPointPosition`` against XYZ half2 bounds.

    Returns the local XYZ position and the packed W byte (the card height/
    object-push weight in the shader).
    """
    if len(bounds) != 3:
        raise ValueError("bounds must contain (origin, range) for X, Y and Z")
    n = [_unorm8(position_word, s) for s in (0, 8, 16, 24)]
    xyz = tuple(o + n[i] * r for i, (o, r) in enumerate(bounds))
    return xyz, n[3]


def decode_plant_offset(word: int) -> Vec2:
    """Decode the packed low u16 plant offset into the shader's [-2,2] XZ."""
    return ((_unorm8(word) * 2.0 - 1.0) * 2.0,
            (_unorm8(word, 8) * 2.0 - 1.0) * 2.0)


def _removal_random(offset: Vec2) -> float:
    # This is the exact two-stage GLSL hash in card_splats.  The integer
    # quantization is deliberate: GLSL uvec2(uint(clamp(x)*255+0.5)).
    qx = int(_clamp(offset[0] * 0.25 + 0.5, 0.0, 1.0) * 255.0 + 0.5)
    qy = int(_clamp(offset[1] * 0.25 + 0.5, 0.0, 1.0) * 255.0 + 0.5)
    x = _fract((((qx * _INV_255) * 2.0) - 1.0) * 2.0 * 100.0)
    y = _fract((((qy * _INV_255) * 2.0) - 1.0) * 2.0 * 100.0)
    return _fract(52.98291778564453 * _fract(0.0671105608344078 * x +
                                               0.005837149918079376 * y))


def _screen_random(pixel: tuple[int, int], frame_index: int) -> float:
    x = pixel[0] + frame_index
    y = pixel[1] + frame_index
    return _fract(52.98291778564453 * _fract(0.0671105608344078 * x +
                                               0.005837149918079376 * y))


@dataclasses.dataclass(frozen=True)
class TransformResult:
    world_position: Vec3
    plant_offset_xz: Vec2
    removal_opacity: float
    discard_by_removal: bool
    wind_amount: float
    object_push_weight: float
    removal_uv: Vec2
    object_push_uv: Vec2
    terrain_sample_uv: Vec2


def transform_card(
    clump: Clump,
    position_word: int,
    plant_offset_word: int,
    bounds: Sequence[tuple[float, float]],
    *,
    removal_texture: Texture | None = None,
    object_push_texture: Texture | None = None,
    terrain_height_texture: Callable[[Vec2], float] | None = None,
    terrain_height_texture_large: Callable[[Vec2], float] | None = None,
    flat_terrain_height: float = 0.0,
) -> TransformResult:
    """Apply the recovered per-card Grass2 transform.

    ``bounds`` are the half2 ``(origin, range)`` values from a visible clump
    record.  The function follows the shader's operation order so callers can
    compare intermediate values against a GPU trace.
    """
    d = clump.decoded()
    center = d["center"]
    scale = d["scale"]
    rot = d["rotation"]
    point, point_weight = decode_point(position_word, bounds)
    offset = decode_plant_offset(plant_offset_word)
    cos_like, sin_like = rot

    # Plant offsets are rotated by the clump's packed signed rotation and
    # scaled by scale.x * 0.4204482138156891.
    ox = offset[0] * (scale[0] * 0.4204482138156891)
    oz = offset[1] * (scale[0] * 0.4204482138156891)
    rotated_offset = (ox * cos_like - oz * sin_like,
                      ox * sin_like + oz * cos_like)
    plant_world = (center[0] + rotated_offset[0], center[2] + rotated_offset[1])

    removal_uv = (_clamp(plant_world[0] / _WORLD_SCALE + 0.5, 0.0, 1.0),
                  _clamp(plant_world[1] / _WORLD_SCALE + 0.5, 0.0, 1.0))
    removal = removal_texture(removal_uv) if removal_texture else (0.0, 1.0, 0.0, 0.0)
    removal_opacity = removal[1] if d["grass_removal"] else 1.0
    discard_removal = bool(d["grass_removal"] and _removal_random(offset) < removal[0])

    # Reconstruct point position, then apply removal's green height scale.
    px, py, pz = point
    py *= removal_opacity
    local = (px * scale[0], py * scale[1], pz * scale[0])
    world = (local[0] * cos_like - local[2] * sin_like + center[0],
             local[1] + center[1],
             local[0] * sin_like + local[2] * cos_like + center[2])

    push_weight = 1.0
    if d["object_push"]:
        push_uv = (plant_world[0] / _WORLD_SCALE + 0.5,
                   plant_world[1] / _WORLD_SCALE + 0.5)
        push = object_push_texture(push_uv) if object_push_texture else (0.0, 0.0, 0.0, 0.0)
        push_weight = 1.0 - _clamp(push[2], 0.0, 1.0)
        push_strength = _clamp(push[2], 0.0, 1.0)
        alpha_weight = _clamp(point_weight * (1.0 / 85.0), 0.0, 1.0)
        push_x = push[0] * push_strength * (alpha_weight * alpha_weight)
        push_z = push[1] * push_strength * (alpha_weight * alpha_weight)
        world = (world[0] + push_x * 4.0 * push_weight,
                 center[1] + (world[1] - center[1]) * push_weight,
                 world[2] + push_z * 4.0 * push_weight)
    else:
        push_uv = (plant_world[0] / _WORLD_SCALE + 0.5,
                   plant_world[1] / _WORLD_SCALE + 0.5)

    wind_amount = center[2] * 0.0 + d["wind"] * push_weight
    wind_offset = (-wind_amount * (point_weight * point_weight) * 0.25 *
                   _WIND_COEFF * scale[0] * removal_opacity)
    world = (world[0] + wind_offset, world[1], world[2])

    terrain_uv = (plant_world[0] / _WORLD_SCALE + 0.5,
                  plant_world[1] / _WORLD_SCALE + 0.5)
    if d["terrain_follow"]:
        # The shader uses its local 130-unit heightmap inside a 65-unit
        # footprint. Outside it switches to the bindless world heightmap,
        # whose axes are Y-up/ X-down and use a 1000-unit scale.
        if abs(plant_world[0]) < 65.0 and abs(plant_world[1]) < 65.0:
            terrain = terrain_height_texture(terrain_uv) if terrain_height_texture else flat_terrain_height
        else:
            large_uv = (plant_world[1] * 0.001 + 0.5,
                        1.0 - (plant_world[0] * 0.001 + 0.5))
            terrain_uv = large_uv
            if terrain_height_texture_large:
                terrain = terrain_height_texture_large(large_uv)
            elif terrain_height_texture:
                terrain = terrain_height_texture(large_uv)
            else:
                terrain = flat_terrain_height
        world = (world[0], world[1] + terrain - center[1], world[2])

    return TransformResult(world, offset, removal_opacity, discard_removal,
                           wind_amount, push_weight, removal_uv, push_uv, terrain_uv)


def load_rgba(path: pathlib.Path) -> tuple[int, int, bytes]:
    """Load a tiny raw RGBA8 image for the CLI without third-party packages."""
    data = path.read_bytes()
    if len(data) < 8:
        raise ValueError("raw image must start with little-endian u32 width,height")
    width, height = struct.unpack_from("<2I", data)
    payload = data[8:]
    if len(payload) != width * height * 4:
        raise ValueError("raw RGBA8 payload size does not match dimensions")
    return width, height, payload


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--clump", type=lambda x: int(x, 0), nargs=4, metavar="U32")
    parser.add_argument("--position", type=lambda x: int(x, 0), required=True)
    parser.add_argument("--plant-offset", type=lambda x: int(x, 0), required=True)
    parser.add_argument("--bounds", type=float, nargs=6, metavar=("OX", "OY", "OZ", "RX", "RY", "RZ"), required=True)
    parser.add_argument("--flat-terrain", type=float, default=0.0)
    parser.add_argument("--out", type=pathlib.Path)
    args = parser.parse_args()
    clump = Clump.from_words(args.clump or [0, 0, 0, 0])
    bounds = tuple(zip(args.bounds[:3], args.bounds[3:]))
    result = dataclasses.asdict(transform_card(clump, args.position, args.plant_offset,
                                               bounds, flat_terrain_height=args.flat_terrain))
    text = json.dumps(result, indent=2)
    if args.out:
        args.out.write_text(text + "\n", encoding="utf-8")
    else:
        print(text)


if __name__ == "__main__":
    main()
