# 《共鸣之城》合订设计与十阶段施工总纲

2026-10-21接续用户合订稿。下面原稿是完整产品目标与参考接口；当前实现、差距与验收记录以本节及 PROJECT.md 为准。已有 Phase 1～11、Stage A/B 与已完成空间 UI 保留，禁止重置历史、另造同名模拟器或直接复制示例绕过 State 事务。

2026-10-21声学地貌接续：Ctrl+O六入口已生成真实台地/沙洲/森林/星夜与每日组合赠礼，经营/声域、可选Schema19及切换前留存通过72项CPU、50项实窗与15项星夜检查。五种地貌调式及石阶琴键也已验证接入；时代2/3/4铭牌已接实际经营并随作品保存，41项CPU/21项实窗通过；留声机图鉴33项CPU/34项实窗及两调式12项PCM通过；切换等待与最终体验验收待完成，Stage9不全勾选。详见[接续验证](24_合订接续验证记录.md)。

## 用户要求与工程接续裁定

- 低视角巨大彩色破面按用户2026-10-21明确要求暂缓；原稿对根因的判断仍是待证假设，不以猜测批量替换有效网格。其他施工继续。
- 固定 FPS、帧时与 CPU 耗时不是验收门槛，沿用用户此前明确修订。记录实际体验与回退；原稿里的数值只作参考。
- 五键渐进画具、5.8m自动聚落/新屋继承、3D引路与屋顶一键气泡、六地标独占主动乐章，均纳入当前目标，覆盖上一版“暂不采纳五工具”的取舍。内部旧快捷键、旧作品与经营履历保留，不把兼容入口继续作为默认新手界面。
- 保留首时代希腊/罗马、第二时代中世纪木构、工业、现代顺序；旧 era ID 不改名。手绘街坊从默认坞退下，已有作品的曲风区、连线与履历继续有效。
- Schema 1～18 与现有可选19均须兼容；新增字段通过验证、保存、撤销/重做。个人 user:// 作品不写；验收使用隔离存档。
- Git 备份并通过 tools/sync_github_main.py prepare / 审阅 plan / push 同步主仓库 main，跟踪文件树严格小于100,000,000字节；大体积原件留本地原路径。

## 十阶段需求与完成证据

| 阶段 | 完整交付要求 | 当前证据与差距 |
|---|---|---|
| 1 | 远端到期调度、单屋品质发布、台基碎石裙边、跨时代路面过渡；低视角排错暂缓 | 已有到期调度、单屋品质发布及.22m埋地/.14m压边证据；低视角排错暂缓，完整体验待收口。 |
| 2 | 5.8m自动聚落；1～2屋留白、3～4轻伴奏、5～14主旋律、15+室内乐；真实五类生活状态推同步分轨；同钟窗光波浪 | 5.8m/同街共享聚落44项CPU、生活同步配器18项实窗及53项和声通过；保留12+4池；初聚暖晕与15屋金色微粒已接，17项CPU/45项实窗通过；日常喷泉/灯街/电车联动32项CPU、20项实窗通过；真实水柱随同钟乐句起伏，池面固定；风铃与窗光共享波浪，21项CPU/24项实窗通过。 |
| 3 | 普通六生活用途且无主动演出；六种地标均可发起24秒全城接力、末两乐句齐奏 | 六地标入口与24秒八乐句已接入，65项CPU及30项实窗录音通过；普通罗盘无邀演，旧venue档兼容。 |
| 4 | 三屋→门前路→面包→茶座→制琴→跨河的地面/屋顶自然引导；一键事务与渐进解锁；新屋继承时代/曲风 | 3D屋基、真实接路、屋顶一键及继承已接入；84项实窗覆盖两分辨率与个人档不变。 |
| 5 | 44px五线谱、动态音符、和弦徽章、黄铜日晷、默认世界留白≥88% | 当前HUD249项实窗通过：四枚乐谱入口、五日晷圆章、真实旋转/天气/静音/漫步/明信片/手札，含二级圆章的常驻留白92.50%/88.82%。 |
| 6 | 筑屋/修路/烟火/林水/地形五键，二级圆章；露台/拆除上下文；全玩家流程无可见下拉框和右侧固定抽屉 | 五键渐进坞、露台/拆除上下文及林水合并完成；84项实窗检查无可见原生下拉框。 |
| 7 | 0.1875s/容量5量化拨奏与-3.5dB让位；屋顶4cm回应，树冠/睡莲可拨，8m居民0.6s欢呼；三性格实际生产/送装/配器 | 三性格21项炉火检查、树水专属音色15项PCM/15项QOA、36项实窗、居民回应14项CPU/14项实窗、量化及-3.5dB让位21项CPU通过。广板实际出炉/木作15m波纹已接，17项CPU/45项实窗通过。 |
| 8 | 每18s最多2枚真实心愿，点击切工具并指向有效落点；2+地标/4+大聚落手绘指挥24秒8乐句、居民灯笼巡游；四微气候真实增益 | 心愿有效落点19项CPU/四类实际操作79项双分辨率实窗通过；瞬间出炉/送装仍待补齐；四时35项CPU/32项实窗通过，经营/配器/画面/存档撤销接通；手绘巡游47项CPU、19项实窗录音通过。 |
| 9 | 五和弦精确局部配方、六地标邻接光环；每额外5+屋聚落+12%最高60%；六种声学地貌种子/不同地图调式与赠礼、时代特化铭牌 | 五和弦合订配方、独立五屋聚落倍增、真实地标光环与分轨已适配并验证；六地貌地图/经营/声域/每日实际赠礼72项CPU、50项实窗及15项星夜检查通过；五调式及真实石阶琴键64/15项CPU、51项实窗与14项琴键检查通过；六枚铭牌二选一已接实际经营/保存/撤销，41项CPU与21项实窗通过；留声机图鉴已接实际跨局奖励/作品混音，33项CPU/34项实窗通过。 |
| 10 | CPU与OpenGL实窗、1440/1024适配、300屋实际体验、旧档/撤销/奖励一致性、GitHub树<100MB同步 | 本轮117项新手至首地标完整乐章、23项300屋/两分辨率配色撤销/25秒混音、65项自由色轮实窗通过；Schema1～18旧档/API 375项、旧作未完乐章33项、起拍门控14项通过；当前HUD249项及声画17/45项通过；日常灯光32项CPU/20项实窗、居民14/14项及道路圆帽实窗已过；风铃同钟21项CPU/24项实窗已过，P/侧键25项CPU/32项实窗已过，收藏打开25.60→22.56s（1024为22.31s），坡路14项CPU/原生覆盖对照通过，首绘263～266ms仍待收口；F1手札39项、连续加建30项CPU/40项实窗通过；曲线轨街24项CPU、道路组合102项和弯坡行车11项实窗通过；环岛25项CPU/24项实窗通过，圆周与支轨头连续，继续全稿核对。 |

## 2026-10-21施工证据（持续更新）

- 2026-10-22完整体验：新手117项、300屋23项、色轮65项实窗通过。花境复用同次路口索引，300屋加载准备50.56s→18.56s、地形发布8.31s→3.88s；32/14项街道CPU通过。色轮不再显示引擎的模式/形状菜单与滑条，保留自由选色、HEX、取色和最近色。旧档/API 375项、旧作未完乐章33项、起拍门控14项已过；当前HUD249项及声画17/45项已过；日常聚落灯光、居民回应和道路回折已补实窗；树水专属音色15项PCM/15项QOA、36项实窗已过，风铃同钟21项CPU/24项实窗已过，仍待全稿条款核对，低视角暂缓。

- 2026-10-22后台打开：真实收藏打开改用全新State/Life/Renderer与已有后台CPU、隐身分帧GPU发布；旧城保留到完整新城准备好，先校验再留存，键鼠/重复请求不混入在途作品。127屋实窗约24.4s，总等待仍待缩短；22项真实生活/演出恢复CPU、17项GPU与换城、54项六地貌实窗通过，详见24接续验证。

- 2026-10-22实际作品打开：127屋/60路/245植株，33.21s→23.44s；植被10.82s→2.07s，岸边1.43s→.19s。同次生成共用真实门口记录，保留原避让与当前修订依赖；28项七植物/草边/门口扩建撤销CPU对照、19项实际编辑实窗通过。23.44s仍有明显等待，道路约9.67s；此为真实收藏打开，与旧83.02s隔离整城替换分别记录。

- 2026-10-22地形编辑：127屋当前实窗等待4.957s→2.827s，时代街道装饰2232ms→5ms。街道缓存拆为实际障碍/道路形状与路旁支持高度，远处笔画不重造全城时代装饰；14项冷计算对照、32/6项街道CPU、19项127屋与30项时代街道实窗通过。整城替换旧83.02s尚未重测，仍待优化。

- 共享自然聚落已改5.8m或同一真实街道，State与音乐同源，顺时针顺序确定；新屋/笔刷继承时代与曲风，罗盘可整片改曲风/时代。新开局自动街坊写入原d身份，连线/问答/时代进度无需先涂区；旧手绘档不重写。44项CPU覆盖身份稳定、保存/撤销、伪造拒绝与同街连通。
- 初聚/主旋律/15+重奏与同钟呼吸波浪已接；真实开炉、制作/送装、喝茶驱动连续配器。18项实窗录音无削波（峰值.02893），未增加短音，保留12长+4短；53项和声、27项目录回归通过。
- 六种地标均有主动乐章入口且保留原生活角色；现有真实赴约/完成事务接24秒8乐句，前6聚落领奏、末2齐奏，Schema19检查点保存恢复。65项CPU和30项实窗录音通过（峰值.05994）；实测末两乐句齐奏。普通罗盘仅六生活用途，无普通邀演按钮；旧venue档继续加载。
- 五键主坞（筑屋/修路/烟火/林水/地形）、林木/池塘/溪渠圆章、露台/拆除子工具与Shift拆模块已接。新玩家空城开局，3D虚线屋基→三屋→真实门前路→一键面包→茶座→制琴→林木/跨河/古钟引导；84项实窗包含两分辨率、真实鼠标、无可见下拉、两居所保留与个人档不变。
- 三性格已接生产周期/批量、工匠与面包师步速、同步配器与广板15m余韵；21项真实炉火/存档检查通过。现有活水奖励继续叠加，广板完整炉次翻倍；库存与货架容量不随切换丢失。远端worker_lod原20项仍通过。
- 新增树冠/水面被动拨奏13项实窗，8m内居民0.6s回应11项CPU，真实心愿13项实窗通过；均不写假经营奖励，复用量化短音池。
- 四时已实装花瓣、夕雨/水波、秋金草叶和同钟萤火，复用2自然声节点。35项CPU、32项实窗覆盖真实产出、茶聚余韵、问答路由、两分辨率及存档撤销；旧连奏43项仍通过。
- 地标罗盘新增「绘巡游」：两地标或四个五屋聚落解锁，真实鼠标依次选择2～8处聚落/地标，半空五线谱与逐乐句屋顶聚光沿手绘顺序。居民真实赴约再沿连通街道提灯行进；共享24秒时钟，末两乐句齐奏。47项CPU覆盖保存恢复/断路/取消/完成守恒，19项实窗覆盖两分辨率、真实手势、完整八乐句及无削波录音（峰值.08948）。
- 五和弦已按合订配方适配：1m高地、两连拱、一花房，跨河/高低台地的桥梁或音弧直接联结；田园生产/初阶木饰+25%、赋格真实工艺产出+50%、圆舞曲制作+40%、对位全城生产+30%。赋格单件批次的半件余数随Schema19保存，撤销不回卷已得产出。独立五屋聚落每新增一片+12%，最高60%，手绘空区与重复曲风不计数。自然街坊按真实成员范围取水/道路，不把成员编号连成虚构空间走廊。
- 地标闭环已补：音乐院按真实自然聚落或手绘街坊翻倍；古钟送装圈+25%、植物宫品茶速度+40%；总站沿真实连通轨街6m走廊使工坊/茶座效率+30%，重用路网也刷新成员与版本；水上剧场的新主动乐章亦触发真实落幕进化检定。58项配方、80项开拓、25项合订策略、23项分档运动、73项邻接与19项地标闭环CPU通过；46项五和弦、11项127屋规划实窗通过。
- 群岛打开已从6.69s降到2.63s，地形2.20s降到.39s；精确水距对照零差。未完成：整城替换等明显等待与整套最终体验验收。隔离6屋→127屋整城替换169.18s→83.02s：移除历史峰值预测对廉价发布子任务的逐帧停等，6项CPU回归及11项完整实窗通过。后台准备仍约66.2s（道路约22.4s、植被约27.0s），此路径仍有明显等待；这是隔离整城替换采样，不等同单屋加建或正常作品打开耗时。低视角排错仍按用户要求暂缓。不得据上述局部证据勾选整个Stage10。

## 合订原稿

以下保留完整设计意图和六份参考脚本。示例中的裸字典写入、虚构状态字段及声部/窗口示例须改接本项目已有接口，不能据示例宣称功能完成。

