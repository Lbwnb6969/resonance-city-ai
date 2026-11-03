"""Publish the curated listening page; preserve the original page as history."""
import argparse
import json
from pathlib import Path
import shutil


def build(root, curation):
    folder = root/'listening'
    folder.mkdir(parents=True, exist_ok=True)
    history = curation.parent/'original_listen.html'
    if not history.exists() and (folder/'listen.html').is_file():
        shutil.copy2(folder/'listen.html', history)
    (folder/'curated_mixer.js').write_text((Path(__file__).parent/'web/curated_stem_mixer.js').read_text(encoding='utf-8'), encoding='utf-8')
    page = '''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>精选器乐分轨 · 同源叠加</title><style>body{max-width:1000px;margin:26px auto;padding:0 20px;background:#eee9df;color:#263b37;font:16px/1.65 system-ui}h1{font-size:26px}select,button{padding:10px;font:inherit;border:1px solid #9ca99c;border-radius:8px;background:#fffaf0;max-width:100%}section{background:#fffaf0;margin:12px 0;padding:16px;border-radius:12px}h2{font-size:18px;margin:0 0 10px}audio{width:100%}input[type=range]{width:100%}.note{color:#52645b}#faders label{display:block;margin-top:12px}</style>
<h1>精选器乐分轨 · 同源叠加</h1><p id="summary">读取精选清单…</p>
<label>曲目 <select id="song"></select></label><br><label>方案 <select id="group"><option value="woodwind_plus_remaining_six">木管＋剩余器乐细分</option><option value="coarse_six">原曲六轨</option></select></label>
<p>近空轨已从有效列表剔除。每次只叠加同一首、同一方案中的声部。名称仍是分离目标，实际音色待听评。</p>
<section><h2>同步叠加试听</h2><button id="play">播放叠加</button> <button id="pause">暂停</button><p id="status">准备就绪</p><label>播放位置 <input id="seek" type="range" min="0" max="1" step="0.1" value="0"></label><div id="faders"></div><p class="note">所有轨道共用一个采样时钟；推子只降低原始比例。合成留出共同余量，单轨不放大补响，不与完整原曲同时播放。</p></section>
<main id="tracks"></main><details><summary id="excludedTitle">已剔除的近空轨</summary><p id="excluded"></p><p>原批次作为归档保留，可恢复；这些轨道不进入当前叠加。</p></details>
<script>window.curatedRoot=ROOT;window.curatedReport=REPORT;</script><script src="curated_mixer.js"></script></html>'''
    page = page.replace('ROOT', json.dumps(root.as_posix(), ensure_ascii=False))
    page = page.replace('REPORT', json.dumps('../'+curation.relative_to(root).as_posix(), ensure_ascii=False))
    (folder/'listen.html').write_text(page, encoding='utf-8')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--batch-root', type=Path, required=True)
    parser.add_argument('--curation', type=Path, required=True)
    args = parser.parse_args()
    build(args.batch_root.resolve(), args.curation.resolve())
