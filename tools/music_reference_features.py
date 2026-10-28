"""Normalize the two inspected analysis schemas; statistics are never notes."""
from pathlib import Path
import csv
import hashlib
import json
import math
import statistics


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def read(path):
    path = Path(path)
    if path.stat().st_size > 8_000_000:
        raise ValueError(f'analysis_file_too_large: {path.name}')
    return json.loads(path.read_text(encoding='utf-8-sig'),
                      parse_constant=lambda value: (_ for _ in ()).throw(ValueError('nonfinite_json: '+value)))


def number(value, name, minimum=0., nullable=False):
    if value is None and nullable:
        return None
    if isinstance(value, bool) or not isinstance(value, (int, float)) or not math.isfinite(value) or value < minimum:
        raise ValueError('invalid_number: '+name)
    return value


def atom(value, unit, origin, method):
    return dict(value=value, unit=unit, origin=origin, method=method)


def windows(rows, seconds):
    previous = -1.
    for row in rows:
        start = number(row.get('start_seconds'), 'window.start')
        end = number(row.get('end_seconds'), 'window.end')
        if start < previous or end <= start or end > seconds+.05:
            raise ValueError('invalid_window_time: ordered nonoverlapping source seconds required')
        previous = end
        for field in ['rms', 'centroid_hz', 'rolloff_hz']:
            number(row.get(field), 'window.'+field, nullable=True)
    return rows


def normalize(info, rows, inputs, source_status):
    seconds = number(info.get('seconds'), 'duration_seconds')
    if seconds < 2.:
        raise ValueError('audio_too_short: at least 2 seconds required')
    sha = info.get('source_sha256')
    if not isinstance(sha, str) or len(sha) != 64 or any(c not in '0123456789abcdef' for c in sha):
        raise ValueError('invalid_source_sha256')
    if not isinstance(info.get('versions'), dict) or not info['versions']:
        raise ValueError('missing_analysis_versions')
    estimates = {}
    for engine in ['librosa', 'essentia']:
        estimates['bpm_'+engine] = atom(number(info.get('bpm_'+engine), 'bpm_'+engine, nullable=True),
                                        'beats/minute', 'estimated', engine)
    measured = {}
    for field, unit in [('onset_rate', 'onsets/second'), ('mean_frame_rms', 'linear_amplitude'),
                        ('centroid_hz', 'Hz'), ('rolloff_hz', 'Hz')]:
        measured[field] = atom(number(info.get(field), field, nullable=True), unit, 'measured',
                               'essentia' if field == 'onset_rate' else 'librosa_frame_statistics')
    missing = sorted([name for name, item in {**measured, **estimates}.items() if item['value'] is None])
    return dict(schema=1, kind='reference_features_not_transcription', missing_values=missing,
                source=dict(name=info.get('source_name', ''), sha256=sha, seconds=seconds,
                            audio_verification=source_status), analysis_versions=info['versions'],
                inputs=inputs, measured=measured, estimated=estimates,
                key_profiles=dict(origin='estimated', method='essentia_three_profiles_same_engine',
                                  value=info.get('key_profiles')),
                chord_statistic=dict(origin='estimated', value=info.get('chords_statistical_label'),
                                     sequence_inferred=False),
                beat_intervals=dict(origin='measured', unit='seconds', value=info.get('beat_intervals')),
                windows=dict(origin='measured', unit='source_seconds', values=windows(rows, seconds)),
                unavailable=['melody_transcription', 'chord_sequence', 'stems', 'subjective_listening'])


def profile(path):
    path = Path(path)
    data = read(path)
    if data.get('schema') != 1 or data.get('kind') != 'analysis_reference_not_runtime_preset':
        raise ValueError('unsupported_reference_profile')
    if not isinstance(data.get('reference'), dict) or not isinstance(data.get('reference_12s_windows'), list):
        raise ValueError('missing_reference_or_windows')
    return normalize(data['reference'], data['reference_12s_windows'],
                     [dict(name=path.name, sha256=digest(path), consumed=True)],
                     'profile_only_audio_not_supplied')


