"""Create local Tiny Glade lily references; never overwrite outputs or sources.

Uses the existing, hash-checked texture index and two named archives only.
The established assets_tool DDS writer plus Pillow decode the original BC7.
"""
from pathlib import Path
import hashlib
import io
import json
import math
import runpy
import struct
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
GAME = Path("C:/Steam/steamapps/common/Tiny Glade")
LIBRARY = ROOT / "参考资料/Tiny-Glade逆向成品-v2"
OUT = ROOT / "资源/自然参考/睡莲"
INDEX_SHA = "6a54f7d5e8f8111abd6e6c579a49cd25ece6766a7dfa60dfe38c2d4c316c02d0"
MESHES = [
    ("lilypad.json", "叶.json", "9481c7db56abf6b0ee7b711fd570644734df96dc7b67b76add40372327319451", 12, 16),
    ("lilypad_flower.json", "花.json", "f2c498f2e974e3a30d62f3591d41424c310ad18b27fc134a2568d60b99403346", 80, 60),
]
TEXTURES = [("lilypad/alpha", "叶形.png"), ("lilypad_flower", "花色.png")]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def mesh_record(path, raw):
    data = json.loads(raw)
    vertices = data["Vertex_Position"]["buffer"]
    indices = data["indices"]["buffer"]
    assert len(indices) % 3 == 0 and all(0 <= i < len(vertices) for i in indices)
    good = 0
    for offset in range(0, len(indices), 3):
        a, b, c = (vertices[i] for i in indices[offset:offset+3])
        u, v = ([b[k]-a[k] for k in range(3)], [c[k]-a[k] for k in range(3)])
        cross = [u[1]*v[2]-u[2]*v[1], u[2]*v[0]-u[0]*v[2], u[0]*v[1]-u[1]*v[0]]
        good += sum(n*n for n in cross) > 1e-18
    attributes = {}
    for key in [*data["attributes"], "indices"]:
        attribute = data[key]
        flat = [x for row in attribute["buffer"] for x in (row if isinstance(row, list) else [row])]
        code = "f" if attribute["type"][0] == "float" else "i"
        assert all(math.isfinite(x) for x in flat)
        attributes[key] = {"type": attribute["type"], "elements": len(attribute["buffer"]),
                           "float32_or_int32_sha256": sha(struct.pack("<"+code*len(flat), *flat))}
    return {"source": str(path), "source_sha256": sha(raw), "bytes": len(raw),
            "vertices": len(vertices), "triangles": len(indices)//3, "nondegenerate_triangles": good,
            "double_sided": data["double_sided"], "attributes": attributes,
            "bounds": [[min(v[k] for v in vertices) for k in range(3)],
                       [max(v[k] for v in vertices) for k in range(3)]],
            "xz_radius": max(math.hypot(v[0], v[2]) for v in vertices),
            "transform": "identity; original local coordinates and every source byte retained"}


