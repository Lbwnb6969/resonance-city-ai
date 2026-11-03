"""Copy user music into the project, checking every byte before any cleanup."""
import hashlib
import json
from pathlib import Path
import shutil
import time

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT/'数据/音乐资产'
BACKUP = ROOT/'备份/音乐整合_20261103'


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def run():
    began = time.monotonic()
    checkpoint = BACKUP/'迁入逐文件核验.json'
    report = json.loads(checkpoint.read_text(encoding='utf-8')) if checkpoint.exists() else {'files': [], 'source_preserved': True}
    verified = {r['source']: r for r in report['files']}
    sources = [
        (ROOT/'数据/歌曲-lyria', DEST/'原曲/Lyria/20261103'),
        (Path('D:/GODOT/Music'), DEST/'原曲/Lyria/20261102'),
        (Path('C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐'), DEST),
    ]
    analysis = Path('C:/Users/Administrator/Desktop/mIDDLEFILE/music')
    # work/ is the live analyzer's disposable scratch, removed during analysis.
    for name in ['results', 'input', 'config', 'docs', 'backups', 'deprecated']:
        sources.append((analysis/name, DEST/'参考分析'/name))
    for path in analysis.glob('*.mp3'):
        sources.append((path, DEST/'参考分析/原曲'/path.name))
    for name in ['batch_fixture', 'batch_validation', 'validation']:
        sources.append((analysis/'work'/name, DEST/'参考分析/补充成果'/name))
    for path in (analysis/'work').glob('*.wav'):
        sources.append((path, DEST/'参考分析/补充成果'/path.name))
    for path in (analysis/'work/reference_prompt_20261102').glob('*.json'):
        sources.append((path, DEST/'参考分析/补充成果/reference_prompt_20261102'/path.name))
    for src, dst in sources:
        files = [src] if src.is_file() else sorted(p for p in src.rglob('*') if p.is_file())
        if files and all(str(p) in verified for p in files):
            for original in files:
                record = verified[str(original)]
                if sha(original) != record['sha256'] or sha(Path(record['destination'])) != record['sha256']:
                    raise ValueError(f'Checkpoint source/destination changed: {original}')
            print(f'REUSE verified checkpoint {src}: {len(files)} files', flush=True)
            continue
        for original in files:
            target = dst if src.is_file() else dst/original.relative_to(src)
            before = sha(original)
            target.parent.mkdir(parents=True, exist_ok=True)
            if target.exists():
                if sha(target) != before:
                    raise ValueError(f'Conflicting destination: {target}')
            else:
                shutil.copy2(original, target)
            if sha(target) != before or sha(original) != before:
                raise ValueError(f'Copy/source changed: {original}')
            verified[str(original)] = {'source': str(original), 'destination': str(target),
                                      'bytes': target.stat().st_size, 'sha256': before}
        report['files'] = list(verified.values())
        print(f'VERIFIED {src}: {len(files)} files', flush=True)
        (BACKUP/'迁入逐文件核验.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    report.update(seconds=round(time.monotonic()-began, 3), complete=True)
    (BACKUP/'迁入逐文件核验.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    print(f'PASS {len(report["files"])} files, {report["seconds"]}s', flush=True)


if __name__ == '__main__':
    run()
