"""Offline document-65 contract tests; never execute Godot or write source saves."""
from copy import deepcopy
from pathlib import Path
import math
import sys
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from progression_policy_contract import CONTRACT, KEY, digest, policy_valid, preview, source_kind


class ProgressionPolicyContractTests(unittest.TestCase):
    def setUp(self):
        self.source = dict(schema=23, creative_settings={'creation_policy': 'free'},
            harmony_journey=dict(harmony_level=5, harmony_xp=19, xp_remainder=.65,
                traditions=['warm_hearth_ballad'], ranks={'warm_hearth_ballad': 1},
                pending_draft=['a', 'b', 'c'], receipts={'house/h1': 1, 'house/undone': 1, 'tea': 7},
                growth_cutoff=dict(version=1, source='migrated_free', vignette={})),
            life_progress={'tea_parties': 7}, bakery_supply={'h1': {'produced': 9}},
            workshop_supply={'h2': {'delivered': 4}}, growth_memories=['real_memory'])
        self.counters = {'house/h1': 1, 'tea': 7, 'bread/h1': 9}
        self.epoch = 'a' * 64

    def activate(self):
        return preview(self.source, True, self.counters, epoch_id=self.epoch, started_at=123456)

    def versioned(self, enabled=True):
        result = deepcopy(self.source)
        result['schema'] = CONTRACT['target_schema']
        result[KEY] = self.activate()['policy']
        result[KEY]['enabled'] = enabled
        return result

    def test_first_activation_has_no_historical_awards(self):
        before = deepcopy(self.source)
        plan = self.activate()
        self.assertEqual(self.source, before)
        self.assertEqual(plan['awards'], [])
        self.assertFalse(plan['runtime_ready'])
        self.assertTrue(plan['requires_backup_and_readback'])
        self.assertTrue(plan['requires_runtime_validation'])
        self.assertEqual((plan['policy']['level'], plan['policy']['xp'], plan['policy']['xp_remainder']), (1, 0, 0))
        self.assertEqual(plan['policy']['receipts'], {})
        self.assertEqual(plan['protected_hashes']['harmony_journey'], digest(before['harmony_journey']))
        self.assertNotIn('credits', plan['policy'])

    def test_undo_removed_identity_keeps_historical_baseline(self):
        policy = self.activate()['policy']
        self.assertEqual(policy['baseline']['house/undone'], 1)
        self.assertEqual(policy['baseline']['bread/h1'], 9)
        self.counters['bread/h1'] = 999
        self.assertEqual(policy['baseline']['bread/h1'], 9)

    def test_old_higher_counter_is_not_replayed(self):
        self.counters['tea'] = 2
        self.assertEqual(self.activate()['policy']['baseline']['tea'], 7)

    def test_historical_aliases_survive_absent_undo_identities(self):
        receipts = self.source['harmony_journey']['receipts']
        receipts.update({'batch_count/absent': 12, 'delivery_count/absent': 4,
                         'debut/absent/bread': 1, 'civic_received/old_hall': 1})
        before = deepcopy(self.source)
        baseline = self.activate()['policy']['baseline']
        self.assertEqual({key: baseline[key] for key in ('bake/absent', 'delivery/absent',
            'wish/absent/bread', 'civic/old_hall')},
            {'bake/absent': 12, 'delivery/absent': 4, 'wish/absent/bread': 1, 'civic/old_hall': 1})
        self.assertEqual(self.source, before)
        self.assertNotIn('batch_count/absent', baseline)

    def test_alias_and_canonical_counts_use_maximum_without_summing(self):
        receipts = self.source['harmony_journey']['receipts']
        receipts.update({'bake/h1': 9, 'batch_count/h1': 3, 'delivery/h2': 2,
                         'delivery_count/h2': 8, 'debut/h1/bread': 0})
        self.counters.update({'bake/h1': 5, 'delivery/h2': 6, 'wish/h1/bread': 0})
        baseline = self.activate()['policy']['baseline']
        self.assertEqual((baseline['bake/h1'], baseline['delivery/h2'], baseline['wish/h1/bread']), (9, 8, 1))

    def test_aliases_match_existing_runtime_identity_slices(self):
        self.source['harmony_journey']['receipts'].update({
            'batch_count/h1/old_suffix': 4, 'delivery_count/h2/old_suffix': 7,
            'debut/h3/craft': 1, 'civic_received/square/event': 1,
            'batch_count/': 2, 'heritage/draft': 1})
        baseline = self.activate()['policy']['baseline']
        self.assertEqual((baseline['bake/h1'], baseline['delivery/h2'],
                          baseline['wish/h3/craft'], baseline['civic/square/event']), (4, 7, 1, 1))
        self.assertNotIn('bake/', baseline)
        self.assertNotIn('heritage/draft', baseline)

    def test_legacy_is_not_implicitly_converted(self):
        for schema in [1, 19, 23]:
            source = deepcopy(self.source)
            source['schema'] = schema
            source['creative_settings']['creation_policy'] = 'legacy'
            plan = preview(source, True, self.counters)
            self.assertIsNone(plan['policy'])
            self.assertEqual(plan['blocked_by'], 'legacy')

    def test_missing_cutoff_requires_existing_formal_migration(self):
        self.source['harmony_journey'].pop('growth_cutoff')
        self.assertEqual(self.activate()['blocked_by'], 'free_requires_cutoff')

    def test_invalid_cutoff_does_not_become_activation(self):
        for cutoff in [True, {}, dict(version=True, source='migrated_free', vignette={}),
                       dict(version=1, source='invented', vignette={})]:
            self.source['harmony_journey']['growth_cutoff'] = cutoff
            self.assertEqual(self.activate()['blocked_by'], 'invalid_cutoff')

    def test_old_quiet_city_stays_without_epoch_when_disabled(self):
        plan = preview(self.source, False, self.counters)
        self.assertTrue(plan['no_op'])
        self.assertIsNone(plan['policy'])

    def test_enable_requires_explicit_strict_metadata(self):
        for epoch, start in [('bad', 1), (self.epoch, True), (self.epoch, -1), (self.epoch, math.inf)]:
            with self.assertRaises(ValueError):
                preview(self.source, True, self.counters, epoch_id=epoch, started_at=start)

    def test_strict_boolean_and_counter_inputs(self):
        for enabled, counters in [(1, {}), ('true', {}), (True, {'tea': True}),
                                   (True, {'tea': -1}), (True, {'tea': math.nan}),
                                   (True, {'invented/h1': 1}), (True, {'tea': 10 ** 10000})]:
            with self.assertRaises(ValueError):
                preview(self.source, enabled, counters)

    def test_resume_reuses_epoch_and_skips_off_period(self):
        source = self.versioned(False)
        policy = source[KEY]
        policy.update(level=3, xp=55, xp_remainder=.75)
        policy['baseline']['tea'] = 10
        policy['receipts']['tea'] = 15
        before = deepcopy(source)
        plan = preview(source, True, {'tea': 22})
        self.assertEqual(plan['policy']['baseline']['tea'], 22)
        for field in ['epoch_id', 'started_at', 'origin_sha256', 'level', 'xp', 'xp_remainder', 'receipts']:
            self.assertEqual(plan['policy'][field], policy[field])
        self.assertEqual(source, before)
        self.assertEqual(plan['awards'], [])

    def test_resume_cannot_create_another_epoch(self):
        source = self.versioned(False)
        with self.assertRaises(ValueError):
            preview(source, True, {}, epoch_id='b' * 64)
        with self.assertRaises(ValueError):
            preview(source, True, {}, started_at=654321)

    def test_enable_again_does_not_swallow_new_active_events(self):
        source = self.versioned(True)
        plan = preview(source, True, {'tea': 100})
        self.assertTrue(plan['no_op'])
        self.assertEqual(plan['policy'], source[KEY])
        self.assertFalse(plan['requires_backup_and_readback'])

    def test_disable_requires_settlement_and_pause(self):
        source = self.versioned(True)
        plan = preview(source, False, {'tea': 9})
        self.assertTrue(plan['requires_epoch_settlement'])
        self.assertTrue(plan['requires_backup_and_readback'])
        self.assertEqual(plan['policy']['inflight_policy'], 'pause')
        self.assertEqual(plan['policy']['baseline'], source[KEY]['baseline'])
        self.assertEqual(plan['awards'], [])

    def test_new_fields_are_candidate_schema_only(self):
        source = self.versioned()
        source['schema'] = 23
        self.assertEqual(source_kind(source), 'invalid_policy')
        source['schema'] = 24
        source[KEY]['prosperity_enabled'] = True
        self.assertEqual(source_kind(source), 'invalid_policy')

    def test_policy_rejects_invalid_numbers_and_alias_switch(self):
        valid = self.activate()['policy']
        self.assertTrue(policy_valid(valid))
        for field, value in [('version', True), ('enabled', 1), ('level', 0), ('xp', 100),
                             ('xp_remainder', math.inf), ('xp_remainder', 1),
                             ('receipts', {'tea': False}), ('epoch_id', '../save')]:
            policy = deepcopy(valid)
            policy[field] = value
            self.assertFalse(policy_valid(policy), (field, value))


if __name__ == '__main__':
    unittest.main()