def main():
    names = [row[1] for row in MESHES]+[row[1] for row in TEXTURES]+["README.md", "提取记录.json"]
    for name in names:
        if (OUT/name).exists():
            raise FileExistsError(f"Refusing to overwrite {OUT/name}")
    helpers = runpy.run_path(str(LIBRARY/"tools/assets_tool.py"))
    index = json.loads((LIBRARY/"evidence/assets_textures.json").read_text(encoding="utf-8"))
    index_path = GAME/index["list_file"]
    assert sha(index_path.read_bytes()) == index["sha256"] == INDEX_SHA
    staged = {}
    report = {"method": "original mesh byte copies; named archive DDS/BC7 decode, no resize or gamma conversion",
              "texture_index": str(index_path), "texture_index_sha256": INDEX_SHA, "meshes": [], "textures": []}
    sources = {}
    for source_name, name, expected_sha, vertex_count, triangle_count in MESHES:
        path = GAME/"assets/meshes"/source_name
        raw = path.read_bytes()
        assert sha(raw) == expected_sha
        record = mesh_record(path, raw)
        assert record["vertices"] == vertex_count and record["triangles"] == triangle_count
        record.update({"output": name, "output_sha256": sha(raw), "byte_identical": True})
        staged[name] = raw
        sources[path] = expected_sha
        report["meshes"].append(record)
    for texture_name, name in TEXTURES:
        row = next(r for r in index["entries"] if r["name"] == texture_name)
        path = GAME/row["file"]
        raw = path.read_bytes()
        metadata = helpers["texture_metadata"](path)
        assert all(metadata[k] == row[k] for k in metadata)
        assert row["layers"] == row["depth"] == 1 and row["payload_size_matches"]
        payload = raw[row["payload_offset"]:row["payload_offset"]+row["payload_bytes"]]
        image = Image.open(io.BytesIO(helpers["dds"](row, payload)))
        image.load()
        assert image.mode == "RGBA" and image.size == (256, 256)
        stream = io.BytesIO()
        image.save(stream, format="PNG")
        output = stream.getvalue()
        reopened = Image.open(io.BytesIO(output)); reopened.load()
        assert reopened.mode == image.mode and reopened.tobytes() == image.tobytes()
        record = {"name": texture_name, "source": str(path), "source_sha256": sha(raw),
                  "source_payload_sha256": sha(payload), "vk_format": row["vk_format_name"],
                  "source_mips": row["mips"], "output": name, "output_sha256": sha(output),
                  "size": list(image.size), "mode": image.mode,
                  "decoded_rgba_sha256": sha(image.tobytes()),
                  "decoded_rgb_sha256": sha(image.convert("RGB").tobytes()),
                  "decoded_r_sha256": sha(image.getchannel("R").tobytes()),
                  "png_pixels_equal_dds_base_level": True}
        staged[name] = output
        sources[path] = sha(raw)
        report["textures"].append(record)
    report["source_unchanged"] = all(sha(p.read_bytes()) == expected for p, expected in sources.items())
    assert report["source_unchanged"]
    report["godot_run"] = False
    staged["提取记录.json"] = (json.dumps(report, ensure_ascii=False, indent=2)+"\n").encode("utf-8")
    readme = """# 睡莲原资源与本作适配

来源为本机Tiny Glade商业游戏，只读原件与既有恢复工具；非CC0，用户授权的本地研究/适配不等于版权方再分发许可。精简协作库继续剔除二进制与原资源。逐源路径、原SHA、输出SHA、属性float32/int32摘要、PNG解码像素SHA见同目录 `提取记录.json`。

运行 `python tools/extract_creation_lilypads.py`，仅创建新输出，任何目标已存在即拒绝覆盖。原JSON逐字节复制，无坐标、拓扑、法线、顶点色变换：叶12点、16索引三角（10有效、6退化保原），花80点、60索引三角（40有效、20退化保原）。根/局部变换恒等；叶半径约.33m、Y=0，花高度约.226m，精确bounds/半径见记录。叶含Vertex_Position/Normal/Color/UV/stem/wind_bend，花只含Position/Normal/Color；indices均是独立buffer。没有生成GLB、没有原动画。

`叶形.png` 是精确定名 `lilypad/alpha` 的256² BC7_UNORM原基级RGBA解码，不重采样、不gamma变换；作为数据纹理取R。原 `lilypad/000.vert:306` 重新生成 `position.xz*1.5+.5` UV，JSON自带UV不能直接替代；`001.frag:92` 按 `R<mix(0,.9,seed)` 裁弃。Godot导入应禁用fix_alpha_border与premult_alpha以保RGB原texel，不将数据R当sRGB。

`花色.png` 精确定名为 `lilypad_flower`，原summer/flowery/olden `assets/glade/*/textures.json:8` 均绑定此名，秋季另有lilypad_flower_autumn不在本轮。256² BC7_SRGB原基级RGBA解码，未在线性化时改像素，运行时作为source_color采样。原 `lilypad_flower/000.vert:265` 的UV是最终世界XZ*.1；`001.frag:90–101` 还按世界高度混采样色/顶点色，不能把此纹理叫花瓣UV图集。两JSON原Vertex_Color数值保持，不额外做sRGB转换。原渲染器受光/Gbuffer/季节混色/动态水波不包含在资源提取内。

本作使用稀疏静态共享实例、池塘真水位/净空与身份稳定派生；密度、花概率、缩放、平面偏移及性能预算由产品选择，不照搬TG园林遮罩阈值。脚本仅Python资源字节/属性/PNG回读核验，没有Godot、GPU、碰撞、画面或性能通过结论。
"""
    staged["README.md"] = readme.encode("utf-8")
    OUT.mkdir(parents=True, exist_ok=True)
    for name, raw in staged.items():
        with (OUT/name).open("xb") as stream:
            stream.write(raw)
        assert (OUT/name).read_bytes() == raw
    print(json.dumps({"output": str(OUT), "files": len(staged), "meshes": report["meshes"],
                      "textures": report["textures"], "source_unchanged": report["source_unchanged"]}, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
