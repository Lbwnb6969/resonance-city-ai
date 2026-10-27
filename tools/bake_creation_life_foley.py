"""Adapt small local reference transients and synthesize quiet ceramic contacts."""
from pathlib import Path
import hashlib
import json

import numpy as np
from scipy.signal import butter, resample_poly, sosfilt
import soundfile as sf

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / '参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-audio-recovered'
OUT = ROOT / '资源/生活声'
RATE = 22050
RECIPES = [
    ('step_a', 'dlc/agriculture/audio/764675077', 3908144014, .28, .14, 3500),
    ('step_b', 'dlc/agriculture/audio/1020841287', 3908144014, .24, .14, 3500),
    ('wood_a', 'audio/core/155082037', 1044131224, .22, .12, 4000),
    ('wood_b', 'audio/core/880813907', 1044131224, .22, .12, 4000),
    ('bread', 'audio/core/794140254', 4290601322, .48, .11, 3000),
]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def save(name, audio, target_peak):
    audio = np.asarray(audio, dtype=np.float64)
    audio -= np.mean(audio)
    edge = min(int(.008*RATE), len(audio)//3)
    audio[:edge] *= np.linspace(0, 1, edge)
    audio[-edge:] *= np.linspace(1, 0, edge)
    audio *= target_peak / np.max(np.abs(audio))
    path = OUT / f'{name}.wav'
    sf.write(path, audio, RATE, subtype='PCM_16')
    data, sr = sf.read(path)
    return dict(file=path.relative_to(ROOT).as_posix(), sha256=digest(path), rate=sr,
                seconds=len(data)/sr, peak=float(np.max(np.abs(data))))


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    paths = json.loads((SOURCE / 'event-action-sound-media.json').read_text(encoding='utf-8'))['paths']
    rows = []
    for name, relative, event, duration, peak, cutoff in RECIPES:
        original = SOURCE / 'decoded' / (relative+'.wav')
        media = int(Path(relative).name)
        if not any(row['event_id'] == event and row.get('media_id') == media for row in paths):
            raise ValueError(f'Event/media mapping changed: {name}')
        audio, rate = sf.read(original, always_2d=True)
        audio = np.mean(audio, axis=1)
        audio = resample_poly(audio, RATE, rate)
        audio = sosfilt(butter(3, cutoff, fs=RATE, output='sos'), audio)
        onset = np.flatnonzero(np.abs(audio) > np.max(np.abs(audio))*.015)[0]
        start = max(0, onset-int(.002*RATE))
        audio = audio[start:start+int(duration*RATE)]
        row = save(name, audio, peak)
        row.update(source=original.relative_to(ROOT).as_posix(), source_sha256=digest(original),
                   source_event_id=event, source_media_id=media,
                   adaptation='mono downmix, 22.05k resample, lowpass, leading trim, short fade and peak reduction')
        rows.append(row)
    for index in range(2):
        t = np.arange(int(.30*RATE))/RATE
        audio = sum(weight*np.sin(2*np.pi*frequency*(1+index*.025)*t)*np.exp(-t/decay)
                    for frequency, weight, decay in [(1740, .65, .065), (2920, .30, .04), (4310, .16, .025)])
        row = save(f'cup_{index}', audio, .10)
        row.update(source='original procedural ceramic modal contact', source_event_id=None,
                   adaptation='three damped inharmonic modes; no reference recording')
        rows.append(row)
    (OUT / '来源与处理.json').write_text(json.dumps(dict(schema=1, rate=RATE, assets=rows), ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(assets=len(rows), bytes=sum((ROOT/row['file']).stat().st_size for row in rows),
                         maximum_peak=max(row['peak'] for row in rows)), ensure_ascii=False))


if __name__ == '__main__':
    main()
