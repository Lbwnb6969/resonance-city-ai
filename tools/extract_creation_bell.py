"""Extract one recovered Foundation bell, preserving source attribute bytes.

Only Python's standard library is used. Source files are read-only; both output
files use exclusive creation so rerunning cannot overwrite an existing asset.
"""
from pathlib import Path
import argparse
import hashlib
import json
import struct

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/glb/game/asset/Buildings/Church/Model/Church.glb"
SOURCE_SHA = "456bd65a164b1440981cea70ba0b10dd239727a6a02653c5fc4b349daaab93f1"
DESTINATION = ROOT / "资源/建筑参考/教堂悬钟.glb"


def read_glb(path):
    raw = path.read_bytes()
    assert struct.unpack_from("<III", raw) == (0x46546C67, 2, len(raw))
    json_size, json_type = struct.unpack_from("<II", raw, 12)
    assert json_type == 0x4E4F534A
    document = json.loads(raw[20:20 + json_size])
    offset = 20 + json_size
    binary_size, binary_type = struct.unpack_from("<II", raw, offset)
    assert binary_type == 0x004E4942
    return raw, document, raw[offset + 8:offset + 8 + binary_size]


def accessor_bytes(document, binary, index):
    accessor = document["accessors"][index]
    view = document["bufferViews"][accessor["bufferView"]]
    components = {"SCALAR": 1, "VEC3": 3}[accessor["type"]]
    component_size = {5125: 4, 5126: 4}[accessor["componentType"]]
    element_size = components * component_size
    stride = view.get("byteStride", element_size)
    start = view.get("byteOffset", 0) + accessor.get("byteOffset", 0)
    return b"".join(binary[start + i * stride:start + i * stride + element_size]
                    for i in range(accessor["count"]))


