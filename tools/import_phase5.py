"""Import the user's phase-five design without replacing accepted milestones."""
import hashlib
import json
from pathlib import Path

root = Path(__file__).resolve().parents[1]
source = root / '新文档'
target = root / 'ai_feature_backlog.json'
backlog = json.loads(target.read_text(encoding='utf-8'))
incoming = json.loads((source / 'ai_feature_backlog.json').read_text(encoding='utf-8'))
if len(backlog['milestones']) == 44:
    for i, item in enumerate(incoming['milestones'][44:]):
        item = dict(item)
        item.update(description=item['design_intent'], verification_cmd='; '.join(item['verification_commands']), verified_by='', design_source='新文档/文档/31_五期极简丰盈系统与声画满贯施工总纲.md')
        backlog['milestones'].append(item)
    backlog['phase'] = 'M45–M52 · 五期轻经营、稀有奇观与声画精修'
    backlog['design_source'] = '新文档/文档/31_五期极简丰盈系统与声画满贯施工总纲.md'
    target.write_text(json.dumps(backlog, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    for name in ['AI_START_HERE.md', 'PROJECT.md', '文档/31_五期极简丰盈系统与声画满贯施工总纲.md']:
        (root / name).write_bytes((source / name).read_bytes())
    harness = root / 'tools/check_ai_harness.py'
    content = harness.read_text(encoding='utf-8').replace('M01～M44', 'M01～M52').replace('range(1, 45)', 'range(1, 53)')
    contract = [{k: m.get(k) for k in ('id', 'title', 'description', 'verification_cmd')} for m in backlog['milestones']]
    digest = hashlib.sha256(json.dumps(contract, ensure_ascii=False, sort_keys=True).encode()).hexdigest()
    content = content.replace('4c5580b39c077b743c0bea3ee5567012cdd9022d2cd74a364017a24fd25cefdf', digest)
    harness.write_text(content, encoding='utf-8')
    with (root / 'AGENTS.md').open('a', encoding='utf-8') as f:
        f.write('\n## 用户2026-10-25五期续建授权（覆盖M44停止点）\n\n按新文档第五期设计导入并依序施工M45～M52，每轮单任务、三门禁、Git备份及GitHub同步；原件只读。代码适配现有接口，明显不合适的设计可记录取舍。M51独立上下文Critic审阅实际原图与音频诊断，如实评分，不强制9分；M52终验同步后停止。\n')
    print('Imported M45–M52; preserved all 44 accepted milestones. Contract:', digest)
