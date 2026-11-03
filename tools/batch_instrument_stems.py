#!/usr/bin/env python3
"""Offline instrumental batch: six stems, woodwinds, then six remaining stems."""
import argparse
import datetime
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import time

import numpy as np
import soundfile as sf

from prepare_lyria_batch import load, save, sha
from music_stem_artifacts import finalize

RUNTIME = Path('C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator')
SIX = 'htdemucs_6s.yaml'
WIND = '17_HP-Wind_Inst-UVR.pth'


def label(item):
    return re.search(r'\(([^)]+)\)', Path(item['path']).name).group(1).lower()


def separate(source, directory, model):
    if not (directory/'report.json').is_file():
        process = subprocess.run([str(RUNTIME/'venv/Scripts/python.exe'), '-X', 'utf8',
            str(Path(__file__).with_name('separate_music.py')), '--input', str(source),
            '--out-dir', str(directory), '--model', model, '--require-cuda'],
            capture_output=True, text=True, encoding='utf-8')
        if not (directory/'report.json').is_file():
            raise RuntimeError(process.stderr[-2000:])
    report_path, report = finalize(directory)
    if report['input_sha256'] != sha(source) or report['model'] != model:
        raise ValueError('Existing stage provenance differs')
    for item in report['outputs']:
        if sha(Path(item['path'])) != item['sha256']:
            raise ValueError('Stage output changed')
    return report_path, report


