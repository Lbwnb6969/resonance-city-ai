"""Publish the adaptive pack audition next to the existing raw stem library."""
from pathlib import Path
import shutil

root = Path(__file__).resolve().parents[1]/'数据/音乐资产/game'
root.mkdir(parents=True, exist_ok=True)
shutil.copy2(Path(__file__).parent/'web/game_music_review.js', root/'review.js')
(root/'listen.html').write_text('''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>城市与音乐 · 同源表达工坊</title><style>
body{background:#eee9df;color:#293d36;font:16px/1.75 system-ui;max-width:1000px;margin:30px auto;padding:0 20px}h1{font-size:28px;margin-bottom:0}h2{font-size:19px}section{background:#fffaf0;border:1px solid #d0d4c5;border-radius:14px;padding:22px;margin:20px 0}button,select{font:inherit;padding:10px;border:1px solid #a2af9e;border-radius:8px;background:#fffaf0;max-width:100%;margin:4px}button.active{background:#315c49;color:#fff}input[type=range]{width:100%}label{display:block;margin:16px 0}small,.note{color:#596e60}#presets{display:flex;flex-wrap:wrap}a{color:#315c49}</style>
<h1>城市与音乐</h1><p>一首完整作品，随空间缓慢改变表情。</p><p id="coverage">读取音乐包…</p>
<label>作品<select id="song"></select></label><p id="kind"></p>
<section><div><button id="play">开始聆听</button><button id="pause">暂停</button><button id="reference">切到原混音对照</button></div><p id="status">选择作品</p><label>播放位置<input id="seek" type="range" min="0" max="1" step="0.1" value="0"></label>
<h2>空间表情</h2><div id="presets"></div><div id="controls"></div><p class="note">完整核心持续播放。变化在同一份音源内缓慢叠加；换表情保持当前乐句的位置。</p></section>
<section><h2>施工与听评</h2><p id="facts"></p><p>这些表情是可试听的保守配方。角色、音色损伤和循环仍待听评；流动与细节滑杆用于试配，不会替游戏捏造水岸或建筑事实。</p><a href="../listening/listen.html">查看原始有效分轨</a></section>
<script src="review.js"></script></html>''', encoding='utf-8')
