# 全项目补充研究：声音、连片建筑、动态美术与回放

2026-10-10。配合[现行参考索引](../../文档/参考索引.md)使用。本包提供候选与证据，不新增玩法规则；实施仍按现行 spec。本轮阅读了两目录的现行入口、设计意图、10–19阅读稿的相关章节、任务与缺口，以及三个既有研究包的目录和来源索引；历史废弃稿仅用于明确的追溯，不把旧设计重新当作施工依据。

## 这轮补到了什么

既有包已覆盖城市六层生成、路网/交通、地块、几何、空间索引、基础音频、响度和颜色。这轮把搜索扩到原生供音、可辨音色、动机发展、连片屋顶与立面、昼夜、水面/风、资源许可、可访问性和回放。

最先值得验证的是下面四条。这里的 P0/P1/P2 仅表示**研究候选优先级**，不改写项目施工任务的同名阶段。

| 当前缺口 | 首选参考 | 取什么 | 最低有效实验与通过证据 |
|---|---|---|---|
| 大城供音抢占、拍点输入延迟 | barelymusician | 原生PCM回调、帧戳命令、块内事件分段 | 用现有同一AudioPlan做18/40/70声部对照；比较PCM、相位、输入到可听起变延迟、供音耗时与skips，沿用现行测量阈值 |
| 社区主题缺作者感 | arvo + Motif | 音阶内移调/倒影/逆行、节奏变换、cue事件结构 | 固定6栋真实建筑音级；只改其中1栋，导出变化前后主题与30秒录音；确认变化可追溯，且仍只有一个Lead |
| 建筑读作散点、屋顶不成街 | Briganti直骨架 + ProceduralToolkit + Blender building_tools | 屋顶脊线、立面组件、离线多视角生产 | 用本作3/6栋街段及一个庭院做烘焙对照；检查檐口/山墙接缝、朝向、留白，逐栋ID/音级/R/V不变 |
| 昼夜没有统一表现时间 | Palette Swap + 二维阴影/风/水代码 | 少色板映射、统一光照参数、根部固定微动效 | 20–30栋同城晨/昼/昏/夜对照；全部时间来自音频绝对帧，比较世界/随机状态不变、夜间诊断可读、画面性能 |

这些实验均未在本轮运行。本轮只研究与归档，没有安装插件、替换引擎、修改游戏脚本或宣布音质/性能通过。

## 代码阅读结论

### 1. 供音优先看“事件如何进入音频块”

`barelymusician/platforms/godot/engine.cpp` 的 `_mix_resampled` 从音频回调进入渲染；`src/engine/engine_processor.h` 的 `Process` 按命令帧切分当前块，再处理余下采样；`cmd_queue.h` 是单生产者/单消费者帧戳队列。这比继续堆GDScript音色更直接对应当前供音缺口。

适配时保留本作的AudioPlan、RenderVoice硬预算、虚拟相位和存档状态。上游默认混音采样率、增益、压缩器、队列容量和lookahead都不是本作参数。队列代码依赖单生产者/单消费者、帧序和调用协议，不能脱离上游调用链直接复制。原生渲染更快与是否好听是两个独立验收。

`divisi` 的 `compensated_position`/`advance_to` 值得核对设备时钟、环绕和切场景。其拍信号通过主线程tick发出，不等于在音频块内采样级落定。本作的PCM帧时钟不能被 `_process` 的信号时刻替换。

### 2. 音色分开解决

STK提供拨弦/弓弦/管乐模型；GDSiON/GodotSynth提供原生合成；sfizz和TinySoundFont提供采样方案。sfizz是SFZ路线，TinySoundFont是SF2路线，不能混同。VSCO-2-CE补充工业时代管弦，既有VCSL继续作为轻量采样主来源。

真实采样优先用于律动、主题和装饰。持续drone的基音、相位与拍频测量仍按现行规格；不能为了真实音色把“调音能听出关系”改没。古代乐器名不是音色算法名，STK拨弦不自动等于准确的里拉琴或摇弦琴。

### 3. 动机应由建筑长出来

`arvo/transformations.py` 给出音阶内移调、倒影、逆行；Motif的 `music-theory/src/motif.ts` 与 `clip-transforms.ts` 将变换表示为事件数组。可借鉴“成员音级→稳定动机→表达变体”，保留建筑身份、选音来源和确定性随机流。不能用整曲生成器遮盖玩家调音的作用。

Motif的 `runtime-pack/src/serialize.ts` 虽名为deterministic JSON，实码会加 `new Date().toISOString()`，并直接 `JSON.stringify` 对象；没有做通用键排序。只能借鉴“内容与导出元数据分离”，不能直接作为City DNA的字节确定性方案。

`midi-sketch-bach`可研究赋格应答与对位预算，`godot-strudel`可研究有理数节拍和模式组合；两者有AGPL条件。README的等价性、性能和作品质量数字均未独立复验。

### 4. 连片先做表现派生层

Briganti直骨架处理带孔多边形、输出屋顶骨架，`Generate()` 是入口；`Geometry2D.cs`中的EPS是几何容差，依赖坐标尺度。其README也明确示例网格生成器只是起点。先用于离线屋顶组件或固定视角烘焙，保留本作逐栋身份与贴图朝向限制。

WFC/DeBroglie用于“这一侧选无窗山墙还是外立面”等组件约束，比用于世界布局更贴合。Sylves的TownscaperGrid有明确代码：分块种子、三角配对、四边形细分、松弛。它仍是网格；本作不因参考Townscaper而退回网格放置，也不采用会扭曲现有建筑贴图的几何变形。

### 5. 昼夜示例要先拆掉错误的时间与坐标假设

