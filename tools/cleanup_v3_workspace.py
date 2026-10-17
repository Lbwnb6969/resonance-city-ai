#!/usr/bin/env python3
"""Plan dependency-aware legacy archival. Default is dry-run; never delete files.

python tools/cleanup_v3_workspace.py --plan 验证记录/v3文档与清理_2026-10-16/清理计划.json
python tools/cleanup_v3_workspace.py --apply 验证记录/v3文档与清理_2026-10-16/清理计划.json
"""
from pathlib import Path
from datetime import datetime, timezone
import argparse
import hashlib
import json
import re
import shutil

ROOT = Path(__file__).resolve().parents[1]
SCAN = ("scripts", "scenes", "tests", "tools", "数据", "addons")
TEXT = {".gd", ".tscn", ".tres", ".gdshader", ".gdshaderinc", ".py", ".cmd", ".ps1", ".cfg", ".godot", ".json"}
RESOURCE = re.compile(r'''res://[^\s"'`)<>,\]}]+''')
UID = re.compile(r"uid://[a-z0-9]+")
CLASS = re.compile(r"^class_name\s+(\w+)", re.M)
WORDS = re.compile(r"\b[A-Za-z_]\w*\b")


def local(path: Path) -> Path:
    path = path.resolve()
    if not path.is_relative_to(ROOT) or path == ROOT:
        raise ValueError(f"Path must stay inside this workspace: {path}")
    return path


