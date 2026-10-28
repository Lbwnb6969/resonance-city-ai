"""An authored study, independent of reference statistics; strict JSON only."""
import hashlib
import json
import math

ROLES = {'foundation':1, 'pulse':2, 'answer':2, 'lead':3, 'sparkle':4}
TIMBRES = {'flute','guitar','bass','horn','felt_nocturne','felt_piano','cello_harmonic'}
STYLES = {'pastoral_breeze','deep_flow','felt_nocturne'}


def canonical(value):
    return json.dumps(value, ensure_ascii=False, sort_keys=True, indent=2, allow_nan=False)+'\n'


def validate(score):
    required = {'schema','id','style','origin','bpm','beats_per_bar','bars','harmony_mode','events','features_sha256'}
    if not isinstance(score, dict) or set(score) != required or type(score['schema']) is not int or score['schema'] != 1:
        raise ValueError('invalid_score_schema')
    if score['origin'] != 'authored' or score['style'] not in STYLES:
        raise ValueError('invalid_score_origin_or_style')
    if not isinstance(score['id'], str) or not 1 <= len(score['id']) <= 48 or any(c not in 'abcdefghijklmnopqrstuvwxyz0123456789_' for c in score['id']):
        raise ValueError('invalid_score_id')
    if any(type(score[k]) is not int for k in ['bpm','beats_per_bar','bars','harmony_mode']) or score['bpm'] != 80 or score['beats_per_bar'] != 4 or score['bars'] != 8 or not 0 <= score['harmony_mode'] <= 9:
        raise ValueError('unsupported_score_transport')
    if not isinstance(score['features_sha256'], str) or len(score['features_sha256']) != 64 or any(c not in '0123456789abcdef' for c in score['features_sha256']):
        raise ValueError('invalid_features_hash')
    events = score['events']
    if not isinstance(events, list) or not 1 <= len(events) <= 256:
        raise ValueError('invalid_event_count')
    fields = {'beat','beats','midi','gain','timbre','role','layer'}
    for event in events:
        if not isinstance(event, dict) or set(event) != fields:
            raise ValueError('invalid_event_schema')
        for key in ['beat','beats','midi','gain','layer']:
            if type(event[key]) not in (int,float) or not math.isfinite(event[key]): raise ValueError('invalid_event_number: '+key)
        if event['role'] not in ROLES or event['layer'] != ROLES[event['role']] or event['timbre'] not in TIMBRES:
            raise ValueError('invalid_event_role_or_timbre')
        if event['midi'] != int(event['midi']) or not 24 <= event['midi'] <= 100 or not 0 <= event['gain'] <= .18:
            raise ValueError('invalid_event_pitch_or_gain')
        if not 0 <= event['beat'] < 32 or abs(event['beat']*4-round(event['beat']*4)) > .00001 or not 0 < event['beats'] <= 16/3:
            raise ValueError('invalid_event_time')
    if {e['role'] for e in events} != {'foundation','pulse','answer','lead'}:
        raise ValueError('score_requires_four_pooled_roles')
    return score


def author(features, style):
    if style not in STYLES: raise ValueError('unknown_style')
    reference_sha = hashlib.sha256(canonical(features).encode()).hexdigest()
    def event(beat, beats, midi, role, timbre, gain):
        return dict(beat=beat, beats=beats, midi=midi, role=role, layer=ROLES[role], timbre=timbre, gain=gain)
    # Hand-written D-major study. Neither key estimators nor chord statistics write notes.
    melody = [[(0,1.5,74),(2,.5,76),(2.5,1,78)],[(.5,1,78),(2,1.5,74)],
              [(0,1.5,71),(2,.5,74),(3,.75,78)],[(.5,1,76),(2,1.5,73)],
              [(0,.75,78),(1,.5,81),(2,1.5,83)],[(.5,1.5,78),(2.5,1,74)],
              [(0,1,76),(1.5,.5,73),(2.5,1,69)],[(0,1,78),(1.5,.5,76),(2,1.75,74)]]
    events = []
    roots, thirds, fifths = [38,35,43,45,38,35,43,38], [54,50,59,61,54,50,59,54], [57,54,62,64,57,54,62,57]
    for bar, notes in enumerate(melody):
        for at, length, midi in notes:
            events.append(event(bar*4+at,length,midi-12 if style=='deep_flow' else midi,'lead',
                                'felt_piano' if style=='deep_flow' else 'felt_nocturne' if style=='felt_nocturne' else 'flute',.060))
        events.append(event(bar*4,4.25,roots[bar],'foundation','bass',.032))
        for at,midi in [(.5,thirds[bar]),(1.5,fifths[bar]),(2.5,thirds[bar])]:
            events.append(event(bar*4+at,.6,midi,'pulse','guitar',.024))
        if bar in [1,3,5]: events.append(event(bar*4+3.25,.65,fifths[bar],'answer','cello_harmonic',.018))
    return validate(dict(schema=1,id='river_study_v1',style=style,origin='authored',bpm=80,beats_per_bar=4,bars=8,
                         harmony_mode=0,events=events,features_sha256=reference_sha))
