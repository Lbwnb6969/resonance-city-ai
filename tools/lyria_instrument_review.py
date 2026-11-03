"""Build instrument candidates without assigning bed/lead from model slot names."""
import copy
from pathlib import Path
import re
import subprocess

import numpy as np
import soundfile as sf

from prepare_lyria_batch import sha, load, save, read_pcm, loudness
from lyria_review_page import render_page

LABELS = {'bass': '低音候选', 'drums': '打击／起音候选', 'guitar': '吉他候选',
          'piano': '钢琴候选', 'other': '其余器乐（未继续区分）',
          'vocals': '未归类残余 A（模型槽位 Vocals，不代表存在人声）',
          'woodwinds': '木管候选', 'no woodwinds': '去木管后的其余器乐候选'}


def prepare(args):
    candidate = load(args.candidate)
    root = Path(candidate['external_batch_root']).resolve()
    out = (root / args.review_dir).resolve()
    if not out.is_relative_to(root) or out == root:
        raise ValueError('--review-dir must be inside the batch')
    if out.exists():
        raise FileExistsError('Review artifacts already exist; preserve this batch')
    staged = root / candidate['source_audio']['staged_path']
    original = Path(candidate['source_audio']['origin_inventory_path'])
    source_sha = sha(original)
    if source_sha != sha(staged):
        raise ValueError('Original and staged source hashes differ')
    ffmpeg = Path(candidate['separation_provenance']['runtime_root']) / 'bin/ffmpeg.exe'
    # Validate working masters against the original with a single scalar gain.
    decoded = subprocess.run([str(ffmpeg), '-nostdin', '-v', 'error', '-i', str(staged),
        '-ar', '44100', '-ac', '2', '-f', 'f32le', 'pipe:1'], capture_output=True, check=True)
    source = np.frombuffer(decoded.stdout, dtype='<f4').reshape(-1, 2)
    frames = len(source)
    records, audio, reports = [], {}, []
    master = None
    for index, report_path in enumerate(args.instrument_report):
        report = load(report_path)
        if not report['technical_ok'] or not report['input_unchanged']:
            raise ValueError('Incomplete instrument separation')
        if sha(Path(report['input'])) != report['input_sha256']:
            raise ValueError('Model input hash mismatch')
        working = read_pcm(Path(report.get('working_master_path', report_path.parent/'separation_input.wav')), frames)
        input_gain = float(np.max(np.abs(working)) / np.max(np.abs(source)))
        if not np.allclose(working, source * input_gain, atol=1e-6, rtol=1e-6):
            raise ValueError('Working master is not the original at one common gain')
        if master is None:
            master, common_input_gain = working, input_gain
            audio['full_mix'] = master
        elif not np.array_equal(working, master):
            raise ValueError('Models must share the exact same working master')
        group = f'model_{index+1}'
        combined = np.zeros_like(master)
        for item in report['outputs']:
            path = Path(item['path'])
            if sha(path) != item['sha256']:
                raise ValueError('Model output hash mismatch')
            label = re.search(r'\(([^)]+)\)', path.name).group(1).lower()
            pcm = read_pcm(path, frames)
            combined += pcm
            key = group+'_'+label.replace(' ', '_')
            audio[key] = pcm
            records.append({'id': key, 'group': group, 'model_output_label': label,
                            'label': LABELS.get(label, label), 'role': 'unassigned',
                            'model_output_sha256': item['sha256']})
        audio[group+'_sum'] = combined
        records.append({'id': group+'_sum', 'group': group, 'label': '该模型全部轨道回加',
                        'role': 'comparison'})
        reports.append({'model': report['model'], 'report': str(report_path),
                        'report_sha256': sha(report_path),
                        'sum_minus_master_rms': float(np.sqrt(np.mean((combined-master)**2))),
                        'elapsed_seconds': report['elapsed_seconds']})
    metrics = loudness(ffmpeg, args.instrument_report[0].parent/'separation_input.wav')
    peak = max(float(np.max(np.abs(pcm))) for pcm in audio.values())
    gain_db = min(-23-metrics['input_i'], -2-metrics['input_tp'],
                  -2-20*np.log10(max(peak, 1e-12)))
    gain = 10 ** (gain_db/20)
    out.mkdir()
    outputs = {}
    for key, pcm in audio.items():
        path = out / (key+'.wav')
        sf.write(path, pcm * gain, 44100, subtype='PCM_16')
        written = read_pcm(path, frames)
        if np.max(np.abs(written)) >= 1:
            raise ValueError('Output clipping')
        outputs[key] = {'file': path.relative_to(root).as_posix(), 'sha256': sha(path),
                        'frames': frames, 'channels': 2, 'sample_rate': 44100,
                        'peak': float(np.max(np.abs(written))), 'clipped_samples': 0}
    import yaml
    model_root = Path(candidate['separation_provenance']['runtime_root'])/'models'
    for report in reports:
        model_path = model_root/report['model']
        paths = [model_path]
        if model_path.suffix == '.yaml':
            for signature in yaml.safe_load(model_path.read_text())['models']:
                matches = list(model_root.glob(f'{signature}*.th'))
                if len(matches) != 1:
                    raise ValueError('Missing or ambiguous model dependency')
                paths.extend(matches)
        report['model_files'] = [{'name': p.name, 'bytes': p.stat().st_size,
                                  'sha256': sha(p)} for p in paths]
    if sha(original) != source_sha:
        raise ValueError('Original changed during preparation')
    evidence = {'source_sha256': source_sha, 'source_kind': 'instrumental_per_user',
                'vocal_separation_required': False, 'common_input_gain': common_input_gain,
                'common_review_gain_db': gain_db, 'models': reports,
                'master_loudness': loudness(ffmpeg, out/'full_mix.wav'),
                'instrument_candidates': records, 'outputs': outputs,
                'listening_approved': False, 'runtime_ready': False}
    save(out/'review_manifest.json', evidence)
    manifest = copy.deepcopy(candidate)
    manifest.update(status='instrument_candidates_pending_listening', runtime_ready=False)
    manifest['offline_review'] = {'evidence': (out/'review_manifest.json').relative_to(root).as_posix(),
        'grouping_approved': False, 'runtime_roles_confirmed': False,
        'instrument_candidates': records, 'vocal_separation_required': False}
    # Old bed/lead hypotheses remain in the historical review, without an active mapping.
    for role in ('bed', 'lead', 'pulse'):
        manifest['stems'][role]['sha256'] = None
    manifest['stems']['full_mix'].update(file=outputs['full_mix']['file'],
                                        sha256=outputs['full_mix']['sha256'])
    manifest['audio_format'].update(total_frames=frames, duration_seconds=frames/44100,
                                    common_input_gain=common_input_gain*gain)
    save(out/'bundle_manifest.json', manifest)
    (out/'listen.html').write_text(render_page(records, gain_db), encoding='utf-8')
    print(f'Prepared {len(outputs)} audio files: {out}')