《共鸣之城》(Resonance City) · 终极合订设计与十阶段持续施工总蓝图 (文档/code_artifact.md 唯一最高总纲)——自然和谐“聚落成歌”、生活即编曲、零门槛 3D 心流引导、去 GPT 化空间触觉 UI 与深度共生城建工程总纲文档定位与最高施工授权（可直接保存并覆盖仓库内的 文档/code_artifact.md）：唯一最高真相源（Single Source of Truth）：本文档将前序《自然和谐音乐重构、聚落成歌、生活即编曲与零门槛心流引导蓝图》与《迈向完整精品：深度交互共生、去GPT感UI彻底重构与十阶段长期施工总蓝图》彻底合订并消除全部演进冲突，同时完整承接仓库（基准快照 fa740f439，Godot 4.7.2 Compatibility，主场景 res://scenes/city_creation.tscn，主控 scripts/ui/city_creation_demo.gd，Schema 1~17 向下兼容并平滑演进至 Schema 19）已验收的 Phase 1～11 基座与 Phase 12 性能成果。四条不可违背的第一性原理（最高设计裁定）：裁定一【聚落成歌（Cluster Choir），绝不乱叠，99% 时间绝对和谐好听】：1～2 栋孤立小屋平时保持静谧留白（仅保留落笔泛音与溪流鸟鸣）；只有当 >= 3 栋房屋聚在一起形成街巷/聚落 时，才凝聚为同一个和谐同步的合奏声部（3～4 屋唤醒温暖木吉他与大提琴根音托底，>= 5 屋唤醒悠扬主旋律与顺时针呼吸窗光波浪 Choral Wave），彻底终结“每栋房各唱各的、几十个短音效叮叮当当抢麦乱叠”的噪音感！裁定二【城市生活本身就是音乐（Life-as-Orchestration），普通房屋无“演奏”按钮，特殊地标独占传世乐章】：彻底废除普通房屋的 venue（演奏庭） 用途与手动“邀请演出”按钮！普通建筑精简为 6 种纯粹的城市生活职能（居所 / 面包坊 / 花圃茶座 / 制琴木工坊 / 人文书院 / 钟表工坊），其日常烟火运转直接平滑推起同调同拍的垂直伴奏分轨（Pure Vertical Stem Layering）；全城只有 6 座特殊地标名胜（Signature Landmarks：古钟瞭望圣塔、河湾大水车磨坊、文艺复兴圆顶音乐院、皇家植物玻璃宫、中央钟表电车总站、河湾水上交响剧场） 才拥有主动发起 【♫ 奏响传世共鸣乐章】 的专属能力！裁定三【零门槛 60 秒无师自通：自动聚落 + 5 大渐进画具坞 + 3D 地面光环与屋顶一键气泡】：废除让新手不知所措的“开局 9 工具一字排开”与“必须切工具 8 手动涂街坊”；改为 5.8m 内建房自动凝聚成街坊（Auto-Clustering）、底部精简为 5 大核心触觉画具坞（筑屋/修路/烟火/林水/地形）、并通过 3D 地面呼吸光环与屋顶一键转化气泡（如 [🥐 点此设为麦香面包坊]） 自然牵引玩家在 60 秒内听见城市从安静到合奏的惊艳蜕变！裁定四【彻底洗脱 GPT/网页后台式 UI 感，确立“世界空间罗盘 + 羊皮五线谱 + 黄铜日晷”】：砍掉屏幕四角的矩形文字表单、砍掉右上角 310px 宽的 place_panel 固定大抽屉、消灭全游戏所有的原生 OptionButton 下拉菜单；全面替换为 跟随 3D 建筑的世界空间悬浮罗盘 (SpatialBuildingPopover)、底部二级弹簧圆章气泡弧 (SubToolBubbleArc)、左上实时波动的五线谱心流窄条 (ScoreRibbonHUD) 与 右上可旋转的黄铜日晷音叉仪 (SundialCompassHUD)。行业设计锚点：《Monument Valley 3》音频总监 Todd Baker 与 Lucie Treacher 的“物理触感层 + 调性共鸣层”合一设计；3A 级交互音乐的“Vertical Layering（垂直分轨混音）”与“Horizontal Re-sequencing”黄金准则 及 Rich Vreeland (Disasterpeace) 在《Mini Metro》中的和声锁定与 16 分音符琶音节流机制；Oskar Stålberg《Townscaper》的无干扰玩具化交互 与 《Tiny Glade》的上下文感知建筑化学反应及悬浮圆章；Lorenzo Ardeni 的游戏 UI 四象限（Spatial / Diegetic UI）法则 与 Ahmed Salama 的“极简 HUD 悖论与渐进式信息披露”原则；水口哲也在《Rez》与《Tetris Effect》中的微/宏观通感隔离与心流释放机制、《ISLANDERS》极简邻接协同循环 与 《Dorfromantik》微任务闭合及长链路延伸激励；Godot 4 Audio Buses 动态混音架构 与 Godot 4 Tween 弹簧过渡动画系统。目录

## 第一章：全局现状盘点与四大核心痛点根源诊断（为什么以前容易乱叠、难上手、像 GPT 网页表单？）

## 第二章：工程质量第一——Phase 12 遗留渲染破面、远端结算尖峰与三维接缝终极根治规范

## 第三章：音乐系统彻底重构——“聚落成歌（Cluster Choir）”、“生活即编曲（Life-as-Orchestration）”与指尖轻交互

## 第四章：零门槛 60 秒自然上手体系——自动聚落凝聚、5 大渐进画具坞与 3D 世界微光/气泡引导

## 第五章：去 GPT 化空间 UI 彻底重构——世界空间建筑罗盘、五线谱心流条、黄铜日晷与程序化矢量图标

## 第六章：玩家与城市深度共生交互——屋顶刮奏玩具、工坊三档性格调音、屋顶心愿气泡、地标巡游与四时微气候

## 第七章：策略深度与重玩闭环——普通 vs. 特殊地标职责重划、五大声学和弦 BUFF、跨区开拓倍增与六大声学地貌种子

## 第八章：核心新增与重构模块完整 GDScript 源码规范（6 大核心脚本直接落地）

## 第九章：面向施工 AI 的十阶段超长持续施工路线图（Stage 1 ～ Stage 10 验收清单）

## 第十章：仓库入口文件同步替换文本（PROJECT.md 与 AI_START_HERE.md 最新看板补丁）

## 第一章：全局现状盘点与四大核心痛点根源诊断1.1 已就绪的高价值工程基座（100% 保留，严禁推倒重来）在现有仓库（resonance-city-ai）中，Phase 1～11 主体及 Phase 12 大城性能核心已扎实落地：空间与几何底座：80m×80m 河湾画布、真实海拔 house.base_y、斜坡毛石台基 (city_creation_highland.gd)、顺坡路与陡坡 3D 石阶 (city_creation_road_heights.gd)、CS2 就地重刷升级宽街 (2.10m 灯街/林荫道/电车轨街) 与喷泉环岛 (city_creation_junctions.gd)、湿砂河岸母子石簇 (city_creation_shore.gd)、7 叶饱满草簇与 Filmic 昼/夕/夜三态光影；四时代与六地标资产：田园木石 (pastoral)、文艺复兴连拱/穹顶 (renaissance)、蒸汽钟表孟莎顶/玻璃花房/叮当有轨电车 (clockwork)、现代生态悬挑/垂直绿墙/空中玻璃连廊 (modern_eco)，以及 6 座地标名胜 (city_creation_signatures.gd) 与 1～5 级 房屋品质自然进化 (city_creation_quality.gd)；大城模拟性能基座：300 屋 / 298 居民 / 1 电车实窗下，隐藏长路段按拐点截止时间堆唤醒 (city_creation_citizen_schedule.gd)，Life 均值已达 0.780ms，内置 127 屋旗舰存档 数据/四库共鸣交响大城样例.json。1.2 制约游戏成为“真正好听、易上手、精致耐玩精品”的五大病根诊断痛点维度现有代码位置与机制诊断玩家实际体验痛点本总纲的根治方案1. 声音容易乱叠、不够纯粹好听city_creation_music.gd（第 527～536 行）+ bakery_cues.gd + district_reply.gd + circular_canon.gd：把面包出炉 (0.64s)、茶座喝茶 (0.8s)、过桥 (0.8s)、轮唱 (0.75s) 全做成零散的 One-Shot 短提示音，在背景长轨上突兀插播并争抢 4 个 _effects 槽位；且 1 栋孤屋也在响 24s 长轨。当房子建多时，听起来不像一首连贯优美的曲子，而是像十几个闹钟和提示音在背景音乐上叮叮当当乱叠；只有 1～2 栋房时又缺乏留白对比。第三章【聚落成歌 + 生活即编曲】：1～2 栋孤屋安静留白；>=3 栋成群才唤醒伴奏、>=5 栋流淌主旋律；废除日常零散短音效，将面包坊/茶座/制琴坊/书院/钟表坊全部映射为同调同拍的垂直同步伴奏分轨 (Vertical Stems)！2. 普通房屋设“演奏庭”割裂了城市与音乐city_creation_demo.gd（第 529～545 行）与 city_creation_state.gd：普通房屋有 venue（演奏庭） 用途，玩家必须手动改用途再去右上角点 ♫ 邀请街坊演出、开启常驻巡演。城市本身就是音乐，普通房子根本不该有手动“演奏”按钮！ 手动设演奏庭既增加理解负担，又让不点按钮时的城市显得割裂。第三章 &

## 第七章：彻底移除普通房屋的 venue 角色与手动演出按钮；普通建筑专注 6 种纯粹生活职能，主动发起“全城共鸣乐章”的按钮由 6 座特殊地标建筑独占！3. 开局难上手、缺乏直觉引导开局底部一字排开 9 个编号文字工具，建房后还要切工具 5 改用途、切工具 8 手动涂抹街坊；左上角与左下角全是大段文字说明。新手进游戏不知道第一步点哪里，改个面包坊要跨屏幕点 3 次，缺乏《Monument Valley》或《Dorfromantik》那种“所见即所点”的心流引导。第四章【零门槛心流引导】：5.8m 内建房全自动凝聚成街坊（砍掉手动涂街坊工具 8）；底部精简为 5 大渐进画具坞；实装 3D 地面呼吸光环 + 屋顶一键转化气泡 ([🥐 点此设为面包坊])！4. 界面充满老套的“GPT 网页后台表单感”valley_ui_theme.gd + city_creation_paper_hud.gd + city_creation_demo.gd：屏幕四角被 5 大块矩形 PanelContainer 围满，到处是原生 OptionButton 下拉菜单、CheckButton 复选框和纯文本按钮墙。像在操作 ERP 网页管理后台而非把玩精致的音乐河湾箱庭；点击画面中央的 3D 房屋却要扭头看右上角 310px 宽的表单抽屉。第五章【去 GPT 化空间触觉 UI】：砍掉右侧固定大抽屉与全部下拉框！改用跟随 3D 房屋的世界空间悬浮罗盘 (SpatialBuildingPopover)、底部二级弹簧圆章气泡、左上五线谱窄条与 程序化矢量图标 (_draw())。5. 后期缺乏造新区域与开下一把的深度动力city_creation_prosperity.gd 仅有 3 个孤立距离判定，无区域饱和与跨区协同倍增；开新局永远是同一张地图与同一套 D 大调音阶。在初始河岸一侧“摊大饼”堆满房子就能通关，没有跨河、登高造新街区的强烈渴望，单局结束后也缺少重玩变体。第六章 &

## 第七章：实装五大声学和弦组合 BUFF、6 大地标 14m～18m 邻接超级增幅圈、跨区域开拓倍增器 (+12%/区)、建筑三档声学性格调音与 6 大开局声学地貌种子！

## 第二章：工程质量第一——Phase 12 遗留渲染破面、远端结算尖峰与三维接缝终极根治规范在推进音乐、引导与 UI 重构的同时，必须率先根除 PROJECT.md 中记录的未决工程瑕疵，确保基座 100% 稳固。2.1 彻底根治“小河湾偶发黄/品红/蓝巨大彩色面”渲染 Bug根据 PROJECT.md 现场记录（“起点是只有几屋的小河湾，偶发巨大黄/品红/蓝面”），在 Godot 4.7.2 Compatibility (OpenGL ES 3 / GL3) 渲染管线中，出现横跨视锥的纯黄 (#ffff00)、品红 (#ff00ff) 或纯蓝 (#0000ff) 巨型三角形，由以下两类代码隐患触发，须在 Stage 1 一次性封死：隐患源 A：MultiMesh 隐藏槽位或未满槽位存在未初始化矩阵 / 零行列式矩阵 / NaN 颜色修复文件：scripts/visual/city_creation_meadow.gd、city_creation_foliage.gd、city_creation_path_pebbles.gd、city_creation_bunting.gd、city_creation_shore.gd。刚性编码规范：凡分配 mm.instance_count = capacity 后，必须同步设置 mm.visible_instance_count = valid_count；统一封装安全写入函数 safe_set_multimesh_instance()，拦截任何 !is_finite() 或零缩放奇异矩阵：static func safe_set_instance(mm: MultiMesh, index: int, xform: Transform3D, col: Color = Color.WHITE, custom: Color = Color.BLACK) -> void:
	if index < 0 or index >= mm.instance_count:
		return
	if not xform.origin.is_finite() or not xform.basis.x.is_finite() or not xform.basis.y.is_finite() or not xform.basis.z.is_finite() or absf(xform.basis.determinant()) < 0.000001:
		# 将无效或隐藏实例退化为极小正交矩阵并深埋于地底 -500m，严禁传入全零 Basis 导致 GLES3 法线矩阵除零！
		var safe_hidden := Transform3D(Basis.from_scale(Vector3(0.0001, 0.0001, 0.0001)), Vector3(0.0, -500.0, 0.0))
		mm.set_instance_transform(index, safe_hidden)
		if mm.use_colors:
			mm.set_instance_color(index, Color(0.0, 0.0, 0.0, 0.0))
		if mm.use_custom_data:
			mm.set_instance_custom_data(index, Color(0.0, 0.0, 0.0, 0.0))
		return
	mm.set_instance_transform(index, xform)
	if mm.use_colors:
		mm.set_instance_color(index, col if col.is_finite() else Color.WHITE)
	if mm.use_custom_data:
		mm.set_instance_custom_data(index, custom if custom.is_finite() else Color.BLACK)
