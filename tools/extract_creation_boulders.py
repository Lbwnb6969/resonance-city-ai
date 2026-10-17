"""Extract two Foundation low LOD stone exemplars; create new files only."""
from pathlib import Path
import argparse
import hashlib
import json
import math
import struct
import zlib

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/glb/game/asset/Resources/Mineable/Stone/Model/Env_Mineable_Stone.glb"
SOURCE_SHA = "c499801ea25ed403a5dafad4dd3805fa3f19776bdd8a31cac70c18c61d100d54"
DESTINATION = ROOT / "资源/自然参考/坡地伴石.glb"
PARTS = [(3, "SlopeBoulderA", 376), (4, "SlopeBoulderB", 356)]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def read_glb(path):
    raw = path.read_bytes()
    assert struct.unpack_from("<III", raw) == (0x46546C67, 2, len(raw))
    size, kind = struct.unpack_from("<II", raw, 12)
    assert kind == 0x4E4F534A
    document = json.loads(raw[20:20 + size])
    offset = 20 + size
    size, kind = struct.unpack_from("<II", raw, offset)
    assert kind == 0x004E4942 and offset + 8 + size == len(raw)
    return raw, document, raw[offset + 8:]


def elements(document, binary, index):
    accessor = document["accessors"][index]
    view = document["bufferViews"][accessor["bufferView"]]
    width = {"VEC3": 12, "SCALAR": 4}[accessor["type"]]
    assert accessor["componentType"] in (5125, 5126)
    start = view.get("byteOffset", 0) + accessor.get("byteOffset", 0)
    stride = view.get("byteStride", width)
    assert start + (accessor["count"] - 1) * stride + width <= len(binary)
    return b"".join(binary[start + i * stride:start + i * stride + width]
                    for i in range(accessor["count"]))


def bounds(vertices):
    return ([min(v[i] for v in vertices) for i in range(3)],
            [max(v[i] for v in vertices) for i in range(3)])


