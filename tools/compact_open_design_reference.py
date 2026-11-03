"""Build a <=2,200,000-byte text reference from a preserved full snapshot."""
from pathlib import Path
import hashlib,json,re,datetime
BASE=Path('D:/GODOT/GODOTPRO/AI参考包')
source=BASE/'共鸣之城_全系统开放设计_20261103_103306'
out=BASE/('共鸣之城_全系统开放设计_精简_'+datetime.datetime.now().strftime('%Y%m%d_%H%M%S'))
out.mkdir(exist_ok=False)
manifest={'source_snapshot':str(source),'selection':[],'limit_bytes':2200000}
def write(name,text):
    (out/name).write_text(text,encoding='utf-8')
def blocks(pattern):
    result=[]
    for p in sorted(source.glob(pattern)):
        for x in p.read_text(encoding='utf-8').split('===== FILE: ')[1:]:
            header,body=x.split(' =====\n',1)
            path,sha=header.rsplit(' | SHA256: ',1)
            result.append((path,sha,body))
    return result
def render(row):
    path,sha,body=row
    return '\n===== FILE: '+path+' | SHA256: '+sha+' =====\n'+body
for name in ['00_给Gemini的最新委托.md','01_当前背景与有效设计.txt','09_用户原音乐提示词_历史参考需校正.txt']:
    (out/name).write_bytes((source/name).read_bytes())
priorities={
'audio':['game_music','affinity','music.gd','transport','transition','ambience','theme'],
'world':['state.gd','progression','reward','functional','contract','affinity','prototype','life.gd','serializer','road','water','terrain','detail','window','roof','citizen','bakery','cafe'],
'visual':['renderer.gd','shader','material','wall','window','roof','foliage','water','terrain','detail','chimney','porch','environment'],
'ui':['demo.gd','tactile','palette','inspector','progression','gallery','music','detail','window','road','terrain','creative','bench']}
budgets={'audio':410000,'world':435000,'visual':435000,'ui':330000}
for category in priorities:
    rows=blocks('*_'+category+'_代码_*.txt')
    def rank(row):
        return next((i for i,k in enumerate(priorities[category]) if k in row[0]),999),row[0]
    selected=[];skipped=[];size=0
    for row in sorted(rows,key=rank):
        n=len(render(row).encode('utf-8'))
        if size+n<=budgets[category]:selected.append(row);size+=n
        else:skipped.append(row)
    write(category+'_关键源码.txt','精选完整文件；未收录依赖见索引。本卷不是可独立运行的工程。\n'+''.join(render(r) for r in selected))
    for path,sha,body in selected:manifest['selection'].append({'path':path,'sha256':sha,'mode':'full'})
    for path,sha,body in skipped:manifest['selection'].append({'path':path,'sha256':sha,'mode':'index_only'})
# Candidate directory: retain identity and top-level structure, not repeated data tables.
catalog=[]
for path,sha,body in blocks('08_*'):
    item={'path':path,'sha256':sha}
    try:
        data=json.loads(body)
        item['structure']=list(data.keys()) if isinstance(data,dict) else {'list_count':len(data)}
        if isinstance(data,dict):
            for key in ['title','version','schema','runtime_ready','description']:
                if key in data and isinstance(data[key],(str,int,bool)):item[key]=data[key]
    except (ValueError,TypeError):item['structure']='文本说明，仅列索引'
    catalog.append(item)
write('08_候选资料索引_非正文.json',json.dumps(catalog,ensure_ascii=False,separators=(',',':')))
write('00_阅读说明.md','''# 2.2MB以内的设计背景包
全部文件合计按十进制2,200,000字节封顶，包含索引与来源清单，不靠ZIP压缩满足限制。
先读最新委托与01设计背景，再读相应audio/world/visual/ui关键源码。
有效设计文档与用户三份音乐提示词保留；源码按专题选完整文件，不截断函数或压成难读代码。
旧候选大表改成08索引，不冒充已提供正文。未选源码只在来源清单标index_only，不能据此声称检查了其实现；需要深入时再从原完整版按路径补充。
本包是20261103_103306完整版的压缩选编，不是重新采集当前工作区。该快照含未提交修改，不代表远端发布。来源SHA指向原文件；文件间存在未收录依赖，不能直接运行。
设计范围保持开放，不以微景样板或最小验证限制创意。历史提示词中的任意跨曲叠加/完美分轨等承诺已被最新背景校正。
原完整版完整保留，不含在本包总量内。音频/截图未附，不得虚构听评/视觉评分。
''')
manifest['outputs']=[{'file':p.name,'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest()} for p in sorted(out.iterdir())]
write('来源清单.json',json.dumps(manifest,ensure_ascii=False,separators=(',',':')))
size=sum(p.stat().st_size for p in out.iterdir())
assert size<=2200000,(size,out)
# Verify retained full-file sections against the preserved snapshot verbatim.
original={p:b for kind in priorities for p,s,b in blocks('*_'+kind+'_代码_*.txt')}
for file in out.glob('*_关键源码.txt'):
    for block in file.read_text(encoding='utf-8').split('===== FILE: ')[1:]:
        head,body=block.split(' =====\n',1)
        path=head.split(' | SHA256: ')[0]
        assert body.rstrip('\n')==original[path].rstrip('\n'),path
(BASE/'最新全系统设计包.txt').write_text(str(out)+'\n全部文件合计 '+str(size)+' 字节；上传此目录。完整版保留。\n',encoding='utf-8')
print(json.dumps({'out':str(out),'total_bytes':size,'limit':2200000,'full_source_files':sum(x['mode']=='full' for x in manifest['selection']),'verification':'PASS'},ensure_ascii=False))
