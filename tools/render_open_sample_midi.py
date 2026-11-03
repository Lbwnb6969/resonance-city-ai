#!/usr/bin/env python3
"""Offline SFZ/MIDI probe or production render; never writes game State or source samples."""
import argparse
import array
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import time
import wave


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--renderer', type=Path, required=True)
    parser.add_argument('--sfz', type=Path, required=True)
    parser.add_argument('--midi', type=Path, required=True)
    parser.add_argument('--out-dir', type=Path, required=True)
    parser.add_argument('--sample-rate', type=int, default=48000)
    parser.add_argument('--use-eot', action='store_true', help='Probe only: stop at MIDI end instead of preserving release tails')
    args = parser.parse_args()
    for path in (args.renderer, args.sfz, args.midi):
        if not path.is_file():
            parser.error(f'Input not found: {path}')
    # A fresh directory preserves prior probes, failed renders and original assets.
    args.out_dir.mkdir(parents=True, exist_ok=False)
    output = args.out_dir.resolve() / 'render.wav'
    command = [str(args.renderer.resolve()), '--sfz', str(args.sfz.resolve()),
               '--midi', str(args.midi.resolve()), '--wav', str(output),
               '--samplerate', str(args.sample_rate)]
    if args.use_eot:
        command.append('--use-eot')
    start = time.perf_counter()
    process = subprocess.run(command, capture_output=True, timeout=600)
    log = process.stdout + b'\n' + process.stderr
    (args.out_dir / 'renderer.log').write_bytes(log)
    report = {'command': command, 'elapsed_seconds': time.perf_counter() - start,
              'returncode': process.returncode, 'sfz_sha256': sha(args.sfz),
              'midi_sha256': sha(args.midi), 'renderer_sha256': sha(args.renderer),
              'listening_status': 'not_evaluated', 'runtime_ready': False}
    if process.returncode == 0 and output.is_file():
        with wave.open(str(output), 'rb') as stream:
            report.update(channels=stream.getnchannels(), sample_rate=stream.getframerate(),
                          sample_width=stream.getsampwidth(), frames=stream.getnframes())
            if stream.getsampwidth() != 2:
                raise ValueError('This probe expects sfizz PCM16 output; inspect other formats separately')
            pcm = array.array('h', stream.readframes(stream.getnframes()))
        if sys.byteorder != 'little':
            pcm.byteswap()
        report['peak'] = max((abs(v) for v in pcm), default=0) / 32768
        report['full_scale_samples'] = sum(v <= -32768 or v >= 32767 for v in pcm)
        report['audio_sha256'] = sha(output)
        report['seconds'] = report['frames'] / report['sample_rate']
        report['technical_ok'] = (report['channels'] == 2 and
                                  report['sample_rate'] == args.sample_rate and
                                  report['peak'] > .0001 and report['full_scale_samples'] == 0)
    else:
        report['technical_ok'] = False
    (args.out_dir / 'report.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False))
    return 0 if report['technical_ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
