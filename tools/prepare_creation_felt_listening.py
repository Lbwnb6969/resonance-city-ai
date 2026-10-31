"""Compare unchanged score, timbre-only substitution, and the revised voice balance."""
import argparse
import hashlib
import json
import subprocess
from pathlib import Path
from prepare_creation_composition_ab import measure


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ffmpeg', required=True)
    parser.add_argument('--root', type=Path, required=True)
    parser.add_argument('--render-dir', default='render_selected')
    parser.add_argument('--output-dir', default='listening_selected')
    args = parser.parse_args()
    out = args.root / args.output_dir
    out.mkdir(exist_ok=False)
    performances = json.loads((args.root / args.render_dir / 'render.json').read_text(encoding='utf-8'))
    rows = []
    for section in [0, 2]:
        for variant, label in [('old', 'A · 上轮持续笛音'),
                               ('felt', 'B · 只换柔毡键音'),
                               ('retreated', 'C · 柔毡键音＋声部退让（用户认可）')]:
            identity = f'P{section}_cross_{variant}'
            source = args.root / args.render_dir / (identity + '_dry.wav')
            digest = hashlib.sha256(source.read_bytes()).hexdigest()
            before, first_log = measure(args.ffmpeg, source)
            gain = -23. - float(before['input_i'])
            target = out / (identity + '.wav')
            for _ in range(3):
                subprocess.run([args.ffmpeg, '-nostdin', '-y', '-hide_banner', '-loglevel', 'error',
                                '-i', str(source), '-af', f'volume={gain:.6f}dB',
                                '-ar', '44100', '-ac', '2', '-c:a', 'pcm_s16le', str(target)], check=True)
                after, final_log = measure(args.ffmpeg, target)
                if abs(float(after['input_i']) + 23.) <= .05:
                    break
                gain += -23. - float(after['input_i'])
            assert abs(float(after['input_i']) + 23.) <= .1
            assert float(after['input_tp']) <= -1.5
            assert hashlib.sha256(source.read_bytes()).hexdigest() == digest
            material = next(row for row in performances['performances'] if row['id'] == identity)
            (out / (identity + '.log')).write_text(first_log + '\n' + final_log, encoding='utf-8')
            rows.append(dict(id=identity, section=section, variant=variant, label=label,
                             source_sha256=digest, signature=material['signature'],
                             master_signature=material['master_signature'], constant_gain_db=gain,
                             before=before, after=after,
                             output_sha256=hashlib.sha256(target.read_bytes()).hexdigest()))
    report = dict(method='constant gain only; no limiting/compression', target_lufs=-23,
                  scope='offline 24-second music-only sections, not actual Master-bus recordings',
                  listening_pass=False, tracks=rows)
    (out / 'loudness.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    sections = []
    for section in [0, 2]:
        cards = ''.join(f'<article><b>{r["label"]}</b><audio controls loop preload="metadata" '
                        f'data-section="{section}" src="{r["id"]}.wav"></audio></article>'
                        for r in rows if r['section'] == section)
        sections.append(f'<section><h2>P{section} · {"呈示" if section == 0 else "减法"}</h2>{cards}</section>')
    page = '''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>领奏音色对照</title><style>body{max-width:820px;margin:32px auto;padding:0 20px;background:#faf7ef;color:#23382e;font:17px/1.7 system-ui}article{padding:15px;margin:12px 0;background:#eee8db;border-radius:12px}audio{display:block;width:100%;margin-top:8px}h2{margin-top:32px}</style>
<h1>领奏音色对照</h1><p>每段24秒，可循环。同段内换播放器会接着同一位置播放；暂停后可拖动进度。</p>
<p>A 是你听过的上一版；B 保持原声部音量，只换领奏音色；C 再让领奏和回答声部稍退后。B、C 都是独立候选，音高、节奏与留白一致，伴奏的低音和拨弦保持。</p>
<p>请重点比较：领奏是否仍怪、抢耳，键音是否太短或太闷，休止时伴奏是否空薄，循环后是否疲劳。全部以恒定增益对齐 −23 LUFS。</p>''' + ''.join(sections) + '''
<p>新键音由程序合成；B、C 均保留为开发候选，游戏默认配器未切换。</p>
<script>const players=[...document.querySelectorAll('audio')];let active=null;for(const p of players)p.addEventListener('play',()=>{const position=active&&active!==p&&active.dataset.section===p.dataset.section?active.currentTime%24:null;players.filter(x=>x!==p).forEach(x=>x.pause());active=p;if(position!==null)requestAnimationFrame(()=>{if(active===p&&!p.paused)p.currentTime=position;});});</script></html>'''
    (out / 'listen.html').write_text(page, encoding='utf-8')
    print(json.dumps(dict(ok=True, tracks=len(rows), listening_pass=False)))


if __name__ == '__main__':
    main()
