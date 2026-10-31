"""Create a constant-gain, equal-loudness comparison of the independent slice."""
from pathlib import Path
import argparse
import hashlib
import json
import subprocess
from prepare_creation_composition_ab import measure


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ffmpeg', required=True)
    parser.add_argument('--root', type=Path, required=True)
    args = parser.parse_args()
    out = args.root / 'listening'
    out.mkdir(exist_ok=False)
    rows = []
    choices = [('reference', 'pastoral_cross_p0_v3', 'P0 · 旧 v3 混编'),
               ('render', 'P0_cross', 'P0 · 柔和修订 cross'),
               ('render', 'P0_base', 'P0 · 柔和修订 base'),
               ('reference', 'pastoral_background_ab2_p2', 'P2 · 旧 B2'),
               ('render', 'P2_cross', 'P2 · 柔和修订 cross'),
               ('render', 'P2_base', 'P2 · 柔和修订 base')]
    for directory, identity, label in choices:
        source = args.root / directory / (identity + '_dry.wav')
        digest = hashlib.sha256(source.read_bytes()).hexdigest()
        before, log = measure(args.ffmpeg, source)
        gain = -23. - float(before['input_i'])
        target = out / (identity + '.wav')
        # The absolute loudness gate can include more quiet blocks after lifting
        # a sparse source. Re-measure, always rendering from the original PCM.
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
        (out / (identity + '.log')).write_text(log + '\n' + final_log, encoding='utf-8')
        row = next(r for r in json.loads((args.root / directory / 'render.json').read_text(encoding='utf-8'))['performances'] if r['id'] == identity)
        rows.append(dict(id=identity, label=label, source_sha256=digest,
                         signature=row['signature'], master_signature=row['master_signature'],
                         constant_gain_db=gain, before=before, after=after,
                         output_sha256=hashlib.sha256(target.read_bytes()).hexdigest()))
    report = dict(method='constant gain only; no limiting/compression', target_lufs=-23,
                  scope='offline 24-second sections; no listening verdict', listening_pass=False, tracks=rows)
    (out / 'loudness.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    cards = ''.join(f'<article><b>{r["label"]}</b><audio controls loop preload="metadata" src="{r["id"]}.wav"></audio></article>' for r in rows)
    page = '''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><title>P0 / P2 柔和配器试听</title>
<style>body{max-width:800px;margin:40px auto;padding:0 24px;background:#faf7ef;color:#23382e;font:18px/1.7 system-ui}article{padding:16px;margin:18px 0;background:#f0eadb;border-radius:12px}audio{display:block;width:100%}</style>
<h1>P0 / P2 柔和配器试听</h1><p>每段24秒，可循环。全部以恒定增益对齐 −23 LUFS；保留曲内动态。</p>
<p>P0 与旧 v3 首段比较，P2 与旧 B2 比较。请听领奏是否抢耳、休止后伴奏是否空薄、低中频是否糊，以及循环数次后是否疲劳。</p>''' + cards + '''
<p>这是独立开发试听，默认音乐未切换。base/cross 是两种配器；cross 尚未接真实空间或跨岸声像。技术验证与听感结论分别记录。</p>
<script>const players=[...document.querySelectorAll('audio')];for(const p of players)p.addEventListener('play',()=>players.filter(x=>x!==p).forEach(x=>x.pause()));</script></html>'''
    (out / 'listen.html').write_text(page, encoding='utf-8')
    print(json.dumps({'ok': True, 'tracks': len(rows), 'listening_pass': False}))


if __name__ == '__main__':
    main()
