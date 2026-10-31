"""Verify the local blau reference catalog and its non-distribution boundary."""
from pathlib import Path
import argparse
import hashlib
import json

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / '文档/来源/20261031_Gemini_blau_氛围与制作工作包_原稿.txt'
DEST = ROOT / '数据/音乐设计候选/Gemini_blau氛围原创重制_v1.json'
EXPECTED_SOURCE = '90f141cd03ab20842d0d437346030210313c32fac134426c707b6e4d87479cec'
EXPECTED_AUDIO = '426c33f54081cc56b8881fda94c83826fe2160188c836a5fd2ff99334a85cf65'


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    digest = hashlib.sha256(SOURCE.read_bytes()).hexdigest()
    if digest != EXPECTED_SOURCE:
        raise SystemExit('Gemini source changed; review before adoption')
    value = json.loads(DEST.read_text(encoding='utf-8'))
    audio = value['source_audio']
    if value.get('runtime_ready') is not False or audio['sha256'] != EXPECTED_AUDIO:
        raise SystemExit('reference catalog must stay local-only and runtime_ready=false')
    if value.get('gemini_source_sha256') != EXPECTED_SOURCE:
        raise SystemExit('Gemini source hash mismatch')
    report = {
        'ok': True,
        'source_sha256': digest,
        'audio_sha256': audio['sha256'],
        'duration_seconds': audio['duration_seconds'],
        'candidate_profile': value['candidate_profile']['id'],
        'runtime_ready': False,
        'source_audio_distribution': audio['distribution'],
        'stem_distribution': audio['stem_distribution'],
        'asset_register_required': True,
        'game_run': False,
        'listening_pass': False,
        'license_cleared': False,
    }
    if args.report:
        path = args.report if args.report.is_absolute() else ROOT / args.report
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
