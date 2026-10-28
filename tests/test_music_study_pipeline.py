"""Real schema examples plus ownership, malformed input and deterministic output."""
from pathlib import Path
import copy
import importlib.util
import json
import sys
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from build_creation_music_study import build
from music_reference_features import profile, raw, digest
from music_authored_score import author, validate, canonical


class Pipeline(unittest.TestCase):
    def setUp(self):
        self.temp=tempfile.TemporaryDirectory(prefix='city-study-');self.addCleanup(self.temp.cleanup)
        self.root=Path(self.temp.name)
        self.reference=ROOT/'数据/音乐参考/齐马蓝_组合参考.json'
        self.features=profile(self.reference)

    def put(self,name,value):
        p=self.root/name;p.write_text(canonical(value),encoding='utf-8');return p

    def inputs(self):
        audio=self.root/'source.wav';audio.write_bytes(b'ownership fixture; feature data already extracted')
        p=self.put('summary.json',dict(source=str(audio),source_sha256=digest(audio),duration_seconds=24.,versions={'librosa':'observed'},silent=False,
                  librosa={'bpm':80.,'rms':{'mean':.1},'spectral_centroid_hz':{'mean':[500.]},'spectral_rolloff_hz':{'mean':[900.]}},
                  essentia={'bpm':81.,'onset_rate':2.}))
        self.put('essentia.json',{'tonal':{'key_edma':{'key':'D','scale':'major','strength':.7},'chords_key':'A','chords_scale':'major'}})
        (self.root/'timeline.csv').write_text('seconds,rms,centroid_hz,rolloff_hz,spectral_flatness,zero_crossing_rate\n0,.1,500,900,.1,.1\n12,.2,600,950,.1,.1\n',encoding='utf-8')
        (self.root/'beats.csv').write_text('engine,beat_index,seconds\nlibrosa,1,1\nlibrosa,2,1.75\nessentia,1,1\nessentia,2,1.74\n',encoding='utf-8')
        return p

    def test_existing_profile_is_not_transcription(self):
        self.assertEqual(self.features['source']['sha256'],'426c33f54081cc56b8881fda94c83826fe2160188c836a5fd2ff99334a85cf65')
        self.assertFalse(self.features['chord_statistic']['sequence_inferred'])
        self.assertEqual(self.features['estimated']['bpm_librosa']['origin'],'estimated')

    def test_repeat_content_hashes(self):
        self.assertEqual(build(self.reference,self.root/'a','profile','deep_flow'),build(self.reference,self.root/'b','profile','deep_flow'))
        features_path=self.root/'a/features.json';score=json.loads((self.root/'a/score.json').read_text())
        self.assertNotIn(b'\r',features_path.read_bytes())
        self.assertEqual(score['features_sha256'],digest(features_path))

    def test_metrics_cannot_write_notes(self):
        changed=copy.deepcopy(self.features);changed['estimated']['bpm_librosa']['value']=200.
        self.assertEqual(author(changed,'deep_flow')['events'],author(self.features,'deep_flow')['events'])

    def test_raw_consumes_all_four_inputs(self):
        result=raw(self.inputs());self.assertEqual(len(result['inputs']),4)
        self.assertAlmostEqual(result['beat_intervals']['value']['librosa']['median_seconds'],.75)
        self.assertEqual(len(result['windows']['values']),2)

    def test_audio_missing(self):
        p=self.inputs();(self.root/'source.wav').unlink()
        with self.assertRaisesRegex(ValueError,'source_audio_missing'):raw(p)

    def test_wrong_audio_hash(self):
        p=self.inputs();(self.root/'source.wav').write_bytes(b'different audio')
        with self.assertRaisesRegex(ValueError,'hash_mismatch'):raw(p)

    def test_short_audio(self):
        p=self.inputs();v=json.loads(p.read_text());v['duration_seconds']=1.;self.put('summary.json',v)
        with self.assertRaisesRegex(ValueError,'audio_too_short'):raw(p)

    def test_nonnumeric_and_nonmonotonic_timeline(self):
        p=self.inputs();timeline=self.root/'timeline.csv';timeline.write_text('seconds,rms,centroid_hz,rolloff_hz,spectral_flatness,zero_crossing_rate\n0,no,500,900,.1,.1\n')
        with self.assertRaisesRegex(ValueError,'timeline_field'):raw(p)
        timeline.write_text('seconds,rms,centroid_hz,rolloff_hz,spectral_flatness,zero_crossing_rate\n2,.1,500,900,.1,.1\n1,.1,500,900,.1,.1\n')
        with self.assertRaisesRegex(ValueError,'nonmonotonic'):raw(p)

    def test_missing_input_and_silent(self):
        p=self.inputs();beats=self.root/'beats.csv';beats.unlink()
        with self.assertRaisesRegex(ValueError,'missing_analysis_input'):raw(p)
        p=self.inputs();v=json.loads(p.read_text());v['silent']=True;self.put('summary.json',v)
        with self.assertRaisesRegex(ValueError,'silent_audio'):raw(p)

    def test_malformed_score(self):
        score=author(self.features,'deep_flow')
        for field,value in [('style','../../code'),('bpm',125),('schema',True),('events',[]),('harmony_mode',True),('id','bad/path')]:
            changed=copy.deepcopy(score);changed[field]=value
            with self.subTest(field=field),self.assertRaises(ValueError):validate(changed)
        for field,value in [('beat',float('nan')),('midi',128),('gain',float('inf')),('role','script'),('beats',10000),('timbre','res://x.gd')]:
            changed=copy.deepcopy(score);changed['events'][0][field]=value
            with self.subTest(field=field),self.assertRaises(ValueError):validate(changed)

    def test_missing_profile_field_and_bad_windows(self):
        data=json.loads(self.reference.read_text(encoding='utf-8'));data.pop('reference')
        with self.assertRaisesRegex(ValueError,'missing_reference'):profile(self.put('bad.json',data))
        data=json.loads(self.reference.read_text(encoding='utf-8'));data['reference_12s_windows'][0]['end_seconds']='not seconds'
        with self.assertRaises(ValueError):profile(self.put('bad.json',data))

    def test_null_metric_remains_explicit(self):
        data=json.loads(self.reference.read_text(encoding='utf-8'));data['reference'].pop('centroid_hz')
        result=profile(self.put('null.json',data));self.assertIsNone(result['measured']['centroid_hz']['value']);self.assertIn('centroid_hz',result['missing_values'])


if __name__=='__main__':unittest.main()
