#!/usr/bin/env python3
"""Prepare instrumental-stem auditions; vocal separation is not a prerequisite."""
import argparse
import copy
import hashlib
import html
import json
from pathlib import Path
import re
import subprocess

import numpy as np
import soundfile as sf


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def load(path):
    return json.loads(path.read_text(encoding='utf-8-sig'))


def save(path, value):
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2), encoding='utf-8')


def loudness(ffmpeg, path):
    result = subprocess.run([str(ffmpeg), '-nostdin', '-hide_banner', '-i', str(path),
                             '-af', 'loudnorm=I=-23:TP=-2:LRA=50:print_format=json',
                             '-f', 'null', '-'], capture_output=True, text=True, check=True)
    metrics = json.loads(re.findall(r'\{[^{}]+\}', result.stderr)[-1])
    return {k: float(metrics[k]) for k in ('input_i', 'input_tp', 'input_lra')}


def read_pcm(path, frames):
    pcm, rate = sf.read(path, dtype='float32', always_2d=True)
    if rate != 44100 or pcm.shape != (frames, 2) or not np.isfinite(pcm).all():
        raise ValueError(f'Invalid audio format: {path}')
    return pcm


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--candidate', type=Path, required=True)
    parser.add_argument('--instrument-report', type=Path, action='append')
    parser.add_argument('--review-dir', default='instrument_review_v2')
    parser.add_argument('--legacy-grouped-review', action='store_true')
    parser.add_argument('--analysis-summary', type=Path)
    parser.add_argument('--baseline', type=Path)
    args = parser.parse_args()
    if args.instrument_report:
        from lyria_instrument_review import prepare
        return prepare(args)
    if not args.legacy_grouped_review or not args.analysis_summary or not args.baseline:
        parser.error('Use --instrument-report for instrumental music; the historical grouped review requires --legacy-grouped-review, --analysis-summary and --baseline')
    candidate = load(args.candidate)
    root = Path(candidate['external_batch_root'])
    ffmpeg = Path(candidate['separation_provenance']['runtime_root']) / 'bin/ffmpeg.exe'
    stage1 = load(root / 'separation/stage1_bsroformer/report.json')
    stage2 = load(root / 'separation/stage2_instruments/report.json')
    summary = load(args.analysis_summary)
    original = Path(candidate['source_audio']['origin_inventory_path'])
    staged = root / candidate['source_audio']['staged_path']
    source_sha = sha(original)
    if not source_sha == sha(staged) == stage1['input_sha256'] == summary['source_sha256']:
        raise ValueError('Source/analysis provenance mismatch')
    for report in (stage1, stage2):
        if not report['technical_ok'] or not report['input_unchanged']:
            raise ValueError('Incomplete separation')
        for output in report['outputs']:
            if sha(Path(output['path'])) != output['sha256']:
                raise ValueError('Separation output hash mismatch')
    master_path = root / 'separation/stage1_bsroformer/separation_input.wav'
    if sha(master_path) != stage2['input_sha256'] or stage2['common_input_gain'] != 1.0:
        raise ValueError('Stage 2 must consume the unchanged common-gain master')
    targets = [root / name for name in ('stems', 'timeline', 'listening', 'bundle_manifest.json')]
    if any(path.exists() for path in targets):
        raise FileExistsError('Review artifacts already exist; preserve this batch')
    frames = stage1['frames']
    master = read_pcm(master_path, frames)
    sources = {}
    for item in stage2['outputs']:
        label = re.search(r'\(([^)]+)\)', Path(item['path']).name).group(1).lower()
        sources[label] = read_pcm(Path(item['path']), frames)
    if set(sources) != {'bass', 'drums', 'other', 'vocals', 'guitar', 'piano'}:
        raise ValueError('Expected the six HTDemucs stems')
    # These are audition groups, not verified instrument identities or production roles.
    bed = sum(pcm for label, pcm in sources.items() if label != 'other')
    lead = sources['other']
    combined = bed + lead
    metrics = loudness(ffmpeg, master_path)
    peak = max(float(np.max(np.abs(pcm))) for pcm in (master, bed, lead, combined))
    gain_db = min(-23 - metrics['input_i'], -2 - metrics['input_tp'],
                  -2 - 20 * np.log10(max(peak, 1e-12)))
    gain = 10 ** (gain_db / 20)
    baseline_metrics = loudness(ffmpeg, args.baseline)
    baseline_gain_db = min(-23 - baseline_metrics['input_i'], -2 - baseline_metrics['input_tp'])
    for path in targets[:3]:
        path.mkdir()
    outputs = {}

    def write(name, pcm):
        path = root / name
        sf.write(path, pcm * gain, 44100, subtype='PCM_16')
        written, rate = sf.read(path, always_2d=True)
        peak = float(np.max(np.abs(written)))
        if len(written) != len(pcm) or rate != 44100 or peak >= 1:
            raise ValueError(f'Output validation failed: {path}')
        outputs[name] = {'sha256': sha(path), 'frames': len(written), 'channels': 2,
                         'sample_rate': rate, 'peak': peak, 'clipped_samples': 0}

    for name, pcm in [('full_mix', master), ('bed', bed), ('lead', lead)]:
        write(f'stems/{name}.wav', pcm)
    write('listening/bed_plus_lead.wav', combined)
    write('listening/raw_tail_head.wav', np.concatenate((master[-8*44100:], master[:8*44100])))
    vocal = next(item for item in stage1['outputs'] if '(Vocals)' in item['path'])
    write('listening/stage1_vocal_screen.wav', read_pcm(Path(vocal['path']), frames))
    subprocess.run([str(ffmpeg), '-nostdin', '-v', 'error', '-i', str(args.baseline),
                    '-af', f'volume={baseline_gain_db}dB', '-ar', '44100', '-ac', '2',
                    '-c:a', 'pcm_s16le', str(root/'listening/old_baseline.wav')], check=True)
    baseline_path = root/'listening/old_baseline.wav'
    baseline_pcm, baseline_rate = sf.read(baseline_path, always_2d=True)
    outputs['listening/old_baseline.wav'] = {'sha256': sha(baseline_path),
        'frames': len(baseline_pcm), 'sample_rate': baseline_rate,
        'channels': baseline_pcm.shape[1], 'peak': float(np.max(np.abs(baseline_pcm))),
        'clipped_samples': int(np.count_nonzero(np.abs(baseline_pcm) >= 1))}
    if outputs['listening/old_baseline.wav']['clipped_samples']:
        raise ValueError('Baseline clipping')
    analysis = load(args.analysis_summary.parent / 'essentia.json')
    engines = {'librosa': summary['librosa']['beats_seconds'],
               'essentia': analysis['rhythm']['beats_position']}
    beat_map = {'status': 'unapproved_algorithm_estimates', 'approved_clock_engine': None,
                'source_sha256': source_sha, 'sample_rate': 44100, 'total_frames': frames,
                'nominal_bpm_intent': candidate['timeline']['nominal_bpm_intent'],
                'estimated_bpm': {'librosa': summary['librosa']['bpm'],
                                  'essentia': summary['essentia']['bpm']}, 'engines': {}}
    for engine, seconds in engines.items():
        positions = [round(t * 44100) for t in seconds]
        if not all(0 <= a < b < frames for a, b in zip(positions, positions[1:])):
            raise ValueError('Nonmonotonic beat estimates')
        beat_map['engines'][engine] = {'beat_frames': positions,
            'interval_bpm': [60*44100/(b-a) for a, b in zip(positions, positions[1:])]}
    save(root/'timeline/beat_map.json', beat_map)
    save(root/'timeline/sections_harmony.json', {'status': 'pending_manual_annotation',
         'source_sha256': source_sha, 'sections': [], 'bar_chords': [], 'loop_region': None,
         'key_estimate_essentia': summary['essentia'], 'approved': False})
    evidence = {'source_sha256': source_sha, 'common_review_gain_db': gain_db,
                'separation_common_input_gain': stage1['common_input_gain'],
                'master_loudness_before_review_gain': metrics,
                'master_loudness_after_review_gain': loudness(ffmpeg, root/'stems/full_mix.wav'),
                'baseline': {'source': str(args.baseline), 'sha256': sha(args.baseline),
                             'gain_db': baseline_gain_db, 'measurements': baseline_metrics},
                'stage1_vocals_rms_dbfs': 20*np.log10(vocal['rms']),
                'stage2_sum_minus_master_rms': float(np.sqrt(np.mean((combined-master)**2))),
                'grouping': {'lead_candidate': ['other'],
                             'bed_candidate': sorted(set(sources)-{'other'})},
                'outputs': outputs, 'listening_approved': False}
    model_root = Path(candidate['separation_provenance']['runtime_root'])/'models'
    import yaml
    model_yaml = model_root / stage2['model']
    signatures = yaml.safe_load(model_yaml.read_text())['models']
    model_files = [model_yaml]
    for signature in signatures:
        model_files.extend(model_root.glob(f'{signature}*.th'))
    if len(model_files) != len(signatures)+1:
        raise ValueError('Missing or ambiguous Demucs model provenance')
    evidence['stage2_model_files'] = [{'name': p.name, 'bytes': p.stat().st_size,
                                     'sha256': sha(p)} for p in model_files]
    save(root/'listening/loudness.json', evidence)
    manifest = copy.deepcopy(candidate)
    manifest.update(status='offline_review_ready_pending_listening_and_timeline', runtime_ready=False)
    manifest['source_audio']['sha256'] = source_sha
    manifest['audio_format'].update(total_frames=frames, duration_seconds=frames/44100,
                                    common_input_gain=stage1['common_input_gain']*gain)
    manifest['timeline'].update(clock_authority='pending_manual_beat_confirmation')
    for key in ('beat_map', 'sections_harmony'):
        manifest['timeline'][key+'_sha256'] = sha(root/manifest['timeline'][key+'_file'])
    for key in ('full_mix', 'bed', 'lead'):
        manifest['stems'][key]['sha256'] = sha(root/manifest['stems'][key]['file'])
    manifest['offline_review'] = {'evidence': 'listening/loudness.json',
                                  'grouping_approved': False, 'runtime_roles_confirmed': False}
    manifest['separation_provenance'].setdefault('historical_vocal_probe', {}).update(
        report='separation/stage1_bsroformer/report.json', required=False)
    manifest['separation_provenance']['stage2_instrument_separation'].update(
        selected_model=stage2['model'], report='separation/stage2_instruments/report.json',
        availability_status='inference_completed_pending_listening')
    save(root/'bundle_manifest.json', manifest)
    rows = [('完整母带', '../stems/full_mix.wav'), ('旧制作基线（独立等响度）', 'old_baseline.wav'),
            ('候选底床：除 Other 外五轨合并', '../stems/bed.wav'),
            ('候选前景：Other，含哪些乐器待听评', '../stems/lead.wav'),
            ('底床＋前景回加', 'bed_plus_lead.wav'),
            ('原始末 8 秒 → 首 8 秒（接缝诊断）', 'raw_tail_head.wav'),
            ('Stage 1 人声筛查轨（共同增益，未拉响）', 'stage1_vocal_screen.wav')]
    cards = ''.join(f'<section><h2>{html.escape(label)}</h2><audio controls preload="metadata" '
                    f'src="{html.escape(url)}"></audio></section>' for label, url in rows)
    page = '<!doctype html><html lang="zh-CN"><meta charset="utf-8"><title>首曲分轨试听</title>'
    page += '<style>body{max-width:880px;margin:40px auto;padding:0 24px;background:#eee9df;color:#263b37;font:17px/1.7 system-ui}section{padding:12px 24px;margin:16px 0;background:#fffaf0;border-radius:14px}h2{font-size:18px}audio{width:100%}</style>'
    page += '<h1>河畔晨光 · 首曲试听</h1><p>待听评。先听完整曲，再听单轨与回加。点击另一轨会沿用前一轨播放位置；两首不同作品各自从当前位置播放。接缝为原始硬接诊断，尚未制作循环。</p>'
    page += f'<p>完整母带约 −23 LUFS；所有新曲单轨共用 {gain_db:.2f} dB 增益，保留相对平衡。Other 只是假定前景，不代表已分离出纯净主奏。</p>'
    page += cards + '<p>请记录：完整曲能否采用；底床有无主奏残影／水声；前景有无毛刺；回加是否变薄；接缝是否自然。未确认节拍、和声及循环前不接入游戏。</p>'
    page += '<script>let last=null;const tracks=[...document.querySelectorAll("audio")];tracks.forEach((a,i)=>a.addEventListener("play",()=>{if(last&&last!==a&&i<5&&tracks.indexOf(last)<5&&i!==1&&tracks.indexOf(last)!==1)a.currentTime=Math.min(last.currentTime,a.duration||Infinity);tracks.forEach(b=>{if(b!==a)b.pause()});last=a}));</script></html>'
    (root/'listening/listen.html').write_text(page, encoding='utf-8')
    print(json.dumps({'batch': str(root), 'source_sha256': source_sha,
                      'loudness': evidence['master_loudness_after_review_gain'],
                      'sum_residual': evidence['stage2_sum_minus_master_rms'],
                      'runtime_ready': False}, ensure_ascii=False))


if __name__ == '__main__':
    main()
