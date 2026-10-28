"""Verify score -> real PCM -> original analyzer ownership and transport markers."""
from pathlib import Path
import argparse
import array
import json
import wave
from music_authored_score import canonical, validate
from music_reference_features import read, raw, digest


def verify(score_path, capture_root, summary_path):
    score_path, capture_root = Path(score_path), Path(capture_root)
    score = validate(read(score_path)); signature = digest(score_path)
    runtime = read(capture_root/'authored_study_runtime.json')
    audio = capture_root/'authored_study.wav'
    features = raw(summary_path)  # requires all four actual files and source hash
    with wave.open(str(audio), 'rb') as stream:
        if stream.getsampwidth() != 2: raise ValueError('expected_PCM16')
        seconds = stream.getnframes()/stream.getframerate()
        pcm = array.array('h', stream.readframes(stream.getnframes()))
        channels, rate = stream.getnchannels(), stream.getframerate()
    peak = max(abs(x) for x in pcm)/32768.
    clips = sum(abs(x)>=32767 for x in pcm)
    samples = runtime['samples']
    settled = [r for r in samples if not r['initialization_fade']]
    markers = []
    for row in samples:
        unit = int(row['clock']//24)
        if not markers or markers[-1]['unit'] != unit:
            markers.append(dict(unit=unit, observed_transport_seconds=row['clock'],
                                observed_wall_offset_seconds=row['seconds'], section=row['section']['passage']))
    checks = dict(score_feature_hash=score['features_sha256']==digest(score_path.with_name('features.json')),
                  source_audio_hash=features['source']['sha256']==digest(audio),
                  actual_pcm_duration=abs(seconds-runtime['pcm_seconds'])<1e-6,
                  actual_peak=abs(peak-runtime['peak'])<1e-6,
                  unclipped=clips==0, nonempty=peak>.01,
                  wall_and_pcm=abs(seconds-runtime['wall_seconds'])<.15,
                  transport_and_pcm=abs(runtime['end_clock']-runtime['start_clock']-seconds)<.15,
                  actual_score_identity=all(r['score_signature']==signature and r['score_id']==score['id'] for r in samples),
                  actual_pooled_lead=all(any(v['stream']=='study1/'+signature+'/lead' for v in r['voices'].values()) for r in samples),
                  settled_audible=all(r['source'].get('audible',False) for r in settled),
                  transport_monotonic=all(b['clock']>=a['clock'] for a,b in zip(samples,samples[1:])),
                  multiple_units=len(markers)>=3,
                  four_inputs_consumed=len(features['inputs'])==4 and all(p['consumed'] for p in features['inputs']))
    return dict(ok=all(checks.values()),checks=checks,score_sha256=signature,
                features_sha256=score['features_sha256'],audio_sha256=digest(audio),
                pcm=dict(seconds=seconds,rate=rate,channels=channels,peak=peak,clipped_samples=clips),
                wall_seconds=runtime['wall_seconds'], transport_start_seconds=runtime['start_clock'],
                transport_end_seconds=runtime['end_clock'], observed_markers=markers,
                alignment='Compare marked transport units; WAV zero is capture start, not theme start. Callback latency is unmeasured.',
                analysis=dict(versions=features['analysis_versions'],estimated=features['estimated'],
                              measured=features['measured'],key_profiles=features['key_profiles']),
                excluded_initialization_samples=len(samples)-len(settled), subjective_listening=None)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--score',required=True);parser.add_argument('--capture-root',required=True)
    parser.add_argument('--summary',required=True);parser.add_argument('--out',required=True)
    args=parser.parse_args()
    report=verify(args.score,args.capture_root,args.summary)
    Path(args.out).write_text(canonical(report),encoding='utf-8',newline='\n')
    print(json.dumps(report,ensure_ascii=False));return 0 if report['ok'] else 1


if __name__=='__main__':raise SystemExit(main())