特别注意：在 OpenGL Compatibility 渲染器中，Basis.from_scale(Vector3.ZERO) 会导致顶点着色器计算逆转置法线矩阵 inverse(transpose(MODEL_NORMAL_MATRIX)) 时产生 1.0 / 0.0 = Inf/NaN，进而在启用顶点色或雾效时爆出全屏品红/纯黄色巨面！因此隐藏实例必须使用 Vector3(0.0001, 0.0001, 0.0001) 配合 y = -500.0 及 visible_instance_count 裁剪，严禁传入行列式为 0 的零缩放矩阵！隐患源 B：小河湾极短拉路或急弯处 SurfaceTool 切线/法线归一化除零修复文件：scripts/visual/city_creation_path_edge.gd、city_creation_road_earthworks.gd、city_creation_resonance.gd、city_creation_frontage.gd。刚性编码规范：在生成道路带状网格、挡土墙或跨河音弧丝带前，先对折线点集执行去重过滤（剔除间距 < 0.002m 的相邻重合点），且所有方向向量计算统一使用 safe_dir(a, b)，杜绝零向量 .normalized() 产生 Vector3(NaN, NaN, NaN)。2.2 Phase 12 远端工坊到期事件堆结算与单屋分帧品质回调（稳态 Life < 0.72ms）远端生产与送装的事件堆结算 (scripts/world/city_creation_life.gd + city_creation_citizen_schedule.gd)：当面包坊、制琴坊、人文书院或钟表工坊及其目标住宅均位于视野外静默区（acoustic.weight(id) == 0.0）时，不再逐帧步进工匠坐标，而是按路网最短路径长度 $L_{\text{route}}$ 与工匠真实步速 $v$，直接在 _citizen_schedule 中登记一条 due_time = life.time + L_{\text{route}} / v 的送达结算事件；若玩家在 due_time 之前将镜头移回该街区，调用 flush_citizen() 按当前时间线性插值恢复工匠在街道上的精确三维位置，实现“视野外零逐帧消耗、回镜瞬间无缝连续、送装奖励精确一次结算”。品质晋升回调分帧摊平（消除 4.162ms 尖峰）：在 city_creation_life.gd 中，当 Quality.refresh() 检出多栋房屋同时满足晋升条件时，推入 _pending_quality_callbacks 队列，每帧最多出队执行 1 栋 房屋的装饰网格增量刷新，将单帧品质回调耗时严格压入 < 0.85ms。2.3 三维美术接缝精修高地毛石台基嵌地碎石裙边 (scripts/visual/city_creation_highland.gd)：将毛石台基底部下延 0.22m，并在台基外沿与地形交界处生成一圈宽 0.14m、带顶点 Alpha 渐变的碎石压边裙，彻底消除斜坡建房时石基底部的悬空或锯齿切线。跨风貌街道自然过渡 (scripts/visual/city_creation_era_streets.gd)：在 2.0m 跨时代路面渐变带两侧自动点缀低矮修剪灌木与暖光界石，柔化材质切换边界。

## 第三章：音乐系统彻底重构——“聚落成歌（Cluster Choir）”、“生活即编曲（Life-as-Orchestration）”与指尖轻交互为了彻底实现你提出的核心愿景：“要更容易出正常，让玩家在绝大多数时候听到的是和谐好听的声音；有一大堆或一群房子的时候，它们才会和谐地唱，而不是在乱叠；城市本身就是音乐，普通房子不用有演奏功能，只有特殊建筑有演奏功能，其他建筑把城市生活本身和音乐融合”，我们将音频架构重构为以下三大黄金法则：3.1 核心法则一：“聚落成歌（Cluster Choir）”——孤屋静谧留白，群屋和声共鸣系统实时根据房屋的空间邻接距离（<= 5.8m 或同路连通），将城内房屋自动聚类为 自然聚落（Organic Clusters），并严格执行 四阶聚落发声法则：聚落规模 (群屋数)听觉表现（为什么 99% 时间绝对和谐好听、绝不乱叠？）视觉共鸣表现（怎么一眼看出它们在合唱？）0. 零散孤屋(1 ～ 2 栋独立屋)【静谧自然留白】不播放任何背景旋律轨！仅保留潺潺流水、林风鸟鸣与玩家建房落笔时的清脆泛音。• 窗户保持宁静日常光影，不乱闪• 顶部引导轻语提示：“在邻近处再添一两座小屋，聚成街巷晨曲”1. 初聚小巷(3 ～ 4 栋成群)【温润根音与轻拨伴奏 (Foundation + Light Wood)】整群房子凝聚为 1 个统一伴奏声部（温暖木吉他分解和弦 + 大提琴低音根音），轻柔托底。• 聚落地面轻轻晕开一圈暖阳草甸色带• 每逢 3 秒小节第一拍，群屋窗户像温和的呼吸一样同步泛起微光2. 和鸣街坊(5 ～ 14 栋成片)【悠扬主旋律自然流淌 (Lead Melody Stem)】解锁该聚落的完整主旋律声部！整片街坊共用同一条优美旋律线，绝无两栋房各唱各的乱弹！• 【顺时针/沿街呼吸波浪 (Choral Wave)】：窗光与屋檐风铃不再各自乱闪，而是沿着街道或内院顺时针像麦浪一样依次流淌！3. 传世大聚落(15+ 栋含高地/内院)【室内交响重奏 (Full Chamber Ensemble)】自动叠加高空木管呼吸层 (air) 与高八度竖琴泛音层 (terrace)，丰满温润。• 街坊上空浮现柔和的金色共鸣微粒• 内院喷泉水柱、街灯与有轨电车暖光随长句和弦同步脉动为什么这套机制有极强的直觉正反馈？
玩家放下第 1 栋、第 2 栋房子时，世界只有清脆的落石音与溪流鸟鸣；当玩家在旁边点下第 3 栋房子、与前两栋连成小聚落的那一瞬间——温暖的木吉他分解和弦突然如晨光般流淌出来！再建到第 5 栋围成街巷时，优美的主旋律悠然响起！ 玩家无需阅读任何教程，耳朵立刻就懂了：“原来把房子聚成街坊，城市就会开始唱歌！”3.2 核心法则二：“生活即编曲（Life-as-Orchestration）”——废除日常零散短音效，用城市生活直接驱动垂直同步声轨借鉴 《Red Dead Redemption 2》与现代音乐游戏的 Vertical Layering（垂直声部混音）准则，我们做出两项决定性变革：彻底移除普通建筑的 venue（演奏庭） 用途与手动“邀请演出”按钮：普通房屋精简为 6 种纯粹的城市生活职能：🏠 居所 (residential)、🥐 麦香面包坊 (bakery)、🍵 花圃茶座 (garden_cafe)、🎻 制琴木工坊 (workshop)、🎨 人文书院 (atelier)、🕰️ 钟表工坊 (clockmaker)。只有 6 座特殊地标建筑（Signature Landmarks） 才拥有主动触发“全城共鸣乐章”的按钮！关闭日常状态下零散抢麦的 One-Shot 提示音效（bakery_cues、cafe_flute 等），改为“生活状态驱动的同步伴奏分轨（Life-Driven Synchronized Stems）”：街坊内的真实城市生活状态 (city_creation_life.gd)旧做法（为什么容易吵杂乱叠？）重构后的“生活即编曲”做法（100% 同调同拍、严丝合缝！）玩家感知的音画融合体验1. 聚落成形且道路接通(cluster_size >= 3)哪怕只有 1 栋孤屋且没修路，背景死循环也在响唤醒【温暖大提琴根音与木吉他伴奏底轨 (foundation + wood)】3 屋成群、小路接通、居民推门走出的那一刻，河湾响起温柔的吉他伴奏，居民步伐与 80 BPM 节拍自然契合2. 面包坊炉火正旺、街坊买到热面包(active_bakery_score > 0)每次出炉/买面包塞入 bakery_cues 播 0.64s 短音，常与别的音效撞车或被丢弃平滑淡入【醇厚手风琴与大提琴律动伴奏层 (wood_market / wood_deep)】只要面包坊冒着暖烟、街坊吃上面包，聚落音乐底层就自然多了一层像久石让配乐般温暖踏实的手风琴与低音弦乐律动！3. 花圃茶座有街坊围坐品茶(active_tea_score > 0)每 3 秒抢一次 cafe_flute 短音槽，吹两声就断，不连贯平滑淡入【空灵长笛与林间木管连贯副旋律轨 (air + wood_sylvan)】当居民在花架下坐定端起茶杯，一缕悠扬连贯的长笛副歌便轻轻缠绕在吉他主旋律之上；茶散后柔和淡出4. 制琴坊将木饰/风铃送入民居(active_craft_score > 0)升级时放一次短琶音，平时难以从音乐中感知工坊贡献平滑淡入【晶莹高八度竖琴/马林巴泛音织体轨 (terrace + wood_weave)】随着挂上铜风铃与木花箱的民居增多，整片聚落的伴奏里自然闪烁着清脆通透的五声音阶泛音点缀5. 人文书院 / 钟表工坊 / 现代连廊运转(era_scores[era] > 0)时代音轨在日常模式下被硬编码压在 -21dB，几乎听不见平滑推升对应时代主奏声轨 (renaissance_fugue / clockwork_waltz / modern_symphony) 至 -10.5 dB当镜头移向建有书院的文艺复兴连拱街或跑着电车的钟表街区，羽管键琴双簧管赋格、立式钢琴圆舞曲或毡音钢琴自动成为主角！3.3 核心法则三：恰到好处的“指尖轻交互”——什么时候才触发短音（One-Shot Notes）？既然日常经营已全部化作连贯优美的分轨合奏，短音（One-Shot Notes）只留给玩家自己的指尖操作与特殊地标的整轮报时，并由 CityCreationAttentionMixer（16 分音符 0.1875s 微拍量化器） 严格节流保护：指尖落笔的温润回响（Tactile Placement Note）：参考 《Monument Valley 3》的物理层+乐音层设计 與 《Mini Metro》的琶音队列机制：当玩家点地建房、加高楼层、拉通石桥或种树时，将房屋层高对应的当前和弦五声音阶泛音推入容量为 5 的 ArpeggioQueue，严格卡在 0.1875s（十六分音符）网格上依次弹出柔和琶音，同时背景长轨自动柔和侧链让位 -3.5 dB（Sculpting Ducking）。鼠标拂过聚落屋顶的“微风琴弦（Gentle Roof Breeze）”：当玩家处于非建造浏览态（或按住 P / 鼠标侧键）轻轻掠过一片已“聚落成歌”的屋顶、水面睡莲或树冠时，房屋轻轻弹跳 4cm、窗光泛起暖金涟漪，并顺着 0.1875s 网格弹出如微风拂过古筝/风铃般的五声音阶琶音！特殊地标建筑的“传世乐章（Landmark Grand Movement）”：仅当玩家点击【文艺复兴圆顶音乐院】、【河湾水上交响剧场】或【古钟瞭望圣塔】等特殊地标上的 ♫ 奏响传世乐章 按钮时，触发 24 秒全城多聚落接力交响盛典！

## 第四章：零门槛 60 秒自然上手体系——自动聚落凝聚、5 大渐进画具坞与 3D 世界微光/气泡引导为了彻底解决“我现在玩起来还是不太像一个比较容易上手的游戏，你要有系统给到一些指引，要比较和谐自然”，我们实装 【三步极简减法 + 3D 世界微光与屋顶气泡引导 (CityCreationIntuitiveGuidance)】。4.1 第一步减法：废除“手动涂街坊”，把底部 9 个工具精简合并为 5 个直觉画具！为什么可以砍掉 4 个冗余工具位？砍掉 工具 8 街坊 → 改为【全自动聚落凝聚 (Auto-Clustering)】：只要 3 栋以上房屋彼此相距 <= 5.8m 或连在同一条街道上，系统自动将它们凝聚为一个街坊聚落！新建房屋若位于已有聚落 5.8m 内，自动继承该聚落的时代风貌与器乐曲风；玩家点击聚落内任意房屋，即可在悬浮罗盘里一键切换整片聚落的风貌！砍掉 工具 2 露台 → 合并入 [🏠 筑屋] 与房屋悬浮罗盘：点地面建房、点顶加层，点击二楼侧墙或点击房屋罗盘上的 [🌿 添置露台花架] 即可生成阳光露台/玻璃花房；砍掉 工具 4 移除 → 合并为快捷手势与罗盘扫帚：按住 Shift + 左键 划过即可柔和拆解，或在选中建筑的悬浮罗盘上点 [🧹 拆除]，不再单独霸占底部一个主工具位（为兼容旧自动化测试，内部保留快捷键 4 切移除模式）；合并 工具 6 植被 与 工具 7 水岸 → 统合为 [🌿 林水]：选中后在按钮正上方弹出 3 枚二级圆章气泡：[🌲 栽种林木]、[💧 挖掘睡莲池塘]、[🌊 引水溪渠]。重构后的底部 5 大核心触觉画具坞（开局前 90 秒按阶段渐进点亮，零认知过载！）：1 [🏠 筑屋]：点地建房、拖拽连排、点顶加高（二级圆章切换：灰泥 / 木构 / 石砌 / 圆塔 与 时代风貌）；2 [🛤️ 修路]：画路接门、跨河成桥、原位重刷升级（二级圆章切换：鹅卵石径 / 石板灯街 / 林荫大道 / 叮当轨街 / ◎喷泉环岛）；3 [🥐 烟火]：为房屋赋予 6 种纯粹生活职能（居所 / 面包坊 / 花圃茶座 / 制琴坊 / 人文书院 / 钟表工坊），或直接点屋顶气泡一键设置；4 [🌿 林水]：种橄榄树/古柏/灌木、挖睡莲池塘与引水渠；5 [⛰️ 地形]：刷平顶台地、抬高草丘、压低河谷与抚平坡地。4.2 第二步引导：“3D 地面呼吸光环 + 屋顶一键气泡”五步心流引导 (CityCreationIntuitiveGuidance)彻底抛弃弹窗教程与左上角长篇文字说明书！ 系统实时检测当前城市的成长阶段（Stage 0 ~ Stage 4），直接在 3D 河湾草地、水面或房屋屋顶上方 生成温柔呼吸的 金色涟漪光环 (GroundGuideRing) 与 屋顶一键转化气泡 (OneClickRoleBubble)：引导阶段3D 世界里的视觉引导物（往哪看 / 点哪里？）玩家一键操作后的即时音乐与画面正反馈Stage 0 · 三屋成歌(0 ～ 30 秒)镜头聚焦河湾水畔，草地上浮现 3 圈温柔呼吸的**【金色虚线屋基光环】**；底部仅亮起 [🏠 筑屋]。每点一圈落下一座暖石小屋并奏响清脆五声泛音；当第 3 座落成瞬间，3 屋暖窗同步点亮，温暖的木吉他与大提琴伴奏如晨光般自动流淌！Stage 1 · 门前通途(30 ～ 60 秒)3 座小屋门前浮现一条由金色光点组成的**【流动引路光环】**；底部解锁并轻弹起 [🛤️ 修路]。玩家顺着门前一拉，鹅卵石小路与三级门阶自动生成，居民推门走出家门，聚落伴奏自动变得更加丰满！Stage 2 · 麦香初暖(60 ～ 90 秒)临水那座小屋的 3D 屋顶上方，直接冒出一枚轻轻跳动的 【🥐 点此设为麦香面包坊】一键圆章气泡！玩家根本不用切工具栏或找菜单，直接用鼠标点一下屋顶上的 🥐 气泡！ 屋顶立即升起袅袅炊烟，音乐底层平滑汇入醇厚温暖的大提琴与手风琴律动！Stage 3 · 林间茶叙(90 ～ 130 秒)街角小屋屋顶浮现 【🍵 点此设为花圃茶座】 气泡；随后第 5 屋浮现 【🎻 点此设为制琴木工坊】 气泡并解锁 [🌿 林水]。点下茶座气泡后，吃饱面包的街坊围坐品茶，一缕悠扬连贯的长笛副旋律自动融入吉他主旋律之上；设好制琴坊并种下橄榄树后，晶莹的竖琴泛音与顺时针窗光波浪全面绽放！Stage 4 · 跨水成桥(130 ～ 180 秒)河对岸薄雾散开，水面上浮现一道横跨两岸的**【金色桥拱引路光影】**；顶部解锁【名胜：古钟瞭望圣塔】。玩家拉路过河，双孔石拱桥跃然而出！放置第一座特殊地标【古钟圣塔】，体验地标专属的 “♫ 奏响传世乐章”，正式进入自由创造心流！

