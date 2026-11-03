"""Measured texture descriptors; these are not instrument or listening labels."""
import numpy as np
from scipy.signal import resample_poly


def rms(pcm):
    return float(np.sqrt(np.mean(pcm.astype(np.float64)**2)))


def describe(pcm, rate):
    mono = resample_poly(pcm.mean(axis=1), 1, 4)
    reduced_rate = rate/4
    frame = 2048
    starts = range(0, max(1, len(mono)-frame), int(reduced_rate*.5))
    spectra = np.array([np.abs(np.fft.rfft(np.pad(mono[s:s+frame],
                        (0, max(0, frame-len(mono[s:s+frame]))))*np.hanning(frame))) for s in starts])
    freqs = np.fft.rfftfreq(frame, 1/reduced_rate)
    power = spectra.sum(axis=0)
    total = max(float(power.sum()), 1e-12)
    envelope = np.array([rms(pcm[s:s+rate]) for s in range(0, len(pcm), rate)])
    mean = rms(pcm)
    return {'rms': mean, 'centroid_below_5512_hz': float(np.dot(power, freqs)/total),
            'low_band_fraction': float(power[freqs<180].sum()/total),
            'high_band_fraction': float(power[freqs>2000].sum()/total),
            'active_fraction': float(np.mean(envelope>max(mean*.15, 1/32768))),
            'positive_envelope_change': float(np.maximum(np.diff(envelope), 0).mean()/max(mean, 1e-12)),
            'crest': float(np.max(np.abs(pcm))/max(mean, 1e-12)),
            'envelope': envelope.tolist()}


def choose(candidates):
    selected = {}
    remaining = dict(candidates)
    for role in ['body', 'motion', 'detail']:
        if not remaining:
            break
        def score(key):
            m = remaining[key]['features']
            if role == 'body':
                return m['active_fraction']*(1+m['low_band_fraction'])/max(m['crest'], 1.)
            if role == 'motion':
                return m['positive_envelope_change']+min(m['crest'], 20.)*.02
            return (1-m['active_fraction'])*2+m['high_band_fraction']+m['centroid_below_5512_hz']/5500
        key = max(remaining, key=score)
        selected[role] = (key, remaining.pop(key))
    return selected


def timeline(pcm, rate):
    envelope = np.array([rms(pcm[s:s+rate]) for s in range(0, len(pcm), rate)])
    duration = len(pcm)/rate
    changes = np.abs(np.diff(envelope, prepend=envelope[0]))
    candidates = []
    for second in sorted(range(6, max(6, len(envelope)-6)), key=lambda s: changes[s], reverse=True):
        if all(abs(second-row['seconds'])>=12 for row in candidates):
            candidates.append({'seconds': second, 'kind': 'measured_energy_change', 'phrase_confirmed': False})
        if len(candidates)>=6:
            break
    return {'duration_seconds': duration, 'one_second_rms': envelope.tolist(),
            'change_candidates': sorted(candidates, key=lambda row: row['seconds']),
            'loop_confirmed': False, 'automatic_cut_allowed': False}


def harmony(pcm, rate):
    """Conservative triad candidates, with unpitched gaps for ambiguous frames."""
    mono = resample_poly(pcm.mean(axis=1), 1, 4)
    analysis_rate = rate/4
    frame, hop = 4096, 1024
    mono = np.pad(mono, (0, max(0, frame-len(mono))))
    windows = np.lib.stride_tricks.sliding_window_view(mono, frame)[::hop]
    spectra = np.abs(np.fft.rfft(windows*np.hanning(frame), axis=1))
    freqs = np.fft.rfftfreq(frame, 1/analysis_rate)
    midi = 69+12*np.log2(np.maximum(freqs, 1)/440)
    mask = (freqs >= 55) & (freqs <= 2000) & (np.abs(midi-np.round(midi)) <= .38)
    classes = np.round(midi[mask]).astype(int) % 12
    chroma = np.array([np.bincount(classes, weights=row[mask], minlength=12) for row in spectra])
    times = (np.arange(len(chroma))*hop+frame*.5)/analysis_rate
    templates, definitions = [], []
    for root in range(12):
        for quality, third in [('major', 4), ('minor', 3)]:
            pcs = sorted([root, (root+third) % 12, (root+7) % 12])
            template = np.zeros(12); template[pcs] = 1/np.sqrt(3)
            templates.append(template); definitions.append((root, quality, pcs))
    templates = np.array(templates)
    duration = len(pcm)/rate
    quiet = max(rms(pcm)*.04, 1e-5)
    segments = []
    for second in range(int(np.ceil(duration))):
        local = chroma[(times >= second) & (times < second+1)]
        raw = local.mean(axis=0) if len(local) else np.zeros(12)
        concentration = float(np.sort(raw)[-3:].sum()/max(raw.sum(), 1e-12))
        vector = np.maximum(raw-np.percentile(raw, 20), 0)
        scores = templates@(vector/max(np.linalg.norm(vector), 1e-12))
        order = np.argsort(scores)
        score, margin = float(scores[order[-1]]), float(scores[order[-1]]-scores[order[-2]])
        root, quality, pcs = definitions[order[-1]]
        pitched = (score >= .85 and margin >= .06 and concentration >= .55
                   and rms(pcm[second*rate:min(len(pcm), (second+1)*rate)]) >= quiet)
        segments.append({'start': second, 'end': min(duration, second+1),
            'pitch_classes': pcs if pitched else [], 'root_pitch_class': root if pitched else None,
            'quality': quality if pitched else 'unresolved', 'fit_score': score,
            'separation_margin': margin, 'top_three_energy_fraction': concentration})
    return {'schema': 'measured_triad_timeline_v1', 'step_seconds': 1.,
            'estimator': 'spectral_pitch_class_template_v1', 'estimate_only': True,
            'human_confirmed': False, 'segments': segments}
