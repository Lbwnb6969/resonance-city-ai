"""Import the user's phase-five design without replacing accepted milestones."""
import hashlib
import json
from pathlib import Path

root = Path(__file__).resolve().parents[1]
source = root / '新文档'
target = root / 'ai_feature_backlog.json'
backlog = json.loads(target.read_text(encoding='utf-8'))
incoming = json.loads((source / 'ai_feature_backlog.json').read_text(encoding='utf-8'))
titles = [
    '调式三六度双音、4-3延留解决与踩拍协和的空间短音',
    '三层轻经营供需、全工坊首秀与三阶稀有手札保底',
    '朝水栈桥、环岛涌泉与斜向街角口袋花园',
    '四座传世声学奇观、流派共鸣碑与经营轻语',
    '古典复合别墅、赤陶天窗与花房夜景通透化',
    '垂弯草叶、螺旋柏树、迈腿举杯与远景大气透视',
    '独立声画品质审阅与具体缺陷闭环',
    '五期跨进程续玩、旧档兼容与GitHub收官',
]
descriptions = [
    '真实调式三/六度伴奏与句尾4-3延留解决；所有短音按共享0.1875秒网格预入轨，按发声小节和弦吸附，近景生活短音扩至30米并平滑衰减，保持既有音池。',
    '面包与制琴供给茶座及书院，真实道路连通与库存守恒；钟表工坊14米提速；各工坊首次满足环境条件即时兑现且不可撤销刷取；手札银/金/虹彩稀有度与三次保底，接真实进度及欢庆。',
    '沿真实水岸方向派生亲水栈桥与系船灯；邻屋环岛派生涌泉花坛；斜向房屋空隙派生含接地底座的口袋花园；兼容真实门路、旋转、删除及经营条件。',
    '依虹彩传世手札和风物诗进度派生四种可辨识声学奇观与流派共鸣碑；十屋后针对未体验经营给温和轻语，增加羊皮底托并保持小窗可读。',
    '保留玩家层/台/模块的古希腊多立克底层山花柱廊与上层退台；宽屋面赤陶采光天窗；降低蒸汽花房夜光，保留内部植物和真实碰撞净空。',
    '近草柔尖重力垂弯、黄金角螺旋柏树、清晰迈腿与茶杯贴近唇边；低视角远景大气透视；以实图调整参数，保持权威居民位置及合批。',
    '采集五期实际双尺寸昼夕夜原图和真实Master录音，独立上下文Critic审阅音乐诊断、经营与街景、古建筑、自然小人和UI，修复具体阻挡并如实记录评分。',
    '跨进程全旅程、18原型/古典/旋转/新街景、300屋体验、Schema1至19与27作品兼容；独立品质记录、提交备份、GitHub main文件树一致后停止，不强制虚构9分。',
]
if len(backlog['milestones']) == 44:
    for i, item in enumerate(incoming['milestones'][44:]):
        # Source appendix has literal U+FFFD replacement characters. Keep the
        # original read-only; recover these definitions from its readable MD.
        commands = item['verification_commands']
        backlog['milestones'].append(dict(
            id=f'M{i+45}', category=item['category'], title=titles[i],
            description=descriptions[i], verification_cmd='; '.join(commands),
            passes=False, verified_by='',
            design_source='新文档/文档/31_五期极简丰盈系统与声画满贯施工总纲.md'))
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