## 第五章：去 GPT 化空间 UI 彻底重构——世界空间建筑罗盘、五线谱心流条、黄铜日晷与程序化矢量图标为了彻底消除现有 UI（valley_ui_theme.gd + city_creation_paper_hud.gd + city_creation_demo.gd）中“四角矩形方框围城、到处是 OptionButton 下拉框和文字按钮墙”的 GPT 网页表单感，我们将全屏界面重构为 【羊皮乐谱 × 黄铜日晷 × 世界空间就地罗盘 (Tactile Score & Spatial Diorama UI)】，释放 88% 以上 的纯净 3D 河湾视野！5.1 重构前后的全屏 UI 拓扑与组件对照表┌──────────────────────────────────────────────────────────────────────────────────────────┐
│                 《共鸣之城》去 GPT 化全屏空间 UI 拓扑图 (88% 画面完全留白！)              │
│                                                                                          │
│  [左上：动态五线谱心流窄条 ScoreRibbonHUD]                [右上：黄铜日晷与音叉圆章]      │
│  ╭──────────────────────────────────────────╮            ╭──────╮ ╭──────╮ ╭──────╮ ╭────╮│
│  │ 𝄞 河湾晨曲 · 2聚落正在合唱  🎵🎵  [手记][名胜][典藏][?] │            │ ☀/🌙 │ │ 🌸风 │ │ ♫音 │ │ 📷 ││
│  ╰──────────────────────────────────────────╯            ╰──────╯ ╰──────╯ ╰──────╯ ╰────╯│
│  (高度仅44px的胶囊卷轴：5根随节拍微颤的金色琴弦，无大方框)  (可旋转日晷+四时微气候+音叉)  │
│                                                                                          │
│                    ╭──────── [顶部中央：轻语引导胶囊 (掌握后自动隐退)] ────────╮          │
│                    │  🥐 点击水畔小屋头顶的气泡，点亮炉火，添上温暖大提琴律动  │          │
│                    ╰───────────────────────────────────────────────────────────╯          │
│                                                                                          │
│                        ╭──── [世界空间建筑罗盘 SpatialBuildingPopover] ────╮             │
│                        │   [🏠居所] [🥐面包] [🍵茶座] [🎻制琴] [🎨书院] [🕰️钟表] │       │
│                        │  [样式↻] ──  🏠 被选中的 3D 房屋 / 地标  ── [🎨色板]  │       │
│                        │      [🎵律动:温润行板]   [♫ 奏响乐章 (仅特殊地标显示)] │       │
│                        ╰───────────────────────────────────────────────────╯             │
│                  (点击3D建筑时直接在建筑上方弹簧弹出，彻底砍掉右侧310px表单大抽屉！)     │
│                                                                                          │
│                  ╭──────╮  ╭──────╮  ╭──────╮  ╭──────╮  *(二级悬浮圆章气泡链：          │
│                  │ 鹅卵 │  │ 灯街 │  │ 林荫 │  │ 轨街 │   仅在选中修路/林水/地形时       │
│                  ╰──────╯  ╰──────╯  ╰──────╯  ╰──────╯   从对应主按钮上方弹簧跃出！)*   │
│            ╭──────────────────────────────────────────────────────────────────╮          │
│            │   (↶)    [🏠 筑屋]    [🛤️ 修路]    [🥐 烟火]    [🌿 林水]    [⛰️ 地形]    (↷)   │          │
│            ╰──────────────────────────────────────────────────────────────────╯          │
│                         [底部：5 键触觉弦槌画具船坞 TactilePaletteDock]                   │
└──────────────────────────────────────────────────────────────────────────────────────────┘
原有 GPT 风格 UI 组件为什么要砍掉/重做？重构后的新空间触觉组件左上角 PaperHeader 大方框 (284×260px) + 6按钮双列网格像网页后台侧边栏导航菜单，占去左上角大片视野。【左上：五线谱心流窄条 (CityCreationScoreRibbon)】：高仅 44px 的半透明羊皮胶囊。左侧用 _draw() 实时绘制 5 根随当前聚落音乐呼吸微颤的铜金五线谱弦与跳动音符；中部展示已激活的【🎵 声学和弦徽章】；右侧仅留 4 枚精致火漆印章圆钮（手记 J、名胜、典藏 Ctrl+O、手札 F1）。右上角 Actions 6 个文字方框按钮一排死板的文字框（保存/音乐/光线/全景/漫步/明信片）。【右上：黄铜日晷与四时音叉仪 (CityCreationSundialHUD)】：由一枚可点击旋转的 黄铜日晷/星月圆盘（直观切换晴昼/夕照/星夜）、一枚 四时微气候印章（春花/夏雨/秋叶/夜萤）、一枚 震动音叉圆章（静音切换）与 漫步 (V) / 取景 (F12) 圆章组成。右侧 6 个固定工具表单抽屉 (road_panel, vegetation_panel, water_panel, district_panel, terrain_brush.panel)全是 OptionButton 下拉菜单和 CheckButton 文字框，选一次下拉框要点两下，且死死挡住右侧河湾画面。【彻底废除右侧工具抽屉！改用底部二级悬浮圆章弧 (SubToolBubbleArc)】：点击底部 筑屋 / 修路 / 烟火 / 林水 / 地形 时，直接在该工具键正上方 14px 处以弹簧动画 (Tween.TRANS_BACK) 跃出一排圆形子印章，一键直达，全游戏零下拉菜单！右上角选房大抽屉 (place_panel 310px 宽)选房必须看屏幕最右上角，含 2 个下拉框、8 个文字按钮（含已废除的普通房 venue）。【世界空间建筑悬浮罗盘 (CityCreationSpatialPopover)】：点击任何 3D 建筑时，直接在 camera.unproject_position(house_top) 屏幕投影位置上方展开半圆印章罗盘！普通建筑展示 6 种生活职能印章 + 样式/色板轮换 + 三档声学性格调音；仅当点击 6 座特殊地标建筑时，罗盘底部才浮现隆重的 ♫ 奏响传世共鸣乐章 主按钮！左下角 help_panel 说明卡片 (284×160px)永远挂在左下角的死板说明书。【彻底移除左下角方框！改用底部无框轻语键帽条 (WhisperKeycapBar)】：玩家熟练操作后自动淡出至 30% 透明度，完全还画面于河湾。

## 第六章：玩家与城市深度共生交互——屋顶刮奏玩具、工坊三档性格调音、屋顶心愿气泡、地标巡游与四时微气候为了让城市不仅“自动好听”，还能让玩家随时伸手把玩、与居民双向互动，我们实装 五大玩家-城市共生交互闭环：6.1 交互闭环一：【万物可拨弄的八音盒城市（Roof Glissando & Interactive World Toy）】划过聚落屋顶 = 五声音阶古筝/竖琴刮奏：在非建造浏览态下（或按住 P / 鼠标侧键），玩家用鼠标快速掠过一排已成群的街屋屋顶时，按房屋层高 level 0..4 推入 0.1875s 十六分音符琶音队列，弹出如行云流水般的五声音阶琶音；被拂过的房屋轻轻向上弹跳 4cm（town.animate_house_bounce(id, 0.045)），窗光泛起順时针涟漪！拂过水面睡莲与森林树冠：鼠标划过水面激起径向水波纹与清澈的水滴木琴微音；划过成片橄榄林触发树冠微风摆动与清脆画眉鸟鸣。路过居民的驻足欢呼：当玩家拨响某栋房屋或奏响特殊地标时，周围 8m 内正在行走的居民会停下脚步 0.6s，转身面向该建筑挥手跳跃，头顶冒出微小的金色 ♪ 音符！6.2 交互闭环二：【工坊三档声学性格调音台（Acoustic Temperament Tuning）】每座生活工坊建筑（面包坊、花圃茶座、制琴坊、人文书院、钟表工坊）在世界空间悬浮罗盘中都拥有 三档可随时拨动的【律动性格（Temperament）】，让玩家的经营调优直接化作交响编曲：⚡ 轻快快板 (allegro)：工匠制作与送货移速 +25%（适合服务近距离高密度小巷，单炉/单次产出 1 份），且该工坊驱动的伴奏分轨自动叠加轻快明亮的高音拨弦泛音；🎵 温润行板 (andante，默认)：标准生产周期、标准服务半径（22m）与温润均衡的中音区伴奏声轨；🌊 深邃广板 (largo)：生产周期拉长 30%，但单次出炉/送装产出直接翻倍 (×2)，且每次完成生产时向周围 15m 扩散一圈金色低音共鸣波，使大提琴与低音暖弦 (foundation / wood_deep) 更加醇厚绵长！6.3 交互闭环三：【屋顶微缩心愿气泡（Spatial Citizen Wish Pins）】不需要按 L 打开文字账本阅读！系统每 18 秒 自动从当前视野内挑选最多 1 ～ 2 栋“差一步就能进化或激活和弦 BUFF”的房屋，在其 3D 屋顶上方浮现一枚温润的微缩心愿气泡（点击气泡直接一键切换对应工具并高亮最佳落点）：🌉 盼望通路：新建房屋未接路 → 点击气泡直接激活 [🛤️ 修路] 并高亮门前接路点；💧 渴望活水：面包坊距水 > 4.5m → 点击气泡激活 [🌿 林水 -> 挖池塘]，挖好瞬间激活【活水磨坊】立即出炉热面包；🌲 寻觅良木：制琴坊 8m 内树木 < 3 棵 → 点击气泡激活 [🌿 林水 -> 栽树]，种满瞬间匠人背琴出发送装；🍵 夕照茶叙：聚落已有面包坊但无茶座 → 点击街角民居气泡一键转化为花圃茶座，唤醒长笛副旋律！6.4 交互闭环四：【特殊地标的指挥家巡游手势（Landmark Conductor Parade）】当城内拥有 2 座以上特殊地标（如【古钟瞭望圣塔】、【文艺复兴圆顶音乐院】、【河湾水上交响剧场】）或 4 个以上大聚落时，点击地标发起 【♫ 奏响传世共鸣乐章】 时支持 手绘指挥线：玩家按住鼠标左键依次划过想要领奏的聚落与地标，半空中浮现流光溢彩的金色五线谱轨，本次 24 秒盛典的 8 个乐句将严格按照玩家手绘的顺序依次传递聚光灯，且街坊居民会手提暖色灯笼沿街结队巡游！6.5 交互闭环五：【四时声学微气候（4-Season Acoustic Weather Cycle）】点击右上角日晷旁的【四时风物印章】，可在 4 种极具箱庭氛围的声学微气候间切换（CPU 开销 < 0.12ms）：🌸 晴昼花吹雪 (spring_breeze)：微风飘落粉白花瓣粒子，画眉鸟鸣清脆，花圃茶座与植物玻璃宫余韵持续时间 +25%，长笛与竖琴泛音增益 +1.5 dB；🌧️ 夏夕太阳雨 (sun_shower)：暖金夕阳穿透细雨，河面泛起细密雨滴同心圆涟漪，大水车磨坊与临水面包坊烘焙速度 +30%，伴随治愈的细雨打叶与溪流声；🍂 秋暮金风 (autumn_gold)：草甸叶尖染上暖金琥珀色，全城制琴坊/书院/钟表坊匠人制作速度 +25%，大提琴与手风琴声部更加醇厚温暖；✨ 星夜萤火 (starlight_fireflies)：睡莲池塘与草甸升起随 80 BPM 节拍同步明灭的翠金流萤，跨河聚落问答距离上限扩大 +40%，毡音钢琴与钢片琴空灵通透。

