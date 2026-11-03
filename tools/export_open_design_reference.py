"""Export current text-only Gemini design background without overwriting old batches."""
from pathlib import Path
import datetime, hashlib, json, subprocess
ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT.parent / 'AI参考包'
stamp = datetime.datetime.now().strftime('%Y%m%d_%H%M%S')
out = DEST / ('共鸣之城_全系统开放设计_' + stamp)
out.mkdir(parents=True, exist_ok=False)
def git(*args):
    return subprocess.check_output(['git', '-C', str(ROOT), *args]).decode('utf-8', errors='replace').strip()
manifest = {'created': stamp, 'head': git('rev-parse','HEAD'), 'status': git('-c','core.quotePath=false','status','--short'), 'files': [], 'omitted': '音频/图片/模型/个人档/缓存/历史来源原稿/第三方插件/旧参考包；本包为当前脏工作区文本快照，不代表远端发布。'}
seen = {}
def volume(name, paths):
    chunks = []
    for p in sorted(set(paths)):
        if not p.is_file(): continue
        raw = p.read_bytes()
        key = str(p.relative_to(ROOT)).replace('\\','/') if p.is_relative_to(ROOT) else str(p)
        digest = hashlib.sha256(raw).hexdigest()
        if key in seen and seen[key] != digest:
            raise RuntimeError('Source changed during export: '+key)
        seen[key] = digest
        chunks.append('\n\n===== FILE: '+key+' | SHA256: '+digest+' =====\n'+raw.decode('utf-8-sig'))
        manifest['files'].append({'path': key, 'sha256': digest, 'bytes':len(raw), 'volume':name})
    (out/name).write_text('当前工作区只读参考；路径和SHA见各文件头。\n'+''.join(chunks),encoding='utf-8')
docs = ROOT/'文档'
base=[ROOT/n for n in ['AI_START_HERE.md','PROJECT.md','AGENTS.md','project.godot']]
for pattern in ['54_*.md','56_*.md','59_*.md','60_*.md','61_*.md','62_*.md','63_*.md','64_*.md','65_*.md','66_*.md','67_*.md','68_*.md','69_*.md','70_*.md','工程维护.md','全系统开放设计委托_20261103.md']:
    base.extend(docs.glob(pattern))
base.append(docs/'音乐制作批次/Lyria35_施工AI音乐接入手册_20261103.md')
volume('01_当前背景与有效设计.txt',base)
for index,folder in enumerate(['audio','world','visual','ui','city','proposals'],2):
    paths=[p for p in (ROOT/'scripts'/folder).rglob('*') if p.suffix in ['.gd','.gdshader']]
    # Bounded upload units, keeping every source file intact.
    groups=[[]]; size=0
    for p in sorted(paths):
        n=p.stat().st_size
        if size+n>650000 and groups[-1]: groups.append([]);size=0
        groups[-1].append(p);size+=n
    for part,group in enumerate(groups,1):
        if group:volume(f'{index:02d}_{folder}_代码_{part:02d}.txt',group)
metadata=[]
for folder in ['成长政策候选','美术候选','内容储备候选','音乐设计候选','音乐制作']:
    metadata.extend(p for p in (ROOT/'数据'/folder).rglob('*') if p.suffix in ['.json','.md'] and p.stat().st_size<300000)
volume('08_内容目录与候选_非全部已采用.txt',metadata)
volume('09_用户原音乐提示词_历史参考需校正.txt',[Path('C:/Users/Administrator/Desktop')/n for n in ['新的五区.md','xin2.md','xin.md']])
(out/'00_给Gemini的最新委托.md').write_bytes((docs/'全系统开放设计委托_20261103.md').read_bytes())
(out/'00_阅读说明.md').write_text('''# 最新全系统设计背景包
先读00_给Gemini的最新委托.md，再读01_当前背景与有效设计.txt。
用户最新方向：放开全系统设计，不以微景样板、最小验证或旧施工首步限制方案。
设计事实以PROJECT及实际代码为准，旧专题的“待做”不覆盖后续进展。

## 按任务上传
- 城建/美术：00、01、03_world相关分卷、04_visual、08。
- 音乐：00、01、02_audio、08、09；需空间实现再补03_world。
- 成长/居民：00、01、03_world、05_ui、08。
- UI/作品：00、01、05_ui，持久化与状态补03_world。
代码分卷保留原路径，可先按函数名搜索；不要假称读过未上传分卷。
09是用户提供的历史提示词，其中固定80BPM/任意叠加/完美分轨等承诺不作为工程事实。
08为候选资料与音乐目录，不是全部已采用、已试听或可运行。

本包不是可执行工程，不含媒体、外部依赖、个人档、全部测试和来源历史。现有文档内res://、相对链接与本地路径用于定位，附件未包含就向用户索取，不能假装已打开。
来源清单保留HEAD与脏工作区状态；代码按实际工作区导出，不等于提交版或远端版。新包单独保存，旧包完整保留。
''',encoding='utf-8')
# Verify snapshot against the bytes read, and record aggregate output identities.
for row in manifest['files']:
    p=Path(row['path']);p=p if p.is_absolute() else ROOT/p
    if hashlib.sha256(p.read_bytes()).hexdigest()!=row['sha256']:raise RuntimeError('Source changed: '+str(p))
manifest['outputs']=[{'file':p.name,'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest()} for p in sorted(out.iterdir())]
(out/'来源清单.json').write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding='utf-8')
(DEST/'最新全系统设计包.txt').write_text(str(out)+'\n先上传00阅读说明、00最新委托、01当前背景，再按专题上传代码分卷。旧包保留。\n',encoding='utf-8')
print(json.dumps({'output':str(out),'sources':len(seen),'volumes':len(manifest['outputs']),'bytes':sum(x['bytes'] for x in manifest['outputs']),'source_hash_check':'PASS'},ensure_ascii=False))
