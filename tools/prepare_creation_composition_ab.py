"""Make constant-gain, loudness-matched listening copies; preserve the rendered sources."""
import argparse
import hashlib
import json
import math
from pathlib import Path
import subprocess


def measure(ffmpeg, path):
    result = subprocess.run([ffmpeg, '-nostdin', '-hide_banner', '-i', str(path),
                             '-af', 'loudnorm=I=-23:TP=-1.5:LRA=20:print_format=json',
                             '-f', 'null', '-'], capture_output=True, text=True,
                            encoding='utf-8', errors='replace', check=True)
    start = result.stderr.rfind('{')
    values, _ = json.JSONDecoder().raw_decode(result.stderr[start:])
    assert all(math.isfinite(float(values[k])) for k in ['input_i', 'input_tp'])
    return values, result.stderr


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ffmpeg', required=True)
    parser.add_argument('--render-dir', type=Path, required=True)
    parser.add_argument('--output-dir', type=Path, required=True)
    parser.add_argument('--a-id', default='baseline')
    parser.add_argument('--b-id', default='pastoral_ab1')
    args = parser.parse_args()
    args.output_dir.mkdir(parents=True, exist_ok=False)
    render = json.loads((args.render_dir / 'render.json').read_text(encoding='utf-8'))
    rows = []
    for label, identity in [('A', args.a_id), ('B', args.b_id)]:
        source = args.render_dir / (identity + '_dry.wav')
        original_hash = hashlib.sha256(source.read_bytes()).hexdigest()
        before, log = measure(args.ffmpeg, source)
        gain = -23.0 - float(before['input_i'])
        output = args.output_dir / (label + '_' + identity + '.wav')
        subprocess.run([args.ffmpeg, '-nostdin', '-hide_banner', '-loglevel', 'error',
                        '-i', str(source), '-af', f'volume={gain:.6f}dB', '-ar', '44100',
                        '-ac', '2', '-c:a', 'pcm_s16le', str(output)], check=True)
        after, final_log = measure(args.ffmpeg, output)
        assert abs(float(after['input_i']) + 23.0) <= .1
        assert float(after['input_tp']) <= -1.5
        assert hashlib.sha256(source.read_bytes()).hexdigest() == original_hash
        (args.output_dir / (label + '_measurement.log')).write_text(log + '\n' + final_log, encoding='utf-8')
        material = next(x for x in render['performances'] if x['id'] == identity)
        rows.append(dict(label=label, content_id=identity, output=output.name,
                         source_sha256=original_hash, master_signature=material['master_signature'],
                         performance_signature=material['signature'], constant_gain_db=gain,
                         before=before, after=after,
                         output_sha256=hashlib.sha256(output.read_bytes()).hexdigest()))
    assert abs(float(rows[0]['after']['input_i']) - float(rows[1]['after']['input_i'])) <= .1
    report = dict(method='FFmpeg loudnorm measurement, followed by constant volume gain only; no compression/limiting',
                  scope='offline music-only comparison, not game speaker PCM or a listening verdict',
                  target_lufs=-23, mix_db=render['mix_db'], versions=rows, listening_review=False)
    (args.output_dir / 'loudness.json').write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    page = '''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><title>田园母曲 A/B</title>
<style>body{max-width:760px;margin:48px auto;padding:0 24px;background:#faf7ef;color:#23382e;font:18px/1.7 system-ui}audio{width:100%}article{margin:28px 0;padding:20px;background:#f0eadb;border-radius:12px}button{padding:10px 16px;font:inherit}small{color:#526157}</style>
<h1>田园母曲 A/B</h1><p>同一组四角色音色与固定混音，整体响度匹配至 −23 LUFS。只施加恒定增益，保留曲内动态。游戏默认谱保持原版。</p>
<article><b>A · 原基础谱</b><audio id="a" controls preload="metadata" src="A_{a_identity}.wav"></audio></article>
<article><b>B · 续接编配候选一</b><audio id="b" controls preload="metadata" src="B_{b_identity}.wav"></audio></article>
<button id="switch">切换版本并保留位置</button><p id="status">P0 0:00 · P1 0:24 · P2 0:48 · P3 1:12 · P4 1:36 · P5 2:00</p>
<p>待听评：起句与呼吸、P2留白、P3推进、P4高点、P5回收和重复聆听的疲劳。B的回答声部仍沿用表格中的重复型；不把结构合法当作听感通过。</p>
<small>这是离线音乐对照，不含城市环境声。技术来源与响度记录见 loudness.json。</small>
<script>const a=document.querySelector('#a'),b=document.querySelector('#b');let current=a;
for(const player of [a,b])player.addEventListener('play',()=>{(player===a?b:a).pause();current=player});
document.querySelector('#switch').onclick=async()=>{const next=current===a?b:a;const at=current.currentTime;current.pause();next.currentTime=Math.min(at,143.99);try{await next.play()}catch(e){document.querySelector('#status').textContent='请使用播放器按钮播放另一版'}};</script></html>'''
    page = page.replace('{a_identity}', args.a_id).replace('{b_identity}', args.b_id)
    if args.b_id == 'pastoral_background_ab2':
        page = page.replace('A · 原基础谱', '原 B · 续接谱原音色').replace('B · 续接编配候选一', 'B2 · 背景柔音候选二')
        page = page.replace('同一组四角色音色与固定混音', '同一份续接谱与三个原伴奏声部；B2延缓笛声起音、减弱上方泛音，领奏相对伴奏降低3 dB')
        page = page.replace('游戏默认谱保持原版。', '游戏默认音乐未切换。')
        page = page.replace('待听评：起句与呼吸、P2留白、P3推进、P4高点、P5回收和重复聆听的疲劳。B的回答声部仍沿用表格中的重复型；不把结构合法当作听感通过。', '上轮反馈：原B略好，但两版仍不足，需要更钝、更像背景音乐。此轮请比较起音、尖亮感、伴奏比例与反复听的疲劳；B2尚待听评。')
    if args.b_id == 'pastoral_cross_p0_v3':
        page = page.replace('A · 原基础谱', '原 B · P0八小节').replace('B · 续接编配候选一', '文档混编 · P0八小节')
        page = page.replace('同一组四角色音色与固定混音', '文档58续稿104事件：低音/圆号/弦乐暖垫、竖琴推进、钢片琴回答与原长笛领奏；共四条角色流')
        page = page.replace('游戏默认谱保持原版。', '仅八小节开发试听，未接真实空间来源或游戏默认音乐。')
        page = page.replace('P0 0:00 · P1 0:24 · P2 0:48 · P3 1:12 · P4 1:36 · P5 2:00', 'P0 0:00—0:24 · 后五段尚未写定此配器')
        page = page.replace('143.99', '23.99')
        page = page.replace('待听评：起句与呼吸、P2留白、P3推进、P4高点、P5回收和重复聆听的疲劳。B的回答声部仍沿用表格中的重复型；不把结构合法当作听感通过。', '这是作曲候选目录的混编原音符与原音色实试，未沿用被否定的B2笛声参数。请比较暖垫厚度、领奏突出程度与整体疲劳，尚无听感通过结论。')
    (args.output_dir / 'listen.html').write_text(page, encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False))


if __name__ == '__main__':
    main()
