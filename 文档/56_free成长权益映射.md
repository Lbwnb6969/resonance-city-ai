# free成长退场：原权益逐ID映射

依据[文档54整合版](54_V7_最终施工改造总案.md)。本表区分现有消费者、已有权益和后续迁移去向，不将提案写成已实现能力。旧ID、原始收据、rank、rarity和人工意图继续保留；本文不授权清空数据或补造经营历史。实际通过范围见[施工证据53](53_功能区与母曲编配施工记录.md)，下一步只在PROJECT/backlog维护。

## 权益保存与退出边界

| 原字段/来源 | 现有语义与迁移约定 |
| --- | --- |
| harmony_xp / harmony_level / xp_remainder | 保存完整整数与小数余量。停止新XP前明确截止边界与余量处理；不默认折成credit、不清零、不补发虚构事件。legacy当前累计规则继续；正式free入口已截止城保存原余量，停止普通新加点，旧来信按凭据兑现。 |
| credits | 由等级-1+heritage_credit-已选rank总数派生；不另建计数器。旧余额与传承credit继续经原入口领取。 |
| pending_draft / draft_rarities / draft_serial | 原三张邀约、稀有度与序号保持；查看不重抽、不创建邀约、不调用Rarity.ensure。后续停止新抽池时仍须可领旧邀约。 |
| traditions / ranks / rarity_ranks | 18个原ID保留；章程兼看era_modifiers，旧城无journey的章程不能丢失，也不能补写研习阶数。 |
| legacy_charter/era | 仅原收据为正、时代已解锁且未选章程才属待领。权益页只读收据，不调用会初始化收据的Unified.pending。 |
| receipts | 原单调计数保留，包括基线、已收取事件、翻卷次数/保底和旧和弦。存在正数只证明有记录，不能推断必曾领取XP、听过或当前仍成立。 |
| active_vignette / completed_vignettes / echoes | 原来信手动继续/领取；旧奖励和回响继续。free不再派新来信；此处不替换原完成入口。 |
| growth_memories / archive_unlocks / eras | 既有纪念、饰色、收藏与时代记录保持。基础工具/母曲不能重新锁进图鉴。旧未完成章节的后续处理仍需明确。 |
| 百工正式+35% | 当前真实连接的百工来源通过FunctionalBenefits计算，仍正式生效；源撤回时当前收益撤回，旧收据继续保留。显式转换截止后不再给普通新事件加点，仍保留当前正式资格并用于真实旧来信奖励；其他入口待接。 |

J手记“查看已得手札与历史权益”读取原账本，显示已有记录、待领额度、原邀约、已得卡原条件/阶数/稀有度，以及建筑和弦当前资格与历史记录。只列已得卡和已成立/有记录的和弦，不展示未收集清单或完成比例。它不发奖励、不登记新发现、不改保存格式。F1原领取、空间微景说明/定位及装饰开关继续，旧二阶记录独立保留。

## 18张手札：现有消费者与迁移去向

名称来自HarmonyJourney.cards（12章程+6传统）；下表消费者为实际源码模块，描述仅列主要作用，原家族组合、稀有度倍率及既有权益不在本轮删除。所有行的当前处理都是原ID/效果保留并迁入只读已得展示；“去向”是后续替换消费者的边界，不表示已开放新的基础外观。

