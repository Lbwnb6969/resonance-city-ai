"""Inventory the AI reference subset without changing or removing local originals."""
from pathlib import Path
import hashlib
import json
import subprocess
import argparse

ROOT = Path(__file__).resolve().parents[1]
LIBRARIES = ["Foundation逆向成品-2026-10-13", "Tiny-Glade逆向成品-v2", "Townscaper逆向成品"]
TEXT = {".md", ".py", ".json", ".jsonl", ".csv", ".tsv", ".ron", ".cs", ".c", ".h", ".hpp", ".comp", ".vert", ".frag", ".glsl", ".mmd", ".dot", ".txt", ".xml", ".yaml", ".yml", ".toml", ".js", ".shader", ".gd", ".slang"}

def choose(library: str, path: Path, size: int) -> str:
    parts = path.parts
    if any(part in {".git", "__pycache__", "备份", "discarded", "work", "analysis-databases"} for part in parts):
        return "local_archive_or_analysis_database"
    if path.suffix.lower() not in TEXT and not path.name.endswith(".jsonl.gz"):
        return "local_binary_asset_or_generated_cache"
    if size >= 95_000_000:
        return "local_large_table"
    if library.startswith("Foundation"):
        if len(parts) == 1 or path.suffix == ".md": return "included"
        if len(parts) > 1 and parts[1] in {"foundation-game-systems", "foundation-systems", "foundation-rendering", "foundation-serialization", "foundation-package-evidence", "foundation-audio"}:
            return "included"
        if len(parts) > 1 and parts[1] == "foundation-native-analysis" and (size < 3_000_000 or path.suffix in {".py", ".c", ".h"}): return "included"
        if len(parts) > 1 and parts[1] in {"foundation-models", "foundation-textures", "foundation-resources", "foundation-audio-recovered"} and len(parts) <= 3 and size < 10_000_000: return "included"
        return "local_full_native_or_extracted_asset_inventory"
    if library.startswith("Tiny"):
        return "included"
    if len(parts) == 1 or parts[0] == "outputs": return "included"
    return "local_working_analysis"

def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--stage", action="store_true")
    args = parser.parse_args()
    included, excluded, summary = [], [], []
    for name in LIBRARIES:
        library_root = ROOT / "参考资料" / name
        rows, omitted = [], []
        for path in sorted(library_root.rglob("*")):
            if not path.is_file(): continue
            relative = path.relative_to(library_root)
            size = path.stat().st_size
            reason = choose(name, relative, size)
            row = {"path": path.relative_to(ROOT).as_posix(), "bytes": size}
            if reason == "included":
                row["sha256"] = hashlib.sha256(path.read_bytes()).hexdigest()
                rows.append(row)
            else:
                row["reason"] = reason
                omitted.append(row)
        included.extend(rows)
        excluded.extend(omitted)
        summary.append({"library": name, "included_files": len(rows), "included_bytes": sum(r["bytes"] for r in rows), "local_only_files": len(omitted), "local_only_bytes": sum(r["bytes"] for r in omitted)})
    directory = ROOT / "AI资料"
    directory.mkdir(exist_ok=True)
    manifest = {"schema": 1, "purpose": "AI design and implementation reference; originals remain local", "summary": summary, "included": included, "local_only": excluded}
    target = directory / "参考资料发布清单.json"
    target.write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    if args.stage:
        pathspec = b"\0".join(row["path"].encode("utf-8") for row in included) + b"\0"
        subprocess.run(["git", "add", "--pathspec-from-file=-", "--pathspec-file-nul"], cwd=ROOT, input=pathspec, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        subprocess.run(["git", "add", "--", str(target.relative_to(ROOT))], cwd=ROOT, check=True)
    print(json.dumps({"summary": summary, "staged": args.stage}, ensure_ascii=False))

if __name__ == "__main__": main()
