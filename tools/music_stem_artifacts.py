"""Preserve separator output and explicitly repair a shared short model tail."""
import copy
from pathlib import Path

import numpy as np
import soundfile as sf

from prepare_lyria_batch import load, save, sha


def finalize(directory):
    directory = Path(directory)
    raw_path = directory/'report.json'
    report = load(raw_path)
    if report['technical_ok']:
        report['working_master_path'] = str(directory/'separation_input.wav')
        return raw_path, report
    fixed_path = directory/'aligned/report.json'
    if fixed_path.exists():
        return fixed_path, load(fixed_path)
    outputs = report['outputs']
    lengths = {item['frames'] for item in outputs}
    if (report.get('error') or not report['input_unchanged'] or
            report['model'] != '17_HP-Wind_Inst-UVR.pth' or len(lengths) != 1):
        raise ValueError(f'Unrepairable model output: {raw_path}')
    missing = report['frames'] - next(iter(lengths))
    if not 0 < missing < 1024:
        raise ValueError(f'Unexpected model tail discrepancy: {missing}')
    master, rate = sf.read(directory/'separation_input.wav', dtype='float32', always_2d=True)
    fixed = directory/'aligned'
    fixed.mkdir()
    result = copy.deepcopy(report)
    result['raw_report'] = {'path': str(raw_path), 'sha256': sha(raw_path)}
    result['working_master_path'] = str(directory/'separation_input.wav')
    result['alignment'] = {'method': 'same_zero_padding_at_end_for_all_stems',
        'frames_added_per_stem': missing, 'original_start_preserved': True,
        'omitted_master_tail_rms': float(np.sqrt(np.mean(master[-missing:]**2)))}
    summed = np.zeros_like(master)
    result['outputs'] = []
    for item in outputs:
        raw = Path(item['path'])
        if sha(raw) != item['sha256']:
            raise ValueError('Raw output changed')
        pcm, sr = sf.read(raw, dtype='float32', always_2d=True)
        if sr != rate or pcm.shape != (len(master)-missing, 2) or not np.isfinite(pcm).all():
            raise ValueError('Invalid raw audio')
        pcm = np.pad(pcm, ((0, missing), (0, 0)))
        path = fixed/raw.name
        sf.write(path, pcm, rate, subtype='FLOAT')
        summed += pcm
        result['outputs'].append(dict(item, path=str(path), raw_path=str(raw),
            raw_sha256=item['sha256'], sha256=sha(path), frames=len(pcm)))
    result['sum_minus_input_rms'] = float(np.sqrt(np.mean((summed-master)**2)))
    result['technical_ok'] = True
    save(fixed_path, result)
    return fixed_path, result
