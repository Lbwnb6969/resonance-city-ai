"""Pure, read-only proposal for document 65; never writes or validates a game save."""
from copy import deepcopy
import hashlib
import json
import math
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
CONTRACT = json.loads((ROOT / '数据/成长政策候选/cozy_progression_v1.json').read_text(encoding='utf-8-sig'))
KEY = CONTRACT['policy_key']
MAX_INTEGER = 9007199254740991


def integer(value):
    return type(value) in (int, float) and 0 <= value <= MAX_INTEGER and math.isfinite(value) and value == int(value)


def digest(value):
    raw = json.dumps(value, ensure_ascii=False, sort_keys=True, separators=(',', ':'), allow_nan=False).encode()
    return hashlib.sha256(raw).hexdigest()


def hash_id(value):
    return isinstance(value, str) and re.fullmatch(r'[0-9a-f]{64}', value) is not None


def counts_valid(value):
    if not isinstance(value, dict):
        return False
    for key, count in value.items():
        if not isinstance(key, str) or not key or len(key) > 256 or any(ord(c) < 32 for c in key):
            return False
        if key.split('/')[0] not in CONTRACT['counter_kinds'] or (key != 'tea' and ('/' not in key or not key.split('/', 1)[1])):
            return False
        if not integer(count):
            return False
    return True


def policy_valid(policy):
    if not isinstance(policy, dict) or set(policy) != set(CONTRACT['policy_fields']):
        return False
    if not integer(policy['version']) or policy['version'] != CONTRACT['version'] or type(policy['enabled']) is not bool:
        return False
    if not hash_id(policy['epoch_id']) or not hash_id(policy['origin_sha256']) or not integer(policy['started_at']):
        return False
    if policy['inflight_policy'] != CONTRACT['inflight_policy']:
        return False
    if not integer(policy['level']) or policy['level'] < 1 or not integer(policy['xp']):
        return False
    threshold = CONTRACT['level_threshold']
    if policy['xp'] >= threshold['base'] + threshold['step'] * (policy['level'] - 1):
        return False
    remainder = policy['xp_remainder']
    return (type(remainder) in (int, float) and 0 <= remainder < 1 and math.isfinite(remainder)
            and counts_valid(policy['baseline']) and counts_valid(policy['receipts']))


def source_kind(snapshot):
    schema = snapshot.get('schema')
    if not integer(schema) or not 1 <= schema <= CONTRACT['target_schema']:
        return 'unsupported_schema'
    settings = snapshot.get('creative_settings', {})
    if schema < 20 or not isinstance(settings, dict) or settings.get('creation_policy') != 'free':
        return 'legacy'
    if KEY in snapshot:
        return 'versioned_candidate' if schema == CONTRACT['target_schema'] and policy_valid(snapshot[KEY]) else 'invalid_policy'
    if schema == CONTRACT['target_schema']:
        return 'invalid_policy'
    journey = snapshot.get('harmony_journey', {})
    cutoff = journey.get('growth_cutoff') if isinstance(journey, dict) else None
    if cutoff is None:
        return 'free_requires_cutoff'
    if (not isinstance(cutoff, dict) or set(cutoff) != {'version', 'source', 'vignette'}
            or not integer(cutoff.get('version')) or cutoff['version'] != 1
            or cutoff.get('source') not in ('new_free', 'migrated_free', 'converted_legacy')
            or not isinstance(cutoff.get('vignette'), dict)):
        return 'invalid_cutoff'
    return 'cutoff_free_candidate'


def baseline_counts(snapshot, counters):
    result = deepcopy(counters)
    # A house/counter absent after Undo must not become new XP on Redo.
    for key, value in snapshot.get('harmony_journey', {}).get('receipts', {}).items():
        key, value = historical_counter(key, value)
        if counts_valid({key: value}):
            result[key] = max(result.get(key, 0), value)
    return result


def historical_counter(key, value):
    """Match HarmonyReceipts' actual aliases, without changing the old ledger."""
    if not isinstance(key, str) or not integer(value):
        return key, value
    kind, separator, identity = key.partition('/')
    aliases = CONTRACT['historical_counter_aliases']
    if separator and kind in aliases:
        if kind in ('batch_count', 'delivery_count'):
            identity = identity.split('/')[0]
        else:
            value = 1  # Existing runtime interprets these keys as presence flags.
        key = aliases[kind] + '/' + identity
    return key, value


def preview(snapshot, enabled, counters, *, epoch_id=None, started_at=None):
    """Counters must come from the real runtime adapter; geometry is never inferred here."""
    if type(enabled) is not bool or not counts_valid(counters):
        raise ValueError('Explicit boolean and validated monotonic counter input required')
    kind = source_kind(snapshot)
    result = dict(preview_only=True, runtime_ready=False, source_kind=kind,
                  source_sha256=digest(snapshot), requires_runtime_validation=True,
                  requires_backup_and_readback=False, requires_epoch_settlement=False,
                  awards=[], policy=None, no_op=False)
    if kind not in ('cutoff_free_candidate', 'versioned_candidate'):
        result['blocked_by'] = kind
        return result
    if kind == 'versioned_candidate':
        policy = deepcopy(snapshot[KEY])
        if epoch_id is not None and epoch_id != policy['epoch_id']:
            raise ValueError('Resume must retain the same epoch identity')
        if started_at is not None and started_at != policy['started_at']:
            raise ValueError('Resume must retain the original epoch start')
        result['no_op'] = policy['enabled'] == enabled
        result['requires_backup_and_readback'] = not result['no_op']
        result['requires_epoch_settlement'] = policy['enabled'] and not enabled
        if not policy['enabled'] and enabled:
            for key in set(policy['baseline']) | set(policy['receipts']) | set(counters):
                policy['baseline'][key] = max(policy['baseline'].get(key, 0), policy['receipts'].get(key, 0), counters.get(key, 0))
        policy['enabled'] = enabled
    elif not enabled:
        result['no_op'] = True
        return result
    else:
        if not hash_id(epoch_id) or not integer(started_at):
            raise ValueError('First activation needs explicit epoch identity and start time')
        policy = dict(version=CONTRACT['version'], enabled=True, epoch_id=epoch_id,
                      started_at=started_at, origin_sha256=result['source_sha256'],
                      inflight_policy=CONTRACT['inflight_policy'], level=1, xp=0,
                      xp_remainder=0., baseline=baseline_counts(snapshot, counters), receipts={})
        result['requires_backup_and_readback'] = True
    assert policy_valid(policy)
    result['policy'] = policy
    result['target_schema'] = CONTRACT['target_schema']
    result['protected_hashes'] = {key: digest(snapshot[key]) for key in CONTRACT['preserve'] if key in snapshot}
    return result
