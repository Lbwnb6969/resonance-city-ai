#!/usr/bin/env python3
"""Reconstructed Townscaper clipboard codec, using shipped x86 native evidence.

This is an independent implementation, not recovered original source. The
encoder accepts the native format domain: nondecreasing x, ascending heights in each
column, ground represented by t=15,h=0, and colors t=0..14 at heights 1..255.
It preserves same-x y order and empty columns; it does not silently sort data.
Codec acceptance does not check generated-grid membership or promise Graph.Load
will retain voxels. Normal Graph.Save output has lexicographic (x,y) order. The decoder
rejects truncated input rather than emulating native buffer state or exceptions.
"""

import argparse
import json
import sys
from pathlib import Path

ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyzw0123456789_-"
REVERSE = {char: index for index, char in enumerate(ALPHABET)}


class CodecError(ValueError):
    """An input does not belong to the supported codec domain."""


def _integer(value, label):
    if type(value) is not int:
        raise CodecError(f"{label} must be an integer")
    return value


def _columns(data):
    corners, voxels = data["corners"], data["voxels"]
    if not corners:
        raise CodecError("At least one corner is required; an empty world uses count=0")
    offset, last_x, columns = 0, None, []
    for corner in corners:
        x = _integer(corner["x"], "corner.x")
        y = _integer(corner["y"], "corner.y")
        count = _integer(corner["count"], "corner.count")
        if last_x is not None and x < last_x:
            raise CodecError("corner.x must be nondecreasing")
        if count < 0 or offset + count > len(voxels):
            raise CodecError("corner.count does not match the voxel list")
        column, last_h = [], -1
        for voxel in voxels[offset:offset + count]:
            t = _integer(voxel["t"], "voxel.t")
            h = _integer(voxel["h"], "voxel.h")
            if not 0 <= h <= 255 or h <= last_h:
                raise CodecError("Column heights must be unique, ascending, and within 0..255")
            if (h == 0 and t != 15) or (h > 0 and not 0 <= t <= 14):
                raise CodecError("Ground is t=15,h=0; elevated colors are t=0..14")
            column.append({"t": t, "h": h})
            last_h = h
        columns.append((x, y, column))
        offset, last_x = offset + count, x
    if offset != len(voxels):
        raise CodecError("Unreferenced trailing voxels")
    return columns


def encode(data):
    """Encode {corners:[{x,y,count}], voxels:[{t,h}]} as clipboard text."""
    columns = _columns(data)
    first_x = columns[0][0]
    min_y, max_y = min(c[1] for c in columns), max(c[1] for c in columns)
    max_dx = max([0] + [b[0] - a[0] for a, b in zip(columns, columns[1:])])
    bounds_bits = (2 * max(abs(first_x), abs(min_y))).bit_length()
    delta_bits, y_bits = max_dx.bit_length(), (max_y - min_y).bit_length()
    if max(bounds_bits, delta_bits, y_bits) > 30:
        raise CodecError("Coordinates exceed the verified positive Int32 bit-count domain")
    bias = 1 << (bounds_bits - 1) if bounds_bits else 0
    types = sorted({v["t"] for _, _, column in columns for v in column if v["h"]})
    mapping = {t: i + 1 for i, t in enumerate(types)}
    type_bits = (len(types) + 1).bit_length()
    sentinel = (1 << type_bits) - 1
    bits = []

    def put(value, width):
        if not 0 <= value < 1 << width:
            raise CodecError(f"Value {value} does not fit in {width} bits")
        bits.extend((value >> bit) & 1 for bit in range(width))

    for width in (bounds_bits, delta_bits, y_bits):
        put(width, 5)
    put(first_x + bias, bounds_bits)
    put(min_y + bias, bounds_bits)
    put(len(types), 4)
    for t in types:
        put(t, 4)
    previous_x = first_x
    for index, (x, y, column) in enumerate(columns):
        if index:
            put(int(x != previous_x), 1)
            if x != previous_x:
                put(x - previous_x, delta_bits)
        put(y - min_y, y_bits)
        ground = bool(column and column[0]["h"] == 0)
        put(int(ground), 1)
        next_height = 1
        for voxel in column[int(ground):]:
            while next_height < voxel["h"]:
                put(0, type_bits)
                next_height += 1
            put(mapping[voxel["t"]], type_bits)
            next_height += 1
        if next_height < 256:
            put(sentinel, type_bits)
        previous_x = x
    return "".join(ALPHABET[sum(bit << j for j, bit in enumerate(bits[i:i + 6]))]
                   for i in range(0, len(bits), 6))


