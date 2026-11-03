"""Independent source/partition/headroom audit of the active stem selection."""
import argparse
import hashlib
import json
from pathlib import Path
import numpy as np
import soundfile as sf


def sha(path):
    with open(path, 'rb') as handle:
        return hashlib.file_digest(handle, 'sha256').hexdigest()


def audit(path):
    data = json.loads(path.read_text(encoding='utf-8'))
    batch = json.loads((Path(data['batch_root'])/'batch_report.json').read_text(encoding='utf-8'))
    originals = {s['name']: s for s in batch['songs']}
    result = {'ok': True, 'curation_sha256': sha(path), 'sources_unchanged': 0,
              'stem_hashes_verified': 0, 'excluded_files_preserved': 0, 'groups': []}
    for song in data['songs']:
        original = originals[song['name']]
        source = Path(original['source_path']) if 'source_path' in original else Path(batch['source_dir'])/song['name']
        assert sha(source) == song['source_sha256'] == original['source_sha256']
        assert sha(song['full_mix']['path']) == song['full_mix']['sha256'] == original['delivery']['full_mix']['sha256']
        result['sources_unchanged'] += 1
        for key, group in song['groups'].items():
            expected = original['delivery']['groups'][key]['stems']
            assert set(group['kept']).isdisjoint(group['excluded'])
            assert set(group['kept']) | set(group['excluded']) == set(expected)
            for name, item in {**group['kept'], **group['excluded']}.items():
                assert sha(item['path']) == item['sha256'] == expected[name]['sha256']
                result['stem_hashes_verified'] += 1
            streams = [sf.SoundFile(item['path']) for item in group['kept'].values()]
            bound = 0.
            for offset in range(0, song['frames'], 65536):
                pcm = [stream.read(min(65536, song['frames']-offset), dtype='float32', always_2d=True) for stream in streams]
                bound = max(bound, float(np.max(np.sum(np.abs(pcm), axis=0))))
            for stream in streams:
                assert (stream.frames,stream.samplerate,stream.channels) == (song['frames'],44100,2)
                stream.close()
            assert bound*group['safe_mix_gain'] <= .890001
            assert group['removed_contribution']['relative_rms_db'] <= -34
            assert group['removed_contribution']['max_active_second_relative_db'] <= -20
            result['excluded_files_preserved'] += len(group['excluded'])
            result['groups'].append({'song':song['name'],'group':key,
                                     'retained':len(streams),'worst_case_peak_bound':bound*group['safe_mix_gain']})
    (path.parent/'audit.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k!='groups'}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--curation',type=Path,required=True)
    audit(parser.parse_args().curation.resolve())
