"""Verify the source hash and boundaries of the progressive reserve batch."""
from pathlib import Path
import argparse
import hashlib
import json

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / '文档/来源/20261031_Gemini_渐进内容储备深化与首批生产_原稿.txt'
DEST = ROOT / '数据/内容储备候选/Gemini渐进内容储备深化首批_v1.json'
EXPECTED = 'e86d256c9898c76216633a304d82486608a2657a67ab16eca1b8d7ce91125f89'


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    raw = SOURCE.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    if digest != EXPECTED:
        raise SystemExit('source hash changed; review the original before adoption')
    catalog = json.loads(DEST.read_text(encoding='utf-8'))
    required = {'music', 'visual', 'architecture', 'cozy_progression'}
    if catalog.get('runtime_ready') is not False or set(catalog['batch']) != required:
        raise SystemExit('candidate must remain a closed runtime_ready=false batch')
    if catalog.get('source_sha256') != EXPECTED:
        raise SystemExit('candidate source hash mismatch')
    result = {
        'ok': True,
        'source_bytes': len(raw),
        'source_sha256': digest,
        'candidate': str(DEST.relative_to(ROOT)).replace('\\', '/'),
        'runtime_ready': False,
        'music_sections': catalog['batch']['music']['sections'],
        'mother_types': catalog['batch']['architecture']['mother_types'],
        'palette': catalog['batch']['visual']['palette'],
        'plant': catalog['batch']['visual']['plant'],
        'game_run': False,
        'listening_pass': False,
        'shader_compiled': False,
    }
    if args.report:
        path = args.report if args.report.is_absolute() else ROOT / args.report
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