def decode(text):
    """Decode clipboard text. Spaces/newlines are not removed by this API."""
    if not isinstance(text, str) or not text:
        raise CodecError("A nonempty string is required")
    bits = []
    for char in text:
        if char not in REVERSE:
            raise CodecError(f"Character {char!r} is outside the native alphabet")
        bits.extend((REVERSE[char] >> bit) & 1 for bit in range(6))
    if len(bits) <= 19:
        raise CodecError("Bit array has no room for bounds or voxels")
    effective = len(bits)
    while effective and not bits[effective - 1]:
        effective -= 1
    position = 0

    def read(width):
        nonlocal position
        if position + width > len(bits):
            raise CodecError("Truncated bit field")
        value = sum(bits[position + bit] << bit for bit in range(width))
        position += width
        return value

    bounds_bits, delta_bits, y_bits = read(5), read(5), read(5)
    if effective < position + 2 * bounds_bits + 1:
        raise CodecError("Bit array has no room for voxels")
    bias = 1 << (bounds_bits - 1) if bounds_bits else 0
    x, min_y = read(bounds_bits) - bias, read(bounds_bits) - bias
    if position + 4 > effective:
        raise CodecError("Bit array has no room for types")
    count = read(4)
    if position + count * 4 > effective:
        raise CodecError("Bit array has no room for types")
    types = [read(4) for _ in range(count)]
    type_bits, sentinel = (count + 1).bit_length(), (1 << (count + 1).bit_length()) - 1
    corners, voxels = [], []
    while position < effective:
        if corners and read(1):
            x += read(delta_bits)
        y = min_y + read(y_bits)
        start = len(voxels)
        if read(1):
            voxels.append({"t": 15, "h": 0})
        terminated = False
        for height in range(1, 256):
            value = read(type_bits)
            if value == sentinel:
                terminated = True
                break
            if value:
                if value > count:
                    raise CodecError(f"Invalid voxel code {value}, type count {count}, height {height}")
                voxels.append({"t": types[value - 1], "h": height})
                if height == 255:
                    terminated = True
        if not terminated:
            raise CodecError("A column has no sentinel or occupied height 255")
        corners.append({"x": x, "y": y, "count": len(voxels) - start})
    return {"corners": corners, "voxels": voxels}


def self_test():
    vectors = [
        ("AAAE", {"corners": [{"x": 0, "y": 0, "count": 0}], "voxels": []}),
        ("AAAG", {"corners": [{"x": 0, "y": 0, "count": 1}], "voxels": [{"t": 15, "h": 0}]}),
        ("AAIAN", {"corners": [{"x": 0, "y": 0, "count": 1}], "voxels": [{"t": 0, "h": 1}]}),
        ("AAIgN", {"corners": [{"x": 0, "y": 0, "count": 2}], "voxels": [{"t": 15, "h": 0}, {"t": 0, "h": 1}]}),
    ]
    for text, data in vectors:
        assert encode(data) == text, (text, encode(data))
        assert decode(text) == data, text
    cases = list(data for _, data in vectors)
    for n in range(1, 16):
        cases.append({"corners": [{"x": -17, "y": -31, "count": n}],
                      "voxels": [{"t": t, "h": t + 1} for t in range(n)]})
    for height in (2, 63, 64, 254, 255):
        cases.append({"corners": [{"x": 7, "y": -9, "count": 1}],
                      "voxels": [{"t": 14, "h": height}]})
    cases.append({"corners": [{"x": -3, "y": 8, "count": 0}, {"x": -3, "y": -7, "count": 1},
                              {"x": 9, "y": 2, "count": 3}],
                  "voxels": [{"t": 1, "h": 255}, {"t": 15, "h": 0},
                             {"t": 8, "h": 3}, {"t": 4, "h": 255}]})
    for data in cases:
        text = encode(data)
        assert decode(text) == data
        assert decode(text + "AAA") == data
    malformed = ["", "A", "AAAA", "AAAE=", "AAAE ", "AAAE\n", "AAIAO"]
    for text in malformed:
        try:
            decode(text)
        except CodecError:
            continue
        raise AssertionError(f"Accepted malformed vector {text!r}")
    return {"manual_bit_vectors": len(vectors), "roundtrip_cases": len(cases),
            "malformed_vectors_rejected": len(malformed),
            "evidence": "Independent reconstruction tests; original game not executed"}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("operation", choices=["encode", "decode", "self-test"])
    parser.add_argument("input", nargs="?", default="-", help="Input file, or - for stdin")
    parser.add_argument("-o", "--output", help="Output file; defaults to stdout")
    args = parser.parse_args()
    try:
        if args.operation == "self-test":
            result = json.dumps(self_test(), ensure_ascii=False, indent=2)
        else:
            source = sys.stdin.read() if args.input == "-" else Path(args.input).read_text(encoding="utf-8")
            if args.operation == "encode":
                result = encode(json.loads(source))
            else:
                # File transport permits one final newline, not embedded whitespace.
                if source.endswith("\r\n"):
                    source = source[:-2]
                elif source.endswith("\n"):
                    source = source[:-1]
                result = json.dumps(decode(source), ensure_ascii=False, indent=2)
        if args.output:
            Path(args.output).write_text(result + "\n", encoding="utf-8")
        else:
            print(result)
    except (CodecError, KeyError, TypeError, json.JSONDecodeError) as error:
        parser.exit(2, f"codec: {error}\n")


if __name__ == "__main__":
    main()