def export(song, coarse, wind, remainder):
    output = song/'stems'
    output.mkdir(exist_ok=False)
    master, rate = sf.read(coarse['working_master_path'], dtype='float32', always_2d=True)
    wind_master, _ = sf.read(wind['working_master_path'], dtype='float32', always_2d=True)
    if not np.allclose(wind_master/wind['common_input_gain'], master, atol=1e-7, rtol=1e-7):
        raise ValueError('Woodwind and coarse masters differ')
    groups = {'coarse_six': {}, 'woodwind_plus_remaining_six': {}}
    for item in coarse['outputs']:
        pcm, sr = sf.read(item['path'], dtype='float32', always_2d=True)
        groups['coarse_six'][label(item)] = pcm
    wind_gain = wind['common_input_gain']
    for item in wind['outputs']:
        if label(item) == 'woodwinds':
            pcm, sr = sf.read(item['path'], dtype='float32', always_2d=True)
            groups['woodwind_plus_remaining_six']['woodwinds'] = pcm/wind_gain
    for item in remainder['outputs']:
        pcm, sr = sf.read(item['path'], dtype='float32', always_2d=True)
        groups['woodwind_plus_remaining_six'][label(item)] = pcm/(wind_gain*remainder['common_input_gain'])
    all_pcm = [master]+[p for g in groups.values() for p in g.values()]
    all_pcm += [sum(g.values()) for g in groups.values()]
    peak = max(float(np.max(np.abs(p))) for p in all_pcm)
    gain = min(1.0, 10**(-2/20)/max(peak, 1e-12))
    master_rms = float(np.sqrt(np.mean(master**2)))
    delivery = {'sample_rate': rate, 'frames': len(master), 'channels': 2,
                'delivery_gain': gain, 'groups': {}, 'runtime_ready': False,
                'listening_status': 'not_evaluated'}

    def write(name, pcm):
        if pcm.shape != master.shape or not np.isfinite(pcm).all():
            raise ValueError('Export format mismatch')
        path = output/(name+'.wav')
        sf.write(path, pcm*gain, rate, subtype='PCM_16')
        rms = float(np.sqrt(np.mean(pcm**2)))
        return {'path': str(path), 'sha256': sha(path), 'rms': rms,
                'rms_relative_to_master_db': float(20*np.log10(max(rms,1e-12)/master_rms)),
                'peak': float(np.max(np.abs(pcm*gain))), 'role': 'unassigned'}

    delivery['full_mix'] = write('full_mix', master)
    for group, parts in groups.items():
        summed = sum(parts.values())
        delivery['groups'][group] = {
            'stems': {key: write(group+'_'+key.replace(' ', '_'), pcm) for key, pcm in parts.items()},
            'sum': write(group+'_sum', summed),
            'sum_minus_master_rms': float(np.sqrt(np.mean((summed-master)**2)))}
    save(song/'delivery.json', delivery)
    return delivery


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source-dir', type=Path, required=True)
    parser.add_argument('--out-dir', type=Path, required=True)
    parser.add_argument('--reuse-first', type=Path)
    args = parser.parse_args()
    root = args.out_dir.resolve()
    root.mkdir(parents=True, exist_ok=False)
    sources = sorted(args.source_dir.glob('*.mp3'), key=lambda p: (p.name != 'Pastoral Riverside Dawn Chamber Music.mp3', p.name))
    summary = {'started_at': datetime.datetime.now().isoformat(),
        'source_dir': str(args.source_dir), 'songs': [], 'runtime_ready': False}
    started = time.perf_counter()
    for index, original in enumerate(sources):
        slug = re.sub(r'[^a-z0-9]+', '_', original.stem.lower()).strip('_')
        song = root/slug
        song.mkdir()
        item = {'name': original.name, 'source_sha256': sha(original), 'directory': str(song),
                'status': 'running', 'stages': []}
        summary['songs'].append(item)
        save(root/'batch_report.json', summary)
        print(f'[{index+1}/{len(sources)}] {original.name}', flush=True)
        try:
            staged = song/'original.mp3'
            shutil.copy2(original, staged)
            assert sha(staged) == item['source_sha256']
            staged.chmod(0o444)
            reuse = args.reuse_first if original.name == 'Pastoral Riverside Dawn Chamber Music.mp3' else None
            if reuse and sha(reuse/'source/original_source.mp3') != item['source_sha256']:
                raise ValueError('Reused batch belongs to another source')
            coarse_dir = reuse/'separation/stage2_instruments' if reuse else song/'coarse_six'
            coarse_input = Path(load(coarse_dir/'report.json')['input']) if reuse else staged
            _, coarse = separate(coarse_input, coarse_dir, SIX)
            master = Path(coarse['working_master_path'])
            for stage in ['coarse_six']:
                item['stages'].append(stage); save(root/'batch_report.json', summary)
            print('  six stems ready; extracting woodwinds', flush=True)
            wind_dir = reuse/'separation/woodwinds_v1' if reuse else song/'woodwinds'
            # Reused first song's canonical input has the same decoded PCM but a different WAV header.
            wind_input = Path(load(wind_dir/'report.json')['input']) if reuse else master
            _, wind = separate(wind_input, wind_dir, WIND)
            item['stages'].append('woodwinds'); save(root/'batch_report.json', summary)
            complement = next(Path(o['path']) for o in wind['outputs'] if label(o) == 'no woodwinds')
            print('  woodwinds ready; separating remaining instruments', flush=True)
            _, remainder = separate(complement, song/'remaining_six', SIX)
            item['stages'].append('remaining_six')
            item['model_reports'] = [str(coarse_dir/'report.json'), str(wind_dir/'report.json'), str(song/'remaining_six/report.json')]
            item['delivery'] = export(song, coarse, wind, remainder)
            item['original_unchanged'] = sha(original) == item['source_sha256']
            if not item['original_unchanged']:
                raise ValueError('Original changed')
            item['status'] = 'technical_ready_pending_listening'
        except Exception as error:
            item.update(status='failed', error=str(error))
        summary['elapsed_seconds'] = round(time.perf_counter()-started, 3)
        save(root/'batch_report.json', summary)
        print('  '+item['status'], flush=True)
    summary['finished_at'] = datetime.datetime.now().isoformat()
    save(root/'batch_report.json', summary)
    return 1 if any(s['status'] == 'failed' for s in summary['songs']) else 0


if __name__ == '__main__':
    raise SystemExit(main())
