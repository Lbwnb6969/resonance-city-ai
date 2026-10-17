"""Extract the three default LOD0 Foundation fountain meshes, read-only.

Python standard library only. Outputs are exclusively created; source attribute
elements and index order remain byte-identical. The source Y=0 anchor is kept.
"""
from pathlib import Path
import argparse
import hashlib
import json
import math
import struct
import zlib

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/glb/game/asset/Buildings/Beautification/Fountain/Fountain.glb"
SOURCE_SHA = "acc8a9abc811a99eb591ad8744c5da052ae42197c8e7f3acd4845be51cd736f7"
DESTINATION = ROOT / "资源/建筑参考/庭院喷泉.glb"
PARTS = [(1, "FountainStoneDetail"), (2, "FountainStoneBody"), (3, "FountainWater")]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def read_glb(path):
    raw = path.read_bytes()
    assert struct.unpack_from("<III", raw) == (0x46546C67, 2, len(raw))
    length, kind = struct.unpack_from("<II", raw, 12)
    assert kind == 0x4E4F534A and length % 4 == 0
    document = json.loads(raw[20:20 + length])
    offset = 20 + length
    length, kind = struct.unpack_from("<II", raw, offset)
    assert kind == 0x004E4942 and offset + 8 + length == len(raw)
    return raw, document, raw[offset + 8:]


def accessor_bytes(document, binary, index):
    accessor = document["accessors"][index]
    view = document["bufferViews"][accessor["bufferView"]]
    size = {"SCALAR": 1, "VEC3": 3}[accessor["type"]] * {5125: 4, 5126: 4}[accessor["componentType"]]
    stride = view.get("byteStride", size)
    start = view.get("byteOffset", 0) + accessor.get("byteOffset", 0)
    end = start + (accessor["count"] - 1) * stride + size
    assert end <= view.get("byteOffset", 0) + view["byteLength"] <= len(binary)
    return b"".join(binary[start + i * stride:start + i * stride + size]
                    for i in range(accessor["count"]))


def above_ground_polygon(points):
    """Clip one source triangle against Y>=0; used for metrics only."""
    result = []
    for a, b in zip(points, points[1:] + points[:1]):
        if a[1] >= 0:
            result.append(a)
        if (a[1] < 0) != (b[1] < 0):
            t = -a[1] / (b[1] - a[1])
            result.append(tuple(a[k] + t * (b[k] - a[k]) for k in range(3)))
    return result


def area_squared(a, b, c):
    u = [b[i] - a[i] for i in range(3)]
    v = [c[i] - a[i] for i in range(3)]
    cross = [u[1] * v[2] - u[2] * v[1], u[2] * v[0] - u[0] * v[2], u[0] * v[1] - u[1] * v[0]]
    return sum(x * x for x in cross)


def metrics(positions, indices):
    effective = fully_above = crossing = clipped_triangles = 0
    above_radius = 0.0
    for start in range(0, len(indices), 3):
        triangle = [positions[i] for i in indices[start:start + 3]]
        polygon = above_ground_polygon(triangle)
        count = sum(area_squared(polygon[0], polygon[i], polygon[i + 1]) > 1e-18
                    for i in range(1, len(polygon) - 1))
        if count:
            effective += 1
            fully_above += int(all(p[1] >= 0 for p in triangle))
            crossing += int(any(p[1] < 0 for p in triangle))
            clipped_triangles += count
            above_radius = max(above_radius, *(math.hypot(p[0], p[2]) for p in polygon))
    return {
        "vertices": len(positions), "indices": len(indices), "triangles": len(indices) // 3,
        "bounds_min": [min(p[i] for p in positions) for i in range(3)],
        "bounds_max": [max(p[i] for p in positions) for i in range(3)],
        "xz_radius_all": max(math.hypot(p[0], p[2]) for p in positions),
        "xz_radius_above_ground": above_radius,
        "source_triangles_with_above_ground_area": effective,
        "fully_above_ground_triangles": fully_above,
        "crossing_ground_triangles": crossing,
        "clipped_above_ground_triangles": clipped_triangles,
    }


