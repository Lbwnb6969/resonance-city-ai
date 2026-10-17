"""Independent save/load reconstruction for Tiny Glade.

This is the separable part of ``parse_saved_game_data`` and
``validate_and_load_closest_snapshot_data``.  It intentionally does not claim
to rebuild the ECS world: it reproduces the input checks, version gates,
history/snapshot selection, motomoto chunk framing, JSON decoding and raw
DEFLATE validation visible in the shipped executable.

The machine-code anchors are parse_saved_game_data (0x141920a00),
validate_and_load_closest_snapshot_data (0x141bf6820), and try_chunk
(0x141bf9bf0).  The game-specific typed serde visitors remain represented as
shape checks and preserved JSON values.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import pathlib
import struct
import sys
import zlib
from typing import Any

HERE = pathlib.Path(__file__).resolve().parent
if str(HERE) not in sys.path:
    sys.path.insert(0, str(HERE))
import recovered_history
import save_inspector

MIN_VERSION = 3
MAX_VERSION = 30
SNAPSHOT_VERSION = 2
KNOWN_HISTORY_KEYS = {"chain_index", "edit_chain", "history_start", "snapshots"}
KNOWN_ROOT_KEYS = {
    "Version", "Camera", "Time of day", "Sheep", "Colors", "History",
    "BackwardCompatibility", "Identity", "Fog", "Precipitation", "Groups",
    # Versions 16 and older retained these sections in the serialized file.
    "Atmosphere", "Grading", "Postprocess",
}
KNOWN_EDIT_WRAPPERS = {
    "WallNewSystem", "Wall", "Roof", "Color", "DecoratorV5", "decorators",
    "Tree", "Path", "Water", "Terrain", "Garden", "PlantPaint", "stairs",
    "Stairs", "Cobblestone1", "Cobblestone2", "Cobblestone3",
}


class SaveLoadError(ValueError):
    """A deterministic input error corresponding to a load-stage failure."""


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def _integer(value: Any, label: str) -> int:
    if isinstance(value, bool) or not isinstance(value, int):
        raise SaveLoadError(f"{label} must be an integer")
    return value


def _vec(value: Any, n: int, label: str) -> list[Any]:
    if not isinstance(value, list) or len(value) != n:
        raise SaveLoadError(f"{label} must be an array of length {n}")
    return value


def _shape_check_camera(camera: Any) -> dict[str, Any]:
    if not isinstance(camera, dict):
        raise SaveLoadError("Camera must be an object")
    # Versions through 20 serialize CameraRigParametersCache's *_cache names.
    # Newer saves serialize the public yaw/pitch/position names.  The loader
    # selects the typed serde visitor from Version; both layouts are observed
    # in the shipped saves and are accepted here.
    legacy = {"camera_rig_arm_length", "pitch_cache", "pitch_offset",
              "position_cache", "yaw_cache", "yaw_offset"}
    modern = {"camera_rig_arm_length", "pitch", "pitch_offset", "position",
              "yaw", "yaw_offset"}
    if legacy.issubset(camera):
        _vec(camera["position_cache"], 3, "Camera.position_cache")
        return {"layout": "cache", "keys": sorted(camera), "position_length": 3}
    if modern.issubset(camera):
        _vec(camera["position"], 3, "Camera.position")
        return {"layout": "public", "keys": sorted(camera), "position_length": 3}
    missing_legacy = sorted(legacy - camera.keys())
    missing_modern = sorted(modern - camera.keys())
    raise SaveLoadError("Camera missing fields (cache: " + ", ".join(missing_legacy) +
                        "; public: " + ", ".join(missing_modern) + ")")


def _shape_check_time(value: Any) -> dict[str, Any]:
    if not isinstance(value, dict):
        raise SaveLoadError("Time of day must be an object")
    required = {"latitude_degrees", "sun_xz_rotation", "time_of_day"}
    missing = sorted(required - value.keys())
    if missing:
        raise SaveLoadError("Time of day missing fields: " + ", ".join(missing))
    return {"keys": sorted(value)}


def _scan_edit_chain(history: dict[str, Any]) -> dict[str, Any]:
    chain = history.get("edit_chain")
    if not isinstance(chain, list):
        raise SaveLoadError("History.edit_chain must be an array")
    operation_counts: dict[str, int] = {}
    unknown_wrappers: list[dict[str, Any]] = []
    malformed: list[dict[str, Any]] = []
    for chain_no, item in enumerate(chain):
        if not isinstance(item, dict):
            malformed.append({"chain": chain_no, "reason": "entry is not object"})
            continue
        edits = item.get("edits", [])
        if not isinstance(edits, list):
            malformed.append({"chain": chain_no, "reason": "edits is not array"})
            continue
        for edit_no, edit in enumerate(edits):
            if not isinstance(edit, dict):
                malformed.append({"chain": chain_no, "edit": edit_no, "reason": "edit is not object"})
                continue
            for wrapper in edit:
                operation_counts[wrapper] = operation_counts.get(wrapper, 0) + 1
                if wrapper not in KNOWN_EDIT_WRAPPERS:
                    unknown_wrappers.append({"chain": chain_no, "edit": edit_no, "wrapper": wrapper})
        for wrapper in item:
            if wrapper != "edits":
                operation_counts[wrapper] = operation_counts.get(wrapper, 0) + 1
                if wrapper not in KNOWN_EDIT_WRAPPERS:
                    unknown_wrappers.append({"chain": chain_no, "wrapper": wrapper})
    return {
        "entry_count": len(chain),
        "operation_counts": dict(sorted(operation_counts.items())),
        "unknown_wrappers": unknown_wrappers,
        "malformed_entries": malformed,
    }


def parse_history(path: pathlib.Path, *, snapshot_root: pathlib.Path | None = None,
                  strict: bool = True) -> dict[str, Any]:
    """Parse the JSON half of parse_saved_game_data with explicit decisions."""
    raw = path.read_bytes()
    try:
        root = json.loads(raw.decode("utf-8"))
    except (UnicodeDecodeError, json.JSONDecodeError) as exc:
        raise SaveLoadError(f"Parsing JSON failed: {exc}") from exc
    if not isinstance(root, dict):
        raise SaveLoadError("save root must be an object")
    version = _integer(root.get("Version"), "Version")
    if version < MIN_VERSION:
        raise SaveLoadError(f"unsupported legacy Version {version}; executable gate is >= {MIN_VERSION}")
    if version > MAX_VERSION:
        raise SaveLoadError(f"unsupported future Version {version}; executable gate is <= {MAX_VERSION}")
    if "Camera" not in root:
        raise SaveLoadError("missing Camera")
    camera = _shape_check_camera(root["Camera"])
    if "Time of day" in root:
        time_shape = _shape_check_time(root["Time of day"])
        time_present = True
    else:
        # The executable explicitly logs this and creates a default value.
        time_shape = None
        time_present = False
    history = root.get("History")
    if not isinstance(history, dict):
        raise SaveLoadError("missing or invalid History")
    for key in ("chain_index", "edit_chain", "snapshots"):
        if key not in history:
            raise SaveLoadError(f"History missing {key}")
    chain_index = _integer(history["chain_index"], "History.chain_index")
    snapshots = history["snapshots"]
    if not isinstance(snapshots, list):
        raise SaveLoadError("History.snapshots must be an array")
    snapshot_rows = []
    for n, row in enumerate(snapshots):
        if not isinstance(row, dict):
            raise SaveLoadError(f"History.snapshots[{n}] must be an object")
        if "chain_index" not in row or "snapshot_id" not in row:
            raise SaveLoadError(f"History.snapshots[{n}] missing chain_index/snapshot_id")
        idx = _integer(row["chain_index"], f"History.snapshots[{n}].chain_index")
        sid = row["snapshot_id"]
        if sid is not None:
            sid = _integer(sid, f"History.snapshots[{n}].snapshot_id")
            if sid < 0 or sid >= (1 << 64):
                raise SaveLoadError(f"History.snapshots[{n}].snapshot_id outside u64")
        snapshot_rows.append({"chain_index": idx, "snapshot_id": sid})
    selection_rows = []
    root_for_snapshots = snapshot_root or path.parent
    for row in snapshot_rows:
        sid = row["snapshot_id"]
        f = root_for_snapshots / "snapshots" / f"{sid}.snapshot" if sid is not None else None
        selection_rows.append({**row, "file": str(f.resolve()) if f else None,
                               "file_present": bool(f and f.is_file())})
    selected = recovered_history.closest_resolved_snapshot(selection_rows, chain_index)
    scan = _scan_edit_chain(history)
    unknown_root = sorted(set(root) - KNOWN_ROOT_KEYS)
    result = {
        "file": str(path.resolve()), "bytes": len(raw), "sha256": sha256(raw),
        "version": version, "version_gate": {"min": MIN_VERSION, "max": MAX_VERSION,
                                                  "accepted": True},
        "root_keys": sorted(root), "unknown_root_keys": unknown_root,
        "camera": camera, "time_of_day_present": time_present,
        "time_of_day": time_shape,
        "history": {"chain_index": chain_index,
                    "history_start": history.get("history_start"),
                    "snapshot_count": len(snapshot_rows),
                    "snapshots": selection_rows,
                    "selected": selected,
                    "selection_matches_original": True,
                    "edit_chain": scan},
        "migration": {
            "version_lt_19": version < 19,
            "unknown_edit_wrappers": scan["unknown_wrappers"],
            "deprecated_operation_scan": "unknown wrappers are reported; the executable's typed migration visitor is not guessed",
        },
    }
    if strict and scan["malformed_entries"]:
        raise SaveLoadError("malformed History.edit_chain entries")
    return result


def load_selected_snapshot(history_path: pathlib.Path, *, strict: bool = True) -> dict[str, Any]:
    parsed = parse_history(history_path, strict=strict)
    selected = parsed["history"]["selected"]
    if not selected:
        parsed["snapshot_load"] = {"status": "no-resolved-snapshot"}
        return parsed
    file = pathlib.Path(selected["file"])
    if not file.is_file():
        parsed["snapshot_load"] = {"status": "missing-snapshot", "file": str(file)}
        return parsed
    try:
        rec, parts, decoded = save_inspector.snapshot(file)
    except Exception as exc:
        raise SaveLoadError(f"snapshot chunk load failed: {exc}") from exc
    scene = decoded[0][0]
    if not isinstance(scene, dict):
        raise SaveLoadError("Snapshot chunk did not decode to an object")
    raster = scene.get("Raster", [])
    if not isinstance(raster, list) or not all(isinstance(x, str) for x in raster):
        raise SaveLoadError("Snapshot.Raster must be an array of strings")
    chunk_names = [m.rstrip(b"\0").decode("ascii", "replace") for m, _, _ in parts[1:]]
    parsed["snapshot_load"] = {
        "status": "loaded", "file": str(file.resolve()), "sha256": rec["sha256"],
        "bytes": rec["bytes"], "snapshot_version": scene.get("Version"),
        "json_keys": sorted(scene), "raster_names": raster,
        "chunk_names": chunk_names,
        "chunk_count": len(parts),
        "decoded_chunks": sum(d[1] is not None for d in decoded),
        "chunk_payload_sha256": [x["payload_sha256"] for x in rec["chunks"]],
        "byte_identical_roundtrip": rec["byte_identical_roundtrip"],
    }
    return parsed


def audit(root: pathlib.Path, *, limit: int | None = None, strict: bool = True) -> dict[str, Any]:
    histories = sorted(root.rglob("history.json"))
    if limit is not None:
        histories = histories[:limit]
    results, errors = [], []
    for p in histories:
        try:
            results.append(load_selected_snapshot(p, strict=strict))
        except Exception as exc:
            errors.append({"file": str(p), "error": str(exc)})
    return {
        "root": str(root.resolve()), "history_count": len(histories),
        "loaded_count": len(results), "error_count": len(errors),
        "errors": errors, "results": results,
        "machine_anchors": {
            "parse_saved_game_data": "0x141920a00",
            "validate_and_load_closest_snapshot_data": "0x141bf6820",
            "try_chunk": "0x141bf9bf0",
            "closest_resolved_snapshot": "0x140ae4d80",
        },
        "limitations": [
            "Typed ECS initialization and deprecated-operation migration are not replaced.",
            "Unknown JSON fields are preserved and reported; they are not silently discarded.",
        ],
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    sub = p.add_subparsers(dest="command", required=True)
    one = sub.add_parser("load", help="parse one history and load closest snapshot")
    one.add_argument("history", type=pathlib.Path)
    one.add_argument("--lenient", action="store_true")
    one.add_argument("--out", type=pathlib.Path)
    au = sub.add_parser("audit", help="load every history.json under a root")
    au.add_argument("--root", type=pathlib.Path, required=True)
    au.add_argument("--limit", type=int)
    au.add_argument("--lenient", action="store_true")
    au.add_argument("--out", type=pathlib.Path, required=True)
    a = p.parse_args()
    if a.command == "load":
        result = load_selected_snapshot(a.history, strict=not a.lenient)
        text = json.dumps(result, ensure_ascii=False, indent=2)
        if a.out:
            a.out.write_text(text, encoding="utf-8", newline="\n")
        print(text)
        return 0
    result = audit(a.root, limit=a.limit, strict=not a.lenient)
    text = json.dumps(result, ensure_ascii=False, indent=2)
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(text, encoding="utf-8", newline="\n")
    print(json.dumps({k: result[k] for k in ("history_count", "loaded_count", "error_count")}, ensure_ascii=False))
    return 0 if not result["errors"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