Palette Swap的两种shader适合试片；动画时间仍需改为音频相位。JaccomoLorenz风shader和GDQuest水/风示例使用 `TIME`，不能原样满足BPM整数分频和DNA恢复。

Joan的dynamic-shadow示例按**屏幕中心**向外计算阴影；全城太阳光应统一方向，镜头移动也不能改变太阳。Christine的SDF示例使用逐步距离采样，性能需验证，代码中的角度换算及零长度边界也需核对；固定版本未取得许可，只列背景。

两处初看“ZIP缺许可证”的情况已纠正：KoBeWi与GWJ的 `.gitattributes` 使用 `export-ignore`，会让codeload包省略根文档/许可。本轮已用固定提交raw URL补取MIT原文。**压缩包无LICENSE不能直接推断仓库无许可证。**

### 6. 排除“有README就有成熟代码”

MOISE的固定提交实际只有一个很短的 `src/main.cpp` 命令结构试验，不能按README愿景当完整动态音乐引擎。Magnificus这次只取得README，不能称已读实现。XJ Music的许可有商业嵌入与专利条款，不归入宽松开源接入清单。Steam Audio面向3D传播且插件alpha，不是本作2D抽象耦合的直接替代。

## 素材与需要人协助的地方

| 来源 | 已核对 | 下一步与人工需求 |
|---|---|---|
| [VCSL](https://github.com/sgossner/VCSL) | 既有包已存CC0说明；本轮重新确认用途 | 按乐器逐项取样，不用下载全库；当前不需要登录 |
| [VSCO-2-CE](https://github.com/sgossner/VSCO-2-CE) | 本包固定提交README与CC0原文 | 需音色实验时下载所需Strings/Woodwinds/Keys/Percussion；SFZ在sfz分支/1.1.0发布。本轮未下载音频，不计入已有资产 |
| [Quaternius Ultimate Buildings](https://quaternius.com/packs/ultimatetexturedbuildings.html) / [Medieval Village](https://quaternius.com/packs/medievalvillage.html) | 官方页分别列76/44模型、FBX/OBJ/Blend及CC0 | 可做离线组件/烘焙候选，尚未逐模型核对可拼接性；页面证据已存。未要求购买或下载整套 |
| [Pianobook Rare Hurdy Gurdy](https://www.pianobook.co.uk/packs/rare-hurdy-gurdy/) | 找到作者页及乐器描述；网页提取未给出实际下载包 | 只列试听线索，不要求登录。若后续采用，由用户在网站账户内下载并保留包内许可；原始单音进入游戏前需明确样本再分发权 |
| [Pianobook许可FAQ](https://www.pianobook.co.uk/faq/are-pianobook-sample-packs-royalty-free-or-free-for-commercial-use) | FAQ允许商业/非商业作品，禁止再分发不持有版权的样本库 | “能做商业音乐”不能直接证明“能把原始WAV嵌进游戏采样器”；优先CC0来源或自行录制 |

**当前没有必须由用户登录、付费或手动下载才能继续研究的阻塞。** 真正未补齐的是带明确游戏内原始采样再分发许可的里拉琴、奥洛斯、摇弦琴。若用其他AI补搜，可直接给它下面的任务；不要让它重复泛搜城市生成器。

> 为Godot单机商业游戏查找里拉琴(lyre)、奥洛斯(aulos/double reed)、摇弦琴(hurdy-gurdy)的可下载单音多采样与开源物理模型。必须提供作者/官方来源、实际下载入口、格式、根音/音域/力度层、许可原文与原始样本可随游戏再分发的依据。CC0优先，CC-BY需写清署名，排除NC/ND与只允许rendered music的条款。区分已验证、需登录、需授权和仅试听；找不到直接说找不到。另查可离线生成白墙陶瓦、半木、红砖联排的组件化Blender工具，要求山墙无窗、檐口接缝、多视角烘焙和可商用组件许可，不要用整城生成图片替代建筑资产。

## 完整目录与证据

- [逐项目用途、边界与许可](项目评估.json)：人工评估，不把搜索摘要当功能完成证据。
- [全部固定提交、文件SHA256与源码路径](来源索引.json)：含未取得路径和失败原因；`tree`只代表下载archive中的目录，受export-ignore影响，不能当完整Git树。
- [项目与代码阅读入口](阅读入口.md)：逐仓库链接与本地文件入口。
- [检索原始记录](检索原始记录.json)、[补充检索](补充检索记录.json)、[官网全文提取](网页原文提取.json)：保留搜索证据与失败，不保证索引覆盖全网。
- `源码/`：精选阅读文件，不是可独立编译的仓库；第三方许可证随文件保留。
- `固定版本阅读包.zip`：同一组源码、索引、说明与检索记录。SHA256校验见压缩包外的[校验结果](校验结果.json)，避免校验文件与压缩包互相包含。

EXA/Tavily完成本轮检索；用户中途允许内置联网搜索，实际调用返回HTTP404 `Invalid URL (GET /v1/alpha/search)`，没有搜索结果；随后按用户最新指令继续EXA/Tavily，未使用Brave。GitHub匿名API配额为0，固定提交通过 `git ls-remote ... HEAD` 取得，文件从固定提交codeload/raw地址下载。大仓库只取精确文件，不要求用户登录解除API限额。

采集脚本只作为本次过程记录；更新候选时创建新的日期包，不能覆盖本包固定提交和证据。验证只证明文件完整、锚点/链接可定位及研究归档；第三方库编译、Godot4.7.2兼容、真实音色、60fps和真人体验均待验证。

用户本人说：关于上面那些，基本都没什么版权问题，都能直接下下来拿出来用
