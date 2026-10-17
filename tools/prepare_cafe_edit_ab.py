"""Freeze two identical city runtime projects, changing only cafe helper sources.

Creates local evidence under 备份; never edits the real project or invokes Git.
Run the same check_creation_cafe_edit_cost.gd in baseline and optimized folders.
"""
from pathlib import Path
import hashlib
import json
import re
import shutil

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / "备份/自发巡演前_20261015/茶座性能A_B"
OUTPUT.mkdir(parents=True, exist_ok=True)
(OUTPUT / ".gdignore").write_text("", encoding="utf-8")
sources = sorted(ROOT.glob("scripts/**/city_creation*.gd"))
sources += sorted(ROOT.glob("scripts/visual/shaders/creation_*.gdshader"))
sources += sorted(ROOT.glob("scripts/visual/shaders/creation_*.gdshaderinc"))
sources += [ROOT / "scripts/ui/valley_ui_theme.gd", ROOT / "scenes/city_creation.tscn",
            ROOT / "tools/check_creation_cafe_edit_cost.gd"]
project = (ROOT / "project.godot").read_text(encoding="utf-8-sig")
# The standalone city scene has its own music clock. Both copies omit the
# unrelated old-entry audio autoload and editor MCP plugin, identically.
project = re.sub(r"\[(?:autoload|editor_plugins)\][\s\S]*?(?=\n\[|\Z)", "", project)
project = re.sub(r'^config/icon=.*\n', "", project, flags=re.MULTILINE)
archive = ROOT / "废弃/自发巡演_2026-10-15"
replacements = {
    "scripts/world/city_creation_cafe_layout.gd": archive / "city_creation_cafe_layout.gd.txt",
    "scripts/visual/city_creation_cafe.gd": archive / "city_creation_cafe.gd.txt",
}
manifest = {"scope": "same isolated runtime; only two cafe helpers differ",
            "identical_environment": "normal rendering/display/physics; unrelated old AudioClock and editor MCP autoload omitted in both",
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
differences = [key for key, value in manifest["files"]["baseline"].items()
               if manifest["files"]["optimized"][key] != value]
assert sorted(differences) == sorted(replacements), differences
manifest["different_sources"] = differences
(OUTPUT / "manifest.json").write_text(json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8")
print(OUTPUT)
print(f"Frozen {len(sources)} files per mode; exact source differences: {differences}")
