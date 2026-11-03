#!/usr/bin/env python3
"""Create a listening library backed by a running batch report."""
import argparse
import json
from pathlib import Path


def build(root):
    pointer = root/'active_curation.json'
    if pointer.exists():
        from build_curated_stem_library import build as curated_build
        return curated_build(root, Path(json.loads(pointer.read_text(encoding='utf-8'))['path']))
    folder = root/'listening'
    folder.mkdir(exist_ok=True)
    page = '''<!doctype html><html lang="zh-CN"><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1"><title>纯音乐器乐分轨库</title>
<style>body{max-width:1000px;margin:26px auto;padding:0 20px;background:#eee9df;color:#263b37;font:16px/1.65 system-ui}h1{font-size:26px}select{max-width:100%;padding:10px;font:inherit;margin:6px 0 16px;border:1px solid #9ca99c;border-radius:8px;background:#fffaf0}section{background:#fffaf0;margin:12px 0;padding:14px 20px;border-radius:12px}h2{font-size:18px;margin:0 0 10px}audio{width:100%}.note{color:#52645b}#progress{font-weight:bold}</style>
<h1>纯音乐 · 器乐分轨库</h1><p id="progress">正在读取批次…</p>
<p>分别试听纯音乐中的乐器声部，再听同一方案的回加版本。处理自动继续，已完成歌曲会加入列表。</p>
<label for="song">曲目</label><br><select id="song"></select><br>
<label for="group">分离方案</label><br><select id="group"><option value="woodwind_plus_remaining_six">木管＋剩余器乐细分（最多七轨）</option><option value="coarse_six">原曲六轨粗分</option></select>
<p class="note">每个名称是模型分离目标；实际乐器纯度待试听确认。“未归类残余”保留被模型分错的器乐信号。两套方案互为替代，不跨方案叠加。单轨共用增益，切换时沿用播放位置。</p><main id="tracks"></main>
<script>
const rootPath=ROOT_PATH, songSelect=document.querySelector('#song'),groupSelect=document.querySelector('#group');
const names={bass:'低音候选',drums:'打击／起音候选',guitar:'吉他候选',piano:'钢琴候选',other:'其余器乐（未继续区分）',vocals:'未归类残余（模型误分槽位）',woodwinds:'木管候选'};
let songs=[],selected='',rendered='',last=null;
function relative(path){return '../'+path.replaceAll('\\\\','/').slice(rootPath.length+1).split('/').map(encodeURIComponent).join('/')}
function card(label,item){const section=document.createElement('section'),h=document.createElement('h2'),audio=document.createElement('audio');h.textContent=label;audio.controls=true;audio.preload='metadata';audio.src=relative(item.path);audio.addEventListener('play',()=>{if(last&&last!==audio)audio.currentTime=Math.min(last.currentTime,audio.duration||Infinity);document.querySelectorAll('audio').forEach(a=>{if(a!==audio)a.pause()});last=audio});section.append(h,audio);return section}
function render(){const song=songs.find(s=>s.name===songSelect.value);if(!song)return;const key=song.name+groupSelect.value;if(key===rendered)return;document.querySelectorAll('audio').forEach(a=>a.pause());last=null;rendered=key;const container=document.querySelector('#tracks');container.replaceChildren();container.append(card('完整原曲',song.delivery.full_mix));const group=song.delivery.groups[groupSelect.value];for(const [name,item]of Object.entries(group.stems))container.append(card(names[name]||name,item));container.append(card('本方案全部轨道回加',group.sum));}
async function refresh(){try{const response=await fetch('../batch_report.json',{cache:'no-store'});const batch=await response.json();songs=batch.songs.filter(s=>s.status==='technical_ready_pending_listening');const failed=batch.songs.filter(s=>s.status==='failed').length;const running=batch.songs.find(s=>s.status==='running');document.querySelector('#progress').textContent=`已完成 ${songs.length} / 19 首`+(failed?`，失败 ${failed} 首`:'')+(batch.finished_at?' · 本批处理结束':running?` · 正在处理：${running.name}`:'');const previous=songSelect.value;for(const song of songs)if(![...songSelect.options].some(o=>o.value===song.name)){const option=document.createElement('option');option.value=song.name;option.textContent=song.name;songSelect.append(option)}if(previous)songSelect.value=previous;render();if(!batch.finished_at)setTimeout(refresh,5000)}catch(error){document.querySelector('#progress').textContent='批次报告读取失败，请稍后刷新';setTimeout(refresh,5000)}}
songSelect.addEventListener('change',render);groupSelect.addEventListener('change',render);refresh();
</script></html>'''
    page = page.replace('ROOT_PATH', json.dumps(root.as_posix(), ensure_ascii=False))
    (folder/'listen.html').write_text(page, encoding='utf-8')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--batch-root', type=Path, required=True)
    build(parser.parse_args().batch_root.resolve())
