"""生成现行阅读稿：只精简装饰，不过滤正文或改变技术语法。"""
from pathlib import Path
import argparse
import os
import re

ROOT = Path(__file__).resolve().parents[1]
DOCS = ROOT / "文档"
OUTPUT = DOCS / "共鸣之城_文档合并精简版.md"
ORDER = [
    "版本整合说明.md", "需求与旧稿覆盖.md",
    "00_设计意图.md",
    *[f"01_执行规格/spec.{name}.md" for name in
      ("asset", "audio", "city", "fabric", "harmony", "proposal", "run", "space", "terrain", "ui")],
    "10_世界模型.md", "11_核心循环.md", "12_声音架构.md", "13_地形与自然.md",
    "14_城市生长.md", "15_时代与地标.md", "16_界面与反馈.md", "17_美术规格.md",
    "18_城市规模.md", "19_城市生成管线.md", "20_开发接口与迁移.md", "21_新城创作切片.md", "02_验收/DOD.md",
    "03_任务/P0.md", "03_任务/P1.md", "03_任务/P2.md", "Demo快速开始.md",
    "待裁定与依赖.md", "参考索引.md", "施工文档规则.md",
]


def plain_text(text: str) -> str:
    # 只去成对粗体；下划线、乘法、引号和必要标点保留。
    return re.sub(r"(?<![\w*])\*\*(?=\S)(.+?)(?<=\S)\*\*(?![\w*])", r"\1", text)


def rewrite_target(target: str, source: Path) -> str:
    if re.match(r"[A-Za-z][A-Za-z0-9+.-]*:", target) or target.startswith(("/", "\\")):
        return target
    angled = target.startswith("<") and target.endswith(">")
    value = target[1:-1] if angled else target
    path, separator, anchor = value.partition("#")
    resolved = source.parent / path if path else source
    relative = Path(os.path.relpath(resolved, DOCS)).as_posix()
    result = relative + (separator + anchor if separator else "")
    return f"<{result}>" if angled else result


def prose_text(text: str, source: Path) -> str:
    return re.sub(r"(!?\[[^\]\n]*\]\()(<[^>]+>|[^\s()]+)(\))",
                  lambda m: m[1] + rewrite_target(m[2], source) + m[3], plain_text(text))


def compact_source(raw: str, source: Path) -> str:
    lines = []
    fence = None
    inline_delimiter = None
    for line in raw.splitlines():
        marker = re.match(r"^ {0,3}(`{3,}|~{3,})(.*)$", line)
        if fence:
            lines.append(line)
            if marker and marker[1][0] == fence[0] and len(marker[1]) >= len(fence) and not marker[2].strip():
                fence = None
            continue
        if marker and not inline_delimiter:
            fence = marker[1]
            lines.append(line)
            continue
        if inline_delimiter:
            lines.append(line)
            if re.search(r"(?<!`)" + re.escape(inline_delimiter) + r"(?!`)", line):
                inline_delimiter = None
            continue
        if re.fullmatch(r"\s*(?:-\s*){3,}", line):
            continue
        if not line.strip():
            if lines and lines[-1] != "":
                lines.append("")
            continue
        # 保留表格及缩进；空单元格与代码内的 | 不拆开。
        pieces = []
        cursor = 0
        for match in re.finditer(r"(?<!\\)(`+)", line):
            if match.start() < cursor:
                continue
            closer = re.search(r"(?<!`)" + re.escape(match[1]) + r"(?!`)", line[match.end():])
            if closer is None:
                inline_delimiter = match[1]
                pieces = [line]
                cursor = len(line)
                break
            end = match.end() + closer.end()
            pieces.extend([prose_text(line[cursor:match.start()], source), line[match.start():end]])
            cursor = end
        pieces.append(prose_text(line[cursor:], source))
        line = "".join(pieces)
        heading = re.match(r"^(#{1,6}) (.*)$", line)
        if heading:
            line = "#" * min(len(heading[1]) + 2, 6) + " " + heading[2]
        lines.append(line)
    return "\n".join(lines).strip("\n")


def build_text() -> str:
    parts = ["# 共鸣之城：文档合并精简版\n\n"
             "由现行文档生成，原稿由生成器只读。公式、阈值和合同仍以所属执行规格为准，"
             "进度见 [PROJECT](../PROJECT.md)。去除分隔装饰、粗体与多余空行；"
             "保留代码、表格关系、引用和必要标点。设计与兼容参数分别标明，"
             "旧公式不恢复旧玩法限制。历史原稿见 [归档说明]"
             "(../废弃/文档/2026-10-14_综合优化前/README.md)。"]
    for relative in ORDER:
        source = DOCS / relative
        parts.append(f"## {source.stem}\n\n来源：[{relative}]({relative})\n\n"
                     + compact_source(source.read_text(encoding="utf-8"), source))
    return "\n\n".join(parts).rstrip() + "\n"


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="只核对生成稿是否同步，不写文件")
    args = parser.parse_args()
    content = build_text()
    if args.check:
        if not OUTPUT.exists() or OUTPUT.read_text(encoding="utf-8") != content:
            raise SystemExit("合并稿未同步，请运行 python tools/merge_docs_compact.py")
        print(f"checked {len(ORDER)} sources")
    else:
        OUTPUT.write_text(content, encoding="utf-8")
        print(f"merged {len(ORDER)} sources, {len(content)} characters")


if __name__ == "__main__":
    main()
