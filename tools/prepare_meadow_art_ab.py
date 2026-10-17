"""Freeze the original grass runtime from Git and the current grass candidate."""
from pathlib import Path
import argparse,hashlib,json,re,subprocess
ROOT=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser()
parser.add_argument("--ref",default="backup/pre-meadow-depth-20261015")
parser.add_argument("--output",type=Path,default=ROOT/"备份/草毯层次前_20261015/隔离A_B")
parser.add_argument("--fixture",action="append")
args=parser.parse_args()
REF=args.ref
OUT=args.output.resolve()
assert OUT.is_relative_to(ROOT/"备份"),"Keep frozen projects inside the dedicated backup directory"
fixtures=args.fixture or ["tools/check_creation_meadow_art.gd","tools/check_nature_performance.gd"]
def git(*args): return subprocess.check_output(["git",*args],cwd=ROOT)
paths=git("ls-tree","-r","--name-only","-z",REF).decode("utf-8").split("\0")
def selected(p):
    q=Path(p)
    return (p.startswith("scripts/") and (q.name.startswith("city_creation") and q.suffix==".gd" or p.startswith("scripts/visual/shaders/creation_") and q.suffix in {".gdshader",".gdshaderinc"})) or p in {"scripts/ui/valley_ui_theme.gd","scenes/city_creation.tscn"}
old=sorted(p for p in paths if p and selected(p))
current=sorted(set(old)|{p.relative_to(ROOT).as_posix() for p in (ROOT/"scripts").rglob("*") if p.is_file() and selected(p.relative_to(ROOT).as_posix())})
project=git("show",f"{REF}:project.godot").decode("utf-8-sig")
project=re.sub(r"\[(?:autoload|editor_plugins)\][\s\S]*?(?=\n\[|\Z)","",project)
project=re.sub(r"^config/icon=.*\n","",project,flags=re.MULTILINE)
OUT.mkdir(parents=True,exist_ok=True)
(OUT/".gdignore").write_text("",encoding="utf-8")
manifest={"base_commit":git("rev-parse",REF).decode().strip(),"same_environment":"display/physics/Compatibility, old AudioClock/MCP omitted in both","files":{}}
for mode,names in [("before",old),("after",current)]:
    dest=OUT/mode
    dest.mkdir(parents=True,exist_ok=True)
    (dest/"project.godot").write_text(project,encoding="utf-8")
    records={}
    for name in names+fixtures:
        target=dest/name
        target.parent.mkdir(parents=True,exist_ok=True)
        data=git("show",f"{REF}:{name}") if mode=="before" and name not in fixtures else (ROOT/name).read_bytes()
        target.write_bytes(data)
        records[name]=hashlib.sha256(data).hexdigest()
    manifest["files"][mode]=records
(OUT/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding="utf-8")
print("Frozen baseline",manifest["base_commit"],"and candidate; actual runtime sources listed by SHA256")
