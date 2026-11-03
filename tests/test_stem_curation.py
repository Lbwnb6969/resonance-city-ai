"""Protect sparse musical entries while removing noise-only model outputs."""
import sys
import unittest
from pathlib import Path
import numpy as np
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from curate_instrument_stems import classify,measure


class CurationTests(unittest.TestCase):
    def setUp(self):
        self.rate=8000
        t=np.arange(self.rate*20)/self.rate
        self.master=np.repeat((.1*np.sin(2*np.pi*220*t))[:,None],2,axis=1).astype('float32')

    def test_noise_and_quantized_silence_are_not_tracks(self):
        self.assertEqual(classify(measure(np.zeros_like(self.master),self.master,self.rate)),'exclude_silent')
        noise=np.random.default_rng(1).normal(0,2e-5,self.master.shape).astype('float32')
        self.assertEqual(classify(measure(noise,self.master,self.rate)),'exclude_negligible')

    def test_short_note_in_quiet_passage_survives_low_whole_song_rms(self):
        stem=np.zeros_like(self.master)
        t=np.arange(240)/self.rate
        stem[-400:-160]=(.012*np.sin(2*np.pi*660*t))[:,None]
        master=self.master.copy();master[-self.rate:]=stem[-self.rate:]
        stats=measure(stem,master,self.rate)
        self.assertLess(stats['relative_rms_db'],-36)
        self.assertEqual(classify(stats),'keep')

    def test_fading_master_does_not_promote_quantization_noise(self):
        master=self.master.copy();master[-self.rate:]*=.0001
        stem=np.full_like(master,4e-5)
        self.assertEqual(classify(measure(stem,master,self.rate)),'exclude_negligible')


if __name__=='__main__':unittest.main()