def extract(destination):
    readme = destination.parent / "README.md"
    assert not destination.exists(), f"Output already exists: {destination}"
    assert not readme.exists(), f"Output already exists: {readme}"
    source_bytes, source, binary = read_glb(SOURCE)
    assert hashlib.sha256(source_bytes).hexdigest() == SOURCE_SHA
    primitive = source["meshes"][158]["primitives"][0]
    assert source["meshes"][158]["name"] == "ChurchBellTowerTopPart_ChurchBell"
    position = source["accessors"][primitive["attributes"]["POSITION"]]
    assert position["count"] == 314
    low, high = position["min"], position["max"]
    original_size = [b - a for a, b in zip(low, high)]
    scale = 0.32 / original_size[0]
    center = [(low[i] + high[i]) * 0.5 for i in range(3)]
    offset = [-center[0], -low[1], -center[2]]
    normalized_size = [value * scale for value in original_size]
    output = {
        "asset": {"version": "2.0", "generator": "Resonance City extract_creation_bell.py"},
        "scene": 0,
        "scenes": [{"name": "FoundationHangingBell", "nodes": [0]}],
        "nodes": [
            {"name": "FoundationHangingBell", "scale": [scale] * 3, "children": [1]},
            {"name": "OriginalChurchBell", "translation": offset, "mesh": 0},
        ],
        "meshes": [{"name": "ChurchBell", "primitives": [{"attributes": {}, "mode": 4, "material": 0}]}],
        "materials": [{"name": "ResonanceMatteCopper", "pbrMetallicRoughness": {
            "baseColorFactor": [0.49, 0.31, 0.14, 1.0], "metallicFactor": 0.25, "roughnessFactor": 0.82}}],
        "accessors": [], "bufferViews": [],
        "extras": {"source_sha256": SOURCE_SHA, "source_mesh": 158,
                   "source_node": 312, "raw_bounds": [low, high],
                   "normalized_size_metres": normalized_size,
                   "origin": "bottom center; normalization is node transforms only"},
    }
    packed = bytearray()
    expected = {}
    target_primitive = output["meshes"][0]["primitives"][0]
    for name, source_index in [
        ("POSITION", primitive["attributes"]["POSITION"]),
        ("NORMAL", primitive["attributes"]["NORMAL"]),
        ("_SOURCE_NORMAL", primitive["attributes"]["_SOURCE_NORMAL"]),
        ("indices", primitive["indices"]),
    ]:
        data = accessor_bytes(source, binary, source_index)
        expected[name] = data
        index = len(output["accessors"])
        output["bufferViews"].append({"buffer": 0, "byteOffset": len(packed),
            "byteLength": len(data), "target": 34963 if name == "indices" else 34962})
        accessor = {key: value for key, value in source["accessors"][source_index].items()
                    if key not in ("bufferView", "byteOffset")}
        accessor["bufferView"] = index
        output["accessors"].append(accessor)
        if name == "indices":
            target_primitive["indices"] = index
        else:
            target_primitive["attributes"][name] = index
        packed.extend(data)
    output["buffers"] = [{"byteLength": len(packed)}]
    encoded = json.dumps(output, separators=(",", ":"), ensure_ascii=False).encode("utf-8")
    encoded += b" " * (-len(encoded) % 4)
    packed.extend(b"\0" * (-len(packed) % 4))
    glb = struct.pack("<III", 0x46546C67, 2, 12 + 8 + len(encoded) + 8 + len(packed))
    glb += struct.pack("<II", len(encoded), 0x4E4F534A) + encoded
    glb += struct.pack("<II", len(packed), 0x004E4942) + packed
    destination.parent.mkdir(parents=True, exist_ok=True)
    with destination.open("xb") as handle:
        handle.write(glb)
    _, verified, verified_binary = read_glb(destination)
    for index, (name, data) in enumerate(expected.items()):
        assert accessor_bytes(verified, verified_binary, index) == data, name
    vertices = list(struct.iter_unpack("<3f", expected["POSITION"]))
    assert [min(v[i] for v in vertices) for i in range(3)] == low
    assert [max(v[i] for v in vertices) for i in range(3)] == high
    indices = struct.unpack("<1026I", expected["indices"])
    assert min(indices) == 0 and max(indices) == 313
    digest = hashlib.sha256(glb).hexdigest()
    source_relative = SOURCE.relative_to(ROOT).as_posix()
    text = f"""# 教堂悬钟资源出处

提取命令：`python tools/extract_creation_bell.py`。脚本只读原件，以独占创建方式写入新资源与本说明，不覆盖既有文件。

- 原始恢复资源：`{source_relative}`。
- 原件 SHA256：`{SOURCE_SHA}`；原恢复库出处见 `参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/README_MODEL_RECOVERY.md`。
- glTF mesh 158：`ChurchBellTowerTopPart_ChurchBell`，节点 312 `ChurchBellTowerTopPart_6`，原钟楼顶节点 303。
- 314 顶点、1026 个 uint32 索引、342 三角形；仅保 POSITION、NORMAL、_SOURCE_NORMAL 与 indices。逐属性有效元素字节与原 GLB 完全相同，保留原顶点/索引顺序；_SOURCE_NORMAL 是恢复库保留的原始法线槽，NORMAL 是其标准 glTF 法线。没有迁移其他模型、UV、纹理、原材质或动画。
- 原 POSITION bounds：min `{low}`，max `{high}`；实读全部顶点核对一致，索引范围 0–313。
- 根节点 `FoundationHangingBell`，子节点 `OriginalChurchBell`；只通过节点变换将底部中心移至原点，统一缩放 `{scale:.15f}`，顶点 bytes 不变。
- 导入后米制尺寸 X/Y/Z：`{normalized_size}`；宽 0.32 米、底部 Y=0，钟口朝下。视觉使用方可整体缩放或覆材质后合批。
- 本作自定义材质 `ResonanceMatteCopper`：baseColorFactor `[0.49,0.31,0.14,1]`、metallic `.25`、roughness `.82`，不是 Foundation 原材质还原。
- 抽出 GLB：`教堂悬钟.glb`，{len(glb)} bytes，SHA256 `{digest}`。

许可与范围：该钟体来源于 Foundation 商业游戏资源的本地研究恢复，按本项目用户授权用于本地参考与适配；非 CC0，也未取得独立再分发许可。本说明不将用户授权表述为版权方许可。完整资源保留在本地工程，精简协作库剔除 GLB/纹理等二进制。没有修改原游戏、原恢复库或其资源；未验证游戏原生动画与最终材质像素等价。
"""
    with readme.open("x", encoding="utf-8", newline="\n") as handle:
        handle.write(text)
    print(json.dumps({"output": str(destination), "sha256": digest, "bytes": len(glb),
        "vertices": len(vertices), "triangles": len(indices) // 3,
        "size_metres": normalized_size, "root": "FoundationHangingBell",
        "attribute_bytes_equal": True}, ensure_ascii=False))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--out", type=Path, default=DESTINATION)
    extract(parser.parse_args().out)
