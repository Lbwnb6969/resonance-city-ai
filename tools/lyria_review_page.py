"""Instrument-focused local listening page."""
from html import escape


def render_page(records, gain_db):
    cards = '<section><h2>完整纯音乐原曲</h2><audio controls preload="metadata" src="full_mix.wav"></audio></section>'
    for row in records:
        cards += f'<section><h2>{escape(row["label"])}</h2><p>方案 {escape(row["group"].split("_")[-1])}</p>'
        cards += f'<audio controls preload="metadata" src="{escape(row["id"])}.wav"></audio></section>'
    return f'''<!doctype html><html lang="zh-CN"><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1"><title>纯音乐 · 器乐分轨试听</title>
<style>body{{max-width:880px;margin:24px auto;padding:0 20px;background:#eee9df;color:#263b37;font:16px/1.7 system-ui}}section{{padding:12px 20px;margin:16px 0;background:#fffaf0;border-radius:14px}}h1{{font-size:26px}}h2{{font-size:18px}}audio{{width:100%}}section p{{margin:0 0 8px;font-size:13px}}</style>
<h1>河畔晨光 · 器乐分轨</h1>
<p>拆分纯音乐中的不同乐器声部。方案 1 为六轨粗分；方案 2 为木管与其余乐器分离。先听单独轨道，再与原曲和各自回加版本比较。</p>
<p>名称表示模型的分离目标，具体分到了哪些乐器需试听确认。“未归类残余 A”保留模型分错的信号，不表示原曲有人声。两套方案各自比较，不混合两套分轨叠加。</p>
<p>所有轨道共用 {gain_db:.2f} dB 试听增益，保持原来的相对音量；切轨沿用播放位置。角色尚未分配，试听后再决定哪些用于伴奏、旋律或空间叠加。</p>
{cards}<p>请记录各条是否分出目标乐器，有无串音、缺失或毛刺，以及回加是否接近原曲。</p>
<script>let last=null;const tracks=[...document.querySelectorAll('audio')];
tracks.forEach(a=>a.addEventListener('play',()=>{{if(last&&last!==a)a.currentTime=Math.min(last.currentTime,a.duration||Infinity);tracks.forEach(b=>{{if(b!==a)b.pause()}});last=a}}));</script></html>'''