## 第七章：策略深度与重玩闭环——普通 vs. 特殊地标职责重划、五大声学和弦 BUFF、跨区开拓倍增与六大声学地貌种子7.1 全城建筑的音乐与玩法职责重划总表（严格执行“普通房屋生活即编曲，特殊地标独占主动乐章”）建筑梯队具体建筑名称 (role / signature)是否有手动“演奏”按钮？它在城市音乐与玩法中扮演什么角色？（100% 自动和谐融合）一、基础聚落居所(Ordinary Homes)河湾民居 (residential)(灰泥/木构/石砌/圆塔，Lv.1～5)❌ 无手动演奏按钮(彻底移除原 venue 用途)【聚落合唱声部 (Cluster Choir)】：• 1～2 栋时静谧留白；• >= 3 栋成群自动唤醒温暖吉他与大提琴根音伴奏；• >= 5 栋成片自动流淌悠扬主旋律，窗光沿屋檐顺时针如波浪般呼吸流转 (Choral Wave)；• 随 Lv.1 → Lv.5 进化，自动为聚落合奏注入高八度泛音与三度陪衬和声。二、街坊生活建筑(Daily Life Buildings)1. 麦香面包坊 (bakery)2. 花圃茶座 (garden_cafe)3. 制琴木工坊 (workshop)4. 人文书院 (atelier)5. 钟表工坊 (clockmaker)❌ 无手动演奏按钮(生活本身即是垂直编曲)【垂直同步伴奏分轨 (Life-Driven Vertical Stems)】：• 面包坊运转：在聚落底层平滑淡入醇厚的大提琴拨弦与手风琴律动 (wood_market)；• 茶座围坐品茶：在主旋律上方平滑淡入连贯悠扬的长笛牧歌副旋律 (air + wood_sylvan)；• 制琴坊送达木饰：为整片聚落注入晶莹的高音竖琴与铜风铃泛音织体 (terrace + wood_weave)；• 书院与钟表坊：将所在聚落的主奏声部平滑推升为巴洛克羽管键琴/双簧管赋格 (renaissance_fugue) 或立式钢琴/钢片琴圆舞曲 (clockwork_waltz)。三、特殊强力地标名胜(Signature Landmarks)1. 古钟瞭望圣塔 (bell_keep)2. 河湾大水车磨坊 (watermill)3. 文艺复兴圆顶音乐院 (music_academy)4. 皇家植物玻璃宫 (botanical_palace)5. 中央钟表电车总站 (clockwork_depot)6. 河湾水上交响剧场 (floating_amphitheater)✅ 独占【♫ 奏响传世乐章】主动按钮！【首席独奏家、局部超级增幅引擎与全城交响指挥】：• 被动光环 + 局部邻接超级增幅 (14m～18m)：见下表 7.2；• 主动传世乐章：点击地标专属的 ♫ 奏响传世共鸣乐章 按钮，即可指挥全城所有已成型的房屋聚落按时代依次接力领奏，并在第 7～8 乐句迎来辉煌的四大时代全城交响 Tutti！7.2 六座特殊强力地标的“局部邻接超级增幅圈（Adjacency Super-Amplifiers）”为了让特殊地标成为玩家规划新区域的磁石，每座地标除了原有的全城被动增益外，新增 14m ～ 18m 局部邻接超级增幅圈：🔔 古钟瞭望圣塔 (bell_keep) —— 【圣塔回响圈 (半径 16m)】：圈内所有居民与匠人步速 +15%，且圈内工坊交货结算速度额外 +25%；每 24s 循环首拍敲响深邃圣钟锁定全城相位。🌊 河湾大水车磨坊 (watermill) —— 【水力工坊带 (沿河上下游 18m)】：同岸 18m 内的所有面包坊与制琴坊共享水力传动，生产速度额外 +35%，每炉面包产量 +1！🏛️ 文艺复兴圆顶音乐院 (music_academy) —— 【人文学院区 (同聚落/同街坊内)】：同聚落内的所有人文书院 (atelier) 与制琴坊产量直接翻倍（×2.0），且点击其 ♫ 奏响传世乐章 按钮自动串联全城所有聚落同步接力！🌿 皇家植物玻璃宫 (botanical_palace) —— 【翡翠花海圈 (半径 14m)】：圈内草甸綻放双倍野花，所有住宅永久视同满足最高自然景观条件，花圃茶座品茶转化速度 +40%，全城余韵延长至 180s！🚋 中央钟表电车总站 (clockwork_depot) —— 【轨街黄金走廊 (沿连通轨街两侧 6m)】：自动派出复古叮当有轨电车，所有紧邻电车轨街的工坊与茶座获得“轨交直达”加成，生产与服务效率 +30%！🎼 河湾水上交响剧场 (floating_amphitheater) —— 【交响水岸共鸣 (全水域连通)】：点击发起 24 秒全城跨时空交响盛典，盛典落幕瞬间沿河道扩散金色声波环，使全城所有处于余韵中的 Lv.1～4 房屋立即获得一次跨级进化检定！7.3 五大“声学和弦组合 BUFF（Acoustic Chord Synergies）”与跨区开拓倍增器当同一个聚落街坊（或一对通过桥梁/音弧相连的聚落）凑齐特定生活组合时，自动点亮左上角 ScoreRibbonHUD 上的 【🎵 声学和弦徽章】：🎵 I. 晨光田园三和弦 (pastoral_triad)：同聚落含 面包坊 + 花圃茶座 + 喷泉内院/池塘 → 住户买完面包 100% 顺路品茶，全聚落生产与 Lv.3 进化速度 +25%，吉他与长笛分轨无缝交织；🎵 II. 高地钟楼五度共鸣 (highland_fifth)：海拔 base_y >= 1.0m 的台地聚落含 >=4 栋房屋 + 尖顶钟楼/古钟圣塔 + 3D石阶路 → 上下山石阶步速 +25%，解锁高空木管五度延音；🎵 III. 文艺复兴赋格四重奏 (renaissance_fugue)：聚落含 人文书院 + 制琴坊 + >=2 栋底层连拱柱廊楼 → 画师与琴匠共享灵感，工艺品产出 +50%、直通 Lv.4 连廊华宅，唤醒羽管键琴与双簧管赋格分轨；🎵 IV. 蒸汽花房圆舞曲 (clockwork_waltz)：聚落含 钟表工坊 + 阳光玻璃花房露台 + 电车轨街 → 电车每经过一次自动为沿街房屋充能 30s 黄金余韵，工坊提速 +40%，唤醒三拍子钢琴与钢片琴圆舞曲分轨；🎵 V. 跨河古今交响对位 (chrono_counterpoint)：河两岸或高低台地上存在 2 个以上不同时代风貌 (era_theme) 的成型聚落 并通过桥梁或共鸣音弧相连 → 两岸共享全部生活服务，全城产出 +30% 并解锁 Lv.5 传世共鸣名宅 终极上限！📈 跨区开拓倍增器 (Expansion Multiplier)：城内每多开辟一个 >= 5 栋房 的独立成型聚落，全城工坊效率与共鸣成长速度递增 +12%（最高 +60%），从机制底层彻底告别“单区域摊大饼”，驱动玩家不断跨河、登高建设新聚落！7.4 “再来一把”重玩引擎：六大开局【声学地貌种子（Acoustic Biome Seeds）】与时代特化铭牌在 Ctrl+O 作品收藏面板顶部新增 【🌱 开启新河湾 · 选择声学地貌】，提供 6 大开局种子（存档记录于可选字段 biome_seed，100% 兼容旧 Schema 1~17）：☀️ 晴翠双岸 (sunny_banks)：标准 S 形主河道，D 大调五声，均衡体验四大时代；⛰️ 叠翠千阶 (terraced_peaks)：开局自带三级天然高地台地；高地建筑 (base_y >= 1.0m) 产出 +40%，石阶路化作音阶琴键（G 吕底亚空灵调式）；🏝️ 烟水群岛 (misty_archipelago)：河湾由多座浅水沙洲组成；桥梁、汀步与水岸建筑加成翻倍（B 多利亚水岸调式）；🌲 林间秘境 (sylvan_sanctuary)：森林环抱河湾；保留林木为 10m 内聚落提供森林和声，制琴坊与植物玻璃宫提前解锁（A 大调牧歌调式）；🌙 星夜流光 (starlight_nocturne)：开局默认处于星夜流萤光影；灯街、玻璃花房与暖窗共鸣半径 +50%（F# 小调夜曲调式）；🎲 每日随机共鸣 (daily_resonance)：按日期种子随机组合地形特征、调式与 1 座开局赠送地标！

## 第八章：核心新增与重构模块完整 GDScript 源码规范（6 大核心脚本直接落地）以下 6 个核心模块已完成架构对齐与无冲突合订，施工 AI 可直接按路径创建并接入主场景：8.1 聚落成歌与生活垂直分轨混音引擎 (scripts/audio/city_creation_cluster_harmony.gd)class_name CityCreationClusterHarmony
extends RefCounted
## Core "Cluster Choir & Life-as-Orchestration" engine.
## 1. Isolated houses (1~2) stay peacefully quiet (only tactile placement notes & nature ambience).
## 2. Clusters of >=3 houses form an organic choir that wakes up the warm foundation & guitar accompaniment.
## 3. Clusters of >=5 houses unlock the main melody stem and clockwise Choral Wave window glow.
## 4. Daily city life (Bakery, Tea Cafe, Workshop, Era Culture) smoothly drives synchronized
##    vertical musical stems rather than chaotic one-shot SFX.

const CLUSTER_RADIUS := 5.8
const MIN_CLUSTER_FOR_BASE := 3
const MIN_CLUSTER_FOR_MELODY := 5

static func evaluate_city_harmony(
	state: RefCounted,
	life: Node3D,
	acoustic: RefCounted,
	synergy_summary: Dictionary,
	night: bool,
	sculpting_duck_db: float
) -> Dictionary:
	# 默认全静音基线（1～2栋孤屋时保持宁静留白，绝不强行轰鸣）
	var stem_targets := {
		"foundation": -60.0,
		"wood": -60.0,
		"wood_deep": -60.0,
		"wood_weave": -60.0,
		"wood_market": -60.0,
		"wood_sylvan": -60.0,
		"air": -60.0,
		"terrace": -60.0,
		"concert": -60.0,
		"renaissance_fugue": -60.0,
		"clockwork_waltz": -60.0,
		"modern_symphony": -60.0
	}

	var clusters: Array[Dictionary] = derive_organic_clusters(state)
	var visible_cluster_houses := 0
	var dominant_cluster: Dictionary = {}
	var best_cluster_score := 0.0

	var active_bakery_score := 0.0
	var active_tea_score := 0.0
	var active_craft_score := 0.0
	var high_ground_score := 0.0
	var era_scores := {"pastoral": 0.0, "renaissance": 0.0, "clockwork": 0.0, "modern_eco": 0.0}

	for cluster: Dictionary in clusters:
		var c_size: int = cluster.members.size()
		if c_size < MIN_CLUSTER_FOR_BASE:
			continue # 孤立的 1~2 栋小屋保持安静留白，不参与背景长轨混音
		var c_weight := 0.0
		for hid: String in cluster.members:
			c_weight += acoustic.weight(hid)
		if c_weight <= 0.05:
			continue
		visible_cluster_houses += c_size
		if c_weight > best_cluster_score:
			best_cluster_score = c_weight
			dominant_cluster = cluster

	if dominant_cluster.is_empty():
		return {
			"stem_targets": stem_targets,
			"clusters": clusters,
			"dominant_cluster": {},
			"choral_wave_ids": [],
			"singing": false
		}

	# 遍历视野内已成群的房屋，将真实城市生活状态转化为各同步分轨的和谐层权重
	for house: Dictionary in state.houses:
		var hid := str(house.id)
		var w: float = acoustic.weight(hid)
		if w <= 0.0:
			continue
		var role := str(house.get("role", "residential"))
		var era: String = state.house_era(house)
		era_scores[era] = float(era_scores.get(era, 0.0)) + w

		if float(house.get("base_y", 0.0)) >= 1.0:
			high_ground_score += w
		if int(state.improvement_level(hid)) > 0 or int(state.level_tier(hid)) >= 3:
			active_craft_score += w * 0.8

		var temp_mult := 1.25 if str(house.get("temperament", "andante")) == "largo" else 1.0
		match role:
			"bakery":
				var sup: Dictionary = state.bakery_supply.get(hid, {})
				if int(sup.get("produced", 0)) > 0 or bool(house.get("bakery_open", true)):
					active_bakery_score += w * 1.5 * temp_mult
			"garden_cafe":
				var c_prog: Dictionary = state.cafe_progress.get(hid, {})
				if int(c_prog.get("groups", 0)) > 0 or (life != null and not life.cafe_view().get(hid, {}).is_empty()):
					active_tea_score += w * 1.8 * temp_mult
			"workshop":
				var w_sup: Dictionary = state.workshop_supply.get(hid, {})
				if int(w_sup.get("delivered", 0)) > 0 or bool(house.get("workshop_open", true)):
					active_craft_score += w * 1.4 * temp_mult

	# 1. 基础聚落根音轨 (Foundation)：>=3 栋房聚在一起，唤醒温暖的大提琴/Pad 根音托底
	var base_fill := clampf(float(visible_cluster_houses - 2) / 10.0, 0.25, 1.0)
	stem_targets["foundation"] = lerpf(-17.5, -10.5, base_fill) + sculpting_duck_db
	# 3~4 栋房时先给一层轻柔的木吉他分解伴奏
	stem_targets["wood"] = lerpf(-19.5, -13.5, base_fill) + sculpting_duck_db

	# 2. 聚落主旋律轨 (Wood / Style Lead)：>=5 栋房成片时，悠扬的主旋律自然流淌
	if visible_cluster_houses >= MIN_CLUSTER_FOR_MELODY:
		var melody_fill := clampf(float(visible_cluster_houses - 4) / 12.0, 0.35, 1.0)
		var lead_style := str(dominant_cluster.get("style", "warm"))
		var style_track: String = {
			"warm": "wood",
			"deep": "wood_deep",
			"weave": "wood_weave",
			"market": "wood_market",
			"sylvan": "wood_sylvan"
		}.get(lead_style, "wood")
		stem_targets[style_track] = lerpf(-16.0, -10.5, melody_fill) + sculpting_duck_db

	# 3. 生活即编曲分轨一：面包坊炉火与采购 -> 平滑淡入手风琴与大提琴律动伴奏层 (wood_market / wood_deep)
	if active_bakery_score > 0.1:
		var bakery_fill := clampf(active_bakery_score / 2.5, 0.2, 1.0)
		stem_targets["wood_market"] = maxf(stem_targets["wood_market"], lerpf(-21.5, -12.8, bakery_fill) + sculpting_duck_db)
		stem_targets["wood_deep"] = maxf(stem_targets["wood_deep"], lerpf(-22.5, -14.5, bakery_fill) + sculpting_duck_db)

	# 4. 生活即编曲分轨二：花圃茶座品茶与高地微风 -> 平滑淡入空灵长笛与木管副旋律层 (air & wood_sylvan)
	if active_tea_score > 0.1 or high_ground_score > 0.5:
		var air_fill := clampf((active_tea_score + high_ground_score * 0.5) / 2.5, 0.2, 1.0)
		stem_targets["air"] = lerpf(-21.5, -12.0, air_fill) + sculpting_duck_db
		if active_tea_score > 0.15:
			stem_targets["wood_sylvan"] = maxf(stem_targets["wood_sylvan"], lerpf(-22.0, -13.5, air_fill) + sculpting_duck_db)

	# 5. 生活即编曲分轨三：制琴坊送达木饰与 Lv.3+ 华宅风铃 -> 平滑淡入高八度竖琴/钟琴泛音层 (terrace & wood_weave)
	var chord_bonus_db := float(synergy_summary.get("active_chord_count", 0)) * 1.2
	if active_craft_score > 0.1 or chord_bonus_db > 0.0:
		var craft_fill := clampf(active_craft_score / 3.0, 0.2, 1.0)
		stem_targets["terrace"] = minf(-12.5, lerpf(-23.5, -14.0, craft_fill) + chord_bonus_db) + sculpting_duck_db
		stem_targets["wood_weave"] = maxf(stem_targets["wood_weave"], lerpf(-22.5, -14.0, craft_fill) + sculpting_duck_db)

	# 6. 生活即编曲分轨四：人文书院 / 钟表工坊 / 现代生态街区 -> 平滑推升对应时代室内乐声轨至主奏电平
	var total_era := maxf(0.01, era_scores["pastoral"] + era_scores["renaissance"] + era_scores["clockwork"] + era_scores["modern_eco"])
	for era_key: String in ["renaissance", "clockwork", "modern_eco"]:
		var ratio: float = float(era_scores[era_key]) / total_era
		if ratio > 0.06:
			var t_name: String = {
				"renaissance": "renaissance_fugue",
				"clockwork": "clockwork_waltz",
				"modern_eco": "modern_symphony"
			}[era_key]
			stem_targets[t_name] = lerpf(-22.0, -10.5, clampf(ratio * 1.25, 0.0, 1.0)) + sculpting_duck_db

	if night:
		for k: String in stem_targets:
			if stem_targets[k] > -55.0:
				stem_targets[k] -= 1.2

	return {
		"stem_targets": stem_targets,
		"clusters": clusters,
		"dominant_cluster": dominant_cluster,
		"choral_wave_ids": dominant_cluster.get("ordered_members", []),
		"singing": visible_cluster_houses >= MIN_CLUSTER_FOR_BASE
	}

