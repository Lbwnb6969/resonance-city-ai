"""Build a local gallery referencing original native captures, never retouching them."""
from pathlib import Path
import html
import json

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "验证记录/M52"
GROUPS = {
    "四时代18原型 · 双尺寸昼夕夜": ROOT / "验证记录/M51/full/architecture",
    "古希腊与罗马 · 原生拾取": OUT / "ancient",
    "水岸栈桥、角落花园与环岛涌泉": OUT / "street",
    "Q/E与R真实转向": OUT / "rotation",
    "四冠冕与羊皮轻语": ROOT / "验证记录/M51/garden",
    "柔草与黄金角柏树": ROOT / "验证记录/M51/nature",
    "工人贴掌货物": ROOT / "验证记录/M51/cargo_refined",
    "300屋真实居民": OUT / "large_final",
}

def build():
    OUT.mkdir(parents=True, exist_ok=True)
    manifest = {"source": "Original native OpenGL captures; no generated or retouched imagery", "groups": {}}
    sections = []
    for label, directory in GROUPS.items():
        images = sorted(directory.glob("*.png"))
        if not images:
            raise RuntimeError(f"Missing gallery evidence: {directory}")
        manifest["groups"][label] = [str(p.relative_to(ROOT)).replace("\\", "/") for p in images]
        cards = []
        for image in images:
            relative = Path("../..") / image.relative_to(ROOT)
            url = html.escape(relative.as_posix(), quote=True)
            cards.append(f'<figure><a href="{url}"><img loading="lazy" src="{url}" alt="{html.escape(image.stem)}"></a><figcaption>{html.escape(image.stem)}</figcaption></figure>')
        sections.append(f'<section><h2>{html.escape(label)} · {len(images)}原图</h2><div class="grid">{"".join(cards)}</div></section>')
    page = '<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><title>共鸣之城 · M52实窗画廊</title><style>body{background:#222d2b;color:#ece6d5;font:16px system-ui;margin:32px}h1{font-size:28px}h2{font-size:20px;margin-top:40px}.grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(300px,1fr));gap:16px}figure{margin:0;background:#33403c;padding:8px}img{width:100%;aspect-ratio:1.6;object-fit:contain}figcaption{font-size:12px;overflow-wrap:anywhere;padding:8px 0}</style><h1>共鸣之城 · M52实窗画廊</h1><p>点击查看完整原生截图。所有图片来自实际游戏窗口。</p>' + ''.join(sections) + '</html>'
    (OUT / "gallery.html").write_text(page, encoding="utf-8")
    (OUT / "gallery_manifest.json").write_text(json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8")
    print(json.dumps({"groups": len(GROUPS), "original_images": sum(map(len, manifest["groups"].values())), "gallery": str(OUT / "gallery.html")}, ensure_ascii=False))

if __name__ == "__main__":
    build()
