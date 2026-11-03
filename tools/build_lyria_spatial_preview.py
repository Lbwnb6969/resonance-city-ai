"""Build a reversible two-layer spatial audition from one curated source."""
import argparse
import hashlib
import json
from pathlib import Path
import numpy as np
import soundfile as sf


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def build(curation, output):
    if output.exists():
        raise ValueError('Use a new version directory')
    report = json.loads(curation.read_text(encoding='utf-8'))
    song = report['songs'][0]
    group_name = 'woodwind_plus_remaining_six'
    kept = song['groups'][group_name]['kept']
    # This is a low-depth colour candidate, not a claimed instrument or lead.
    candidates = {k:v for k,v in kept.items() if v['measurement']['relative_rms_db'] > -20}
    key = min(candidates, key=lambda k: candidates[k]['measurement']['crest_db'])
    selected = kept[key]
    if sha(selected['path']) != selected['sha256'] or sha(song['full_mix']['path']) != song['full_mix']['sha256']:
        raise ValueError('Source signature changed')
    master, rate = sf.read(song['full_mix']['path'], dtype='float32', always_2d=True)
    texture, _ = sf.read(selected['path'], dtype='float32', always_2d=True)
    color = texture*.35
    core = master-color
    peak = max(float(np.max(np.abs(core+color*.4))), float(np.max(np.abs(master))))
    gain = min(1., .75/max(peak, 1e-12))
    output.mkdir(parents=True)
    stems = []
    for name, pcm, role, layer in [('core',core,'foundation',1),('color',color,'answer',2)]:
        path = output/(name+'.wav')
        sf.write(path, pcm*gain, rate, subtype='PCM_16')
        stems.append({'id': name, 'path': str(path), 'sha256': sha(path), 'role': role, 'layer': layer})
    a, _ = sf.read(stems[0]['path'], dtype='float32', always_2d=True)
    b, _ = sf.read(stems[1]['path'], dtype='float32', always_2d=True)
    error = float(np.max(np.abs(a+b-master*gain)))
    if error > 2.1/32768:
        raise ValueError('Reconstruction exceeds shared PCM16 quantization error')
    evidence = {'full_endpoint_max_error': error, 'open_endpoint_peak': float(np.max(np.abs(a+b*.4))),
                'enclosed_endpoint_peak': float(np.max(np.abs(a+b))), 'same_source': True,
                'selected_color_candidate': key, 'selected_color_sha256': selected['sha256'],
                'semantic_role_listening_confirmed': False}
    data = {'schema': 'lyria_spatial_preview_v1', 'source_name': song['name'],
            'source_sha256': song['source_sha256'], 'frames': len(master), 'sample_rate': rate,
            'channels': 2, 'full_mix': song['full_mix'], 'stems': stems, 'common_gain': gain,
            'color_gain_range': [.4, 1.], 'loop_enabled': False,
            'curation_sha256': sha(curation), 'source_group': group_name,
            'runtime_ready': False, 'listening_approved': False, 'evidence': evidence}
    (output/'bundle_manifest.json').write_text(json.dumps(data, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps(evidence), flush=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--curation', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    build(args.curation.resolve(), args.output.resolve())