## 自动将距离 <= 5.8m 的房屋聚类为“自然聚落 (Organic Clusters)”
static func derive_organic_clusters(state: RefCounted) -> Array[Dictionary]:
	var houses: Array = state.houses
	var n := houses.size()
	var visited := {}
	var result: Array[Dictionary] = []

	for i in range(n):
		var h_i: Dictionary = houses[i]
		var id_i := str(h_i.id)
		if visited.has(id_i):
			continue
		var queue: Array[int] = [i]
		visited[id_i] = true
		var members: Array[String] = []
		var center_sum := Vector2.ZERO

		while not queue.is_empty():
			var curr_idx: int = queue.pop_back()
			var curr_h: Dictionary = houses[curr_idx]
			var curr_id := str(curr_h.id)
			var curr_pos := Vector2(float(curr_h.origin[0]), float(curr_h.origin[1]))
			members.append(curr_id)
			center_sum += curr_pos

			for j in range(n):
				var h_j: Dictionary = houses[j]
				var id_j := str(h_j.id)
				if visited.has(id_j):
					continue
				var pos_j := Vector2(float(h_j.origin[0]), float(h_j.origin[1]))
				if curr_pos.distance_to(pos_j) <= CLUSTER_RADIUS:
					visited[id_j] = true
					queue.append(j)

		var center := center_sum / float(maxi(1, members.size()))
		members.sort_custom(func(a: String, b: String) -> bool:
			var pa := _house_pos(state, a) - center
			var pb := _house_pos(state, b) - center
			return fposmod(atan2(pa.x, -pa.y), TAU) < fposmod(atan2(pb.x, -pb.y), TAU)
		)
		var first_dist: Dictionary = state.district_for_house(members[0])
		result.append({
			"id": "cluster_" + members[0],
			"center": center,
			"members": members,
			"ordered_members": members,
			"style": str(first_dist.get("style", "warm")),
			"era_theme": str(first_dist.get("era_theme", "pastoral"))
		})
	return result

static func _house_pos(state: RefCounted, hid: String) -> Vector2:
	for h: Dictionary in state.houses:
		if str(h.id) == hid:
			return Vector2(float(h.origin[0]), float(h.origin[1]))
	return Vector2.ZERO
8.2 指尖琶音节流与注意力混音器 (scripts/audio/city_creation_attention_mixer.gd)class_name CityCreationAttentionMixer
extends RefCounted
## Ensures finger-pluck notes (placement & roof breeze glissando) are quantized
## to a clean 1/16th note (0.1875s) pentatonic arpeggio grid and never pile up,
## while gently ducking background stems by -3.5 dB during active sculpting.

enum Mode { SCULPTING, MANAGING, STROLLING, SYMPHONY }

const SLOT_SECONDS := 0.1875 # 1/16 note at 80 BPM (3.0s bar / 16)
const MAX_ARP_QUEUE := 5

var current_mode: Mode = Mode.MANAGING
var last_sculpt_usec: int = -10000000
var backing_duck_db: float = 0.0
var _last_global_slot: int = -1
var _arp_queue: Array[Dictionary] = []

func notify_sculpt_action() -> void:
	last_sculpt_usec = Time.get_ticks_usec()

func evaluate_mode(zoom: float, concert_active: bool, strolling: bool, delta: float) -> Mode:
	var since_sculpt := float(Time.get_ticks_usec() - last_sculpt_usec) / 1000000.0
	if concert_active or zoom > 32.0:
		current_mode = Mode.SYMPHONY
	elif since_sculpt <= 1.10:
		current_mode = Mode.SCULPTING
	elif strolling or zoom <= 18.0:
		current_mode = Mode.STROLLING
	else:
		current_mode = Mode.MANAGING

	var target_duck := -3.5 if current_mode == Mode.SCULPTING else (1.8 if current_mode == Mode.SYMPHONY else 0.0)
	backing_duck_db = lerpf(backing_duck_db, target_duck, 1.0 - exp(-delta * 6.0))
	return current_mode

func enqueue_pluck_arpeggio(plan: Dictionary) -> void:
	if plan.is_empty():
		return
	if not _arp_queue.is_empty():
		var tail: Dictionary = _arp_queue.back()
		if tail.get("stream_key") == plan.get("stream_key") and tail.get("house_id") == plan.get("house_id"):
			return
	if _arp_queue.size() >= MAX_ARP_QUEUE:
		_arp_queue.pop_front()
	_arp_queue.append(plan)

func step(clock_sec: float, trigger_callback: Callable) -> void:
	var global_slot := int(floor(maxf(0.0, clock_sec) / SLOT_SECONDS))
	if global_slot == _last_global_slot:
		return
	_last_global_slot = global_slot
	if not _arp_queue.is_empty():
		var pluck: Dictionary = _arp_queue.pop_front()
		trigger_callback.call("pluck_arp", pluck)
8.3 3D 世界微光光环与屋顶一键气泡引导系统 (scripts/ui/city_creation_intuitive_guidance.gd)class_name CityCreationIntuitiveGuidance
extends Control
## Effortless in-world onboarding and one-click roof role bubbles.
## Guides new players naturally: 3-house cluster -> road -> 1-click bakery bubble -> 1-click tea cafe bubble.

const UI = preload("res://scripts/ui/valley_ui_theme.gd")

var demo: Node3D
var guide_banner: PanelContainer
var banner_label: Label
var bubble_button: Button
var _target_house_id: String = ""
var _suggested_role: String = ""
var _pulse: float = 0.0
var _guide_ring_mesh: MeshInstance3D

func setup(owner: Node3D, root: Control) -> void:
	demo = owner
	name = "IntuitiveGuidanceOverlay"
	mouse_filter = Control.MOUSE_FILTER_IGNORE
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	root.add_child(self)

	guide_banner = PanelContainer.new()
	var pill := UI.panel(10)
	pill.set_corner_radius_all(20)
	pill.bg_color = Color(UI.PAPER.r, UI.PAPER.g, UI.PAPER.b, 0.90)
	pill.border_color = UI.GOLD
	guide_banner.add_theme_stylebox_override("panel", pill)
	add_child(guide_banner)

	banner_label = demo._label("", 14)
	banner_label.horizontal_alignment = HORIZONTAL_ALIGNMENT_CENTER
	guide_banner.add_child(banner_label)

	bubble_button = Button.new()
	bubble_button.name = "OneClickRoleBubble"
	bubble_button.focus_mode = Control.FOCUS_NONE
	bubble_button.custom_minimum_size = Vector2(164, 36)
	UI.primary(bubble_button)
	bubble_button.pressed.connect(_apply_one_click_suggestion)
	add_child(bubble_button)
	bubble_button.hide()

	_guide_ring_mesh = MeshInstance3D.new()
	_guide_ring_mesh.name = "GroundGuideRing"
	var torus := CylinderMesh.new()
	torus.top_radius = 1.65
	torus.bottom_radius = 1.65
	torus.height = 0.04
	_guide_ring_mesh.mesh = torus
	var mat := StandardMaterial3D.new()
	mat.albedo_color = Color(0.95, 0.78, 0.35, 0.42)
	mat.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
	mat.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
	_guide_ring_mesh.material_override = mat
	demo.add_child(_guide_ring_mesh)
	_guide_ring_mesh.hide()

func update_guidance(delta: float, camera: Camera3D) -> void:
	_pulse += delta * 3.2
	var state = demo.state
	var house_count: int = state.houses.size()
	var road_count: int = state.roads.size()
	var has_bakery := false
	var has_cafe := false
	var has_workshop := false

	for h: Dictionary in state.houses:
		var r := str(h.get("role", "residential"))
		if r == "bakery":
			has_bakery = true
		elif r == "garden_cafe":
			has_cafe = true
		elif r == "workshop":
			has_workshop = true

	_target_house_id = ""
	_suggested_role = ""
	_guide_ring_mesh.hide()
	bubble_button.hide()

	if house_count < 3:
		banner_label.text = "✨ 第一步：在河畔金色光环处点下 3 座小屋，听它们聚成第一缕晨曲 (%d/3)" % house_count
		var spot := Vector3(-3.6 + float(house_count) * 1.8, 0.08, 2.0)
		_show_ground_ring(spot)
	elif road_count == 0:
		banner_label.text = "🛤️ 第二步：点选底部「修路」，沿着 3 座小屋门前拉一条小路，让街坊走出家门"
		var h0: Dictionary = state.houses[0]
		_show_ground_ring(Vector3(float(h0.origin[0]), float(h0.get("base_y", 0.0)) + 0.08, float(h0.origin[1]) + 1.8))
	elif not has_bakery:
		banner_label.text = "🥐 第三步：直接点击水畔小屋屋顶的气泡，点亮炉火，为聚落融入温暖的大提琴与手风琴律动"
		var candidate_id := _pick_house_near_water(state)
		if not candidate_id.is_empty():
			_show_roof_bubble(candidate_id, "bakery", "🥐 点此设为麦香面包坊", camera)
	elif not has_cafe and house_count >= 4:
		banner_label.text = "🍵 第四步：点击街边小屋屋顶气泡设为「花圃茶座」，让街坊围坐品茶，唤醒悠扬长笛副旋律"
		var candidate_id := _pick_residential_house(state)
		if not candidate_id.is_empty():
			_show_roof_bubble(candidate_id, "garden_cafe", "🍵 点此设为花圃茶座", camera)
	elif not has_workshop and house_count >= 5:
		banner_label.text = "🎻 第五步：设一处「制琴木工坊」并在周围种下绿树，匠人会为邻屋挂上随风轻响的铜风铃"
		var candidate_id := _pick_residential_house(state)
		if not candidate_id.is_empty():
			_show_roof_bubble(candidate_id, "workshop", "🎻 点此设为制琴木工坊", camera)
	else:
		guide_banner.hide()
		return

	guide_banner.show()
	var vp := get_viewport_rect().size
	guide_banner.position = Vector2((vp.x - guide_banner.size.x) * 0.5, 70.0)

