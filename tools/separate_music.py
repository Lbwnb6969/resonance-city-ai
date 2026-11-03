#!/usr/bin/env python3
"""Offline song separation. Originals and game runtime are never modified."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import time

DEFAULT_ROOT = Path('C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator')
DEFAULT_MODEL = 'htdemucs_6s.yaml'


def sha(path):
    digest = hashlib.sha256()
    with path.open('rb') as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b''):
            digest.update(block)
    return digest.hexdigest()


def save(path, value):
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2), encoding='utf-8')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--runtime-root', type=Path, default=DEFAULT_ROOT)
    parser.add_argument('--input', type=Path)
    parser.add_argument('--out-dir', type=Path)
    parser.add_argument('--model', default=DEFAULT_MODEL)
    parser.add_argument('--env-info', action='store_true')
    parser.add_argument('--list-models', action='store_true')
    parser.add_argument('--require-cuda', action='store_true')
    args = parser.parse_args()
    runtime = args.runtime_root.resolve()
    interpreter = runtime / 'venv/Scripts/python.exe'
    if Path(sys.executable).resolve() != interpreter:
        if not interpreter.is_file():
            parser.error('Runtime missing; run tools/install_audio_separator.ps1 first')
        return subprocess.call([str(interpreter), '-X', 'utf8', str(Path(__file__).resolve()), *sys.argv[1:]])

    # pydub and the upstream environment probe expect the conventional executable name.
    import imageio_ffmpeg
    bin_dir = runtime / 'bin'
    bin_dir.mkdir(exist_ok=True)
    ffmpeg = bin_dir / 'ffmpeg.exe'
    if not ffmpeg.exists():
        shutil.copy2(imageio_ffmpeg.get_ffmpeg_exe(), ffmpeg)
    os.environ['PATH'] = str(bin_dir) + os.pathsep + os.environ['PATH']
    os.environ['PYTHONUTF8'] = '1'
    os.environ['AUDIO_SEPARATOR_MODEL_DIR'] = str(runtime / 'models')
    (runtime / 'models').mkdir(exist_ok=True)
    if args.env_info or args.list_models:
        flag = '--env_info' if args.env_info else '--list_models'
        return subprocess.call([str(interpreter.with_name('audio-separator.exe')), flag])
    if not args.input or not args.input.is_file() or not args.out_dir:
        parser.error('--input must be an existing song; --out-dir must be a new directory')
    args.input = args.input.resolve()
    out = args.out_dir.resolve()
    out.mkdir(parents=True, exist_ok=False)
    report = {'schema': 1, 'input': str(args.input), 'input_sha256': sha(args.input),
              'model': args.model, 'runtime_ready': False, 'listening_status': 'not_evaluated',
              'technical_ok': False, 'command': sys.argv, 'outputs': []}
    started = time.perf_counter()
    try:
        # Keep verbose inference logs beside the actual artifacts, including on failure.
        with (out / 'separator.log').open('w', encoding='utf-8') as log:
            from contextlib import redirect_stdout, redirect_stderr
            with redirect_stdout(log), redirect_stderr(log):
                separate(args, runtime, out, ffmpeg, report)
    except Exception as error:
        import traceback
        report['error'] = str(error)
        (out / 'failure.txt').write_text(traceback.format_exc(), encoding='utf-8')
    report['elapsed_seconds'] = round(time.perf_counter() - started, 3)
    report['input_unchanged'] = sha(args.input) == report['input_sha256']
    report['technical_ok'] = report['technical_ok'] and report['input_unchanged']
    save(out / 'report.json', report)
    print(json.dumps(report, ensure_ascii=False))
    return 0 if report['technical_ok'] else 1


def separate(args, runtime, out, ffmpeg, report):
    from importlib.metadata import version
    import numpy as np
    import soundfile as sf
    import torch
    from audio_separator.separator import Separator
    report['versions'] = {name: version(name) for name in
                          ('audio-separator', 'torch', 'onnxruntime-gpu', 'numpy', 'soundfile')}
    report['cuda_available'] = torch.cuda.is_available()
    report['gpu'] = torch.cuda.get_device_name(0) if report['cuda_available'] else None
    if args.require_cuda and not report['cuda_available']:
        raise RuntimeError('CUDA required but unavailable')
    decoded = out / 'decoded.wav'
    subprocess.run([str(ffmpeg), '-nostdin', '-v', 'error', '-i', str(args.input),
                    '-ar', '44100', '-ac', '2', '-c:a', 'pcm_f32le', str(decoded)], check=True)
    audio, rate = sf.read(decoded, always_2d=True, dtype='float32')
    if not len(audio) or not np.isfinite(audio).all() or np.max(np.abs(audio)) == 0:
        raise ValueError('Input must contain finite, non-silent audio')
    # Common pre-gain leaves headroom. Upstream still attenuates stems exceeding 1.0;
    # measure the actual reconstruction residual instead of promising lossless stems.
    gain = min(1.0, .5 / float(np.max(np.abs(audio))))
    audio *= gain
    canonical = out / 'separation_input.wav'
    sf.write(canonical, audio, rate, subtype='FLOAT')
    report.update(sample_rate=rate, channels=2, frames=len(audio),
                  seconds=len(audio) / rate, common_input_gain=gain)
    separator = Separator(model_file_dir=str(runtime / 'models'), output_dir=str(out),
                          output_format='WAV', use_soundfile=True,
                          normalization_threshold=1.0, amplification_threshold=0.0,
                          use_autocast=report['cuda_available'],
                          mdxc_params={'segment_size': 256, 'override_model_segment_size': False,
                                       'batch_size': 1, 'overlap': 8, 'pitch_shift': 0})
    separator.load_model(model_filename=args.model)
    report['device'] = str(separator.torch_device)
    outputs = separator.separate(str(canonical))
    summed = np.zeros_like(audio)
    aligned = bool(outputs)
    for name in outputs:
        path = Path(name)
        if not path.is_absolute():
            path = out / path
        pcm, sample_rate = sf.read(path, always_2d=True, dtype='float32')
        matches = pcm.shape == audio.shape and sample_rate == rate
        finite = bool(np.isfinite(pcm).all())
        aligned = aligned and matches and finite
        if matches:
            summed += pcm
        report['outputs'].append({'path': str(path), 'sha256': sha(path),
                                  'frames': len(pcm), 'channels': pcm.shape[1],
                                  'sample_rate': sample_rate, 'finite': finite,
                                  'peak': float(np.max(np.abs(pcm))),
                                  'rms': float(np.sqrt(np.mean(pcm ** 2)))})
    report['model_files'] = [{'name': p.name, 'sha256': sha(p), 'bytes': p.stat().st_size}
                             for p in sorted((runtime / 'models').iterdir())
                             if p.is_file() and (p.name == args.model or p.suffix == '.yaml')]
    if aligned:
        report['sum_minus_input_rms'] = float(np.sqrt(np.mean((summed - audio) ** 2)))
    report['technical_ok'] = aligned and bool(np.max(np.abs(summed)) > 0)


if __name__ == '__main__':
    raise SystemExit(main())