| 原ID | 实际已有消费者/作用 | free后续去向 |
| --- | --- | --- |
| warm_hearth_ballad | TraditionRules活水半径6米；ScoreModifiers面包制作；TraditionScenery真实出炉金音与水纹 | 基础水岸表达与真实事件反馈分开；历史生产权益保留 |
| sylvan_luthier_guild | TraditionRules两树琴社；ScoreModifiers工坊制作；首炉消费者沿真实良木条件 | 真实树/作业空间表达，未实现新的免费替代前保留旧效果 |
| twilight_tea_pavilion | ScoreModifiers茶叙/演出余韵；TraditionScenery真实消耗后的金音 | 点景保留真实事件约束，不用假茶聚支撑free表现 |
| stone_step_carillon | TraditionRules石阶阈值0.65米；ScoreModifiers台地步速 | 石阶空间与音乐反馈按真实高程迁移，旧步速保持 |
| lantern_bridge_echo | 活水半径、临水制作、过桥步速、TraditionScenery桥灯；InspirationSamples二阶栈桥小灯/柔和回答 | 原二阶表达已为free按真实临水栈桥派生，无需卡/rank；历史半径/制作/步速权益保持，不推广到所有桥型 |
| courtyard_canon_spring | ScoreModifiers围院成员制作；Courtyards喷泉随律参数 | 围合Warm/Canon待音乐批次接入，不能将旧卡当新Canon已实现 |
| hearth_neighbors | Cafe实际服务距离40米；面包制作 | 退出free服务前置前保留旧经营权益；真实漫步仍保留 |
| garden_salons | Cafe花簇几何；茶席时长 | 迁为可选真实茶席外观候选，旧生产/时长效果保持 |
| woodland_workbench | TraditionRules良木半径10米；工坊制作 | 百工作业与植物空间表达；半径/经营迁移单独核验 |
| illuminated_atelier | TraditionEconomy真实送画附赠文化层；画室制作 | 已安装装饰保持，不补造送画记录，不直接把未得彩窗授予旧城 |
| brass_orchard | TraditionRules.chime_wave既有风铃传播；钟坊制作 | 真实声音/空间消费者分别迁移，不能把水岸Flowing写成已有作用 |
| cloud_gallery | TraditionRules空廊9米；TraditionEconomy共享品质；生产 | 真实跨接几何保留人工控制，禁止后台自动穿屋或改桥 |
| arcade_market | Travel/Life真实连拱通行茶韵；InspirationSamples二阶爱奥尼柱廊细藤/交织回答 | free原细藤/回答仅在田园爱奥尼长馆真实边柱生效，无需卡/rank；旧连拱通行/茶韵与二阶记录保留，不推广全部柱廊 |
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

新XP/新抽池的退出须另完成：列全新事件计点入口（Receipts.collect、来信完成、家族真实事件及直接award_xp等）、明确新旧城切换时间边界、既有小数/未到阈值余量和未领旧任务奖励、保留旧邀约/翻卷规则、显式转换前可回读备份、Undo不可重刷/回退政策、legacy继续经营、基础外观与音乐不被剩余旧卡锁住。四类城市的正式入口已接通，消费者呈现与最终整体验收仍继续。

## 切换实施契约（2026-10-30正式入口已接通）

本节将上述条件落到实际入口与行为边界。显式legacy转换、新自由城/六地貌以及既有free的正式文件/收藏打开已接通下述截止事务，技术证据见53；legacy继续原累计。下表按原机制与最终目标列示，具体通过范围见本节后续入口边界，不能以入口子步代替成长退场全部消费者和最终验收。迁移先接通内容权限，再停止新收益。

### 事件与邀约入口

以下路径均在scripts目录下。函数名用于实现时核对调用链；纯字典API没有city上下文，不能只在UI轮询加free判断。

| 源码入口 | 当前行为 | 切换后的free行为 |
| --- | --- | --- |
| world/city_creation_harmony_receipts.gd：initialize/counters/collect | 新屋2、面包2、送装10、茶聚8、心愿24、和弦30、市政收取30乘真实增量；bake/tea_house/delivery还调用家族bonus_xp | 切换前真实待采集增量一次结算；切换后保留真实经营收据，停止新增普通XP，不将实际生产计数清零 |
| world/city_creation_functional_benefits.gd：award_xp | 所有city XP入口汇入此处；空间乘数、xp_remainder、整数XP再交Journey | 统一区分普通新事件与有凭据的旧来信领取，不靠UI调用者自觉停发；零发放不得消耗小数或触发refresh_draft |
| world/city_creation_tradition_synergy.gd：record_batch/record_delivery/bonus_xp | 记录真实制作、送装；家族按临水/高地/茶席等真实条件加点 | 保留真实计数与已有消费者；普通新事件不再借家族附加点绕过停发 |
| world/city_creation_debut_encore.gd：observe/encore/tick | 首演记debut收据供collect；返场直接award_xp(25)，有进度收据和冷却 | 保留真实首演/互动及已有库存效果；停止返场新XP，不能仅停collect |
| world/city_creation_vignettes.gd：complete | 来信真实达标才写完成/祝福/回响，清active后直接award_xp | 仅切换时已存在的原id+serial可继续按原条件领取一次；保留真实完成与原奖励，不能允许任意普通award_xp声明为历史奖励 |
| world/city_creation_harmony_journey.gd：add_harmony_xp/refresh_draft/choose_inspiration/apply | 加点、刷新/选后续卷、Undo合并已得账本都可进入抽池 | 防止直接API、Undo和冷读重新开启普通成长；旧额度可兑现，不能只处理当前一份pending |
| world/city_creation_draft_rarity.gd：ensure/chosen/reroll | ensure会生成序号/稀有度/保底收据，reroll消耗原预算 | 只为可兑现的历史额度服务；保留原邀约三张/稀有度/序号和已用翻卷次数，查看权益页不调用ensure；不新增成长保底循环 |
| world/city_creation_heritage_draft.gd：grant；ui/city_creation_gallery.gd：新河湾入口 | 有图鉴大奖、biome且无普通屋时新增heritage_credit和邀约 | 新free城停止新增传承抽池；已有heritage_credit/收据保留并可领，legacy按原规则 |
| world/city_creation_unified_rewards.gd：initialize/pending/choose_legacy | pending并非只读，会初始化已解锁时代的旧章程收据 | 切换时识别真实旧章程资格并保存；后续新增free风貌可用性不能伪造旧章程收据；已有待领入口继续 |
| ui/city_creation_inspiration_draft.gd：poll/refresh/choose/display | 每0.5秒collect；refresh会pending/ensure；choose再collect；升级可触发提示音 | 无待领旧权益时不显示成长提示；有历史待领时保留F1入口、原选择/翻卷；不能靠隐藏badge代替上游停发 |