func _show_ground_ring(at: Vector3) -> void:
	_guide_ring_mesh.position = at
	var s := 1.0 + 0.08 * sin(_pulse)
	_guide_ring_mesh.scale = Vector3(s, 1.0, s)
	_guide_ring_mesh.show()

func _show_roof_bubble(hid: String, role: String, label_text: String, camera: Camera3D) -> void:
	if camera == null:
		return
	var h: Dictionary = demo.town._house_record(hid)
	if h.is_empty():
		return
	var world_pt := Vector3(float(h.origin[0]), float(h.get("base_y", 0.0)) + 2.6 + 0.12 * sin(_pulse), float(h.origin[1]))
	if camera.is_position_behind(world_pt):
		return
	_target_house_id = hid
	_suggested_role = role
	bubble_button.text = label_text
	var screen_pt := camera.unproject_position(world_pt)
	bubble_button.position = screen_pt - bubble_button.size * 0.5
	bubble_button.show()

func _apply_one_click_suggestion() -> void:
	if _target_house_id.is_empty() or _suggested_role.is_empty():
		return
	var res: Dictionary = demo.state.set_house_role(_target_house_id, _suggested_role)
	demo._after_edit(res, "room", true, _target_house_id)
	bubble_button.hide()

func _pick_house_near_water(state: RefCounted) -> String:
	var best_id := ""
	var best_d := INF
	for h: Dictionary in state.houses:
		if str(h.get("role", "residential")) != "residential":
			continue
		var d: float = state.water_clearance(Vector2(float(h.origin[0]), float(h.origin[1])))
		if d < best_d:
			best_d = d
			best_id = str(h.id)
	return best_id

func _pick_residential_house(state: RefCounted) -> String:
	for i in range(state.houses.size() - 1, -1, -1):
		var h: Dictionary = state.houses[i]
		if str(h.get("role", "residential")) == "residential":
			return str(h.id)
	return ""
8.4 世界空间建筑悬浮罗盘 (scripts/ui/city_creation_spatial_popover.gd —— 普通房 6 职能 + 特殊地标独占乐章按钮)class_name CityCreationSpatialPopover
extends Control
## World-space contextual popover anchored directly to the selected 3D building.
## Ordinary buildings show the 6 pure life roles + style/palette/temperament tuning (NO manual venue button).
## Special Signature Landmarks exclusively display the grand "♫ 奏响传世共鸣乐章" button!

const UI = preload("res://scripts/ui/valley_ui_theme.gd")
const Copy = preload("res://scripts/ui/city_creation_copy.gd")

var demo: Node3D
var target_house_id: String = ""
var card: PanelContainer
var title_btn: Button
var tier_label: Label
var status_label: Label
var role_row: HBoxContainer
var action_row: HBoxContainer
var temperament_btn: Button
var landmark_concert_btn: Button
var style_btn: Button
var palette_btn: Button
var _tween: Tween

# 普通建筑精简为 6 种纯粹的城市生活职能（彻底移除普通房屋的 venue 演奏庭按钮！）
const LIFE_ROLE_ICONS := {
	"residential": "🏠 居所",
	"bakery": "🥐 面包坊",
	"garden_cafe": "🍵 花圃茶座",
	"workshop": "🎻 制琴坊",
	"atelier": "🎨 人文书院",
	"clockmaker": "🕰️ 钟表坊"
}

func setup(owner: Node3D, root: Control) -> void:
	demo = owner
	name = "SpatialBuildingPopover"
	mouse_filter = Control.MOUSE_FILTER_IGNORE
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	root.add_child(self)

	card = PanelContainer.new()
	var style := UI.panel(12)
	style.set_corner_radius_all(18)
	style.bg_color = Color(UI.PAPER.r, UI.PAPER.g, UI.PAPER.b, 0.94)
	style.border_color = UI.GOLD
	style.set_border_width_all(2)
	card.add_theme_stylebox_override("panel", style)
	card.pivot_offset = Vector2(150, 80)
	add_child(card)

	var col := VBoxContainer.new()
	col.add_theme_constant_override("separation", 6)
	card.add_child(col)

	var head := HBoxContainer.new()
	head.add_theme_constant_override("separation", 6)
	col.add_child(head)

	title_btn = demo._button("河湾小屋", func(): pass)
	title_btn.flat = true
	title_btn.add_theme_font_size_override("font_size", 15)
	head.add_child(title_btn)

	tier_label = demo._label("★ Lv.1", 12)
	tier_label.add_theme_color_override("font_color", UI.GREEN)
	head.add_child(tier_label)

	style_btn = demo._button("立面 ↻", _cycle_house_style)
	style_btn.tooltip_text = "一键轮换建筑立面样式（灰泥 / 木构 / 石砌 / 圆塔）"
	UI.subtle(style_btn)
	head.add_child(style_btn)

	palette_btn = demo._button("🎨 色板", _cycle_house_palette)
	palette_btn.tooltip_text = "一键切换屋瓦与墙面色彩"
	UI.subtle(palette_btn)
	head.add_child(palette_btn)

	role_row = HBoxContainer.new()
	role_row.add_theme_constant_override("separation", 4)
	col.add_child(role_row)
	for role_key: String in LIFE_ROLE_ICONS:
		var btn := demo._button(LIFE_ROLE_ICONS[role_key], func():
			demo._after_edit(demo.state.set_house_role(target_house_id, role_key), "room")
			refresh_content())
		btn.name = "SpatialRole_" + role_key
		btn.tooltip_text = Copy.ROLE_TOOLTIPS.get(role_key, "")
		btn.add_theme_font_size_override("font_size", 12)
		role_row.add_child(btn)

	status_label = demo._label("", 12)
	status_label.add_theme_color_override("font_color", UI.MUTED)
	status_label.autowrap_mode = TextServer.AUTOWRAP_WORD_SMART
	status_label.custom_minimum_size.x = 280
	col.add_child(status_label)

	action_row = HBoxContainer.new()
	action_row.add_theme_constant_override("separation", 6)
	col.add_child(action_row)

	temperament_btn = demo._button("🎵 律动：温润行板", _cycle_temperament)
	temperament_btn.tooltip_text = "调节这处生活建筑的伴奏声轨与劳作性格（轻快快板 / 温润行板 / 深邃广板）"
	UI.subtle(temperament_btn)
	action_row.add_child(temperament_btn)

	# 仅特殊地标建筑才显示的主动乐章按钮！
	landmark_concert_btn = demo._button("♫ 奏响传世共鸣乐章", func(): demo._invite_concert())
	landmark_concert_btn.tooltip_text = "由这座特殊地标担任总指挥，唤醒全城各聚落依次接力合奏！"
	UI.primary(landmark_concert_btn)
	action_row.add_child(landmark_concert_btn)

	card.hide()

func open_for_house(house_id: String) -> void:
	target_house_id = house_id
	if house_id.is_empty():
		close_popover()
		return
	refresh_content()
	card.show()
	card.scale = Vector2(0.78, 0.78)
	card.modulate.a = 0.0
	if _tween != null and _tween.is_valid():
		_tween.kill()
	_tween = create_tween().set_parallel(true)
	_tween.tween_property(card, "scale", Vector2.ONE, 0.22).set_trans(Tween.TRANS_BACK).set_ease(Tween.EASE_OUT)
	_tween.tween_property(card, "modulate:a", 1.0, 0.14)

func close_popover() -> void:
	target_house_id = ""
	if card != null:
		card.hide()

func update_screen_anchor(camera: Camera3D) -> void:
	if target_house_id.is_empty() or not card.visible or camera == null:
		return
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty():
		close_popover()
		return
	var world_pos := Vector3(float(house.origin[0]), float(house.get("base_y", 0.0)) + 2.8, float(house.origin[1]))
	if camera.is_position_behind(world_pos):
		card.hide()
		return
	var screen_pt := camera.unproject_position(world_pos)
	var vp_size := get_viewport_rect().size
	var card_size := card.size
	var target_pos := Vector2(
		clampf(screen_pt.x - card_size.x * 0.5, 16.0, vp_size.x - card_size.x - 16.0),
		clampf(screen_pt.y - card_size.y - 18.0, 68.0, vp_size.y - card_size.y - 110.0)
	)
	card.position = card.position.lerp(target_pos, 0.35)

func _cycle_house_style() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty() or house.has("signature"):
		return
	var styles: Array = demo.State.HOUSE_STYLES
	var idx := (styles.find(str(house.get("style", "classic"))) + 1) % styles.size()
	demo._after_edit(demo.state.set_house_style(target_house_id, styles[idx]), "room")
	refresh_content()

func _cycle_house_palette() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty():
		return
	var next_pal := (int(house.get("palette", 0)) + 1) % 4
	demo._after_edit(demo.state.set_house_palette(target_house_id, next_pal), "terrace", false)
	refresh_content()

func _cycle_temperament() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty():
		return
	var modes := ["andante", "allegro", "largo"]
	var names := {
		"andante": "🎵 律动：温润行板",
		"allegro": "⚡ 律动：轻快快板",
		"largo": "🌊 律动：深邃广板"
	}
	var cur := str(house.get("temperament", "andante"))
	var next_mode: String = modes[(modes.find(cur) + 1) % modes.size()]
	house["temperament"] = next_mode
	temperament_btn.text = names[next_mode]
	demo.music.play_house(target_house_id)

func refresh_content() -> void:
	var house: Dictionary = demo.town._house_record(target_house_id)
	if house.is_empty():
		return
	title_btn.text = str(house.get("name", "河湾小屋"))
	var tier: int = demo.state.level_tier(target_house_id)
	tier_label.text = "★ Lv.%d %s" % [tier, demo.state.Quality.NAMES[clampi(tier - 1, 0, 4)]]
	var is_landmark := not str(house.get("signature", "")).is_empty()
	role_row.visible = not is_landmark
	style_btn.visible = not is_landmark
	temperament_btn.visible = not is_landmark and str(house.get("role", "residential")) != "residential"
	# 只有特殊地标建筑才显示主动演奏乐章按钮！
	landmark_concert_btn.visible = is_landmark
	status_label.text = demo.HouseholdFeedback.describe(demo.state, demo.life, target_house_id)
8.5 程序化抗锯齿矢量图标库 (scripts/ui/city_creation_vector_icons.gd) 与左上五线谱心流窄条 (scripts/ui/city_creation_score_ribbon.gd)class_name CityCreationVectorIcons
extends RefCounted
## Procedural anti-aliased vector iconography drawn natively via CanvasItem._draw().
## Eliminates plain-text "GPT-style" buttons without external PNG dependencies.

static func draw_icon(canvas: CanvasItem, kind: String, center: Vector2, radius: float, color: Color, accent: Color = Color("c4a568")) -> void:
	match kind:
		"house":
			var pts := PackedVector2Array([
				center + Vector2(-radius * 0.75, radius * 0.1),
				center + Vector2(0.0, -radius * 0.78),
				center + Vector2(radius * 0.75, radius * 0.1)
			])
			canvas.draw_polyline(pts, color, 2.2, true)
			canvas.draw_rect(Rect2(center.x - radius * 0.52, center.y + radius * 0.05, radius * 1.04, radius * 0.68), color, false, 2.0)
			canvas.draw_circle(center + Vector2(0.0, -radius * 0.22), radius * 0.14, accent)
		"road":
			canvas.draw_arc(center + Vector2(-radius * 0.5, 0.0), radius * 0.75, -0.6, 0.7, 14, color, 2.2, true)
			canvas.draw_arc(center + Vector2(-radius * 0.1, 0.0), radius * 0.75, -0.6, 0.7, 14, color, 2.2, true)
			canvas.draw_circle(center + Vector2(radius * 0.1, -radius * 0.35), radius * 0.14, accent)
		"life_role":
			canvas.draw_arc(center, radius * 0.58, 0.0, TAU, 20, accent, 2.0, true)
			canvas.draw_circle(center + Vector2(-radius * 0.18, 0.0), radius * 0.16, color)
			canvas.draw_circle(center + Vector2(radius * 0.22, -radius * 0.12), radius * 0.14, color)
		"nature_water":
			canvas.draw_line(center + Vector2(0.0, radius * 0.55), center + Vector2(0.0, -radius * 0.15), color, 2.2, true)
			canvas.draw_circle(center + Vector2(0.0, -radius * 0.28), radius * 0.38, color)
			canvas.draw_arc(center + Vector2(0.0, radius * 0.45), radius * 0.48, 0.2, PI - 0.2, 12, accent, 2.0, true)
		"terrain":
			var mtn := PackedVector2Array([
				center + Vector2(-radius * 0.78, radius * 0.48),
				center + Vector2(-radius * 0.38, -radius * 0.28),
				center + Vector2(radius * 0.22, -radius * 0.28),
				center + Vector2(radius * 0.45, radius * 0.12),
				center + Vector2(radius * 0.78, radius * 0.48)
			])
			canvas.draw_polyline(mtn, color, 2.2, true)
			canvas.draw_line(center + Vector2(-radius * 0.38, -radius * 0.28), center + Vector2(radius * 0.22, -radius * 0.28), accent, 2.8, true)
8.6 五大声学和弦 BUFF、地标超级增幅圈与跨区开拓倍增器 (scripts/world/city_creation_synergy_buffs.gd)class_name CityCreationSynergyBuffs
extends RefCounted
## Evaluates Acoustic Chord Synergies, Landmark Adjacency Super-Amplifiers (14m~18m),
## and the Cross-Cluster Expansion Multiplier (+12% per active organic cluster).

