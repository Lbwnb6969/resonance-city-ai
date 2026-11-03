"""Assemble project-local originals, historic stems and new stems without guessing prompts."""
import collections
import copy
import hashlib
import json
from pathlib import Path
import re
import shutil
import tempfile

PENDING = None

ROOT = Path(__file__).resolve().parents[1]
LIB = ROOT/'数据/音乐资产'
META = ROOT/'数据/音乐制作'
OLD = LIB/'制作批次/lyria35_instruments/20261102_v1'
NEW = LIB/'制作批次/lyria35_instruments/20261103_v1'
INDEX = LIB/'目录/20261103_v1'
MAPPINGS = [
    ('C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐', LIB),
    ('C:/Users/Administrator/Desktop/mIDDLEFILE/music/work', LIB/'参考分析/补充成果'),
    ('C:/Users/Administrator/Desktop/mIDDLEFILE/music/results', LIB/'参考分析/results'),
    ('C:/Users/Administrator/Desktop/mIDDLEFILE/music', LIB/'参考分析/原曲'),
    ('D:/GODOT/Music', LIB/'原曲/Lyria/20261102'),
]


def sha(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read(path):
    return json.loads(path.read_text(encoding='utf-8-sig'))


def save(path, data):
    if PENDING is not None:
        PENDING[path] = data
        return
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')


def rebase(value):
    if isinstance(value, dict):
        return {k: rebase(v) for k, v in value.items()}
    if isinstance(value, list):
        return [rebase(v) for v in value]
    if isinstance(value, str):
        normalized = value.replace('\\', '/')
        for old, new in MAPPINGS:
            if normalized == old or normalized.startswith(old+'/'):
                return new.as_posix()+normalized[len(old):]
    return value


def prompts():
    records = []
    for name in ['xin.md', '新的五区.md', 'xin2.md']:
        source = Path('C:/Users/Administrator/Desktop')/name
        target = META/'提示词来源/20261103'/name
        target.parent.mkdir(parents=True, exist_ok=True)
        if target.exists() and sha(target) != sha(source):
            raise ValueError('Prompt source changed; use a new version')
        shutil.copy2(source, target)
        assert sha(source) == sha(target)
        paragraphs = target.read_text(encoding='utf-8-sig').splitlines()
        title = ''
        for line, text in enumerate(paragraphs, 1):
            clean = text.strip().lstrip('> ').strip()
            if clean.startswith('#') or re.match(r'^\d{2} ·', clean):
                title = clean.lstrip('# ').strip()
            if re.match(r'^(Instrumental|Beatless|High-definition|Pure,|Create an? |A (?:warm|gentle|soft))', clean):
                records.append({'id': f'{name}:{line}', 'source': target.relative_to(ROOT).as_posix(),
                                'source_sha256': sha(target), 'line': line, 'section': title, 'text': clean})
    save(META/'提示词来源/20261103/提示词索引.json', {'prompts': records,
         'mapping_policy': 'Unordered, incomplete generations. Never infer prompt identity from list position or filename.',
         'generation_status': 'unknown per prompt; repeated prompts may yield independent compositions'})
    return records


def assemble():
    global PENDING
    if INDEX.exists():
        raise ValueError('Published version exists; use a new version')
    PENDING = {}
    songs, curated = [], []
    totals = collections.Counter()
    for root, version, curation in [(OLD, '20261102', OLD/'curation_v2/curation.json'),
                                     (NEW, '20261103', NEW/'curation_v1/curation.json')]:
        batch, selection = rebase(read(root/'batch_report.json')), rebase(read(curation))
        if not batch.get('finished_at') or any(s['status'] != 'technical_ready_pending_listening' for s in batch['songs']):
            raise ValueError('Batch incomplete')
        selected = {s['name']: s for s in selection['songs']}
        for original in batch['songs']:
            name = original['name']
            original['source_path'] = str(LIB/'原曲/Lyria'/version/name)
            original['name'] = f'{Path(name).stem} [{version}].mp3'
            row = selected[name]
            row['name'] = original['name']
            row['source_path'] = original['source_path']
            row['source_id'] = original['source_sha256']
            assert sha(original['source_path']) == original['source_sha256']
            paths = [row['full_mix']['path']]
            for group in row['groups'].values():
                paths += [v['path'] for v in {**group['kept'], **group['excluded']}.values()]
            assert all(Path(p).resolve().is_relative_to(LIB.resolve()) for p in paths)
            songs.append(original)
            curated.append(row)
        totals.update(selection['totals'])
    if len({s['source_sha256'] for s in songs}) != len(songs):
        raise ValueError('Exact duplicate generations require explicit aliases')
    save(INDEX/'batch_report.json', {'source_dir': str(LIB/'原曲/Lyria'), 'songs': songs,
         'finished_at': '2026-11-03', 'runtime_ready': False})
    save(INDEX/'curation.json', {'schema': 'instrument_curation_v1', 'batch_root': str(INDEX),
         'policy': read(NEW/'curation_v1/curation.json')['policy'], 'songs': curated,
         'totals': dict(totals), 'runtime_ready': False, 'listening_approved': False})
    # Historical copied reports remain byte-identical. Explicit derivative fixes paths.
    preview = rebase(read(OLD/'spatial_preview_v1/bundle_manifest.json'))
    save(INDEX/'spatial_preview_manifest.json', preview)
    manifest = ROOT/'备份/音乐整合_20261103/迁入逐文件核验.json'
    save(LIB/'目录/迁入逐文件核验_20261103.json', {**read(manifest),
         'archived_sources': read(ROOT/'备份/音乐整合_20261103/归档核验.json'),
         'independent_destination_audit': read(ROOT/'备份/音乐整合_20261103/迁入独立复核.json')})
    save(META/'音乐资产路径映射_20261103.json', {'current_library': str(LIB),
         'historical_reports_preserved': True, 'mappings': [{'old': a, 'current': str(b)} for a, b in MAPPINGS],
         'active_curation': str(INDEX/'curation.json'), 'spatial_preview': str(INDEX/'spatial_preview_manifest.json')})
    for name in ['开放音源目录.json', '五首参考曲_提示词依据_20261102.json',
                 'Lyria35_首批同源分轨候选_v1.json', 'Lyria35_纯音乐分轨批次_20261102_v1.json',
                 'Lyria35_有效分轨选择_20261102.json']:
        save(META/'项目内索引'/name, {'historical_source': name,
             'historical_source_sha256': sha(META/name), 'project_local': rebase(read(META/name))})
    analyses = {}
    for p in LIB.rglob('summary.json'):
        data = read(p)
        key = data.get('source_sha256')
        if key and data.get('essentia') and data.get('librosa'):
            analyses[key] = {'path': p.relative_to(ROOT).as_posix(), 'sha256': sha(p),
                'status': 'dual_engine_analysis_ready', 'duration_seconds': data['duration_seconds'],
                'librosa_bpm_estimate': data['librosa'].get('bpm'),
                'essentia_bpm_estimate': data['essentia'].get('bpm'),
                'essentia_key_estimate': str(data['essentia'].get('key'))+' '+str(data['essentia'].get('scale')),
                'human_beat_clock_confirmed': False}
    records = []
    by_source = {s['source_sha256']: s for s in curated}
    for s in songs:
        records.append({'source_id': s['source_sha256'], 'name': s['name'],
             'source': Path(s['source_path']).relative_to(ROOT).as_posix(),
             'analysis': analyses.get(s['source_sha256']), 'prompt_assignment': None,
             'groups': {k: {'kept': len(g['kept']), 'excluded': len(g['excluded'])}
                        for k, g in by_source[s['source_sha256']]['groups'].items()},
             'prompt_assignment_status': 'unconfirmed', 'runtime_ready': False})
    if not all(r['analysis'] for r in records):
        raise ValueError('Some sources lack completed dual-engine analysis')
    save(META/'音乐库目录_20261103.json', {'schema': 'local_music_library_v1',
         'originals': records, 'distinct_generated_audio': len(records),
         'prompt_index': '数据/音乐制作/提示词来源/20261103/提示词索引.json',
         'active_curation': (INDEX/'curation.json').relative_to(ROOT).as_posix(),
         'totals': dict(totals), 'runtime_ready': False, 'listening_approved': False})
    staged = PENDING
    PENDING = None
    # Nothing is published until all validation and JSON construction succeeds.
    temporary = Path(tempfile.mkdtemp(prefix='音乐目录发布_', dir=ROOT/'备份/音乐整合_20261103'))
    for path, data in staged.items():
        save(temporary/path.relative_to(ROOT), data)
    for path in staged:
        if path.is_relative_to(INDEX):
            continue
        path.parent.mkdir(parents=True, exist_ok=True)
        (temporary/path.relative_to(ROOT)).replace(path)
    INDEX.parent.mkdir(parents=True, exist_ok=True)
    (temporary/INDEX.relative_to(ROOT)).rename(INDEX)
    print(json.dumps({'songs': len(records), 'totals': dict(totals)}), flush=True)


if __name__ == '__main__':
    import sys
    prompts() if '--prompts-only' in sys.argv else assemble()