collect中的重复研习倍率和Rarity.xp_multiplier也只作用于真实可结算奖励；百工+35%当前正式资格保持，已截止转换城的旧来信延期领取仍按实际领取时的真实空间资格及原倍率计算，不冻结或补造百工来源。普通新收益关闭后不将+35%冒充新生产加速，也不删除其当前空间资格或历史记录。

### 四种城市与切换时刻

| 城市 | 生效点与数据处理 |
| --- | --- |
| 新自由城 | 已接通：State.initialize_free/CreationPolicy.initialize_biome直接登记new_free起点，零XP/等级1/零credit，不创建免费邀约、等级补偿或传承credit。 |
| 已有自由城 | 已接通：State.load_city与Gallery._open_chosen先完整校验独立候选，在Life/奖励轮询前备份回读、派生原真实道路图、结算旧差额并登记migrated_free；哈希截止副本成功发布后才切城。重复打开同一原件复用该副本，失败原城保持。 |
| legacy显式转换城 | 已接通：沿CreationPolicy.convert的转换前原貌/目标原件备份并回读，在政策改free前以原legacy公式结算真实旧差额，保存growth_cutoff/version1/source=converted_legacy；保存失败恢复完整原journey、政策/版本/dirty，原legacy继续。 |
| legacy未转换城 | 不创建free截止状态；原XP、抽池、经营、章程、成长和存档校验继续。 |

截止状态采用独立、显式版本化且严格校验的数据，不复用creation_policy或migration_version=1来推断成长已迁；原migration_version表示已有转换，不能让所有旧free作品被当成已经结算。新字段的兼容、来源与枚举校验随实现交付，Schema1～19仍缺省legacy，Schema20旧free进入上述一次迁移。没有真实待采集事件就不发XP；没有journey时建立基线不凭当前房屋倒补历史。

一次结算复用原数值公式，分离邀约补齐副作用，不能原样调用collect→award_xp→add_harmony_xp：该链无条件refresh_draft/ensure，会给缺元数据旧邀约写入稀有度与保底。原pending不重抽；只有真实差额使原本零额度首次变成正额度时，才按原算法建立三张待兑现卡，稀有度仍延迟到主动兑现。HarmonyValidation当前要求正credit对应三张pending，不能先保存正额度空pending，也不能靠清空额度绕过校验。

切换是作品事务，不以机器日期或下一次poll时间为界。记录的截止与旧来信领取凭据随作品保存；Undo/Redo只能恢复建设与原选择，不撤回截止、不恢复已消费奖励或翻卷预算。切换后的新房屋、经营事件、重新连通、换城、重复读取及过期后台结果均不能混进截止前结算。

### 旧余量与未领权益

