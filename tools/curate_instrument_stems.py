"""Measure actual PCM; exclude near-empty stems without deleting source artifacts."""
import argparse
import hashlib
import json
from pathlib import Path
import time
import numpy as np
import soundfile as sf


def digest(path):
    with open(path, 'rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def db(value):
    return float(20*np.log10(max(float(value), 1e-12)))


def windows(pcm, rate):
    return np.array([np.sqrt(np.mean(pcm[i:i+rate]**2, dtype=np.float64))
                     for i in range(0, len(pcm), rate)])


def measure(pcm, master, rate):
    energy = float(np.sqrt(np.mean(pcm**2, dtype=np.float64)))
    master_energy = float(np.sqrt(np.mean(master**2, dtype=np.float64)))
    local, reference = windows(pcm, rate), windows(master, rate)
    # A fading master must not amplify a few quantization/noise samples into
    # an important "local contribution". Still protect short strong entries.
    ratios = local/np.maximum(reference, master_energy*.1)
    return {'rms_dbfs': db(energy), 'relative_rms_db': db(energy/master_energy),
            'peak_dbfs': db(np.max(np.abs(pcm))),
            'max_active_second_relative_db': db(np.max(ratios)) if len(ratios) else -240.,
            'active_seconds': int(np.sum(local > max(10**(-60/20), master_energy*.01))),
            'seconds': len(local), 'crest_db': db(np.max(np.abs(pcm))/max(energy, 1e-12))}


def classify(m):
    if m['peak_dbfs'] <= db(1/32768):
        return 'exclude_silent'
    if m['relative_rms_db'] <= -36 and m['max_active_second_relative_db'] <= -24 and m['peak_dbfs'] <= -28:
        return 'exclude_negligible'
    return 'keep'


def curate(root, out):
    if out.exists():
        raise ValueError('Use a new output directory; historical reports stay immutable')
    out.mkdir(parents=True)
    began = time.monotonic()
    batch = json.loads((root/'batch_report.json').read_text(encoding='utf-8'))
    result = {'schema': 'instrument_curation_v1', 'batch_root': str(root), 'songs': [],
              'policy': {'relative_rms_db': -36, 'max_active_second_relative_db': -24,
                         'peak_dbfs': -28, 'window_reference_floor_ratio': .1,
                         'union_rms_limit_db': -34, 'union_local_limit_db': -20},
              'listening_approved': False, 'runtime_ready': False}
    totals = {'kept': 0, 'excluded': 0, 'silent': 0, 'protected_sparse_or_combined': 0}
    for song in batch['songs']:
        delivery = song['delivery']
        master_path = Path(delivery['full_mix']['path'])
        if digest(master_path) != delivery['full_mix']['sha256']:
            raise ValueError('Master hash mismatch')
        master, rate = sf.read(master_path, dtype='float32', always_2d=True)
        row = {'name': song['name'], 'directory': song['directory'], 'source_sha256': song['source_sha256'],
               'frames': len(master), 'sample_rate': rate, 'full_mix': delivery['full_mix'], 'groups': {}}
        for name, group in delivery['groups'].items():
            kept, excluded, decoded = {}, {}, {}
            for key, item in group['stems'].items():
                path = Path(item['path'])
                if digest(path) != item['sha256']:
                    raise ValueError('Stem hash mismatch')
                pcm, sr = sf.read(path, dtype='float32', always_2d=True)
                if pcm.shape != master.shape or sr != rate or not np.isfinite(pcm).all():
                    raise ValueError('Stem format/alignment mismatch')
                stats = measure(pcm, master, rate)
                status = classify(stats)
                record = {**item, 'measurement': stats, 'decision': status}
                (kept if status == 'keep' else excluded)[key] = record
                decoded[key] = pcm
            # Protect cumulative weak material and rare passages before exclusion.
            while excluded:
                removed = sum((decoded[k] for k in excluded), np.zeros_like(master))
                missing = measure(removed, master, rate)
                if missing['relative_rms_db'] <= -34 and missing['max_active_second_relative_db'] <= -20:
                    break
                key = max(excluded, key=lambda k: excluded[k]['measurement']['relative_rms_db'])
                kept[key] = excluded.pop(key)
                kept[key]['decision'] = 'keep_combined_contribution'
                totals['protected_sparse_or_combined'] += 1
            removed = sum((decoded[k] for k in excluded), np.zeros_like(master))
            retained = sum((decoded[k] for k in kept), np.zeros_like(master))
            bound = float(np.max(sum((np.abs(decoded[k]) for k in kept), np.zeros_like(master))))
            row['groups'][name] = {'kept': kept, 'excluded': excluded,
                'removed_contribution': measure(removed, master, rate),
                'sum_minus_master_rms': float(np.sqrt(np.mean((retained-master)**2))),
                'safe_mix_gain': min(1., .89/max(bound, 1e-12)),
                'safe_mix_gain_contract': 'All retained per-stem gains between 0 and 1; common gain only'}
            totals['kept'] += len(kept)
            totals['excluded'] += len(excluded)
            totals['silent'] += sum(i['decision'] == 'exclude_silent' for i in excluded.values())
            del decoded
        result['songs'].append(row)
        print(song['name'], {g: len(v['kept']) for g, v in row['groups'].items()}, flush=True)
    result['totals'] = totals
    result['elapsed_seconds'] = round(time.monotonic()-began, 3)
    result['source_archive'] = 'Original batch retained at original paths; excluded stems absent from active lists'
    (out/'curation.json').write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps(totals), flush=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--batch-root', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    curate(args.batch_root.resolve(), args.output.resolve())
