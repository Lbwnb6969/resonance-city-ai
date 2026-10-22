"""Measure exported real PCM or native-decoded QOA nature cues independently."""
from pathlib import Path
import argparse
import json
import math
import wave

import numpy as np


def read_audio(path):
    with wave.open(str(path), 'rb') as wav:
        assert wav.getsampwidth() == 2
        samples = np.frombuffer(wav.readframes(wav.getnframes()), dtype='<i2').astype(float) / 32768
        return samples.reshape(-1, wav.getnchannels()).mean(axis=1), wav.getframerate()


def rms(samples):
    return float(np.sqrt(np.mean(samples * samples)))


def frequency(samples, rate):
    size = 1 << math.ceil(math.log2(len(samples) * 8))
    spectrum = np.abs(np.fft.rfft(samples * np.hanning(len(samples)), n=size))
    peak = int(np.argmax(spectrum[1:]) + 1)
    return peak * rate / size


def correlation(recorded, expected):
    """Find the real bus-onset lag and fit its constant gain without changing pitch."""
    if len(recorded) < len(expected):
        return 0., 0
    size = 1 << math.ceil(math.log2(len(recorded) + len(expected)))
    dot = np.fft.irfft(np.fft.rfft(recorded, n=size) * np.conj(np.fft.rfft(expected, n=size)), n=size)
    energy = np.concatenate(([0.], np.cumsum(recorded * recorded)))
    energy = energy[len(expected):] - energy[:-len(expected)]
    norm = np.sqrt(np.maximum(energy * np.sum(expected * expected), 1e-30))
    coefficients = dot[:len(norm)] / norm
    index = int(np.argmax(coefficients))
    return float(coefficients[index]), index


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path, help='Output of test_city_creation_world_touch_audio.gd')
    parser.add_argument('--live', type=Path, help='Optional native short-bus recordings from the actual game')
    args = parser.parse_args()
    report = json.loads((args.directory / 'report.json').read_text(encoding='utf-8'))
    failures = []
    measured = []
    for item in report['exports']:
        samples, rate = read_audio(args.directory / item['file'])
        bird = '/world_tree_' in item['key']
        pitches = []
        for note in item['notes']:
            start = float(note['start']) + .025
            end = float(note['start']) + min(.115, float(note['duration']) - .01)
            actual = frequency(samples[round(start * rate):round(end * rate)], rate)
            expected = 440 * 2 ** ((int(note['midi']) - 69) / 12)
            pitches.append(dict(midi=note['midi'], expected_hz=expected, actual_hz=actual,
                                relative_error=abs(actual / expected - 1)))
        decay = rms(samples[round(.115 * rate):round(.155 * rate)]) / max(rms(samples[round(.02 * rate):round(.06 * rate)]), 1e-12)
        gap = rms(samples[round(.145 * rate):round(.18 * rate)])
        tail = rms(samples[round(.59 * rate):])
        peak = float(np.max(np.abs(samples)))
        ok = all(pitch['relative_error'] < .04 for pitch in pitches) and 0 < peak < .18 and tail < .0005
        ok = ok and (gap < .0005 if bird else decay < .6)
        row = dict(key=item['key'], pitches=pitches, water_decay_ratio=decay,
                   bird_breath_gap_rms=gap, tail_rms=tail, peak=peak, ok=ok)
        measured.append(row)
        if not ok:
            failures.append(row)
    result = dict(ok=not failures and len(measured) == 160, cues=len(measured), failures=failures,
                  maximum_relative_pitch_error=max(p['relative_error'] for row in measured for p in row['pitches']),
                  maximum_peak=max(row['peak'] for row in measured), measurements=measured)
    if args.live:
        native = json.loads((args.live / 'report.json').read_text(encoding='utf-8'))
        recordings = []
        for item in native['notes']:
            actual, rate = read_audio(args.live / item['recording'])
            expected, expected_rate = read_audio(args.directory / (item['stream_key'].replace('/', '_') + '.wav'))
            coefficient, lag = correlation(actual, expected) if rate == expected_rate else (0., 0)
            recordings.append(dict(file=item['recording'], key=item['stream_key'], correlation=coefficient,
                                   lag_seconds=lag / rate, ok=coefficient > .94))
        result['native_recordings'] = recordings
        result['ok'] = result['ok'] and native['ok'] and len(recordings) == 4 and all(row['ok'] for row in recordings)
    (args.directory / 'spectra.json').write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({key: value for key, value in result.items() if key != 'measurements'}, ensure_ascii=False))
    raise SystemExit(0 if result['ok'] else 1)


if __name__ == '__main__':
    main()