1. 一次真实结算后的harmony_xp、harmony_level及xp_remainder原值保存。未达阈值的整数和小数保留为历史余量，不凑整、不折credit、不清零。只在有凭据的原来信奖励兑现时沿原算法相加；累计跨阈值产生的额度属于旧奖励兑现。
2. 原credits派生公式保持。即使credits大于1且pending只有三张，也须逐笔可领；后续卷属于已有额度兑现，不重新开放新事件获得额度。原三张、顺序、稀有度、序号、翻卷已用计数保持；旧格式缺稀有度时只在主动兑现时按既有兼容算法生成，不能在只读浏览或迁移盘点时生成。
3. 切换时的active_vignette即使未达标也保留原id、serial、tier、基线与完成条件。只在真实满足条件后授原XP、祝福与回响；登记一次领取凭据，清active与写凭据同事务。完成后不派新任务；不得按切换时未发生的完成、stock、served或茶聚预发奖励。
4. 原章程、heritage_credit、rank、rarity_ranks、era_modifiers、growth_memories、archive_unlocks及原收据不重写为“已免费获得”。普通工具可用性与历史获得记录分离；新增可用权限不会增加成就、完成比例或领取提示。

### 停收益前必须接通的内容门禁

| 内容 | 当前入口/消费者及迁移要求 |
| --- | --- |
| 四类独立地标 | LegendaryWonderPlan.unlocked_journey继续只表示虹彩已得卡或真实二阶回响历史。PlacedLandmarks.available_blueprints已为free独立派生四类基础可用权限，GroundLandmarkTool按钮、preview和validate_geometry共用；无卡目录点击/API/冷读已受测，见53，不伪造rarity/echoes。四类唯一性、实地净空及身份验证保持。旧屋式六地标另行保留自身固定结构与历史资格，见下一行。 |
| 旧屋式六地标 | Signatures.available已将free基础可建与signature_unlocks历史分离；名胜目录/begin、公开preview/place、Schema20冷读已受测。free不需要经营或时代里程碑，但原历史解锁数组仍严格校验；legacy沿原资格。水车轮缘入水、舞台伸水、唯一性、固定角色/房间结构和稳定身份保持，不与四类独立地标混为一套。 |
| 六种奖励饰色 | ArchiveRewards.finish_available已区分free六饰色基础可用与legacy原四章纪念/两项图鉴资格；State、Journal/SpatialPopover和Serializer共用。新free实际六色选择/Undo/逐色磁盘冷读、转换和原四基础色回归已受测，见53；原纪念/图鉴保持真实。压缩顶点色编码与重合配方的重建回退已修，不向获得账本补写记录。 |
| 两个额外调式及其余规划调式 | ArchiveRewards.mode_available/validate、State.set_music_mode及Gallery已区分free基础可用与legacy原图鉴资格；只开放原gong_pentatonic/impressionist_major7两枚举。原生选择、实际core分轨mode8/9、建造短cue、量化点屋音、Undo/冷读/转换和忙碌门禁已受测，见53；未生成图鉴大奖。其余规划调式/六首母曲全调式仍按音乐批次验收，不以此子步冒充完成。 |
| 四时代普通风貌 | CreationPolicy.can_build_era/eras/data_can_build_era已区分free可用与era_unlocks历史。保持既有开放，不重跑解锁；Eras.refresh、时代仪式及Unified旧章程不能因可用性开放补造历史。 |
| 二阶样板与微景 | InspirationSamples.plans已将free栈桥小灯/柔和回答、田园爱奥尼长馆边柱细藤/交织回答与rank历史分离；无卡实际几何/原生F1说明、定位、显示开关/原回答播放器/磁盘冷读受测，见53。支撑撤回即撤未来资格，音乐沿原24秒乐句锁存；收起自动装饰仅隐藏模型，音乐与旧rank/rarity保持。legacy原貌不变，不推广所有桥/所有柱廊，也不把18卡全部承诺为已有免费外观。其余真实经营/纪念消费者按本表保留；新表现按54逐空间批次接续，不补造真实事件。 |

### 已接通的显式转换边界

harmony_journey.growth_cutoff为独立三字段记录：version=1、source枚举、vignette为空或原id/serial/claimed凭据。HarmonyValidation严格核对字段、枚举、原来信/已完成状态；Serializer要求Schema20/free，converted_legacy必须对应migration_version1。新字段缺省不代表已截止，旧schema/legacy不能携带截止记录。new_free额外要求零旧成长余额/传承credit/来信序号，不能把有效旧余额改标为新起点；已截止的直接铭牌API也要求原legacy_charter收据。新城直接登记；旧free只在正式打开迁移，原始快照校验/列表/回放不产生迁移I/O。

