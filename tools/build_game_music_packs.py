"""Render conservative same-source adaptive packs for every curated Lyria source."""
import argparse
import hashlib
import json
from pathlib import Path
import time
import numpy as np
import soundfile as sf
from music_adaptive_features import describe, choose, rms, timeline, harmony

ROOT = Path(__file__).resolve().parents[1]
LIB = ROOT/'数据/音乐资产'
META = ROOT/'数据/音乐制作'
MIN_GAIN = .35


def sha(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read(path):
    return json.loads(path.read_text(encoding='utf-8-sig'))


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')


def local(path):
    return 'res://'+Path(path).resolve().relative_to(ROOT).as_posix()


def pcm(item):
    path = item['path']
    if sha(path) != item['sha256']:
        raise ValueError('Audio source signature changed')
    data, rate = sf.read(path, dtype='float32', always_2d=True)
    if rate != 44100 or data.shape[1] != 2 or not np.isfinite(data).all():
        raise ValueError('Invalid source PCM')
    return data


def build_one(song, metadata, out):
    out.mkdir()
    analysis_path = ROOT/metadata['analysis']['path']
    if sha(analysis_path) != metadata['analysis']['sha256'] or read(analysis_path)['source_sha256'] != song['source_sha256']:
        raise ValueError('Analysis source/signature mismatch')
    master = pcm(song['full_mix'])
    rate = song['sample_rate']
    # These filename-derived intents only restrict use; they never authorize it.
    name = song['name'].lower()
    kind = 'music'
    if 'instrument sampling session' in name:
        kind = 'note_study_pending_pitch_and_cuts'
    if 'soothing brook field recording' in name or 'mediterranean olive grove soundscape' in name:
        kind = 'ambience_pending_loop_and_listening'
    group_name = min(song['groups'], key=lambda k: song['groups'][k]['sum_minus_master_rms'])
    group = song['groups'][group_name]
    candidates = {}
    if kind == 'music':
        for key, item in group['kept'].items():
            if item['measurement']['relative_rms_db'] < -24:
                continue
            data = pcm(item)
            candidates[key] = {'item': item, 'features': describe(data, rate)}
    chosen = choose(candidates)
    colors, descriptors = {}, {}
    master_rms = rms(master)
    for role, (key, candidate) in chosen.items():
        data = pcm(candidate['item'])
        scale = min(.35, master_rms*.14/max(rms(data), 1e-12))
        colors[role] = data*scale
        descriptors[role] = {'source_slot': key, 'source_sha256': candidate['item']['sha256'],
                             'source_scale_down': scale, 'features': candidate['features'],
                             'role_listening_confirmed': False}
    # Bound any subset of reductions, including cancellation between sources.
    reduction_bound = sum((np.abs(v)*(1-MIN_GAIN) for v in colors.values()), np.zeros_like(master))
    depth = min(1., master_rms*.18/max(rms(reduction_bound), 1e-12))
    colors = {k: v*depth for k, v in colors.items()}
    core = master-sum(colors.values(), np.zeros_like(master))
    bound = np.abs(core)+sum((np.abs(v) for v in colors.values()), np.zeros_like(master))
    gain = min(1., .82/max(float(np.max(bound)), 1e-12))
    layers = []
    for role, data in {'core': core, **colors}.items():
        path = out/(role+'.wav')
        sf.write(path, data*gain, rate, subtype='PCM_16')
        layers.append({'id': role, 'path': local(path), 'sha256': sha(path),
                       'min_gain': 1. if role=='core' else MIN_GAIN, 'max_gain': 1.})
    decoded = {row['id']: sf.read(out/(row['id']+'.wav'), dtype='float32', always_2d=True)[0] for row in layers}
    endpoint = sum(decoded.values())
    error = float(np.max(np.abs(endpoint-master*gain)))
    quantization_limit = (len(layers)+1)/32768
    if error>quantization_limit:
        raise ValueError('Full endpoint reconstruction failed')
    measured_bound = float(np.max(sum((np.abs(v) for v in decoded.values()))))
    notes = timeline(master, rate)
    notes['analysis'] = metadata['analysis']
    analysis_path = ROOT/metadata['analysis']['path']
    notes['beat_candidates_csv'] = local(analysis_path.parent/'beats.csv')
    save(out/'timeline.json', notes)
    presets = {'original': {k: 1. for k in decoded},
               'open': {k: 1. if k=='core' else .35 for k in decoded},
               'courtyard': {k: 1. if k in ['core','body'] else .45 for k in decoded},
               'flowing': {k: 1. if k in ['core','motion'] else .45 for k in decoded},
               'handcrafted': {k: 1. if k in ['core','detail'] else .45 for k in decoded}}
    manifest = {'schema': 'city_adaptive_music_v1', 'source_id': song['source_sha256'],
        'name': song['name'], 'kind': kind, 'kind_evidence': 'filename intent; human confirmation pending',
        'frames': len(master), 'sample_rate': rate, 'channels': 2,
        'full_mix': {**song['full_mix'], 'path': local(song['full_mix']['path'])},
        'common_gain': gain, 'source_group': group_name,
        'group_selection': 'minimum measured reconstruction error; not a listening preference',
        'layers': layers, 'descriptors': descriptors, 'color_depth_scale': depth,
        'presets': presets, 'controls': {'warm': 'body', 'flow': 'motion', 'craft': 'detail'},
        'timeline': {'path': local(out/'timeline.json'), 'sha256': sha(out/'timeline.json')},
        'operations': {'gain_slew_seconds': 3.2, 'source_loss_tail_seconds': 6.,
            'same_source_only': True, 'shared_clock_required': True, 'pitch_shift_allowed': False,
            'time_stretch_allowed': False, 'automatic_cuts_allowed': False, 'loop_enabled': False},
        'evidence': {'full_endpoint_max_error': error, 'quantization_limit': quantization_limit,
            'all_gain_combinations_peak_bound': measured_bound,
            'maximum_reduction_rms_ratio_bound': rms(reduction_bound)*depth/max(master_rms, 1e-12),
            'semantic_roles_confirmed': False},
        'runtime_ready': False, 'listening_approved': False}
    save(out/'bundle.json', manifest)
    return {'source_id': song['source_sha256'], 'name': song['name'], 'kind': kind,
            'manifest': local(out/'bundle.json'), 'manifest_sha256': sha(out/'bundle.json'),
            'layer_count': len(layers), 'evidence': manifest['evidence']}


def build(output, curation=None, library=None):
    output.mkdir(parents=True, exist_ok=False)
    began = time.monotonic()
    if curation is None:
        pointer = read(LIB/'active_curation.json')
        curation = Path(pointer['path'])
        if sha(curation) != pointer['sha256']:
            raise ValueError('Active curation changed')
    selection = read(curation)
    metadata = {r['source_id']: r for r in read(library or META/'音乐库目录_20261103.json')['originals']}
    rows = []
    for song in selection['songs']:
        row = build_one(song, metadata[song['source_sha256']], output/song['source_sha256'][:16])
        rows.append(row)
        print(f'{len(rows)}/{len(selection["songs"])} {row["name"]}: {row["layer_count"]} layers', flush=True)
        save(output/'progress.json', {'completed': rows, 'expected': len(selection['songs'])})
    save(output/'catalog.json', {'schema': 'city_adaptive_catalog_v1', 'packs': rows,
        'curation_sha256': sha(curation), 'seconds': round(time.monotonic()-began, 3),
        'runtime_ready': False, 'listening_approved': False})
    print('COMPLETE', len(rows), flush=True)


def annotate_harmony(catalog, output):
    output.mkdir(parents=True, exist_ok=False)
    began = time.monotonic()
    data = read(catalog)
    rows = []
    for item in data['packs']:
        if item['kind'] != 'music':
            rows.append(item)
            continue
        path = ROOT/item['manifest'][6:]
        if sha(path) != item['manifest_sha256']:
            raise ValueError('Parent manifest changed')
        manifest = read(path)
        source = {**manifest['full_mix'], 'path': ROOT/manifest['full_mix']['path'][6:]}
        master = pcm(source)
        previous_timeline = ROOT/manifest['timeline']['path'][6:]
        if sha(previous_timeline) != manifest['timeline']['sha256']:
            raise ValueError('Parent timeline changed')
        notes = read(previous_timeline)
        notes.update(source_id=item['source_id'], source_master_sha256=source['sha256'],
                     frames=len(master), sample_rate=44100, harmony=harmony(master, 44100))
        folder = output/item['source_id'][:16]; folder.mkdir()
        save(folder/'timeline.json', notes)
        manifest['timeline'] = {'path': local(folder/'timeline.json'), 'sha256': sha(folder/'timeline.json')}
        save(folder/'bundle.json', manifest)
        pitched = sum(bool(s['pitch_classes']) for s in notes['harmony']['segments'])
        row = {**item, 'manifest': local(folder/'bundle.json'), 'manifest_sha256': sha(folder/'bundle.json'),
               'harmony_estimate': {'pitched_seconds': pitched, 'total_seconds': len(notes['harmony']['segments']),
                                    'human_confirmed': False}}
        rows.append(row)
        print(f'{len(rows)}/{len(data["packs"])} {item["name"]}: {pitched} measured tonal seconds', flush=True)
    save(output/'catalog.json', {**data, 'packs': rows, 'parent_catalog': local(catalog),
         'parent_catalog_sha256': sha(catalog), 'harmonic_analysis_seconds': round(time.monotonic()-began, 3)})


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--curation', type=Path)
    parser.add_argument('--library', type=Path)
    parser.add_argument('--annotate-harmony', action='store_true')
    parser.add_argument('--catalog', type=Path)
    args = parser.parse_args()
    if args.annotate_harmony:
        if not args.catalog:parser.error('--annotate-harmony requires --catalog')
        annotate_harmony(args.catalog.resolve(), args.output.resolve())
    else:
        build(args.output.resolve(), args.curation, args.library)
