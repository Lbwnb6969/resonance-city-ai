"""Inspect raw chronological P0..P5 auditions; this is not a listening verdict."""
from pathlib import Path
import argparse
import hashlib
import json
import math
import struct
import wave


def audit(directory):
    report = json.loads((directory / 'report.json').read_text(encoding='utf-8'))
    if not report.get('ok') or not report.get('sequence_hashes'):
        raise ValueError('Successful P5 production-render report required')
    expected = {r['id'] + '.wav' for r in report['performances']}
    expected.update(key.replace('/', '_') + '_144s.wav' for key in report['sequence_hashes'])
    if {p.name for p in directory.glob('*.wav')} != expected:
        raise ValueError('Audition file set differs from production-render report')
    rows = []
    for name in sorted(expected):
        path = directory / name
        with wave.open(str(path)) as stream:
            length = 144 if name.endswith('_144s.wav') else 24
            if (stream.getnchannels(), stream.getsampwidth(), stream.getframerate(), stream.getnframes()) != (1, 2, 22050, length * 22050):
                raise ValueError('Unexpected PCM format/duration: ' + name)
            pcm = stream.readframes(stream.getnframes())
        samples = struct.unpack('<' + 'h' * (len(pcm) // 2), pcm)
        peak = max(abs(s) for s in samples) / 32768
        clipped = sum(abs(s) >= 32767 for s in samples)
        if clipped or peak == 0:
            raise ValueError('Clipped or silent mixed audition: ' + name)
        row = dict(file=name, seconds=length, peak=peak, clipped=clipped,
                   pcm_sha256=hashlib.sha256(pcm).hexdigest())
        if length == 144:
            key = name.removesuffix('_144s.wav').rsplit('_', 1)
            if row['pcm_sha256'] != report['sequence_hashes']['/'.join(key)]:
                raise ValueError('Sequence PCM no longer matches signed render report')
            parts = []
            for section in range(6):
                with wave.open(str(directory / (key[0] + '_P' + str(section) + '_' + key[1] + '.wav'))) as part:
                    parts.append(part.readframes(part.getnframes()))
            if pcm != b''.join(parts):
                raise ValueError('Sequence differs from chronological section PCM')
            row['loop_seam'] = dict(adjacent_sample_step=abs(samples[0]-samples[-1])/32768,
                tail_rms=math.sqrt(sum(s*s for s in samples[-2205:])/2205)/32768,
                head_rms=math.sqrt(sum(s*s for s in samples[:2205])/2205)/32768)
            row['joins'] = []
            for second in (24, 48, 72, 96, 120):
                at = second * 22050
                window = samples[at - 2205:at + 2205]
                row['joins'].append(dict(second=second,
                    adjacent_sample_step=abs(samples[at] - samples[at - 1]) / 32768,
                    window_rms=math.sqrt(sum(s * s for s in window) / len(window)) / 32768))
        rows.append(row)
    return dict(ok=True, files=rows, listening_pass=False,
                scope='Raw mono production synthesis and chronological concatenation; no automatic runtime sequence or physical output claim')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    args = parser.parse_args()
    result = audit(args.directory)
    (args.directory / 'pcm_audit.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print('COMFORT_P5_PCM PASS:', len(result['files']), 'raw WAVs; no listening verdict')
