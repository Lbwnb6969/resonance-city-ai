"""Verify the four-song atmosphere catalog and its source hashes."""
from pathlib import Path
import argparse, hashlib, json

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / '文档/来源/20261031_Gemini_四首新古典氛围拆解_原稿.txt'
DEST = ROOT / '数据/音乐设计候选/Gemini四首氛围资产_测量与接入_v1.json'
EXPECTED_SOURCE = 'abf1cdd0ea376a07213f2d5e050ae6457f53d240c988dba3f218ff17517b5f8a'
EXPECTED = {
    'coastal_wind_v1': 'e6ed6bcb966fa79d8d10d5646c971401a699f0bb14a01f1b503f61d11a1d32e0',
    'cello_elegy_v1': 'c909ee15cc5d628905b3bfa2b241cff4f715bdc9ba23b789652c1a2b7ee7c3c9',
    'fifth_space_v1': 'c93a282618e68a2560fa98d4753902305d22858ac80ebb768e4563713f3139d2',
    'warm_6_8_v1': 'a2aa90a65d5c72b73cd4a2315c2fa049d853eec845092235be4556b1993c92c6',
}


def main() -> None:
    parser = argparse.ArgumentParser(); parser.add_argument('--report', type=Path); args = parser.parse_args()
    if hashlib.sha256(SOURCE.read_bytes()).hexdigest() != EXPECTED_SOURCE:
        raise SystemExit('Gemini source changed; review the original first')
    value = json.loads(DEST.read_text(encoding='utf-8'))
    if value.get('runtime_ready') is not False or len(value.get('songs', [])) != 4:
        raise SystemExit('catalog must contain four runtime_ready=false candidates')
    for song in value['songs']:
        if EXPECTED.get(song['id']) != song['sha256']:
            raise SystemExit('song hash mismatch: '+song['id'])
    result = {'ok': True, 'source_sha256': EXPECTED_SOURCE, 'songs': [s['id'] for s in value['songs']],
              'runtime_ready': False, 'user_authorized': value['asset_policy']['user_authorized'],
              'full_song_runtime': value['asset_policy']['full_song_runtime'],
              'stems_registered': False, 'game_run': False, 'listening_pass': False}
    if args.report:
        path = args.report if args.report.is_absolute() else ROOT / args.report
        path.parent.mkdir(parents=True, exist_ok=True); path.write_text(json.dumps(result, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == '__main__': main()
