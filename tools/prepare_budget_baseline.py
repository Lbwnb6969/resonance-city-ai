"""Export the committed synchronous baseline without touching the worktree."""
from pathlib import Path
import hashlib
import json
import re
import subprocess

ROOT=Path(__file__).resolve().parents[1]
OUTPUT=ROOT/"备份/分帧编辑前_20261015/同步基线"
REF="backup/pre-frame-budget-20261015"
OUTPUT.mkdir(parents=True,exist_ok=True)
(OUTPUT/".gdignore").write_text("",encoding="utf-8")
def committed(path):
    return subprocess.check_output(["git","show",f"{REF}:{path}"],cwd=ROOT)
prior=json.loads((ROOT/"备份/长曲路性能前_20261015/隔离A_B/manifest.json").read_text(encoding="utf-8"))
paths=sorted(path for path in prior["files"]["optimized"] if not path.endswith(".uid"))
paths.remove("tools/check_creation_long_roads.gd")
manifest={"ref":REF,"commit":subprocess.check_output(["git","rev-parse",REF],cwd=ROOT).decode().strip(),"files":{}}
for relative in paths:
    target=OUTPUT/relative
    target.parent.mkdir(parents=True,exist_ok=True)
    data=committed(relative)
    target.write_bytes(data)
    manifest["files"][relative]=hashlib.sha256(data).hexdigest()
fixture="tools/check_creation_budgeted_edits.gd"
(OUTPUT/fixture).parent.mkdir(parents=True,exist_ok=True)
(OUTPUT/fixture).write_bytes((ROOT/fixture).read_bytes())
project=committed("project.godot").decode("utf-8-sig")
project=re.sub(r"\[(?:autoload|editor_plugins)\][\s\S]*?(?=\n\[|\Z)","",project)
project=re.sub(r"^config/icon=.*\n","",project,flags=re.MULTILINE)
(OUTPUT/"project.godot").write_text(project,encoding="utf-8")
manifest["fixture_sha256"]=hashlib.sha256((ROOT/fixture).read_bytes()).hexdigest()
(OUTPUT.parent/"baseline_manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding="utf-8")
optimized=OUTPUT.parent/"分帧实现"
optimized.mkdir(parents=True,exist_ok=True)
current_paths=sorted({p.relative_to(ROOT).as_posix() for p in ROOT.glob("scripts/**/city_creation*.gd")} | set(paths))
current_paths.append(fixture)
current_manifest={"scope":"same complete scene, input fixture, display/render/physics and original city; old AudioClock/MCP omitted in both", "files":{}}
for relative in current_paths:
    target=optimized/relative
    target.parent.mkdir(parents=True,exist_ok=True)
    data=(ROOT/relative).read_bytes()
    target.write_bytes(data)
    current_manifest["files"][relative]=hashlib.sha256(data).hexdigest()
(optimized/"project.godot").write_text(project,encoding="utf-8")
current_manifest["baseline_commit"]=manifest["commit"]
current_manifest["changed_sources"]=[k for k,v in manifest["files"].items() if current_manifest["files"][k]!=v]
current_manifest["added_sources"]=[k for k in current_manifest["files"] if k not in manifest["files"] and k!=fixture]
(OUTPUT.parent/"optimized_manifest.json").write_text(json.dumps(current_manifest,ensure_ascii=False,indent=2),encoding="utf-8")
print("Frozen synchronous baseline and current budget implementation with identical fixture",manifest["commit"])
