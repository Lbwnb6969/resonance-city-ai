"""Build navigation, archive and verify collected source bytes and entry anchors."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import zipfile

BASE = Path(__file__).resolve().parent
ROOT = BASE.parents[1]

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--git-index',action='store_true')
    args=parser.parse_args()
    sources=json.loads((BASE/'来源索引.json').read_text(encoding='utf-8'))
    reviews=json.loads((BASE/'项目评估.json').read_text(encoding='utf-8'))
    by_repo={r['repo']:r for r in reviews}
    failures=[]
    entries=[]
    lines=['# 固定版本源码阅读入口','', '优先读P0条目，再按当前缺口定向取文件。优先级只属于候选研究，不覆盖施工阶段。全部第三方程序未在本轮执行。','', '| 项目 | 研究优先级 | 许可快照 | 用途 |','|---|---|---|---|']
    for r in sources:
        v=by_repo[r['repo']]
        lines.append(f"| [{r['repo']}](https://github.com/{r['repo']}/tree/{r['commit']}) | {v['priority']} | {v['license']} | {v['value']} |")
    for r in sources:
        v=by_repo[r['repo']]
        files=r.get('files',[])
        entry=next((f for f in files if f['path']==v['entry']),None)
        if not entry: failures.append(r['repo']+':missing-review-entry')
        entries.append({'repo':r['repo'],'commit':r['commit'],'priority':v['priority'],'entry':entry,'boundary':v['boundary']})
        lines.extend(['',f"## {r['repo']}",'',f"固定提交 `{r['commit']}`；{len(files)}份文件；许可：{v['license']}。",'',v['value']+'。'+v['boundary'],''])
        for f in files:
            raw=(BASE/f['local_path']).read_bytes()
            if hashlib.sha256(raw).hexdigest()!=f['sha256'] or len(raw)!=f['bytes']:
                failures.append(f['local_path']+':bytes')
            source_lines=raw.decode('utf-8',errors='replace').splitlines()
            for a in f['anchors']:
                if source_lines[a['line']-1].strip()[:180]!=a['signature']:
                    failures.append(f['local_path']+':anchor')
            if args.git_index:
                rel=(BASE/f['local_path']).relative_to(ROOT).as_posix()
                staged=subprocess.check_output(['git','show',':'+rel],cwd=ROOT)
                if hashlib.sha256(staged).hexdigest()!=f['sha256']:
                    failures.append(f['local_path']+':git-index')
            mark='**首读** ' if entry and f['path']==entry['path'] else ''
            lines.append(f"- {mark}[{f['path']}]({f['local_path']}) · [固定版本原文]({f['url']})")
            if mark and f['anchors']:
                a=f['anchors'][0]
                lines.append(f"  - 定位例：L{a['line']} `{a['signature'].replace('`','')}` · [原文定位]({f['url']}#L{a['line']})")
    if not args.git_index:
        (BASE/'阅读入口.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
        (BASE/'阅读入口.json').write_text(json.dumps(entries,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    archive=BASE/'固定版本阅读包.zip'
    if not args.git_index:
        with zipfile.ZipFile(archive,'w',compression=zipfile.ZIP_DEFLATED,compresslevel=9) as z:
            for r in sources:
                for f in r.get('files',[]): z.write(BASE/f['local_path'],f['local_path'])
            for path in sorted(BASE.iterdir()):
                if path.is_file() and path.name not in {'固定版本阅读包.zip','校验结果.json'}:
                    z.write(path,path.name)
    with zipfile.ZipFile(archive) as z:
        for r in sources:
            for f in r.get('files',[]):
                if hashlib.sha256(z.read(f['local_path'])).hexdigest()!=f['sha256']:
                    failures.append(f['local_path']+':zip')
    if args.git_index:
        rel=archive.relative_to(ROOT).as_posix()
        staged=subprocess.check_output(['git','show',':'+rel],cwd=ROOT)
        if hashlib.sha256(staged).digest()!=hashlib.sha256(archive.read_bytes()).digest():
            failures.append('archive:git-index')
    counts={}
    for r in reviews: counts[r['priority']]=counts.get(r['priority'],0)+1
    result={'repositories':len(sources),'files':sum(len(r.get('files',[])) for r in sources),'source_bytes':sum(f['bytes'] for r in sources for f in r.get('files',[])), 'archive_bytes':archive.stat().st_size, 'archive_sha256':hashlib.sha256(archive.read_bytes()).hexdigest(),'review_priorities':counts,'git_index_verified':args.git_index,'failures':failures,'scope':'fixed file bytes, excerpt anchors, review entries, archive and optionally staged bytes; no third-party execution or game compatibility validation'}
    (BASE/'校验结果.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(result,ensure_ascii=False,indent=2))
    raise SystemExit(bool(failures))

if __name__=='__main__': main()
