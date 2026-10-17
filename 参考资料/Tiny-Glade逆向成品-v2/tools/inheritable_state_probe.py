"""Probe raw PrefabRtConfig Inheritable/Option state tags with original code.

This is deliberately a raw-state probe: the shipped PDB identifies the
routine as ``inherit_from<Option<PrefabRtConfig>>`` but does not retain the
Rust enum names.  The probe records byte-for-byte transitions for each field
tag and therefore avoids assigning unsupported names to discriminants.
"""
from __future__ import annotations

import argparse
import hashlib
import itertools
import json
import struct
from pathlib import Path


EXE_SHA256 = "4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5"
NATIVE = 0x14270D410


def _config(tags: list[int], add: int) -> bytes:
    b = bytearray(72)
    for j, tag in enumerate(tags):
        struct.pack_into("<I3f", b, j * 16, tag,
                         1.0 + j + add, 2.0 + j + add, 3.0 + j + add)
    # The two trailing bytes are the opaque semantic/boolean fields used by
    # the native merge.  Their enum names are intentionally not guessed.
    b[64] = 1
    b[65] = 0
    return bytes(b)


def probe(exe: Path) -> dict:
    import pefile
    import unicorn as u
    import unicorn.x86_const as x

    digest = hashlib.sha256(exe.read_bytes()).hexdigest()
    if digest != EXE_SHA256:
        raise ValueError("native addresses require the original Tiny Glade EXE")
    pe = pefile.PE(str(exe), fast_load=True)
    cpu = u.Uc(u.UC_ARCH_X86, u.UC_MODE_64)
    base = pe.OPTIONAL_HEADER.ImageBase
    cpu.mem_map(base, (pe.OPTIONAL_HEADER.SizeOfImage + 4095) & ~4095)
    for sec in pe.sections:
        cpu.mem_write(base + sec.VirtualAddress, bytes(sec.get_data()))
    cpu.mem_map(0x100000, 0x20000)
    cpu.mem_map(0x200000, 0x10000)

    def run() -> str:
        cpu.mem_write(0x10FFF8, struct.pack("<Q", 0x10000))
        cpu.reg_write(x.UC_X86_REG_RSP, 0x10FFF8)
        cpu.reg_write(x.UC_X86_REG_RCX, 0x200000)
        cpu.reg_write(x.UC_X86_REG_RDX, 0x201000)
        try:
            cpu.emu_start(NATIVE, 0x10000, count=5000)
            return "returned" if cpu.reg_read(x.UC_X86_REG_RIP) == 0x10000 else "stopped"
        except Exception as exc:  # malformed tag states are still evidence
            return f"error:{type(exc).__name__}:{exc}"

    rows: list[dict] = []
    # Probe each field independently while the other three fields are a
    # concrete tag-2 fixture.  This isolates state transitions and mirrors the
    # 16 presence masks already used by recovered_resources_verify.py.
    for field in range(4):
        for child_tag, parent_tag in itertools.product(range(4), repeat=2):
            child_tags = [2] * 4
            parent_tags = [2] * 4
            child_tags[field] = child_tag
            parent_tags[field] = parent_tag
            cpu.mem_write(0x200000, _config(child_tags, 0))
            cpu.mem_write(0x201000, _config(parent_tags, 10))
            status = run()
            out = bytes(cpu.mem_read(0x200000, 72))
            rows.append({
                "field": field,
                "child_tag": child_tag,
                "parent_tag": parent_tag,
                "status": status,
                "result_tag": struct.unpack_from("<I", out, field * 16)[0],
                "result_vec3": list(struct.unpack_from("<3f", out, field * 16 + 4)),
                "result_semantic_byte": out[64],
                "result_flag_byte": out[65],
            })
    return {
        "exe_sha256": digest,
        "routine": hex(NATIVE),
        "routine_pdb": "asset::inheritable::impl$1::inherit_from<Option<asset::prefab::config::PrefabRtConfig>>",
        "field_layout": {"stride": 16, "fields": ["mesh_scale", "summer_albedo", "autumn_albedo", "winter_albedo"]},
        "tags_are_raw": True,
        "rows": rows,
        "notes": [
            "The binary/PDB does not preserve enum variant names; result tags are raw discriminants.",
            "For every field, child tag 3 survives unchanged (an explicit disabling state in this POD path).",
            "Child tag 2 keeps its payload; child tag 0 selects a concrete parent tag 2 payload or the native [1,1,1] default when no concrete parent exists.",
            "Child tag 1 remains tag 1 and its payload; this is an unresolved/specification state in the merge output and is not renamed here.",
        ],
    }


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", default=r"C:\Steam\steamapps\common\Tiny Glade")
    ap.add_argument("--out", type=Path, required=True)
    args = ap.parse_args()
    result = probe(Path(args.root) / "tiny-glade.exe")
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2), encoding="utf-8")
    print(json.dumps({"rows": len(result["rows"]), "out": str(args.out)}, ensure_ascii=False))


if __name__ == "__main__":
    main()
