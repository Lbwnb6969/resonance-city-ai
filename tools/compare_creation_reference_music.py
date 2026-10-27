"""Compare results from the user's analyze.py; this does not reimplement analysis.

Run with the song-analysis Python environment for numpy/matplotlib support.
Raw recordings and full third-party output remain under the ignored evidence root.
"""
from pathlib import Path
import argparse
import array
import csv
import hashlib
import json
import wave

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import numpy as np


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def timeline(path):
    with path.open(encoding='utf-8-sig') as stream:
        rows = list(csv.DictReader(stream))
    return {key: np.asarray([float(row[key]) for row in rows]) for key in rows[0]}


def extract(path):
    summary = read(path)
    source = Path(summary['source'])
    if digest(source) != summary['source_sha256']:
        raise ValueError(f'Stale analysis source: {source}')
    raw = read(path.parent / 'essentia.json')
    key_profiles = {key: raw['tonal'][key] for key in
                    ('key_edma', 'key_krumhansl', 'key_temperley')}
    info = dict(source_name=source.name, source_sha256=summary['source_sha256'],
                seconds=summary['duration_seconds'], versions=summary['versions'],
                bpm_librosa=summary['librosa']['bpm'],
                bpm_essentia=summary['essentia']['bpm'],
                key_profiles=key_profiles,
                chords_statistical_label={k: raw['tonal'][k] for k in ('chords_key', 'chords_scale')},
                onset_rate=summary['essentia']['onset_rate'],
                mean_frame_rms=summary['librosa']['rms']['mean'],
                centroid_hz=summary['librosa']['spectral_centroid_hz']['mean'][0],
                rolloff_hz=summary['librosa']['spectral_rolloff_hz']['mean'][0])
    info['beat_intervals'] = {}
    for engine in ('librosa', 'essentia'):
        with (path.parent / 'beats.csv').open(encoding='utf-8-sig') as stream:
            beats = np.asarray([float(row['seconds']) for row in csv.DictReader(stream)
                                if row['engine'] == engine])
        intervals = np.diff(beats)
        info['beat_intervals'][engine] = dict(count=len(beats),
                median_seconds=float(np.median(intervals)),
                p10_seconds=float(np.percentile(intervals, 10)),
                p90_seconds=float(np.percentile(intervals, 90)))
    return info, timeline(path.parent / 'timeline.csv')


def verify_capture(root, label):
    recorded = read(root / f'{label}_runtime.json')
    audio_path = root / f'{label}.wav'
    with wave.open(str(audio_path), 'rb') as stream:
        if stream.getsampwidth() != 2:
            raise ValueError('Expected the actual PCM16 Master capture')
        seconds = stream.getnframes() / stream.getframerate()
        samples = array.array('h', stream.readframes(stream.getnframes()))
    peak = max(abs(value) for value in samples) / 32768
    clipped = sum(abs(value) >= 32767 for value in samples)
    settled = [row for row in recorded['samples'] if row['seconds'] >= 1]
    assertions = dict(sha256=digest(audio_path),
                      pcm_duration_agrees=abs(seconds-recorded['seconds']) < 1e-6,
                      pcm_peak_agrees=abs(peak-recorded['peak']) < 1e-6,
                      clipped_samples=clipped, peak=peak, seconds=seconds,
                      wall_requested_seconds=recorded['requested_seconds'],
                      captures_at_least_95_percent_wall_time=seconds > recorded['requested_seconds']*.95,
                      settled_sources_audible=all(row['source'].get('audible', False) for row in settled),
                      initial_fade_samples=sum(not row['source'].get('audible', False)
                                               for row in recorded['samples'] if row['seconds'] < 1),
                      observed_form_passages=sorted({row['form']['name'] for row in recorded['samples']}))
    assertions['ok'] = all((assertions['pcm_duration_agrees'], assertions['pcm_peak_agrees'],
                            clipped == 0, peak > .01,
                            assertions['captures_at_least_95_percent_wall_time'],
                            assertions['settled_sources_audible']))
    return assertions


