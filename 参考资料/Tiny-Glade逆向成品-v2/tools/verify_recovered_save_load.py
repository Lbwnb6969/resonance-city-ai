"""Regression checks for recovered_save_load.py.

The fixtures are the read-only packaged/user saves supplied with the target.
This test verifies the executable's observed gates and chunk path without
requiring the game process or any guessed ECS layout.
"""
from __future__ import annotations

import json
import pathlib
import tempfile

import recovered_save_load as rsl


def check_root(root: pathlib.Path, expected_count: int, expected_loaded: int,
               expected_missing: int) -> dict:
    report = rsl.audit(root)
    assert report["history_count"] == expected_count, report
    assert report["loaded_count"] == expected_count, report
    assert report["error_count"] == 0, report["errors"]
    missing = sum(1 for x in report["results"]
                  if x.get("snapshot_load", {}).get("status") == "missing-snapshot")
    loaded = sum(1 for x in report["results"]
                 if x.get("snapshot_load", {}).get("status") == "loaded")
    assert loaded == expected_loaded, (loaded, report)
    assert missing == expected_missing, (missing, report)
    for x in report["results"]:
        assert x["version_gate"]["accepted"]
        assert not x["unknown_root_keys"]
        assert not x["history"]["edit_chain"]["unknown_wrappers"]
        if x.get("snapshot_load", {}).get("status") == "loaded":
            s = x["snapshot_load"]
            assert s["snapshot_version"] == 2
            assert s["byte_identical_roundtrip"]
            assert s["chunk_count"] >= 1
    return {"history_count": expected_count, "loaded": loaded, "missing": missing}


def check_version_gates() -> None:
    base = {"Version": 18, "Camera": {
        "camera_rig_arm_length": 0.0, "pitch_cache": 0.0,
        "pitch_offset": 0.0, "position_cache": [0.0, 0.0, 0.0],
        "yaw_cache": 0.0, "yaw_offset": 0.0,
    }, "History": {"chain_index": 0, "edit_chain": [], "snapshots": []}}
    with tempfile.TemporaryDirectory() as td:
        p = pathlib.Path(td) / "history.json"
        for value, marker in ((2, "legacy"), (31, "future")):
            item = dict(base, Version=value)
            p.write_text(json.dumps(item), encoding="utf-8")
            try:
                rsl.parse_history(p)
            except rsl.SaveLoadError as exc:
                assert marker in str(exc), str(exc)
            else:
                raise AssertionError(f"Version {value} unexpectedly accepted")


def main() -> None:
    packaged = pathlib.Path(r"C:\Steam\steamapps\common\Tiny Glade\assets")
    user = pathlib.Path(r"C:\Users\Administrator\Saved Games\Tiny Glade")
    result = {"packaged": check_root(packaged, 35, 32, 3),
              "user": check_root(user, 8, 8, 0)}
    check_version_gates()
    print(json.dumps({"passed": True, **result}, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
