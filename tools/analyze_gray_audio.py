"""Independent spectral check of real post-transition Rhythm PCM; no beauty verdict."""
import hashlib
import json
import wave
from pathlib import Path

import numpy as np
from analyze_loudness import measure

ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / '验证记录/P0/声音褪色'


def main():
    values = json.loads((ROOT / '数据/spec_values.json').read_text(encoding='utf-8'))
    rate = values['timing']['sample_rate']
    transition = round(values['gray_audio']['transition_bars'] * values['timing']['beats_per_bar'] * 60 * rate / values['timing']['bpm'])
    spectra = {}
    for mode in ['normal', 'gray']:
        path = EVIDENCE / f'{mode}_rhythm.f32'
        pcm = np.fromfile(path, dtype='<f4').reshape(-1, 2)
        assert len(pcm) > transition
        mono = pcm[transition:].astype(np.float64).mean(axis=1)
        power = np.abs(np.fft.rfft(mono * np.hanning(len(mono)))) ** 2
        frequencies = np.fft.rfftfreq(len(mono), 1 / rate)
        high = power[frequencies >= values['gray_audio']['lowpass_hz']].sum()
        images = power[frequencies >= 2 * values['gray_audio']['lowpass_hz']].sum()
        spectra[mode] = {'high_band_power': float(high), 'rms': float(np.sqrt(np.mean(mono**2))),
                         'above_double_cutoff_power': float(images),
                         'above_double_cutoff_fraction': float(images / power.sum()),
                         'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}
    attenuation = 10 * np.log10(spectra['gray']['high_band_power'] / spectra['normal']['high_band_power'])
    passed = np.isfinite(attenuation) and attenuation < 0
    report = {'rule_id': 'AUDIO-005', 'status': 'PASS' if passed else 'FAIL',
              'scope': 'Measured high-frequency attenuation; subjective beauty and masking PENDING',
              'sample_rate': rate, 'steady_start_frame': transition,
              'high_band_start_hz': values['gray_audio']['lowpass_hz'],
              'high_band_change_db': float(attenuation), 'spectra': spectra,
              'hold_image_note': 'Sample-and-hold adds images above double cutoff. This check does not assert every frequency band decreases.',
              'audio_spec_sha256': values['sources']['spec.audio.md']}
    city_measurements = {}
    for mode in ['normal_city', 'gray_city']:
        path = EVIDENCE / f'{mode}.f32'
        if not path.exists():
            continue
        result = measure(path, rate)
        pcm = np.fromfile(path, dtype='<f4').reshape(-1, 2)
        with wave.open(str(EVIDENCE / f'{mode}.wav'), 'wb') as output:
            output.setnchannels(2)
            output.setsampwidth(2)
            output.setframerate(rate)
            output.writeframes((np.clip(pcm, -1, 1) * 32767).astype('<i2').tobytes())
        city_measurements[mode] = result
        passed = passed and result['true_peak_dbtp'] <= -values['mixing']['peak_headroom_db']
    report['city_measurements'] = city_measurements
    report['status'] = 'PASS' if passed else 'FAIL'
    (EVIDENCE / 'spectrum.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(f'AUDIO-005 {report["status"]}: steady Rhythm high band {attenuation:.3f} dB')
    raise SystemExit(0 if passed else 1)


if __name__ == '__main__':
    main()