const CHORD_DEFS := {
	"pastoral_triad": {
		"name": "🎵 晨光田园三和弦",
		"desc": "同聚落含【面包坊 + 花圃茶座 + 喷泉内院/池塘】· 饮茶转化+50%、Lv.3进化加速",
		"production_mult": 1.25
	},
	"highland_fifth": {
		"name": "🎵 高地钟楼五度共鸣",
		"desc": "高地台地(>=1.0m)含【>=4栋房屋 + 钟楼/古钟圣塔】· 高地步速+25%、声场聚焦扩大",
		"speed_mult": 1.25
	},
	"renaissance_fugue": {
		"name": "🎵 文艺复兴赋格四重奏",
		"desc": "同聚落含【人文书院 + 制琴坊 + >=2栋连拱柱廊楼】· 工艺品产出+50%、直通Lv.4华宅",
		"production_mult": 1.50
	},
	"clockwork_waltz": {
		"name": "🎵 蒸汽花房圆舞曲",
		"desc": "同聚落含【钟表工坊 + 阳光玻璃花房 + 电车轨街】· 电车沿线自动充能余韵、制作提速40%",
		"production_mult": 1.40
	},
	"chrono_counterpoint": {
		"name": "🎵 跨河古今交响对位",
		"desc": "两个不同时代聚落通过【桥梁或共鸣音弧】相连 · 两岸共享服务、全产出+30%",
		"production_mult": 1.30
	}
}

static func evaluate_city_synergies(city: RefCounted) -> Dictionary:
	var active_chords: Array[String] = []
	var district_roles: Dictionary = {}
	var district_eras: Dictionary = {}
	var high_houses := 0
	var has_tower := false

	for house: Dictionary in city.houses:
		var hid := str(house.id)
		var dist: Dictionary = city.district_for_house(hid)
		var did := str(dist.get("id", "default"))
		if not district_roles.has(did):
			district_roles[did] = {}
			district_eras[did] = str(dist.get("era_theme", "pastoral"))
		district_roles[did][str(house.get("role", "residential"))] = true
		if float(house.get("base_y", 0.0)) >= 1.0:
			high_houses += 1
		if house.get("signature", "") == "bell_keep":
			has_tower = true
		for cell: Dictionary in house.cells:
			if int(cell.get("level", 0)) >= 2:
				has_tower = true

	var courts: Array = city.courtyard_plans()
	var has_fountain_or_pond := not courts.is_empty() or not city.waters.is_empty()
	var has_tram_road := false
	for road: Dictionary in city.roads:
		if str(road.get("style", "path")) == "tram":
			has_tram_road = true
			break

	for did: String in district_roles:
		var roles: Dictionary = district_roles[did]
		if roles.has("bakery") and roles.has("garden_cafe") and has_fountain_or_pond and "pastoral_triad" not in active_chords:
			active_chords.append("pastoral_triad")
		if roles.has("atelier") and roles.has("workshop") and "renaissance_fugue" not in active_chords:
			active_chords.append("renaissance_fugue")
		if roles.has("clockmaker") and has_tram_road and "clockwork_waltz" not in active_chords:
			active_chords.append("clockwork_waltz")

	if high_houses >= 4 and has_tower:
		active_chords.append("highland_fifth")

	var unique_eras := {}
	for did: String in district_eras:
		unique_eras[district_eras[did]] = true
	if unique_eras.size() >= 2 and (not city.musical_links.is_empty() or not city.district_answers.is_empty()):
		active_chords.append("chrono_counterpoint")

	var active_district_count := district_roles.size()
	var expansion_multiplier := 1.0 + float(clampi(active_district_count - 1, 0, 5)) * 0.12

	return {
		"active_chords": active_chords,
		"active_chord_count": active_chords.size(),
		"active_district_count": active_district_count,
		"expansion_multiplier": expansion_multiplier,
		"production_bonus_mult": expansion_multiplier * (1.20 if not active_chords.is_empty() else 1.0)
	}

static func landmark_aura_for_house(city: RefCounted, target_house: Dictionary) -> Dictionary:
	var at := Vector2(float(target_house.origin[0]), float(target_house.origin[1]))
	var speed_mult := 1.0
	var extra_batch := 0
	var labels: PackedStringArray = []

	for house: Dictionary in city.houses:
		var sig := str(house.get("signature", ""))
		if sig.is_empty():
			continue
		var sig_at := Vector2(float(house.origin[0]), float(house.origin[1]))
		var dist := at.distance_to(sig_at)
		match sig:
			"watermill":
				if dist <= 18.0 and str(target_house.role) in ["bakery", "workshop"]:
					speed_mult *= 1.35
					labels.append("🌊 大水车动力圈 (+35%速度)")
			"bell_keep":
				if dist <= 16.0:
					speed_mult *= 1.25
					labels.append("🔔 古钟回响圈 (+25%效率)")
			"music_academy":
				if str(city.district_for_house(str(house.id)).get("id", "")) == str(city.district_for_house(str(target_house.id)).get("id", "_")):
					speed_mult *= 2.0
					extra_batch += 1
					labels.append("🏛️ 音乐院同聚落赋能 (产出翻倍)")
			"botanical_palace":
				if dist <= 14.0:
					speed_mult *= 1.40
					labels.append("🌿 植物宫花海圈 (+40%茶聚与和谐)")

	return {
		"speed_mult": speed_mult,
		"extra_batch": extra_batch,
		"label": " · ".join(labels)
	}


## 第九章：面向施工 AI 的十阶段超长持续施工路线图（Stage 1 ～ Stage 10 验收清单）施工 AI 请严格按照以下 Stage 1 ～ Stage 10 顺序推进，每完成一阶段运行对应 CPU 与 OpenGL 实窗回归测试：施工阶段阶段名称与核心目标涉及核心文件刚性验收指标Stage 1Phase 12 渲染破面根治与远端结算收口消灭小河湾黄/品红/蓝巨大彩色面；完成远端工坊到期事件堆结算与单屋分帧品质回调。city_creation_meadow.gd, foliage.gd, path_pebbles.gd, bunting.gd, path_edge.gd, highland.gd, city_creation_life.gd• 所有 MultiMesh 接入 safe_set_instance()（严禁传入行列式为 0 的零缩放矩阵）并显式设 visible_instance_count• 300 屋实窗 Life 均值 < 0.72ms，单屋品质回调 < 0.85ms，连续 1000 帧零破面Stage 2“聚落成歌”与“生活即编曲”垂直分轨引擎实装 CityCreationClusterHarmony：孤屋留白（1~2屋静音）、>=3屋唤醒伴奏、>=5屋流淌主旋律与顺时针窗光波浪；用生活状态平滑驱动同步分轨，关闭日常零散抢麦短音效。新建 scripts/audio/city_creation_cluster_harmony.gd修改 city_creation_music.gd, city_creation_resonance.gd• 1～2 栋孤屋时背景长轨静默（-60dB），仅保留自然声床与落笔音• 放下第 3 栋房瞬间柔和淡入吉他/大提琴伴奏，第 5 栋房淡入主旋律• 面包坊、茶座、制琴坊、书院、钟表坊运转时 100% 同步推起对应伴奏分轨，零乱叠Stage 3剥离普通房屋“演奏”按钮，特殊地标独占传世乐章从普通建筑交互中移除 venue 与手动邀演按钮；普通房屋聚焦 6 种纯粹生活职能，仅 6 座特殊地标拥有 ♫ 奏响传世共鸣乐章 按钮。scripts/ui/city_creation_demo.gd, scripts/world/city_creation_state.gd• 点击任何普通民居或工坊不再出现 InviteConcert / AutoMatinee 按钮• 点击【圆顶音乐院】、【水上交响剧场】或【古钟圣塔】等特殊地标时显示隆重的 ♫ 奏响传世共鸣乐章 按钮并指挥全城聚落接力合奏Stage 43D 地面微光光环与屋顶一键气泡自然引导 + 自动聚落凝聚实装 CityCreationIntuitiveGuidance 与 5.8m 自动聚落继承，让新手 60 秒无师自通。新建 scripts/ui/city_creation_intuitive_guidance.gd修改 city_creation_state.gd, city_creation_demo.gd• 开局自动在河畔地面生成呼吸金色光环引导建满 3 屋 -> 拉通小路 -> 水边屋顶弹出 [🥐 点此设为麦香面包坊] 气泡（点击气泡一步完成转化并响起大提琴）• 5.8m 内新建房屋自动凝聚进同一聚落并继承风貌，无需手动切工具 8 涂抹Stage 5去 GPT 化空间 UI 重构（上）：矢量图标、五线谱心流窄条与黄铜日晷砍掉左上大方框、右上文字按钮排与左下说明卡片，释放 88% 纯净视野。新建 city_creation_vector_icons.gd, city_creation_score_ribbon.gd, city_creation_sundial_hud.gd修改 city_creation_paper_hud.gd• 左上角 5 根铜金五线谱随聚落节拍实时波动，展示已激活声学和弦徽章• 右上角黄铜日晷点击平滑旋转切换晴昼/夕照/星夜Stage 6去 GPT 化空间 UI 重构（下）：世界空间建筑罗盘与底部 5 键触觉画具坞彻底消灭右侧 310px 固定表单抽屉与全游戏所有 OptionButton 下拉菜单！新建 city_creation_spatial_popover.gd, city_creation_tactile_dock.gd修改 city_creation_demo.gd• 点击 3D 房屋时在房屋正上方弹簧弹出 SpatialBuildingPopover• 底部整合为 筑屋 / 修路 / 烟火 / 林水 / 地形 5 大触觉画具键，点击时在正上方弹出二级圆章气泡弧Stage 7指尖轻交互与八音盒城市：16分音符屋顶刮奏、居民欢呼与三档性格调音实装 CityCreationAttentionMixer、鼠标拂过屋顶微风琶音与工坊 快板/行板/广板 调音。新建 city_creation_attention_mixer.gd修改 city_creation_demo.gd, bakery.gd, workshop.gd, cafe.gd• 建房落笔与鼠标拂过聚落屋顶按 0.1875s 网格依次弹出五声音阶琶音，屋顶轻弹 4cm，8m 内居民驻足欢呼• 切换工坊为“深邃广板 (largo)”后单炉产出翻倍且低音弦乐分轨更加醇厚Stage 8屋顶微缩心愿气泡、地标手绘巡游线与四时声学微气候让居民主动浮现微缩心愿气泡，支持春花/夏雨/秋叶/夜萤四时微气候切换。新建 scripts/ui/city_creation_wish_pins.gd修改 city_creation_environment.gd, city_creation_ambience.gd• 缺水面包坊或未接路民居头顶浮现 💧 / 🌉 微缩圆章，点击直接激活对应画具• 切换四时微气候验证花瓣/雨滴涟漪/秋叶/流萤视觉与分轨增益变化Stage 9五大声学和弦 BUFF、6 大地标邻接增幅圈与六大开局声学地貌种子落地完整策略深度与“再来一把”肉鸽重玩闭环。新建 city_creation_synergy_buffs.gd, city_creation_biome_seeds.gd修改 city_creation_prosperity.gd, serializer.gd (Schema 19)• 凑齐和弦配方自动点亮 ScoreRibbon 徽章并赋予工坊提速• 作品收藏面板支持选择 6 大声学地貌种子开新局，旧 Schema 1~17 存档 100% 兼容Stage 10全量自动化验证、多分辨率适配与 GitHub <100MB 交付收口完成全部 CPU/OpenGL 实窗回归测试与看板更新。PROJECT.md, AI_START_HERE.md, tests/test_city_creation_*.gd• 1440×900 与 1024×768 实窗检验全通过，300 屋 p95 < 7.2ms，tools/sync_github_main.py 核对通过

## 第十章：仓库入口文件同步替换文本（PROJECT.md 与 AI_START_HERE.md 最新看板补丁）当您将本文档保存覆盖为 文档/code_artifact.md 后，可将以下精简段落追加或更新至 PROJECT.md 与 AI_START_HERE.md 的接续施工入口：## 第二代精品化十阶段接续看板（Stage 1 ～ Stage 10，详见 `文档/code_artifact.md`）
- [ ] **Stage 1 · 渲染破面根治与远端结算收口**：全 MultiMesh 接入 `safe_set_instance`（严禁零缩放奇异矩阵），消灭小河湾彩色破面；远端工坊送装接入截止时间堆，品质晋升每帧限 1 屋。
- [ ] **Stage 2 · 聚落成歌与生活即编曲 (`CityCreationClusterHarmony`)**：1~2 屋静谧留白，>=3 屋唤醒吉他/大提琴伴奏，>=5 屋唤醒主旋律与顺时针窗光波浪；面包坊/茶座/制琴坊/书院/钟表坊全面映射为同步垂直分轨（Vertical Stems），关闭日常零散抢麦短音效。
- [ ] **Stage 3 · 普通建筑去演奏化与特殊地标独占乐章**：普通房屋精简为 6 种纯粹生活职能（移除普通房手动 `venue` 按钮），主动发起 `♫ 奏响传世共鸣乐章` 按钮由 6 座特殊地标建筑独占。
- [ ] **Stage 4 · 零门槛 3D 微光引导与自动聚落 (`CityCreationIntuitiveGuidance`)**：`5.8m` 内建房自动凝聚为街坊；3D 地面金色光环 + 屋顶一键气泡（`[🥐 点此设为麦香面包坊]`）自然引导前 3 分钟心流。
- [ ] **Stage 5 & 6 · 去 GPT 化空间触觉 UI**：实装 `_draw()` 矢量图标、左上五线谱心流窄条、右上黄铜日晷、跟随 3D 房屋的 `SpatialBuildingPopover` 与底部 5 键触觉画具坞（+二级弹簧圆章气泡），消灭全部下拉菜单与右侧固定大抽屉。
- [ ] **Stage 7 & 8 · 玩家-城市共生交互**：`0.1875s` 量化落笔音与屋顶微风刮奏、8m 居民欢呼、工坊三档声学性格调音（快板/行板/广板）、屋顶微缩心愿气泡与四时声学微气候。
- [ ] **Stage 9 & 10 · 五大声学和弦 BUFF、地标邻接增幅圈与六大声学地貌种子**：实装 `CityCreationSynergyBuffs`、跨聚落开拓倍增器 (`+12%/区`) 与 6 大开局声学地貌种子，完成全量实窗回归收口。
