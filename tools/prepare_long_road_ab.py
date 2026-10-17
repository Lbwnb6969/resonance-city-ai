"""Freeze identical city scenes; only the three optimized road sources differ."""
from pathlib import Path
import hashlib
import json
import re
import shutil

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / "备份/长曲路性能前_20261015/隔离A_B"
OUTPUT.mkdir(parents=True, exist_ok=True)
(OUTPUT / ".gdignore").write_text("", encoding="utf-8")
sources = sorted(ROOT.glob("scripts/**/city_creation*.gd"))
sources += sorted(ROOT.glob("scripts/visual/shaders/creation_*.gdshader*"))
sources += [ROOT / "scripts/ui/valley_ui_theme.gd", ROOT / "scenes/city_creation.tscn",
            ROOT / "tools/check_creation_long_roads.gd",
            ROOT / "备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"]
project = (ROOT / "project.godot").read_text(encoding="utf-8-sig")
project = re.sub(r"\[(?:autoload|editor_plugins)\][\s\S]*?(?=\n\[|\Z)", "", project)
project = re.sub(r'^config/icon=.*\n', "", project, flags=re.MULTILINE)
archive = ROOT / "废弃/长曲路性能_2026-10-15"
replacements = {f"scripts/{directory}/{name}.gd": archive / f"{name}.gd.txt"
                for directory, name in [("visual", "city_creation_path_edge"),
                                        ("visual", "city_creation_renderer"),
                                        ("world", "city_creation_life")]}
manifest = {"scope": "same isolated complete city scene and original player road sample",
            "environment": "same product display/render/physics; unrelated old-entry AudioClock and editor MCP omitted in both",
            "files": {}}
for mode in ("baseline", "optimized"):
    destination = OUTPUT / mode
    destination.mkdir(parents=True, exist_ok=True)
    (destination / "project.godot").write_text(project, encoding="utf-8")
    records = {}
    for source in sources:
        relative = source.relative_to(ROOT).as_posix()
        actual = replacements.get(relative, source) if mode == "baseline" else source
        target = destination / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(actual, target)
        records[relative] = hashlib.sha256(target.read_bytes()).hexdigest()
    manifest["files"][mode] = records
differences = sorted(key for key, value in manifest["files"]["baseline"].items()
                     if manifest["files"]["optimized"][key] != value)
assert differences == sorted(replacements), differences
manifest["different_sources"] = differences
(OUTPUT / "manifest.json").write_text(json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8")
print(f"Frozen {len(sources)} files per mode; only {len(differences)} road sources differ: {OUTPUT}")