def fingerprint(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def dependency_plan() -> dict:
    if not (ROOT / "project.godot").is_file() or not (ROOT / "scenes/city_creation.tscn").is_file():
        raise ValueError("Expected 共鸣之城 project.godot and 3D main scene.")
    files = {"project.godot": ROOT / "project.godot"}
    for folder in SCAN:
        for path in (ROOT / folder).rglob("*"):
            if path.is_file() and path.suffix in TEXT | {".uid"} and "__pycache__" not in path.parts:
                local(path)
                files[path.relative_to(ROOT).as_posix()] = path
    # Root launchers are runtime roots; UID autoloads are as important as preloads.
    files.update({p.name: p for p in ROOT.glob("*.cmd")})
    text = {name: p.read_text(encoding="utf-8-sig", errors="replace") for name, p in files.items() if p.suffix in TEXT}
    classes = {}
    uid_files = {}
    for name, content in text.items():
        match = CLASS.search(content) if name.endswith(".gd") else None
        if match:
            classes[match.group(1)] = name
    for name, path in files.items():
        if name.endswith(".uid"):
            uid_files[path.read_text(encoding="utf-8-sig").strip()] = name[:-4]
    dependencies = {}
    for name, content in text.items():
        deps = {p[6:] for p in RESOURCE.findall(content)}
        deps.update(uid_files[uid] for uid in UID.findall(content) if uid in uid_files)
        if name.endswith(".gd"):
            deps.update(classes[word] for word in set(WORDS.findall(content)) & classes.keys())
        # Relative launchers and Python path literals: retain known project paths.
        for literal in re.findall(r'''["']([^"'\r\n]+)["']''', content):
            candidate = literal.replace("\\", "/").removeprefix("./")
            if candidate in files:
                deps.add(candidate)
        dependencies[name] = {d for d in deps if (ROOT / d).is_file()}
    roots = {"project.godot", "scenes/city_creation.tscn"}
    roots.update(name for name in files if Path(name).name.startswith(("city_creation", "creation_", "test_city_creation")))
    roots.update(name for name in files if name.startswith("addons/"))
    roots.update(name for name in files if "/样例启动器/" in name and not any(dep.startswith("scenes/") and dep != "scenes/city_creation.tscn" for dep in dependencies.get(name, set())))
    roots.update(name for name in files if name.startswith("tools/") and "creation" in Path(name).name)
    roots.update(name for name in files if Path(name).name in {"valley_ui_theme.gd", "test_grass2_response_port.py", "test_grass2_world_tint.gd", "check_arcade_live.gd", "check_arcade_state.gd", "export_stepping_audio.gd", "cleanup_v3_workspace.py", "export_ai_repository.py"})
    roots.update(p.name for p in ROOT.glob("*.cmd") if "旧" not in p.name)
    kept, pending = set(), list(roots)
    kept_by = {name: "root" for name in roots}
    while pending:
        name = pending.pop()
        if name in kept:
            continue
        kept.add(name)
        for dep in dependencies.get(name, set()) - kept:
            kept_by.setdefault(dep, name)
            pending.append(dep)
    kept.update(name + ".uid" for name in list(kept) if name + ".uid" in files)
    legacy = set()
    for name in files:
        path = Path(name)
        if name in kept:
            continue
        if path.parts[0] in {"scripts", "scenes"}:
            legacy.add(name)
        elif path.parts[0] == "tests" and path.suffix in {".gd", ".uid"}:
            legacy.add(name)
        elif name.startswith("数据/兼容规格/"):
            legacy.add(name)
    # Tools are retired only when they explicitly depend on retired code. Unknown
    # research/export tools and original data are kept, instead of guessed dead.
    for name in files:
        if name.startswith("tools/") and name not in kept and dependencies.get(name, set()) & legacy:
            legacy.add(name)
            if name + ".uid" in files:
                legacy.add(name + ".uid")
    rows = [{"path": name, "bytes": files[name].stat().st_size, "sha256": fingerprint(files[name])} for name in sorted(legacy)]
    return {"schema": 1, "workspace": str(ROOT), "created_utc": datetime.now(timezone.utc).isoformat(),
            "status": "planned", "policy": "dependency closure; no deletion; preserve references, resources, user originals and verification history",
            "roots": sorted(roots), "kept_dependencies": sorted(kept), "kept_by": kept_by, "files": rows,
            "file_count": len(rows), "bytes": sum(row["bytes"] for row in rows)}


def apply_plan(plan_path: Path) -> None:
    plan_path = local(plan_path)
    plan = json.loads(plan_path.read_text(encoding="utf-8"))
    if plan.get("schema") != 1 or Path(plan["workspace"]).resolve() != ROOT or plan.get("status") != "planned":
        raise ValueError("Expected an unapplied plan for this exact workspace.")
    current = dependency_plan()
    allowed = {row["path"] for row in current["files"]}
    for row in plan["files"]:
        path = local(ROOT / row["path"])
        if row["path"] not in allowed or not path.is_file() or fingerprint(path) != row["sha256"]:
            raise ValueError(f"Plan is stale or dependency became active: {row['path']}; regenerate it.")
    archive = local(ROOT / "废弃" / ("v3_legacy_archive_" + datetime.now().strftime("%Y%m%d_%H%M%S_%f")))
    archive.mkdir(parents=True, exist_ok=False)
    (archive / ".gdignore").write_text("# Archived sources; excluded from Godot import.\n", encoding="utf-8")
    receipt = dict(plan, status="applying", archive=str(archive), moved=[])
    manifest = archive / "迁移.json"
    def save():
        manifest.write_text(json.dumps(receipt, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    save()
    try:
        for row in plan["files"]:
            src = local(ROOT / row["path"])
            dst = local(archive / row["path"])
            dst.parent.mkdir(parents=True, exist_ok=True)
            if dst.exists():
                raise ValueError(f"Archive collision: {dst}")
            shutil.move(str(src), str(dst))
            receipt["moved"].append(row["path"])
            save()
    except Exception:
        receipt["status"] = "interrupted"
        save()
        raise
    receipt["status"] = "applied"
    save()
    print(json.dumps({"archive": str(archive), "files": len(receipt["moved"]), "bytes": plan["bytes"]}, ensure_ascii=False))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--plan", type=Path, help="Write a reviewable JSON plan; does not move files")
    parser.add_argument("--apply", type=Path, help="Apply this exact plan into a new archive; no overwrites")
    args = parser.parse_args()
    if args.plan and args.apply:
        parser.error("Choose --plan or --apply.")
    if args.apply:
        apply_plan(args.apply)
        return
    plan = dependency_plan()
    if args.plan:
        target = local(args.plan)
        if target.exists():
            raise ValueError("Plan output already exists; choose a new path.")
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(json.dumps(plan, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": "dry_run", "files": plan["file_count"], "bytes": plan["bytes"], "plan": str(args.plan) if args.plan else None}, ensure_ascii=False))


if __name__ == "__main__":
    main()
