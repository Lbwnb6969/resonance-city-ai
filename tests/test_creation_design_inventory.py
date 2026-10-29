"""Adopted design checks must reject stale pointers even when old hashes match."""
import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from audit_creation_workspace import checkout_inventory, design_inventory


class DesignInventoryTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.data = json.loads((ROOT / 'ai_feature_backlog.json').read_text(encoding='utf-8'))
        integration = self.data['holistic_integration']
        self.current = integration['current_construction_spec']
        old = integration['supplemental_design']
        for entry in [old, old['integrated_addendum'], old['master_score_addendum'], self.current]:
            target = self.root / entry['source']
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes((ROOT / entry['source']).read_bytes())
        doc = self.root / self.current['document']
        doc.parent.mkdir(parents=True, exist_ok=True)
        doc.write_text('Adopted specification', encoding='utf-8')

    def test_current_and_historical_sources_checked_without_mutation(self):
        before = copy.deepcopy(self.data)
        sources, errors = design_inventory(self.root, self.data)
        self.assertEqual(errors, [])
        self.assertEqual(len(sources), 4)
        self.assertTrue(all(row['ok'] for row in sources))
        self.assertIn(self.current['source'], [row['path'] for row in sources])
        self.assertEqual(self.data, before)

    def test_stale_top_level_pointer_rejected(self):
        self.data['current_design_document'] = self.data['holistic_integration']['supplemental_design']['document']
        self.assertTrue(design_inventory(self.root, self.data)[1])

    def test_missing_adopted_document_rejected(self):
        (self.root / self.current['document']).unlink()
        self.assertTrue(design_inventory(self.root, self.data)[1])

    def test_missing_or_changed_v7_source_rejected(self):
        source = self.root / self.current['source']
        for raw in [None, b'changed source']:
            if raw is None:
                source.unlink()
            else:
                source.write_bytes(raw)
            sources, _ = design_inventory(self.root, self.data)
            self.assertFalse(next(row['ok'] for row in sources if row['path'] == self.current['source']))

    def test_pending_old_spec_rejected_but_historical_task_preserved(self):
        rows = self.data['holistic_integration']['rounds']
        rows[0]['spec'] = 'historical completed spec'
        self.assertEqual(design_inventory(self.root, self.data)[1], [])
        next(row for row in rows if row['passes'] is False)['spec'] = 'old pending spec'
        self.assertTrue(design_inventory(self.root, self.data)[1])

    def test_missing_current_spec_rejected(self):
        del self.data['holistic_integration']['current_construction_spec']
        self.assertTrue(design_inventory(self.root, self.data)[1])

    def test_remote_check_detects_stale_checkout_without_mutation(self):
        head, remote = 'a' * 40, 'b' * 40
        with patch('subprocess.check_output', side_effect=[head, remote + '\trefs/heads/main', head, '']) as run:
            result = checkout_inventory(self.root)
        self.assertFalse(result['ok'])
        self.assertEqual(result['state'], 'behind')
        self.assertEqual([call.args[0][1] for call in run.call_args_list],
                         ['rev-parse', 'ls-remote', 'merge-base', 'status'])

    def test_current_dirty_checkout_is_reported_without_reset(self):
        head = 'a' * 40
        with patch('subprocess.check_output', side_effect=[head, head + '\trefs/heads/main', ' M scripts/work.gd']) as run:
            result = checkout_inventory(self.root)
        self.assertTrue(result['ok'])
        self.assertTrue(result['dirty'])
        self.assertEqual(result['state'], 'current')
        self.assertEqual([call.args[0][1] for call in run.call_args_list], ['rev-parse', 'ls-remote', 'status'])


if __name__ == '__main__':
    unittest.main()