GrowthTransition复用HarmonyReceipts.take_events的原真实差额和倍率，再通过FunctionalBenefits的受控旧奖励计算保留余量与等级；只在真实差额跨出第一个正credit且原pending空时建立三张待兑现卡，不调用Rarity.ensure。零差额不消耗余量。转换只为真实已解锁且未选章程初始化原Unified收据，不因free可用风貌授予历史。

截止后普通FunctionalBenefits.award_xp和纯字典Journey.add_harmony_xp均不加点或生成邀约；普通collect仍记录真实经营收据，Heritage不新授额度。原credits仍可逐笔兑现，只有主动翻开/选择才补旧缺稀有度元数据；选择在增加rank前确定原邀请slot，避免多credit错位。几何/翻卷Undo保留当前邀约，选择Undo读取该slot最新已付翻卷记录，不新建保底/序号或退还预算。原来信在真实条件达标且id+serial与截止凭据吻合时，沿原入口一次发XP/祝福/回响并标已领；普通加点API没有“旧奖励”旁路参数。

原无journey城建立真实基线，不凭已有屋补XP；原有整数/小数、多credit、pending顺序/稀有度/序号、旧rank及真实库存保持。四主文件净改0。本子步的77项CPU与36项实际GL仅证明显式转换链，四种城市完整验收仍按下列范围继续。

### 新城与既有free的正式打开边界

新城和六地貌在CreationPolicy初始化时建立真实基线并登记new_free，普通XP和Heritage均不能创建新额度。原无截止字段的Schema20 free由GrowthOpening处理：State.load_city覆盖继续档与公开文件入口；Gallery在候选restore后、archive继承与当前城checkpoint之前迁移，任何失败都不发布候选。State.restore/Serializer.read/Collection.read仍为只读校验/工作线程与预览工具，不启动迁移，不把解析历史数据当成正式切城。

旧free候选先独立保存原城市并严格回读；有源文件时另留原文件字节副本。只调用原Network道路图与区域派生，不启动Life/生产/首演/任务，再以原公式结算真实差额和当前正式+35%。迁移结果按规范化原世界SHA256存为独立截止副本，带内容哈希和原貌备份引用；暂存回读通过后原子发布，坏副本拒绝，不悄悄重结算。收藏JSON/封面保持原字节，原版本继续遵循既有不可变版本语义；编辑后保存的新版本包含已消费旧权益，正常重开不复发。

备份引用相对于作品目录并限定在废弃/成长截止/来源哈希/批次内；移动整个收藏目录后仍可验证原貌和打开同一截止副本。正式文件打开不覆写原始文件；后续正常保存继续沿原独立备份机制。IO失败/哈希失败/发布失败均保留当前State、输入与镜头，原件和失败暂存不删除。原Snapshot只读API不用于绕过正式打开发布live城。

入口技术证据为117项CPU与31项实际GL，含旧多额度/缺rarity/旧来信、原图+35%、整目录移动与失败保留；此前显式转换77/GL36边界保持。传统等级提示和其他直接消费者继续核对，M84不因本节勾通过，未声明所有18卡新表现、300屋首次迁移耗时或听感完成。

### free日常呈现与保留的历史入口

free顶部不再展示Lv、XP点灯或未得家族的收集目标；原声音谱线仍由真实声音驱动。已得家族完成权益保留为小印章，点击直达J只读权益页；原等级、完整数值账本、小数余量、rank和rarity仍保存，在历史页区分显示。legacy继续原等级/点灯/四家族界面，切城与同城转换不会清数据。

原待选邀约显示为“保留手札/原有手札”，卡片不再显示家族0/3或新收益许诺，页脚不再催三卷保底；原三卡、稀有度、序号、已用翻卷/保底和真实兑现规则完全沿原账本。F1说明自由营造及旧权益，L/房屋指导的正式+35%注明用于原待领奖励，不承诺普通新事件加点。只读明信片元数据中的原level仍保留，当前画面并不绘制其进度；free L页旧生活家族栏原已退场，legacy分支保留。此呈现子步不改成长算法或存档格式，证据见53。

实施验收至少覆盖：无历史的新free、旧free带小数与多credit、同城未领来信和旧章程、转换失败回滚及legacy对照；API绕过UI、Undo/Redo、重复冷读/换城与存档拒绝坏截止字段；无旧卡的新free实际使用已迁内容并冷读，旧作品原权益仍可到达。CPU验证后补相关原生领取/选择输入、原图和PCM，未实际听评继续标待评。文档盘点不运行游戏、不计为运行验收。
