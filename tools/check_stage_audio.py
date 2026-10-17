"""Measure saved stage PCM; input meters never normalize or alter the mix."""
from pathlib import Path
import json
import sys
import numpy as np
from analyze_loudness import measure, ffmpeg_executable
import subprocess

ROOT = Path(__file__).resolve().parents[1]
DIRECTORY = ROOT / '验证记录/Demo/A13_U15_第56轮'
RATE = json.loads((ROOT/'数据/spec_values.json').read_text(encoding='utf-8'))['timing']['sample_rate']


def main():
    result = {'rate': RATE, 'measurement': {}, 'scope': 'Fixed initial-nine gain; natural27 and forced mature27. True peak from FFmpeg input meter; every complete 400ms window at 10ms hop uses actually protected drone PCM.'}
    for name in ['natural27', 'mature27']:
        path = DIRECTORY / (name+'.f32')
        report = measure(path, RATE)
        mix = np.fromfile(path, dtype='<f4').reshape(-1, 2).astype(np.float64)
        drone = np.fromfile(DIRECTORY/(name+'__drone.f32'), dtype='<f4').reshape(-1, 2).astype(np.float64)
        assert mix.shape == drone.shape and len(mix) == RATE*16
        width, hop = round(RATE*.4), round(RATE*.01)
        powers = [np.r_[0., np.cumsum(np.sum(track**2, axis=1))] for track in [mix, drone]]
        starts = np.arange(0, len(mix)-width+1, hop)
        ends = starts+width
        totals = [p[ends]-p[starts] for p in powers]
        ratios = np.sqrt(totals[1]/totals[0])
        report.update(sample_peak=float(np.abs(mix).max()), window_count=len(starts),
                      window_seconds=.4, hop_seconds=hop/RATE,
                      minimum_drone_rms_ratio=float(ratios.min()),
                      worst_window_start_seconds=float(starts[ratios.argmin()]/RATE),
                      overall_drone_rms_ratio=float(np.sqrt(np.sum(drone**2)/np.sum(mix**2))))
        report['passed'] = report['true_peak_dbtp'] <= -3 and report['minimum_drone_rms_ratio'] >= .25
        result['measurement'][name] = report
        print(name, 'true_peak', report['true_peak_dbtp'], 'dBTP; minimum drone RMS ratio', report['minimum_drone_rms_ratio'])
        # Listen to the exact fixed-gain input, with no loudness normalization.
        subprocess.run([ffmpeg_executable(), '-hide_banner', '-loglevel', 'error', '-y', '-f', 'f32le',
                        '-ar', str(RATE), '-ac', '2', '-i', str(path), '-c:a', 'pcm_s16le',
                        str(DIRECTORY/(name+'.wav'))], check=True)
    result['status'] = 'PASS' if all(r['passed'] for r in result['measurement'].values()) else 'FAIL'
    (DIRECTORY/'阶段混音测量.json').write_text(json.dumps(result, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    assert result['status'] == 'PASS'


if __name__ == '__main__':
    main()