def raw(summary_path):
    summary_path = Path(summary_path)
    paths = [summary_path]+[summary_path.parent/name for name in ['essentia.json', 'timeline.csv', 'beats.csv']]
    if any(not path.is_file() for path in paths):
        raise ValueError('missing_analysis_input: summary, essentia, timeline and beats are required')
    summary, essentia = read(paths[0]), read(paths[1])
    source = Path(summary.get('source', ''))
    if not source.is_file():
        raise ValueError('source_audio_missing: cannot verify analysis ownership')
    if digest(source) != summary.get('source_sha256'):
        raise ValueError('source_audio_hash_mismatch')
    if summary.get('silent'):
        raise ValueError('silent_audio: no score directions inferred')
    seconds = number(summary.get('duration_seconds'), 'duration_seconds')
    if seconds < 2.:
        raise ValueError('audio_too_short: at least 2 seconds required')
    librosa, tonal = summary.get('librosa', {}), essentia.get('tonal', {})
    def mean(field, vector=False):
        value = librosa.get(field, {}).get('mean')
        return value[0] if vector and isinstance(value, list) and len(value)==1 else value
    info = dict(source_name=source.name, source_sha256=summary['source_sha256'], seconds=seconds,
                versions=summary.get('versions'), bpm_librosa=librosa.get('bpm'),
                bpm_essentia=summary.get('essentia', {}).get('bpm'),
                onset_rate=summary.get('essentia', {}).get('onset_rate'),
                mean_frame_rms=mean('rms'), centroid_hz=mean('spectral_centroid_hz', True),
                rolloff_hz=mean('spectral_rolloff_hz', True),
                key_profiles={k:tonal.get(k) for k in ['key_edma','key_krumhansl','key_temperley']},
                chords_statistical_label={k:tonal.get(k) for k in ['chords_key','chords_scale']})
    with paths[2].open(encoding='utf-8-sig', newline='') as stream:
        timeline = list(csv.DictReader(stream))
    if not timeline:
        raise ValueError('empty_timeline')
    last = -1.
    for row in timeline:
        for field in ['seconds','rms','centroid_hz','rolloff_hz','spectral_flatness','zero_crossing_rate']:
            try: row[field] = number(float(row[field]), 'timeline.'+field)
            except (KeyError, TypeError, ValueError) as exc: raise ValueError('invalid_timeline_field: '+field) from exc
        if row['seconds'] <= last or row['seconds'] > seconds+.05:
            raise ValueError('nonmonotonic_timeline')
        last = row['seconds']
    rows = []
    for start in range(0, math.ceil(seconds), 12):
        values = [r for r in timeline if start <= r['seconds'] < min(start+12, seconds)]
        if values:
            rows.append(dict(start_seconds=float(start), end_seconds=min(start+12., seconds),
                             **{k:statistics.mean(r[k] for r in values) for k in ['rms','centroid_hz','rolloff_hz']}))
    beats = {'librosa':[], 'essentia':[]}
    with paths[3].open(encoding='utf-8-sig', newline='') as stream:
        for row in csv.DictReader(stream):
            engine = row.get('engine')
            if engine not in beats: raise ValueError('unknown_beat_engine')
            try: at = number(float(row['seconds']), 'beat.seconds')
            except (KeyError, TypeError, ValueError) as exc: raise ValueError('invalid_beat_time') from exc
            if (beats[engine] and at <= beats[engine][-1]) or at > seconds+.05: raise ValueError('nonmonotonic_beats')
            beats[engine].append(at)
    info['beat_intervals'] = {}
    for engine, values in beats.items():
        intervals = [b-a for a,b in zip(values,values[1:])]
        info['beat_intervals'][engine] = dict(count=len(values), median_seconds=statistics.median(intervals) if intervals else None)
    return normalize(info, rows, [dict(name=p.name, sha256=digest(p), consumed=True) for p in paths], 'source_hash_verified')
