"""Independently decode every adaptive layer and verify coverage and mix bounds."""
import argparse
import hashlib
import json
from pathlib import Path
import time
import numpy as np
import soundfile as sf

ROOT = Path(__file__).resolve().parents[1]


def path(value):
    assert value.startswith('res://')
    p = (ROOT/value[6:]).resolve()
    assert p.is_relative_to(ROOT/'数据/音乐资产')
    return p


def sha(p):
    with p.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read(p):
    return json.loads(p.read_text(encoding='utf-8-sig'))


def audit(catalog, library=None):
    began = time.monotonic()
    data = read(catalog)
    source_catalog = read(library or ROOT/'数据/音乐制作/音乐库目录_20261103.json')
    expected = {r['source_id'] for r in source_catalog['originals']}
    originals = list((ROOT/'数据/音乐资产/原曲/Lyria').rglob('*.mp3'))
    assert len(originals) == len(expected) and {sha(p) for p in originals} == expected
    assert {r['source_id'] for r in data['packs']} == expected and len(data['packs']) == len(expected)
    report = {'ok': True, 'catalog_sha256': sha(catalog), 'source_count': len(expected),
              'layer_count': 0, 'kinds': {}, 'packs': [], 'listening_approved': False}
    for item in data['packs']:
        manifest_path = path(item['manifest'])
        assert sha(manifest_path) == item['manifest_sha256']
        m = read(manifest_path)
        assert m['source_id'] == item['source_id'] and 1 <= len(m['layers']) <= 4
        assert m['sample_rate'] == 44100 and m['channels'] == 2
        assert not m['operations']['loop_enabled'] and m['operations']['same_source_only']
        assert not m['runtime_ready'] and not m['listening_approved']
        assert sha(path(m['timeline']['path'])) == m['timeline']['sha256']
        notes = read(path(m['timeline']['path']))
        assert path(notes['beat_candidates_csv']).is_file()
        if 'harmony' in notes:
            h = notes['harmony']
            assert notes['source_id'] == m['source_id'] and notes['source_master_sha256'] == m['full_mix']['sha256']
            assert notes['frames'] == m['frames'] and notes['sample_rate'] == 44100
            assert h['schema'] == 'measured_triad_timeline_v1' and h['step_seconds'] == 1.
            assert h['estimate_only'] and not h['human_confirmed']
            assert len(h['segments']) == int(np.ceil(m['frames']/44100.))
            for second, segment in enumerate(h['segments']):
                assert segment['start'] == second and segment['end'] == min(second+1, m['frames']/44100.)
                pcs = segment['pitch_classes']
                if pcs:
                    root = segment['root_pitch_class']; third = 4 if segment['quality'] == 'major' else 3
                    assert isinstance(root, int) and 0 <= root < 12 and segment['quality'] in ['major', 'minor']
                    assert pcs == sorted([root, (root+third) % 12, (root+7) % 12])
                    assert segment['fit_score'] >= .85 and segment['separation_margin'] >= .06 and segment['top_three_energy_fraction'] >= .55
        master_path = path(m['full_mix']['path'])
        assert sha(master_path) == m['full_mix']['sha256']
        streams = []
        for layer in m['layers']:
            p = path(layer['path'])
            assert sha(p) == layer['sha256']
            stream = sf.SoundFile(p)
            assert (stream.frames, stream.channels, stream.samplerate, stream.subtype) == (m['frames'], 2, 44100, 'PCM_16')
            streams.append(stream)
        assert m['layers'][0]['id'] == 'core'
        error = bound = master_energy = reduction_energy = 0.
        with sf.SoundFile(master_path) as master:
            for offset in range(0, m['frames'], 65536):
                frames = min(65536, m['frames']-offset)
                original = master.read(frames, dtype='float32', always_2d=True)*m['common_gain']
                parts = [s.read(frames, dtype='float32', always_2d=True) for s in streams]
                assert all(np.isfinite(p).all() for p in parts)
                bound = max(bound, float(np.max(sum(np.abs(p) for p in parts))))
                error = max(error, float(np.max(np.abs(sum(parts)-original))))
                reduction = sum((np.abs(p)*.65 for p in parts[1:]), np.zeros_like(original))
                master_energy += float(np.sum(original.astype('float64')**2))
                reduction_energy += float(np.sum(reduction.astype('float64')**2))
        for stream in streams:
            stream.close()
        ratio = (reduction_energy/max(master_energy, 1e-12))**.5
        assert error <= m['evidence']['quantization_limit']
        assert bound <= .8202 and ratio <= .1805
        if m['kind'] != 'music':
            assert len(m['layers']) == 1
        report['layer_count'] += len(streams)
        report['kinds'][m['kind']] = report['kinds'].get(m['kind'], 0)+1
        report['packs'].append({'source_id': m['source_id'], 'layers': len(streams),
            'full_endpoint_max_error': error, 'any_gain_peak_bound': bound,
            'reduction_rms_ratio_bound': ratio})
    report['seconds'] = round(time.monotonic()-began, 3)
    (catalog.parent/'audit.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({k:v for k,v in report.items() if k!='packs'}), flush=True)


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--catalog', type=Path, required=True)
    p.add_argument('--library', type=Path)
    args = p.parse_args()
    audit(args.catalog.resolve(), args.library)
