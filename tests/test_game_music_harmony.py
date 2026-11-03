"""Signal fixtures test the estimator against known pitches, not listening labels."""
import sys
import unittest
from pathlib import Path
import numpy as np

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
from music_adaptive_features import harmony


class HarmonySignals(unittest.TestCase):
    def test_known_chords_and_non_tonal_intervals(self):
        rate = 44100
        clock = np.arange(rate*4)/rate
        def chord(notes):
            return sum(np.sin(2*np.pi*440*2**((note-69)/12)*clock)*.06 for note in notes)
        mono = np.concatenate([chord([60,64,67]), chord([67,71,74]),
            np.random.default_rng(1).normal(0,.04,rate*2), np.zeros(rate*2)])
        result = harmony(np.column_stack([mono,mono]),rate)
        self.assertEqual(result['segments'][1]['pitch_classes'],[0,4,7])
        self.assertEqual(result['segments'][5]['pitch_classes'],[2,7,11])
        self.assertFalse(any(row['pitch_classes'] for row in result['segments'][8:]))
        self.assertEqual(result['segments'][-1]['end'],len(mono)/rate)
        self.assertFalse(result['human_confirmed'])


if __name__ == '__main__':
    unittest.main()