def extract(destination):
    note = destination.parent / "庭院喷泉来源.md"
    assert not destination.exists(), f"Existing output protected: {destination}"
    assert not note.exists(), f"Existing output protected: {note}"
    source_raw, source, binary = read_glb(SOURCE)
    assert digest(source_raw) == SOURCE_SHA
    output = {
        "asset": {"version": "2.0", "generator": "Resonance City extract_creation_fountain.py"},
        "scene": 0, "scenes": [{"name": "CourtyardFountain", "nodes": [0]}],
        "nodes": [{"name": "CourtyardFountain", "children": [1, 2, 3]}],
        "meshes": [], "accessors": [], "bufferViews": [],
        "extras": {"source_sha256": SOURCE_SHA, "source_meshes": [1, 2, 3],
                   "anchor": "Original local coordinates; Y=0 ground; identity root; no scale"},
    }
    packed = bytearray()
    expected = []
    measurements = []
    for mesh_index, name in PARTS:
        original = source["meshes"][mesh_index]
        assert len(original["primitives"]) == 1
        primitive = original["primitives"][0]
        assert primitive.get("mode", 4) == 4
        copied = {"attributes": {}, "mode": 4}
        output["nodes"].append({"name": name, "mesh": len(output["meshes"])})
        output["meshes"].append({"name": name, "primitives": [copied]})
        data_by_name = {}
        for attribute in ["POSITION", "NORMAL", "_SOURCE_NORMAL", "indices"]:
            source_index = primitive["indices"] if attribute == "indices" else primitive["attributes"][attribute]
            data = accessor_bytes(source, binary, source_index)
            data_by_name[attribute] = data
            target_index = len(output["accessors"])
            output["bufferViews"].append({"buffer": 0, "byteOffset": len(packed),
                "byteLength": len(data), "target": 34963 if attribute == "indices" else 34962})
            accessor = {key: value for key, value in source["accessors"][source_index].items()
                        if key not in ("bufferView", "byteOffset")}
            accessor["bufferView"] = target_index
            output["accessors"].append(accessor)
            if attribute == "indices":
                copied["indices"] = target_index
            else:
                copied["attributes"][attribute] = target_index
            expected.append((target_index, name, attribute, digest(data)))
            packed.extend(data)
        positions = list(struct.iter_unpack("<3f", data_by_name["POSITION"]))
        indices = list(struct.unpack("<" + "I" * (len(data_by_name["indices"]) // 4), data_by_name["indices"]))
        assert min(indices) >= 0 and max(indices) < len(positions)
        measurements.append({"name": name, "source_mesh": mesh_index, **metrics(positions, indices)})
    assert sum(row["vertices"] for row in measurements) == 1921
    output["buffers"] = [{"byteLength": len(packed)}]
    output["extras"]["measurements"] = measurements
    encoded = json.dumps(output, separators=(",", ":"), ensure_ascii=False).encode("utf-8")
    encoded += b" " * (-len(encoded) % 4)
    packed.extend(b"\0" * (-len(packed) % 4))
    glb = struct.pack("<III", 0x46546C67, 2, 28 + len(encoded) + len(packed))
    glb += struct.pack("<II", len(encoded), 0x4E4F534A) + encoded
    glb += struct.pack("<II", len(packed), 0x004E4942) + packed
    destination.parent.mkdir(parents=True, exist_ok=True)
    with destination.open("xb") as handle:
        handle.write(glb)
    result_raw, result, result_binary = read_glb(destination)
    assert result_raw == glb and zlib.crc32(result_raw) == zlib.crc32(glb)
    for index, name, attribute, expected_sha in expected:
        assert digest(accessor_bytes(result, result_binary, index)) == expected_sha, (name, attribute)
    assert not any(key in result for key in ["materials", "textures", "images", "animations"])
    assert digest(SOURCE.read_bytes()) == SOURCE_SHA
    stone = [row for row in measurements if row["name"] != "FountainWater"]
    summary = {"output": str(destination), "bytes": len(glb), "sha256": digest(glb),
        "crc32": f"{zlib.crc32(glb):08x}", "root": "CourtyardFountain", "measurements": measurements,
        "stone_xz_radius_all": max(row["xz_radius_all"] for row in stone),
        "stone_xz_radius_above_ground": max(row["xz_radius_above_ground"] for row in stone),
        "stone_effective_source_triangles": sum(row["source_triangles_with_above_ground_area"] for row in stone),
        "attribute_sha256_equal": True, "source_unchanged": True}
    attributes = "\n".join(f"| {name} | {attribute} | `{sha}` |" for _, name, attribute, sha in expected)
    text = f"""# 庭院喷泉来源与提取范围

原始恢复资源：`{SOURCE.relative_to(ROOT).as_posix()}`。原件 SHA256 `{SOURCE_SHA}`。这是 Foundation 商业游戏资源的本地研究恢复，非 CC0；本项目用户授权用于本地参考与适配，不等于版权方再分发许可。二进制资源留在本地完整工程，精简协作库继续剔除模型/纹理。

提取命令：`python tools/extract_creation_fountain.py`。脚本仅使用 Python 标准库，只读参考原件，以独占创建方式写新 GLB 与本说明；已有输出会拒绝覆盖。没有修改既有建筑参考 README 或其他资源。

仅提取原默认 scene0 的 LOD0 mesh 1/2/3，共 1921 顶点。根 `CourtyardFountain` 为恒等变换，子节点 `FountainStoneDetail` / `FountainStoneBody` / `FountainWater`；资源保留原局部米制坐标，没有任何缩放或重新居中。**Y=0 为接地锚；石体原 minY=-4.037267684936523，负高基础保留埋地，不能把 minY 移到地面。** 本作 renderer 的统一 `.16` 缩放是游戏适配参数，不是原资源参数。

只保原 POSITION、NORMAL、_SOURCE_NORMAL、indices 的有效元素字节与顺序；丢弃 UV、其他 LOD/mesh、原材质、纹理和动画。NORMAL 是恢复库的标准 glTF 法线，_SOURCE_NORMAL 保留其原始法线槽。石体/水面由游戏覆本作材质，本文不宣称还原原游戏水动画或最终像素。

输出 {len(glb)} bytes，SHA256 `{digest(glb)}`，CRC32 `{zlib.crc32(glb):08x}`。重新解析输出容器、回读 CRC 和 12 项属性 SHA256 与源逐项比对一致；源 SHA256 再读保持。此结论限 Python 提取与字节校验，未运行 Godot、未验证实窗或真实碰撞。

## 原坐标几何测量

下列半径由真实顶点的 `sqrt(x*x+z*z)` 计算，不是 AABB 半宽。露地半径先把每个三角形裁至 Y>=0，检查正面积，再取保留多边形顶点最大半径；球/圆净空可将其乘 renderer 的 `.16`。原有效三角数指存在露地正面积的原三角形，裁切后扇形三角数另记；没有修改导出 mesh。

```json
{json.dumps(summary, ensure_ascii=False, indent=2)}
```

## 原有效元素属性 SHA256

| 节点 | 属性 | 源与输出相同 SHA256 |
|---|---|---|
{attributes}
"""
    with note.open("x", encoding="utf-8", newline="\n") as handle:
        handle.write(text)
    print(json.dumps(summary, ensure_ascii=False))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--out", type=Path, default=DESTINATION)
    extract(parser.parse_args().out)
