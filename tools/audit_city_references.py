"""One-time integrity audit for the fixed city-generation source reading pack."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import zipfile


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--git-index", action="store_true",
                        help="Also verify staged source blobs preserve original bytes")
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    base = root / "参考资料/城市生成深化_2026-10-09"
    index = json.loads((base / "源码索引.json").read_text(encoding="utf-8"))
    failures = []
    for item in index:
        raw = (base / item["local_path"]).read_bytes()
        if len(raw) != item["bytes"] or hashlib.sha256(raw).hexdigest() != item["sha256"]:
            failures.append(item["local_path"])
        lines = raw.decode("utf-8").splitlines()
        for anchor in item["anchors"]:
            if not lines[anchor["line"] - 1].strip().startswith(anchor["signature"]):
                failures.append(item["local_path"] + ":anchor")
        if args.git_index:
            relative = (base / item["local_path"]).relative_to(root).as_posix()
            staged = subprocess.check_output(["git", "show", ":" + relative], cwd=root)
            if hashlib.sha256(staged).hexdigest() != item["sha256"]:
                failures.append(item["local_path"] + ":git-index")
    archive = base / "固定版本阅读包.zip"
    with zipfile.ZipFile(archive) as z:
        for item in index:
            if hashlib.sha256(z.read(item["local_path"])).hexdigest() != item["sha256"]:
                failures.append(item["local_path"] + ":zip")
    result = {"files": len(index), "repositories": len({i["repo"] for i in index}),
              "bytes": sum(i["bytes"] for i in index), "failures": failures,
              "git_index_verified": args.git_index,
              "scope": "file/anchor/archive integrity; third-party programs not run"}
    out = root / "验证记录/城市生成深化/源码包校验.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, ensure_ascii=False, indent=2))
    raise SystemExit(bool(failures))


if __name__ == "__main__":
    main()
