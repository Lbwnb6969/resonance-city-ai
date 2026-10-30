# free成长退场：原权益逐ID映射

依据[文档54整合版](54_V7_最终施工改造总案.md)。本表区分现有消费者、已有权益和后续迁移去向，不将提案写成已实现能力。旧ID、原始收据、rank、rarity和人工意图继续保留；本文不授权清空数据或补造经营历史。实际通过范围见[施工证据53](53_功能区与母曲编配施工记录.md)，下一步只在PROJECT/backlog维护。

## 权益保存与退出边界

| 原字段/来源 | 现有语义与迁移约定 |
| --- | --- |
| harmony_xp / harmony_level / xp_remainder | 保存完整整数与小数余量。停止新XP前明确截止边界与余量处理；不默认折成credit、不清零、不补发虚构事件。当前累计规则继续。 |
| credits | 由等级-1+heritage_credit-已选rank总数派生；不另建计数器。旧余额与传承credit继续经原入口领取。 |
| pending_draft / draft_rarities / draft_serial | 原三张邀约、稀有度与序号保持；查看不重抽、不创建邀约、不调用Rarity.ensure。后续停止新抽池时仍须可领旧邀约。 |
| traditions / ranks / rarity_ranks | 18个原ID保留；章程兼看era_modifiers，旧城无journey的章程不能丢失，也不能补写研习阶数。 |
| legacy_charter/era | 仅原收据为正、时代已解锁且未选章程才属待领。权益页只读收据，不调用会初始化收据的Unified.pending。 |
| receipts | 原单调计数保留，包括基线、已收取事件、翻卷次数/保底和旧和弦。存在正数只证明有记录，不能推断必曾领取XP、听过或当前仍成立。 |
| active_vignette / completed_vignettes / echoes | 原来信手动继续/领取；旧奖励和回响继续。free不再派新来信；此处不替换原完成入口。 |
| growth_memories / archive_unlocks / eras | 既有纪念、饰色、收藏与时代记录保持。基础工具/母曲不能重新锁进图鉴。旧未完成章节的后续处理仍需明确。 |
| 百工正式+35% | 当前真实连接的百工来源通过FunctionalBenefits计算，仍正式生效；源撤回时当前收益撤回，旧收据继续保留。停止新收益事件须另验收。 |

J手记“查看已得手札与历史权益”读取原账本，显示已有记录、待领额度、原邀约、已得卡原条件/阶数/稀有度，以及建筑和弦当前资格与历史记录。只列已得卡和已成立/有记录的和弦，不展示未收集清单或完成比例。它不发奖励、不登记新发现、不改保存格式。F1原领取、二阶外观说明/定位及装饰开关继续。

## 18张手札：现有消费者与迁移去向

名称来自HarmonyJourney.cards（12章程+6传统）；下表消费者为实际源码模块，描述仅列主要作用，原家族组合、稀有度倍率及既有权益不在本轮删除。所有行的当前处理都是原ID/效果保留并迁入只读已得展示；“去向”是后续替换消费者的边界，不表示已开放新的基础外观。

