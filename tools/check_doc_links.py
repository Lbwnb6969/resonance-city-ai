"""只读检查现行 Markdown 的本地文件链接与章节锚点。"""
from pathlib import Path
import re
import subprocess
import unicodedata
from urllib.parse import unquote

ROOT = Path(__file__).resolve().parents[1]
DOCS = ROOT / "文档"


def prose_lines(raw):
    fence = None
    for number, line in enumerate(raw.splitlines(), 1):
        marker = re.match(r"^ {0,3}(`{3,}|~{3,})(.*)$", line)
        if fence:
            if marker and marker[1][0] == fence[0] and len(marker[1]) >= len(fence) and not marker[2].strip():
                fence = None
            continue
        if marker:
            fence = marker[1]
            continue
        yield number, line


def slug(text):
    text = re.sub(r"!?\[([^]]+)\]\([^)]*\)", r"\1", text).lower().strip()
    return "".join(ch for ch in text if ch in "-_ " or unicodedata.category(ch)[0] in "LN").replace(" ", "-")


def anchors(path):
    ids = set()
    counts = {}
    raw = path.read_text(encoding="utf-8")
    for _, line in prose_lines(raw):
        heading = re.match(r"^#{1,6}\s+(.+?)(?:\s+#+)?$", line)
        if heading:
            value = slug(heading[1])
            count = counts.get(value, 0)
            ids.add(value + (f"-{count}" if count else ""))
            counts[value] = count + 1
        ids.update(re.findall(r'(?:id|name)=["\']([^"\']+)["\']', line))
    return ids


def inline_links(raw):
    for number, line in prose_lines(raw):
        # 移除行内代码，代码中的 Markdown 示例不算链接。
        line = re.sub(r"(`+).*?\1", "", line)
        for match in re.finditer(r"!?\[[^]\n]*\]\(", line):
            start = match.end()
            end = start
            depth = 1
            while end < len(line) and depth:
                if line[end] == "(" and (end == 0 or line[end - 1] != "\\"):
                    depth += 1
                elif line[end] == ")" and (end == 0 or line[end - 1] != "\\"):
                    depth -= 1
                end += 1
            if depth == 0:
                target = line[start:end - 1].strip()
                if target.startswith("<"):
                    target = target[1:target.index(">")]
                else:
                    target = target.split(' "', 1)[0]
                yield number, target


def check(paths):
    errors = []
    cache = {}
    total = 0
    try:
        tracked = set(subprocess.check_output(["git", "ls-files", "-z"], cwd=ROOT, stderr=subprocess.DEVNULL).decode("utf-8").split("\0")) - {""}
    except Exception:
        tracked = None
    published = set(tracked) if tracked is not None else None
    if tracked is not None:
        for name in tracked:
            parts = name.split("/")
            published.update("/".join(parts[:length]) for length in range(1, len(parts)))
    for path in paths:
        for number, target in inline_links(path.read_text(encoding="utf-8")):
            if re.match(r"[A-Za-z][A-Za-z0-9+.-]*:", target) or target.startswith("//"):
                continue
            total += 1
            file, _, fragment = unquote(target).partition("#")
            destination = (path.parent / file).resolve() if file else path
            if not destination.exists():
                errors.append((path, number, target, "missing file"))
            elif published is not None and destination.is_relative_to(ROOT) and destination.relative_to(ROOT).as_posix() not in published:
                errors.append((path, number, target, "target is local-only, absent from published Git tree"))
            elif fragment and destination.suffix.lower() == ".md":
                if destination not in cache:
                    cache[destination] = anchors(destination)
                if fragment not in cache[destination]:
                    errors.append((path, number, target, "missing anchor"))
    return total, errors


def main():
    paths = sorted(DOCS.rglob("*.md")) + [ROOT / name for name in ("PROJECT.md", "AI_START_HERE.md", "README.md", "tools/README.md", "AI资料/README.md")]
    total, errors = check(paths)
    for path, number, target, reason in errors:
        print(f"{path.relative_to(ROOT)}:{number}: {reason}: {target}")
    print(f"checked {len(paths)} documents, {total} local links, {len(errors)} errors")
    raise SystemExit(bool(errors))


if __name__ == "__main__":
    main()
