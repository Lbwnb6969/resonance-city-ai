"""Read actual float32 PCM with FFmpeg's EBU R128/true-peak meter."""
from pathlib import Path
import argparse
import json
import re
import shutil
import subprocess
import sys
import numpy as np

ROOT = Path(__file__).resolve().parents[1]

def ffmpeg_executable():
    exe = shutil.which('ffmpeg')
    if exe:
        return exe
    local = ROOT / '.git/工具依赖/响度'
    sys.path.insert(0, str(local))
    try:
        import imageio_ffmpeg
        return imageio_ffmpeg.get_ffmpeg_exe()
    except ImportError as exc:
        raise RuntimeError('Install imageio-ffmpeg in .git/工具依赖/响度 or provide ffmpeg on PATH') from exc

def measure(path, rate, target=-16.0, peak=-3.0):
    command = [ffmpeg_executable(), '-hide_banner', '-nostats', '-f', 'f32le',
               '-ar', str(rate), '-ac', '2', '-i', str(path), '-af',
               f'loudnorm=I={target}:TP={peak}:print_format=json', '-f', 'null', '-']
    result = subprocess.run(command, capture_output=True, text=True, encoding='utf-8', errors='replace', check=True)
    matches = re.findall(r'\{\s*"input_i"[^}]+\}', result.stderr)
    if not matches:
        raise RuntimeError(result.stderr)
    report = json.loads(matches[-1])
    return {'integrated_lufs':float(report['input_i']), 'true_peak_dbtp':float(report['input_tp']),
            'loudness_range':float(report['input_lra']), 'gate_lufs':float(report['input_thresh']),
            'command':command, 'ffmpeg_json':report}

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--directory', default='验证记录/P0/响度探针')
    args = parser.parse_args()
    directory = ROOT / args.directory
    rate = json.loads((ROOT/'数据/spec_values.json').read_text(encoding='utf-8'))['timing']['sample_rate']
    report = {}
    for path in sorted(directory.glob('*.f32')):
        if path.stem.endswith('__drone'):
            continue
        values = measure(path,rate)
        pcm = np.fromfile(path,dtype='<f4').reshape(-1,2).astype(np.float64)
        values['sample_peak'] = float(np.max(np.abs(pcm)))
        drone_path = path.with_name(path.stem+'__drone.f32')
        if drone_path.is_file():
            drone = np.fromfile(drone_path,dtype='<f4').reshape(-1,2).astype(np.float64)
            assert drone.shape == pcm.shape
            values['drone_rms_ratio'] = float(np.sqrt(np.sum(drone**2)/np.sum(pcm**2)))
        report[path.stem] = values
    (directory/'measurement.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    for name, values in report.items():
        print(name, values['integrated_lufs'], 'LUFS', values['true_peak_dbtp'], 'dBTP')