| 原ID | 实际已有消费者/作用 | free后续去向 |
| --- | --- | --- |
| warm_hearth_ballad | TraditionRules活水半径6米；ScoreModifiers面包制作；TraditionScenery真实出炉金音与水纹 | 基础水岸表达与真实事件反馈分开；历史生产权益保留 |
| sylvan_luthier_guild | TraditionRules两树琴社；ScoreModifiers工坊制作；首炉消费者沿真实良木条件 | 真实树/作业空间表达，未实现新的免费替代前保留旧效果 |
| twilight_tea_pavilion | ScoreModifiers茶叙/演出余韵；TraditionScenery真实消耗后的金音 | 点景保留真实事件约束，不用假茶聚支撑free表现 |
| stone_step_carillon | TraditionRules石阶阈值0.65米；ScoreModifiers台地步速 | 石阶空间与音乐反馈按真实高程迁移，旧步速保持 |
| lantern_bridge_echo | 活水半径、临水制作、过桥步速、TraditionScenery桥灯；InspirationSamples二阶栈桥小灯/柔和回答 | 已有二阶表达独立记录，不冒充新基础母曲或所有栈桥默认开放 |
| courtyard_canon_spring | ScoreModifiers围院成员制作；Courtyards喷泉随律参数 | 围合Warm/Canon待音乐批次接入，不能将旧卡当新Canon已实现 |
| hearth_neighbors | Cafe实际服务距离40米；面包制作 | 退出free服务前置前保留旧经营权益；真实漫步仍保留 |
| garden_salons | Cafe花簇几何；茶席时长 | 迁为可选真实茶席外观候选，旧生产/时长效果保持 |
| woodland_workbench | TraditionRules良木半径10米；工坊制作 | 百工作业与植物空间表达；半径/经营迁移单独核验 |
| illuminated_atelier | TraditionEconomy真实送画附赠文化层；画室制作 | 已安装装饰保持，不补造送画记录，不直接把未得彩窗授予旧城 |
| brass_orchard | TraditionRules.chime_wave既有风铃传播；钟坊制作 | 真实声音/空间消费者分别迁移，不能把水岸Flowing写成已有作用 |
| cloud_gallery | TraditionRules空廊9米；TraditionEconomy共享品质；生产 | 真实跨接几何保留人工控制，禁止后台自动穿屋或改桥 |
| arcade_market | Travel/Life真实连拱通行茶韵；InspirationSamples二阶爱奥尼柱廊细藤/交织回答 | 实际连拱表达与服务历史分开；已有二阶保留 |
| polyphonic_academy | State画室送画距离无限但仍路网可达；DistrictReply问答间隔2乐句 | 原问答与完整母曲分谱分开；不将其直接重命名为跨岸Canon |
| hydraulic_guild | TraditionEconomy真实临水每三批赠礼入库；临水制作 | 停free经营消费者前保留实物/计数，不用虚构stock补外观 |
| tram_promenade | Tram轨旁8米/坡道速度；茶席/生产消费者 | 原轨街交通和作者内容保留；新装饰电车仍是独立候选 |
| lasting_resonance | Quality临水花园判定；ScoreModifiers余韵；Serializer余韵上限 | free品质前置退出前保留已得效果与旧档范围，不清等级 |
| craft_federation | ScoreModifiers制作；State送装速度；TraditionScenery真实三家邻接合作路标 | 百工空间契约与原三家路标分开；不以旧三职业作为free音乐前置 |

消费者源码：scripts/world下的city_creation_tradition_rules、score_modifiers、tradition_economy、tradition_synergy、cafe、quality、travel、tram、life、state及serializer；scripts/visual下的city_creation_tradition_scenery、city_creation_courtyards；scripts/audio下的city_creation_district_reply；二阶在scripts/world/city_creation_inspiration_samples.gd。后续按依赖关系逐项迁移，不仅修改文案或隐藏按钮。

## 5类建筑和弦：历史记录与当前资格

| 原ID | 当前正式资格/作用边界 | 后续迁移约定 |
| --- | --- | --- |
| pastoral_triad | free由FunctionalBenefits的庭院/水岸同连通分量互哺派生；legacy保留面包/茶座/内院或池塘配方及原收益 | 原ID与旧scoped receipt保持；空间变更只撤当前资格 |
| clockwork_waltz | free由真实百工来源派生；legacy仍是钟坊/玻璃花房/轨街配方 | 百工+35%属独立正式权益，不能把旧40%制作效果与它相加改名 |
| highland_fifth | SynergyBuffs高地4屋、钟楼、真实石阶的旧几何规则及步速消费者 | 旧规则仍运行；新空间化尚未完成，不声称任意台地直接授予 |
| renaissance_fugue | 旧书院/制琴/双连拱配方及工艺/文化消费者 | 新礼乐契约已存在不代表此旧收益已迁；历史效果保留 |
| chrono_counterpoint | 旧双时代成型聚落、两岸或高差、实际桥/音弧及生活共享/生产规则 | 连桥不能自动视为新跨岸Canon；旧服务和收益逐项核验后退出free前置 |

和弦名称取SynergyBuffs.CHORD_NAMES。权益页的“已有记录”按原chord/ID/作用域正数收据读取，包括旧基线；不创建新的发现次数，不把历史正数当当前资格。当前成立只读synergy_buffs实际派生，基础音乐不依赖凑齐5类。正式动态效果仍由原消费者计算。

## 核验与后续切换条件

只读映射需证明空城不初始化邀约、18个ID不丢失、旧无journey章程保留、旧阶数/稀有度/原三张邀约/credit一致；跨Schema20冷读、Undo/Redo、换城和实际入口保持。受测样本明确区分合成历史格式夹具与公开建造实际赚取的奖励。

新XP/新抽池的退出须另完成：列全新事件计点入口（Receipts.collect、来信完成、家族真实事件及直接award_xp等）、明确新旧城切换时间边界、既有小数/未到阈值余量和未领旧任务奖励、保留旧邀约/翻卷规则、显式转换前可回读备份、Undo不可重刷/回退政策、legacy继续经营、基础外观与音乐不被剩余旧卡锁住。当前映射不声称此切换已完成。
