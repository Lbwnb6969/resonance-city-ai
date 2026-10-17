"""AUDIO-001 measurement, fixed protocol from authoritative spec.audio A6."""
from pathlib import Path
import json
import sys
import wave
import numpy as np

ROOT = Path(__file__).resolve().parents[1]
CONFIG = json.loads((ROOT / '数据/spec_values.json').read_text(encoding='utf-8'))


def linear_filter(signal, kernel):
    length = len(signal) + len(kernel) - 1
    fft_length = 1 << (length - 1).bit_length()
    full = np.fft.irfft(np.fft.rfft(signal, fft_length) * np.fft.rfft(kernel, fft_length), fft_length)[:length]
    start = (len(kernel) - 1) // 2
    return full[start:start + len(signal)]


def load_pcm(filename):
    if filename.suffix == '.f32':
        rate = int(CONFIG['timing']['sample_rate'])
        pcm = np.frombuffer(filename.read_bytes(), dtype='<f4').astype(float).reshape(-1, 2)
        return rate, (pcm[:, 0] + pcm[:, 1]) / np.sqrt(2)
    with wave.open(str(filename), 'rb') as wav:
        assert wav.getsampwidth() == 2 and wav.getnchannels() == 2
        rate = wav.getframerate()
        pcm = np.frombuffer(wav.readframes(wav.getnframes()), dtype='<i2').astype(float).reshape(-1, 2) / 32768
    return rate, (pcm[:, 0] + pcm[:, 1]) / np.sqrt(2)


def measure(filename):
    rate, signal = load_pcm(filename)
    p = CONFIG['acoustic_measurement']
    assert rate == int(CONFIG['timing']['sample_rate'])
    assert len(signal) == round(rate * p['duration_seconds'])
    power = linear_filter(signal ** 2, np.ones(round(rate * p['rms_window_seconds'])) / round(rate * p['rms_window_seconds']))
    width = 2 * rate + 1
    indexes = np.arange(width) - (width - 1) / 2
    kernel = 2 * p['lowpass_hz'] / rate * np.sinc(2 * p['lowpass_hz'] / rate * indexes)
    kernel *= np.kaiser(width, p['kaiser_beta'])
    kernel /= kernel.sum()
    filtered = linear_filter(power, kernel)
    trim = p['trim_seconds']
    times = np.arange(trim, p['duration_seconds'] - trim, 1 / p['envelope_rate'])
    envelope = np.sqrt(np.maximum(np.interp(times * rate, np.arange(len(filtered)), filtered), 0))
    floor = envelope.mean() * p['amplitude_floor_ratio']
    spectrum = np.abs(np.fft.rfft((envelope - envelope.mean()) * np.hanning(len(envelope)))) * 2 / np.hanning(len(envelope)).sum()
    frequencies = np.fft.rfftfreq(len(envelope), 1 / p['envelope_rate'])

    def prominence(index):
        distance = np.abs(frequencies - frequencies[index])
        neighbors = spectrum[(distance >= p['neighbor_inner_hz']) & (distance <= p['neighbor_outer_hz'])]
        return float(20 * np.log10(max(spectrum[index], floor) / max(neighbors.mean(), floor)))

    target = np.flatnonzero(np.abs(frequencies - p['target_hz']) <= p['target_tolerance_hz'])
    target_index = int(target[np.argmax(spectrum[target])])
    band = np.flatnonzero((frequencies >= p['slow_low_hz']) & (frequencies <= p['slow_high_hz']) & (spectrum >= floor))
    prominence_db = max((prominence(int(index)) for index in band), default=0)
    full_spectrum = np.abs(np.fft.rfft(signal)) ** 2
    full_frequencies = np.fft.rfftfreq(len(signal), 1 / rate)
    high_energy = float(full_spectrum[(full_frequencies >= p['energy_low_hz']) & (full_frequencies <= p['energy_high_hz'])].sum())
    return {'file': str(filename.relative_to(ROOT)), 'target_peak_hz': float(frequencies[target_index]),
            'target_prominence_db': prominence(target_index), 'maximum_slow_prominence_db': prominence_db,
            'envelope_variation_db': float(20 * np.log10(envelope.max() / envelope.min())),
            'energy_200_2000_hz': high_energy, 'amplitude_floor': float(floor),
            'envelope_frequencies_hz': frequencies.tolist(), 'envelope_spectrum': spectrum.tolist(),
            'analyzed_envelope_samples': len(envelope), 'raw_samples': len(signal)}


def main():
    folder = ROOT / '验证记录/P0/声学'
    results = {name: measure(folder / (name + '.f32')) for name in ['minor_second', 'tritone', 'perfect_fifth']}
    p = CONFIG['acoustic_measurement']
    minor, tritone, fifth = (results[name] for name in ['minor_second', 'tritone', 'perfect_fifth'])
    rise = float(10 * np.log10(tritone['energy_200_2000_hz'] / fifth['energy_200_2000_hz']))
    checks = {'ACOUSTIC-001': abs(minor['target_peak_hz'] - p['target_hz']) <= p['target_tolerance_hz'] and minor['target_prominence_db'] >= p['minor_peak_db'],
              'ACOUSTIC-002': tritone['maximum_slow_prominence_db'] < p['no_peak_db'] and rise > 0,
              'ACOUSTIC-003': fifth['maximum_slow_prominence_db'] < p['no_peak_db'] and fifth['envelope_variation_db'] < p['consonant_variation_db']}
    report = {'protocol': 'spec.audio A6', 'input_format': 'float32 stereo (actual runtime PCM)', 'assist': 'OFF', 'checks': checks, 'energy_rise_db': rise, 'measurements': results}
    (folder / 'measurement.json').write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    for rid, passed in checks.items():
        print(rid, 'PASS' if passed else 'FAIL')
    print('minor peak', minor['target_peak_hz'], minor['target_prominence_db'], 'dB; tritone slow', tritone['maximum_slow_prominence_db'], 'dB; fifth variation', fifth['envelope_variation_db'], 'dB; energy rise', rise, 'dB')
    return 0 if all(checks.values()) else 1


if __name__ == '__main__':
    sys.exit(main())