def extract(destination):
    note = destination.parent / "坡地伴石来源.md"
    assert not destination.exists() and not note.exists(), "Existing outputs are protected"
    source_raw, source, binary = read_glb(SOURCE)
    assert sha(source_raw) == SOURCE_SHA
    output = {"asset": {"version": "2.0", "generator": "Resonance City extract_creation_boulders.py"},
        "scene": 0, "scenes": [{"name": "SlopeCompanionBoulders", "nodes": [0]}],
        "nodes": [{"name": "SlopeCompanionBoulders", "children": [1, 2]}],
        "meshes": [], "accessors": [], "bufferViews": [],
        "extras": {"source_sha256": SOURCE_SHA, "source_meshes": [3, 4]}}
    packed = bytearray()
    checks = []
    measurements = []
    for original_index, name, expected_count in PARTS:
        mesh = source["meshes"][original_index]
        assert len(mesh["primitives"]) == 1
        primitive = mesh["primitives"][0]
        original_positions = elements(source, binary, primitive["attributes"]["POSITION"])
        original = list(struct.iter_unpack("<3f", original_positions))
        assert len(original) == expected_count
        low, high = bounds(original)
        translation = [-(low[0] + high[0]) * 0.5, -low[1], -(low[2] + high[2]) * 0.5]
        positions = b"".join(struct.pack("<3f", *(v[i] + translation[i] for i in range(3))) for v in original)
        adapted = list(struct.iter_unpack("<3f", positions))
        adapted_low, adapted_high = bounds(adapted)
        normals = elements(source, binary, primitive["attributes"]["NORMAL"])
        indices = elements(source, binary, primitive["indices"])
        index_values = list(struct.iter_unpack("<I", indices))
        assert min(i[0] for i in index_values) == 0 and max(i[0] for i in index_values) < expected_count
        assert len(indices) % 12 == 0 and adapted_low[1] == 0.0
        result_primitive = {"attributes": {}, "mode": 4}
        output["nodes"].append({"name": name, "mesh": len(output["meshes"]),
            "extras": {"source_mesh": original_index, "baked_translation": translation}})
        output["meshes"].append({"name": name, "primitives": [result_primitive]})
        for attribute, data, component_type, type_, count in [
            ("POSITION", positions, 5126, "VEC3", expected_count),
            ("NORMAL", normals, 5126, "VEC3", expected_count),
            ("_SOURCE_POSITION", original_positions, 5126, "VEC3", expected_count),
            ("indices", indices, 5125, "SCALAR", len(indices) // 4),
        ]:
            index = len(output["accessors"])
            accessor = {"bufferView": index, "componentType": component_type, "type": type_, "count": count}
            if attribute == "POSITION": accessor.update(min=adapted_low, max=adapted_high)
            if attribute == "_SOURCE_POSITION": accessor.update(min=low, max=high)
            output["accessors"].append(accessor)
            output["bufferViews"].append({"buffer": 0, "byteOffset": len(packed), "byteLength": len(data),
                "target": 34963 if attribute == "indices" else 34962})
            if attribute == "indices": result_primitive["indices"] = index
            else: result_primitive["attributes"][attribute] = index
            checks.append({"node": name, "attribute": attribute, "accessor": index, "sha256": sha(data)})
            packed.extend(data)
        measurements.append({"node": name, "source_mesh": original_index, "source_name": mesh["name"],
            "vertices": expected_count, "triangles": len(indices) // 12,
            "original_bounds": [low, high], "baked_translation": translation,
            "adapted_bounds": [adapted_low, adapted_high],
            "xz_radius": max(math.hypot(v[0], v[2]) for v in adapted),
            "source_position_sha256": sha(original_positions), "position_sha256": sha(positions),
            "normal_sha256": sha(normals), "indices_sha256": sha(indices)})
    output["buffers"] = [{"byteLength": len(packed)}]
    output["extras"]["measurements"] = measurements
    encoded = json.dumps(output, separators=(",", ":"), ensure_ascii=False).encode("utf-8")
    encoded += b" " * (-len(encoded) % 4)
    packed.extend(b"\0" * (-len(packed) % 4))
    glb = struct.pack("<III", 0x46546C67, 2, 28 + len(encoded) + len(packed))
    glb += struct.pack("<II", len(encoded), 0x4E4F534A) + encoded
    glb += struct.pack("<II", len(packed), 0x004E4942) + packed
    destination.parent.mkdir(parents=True, exist_ok=True)
    with destination.open("xb") as handle: handle.write(glb)
    readback, verified, verified_binary = read_glb(destination)
    assert readback == glb and zlib.crc32(readback) == zlib.crc32(glb)
    for check in checks:
        assert sha(elements(verified, verified_binary, check["accessor"])) == check["sha256"]
    assert sha(SOURCE.read_bytes()) == SOURCE_SHA
    result = {"output": str(destination), "bytes": len(glb), "sha256": sha(glb),
        "crc32": f"{zlib.crc32(glb):08x}", "measurements": measurements,
        "attributes_verified": len(checks), "source_unchanged": True}
    text = f"""# 坡地伴石来源与接地适配

原资源：`{SOURCE.relative_to(ROOT).as_posix()}`。
原 SHA256：`{SOURCE_SHA}`。

命令：`python tools/extract_creation_boulders.py`。仅Python标准库、只读原件；输出GLB和本说明采用独占创建，不覆盖已有文件。本轮只提取原默认场景低LOD mesh3/4，376/356顶点，共732顶点、716三角；不含矿区Plane、其他模型、其他LOD、原材质、纹理或动画。

根 `SlopeCompanionBoulders`，两个恒等变换独立子节点 `SlopeBoulderA`、`SlopeBoulderB`。这是一份母型集合，运行时按名称选一个母型，不将两个重叠节点整体摆入场景。每块仅将POSITION平移为XZ包围盒居中、底面Y=0，平移量记录于节点extras与下面表中；没有缩放或旋转。原始POSITION bytes保留在 `_SOURCE_POSITION`，NORMAL和indices有效元素逐字节保持。新POSITION严格由原坐标加该平移后按float32写入，顶点/索引顺序不变。运行时只需POSITION/NORMAL/indices，不依赖自定义原坐标属性。

接地、缩放、入土、旋转、颜色和坡向分布由本作renderer决定；原负基底已经按明确平移归一，不能再次把底面移高。材料由本作覆共享石色。来源是Foundation商业游戏本地研究恢复，非CC0；用户授权用于本地参考与适配，不等于版权方再分发许可。二进制保留在本地完整工程，精简协作库继续剔除模型。

输出GLB {len(glb)} bytes，SHA256 `{sha(glb)}`，CRC32 `{zlib.crc32(glb):08x}`。提取后重新读取GLB头/块、CRC、8项属性SHA，并重读源SHA保持。下面NORMAL/indices摘要直接对应源有效元素，source_position摘要也对应源；POSITION摘要对应明确变换后的输出。未运行Godot，没有性能/碰撞/画面验证结论。

```json
{json.dumps(result, ensure_ascii=False, indent=2)}
```
"""
    with note.open("x", encoding="utf-8", newline="\n") as handle: handle.write(text)
    print(json.dumps(result, ensure_ascii=False))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--out", type=Path, default=DESTINATION)
    extract(parser.parse_args().out)
