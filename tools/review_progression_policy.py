"""Review packaged snapshots against the offline progression contract; no save writes."""
import argparse
import hashlib
import json
from pathlib import Path
import re
from progression_policy_contract import ROOT, CONTRACT, preview, source_kind


def review():
    save_source = ROOT / 'scripts/world/city_creation_creative_save.gd'
    latest = int(re.search(r'^const LATEST_SCHEMA:=(\d+)$', save_source.read_text(encoding='utf-8'), re.M)[1])
    rows = []
    for path in sorted((ROOT / '数据').glob('*样例.json')):
        original = path.read_bytes()
        snapshot = json.loads(original.decode('utf-8-sig'))
        plan = preview(snapshot, True, {})
        assert path.read_bytes() == original
        rows.append(dict(path=path.relative_to(ROOT).as_posix(), schema=snapshot.get('schema'),
                         source_kind=source_kind(snapshot), sha256=hashlib.sha256(original).hexdigest(),
                         blocked_by=plan.get('blocked_by'), proposed_policy=plan['policy'], awards=plan['awards']))
    return dict(ok=True, runtime_ready=False, target_schema_candidate=CONTRACT['target_schema'],
                runtime_latest_schema=latest, runtime_schema_source_sha256=hashlib.sha256(save_source.read_bytes()).hexdigest(), inputs=rows,
                scope='Packaged JSON inventory and offline contract eligibility only; no Godot save validation, migration, counters, IO transaction, gameplay or awards executed')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report', type=Path, required=True)
    args = parser.parse_args()
    report_path = args.report.resolve()
    if not report_path.is_relative_to((ROOT / '验证记录').resolve()):
        raise ValueError('Write reports only under the local evidence directory')
    result = review()
    report_path.parent.mkdir(parents=True, exist_ok=True)
    with report_path.open('x', encoding='utf-8') as output:
        json.dump(result, output, ensure_ascii=False, indent=2)
        output.write('\n')
    print('PROGRESSION_CONTRACT_REVIEW PASS:', len(result['inputs']), 'packaged inputs; no runtime activation')
