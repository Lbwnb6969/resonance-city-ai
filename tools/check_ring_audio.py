"""Validate the actual rendered member PCM and fixed-gain full mixes."""
from pathlib import Path
import json
import subprocess
import numpy as np
from analyze_loudness import measure, ffmpeg_executable

ROOT = Path(__file__).resolve().parents[1]
DIR = ROOT / '验证记录/Demo/CITY-005_第57轮'
RATE = 22050


def main():
    evidence = json.loads((ROOT/'验证记录/P0/CITY-005_ring_round57.json').read_text(encoding='utf-8'))
    assert evidence['status'] == 'PASS'
    notes = evidence['details']['notes']
    report = {'status': 'PASS', 'rate': RATE, 'sequence': [], 'mixes': {},
              'scope': 'Actual isolated member Rhythm PCM; unchanged initial-nine gain, controlled 27 with two rings. Independent input true peak and protected-drone window ratio; no human audibility claim.'}
    sequence = np.zeros((RATE*4, 2), dtype=np.float64)
    for index, midi in enumerate(notes):
        pcm = np.fromfile(DIR/f'member_{index}.f32', dtype='<f4').reshape(-1, 2).astype(np.float64)
        assert len(pcm) == RATE*4
        onset = round(index*RATE*.5)
        tail = int(np.ceil(RATE*.25))
        active = np.flatnonzero(np.any(pcm != 0, axis=1))
        assert active.size and active[0] > onset and active[-1] < onset+tail, index
        quiet = pcm.copy()
        quiet[onset:onset+tail] = 0
        assert not np.any(quiet), index
        mono = pcm[onset:onset+tail].sum(axis=1)
        spectrum = np.abs(np.fft.rfft(mono, n=262144))
        frequencies = np.fft.rfftfreq(262144, 1/RATE)
        spectrum[frequencies < 100] = 0
        hz = float(frequencies[np.argmax(spectrum)])
        measured_midi = float(69+12*np.log2(hz/440))
        assert abs(measured_midi-(midi+12)) < .07, (index, hz, measured_midi, midi+12)
        report['sequence'].append({'member': index, 'onset_frame': int(active[0]), 'last_frame': int(active[-1]),
                                   'source_midi': midi, 'expected_rhythm_midi': midi+12,
                                   'fft_fundamental_hz': hz, 'measured_midi': measured_midi})
        sequence += pcm
    (DIR/'轮唱独立律动.f32').write_bytes(sequence.astype('<f4').tobytes())
    for name in ['steady27', 'entry_exit27']:
        path = DIR/(name+'.f32')
        item = measure(path, RATE)
        mix = np.fromfile(path, dtype='<f4').reshape(-1, 2).astype(np.float64)
        drone = np.fromfile(DIR/(name+'__drone.f32'), dtype='<f4').reshape(-1, 2).astype(np.float64)
        assert mix.shape == drone.shape and len(mix) == RATE*16
        width, hop = round(RATE*.4), round(RATE*.01)
        accum = [np.r_[0., np.cumsum(np.sum(track**2, axis=1))] for track in [mix, drone]]
        starts = np.arange(0, len(mix)-width+1, hop)
        ratios = np.sqrt((accum[1][starts+width]-accum[1][starts])/(accum[0][starts+width]-accum[0][starts]))
        item.update(minimum_drone_rms_ratio=float(ratios.min()), worst_window_seconds=float(starts[ratios.argmin()]/RATE),
                    windows=len(starts), window_seconds=.4, hop_seconds=hop/RATE)
        assert item['true_peak_dbtp'] <= -3 and item['minimum_drone_rms_ratio'] >= .25, item
        report['mixes'][name] = item
        print(name, item['true_peak_dbtp'], 'dBTP', item['minimum_drone_rms_ratio'], 'minimum drone ratio')
    for name in ['steady27', 'entry_exit27', '轮唱独立律动']:
        subprocess.run([ffmpeg_executable(), '-hide_banner', '-loglevel', 'error', '-y', '-f', 'f32le',
                        '-ar', str(RATE), '-ac', '2', '-i', str(DIR/(name+'.f32')), '-c:a', 'pcm_s16le',
                        str(DIR/(name+'.wav'))], check=True)
    (DIR/'轮唱音序与混音测量.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print('RING_PCM PASS: eight actual onsets and pitches, two fixed-gain mixes')


if __name__ == '__main__':
    main()
