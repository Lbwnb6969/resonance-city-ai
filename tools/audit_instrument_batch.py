#!/usr/bin/env python3
"""Independently read exported PCM and source hashes; never approve listening."""
import argparse
from pathlib import Path

import numpy as np
import soundfile as sf

from prepare_lyria_batch import load, save, sha


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--batch-root', type=Path, required=True)
    args = parser.parse_args()
    root = args.batch_root
    batch = load(root/'batch_report.json')
    if not batch.get('finished_at'):
        raise ValueError('Batch still running')
    if {p.name for p in Path(batch['source_dir']).glob('*.mp3')} != {s['name'] for s in batch['songs']}:
        raise ValueError('Source inventory differs from processed batch')
    audit = {'technical_ok': True, 'runtime_ready': False, 'listening_approved': False,
             'songs': [], 'audio_files': 0, 'originals_unchanged': True}
    for song in batch['songs']:
        if song['status'] != 'technical_ready_pending_listening':
            raise ValueError(f'Failed song: {song["name"]}')
        original = Path(batch['source_dir'])/song['name']
        if sha(original) != song['source_sha256']:
            raise ValueError('Original hash changed')
        delivery = load(Path(song['directory'])/'delivery.json')
        record = {'name': song['name'], 'source_sha256': song['source_sha256'],
                  'frames': delivery['frames'], 'duration_seconds': delivery['frames']/44100,
                  'delivery_gain': delivery['delivery_gain'], 'groups': {}}
        all_items = [delivery['full_mix']]
        for group in delivery['groups'].values():
            if len(group['stems']) > 12:
                raise ValueError('Long-track budget exceeded')
            all_items += list(group['stems'].values())+[group['sum']]
        for item in all_items:
            path = Path(item['path'])
            if sha(path) != item['sha256']:
                raise ValueError(f'Output hash mismatch: {path}')
            with sf.SoundFile(path) as stream:
                if (stream.frames,stream.samplerate,stream.channels,stream.subtype) != (delivery['frames'],44100,2,'PCM_16'):
                    raise ValueError(f'Output format mismatch: {path}')
                for block in stream.blocks(blocksize=65536,dtype='float32',always_2d=True):
                    if not np.isfinite(block).all() or np.max(np.abs(block)) >= 1:
                        raise ValueError(f'Nonfinite/clipped audio: {path}')
            audit['audio_files'] += 1
        master, _ = sf.read(delivery['full_mix']['path'],dtype='float32',always_2d=True)
        for key, group in delivery['groups'].items():
            summed = np.zeros_like(master)
            for item in group['stems'].values():
                pcm, _ = sf.read(item['path'],dtype='float32',always_2d=True)
                summed += pcm
            measured = float(np.sqrt(np.mean((summed-master)**2)))
            expected = group['sum_minus_master_rms']*delivery['delivery_gain']
            if abs(measured-expected) > 2e-4:
                raise ValueError('Reconstruction measurement does not match report')
            record['groups'][key] = {'delivered_sum_minus_master_rms': measured,
                'stem_count': len(group['stems']),
                'relative_energy_db': {name:item['rms_relative_to_master_db'] for name,item in group['stems'].items()}}
        record['first_comparison_by_reconstruction_error'] = min(record['groups'], key=lambda k:record['groups'][k]['delivered_sum_minus_master_rms'])
        record['ranking_is_listening_approval'] = False
        audit['songs'].append(record)
    save(root/'audit.json', audit)
    print(f'PASS: {len(audit["songs"])} sources unchanged; {audit["audio_files"]} audio files verified')


if __name__ == '__main__':
    main()
