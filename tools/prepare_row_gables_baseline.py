"""Extract the actual pre-change sources for the local Godot A/B fixtures."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
destination = root / "备份/长屋山墙前_20261015"
destination.mkdir(parents=True, exist_ok=True)
baseline = "fb4c6938c4a11bb8e8774f815b9192019d3cedb5"
sources = {}
for name in ("city_creation_building_context.gd", "city_creation_renderer.gd"):
    content = subprocess.check_output(
        ["git", "show", f"{baseline}:scripts/visual/{name}"], cwd=root
    ).decode("utf-8")
    sources[name] = content
    path = destination / name
    if not path.exists():
        path.write_text(content, encoding="utf-8")
frozen = sources["city_creation_renderer.gd"].replace("class_name CityCreationRenderer", "").replace(
    "res://scripts/visual/city_creation_building_context.gd",
    "res://备份/长屋山墙前_20261015/city_creation_building_context.gd",
)
path = destination / "frozen_renderer.gd"
if not path.exists():
    path.write_text(frozen, encoding="utf-8")
print(f"Actual baseline {baseline[:8]} ready; existing backup files preserved.")
