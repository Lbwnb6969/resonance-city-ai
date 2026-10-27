"""Collect the actual accepted evidence for the two user-authored design briefs."""
from pathlib import Path
import array
import hashlib
import json
import wave

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / '验证记录/M66'
REPORTS = [
    ('M53', 'roof_core_and_clearance', 'M53/neighbor_clear'),
    ('M53', 'purpose_automatic_voice_legacy', 'M53/roles_accepted'),
    ('M55', 'asymmetric_grass_water_dusk', 'M55/pool_accepted'),
    ('M56', 'contrary_and_sparse_nocturne', 'M56/live'),
    ('M57', 'real_solo_and_neighbor_walk', 'M57/final'),
    ('M57', 'era_archway_and_real_wonder', 'M57/details_complete'),
    ('M59', 'native_three_road_modes', 'M59/complete'),
    ('M60', 'native_angle_and_true_circle', 'M60/final'),
    ('M61', 'three_road_modes_final_regression', 'M61/modes_regression'),
    ('M61', 'angle_compass_final_regression', 'M61/ruler_regression'),
    ('M61', 'segment_closure_tangent_loop', 'M61/final'),
    ('M61', 'loop_clearance_and_labels', 'M61/details_final'),
    ('M62', 'cut_wall_corners_and_collision', 'M62/accepted'),
    ('M63', 'hinge_curve_door_and_history', 'M63/final'),
    ('M63', 'actual_extension_and_axis', 'M63/details_verified'),
    ('M64', 'open_balconies_stairs_and_residents', 'M64/verified'),
    ('M65', 'four_registers_real_handoff_legato_life', 'M65/final'),
    ('M66', 'repaired_stage_headroom_and_unique_lead', 'M66/stage'),
    ('M66', 'budgeted_high_chord_closure_fifth', 'M66/closure'),
    ('M66', 'two_actual_house_colors_roof_only_and_resize', 'M66/color_resize_final'),
]


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def audio(path):
    with wave.open(str(path), 'rb') as source:
        assert source.getsampwidth() == 2
        channels, rate = source.getnchannels(), source.getframerate()
        pcm = array.array('h', source.readframes(source.getnframes()))
    rms = (sum((v / 32768.) ** 2 for v in pcm) / len(pcm)) ** .5
    return {'path': str(path.relative_to(ROOT)), 'seconds': len(pcm) / channels / rate,
            'peak': max(map(abs, pcm)) / 32768., 'rms': rms,
            'clipped_samples': sum(abs(v) >= 32767 for v in pcm)}


def main():
    accepted = []
    for milestone, requirement, folder in REPORTS:
        path = ROOT / '验证记录' / folder / 'music_experience_core_report.json'
        data = read(path)
        accepted.append({'milestone': milestone, 'requirement': requirement,
                         'report': str(path.relative_to(ROOT)), 'ok': data['ok'],
                         'checks': data['checks'], 'failures': data['failures']})
    cpu = read(OUT / 'cpu_suite.json')
    sixth_audit = read(ROOT / '验证记录/M58/requirements_audit.json')
    m54 = read(ROOT / '验证记录/M54/final/local_scale_profile.json')
    scale = read(OUT / '300_final/large_town_live.json')
    ui = read(OUT / '300_ui_accepted/ui_only.json')
    retested = {'expanded large-city color palette fits (1024, 768)',
                'actual apply button updates color without rebuilding the large-city house'}
    core_ok = all(row['ok'] for row in scale['checks'] if row['label'] not in retested)
    core_ok = core_ok and set(scale['failures']).issubset(retested)
    scale_ok = core_ok and ui['ok']
    journey = read(OUT / 'journey_accepted/suite.json')
    critic = read(OUT / 'critic_review.json')
    recording = audio(OUT / 'stage/stage_26s_Master.wav')
    city_mix = audio(OUT / '300_final/three_hundred_house_mix.wav')
    originals = {}
    for name in ['33.md', '34.md']:
        path = ROOT / '新文档' / name
        originals[name] = {'bytes': path.stat().st_size,
                           'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}
    report = {'scope': 'Read-only 新文档/33.md then 新文档/34.md; stop after M66 sync',
              'originals': originals, 'accepted_reports': accepted, 'cpu': cpu,
              'sixth_phase_previous_audit': sixth_audit, 'm54_local_profile': m54,
              'large_city': {'ok': scale_ok, 'houses': scale['houses'],
                             'core_source': '验证记录/M66/300_final/large_town_live.json',
                             'core_original_ok': scale['ok'], 'retested_labels': sorted(retested),
                             'current_ui_source': '验证记录/M66/300_ui_accepted/ui_only.json',
                             'current_ui': ui,
                             'residents': scale['residents'], 'audio': city_mix,
                             'frames': scale['near_frames'], 'edit': scale['edit']},
              'separate_process_journey': journey, 'stage_audio': recording,
              'critic_report': str((OUT / 'critic_review.json').relative_to(ROOT)),
              'critic': critic,
              'adaptations': [
                  'Existing numeric multipliers and repeated research retained.',
                  'True circular arcs replace the source brief\'s equal-arm Bezier claim.',
                  'Supported authored shells share real collision; special silhouettes retain their form.',
                  'Explicit MIDI ranges take precedence over inconsistent written octave names.',
                  'Pentatonic missing thirds use a truthful open fifth.',
                  'Chord fifth inversion preserves both the high register and actual chord tones.',
                  'Manual P/build/angle feedback stays immediate; automatic life shares the two-note budget.',
                  'Performance timings are measurements, with no fixed frame-time gate.',
              ]}
    # A process review is insufficient: the independent reviewer closes all blockers.
    report['ok'] = all(r['ok'] for r in accepted) and cpu['ok'] and scale_ok and journey['ok'] and sixth_audit['ok'] and m54['ok']
    report['ok'] = report['ok'] and critic.get('status') == 'complete_no_open_P1_P2' and not critic.get('open_blockers', ['missing'])
    report['ok'] = report['ok'] and recording['clipped_samples'] == city_mix['clipped_samples'] == 0
    (OUT / 'requirements_audit.json').write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'ok': report['ok'], 'accepted_reports': len(accepted),
                      'scale_houses': scale['houses'], 'originals': originals}, ensure_ascii=False))
    return 0 if report['ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
