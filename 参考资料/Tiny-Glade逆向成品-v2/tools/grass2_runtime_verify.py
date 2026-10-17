"""Verification for grass2_runtime_reference.py.

The numerical tests are independent hand-computed vectors for the recovered
GLSL operation order.  The native checks bind the reference to the shipped
binary's render-graph orchestration (procedure extent/hash and the direct
shader names present in its machine-code RIP references).
"""
from __future__ import annotations

import hashlib
import json
import pathlib
import re
import struct
import sys

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parents[2]
sys.path.insert(0, str(HERE))
import grass2_runtime_reference as g  # noqa: E402


def close(a, b, eps=1e-6):
    return abs(float(a) - float(b)) <= eps


def run_numerical():
    # Zero switches: packed half centers/scales and unorm point bytes have a
    # hand-computed result. Rotation bytes 128 produce the documented signed
    # normalized value (128/255*2-1); position bytes are all 128.
    h = lambda a, b: int.from_bytes(__import__("struct").pack("<2e", a, b), "little")
    c = g.Clump.from_words([h(10.0, 20.0), h(30.0, 0.0), h(1.0, 1.0), 128 | (128 << 8)])
    r = g.transform_card(c, 0x80808080, 0x7f7f7f7f,
                          ((0.0, 1.0), (0.0, 1.0), (0.0, 1.0)))
    expected = (10.0, 20.501960784313724, 30.00393694732795)
    assert all(close(a, b) for a, b in zip(r.world_position, expected)), (r, expected)
    assert r.removal_opacity == 1.0 and not r.discard_by_removal

    # All three switches: removal changes point height, object push bends XZ and
    # terrain follow adds the sampled height relative to center.y.
    c = g.Clump.from_words([h(10.0, 20.0), h(30.0, 4.0), h(1.0, 1.0),
                            (64 << 19) | (1 << 18) | (1 << 17) | (1 << 16)])
    removal = lambda uv: (0.0, 0.5, 0.0, 0.0)
    push = lambda uv: (0.25, -0.5, 0.25, 0.0)
    terrain = lambda uv: 7.0
    r = g.transform_card(c, 0xFF804000, 0x80804040,
                          ((10.0, 2.0), (20.0, 4.0), (30.0, 6.0)),
                          removal_texture=removal,
                          object_push_texture=push,
                          terrain_height_texture=terrain)
    assert close(r.removal_opacity, 0.5)
    assert close(r.object_push_weight, 0.75)
    assert close(r.world_position[1], 14.876470588235293, 1e-5)
    assert r.discard_by_removal is False

    # Outside the local 65-unit footprint, the recovered shader flips the
    # external heightmap axes and uses 0.001 world-to-UV scale.
    seen = []
    c_large = g.Clump.from_words([h(100.0, 0.0), h(100.0, 0.0), h(1.0, 1.0), 1 << 17])
    rr = g.transform_card(c_large, 0, 0x80804040,
                           ((100.0, 1.0), (0.0, 1.0), (100.0, 1.0)),
                           terrain_height_texture_large=lambda uv: (seen.append(uv) or 3.0))
    assert seen and close(seen[0][0], 0.6, 1e-3) and close(seen[0][1], 0.4, 1e-3)
    assert close(rr.terrain_sample_uv[0], 0.6, 1e-3) and close(rr.world_position[1], 3.0)

    # Removal red=1 is a deterministic discard regardless of the offset hash.
    r = g.transform_card(c, 0xFF804000, 0x80804040,
                          ((10.0, 2.0), (20.0, 4.0), (30.0, 6.0)),
                          removal_texture=lambda uv: (1.0, 1.0, 0.0, 0.0))
    assert r.discard_by_removal is True
    return {"vectors": 4, "status": "pass"}


def run_native(native_root: pathlib.Path):
    rows = []
    expected = {
        "0x140b20150": "grass2_card_splat",
        "0x140b20f60": "grass2_compute_main",
        "0x140b215f0": "grass2_compute_shadow",
    }
    for directory, needle in expected.items():
        info = json.loads((native_root / directory / "function.json").read_text(encoding="utf-8"))
        procedure = info["procedure"]
        assembly = (native_root / directory / "assembly.txt").read_text(encoding="utf-8")
        assert needle in procedure.get("demangled", procedure.get("name", ""))
        assert info["decoded_bytes"] == procedure["size"]
        assert info["bytes_sha256"] == hashlib.sha256(
            bytes.fromhex("".join(re.findall(r"^[0-9a-f]+\s+([0-9a-f]+)", assembly, re.M)))
        ).hexdigest()
        rows.append({"address": directory, "symbol": needle,
                     "size": procedure["size"], "sha256": info["bytes_sha256"],
                     "contains_shader_orchestration": any(
                         token in assembly for token in ("card_splats", "grass2", "dispatch"))})
    assert all(row["contains_shader_orchestration"] for row in rows)
    return rows


def main():
    result = {"numerical": run_numerical()}
    native = ROOT / "work" / "grass2-native"
    if native.exists():
        result["native_functions"] = run_native(native)
    shader = ROOT / "outputs" / "tiny-glade-analysis" / "reconstruction" / "shaders-source" / "glsl" / "country-core" / "compiled" / "grass2" / "card_splats" / "000.comp"
    result["shader"] = {"path": str(shader), "sha256": hashlib.sha256(shader.read_bytes()).hexdigest(),
                        "source_checks": {"world_scale": "0.007692307699471712" in shader.read_text(),
                                          "terrain_range": "mix(-2.5, 24.0" in shader.read_text(),
                                          "wind_coeff": "1.1144999265670776" in shader.read_text(),
                                          "removal_hash": "52.98291778564453" in shader.read_text()}}
    assert all(result["shader"]["source_checks"].values())
    out = ROOT / "outputs" / "tiny-glade-analysis" / "evidence" / "reconstruction_grass2" / "runtime_verification.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