def bins(data, seconds, width=12):
    result = []
    for start in np.arange(0, seconds, width):
        mask = (data['seconds'] >= start) & (data['seconds'] < start+width)
        result.append(dict(start_seconds=float(start), end_seconds=float(min(start+width, seconds)),
                           rms=float(np.mean(data['rms'][mask])),
                           centroid_hz=float(np.mean(data['centroid_hz'][mask])),
                           rolloff_hz=float(np.mean(data['rolloff_hz'][mask]))))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference-summary', required=True, type=Path)
    parser.add_argument('--evidence', required=True, type=Path)
    parser.add_argument('--profile-output', type=Path)
    args = parser.parse_args()
    reference, reference_data = extract(args.reference_summary)
    summaries = {Path(read(path)['source']).stem: path for path in
                 args.evidence.joinpath('analysis').rglob('summary.json')}
    names = ['day_andante_26m', 'night_largo_14m']
    info, data = [reference], [reference_data]
    captures = {}
    for name in names:
        row, values = extract(summaries[name]);info.append(row);data.append(values)
        captures[name] = verify_capture(args.evidence / 'live', name)
    raw_capture = read(args.evidence / 'live/reference_capture.json')
    if raw_capture['source_reference_audio_loaded']:
        raise ValueError('This comparison must not play the reference inside the game')
    non_fixture_failures = [failure for failure in raw_capture['failures'] if not
                           failure.startswith(('continuous audible unclipped production recording:',
                                               'all sampled daily sources audible:'))]
    output = dict(reference=reference, game=info[1:],
                  comparison_method='Same existing analyze.py, exact source hash checks; no subjective listening score',
                  source_reference_audio_loaded=False, raw_capture_ok=raw_capture['ok'],
                  raw_capture_failures=raw_capture['failures'],
                  offline_capture_validation=captures,
                  fixture_recheck_reason='Old wall-minus-0.5s assertion conflicts with measured Dummy PCM duration; first nocturne sample is initial gain fade. Original failed report is retained.',
                  other_capture_failures=non_fixture_failures,
                  reference_12s_windows=bins(reference_data, reference['seconds']),
                  ok=not non_fixture_failures and all(row['ok'] for row in captures.values()))
    args.evidence.mkdir(parents=True, exist_ok=True)
    (args.evidence / 'comparison.json').write_text(json.dumps(output, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    plt.rcParams.update({'font.family': 'Microsoft YaHei', 'axes.unicode_minus': False})
    fig, axes = plt.subplots(3, 1, figsize=(12, 9), layout='constrained')
    labels = ['参考《齐马蓝》', '游戏：五屋日常', '游戏：近景慢板夜曲']
    colors = ['#2e6773', '#bf8b46', '#7b64a4']
    for values, name, color, metrics in zip(data, labels, colors, info):
        for axis, field in zip(axes[:2], ['rms', 'centroid_hz']):
            aggregated = bins(values, values['seconds'][-1], 3)
            axis.plot([row['start_seconds']+1.5 for row in aggregated],
                      [row[field]/metrics['mean_frame_rms'] if field == 'rms' else row[field]
                       for row in aggregated], label=name, color=color, linewidth=1.7)
    axes[0].set(ylabel='短窗 RMS / 各录音均值（只比起伏）', title='同一分析链：相对能量、明暗与音头密度')
    axes[1].set(ylabel='频谱质心（Hz）', xlabel='各录音自身时间（秒）')
    axes[2].bar(labels, [row['onset_rate'] for row in info], color=colors, width=.55)
    axes[2].set(ylabel='Essentia 音头 / 秒', title='音头检测密度不等同于转录出的音符数量')
    for axis in axes:
        axis.spines[['top', 'right']].set_visible(False);axis.grid(axis='y', alpha=.18)
    axes[0].legend(frameon=False, ncol=3)
    fig.savefig(args.evidence / 'comparison.png', dpi=160);plt.close(fig)
    if args.profile_output:
        profile = dict(schema=1, kind='analysis_reference_not_runtime_preset',
                       reference=reference, reference_12s_windows=output['reference_12s_windows'],
                       game_measurements=info[1:],
                       tested_recipe=dict(houses=5, night=True, zoom_m=14, temperament='largo',
                                          authored_bpm=80, time_signature='4/4',
                                          native_loop_seconds=24, long_form_seconds=144,
                                          existing_nocturne_primary_attacks_per_24s=11),
                       conclusions=dict(soft_tonal_layering='available via existing nightly orchestration',
                                        reference_like_pulse_and_density='not reached by tested recipes',
                                        reference_like_longform='six gain passages exist; not a transcription of reference structure',
                                        exact_melody_chords_instrumentation='not determined by these descriptors'),
                       usage='Reference for original event-level composition; no source audio, melody transcription, imported playback or new runtime mode.',
                       boundaries=['BPM estimates retained separately; G/E key labels are estimates, not score truth.',
                                   'Three key profiles are from one Essentia engine, not independent validation.',
                                   'RMS is not LUFS; no global similarity percentage or subjective listening score.'])
        args.profile_output.parent.mkdir(parents=True, exist_ok=True)
        args.profile_output.write_text(json.dumps(profile, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(ok=output['ok'], captures=captures, comparison=str(args.evidence/'comparison.json')), ensure_ascii=False))
    return 0 if output['ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
