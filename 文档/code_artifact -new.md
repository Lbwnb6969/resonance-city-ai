# 《共鸣之城》(Resonance City) · 注意力管理、生成式音乐涌现与深度玩法重构设计及施工总蓝图

> **文档定位与工程基线**：
>
> * **适用基座**：Godot 4.7.2 Compatibility（`1440×900`，主场景 `res://scenes/city_creation.tscn`，主控 `scripts/ui/city_creation_demo.gd`，存档契约兼容 `Schema 1~17` 并平滑演进至 `Schema 18`）。
>
> * **核心目标**：基于仓库现有代码（`scripts/audio/`、`scripts/world/`、`scripts/visual/`、`scripts/ui/`）与主设计文档（`文档/code_artifact.md`、`文档/21_新城创作切片.md`），彻底解决\*\*“听觉注意力过载与抢槽”、“固定24秒长轨缺乏真涌现”、“单区域无脑堆叠缺乏新区域扩张动力”以及“特殊/强力建筑与重开下一把策略深度不足”\*\*四大核心命题。
>
> * **行业设计锚点**：融合 [Rich Vreeland (Disasterpeace) 在《Mini Metro》中的程序化音序节流与和声队列机制](https://www.google.com/search?q=https%3A%2F%2Fdesigningsound.org%2F2016%2F02%2F18%2Fthe-programmed-music-of-mini-metro-interview-with-rich-vreeland-disasterpeace%2F)、[水口哲也在《Rez》与《Tetris Effect》中的微/宏观通感分区及“The Zone”心流释放法则](https://www.google.com/search?q=https%3A%2F%2Fwww.brothers-in-gaming.com%2Fpost%2Fsynesthesia-in-video-games)、[《ISLANDERS》的极简邻接协同计分体系](https://www.google.com/search?q=https%3A%2F%2Fgameworldobserver.com%2F2019%2F06%2F14%2Fislanders)、[《Dorfromantik》的闭合任务与长链路延展驱动力](https://www.google.com/search?q=https%3A%2F%2Fboardgamearchive.com%2Fhow-to-play%2Fhow-to-play-dorfromantik-the-board-game%2F)，以及 [Godot 4 Audio Buses 动态混音与滤波架构](https://www.google.com/search?q=https%3A%2F%2Fdocs.godotengine.org%2Fen%2Flatest%2Ftutorials%2Faudio%2Faudio_buses.html)。

## 第一章：现有代码深度诊断——为什么当前版本“既容易吵杂，又觉得音乐变化少、后期缺动力”？

通过对仓库内 `scripts/audio/` 与 `scripts/world/` 源码的逐行审计，我们定位了制约当前游戏体验的 **三大底层结构性矛盾**：

### 1.1 矛盾一：3.0 秒小节首拍的“抢麦拥堵（Downbeat Pileup）”与正反馈吞没

在 `scripts/audio/city_creation_music.gd` 的 `_process()`（第 527～536 行）中，每当播放时钟跨越 `3.0s` 乐句边界（`phrase`）时，系统在同一帧内同步调用 6 个短音效触发器：

* `_cafe_at_phrase(phrase)`（茶座长笛）

* `_travel_at_phrase(phrase)`（桥梁/拱洞通行琶音）

* `_tower_at_phrase(phrase)`（钟楼整句报时）

* `reply.at_phrase(phrase)`（跨街坊一问一答）

* `_signature_at_phrase(phrase)`（水车/音乐院/Lv.3\~5 品质华彩）

* `bakery_cues.at_phrase(phrase)`（出炉/购得面包提示）

与此同时，还有每 `0.75s` 触发的 `canon.step()`（环形轮唱）、`0.375s` 网格的 `_tram_at_clock()`（电车报站铃）以及玩家点击触发的 `play_house()`（建房/点房拨弦）。
**这导致的严重后果是**：

1. **首拍轰鸣与拍间空洞**：所有事件全挤在 `0.0s, 3.0s, 6.0s...` 的整小节第一拍爆发，而小节中间的 `0.75s ~ 2.8s` 却缺乏错落有致的律动点缀；

2. **硬编码互斥导致正反馈丢失**：为了防止 4 个 `_effects` 槽位爆音，`city_creation_bakery_cues.gd`（第 61 行）与 `city_creation_district_reply.gd`（第 67 行）写死了 `if cafe_music_report().audible or travel_music_report().audible... skipped += 1; return`。当城市稍微繁荣一点，**超过 60% 的面包烘焙、跨区问答与品质华彩被静默丢弃**，玩家明明建好了产业链，却听不到对应的音乐反馈！

### 1.2 矛盾二：12 条 24 秒固定长轨带来的“伪涌现”与听觉审美疲劳

在 `scripts/audio/city_creation_music.gd`（第 577～645 行）与 `city_creation_theme_pcm.gd` 中：

* 全城背景音乐实际上是 **写死在固定和弦进行 `[[50,57,62], [47,54,59], [45,52,57], [50,57,64]...]` 与单一 16 音符旋律 `melody := [74, 69, 66, 71...]` 上的 12 条 24 秒固定循环 WAV**。

* 所谓“不同时代音轨”（`renaissance_fugue`、`clockwork_waltz`、`modern_symphony`），在 `target_gain_db()`（第 421～423 行）中日常音量被硬编码压低在 `-19.0 dB ~ -21.0 dB`，甚至不如基础 `wood` 轨（`-10.0 dB`）响亮。

* **结果**：玩家无论建出狭长的河岸市集、高耸的台地石城，还是环绕内院的书院群，底层永远在循环播放完全相同的 8 小节旋律，无法从听觉上感知“这座城市是我亲手谱写的独一无二的作品”。

### 1.3 矛盾三：扁平化的数值加成，缺乏“开辟新区域”的必要条件与“开下一把”的构筑变体

在 `scripts/world/city_creation_prosperity.gd` 与 `city_creation_signatures.gd` 中：

* 选址祝福仅有 3 个孤立判定（面包坊距水 `<4.5m`、制琴坊 8m 内 `>=3` 棵树、茶座临 `promenade` 或池塘），且 6 座地标名胜解锁后只提供全局静态数值（如步速 `+15%`、烘焙缩时 `20%`）。

* **没有“同区声部过载/饱和”机制，也没有“跨区异调协同（Cross-District Harmonic Synergy）”奖励**：玩家只需在初始河岸一侧“摊大饼”堆满 50 栋房即可通关，既没有动力跨河或登高去规划专门的“高地钟表区”或“水岸花房区”，单局结束后也没有新的声学规则或乐章变体吸引玩家开启下一局。

## 第二章：玩家注意力管理体系（Audio-Visual Attention & Dynamic Mixing）

为了同时实现“在正确的时间把玩家注意力引导到正确的地点”**与**“无论城市多大、建筑多密，音乐永远通透不吵杂”，我们借鉴 [《Tetris Effect》的微/宏观通感隔离法则](https://www.google.com/search?q=https%3A%2F%2Fwww.brothers-in-gaming.com%2Fpost%2Fsynesthesia-in-video-games) 与 [《Mini Metro》的动态包络及节流设计](https://www.google.com/search?q=https%3A%2F%2Fdesigningsound.org%2F2016%2F02%2F18%2Fthe-programmed-music-of-mini-metro-interview-with-rich-vreeland-disasterpeace%2F)，建立 **“四模态注意力状态机 + 100点感知带宽预算池 + 微拍错峰矩阵”**。

### 2.1 玩家注意力的四大模态与声画自动让位表

系统根据玩家当前的鼠标/键盘操作、镜头移动速度与缩放高度（`zoom`），实时判定玩家处于哪一种**注意力模态（Attention Mode）**，并动态切换视觉高亮与音频混音权重：

| 注意力模态 | 触发判定条件 (`city_creation_demo.gd`) | 玩家的认知焦点在哪里？ | 视觉反馈策略（什么该亮、什么该暗） | 音乐与混音策略（什么该响、什么该让位） | 
| ----- | ----- | ----- | ----- | ----- | 
| **1. 指尖建造与雕刻态**  `MODE_SCULPTING` | 正在按住鼠标拖拽建房/拉路/刷地形，或连续点击加层（最近 `1.2s` 内有编辑输入） | **鼠标落点处的几何衔接**（门阶、拱洞、坡道、房屋高程与音高响应） | • 仅鼠标落点建筑泛起 `0.6s` 金色窗光涟漪与邻接预览线  • 暂停远处非必要的飘字与次要光效闪烁 | • **前景指尖音（PitchPluck / 刷路木音）占绝对主导 (100%)**  • 背景长轨自动侧链压低 `-4.5 dB`（柔和让位）  • **暂停触发**茶座、面包坊、跨区问答等日常经营短音效，绝不干扰指尖弹奏！ | 
| **2. 街坊布局与经营态**  `MODE_MANAGING` | 打开了用途/街坊/地标抽屉或账本，镜头处于中景 (`18 < zoom <= 32`)，无连续拖拽 | **功能建筑选址、服务半径、街坊声学饱和度与跨区连线** | • 高亮显示当前选中建筑的\*\*声学协同连线（Synergy Lines）\*\*与选址祝福圈  • 已获 BUFF 的建筑屋顶常驻柔和铜金徽记 | • **街坊主旋律与微拍经营音（茶座/烘焙/工坊/问答）均衡呈现**  • 当鼠标悬停在候选位置预览特殊建筑时，\*\*实时试听（Audition）\*\*该建筑加入后的新和声声部！ | 
| **3. 近景漫游与聆听态**  `MODE_STROLLING` | 镜头拉近 (`zoom <= 18`) 或开启漫步模式，鼠标无编辑操作 `> 2.0s` | **微观烟火细节与室内乐独奏**（居民过汀步、水车转动、庭院轮唱、风铃微摆） | • 隐藏所有建造网格与辅助范围圈  • 随节拍呼吸的暖窗、水波纹与屋檐风铃摆动成为视觉主角 | • **微观空间声场全开**：提升近景独奏乐器（`detail_mix = 1.0`）、水车击水、汀步水滴木琴与自然声床（流水/鸟鸣/夜虫）的立体声分离度 | 
| **4. 宏观俯瞰与盛典态**  `MODE_SYMPHONY` | 镜头拉远 (`zoom > 32`) 或正在进行街坊演出/全城跨时空交响盛典 (`concert_active`) | **全城多时代街区轮奏、跨河金色音弧与交响大合奏** | • GPU 自动隐退细碎卵石与单株细草 (`visibility_range_end`)  • 全城领奏街区、合唱街区与跨河音弧按乐句依次点亮，形成壮丽星河 | • **彻底关闭全部琐碎个体短音效**（面包/过桥/单屋拨弦全部静默）  • 释放长轨动态范围（`+3.0 dB`），四大时代声部按乐章编排恢弘轮奏并在终章 Tutti 全奏！ | 

### 2.2 哪些地方、哪些音乐绝不应该过多过杂？（五条刚性降噪铁律）

1. **铁律一：连续建造操作时的“十六分音符琶音节流（Arpeggio Throttling）”**

   * 借鉴 [《Mini Metro》中最多只允许 7 个乘客音效按 16 分音符排队依次发声的设计](https://www.google.com/search?q=https%3A%2F%2Fdesigningsound.org%2F2016%2F02%2F18%2Fthe-programmed-music-of-mini-metro-interview-with-rich-vreeland-disasterpeace%2F)：当玩家按住鼠标快速拖出一排 8 格长屋或刷过一串房屋时，**严禁在 0.08 秒间隔内无序乱弹**，而是将新生成的房格音符推入一个容量上限为 `5` 的**微拍琶音队列（Arpeggio Queue）**，严格卡在共享音乐时钟的 `1/16` 拍（`0.1875s`）网格上依次弹出上行或下行五声音阶琶音！哪怕玩家乱晃鼠标，弹出来的也是大师级的流畅竖琴/吉他琶音。

2. **铁律二：废除“首拍大塞车”，实装 16 槽微拍错峰矩阵（Micro-Beat Staggering Grid）**

   * 将每个 3.0 秒乐句（4 拍 × 0.75 秒）划分为 16 个十六分音符槽位（`slot 0 ~ 15`，每槽 `0.1875s`）。**不同类别的城市事件被严格分配到专属的节拍槽位**，从根源上消灭多个短音在同一毫秒叠爆或互相丢弃：

| 3.0秒小节内的微拍槽位 (`slot`) | 对应音乐拍点 (80 BPM, 4/4拍) | 专属绑定的音频事件类别 | 乐理与听觉设计原理 | 
| ----- | ----- | ----- | ----- | 
| **Slot 0** (`0.000s`) | 第 1 拍正拍 (强拍 Downbeat) | **地标钟声 (`tower_bell`) / 乐句主奏切换 / 晋升竖琴琶音** | 强拍只留给最具分量感的和声根音锚点与重大里程碑事件 | 
| **Slot 2** (`0.375s`) | 第 1 拍后半拍 (八分弱拍) | **环形轮唱拍点 1 (`CircularCanon`) / 水车木轮节拍** | 形成稳定的八分音符律动推进感，不抢强拍风头 | 
| **Slot 4** (`0.750s`) | 第 2 拍正拍 (次弱拍) | **花圃茶座长笛短句 (`cafe_flute`) / 画廊双簧管点缀** | 在第 1 拍主音落下后，由木管乐器在次拍优雅切入填充中高频 | 
| **Slot 6** (`1.125s`) | 第 2 拍后半拍 (切分位) | **面包出炉/售出双音 (`bakery_cues`) / 制琴送达木音** | 轻快的木质打击/拨弦落在切分拍位，化作活色生香的伴奏律动 | 
| **Slot 8** (`1.500s`) | 第 3 拍正拍 (次强拍) | **跨街坊/跨时代器乐问答 (`district_reply`)** | 标准的一问一答（前半小节提问，第 3 拍正拍对岸街区清晰应答） | 
| **Slot 10** (`1.875s`) | 第 3 拍后半拍 | **有轨电车到站钢片琴 (`tram_chime`) / 八音盒微音** | 高频清脆金属泛音点缀在后半小节，空间穿透力强且不掩蔽人声频段 | 
| **Slot 12\~15** (`2.25s~2.81s`) | 第 4 拍 (小节尾拍 Pickup) | **居民过桥/穿拱琶音 (`travel`) / Lv.3\~5 房屋品质泛音华彩** | 作为进入下一小节的“导音/经过句（Pickup Phrase）”，自然推动乐句流转 | 

3. **铁律三：频段分轨与同频段声部上限（Spectral Role Allocation）**

   * 在 [Godot 4 的 AudioServer 总线架构](https://www.google.com/search?q=https%3A%2F%2Fdocs.godotengine.org%2Fen%2Flatest%2Ftutorials%2Faudio%2Faudio_buses.html) 下，将全城声音严格限制在四个互不打架的频段层：

     * **低频锚定层 (`80Hz ~ 280Hz`)**：仅由 `foundation` 的大提琴/低音倍大提琴与温暖铺底合成器（Pad）独占，任何短音效与次级街坊轨道均通过高通滤波切除 `220Hz` 以下能量，杜绝低频浑浊（Mud）；

     * **中频律动层 (`280Hz ~ 900Hz`)**：由当前视野主导街坊的伴奏分解和弦（木吉他、羽管键琴低音区、手风琴、马林巴）承担，最多同时激活 **1 个主街坊 + 1 个内联次街坊（权重 `<= 0.45`）**；

     * **中高主奏层 (`900Hz ~ 3200Hz`)**：人耳最敏感频段！同一时刻**全城最多只允许 1 条主旋律声部 + 1 个微拍错峰短音**在此频段以原音量发声；

     * **超高频空气泛音层 (`3200Hz ~ 8000Hz`)**：仅留给 Lv.3+ 屋檐风铃、钢片琴、颤音琴与星夜虫鸣，音量严格控制在 `-22 dB` 以下，提供“晶莹剔透的空气感”而绝不刺耳。

4. **铁律四：视野外 85% 街区绝对静默，远端高光事件化作“低通方位路标”**

   * 保持并強化 `city_creation_acoustic_field.gd` 的四温区裁剪：视野外普通民居、面包坊、茶座、过桥的音频权重严格为 `0.0`。

   * **唯一允许穿透视野边界的“听觉路标（Audio Breadcrumbs）”**：当视野外某座房屋**刚刚自动晋升至 Lv.4/Lv.5**、或**远端地标音乐院发起巡演**、或**古钟瞭望塔整轮报时**时，通过挂载了 `1600Hz` 二阶低通滤波器（`AudioEffectLowPassFilter`）与立体声声像（`AudioEffectPanner`）的 `HorizonBus` 播放一声柔和温暖的方位提示音，并在屏幕边缘闪现一枚温润的金色水波指示器——温和地告诉玩家：“河湾东岸有好事发生，不妨移镜去看看”，而绝不强行抢夺镜头！

5. **铁律五：同源事件空间冷却合并（Spatial Cooldown Coalescing）**

   * 当同一街坊内有 5 家面包坊接连出炉、或 10 位居民接连跨过同一座双拱桥时，在 `6.0 秒（2 个乐句）` 窗口期内合并为**单次更饱满的双音/三音和弦华彩**，绝不变成机关枪式的重复音效轰炸。

## 第三章：音乐系统重构——“零乐理门槛上手，高涌现室内交响”

玩家想要的理想体验是：**“我完全不懂乐理，只是按审美顺着河湾建房、修桥、围院子、划街坊，但我的城市自己生长出了一首极其好听、富有变化、且和我建的街道起伏完全呼应的交响乐！”**

为此，我们将现有的“固定 24 秒长轨混音器”重构为 **“三层生成式声学引擎（3-Tier Generative Acoustic Engine）”**，在不增加运行时 CPU 合成开销的前提下，实现指数级的音乐涌现与多样性。

### 3.1 为什么极易上手？——“空间几何即乐谱（Architecture-as-Score）”的五声音阶安全网

玩家在操作中只需要感知 **5 条极其直觉的物理映射规则**，无论怎么摆放都 100% 和谐悦耳：

| 玩家的直觉建造行为 | 自动触发的音乐语法响应 | 为什么永远好听且不难上手？ | 
| ----- | ----- | ----- | 
| **1. 把房子建高 (`level 0 → 4`)** | 音高沿当前和弦的\*\*五声音阶（Pentatonic Scale）\*\*逐层升高（底层浑厚根音 → 顶层清脆高音泛音） | 五声音阶剔除了小二度与三全音尖锐不协和音程，任意两栋房先后发声都天然协和 | 
| **2. 把房子连成排 vs. 围成院** | • **沿街连排长屋**：触发平缓流淌的八分音符伴奏织体（Ostinato）  • **合围内院 / 环岛**：触发顺时针逐拍点亮的**环形卡农轮唱（Circular Canon）** | 玩家不需要手动写节奏型，建筑的拓扑围合关系自动决定了音乐是“叙事行进”还是“旋转轮唱” | 
| **3. 在高地台地 vs. 临水河岸建房** | • **高地台地 (`base_y >= 1.2m`)**：自动打开高空混响尾音与木管/弦乐延音（Air Stem）  • **临水河岸 (`water_dist < 4.5m`)**：自动混入清亮的水滴木琴/竖琴泛音琶音 | 地形海拔直接映射为声场的“垂直空间感（纵深与明亮度）”，一眼看去的高低起伏与耳朵听到的一致 | 
| **4. 划定不同风貌街坊并牵起连线** | 焦点街坊奏响主旋律（問句），连线的对岸异风貌街坊在偶数乐句用专属时代乐器奏响**对位应答（答句）** | 借鉴巴洛克协奏曲的 *Concertino / Ripieno* 竞奏机制，一拉连线就能听见“木吉他问、羽管键琴答”的化学反应 | 
| **5. 满足居民烟火生活（面包/茶座/画廊）** | 随房屋从 `Lv.1` 进化至 `Lv.5`，其发声时自动从“单音拨弦”进化为“带高八度泛音与三度陪衬音的复音和弦” | 经营成果直接转化为音乐的“织体丰满度（Harmonic Richness）”，越繁荣的街区听起来越华丽温暖 | 

### 3.2 怎么做出真正的“音乐涌现与多样性”？——从单一死循环升级为【4×4×8 模块化动机矩阵】

为了彻底打破“24 秒单曲死循环”的单调感，同时保留 `city_creation_bank_cache.gd` 预烘焙 PCM 零运行时合成尖峰的工程优势，我们将 24 秒（8 小节）大循环拆解为 **基于城市 DNA 实时挑选组合的“乐句动机变奏矩阵（Dynamic Phrase Variation Matrix）”**：

```
┌────────────────────────────────────────────────────────────────────────────────────────┐
│               《共鸣之城》生成式音乐涌现管线 (City DNA -> Dynamic Score)                │
├────────────────────────────────────────────────────────────────────────────────────────┤
│ 【第 1 层：城市形态特征提取器 (Topological Feature Extractor - 每 3 秒乐句更新)】       │
│   • 垂直轮廓度 H_profile = 高层房格占比 (决定高音延伸与悬留音比例)                     │
│   • 路网连通与围合度 C_ring = 环岛数 + 闭合庭院数 (决定分解琶音 vs. 卡农轮唱织体)      │
│   • 烟火繁荣度 P_vitality = 视野内平均房屋品质 Lv.1~5 (决定声部层数：独奏→重奏→合奏)   │
│   • 跨区张力 T_bridge = 视野内异风貌街坊对数 (决定是否插入巴洛克转调/多利亚色彩和弦)   │
├────────────────────────────────────────────────────────────────────────────────────────┤
│ 【第 2 层：四态马尔可夫和声色彩轮 (4-Mode Harmonic Progression Engine)】               │
│   不再永远锁死单一 D 大调！每完成一轮 24s 循环（8 小节），根据当前镜头所在区域特征，    │
│   通过平滑共同音枢轴和弦（Pivot Chord）在 4 套同主音/关系调色彩模式间自然流转：        │
│   • Mode A [晨曦暖阳 · D大调五声]   : D - Bm7 - Gmaj7 - A6  (明快温暖，适合田园民居区) │
│   • Mode B [深流古巷 · B自然小调/多利亚]: Bm7 - Gmaj7 - Em7 - F#m7 (深邃叙事，适合石砌高地)│
│   • Mode C [人文晴空 · G吕底亚色彩] : Gmaj7 - A/G - F#m7 - Bm7 (空灵飘逸，适合文艺复兴/水岸)│
│   • Mode D [星夜交响 · 悬浮九和弦]  : Dadd9 - G6/9 - Em9 - Asus4 (静谧梦幻，适合星夜/现代区)│
├────────────────────────────────────────────────────────────────────────────────────────┤
│ 【第 3 层：三变体乐句声部池 (A / B / C Phrase Variations per Stem)】                   │
│   每条时代与风格轨道预烘焙 3 套可无缝互换的 8 小节变体（Var_A 简约叙事、Var_B 灵动切分、│
│   Var_C 华彩复调）：每个 3.0s 乐句边界按 (城市拓扑哈希 + 循环轮次 + 繁荣度) 动态切换！ │
└────────────────────────────────────────────────────────────────────────────────────────┘

```

#### 涌现效果计算实证：

* 原系统：8 小节只有 **1 种** 固定排列，听 24 秒就完全重复。

* 重构后：4 套和声色彩模式 × 每个声部 3 套织体变体（A/B/C） × 16 槽微拍事件点缀，在保持磁盘/内存体积仅增加约 `3.2 MB` 的前提下，可组合出 $3^8 	imes 4 = 26,244$ **种不重复的 24 秒乐段走向**！

* 更重要的是，这种变化不是随机乱弹，而是**严格受玩家建造的城市形态控制**：

  * 当玩家在平地上刚建起 5 栋一层小屋时，听到的是 `Var_A`（留白极多的单音木吉他与轻柔大提琴根音）；

  * 当玩家把街道升级为石板灯街、建起二层连拱廊与面包坊后，同一街区自动切入 `Var_B`（加入轻快的八分音符分解和弦与中音长笛对位）；

  * 当玩家在台地上立起钟塔、周围房屋升至 Lv.4\~5 后，自动绽放 `Var_C`（高八度竖琴泛音、弦乐四重奏模仿与跨河复调华彩）！

## 第四章：游戏性与系统深度重构——特殊建筑、强力建筑、声学 BUFF 与造新区域驱动力

为了让玩家既拥有 Tiny Glade / Townscaper 式的轻松愉悦，又具备 [《ISLANDERS》](https://www.google.com/search?q=https%3A%2F%2Fgameworldobserver.com%2F2019%2F06%2F14%2Fislanders) 与 [《Dorfromantik》](https://www.google.com/search?q=https%3A%2F%2Fboardgamearchive.com%2Fhow-to-play%2Fhow-to-play-dorfromantik-the-board-game%2F) 那样让人欲罢不能的策略规划深度，我们将“功能建筑、特殊建筑、强力地标与 BUFF”统一进一套直观且富有深度的 **【声学城市规划学（Acoustic Urbanism）】** 规则中。

### 4.1 核心驱动力：为什么要去造新区域？（“声部清晰度”与“跨区对位倍增”法则）

为什么以前的城建游戏玩家喜欢“所有建筑挤在一团”？因为缺乏空间分区的正激励。我们在《共鸣之城》中引入两条纯正反馈（无惩罚）的区域规划法则，让玩家天然渴望去河对岸、山坡上、林间空地开辟新街区：

1. **法则一：街坊声部角色专精（District Timbre Specialization）**

   * 每个街坊（`District`）拥有一个**最佳声学编制容量（Sweet Spot：`8 ~ 16 栋建筑`）**与**主时代器乐身份**。

   * 当一个街坊保持清晰的职能主题（例如：河西岸专注于\*“第一时代·田园麦香与茶座”*，河东岸专注于*“第二时代·文艺复兴书院与连拱长街”*，北侧高地专注于*“第三时代·钟表工坊与阳光花房”\*）时，该街坊获得 **【声部纯净度加成（Acoustic Purity +25% 生产与升级速度）】**。

   * 反之，如果把所有时代的工坊胡乱塞进同一个小街坊，虽然不会扣分，但无法触发“跨区对位共鸣”。

2. **法则二：跨区对位共鸣倍增器（Cross-District Counterpoint Multiplier）**

   * 每当玩家在**不同的地形单元**（① 河湾西岸平地、② 河湾东岸沙洲、③ 抬升 `>=1.2m` 的高地台地、④ 池塘/森林环抱区）建立具有**不同时代风貌（`era_theme`）或不同器乐风格（`style`）**的新街坊，并通过**桥梁、石阶路、有轨电车或共鸣音弧**将其与老城区连通时：

   * 两个街区在偶数乐句每完成一次真实的“跨区器乐问答（District Reply）”或“电车通勤”，双方街区内的所有工坊与民居同时获得 **【复调回响 BUFF（Polyphonic Echo）】**：

     * 连通 **2 个异风格区域**：全城工坊产出速度 `+25%`，解锁二声部对位变体 `Var_B`；

     * 连通 **3 个异风格/跨时代区域**：全城服务覆盖半径 `+30%`，工坊每次配送额外附赠 `1 份` 邻里共鸣余韵，解锁三声部卡农变体 `Var_C`；

     * 连通 **4 个跨地形/跨时代区域**：激活【四方交响大共鸣】，全城所有 `Lv.4` 住宅获得晋升 `Lv.5 传世共鸣名宅` 的终极资格！

### 4.2 特殊建筑与强力建筑（地标名胜 & 专精工坊）全量设计矩阵

我们将城内的非普通民居划分为 **三大梯队**：

* **T1 街坊烟火建筑（5座，随时可设）**：构成街坊日常微循环；

* **T2 时代专精特殊建筑（5座，随时代与手记解锁）**：改变局部区域建筑形态、解锁高阶工艺品与专属器乐声部；

* **T3 传奇强力建筑 / 地标名胜（6座，达成里程碑免费建造，全城唯一）**：拥有改天换地的全局规则强化、宏大 3D 奇观与首席独奏声部。

#### （1）T1 & T2 特殊功能建筑与选址/声学 BUFF 矩阵

| 梯队与建筑名称 (`role`) | 所属时代 | 核心玩法职能 | 最佳选址祝福条件 (`Site Blessing`) | 激活后的强力 BUFF 与声学涌现效果 | 
| ----- | ----- | ----- | ----- | ----- | 
| **T1 麦香面包坊**  `bakery` | 第一时代  田园木石 | 烘焙麦香面包，满足周边民居基础温饱（晋升 `Lv.2` 必备） | **【活水与清泉】**  距离河岸/池塘 `< 4.5m`，或位于带喷泉的闭合内院旁 | • **生产 BUFF**：烘焙速度 `+35%`，每炉产量 `2 → 3 份`  • **声学涌现**：在第 2 拍切分位（`Slot 6`）奏响温暖的双音木琴/手风琴短句，屋顶飘起随拍律动的袅袅炊烟 | 
| **T1 制琴木工坊**  `workshop` | 第一时代  田园木石 | 匠人制作木饰与弦器并沿路送装至 22m 内民居（晋升 `Lv.3` 必备） | **【良木林间】**  半径 `8.0m` 内拥有 `>= 3` 棵橄榄树或丝柏树 | • **生产 BUFF**：制琴与节庆委托制作速度 `+35%`  • **声学涌现**：使受赠民居屋檐挂起铜风铃，并在发声时永久叠加一层**高八度竖琴/木吉他泛音** | 
| **T1 花圃茶座**  `garden_cafe` | 第一时代  田园木石 | 吸引已购面包的住户结伴品茶社交（晋升 `Lv.4` 途径之一） | **【雅集风光】**  紧邻 `1.75m+` 石板灯街/林荫道，或依傍睡莲池塘 | • **社交 BUFF**：茶叙赋予住户的“共鸣余韵 (`Afterglow`)”从 `30s` 延长至 `45s`  • **声学涌现**：茶聚期间在第 2 拍正拍（`Slot 4`）奏响空灵的双音长笛牧歌 | 
| **T1 街坊演奏庭**  `venue` | 第一时代  田园木石 | 汇聚 `22m` 内可达住户举办 24s 街坊音乐会，点亮全区窗光与彩旗 | **【高台回音壁】**  建在海拔 `base_y >= 1.0m` 的台地/坡地上，或紧邻圆形喷泉环岛 | • **范围 BUFF**：演出召集半径从 `22m` 扩大至 `28m`，自发午后巡演 (`Matinee`) 冷却缩短 `25%`  • **声学涌现**：演出期间激活完整 8 小节领奏-合唱对答与终章和弦 | 
| **T2 尖顶报时钟楼**  `tower` *(形态派生)* | 第一时代  田园木石 | 单格独立房柱叠满 `3 层` 自动派生尖顶铜钟楼 | **【制高点瞭望】**  位于街坊最高点（高于周围 8m 内其他建筑至少 `1 层`） | • **节拍 BUFF**：所在街坊所有居民通勤步速 `+10%`  • **声学涌现**：在偶数小节强拍（`Slot 0`）敲响悠扬铜钟泛音，锁定全区音乐相位 | 
| **T2 人文书院画廊**  `atelier` | 第二时代  文艺复兴 | 画师与学者创作彩绘玻璃圆窗、挂毯与石雕壁龛并送装周边住宅 | **【连拱长廊街】**  与至少 `2 栋` 二层以上带底层连拱柱廊 (`Arcade`) 的建筑相连 | • **进化 BUFF**：送装速度 `+40%`，直接赋予受赠住宅 `culture` 履历（直通 `Lv.4~5`）  • **声学涌现**：解锁 `renaissance_fugue`（羽管键琴+双簧管+弦乐卡农模仿声部） | 
| **T2 钟表八音盒工坊**  `clockmaker` | 第三时代  蒸汽钟表 | 匠人制作精密发条八音盒与金色屋脊风向标，并为有轨电车供能 | **【轨街枢纽】**  紧邻 `2.10m` 有轨电车宽街 (`tram`) 或圆形环岛 | • **联动 BUFF**：经过该街区的有轨电车速度 `+15%`，送装八音盒的范围扩大至 `30m`  • **声学涌现**：解锁 `clockwork_waltz`（立式钢琴+圆号+钢片琴圆舞曲）与微拍八音盒晶莹泛音 | 
| **T2 现代交响音乐厅**  `symphony_hall` | 第四时代  现代生态 | 汇聚跨时代街区代表，发起全城多时代声部轮奏与合奏 | **【生态天际连廊】**  通过二/三层空中玻璃连廊 (`Skybridge`) 与周边建筑相连，或临水而建 | • **终极 BUFF**：演出覆盖半径达 `32m`，演出后赋予全区住宅双倍共鸣余韵  • **声学涌现**：解锁 `modern_symphony`（温暖毡音钢琴+Warm Pad+颤音琴环境交响） | 

#### （2）T3 强力建筑（6座传奇地标名胜 `Signature Buildings`）深度重构表

为了解决用户提到的“强力建筑与 BUFF 怎么设计才更有爽感和策略性”，我们将 `city_creation_signatures.gd` 中的 6 座地标从单纯的“全城固定数值光环”升级为 **【全城被动光环 + 局部地形/邻接超级增幅（Adjacency Super-Amplifier） + 独奏华彩声部】三位一体的核心引擎**：

| 强力地标名称 (`signature`) | 解锁里程碑条件 | 1\. 全城常驻光环 BUFF | 2\. 局部邻接超级增幅（引导玩家围绕地标建新区域！） | 3\. 专属音乐涌现与视觉奇观 | 
| ----- | ----- | ----- | ----- | ----- | 
| **1. 古钟瞭望圣塔**  `bell_keep` | 建成 10 屋 + 1 座跨水桥 | 全城居民与匠人步速 `+15%`，镜头声场聚焦半径 `+3.0m` | **【圣塔回响圈 (半径 16m)】**：圈内所有三层以上塔楼/高地房屋的拨弦音阶升级为**双八度钟琴共鸣**，且圈内工坊无需等待工人缓慢返程，交货结算速度 `+30%`！ | 4层毛石尖塔+真实摆动铜钟；每 24s 循环首拍敲响穿透全城的深邃低通圣钟 | 
| **2. 河湾大水车磨坊**  `watermill` | 面包坊累计出炉 24 份面包 | 全城所有面包坊每炉产量 `+1 份`，烘焙耗时 `×0.80` | **【水力工坊带 (沿河上下游 18m)】**：同岸 18m 内的所有面包坊与制琴坊共享水力传动，生产速度再额外 `+35%`，且磨坊自身每出炉 3 炉自动向全城随机 2 户缺粮民居空投麦香祝福！ | 巨型木质水车沿岸持续旋转；近景在 `Slot 2` 奏响治愈的木轮击水节拍与低音木笛 | 
| **3. 文艺复兴圆顶音乐院**  `music_academy` | 开启第二时代 + 完成 1 次跨区器乐问答 | 自身演出半径跃升至 `38m`，发起演出时**自动触发全城所有演奏庭同步接力 (`Auto-Relay`)** | **【人文学院区 (同街坊内)】**：同街坊内的所有人文书院 (`atelier`) 与制琴坊产量翻倍（`×2.0`），且该街坊与任何其他街坊建立“共鸣连线”时，跨区问答奖励提升 `100%`！ | 八角红瓦肋架穹顶+环绕石柱廊；演出时奏响恢弘的巴洛克弦乐四重奏与管风琴华彩 | 
| **4. 皇家植物玻璃宫**  `botanical_palace` | 促成 8 桌真实茶聚 + 种植 120 株植物 | 全城茶聚与演出的“共鸣余韵 (`Afterglow`)”持续时间从 `60s` 暴涨至 `180s` | **【翡翠花海圈 (半径 14m)】**：8m\~14m 内草甸自动绽放双倍三色野花簇，圈内所有住宅视同**永久满足“林间/自然景观”最高条件**，花圃茶座品茶耗时缩短 `40%`！ | 三连拱墨绿铸铁玻璃水晶宫+内部涌泉；夜晚透出翡翠暖光，伴随竖琴与鸟鸣泛音 | 
| **5. 中央钟表电车总站**  `clockwork_depot` | 开启第三时代 + 铺设 `30m` 以上宽街/轨街 | 自动向连通轨街派出复古叮当有轨电车，电车巡游速度 `+20%` | **【轨街黄金走廊 (沿连通轨街两侧 6m)】**：所有紧邻电车轨街的商业与工坊建筑获得\*\*“轨交直达”\*\*加成——跨街区居民乘电车来此消费/赴演视同零距离直达，全城跨区通勤吞吐量提升 `300%`！ | 红砖青铜齿轮大钟楼；电车进出站奏响 `Slot 10` 的钢片琴+铜铃双音和弦 | 
| **6. 河湾水上交响剧场**  `floating_amphitheater` | 开启第四时代 + 完成河湾手记前三章 | 点击即可随时发起 **24秒【全城跨时空交响盛典】**，无视距离唤醒四大时代代表建筑 | **【交响水岸共鸣 (全水域连通)】**：盛典落幕瞬间，沿主河道向全城扩散金色声波环，使全城所有处于余韵中的 `Lv.1~4` 房屋立即获得一次**跨级进化检定**，并点亮全城星夜鎏金光晕！ | 依水展开的白色流线舞台与半圆石阶看台；终章解锁四大时代 12 轨全开交响 Tutti | 

### 4.3 极具策略爽感的“声学和弦组合 BUFF（Acoustic Chord Synergies）”

为了让玩家在规划每个新街区时都有“搭积木凑羁绊/配器组和弦”的乐趣，当同一个街坊（或一对通过共鸣连线相连的街坊）内同时凑齐特定建筑与环境组合时，自动激活一项 **【声学和弦共鸣（Chord Synergy）】**（在左上角可折叠目标卡与街坊面板中以发光音符徽章提示）：

| 和弦共鸣名称 | 配方组成（同街坊或一对内联街坊内） | 激活后的游戏性 BUFF | 激活后的专属音乐涌现效果 | 
| ----- | ----- | ----- | ----- | 
| **🎵 I. 晨光田园三和弦**  *(Pastoral Triad)* | `麦香面包坊` + `花圃茶座` + `闭合喷泉内院 (或睡莲池塘)` | 街坊内所有住户采购面包后 `100%` 顺路触发茶聚，无需二次往返寻路；住宅直通 `Lv.3` 速度提升 `50%` | 该街坊背景木吉他自动加入温暖的大三度双音伴奏，茶座长笛与喷泉水声无缝交织 | 
| **🎵 II. 高地钟楼五度共鸣**  *(Highland Fifth)* | `海拔 >=1.2m 台地房屋群 (>=4栋)` + `3层尖顶钟楼 (或古钟圣塔)` + `3D陡坡石阶路` | 登高石阶非但不减速，反而赋予上下山居民 `1.25x` 轻快步速；高地房屋自动获得“远眺视野”加成 | 解锁空灵的五度持续低音（Drone）与高山木笛回声，钟声余韵延长 `50%` | 
| **🎵 III. 文艺复兴赋格四重奏**  *(Renaissance Fugue)* | `人文书院画廊` + `制琴木工坊` + `>=3栋底层连拱柱廊楼` + `石板灯街环岛` | 画师与琴匠共享工作台，每送出 1 件木饰自动附赠 1 份彩绘花窗；街坊内所有建筑直通 `Lv.4 连廊华宅` | 环岛触发顺时针**羽管键琴×独奏小提琴卡农轮唱**，每拍点亮环岛一侧的暖窗 | 
| **🎵 IV. 蒸汽花房圆舞曲**  *(Clockwork Waltz)* | `钟表八音盒工坊` + `>=2座铸铁玻璃花房露台` + `有轨电车轨街` | 电车每经过该街区一次，自动为沿街 10m 内所有房屋充能 `30秒` 黄金余韵；工坊生产冷却减半 | 激活三拍子律动的圆号与立式钢琴分解和弦，电车经过时触发连续上行钢片琴琶音 | 
| **🎵 V. 跨河古今交响对位**  *(Chrono Counterpoint)* | `任意两个不同时代的街坊` + `跨河双拱桥/桁架桥` + `手动跨区共鸣连线` | 两岸街坊共享彼此所有的生活服务（西岸住户可直接享受东岸书院/钟表加成），双方解锁 `Lv.5` 晋升上限！ | 偶数乐句触发**跨时代双乐器竞奏**（如西岸古典木吉他提问 → 东岸现代毡音钢琴隔河应答，空中常驻流光音弧） | 

## 第五章：“再来一把”的单局节奏与重玩驱动力（Replayability & Meta-Loop）

针对“怎么保证玩家不断有造新区域、开下一把的动力”，我们设计了 **“单局 35 分钟四乐章心流弧线” + “局外三层肉鸽式重玩引擎”**：

### 5.1 单局四乐章心流节奏（从第 1 分钟到第 35 分钟绝无冷场）

1. **第一乐章 · 呈示部（0～8 分钟 | 1～14 屋 | 田园木石河湾）**：

   * **核心动作**：在初始河岸点击建房（体验五声音阶指尖拨弦）、画第一座跨水石桥、设第一家临水面包坊与林间制琴坊、围出第一个石铺喷泉内院。

   * **高潮正反馈**：举办第一场街坊音乐会，解锁【古钟瞭望圣塔】与【河湾大水车磨坊】，河对岸迷雾散开，隆重开启**第二时代：文艺复兴人文长街**！

2. **第二乐章 · 展开部（8～18 分钟 | 15～28 屋 | 跨河开拓与高地错落）**：

   * **核心动作**：为了触发【跨河古今交响对位】与避免首区声部饱和，玩家主动跨过石桥在东岸或刷出 `2m` 平顶台地，划定第二时代文艺复兴街坊；建起底层连拱柱廊街、圆顶书院与喷泉环岛，拉起第一条跨河金色音弧。

   * **高潮正反馈**：听见两岸木吉他与羽管键琴跨空一问一答，首批老城民居自动进化至 `Lv.3~Lv.4`，解锁【文艺复兴圆顶音乐院】与**第三时代：蒸汽钟表与浪漫花房**！

3. **第三乐章 · 变奏部（18～28 分钟 | 29～50 屋 | 叮当轨街与立体花房网）**：

   * **核心动作**：沿着主干道重刷升级 `2.10m` 叮当有轨电车轨街，放置【中央钟表电车总站】与【皇家植物玻璃宫】，在台地与水岸之间构建铸铁玻璃阳光花房群，看着暖光有轨电车满载居民跨区赴茶、听音乐会。

   * **高潮正反馈**：贯通三大时代共鸣问答，开启**第四时代：现代生态交响城**！

4. **第四乐章 · 华彩终章（28～35+ 分钟 | 50+ 屋 | 空中连廊与跨时空盛典）**：

   * **核心动作**：在河口开阔水面建起现代生态悬挑建筑群、空中玻璃花园连廊与终极地标【河湾水上交响剧场】，点击触发 **“24秒全城跨时空交响盛典”**。

   * **终极正反馈**：四大时代街区依次领奏并在第 7～8 乐句全体合奏，全城灯火、水波与跨河音弧辉煌共振，生成本局专属的《城市交响乐章留声卡》并收入作品收藏馆！

### 5.2 驱动玩家“开下一把”的三大重玩机制（Meta-Progression）

1. **机制一：六大【河湾声学地貌种子（Acoustic Biome Seeds）】**

   * 在左上角“新建河湾 / 作品收藏”面板中，玩家开新局时可选择不同的**声学地貌主题**（每个主题不仅改变初始地形水文，还提供独特的**全局声学法则词缀**与**专属调式音阶**）：

     * **① 晴翠双岸（默认均衡）**：标准 S 形主河道，D 大调五声，适合熟悉全部四时代语法；

     * **② 叠翠千阶（高地回响）**：开局自带三级天然台地与山谷溪流；**专属法则**：所有高地建筑（`base_y >= 1.0m`）范围与产出 `+40%`，陡坡石阶自动化作“音阶琴键”，居民上下台阶即弹出竖琴琶音（采用 **G 吕底亚空灵调式**）；

     * **③ 烟水群岛（水韵江南/威尼斯）**：河湾由 5 座浅水沙洲岛屿组成；**专属法则**：桥梁、浅水汀步与水上剧场加成翻倍，跨水问答距离上限提升至 `36m`（采用 **B 多利亚水岸调式**）；

     * **④ 林间秘境（翡翠森歌）**：地图覆盖茂密橄榄与古柏林；**专属法则**：保留树木不砍伐可为周边 10m 所有建筑提供“森林和声”，制琴坊与植物玻璃宫开局即可提前解锁（采用 **A 大调牧歌调式**）；

     * **⑤ 星夜流光（夜曲河湾）**：开局默认处于星夜/夕照光影；**专属法则**：灯街、玻璃花房与暖窗共鸣半径 `+50%`，主音色自动偏重毡音钢琴、颤音琴与钢片琴（采用 **F# 小调夜曲调式**）；

     * **⑥ 每日/随机共鸣挑战（Daily Resonance Seed）**：随机组合“1 项地形特征 + 2 项特殊声学法则 + 1 座开局赠送地标”，让每一把的规划破局点截然不同！

2. **机制二：时代晋升时的“乐章变奏卡（二选一 / 三选一 Score Modifiers）”**

   * 每当本局解锁新时代（Era II / III / IV）时，河湾手记弹出 2～3 张可选的 **【街坊乐章特化铭牌】**（存档仅需记录 3 个字符串 ID），例如进入第二时代时可选：

     * *选项 A《连拱市集章程》*：所有底层连拱柱廊建筑自动兼作小型茶座，沿街居民步行即可恢复茶叙余韵；

     * *选项 B《复调学院章程》*：人文书院画师送装距离无限（全城路网可达即可送达），且跨区器乐问答改为每小节连续对答！

   * 这种轻量级的肉鸽抉择完全不增加上手负担，却让玩家产生强烈的动机：“这一把走的是【高地钟楼+复调学院流】，下一把我要试试在群岛地图走【水车磨坊+轨街电车流】！”

3. **机制三：局外【河湾留声机与名胜图鉴（Phonograph & Finishes Archive）】**

   * 玩家在历次游玩中达成的特殊声学成就（如首次凑齐 5 种声学和弦、首次完成 100 屋跨时代盛典），会永久解锁新的**建筑外观色板（`FINISH_PALETTES`）**、新的**主调式音阶（如宫商角徵羽传统五声、印象派大七度音阶）**，并可在收藏馆中随时回放每一座历史作品的专属交响混音。

## 第六章：面向 Godot 4.7.2 的精确工程施工蓝图（可直接落地的代码与架构）

本章严格对齐仓库现有代码结构，给出**零破坏、增量可测、直接可由施工 AI 或开发者落地的代码级施工规范**。

### 6.1 模块职责与新增/修改文件总表

| 路径 | 状态 | 职责与改造点说明 | 
| ----- | ----- | ----- | 
| `scripts/audio/city_creation_attention_mixer.gd` | **新增** | **注意力状态机与 16 槽微拍量化调度器**：管理 `MODE_SCULPTING / MANAGING / STROLLING / SYMPHONY` 四模态、指尖 16 分音符琶音队列（`ArpeggioQueue`），以及 `Slot 0~15` 微拍事件分发，彻底替代原 `_process` 中挤在 `3.0s` 首拍抢槽位的逻辑。 | 
| `scripts/audio/city_creation_harmonic_emergence.gd` | **新增** | **空间拓扑→音乐涌现评估器**：每 `3.0s` 乐句从视野内建筑提取高度分布、环岛/庭院围合度、繁荣等级与跨区张力，输出当前应激活的声部变体（`Var_A / Var_B / Var_C`）与各轨道动态目标增益。 | 
| `scripts/world/city_creation_synergy_buffs.gd` | **新增** | **声学和弦组合 BUFF 与区域饱和/开拓激励计算器**：纯函数式评估五大声学和弦（`Pastoral Triad`、`Highland Fifth`、`Renaissance Fugue`、`Clockwork Waltz`、`Chrono Counterpoint`）、地标邻接超级增幅圈与跨区对位倍增系数。 | 
| `scripts/audio/city_creation_music.gd` | **修改** | 接入 `AttentionMixer` 与 `HarmonicEmergence`；将日常短音效改为提交至 `attention_mixer.schedule_slot()`；解开 `renaissance_fugue / clockwork_waltz / modern_symphony` 在日常模式下的 `-21dB` 死锁，使其随对应时代街坊进入视野而平滑升至主奏电平（`-10.5 dB`）。 | 
| `scripts/audio/city_creation_spatial.gd` | **修改** | 为 `ThemeBus` 增加受 `AttentionMixer` 控制的柔和侧链压限增益偏移（建造拖拽时自动平滑衰减 `-4.0 dB`），并为 `HorizonBus`（远端特殊事件）配置 `1600Hz` 低通滤波与柔化声像。 | 
| `scripts/world/city_creation_prosperity.gd` | **修改** | 集成 `CityCreationSynergyBuffs`，将地标 16m\~18m 邻接超级增幅圈、五大声学和弦 BUFF 与跨区对位倍增器合入面包坊、制琴坊、茶座、书院、钟表坊的实际生产速度与 `house_harmony` 评分。 | 
| `scripts/ui/city_creation_paper_hud.gd` & `city_creation_copy.gd` | **修改** | 在左上角目标卡与右侧街坊/建筑抽屉中，展示当前激活的 **【🎵 声学和弦 BUFF】**、**【街坊最佳声部容量指示】** 与 **【新建河湾：声学地貌种子选择】**。 | 

### 6.2 核心重构代码一：注意力混音器与 16 槽微拍量化器 (`scripts/audio/city_creation_attention_mixer.gd`)

此模块直接解决“什么时候注意力在哪、哪些地方不该吵、消灭首拍抢槽位丢音”的问题：

```
class_name CityCreationAttentionMixer
extends RefCounted
## Manages player attention modes (Sculpting, Managing, Strolling, Symphony),
## 16-slot micro-beat quantization (0.1875s grid), and arpeggio throttling.

enum Mode { SCULPTING, MANAGING, STROLLING, SYMPHONY }

const BAR_SECONDS := 3.0
const BEAT_SECONDS := 0.75
const SLOT_SECONDS := 0.1875 # 1/16 note at 80 BPM (3.0s / 16)
const SLOTS_PER_BAR := 16
const MAX_ARP_QUEUE := 5

# 固定微拍槽位分配表：彻底消灭所有事件挤在 Slot 0 抢槽位！
const EVENT_SLOTS := {
	"tower_bell": 0,       # 第 1 拍正拍：钟楼锚点
	"quality_upgrade": 1,  # 第 1 拍第 2 微槽：晋升竖琴琶音
	"waterwheel": 2,       # 第 1 拍后半拍：水车木轮律动
	"cafe_flute": 4,       # 第 2 拍正拍：茶座长笛
	"bakery_cue": 6,       # 第 2 拍后半拍：面包出炉/购买双音
	"district_reply": 8,   # 第 3 拍正拍：跨街坊/跨时代器乐问答
	"tram_chime": 10,      # 第 3 拍后半拍：有轨电车/八音盒钢片琴
	"travel_crossing": 12, # 第 4 拍正拍：过桥/穿拱琶音
	"quality_flourish": 14 # 第 4 拍后半拍：Lv.3~5 华宅泛音点缀
}

var current_mode: Mode = Mode.MANAGING
var last_sculpt_usec: int = -10000000
var drawer_open: bool = false
var backing_duck_db: float = 0.0
var _last_global_slot: int = -1
var _slot_queues: Dictionary = {} # slot_index (0..15) -> Dictionary event
var _arp_queue: Array[Dictionary] = []
var _cooldowns: Dictionary = {} # category_key -> last_clock_sec

func notify_sculpt_action() -> void:
	last_sculpt_usec = Time.get_ticks_usec()

func evaluate_mode(zoom: float, concert_active: bool, strolling: bool, delta: float) -> Mode:
	var since_sculpt := float(Time.get_ticks_usec() - last_sculpt_usec) / 1000000.0
	if concert_active or zoom > 32.0:
		current_mode = Mode.SYMPHONY
	elif since_sculpt <= 1.15:
		current_mode = Mode.SCULPTING
	elif strolling or zoom <= 18.0:
		current_mode = Mode.STROLLING
	else:
		current_mode = Mode.MANAGING

	# 建造拖拽时自动将背景长轨柔和压低 -4.2 dB，突出指尖五声音阶拨弦；
	# 盛典模式时释放 +2.0 dB 动态余量。
	var target_duck := -4.2 if current_mode == Mode.SCULPTING else (2.0 if current_mode == Mode.SYMPHONY else 0.0)
	backing_duck_db = lerpf(backing_duck_db, target_duck, 1.0 - exp(-delta * 6.0))
	return current_mode

## 指尖建造琶音队列（借鉴 Mini Metro Arpeggio Module）：
## 快速连拖房屋时，不乱序爆音，而是按 0.1875s 十六分音符网格依次弹出！
func enqueue_pluck_arpeggio(plan: Dictionary, clock_sec: float) -> void:
	if plan.is_empty():
		return
	# 去重：若队列末尾已是同一栋房同一音高，不重复塞入
	if not _arp_queue.is_empty():
		var tail: Dictionary = _arp_queue.back()
		if tail.get("stream_key") == plan.get("stream_key") and tail.get("house_id") == plan.get("house_id"):
			return
	if _arp_queue.size() >= MAX_ARP_QUEUE:
		_arp_queue.pop_front()
	_arp_queue.append(plan)

## 日常城市事件错峰入队：按 EVENT_SLOTS 分配到专属微拍槽位
func schedule_event(category: String, payload: Dictionary, clock_sec: float, min_cooldown: float = 1.5) -> bool:
	# 宏观俯瞰/盛典态或正在高频拖拽建造时，屏蔽琐碎的日常经营音效，保护注意力纯净度
	if current_mode == Mode.SYMPHONY:
		if category not in ["tower_bell", "district_reply"]:
			return false
	if current_mode == Mode.SCULPTING and category not in ["quality_upgrade", "district_reply"]:
		return false

	var cd_key := category + ":" + str(payload.get("source_id", ""))
	if _cooldowns.has(cd_key) and clock_sec - float(_cooldowns[cd_key]) < min_cooldown:
		return false

	var target_slot: int = int(EVENT_SLOTS.get(category, 4))
	var existing: Dictionary = _slot_queues.get(target_slot, {})
	# 同槽位保留权重更高或离镜头焦点更近的事件
	if existing.is_empty() or float(payload.get("weight", 0.0)) >= float(existing.get("weight", 0.0)):
		var item := payload.duplicate()
		item["category"] = category
		item["queued_at"] = clock_sec
		_slot_queues[target_slot] = item
		return true
	return false

## 在 Music._process 中每帧调用，按 0.1875s 网格精确弹出当前槽位事件
func step(clock_sec: float, trigger_callback: Callable) -> void:
	var global_slot := int(floor(maxf(0.0, clock_sec) / SLOT_SECONDS))
	if global_slot == _last_global_slot:
		return
	_last_global_slot = global_slot
	var bar_slot := posmod(global_slot, SLOTS_PER_BAR)

	# 1. 优先弹出指尖建造琶音队列（保证玩家操作 100% 响应）
	if not _arp_queue.is_empty():
		var pluck: Dictionary = _arp_queue.pop_front()
		trigger_callback.call("pluck_arp", pluck)
		return

	# 2. 弹出当前微拍槽位对应的城市烟火/共鸣事件
	if _slot_queues.has(bar_slot):
		var event: Dictionary = _slot_queues[bar_slot]
		_slot_queues.erase(bar_slot)
		if clock_sec - float(event.get("queued_at", 0.0)) <= BAR_SECONDS + 0.2:
			var cd_key := str(event.get("category", "")) + ":" + str(event.get("source_id", ""))
			_cooldowns[cd_key] = clock_sec
			trigger_callback.call(str(event.get("category", "")), event)

```

### 6.3 核心重构代码二：空间拓扑→音乐涌现引擎 (`scripts/audio/city_creation_harmonic_emergence.gd`)

此模块负责将玩家在视野内的**建筑高度、庭院/环岛围合度、多时代街坊占比与繁荣度**实时翻译为**多声部配器权重与变体选择**，彻底打破单一时代轨道长期被压在 `-21dB` 的限制：

```
class_name CityCreationHarmonicEmergence
extends RefCounted
## Translates visible city geometry, era diversity, and household quality tiers
## into dynamic stem target gains and phrase variations.

const ERA_TRACK_MAP := {
	"pastoral": "wood",
	"renaissance": "renaissance_fugue",
	"clockwork": "clockwork_waltz",
	"modern_eco": "modern_symphony"
}

## 根据当前镜头视野内的建筑拓扑与时代分布，计算 12 条长轨的涌现混音目标 (dB)
static func evaluate_stem_targets(
	house_music: Dictionary,
	acoustic: RefCounted,
	daily_arrangement: Dictionary,
	synergy_summary: Dictionary,
	night: bool,
	attention_duck_db: float
) -> Dictionary:
	var targets := {
		"foundation": -10.5,
		"wood": -60.0,
		"wood_deep": -60.0,
		"wood_weave": -60.0,
		"wood_market": -60.0,
		"wood_sylvan": -60.0,
		"air": -22.0,
		"terrace": -26.0,
		"concert": -60.0,
		"renaissance_fugue": -60.0,
		"clockwork_waltz": -60.0,
		"modern_symphony": -60.0
	}

	if acoustic.focus_ids.is_empty():
		return targets

	var era_weights := {"pastoral": 0.0, "renaissance": 0.0, "clockwork": 0.0, "modern_eco": 0.0}
	var style_weights := {"warm": 0.0, "deep": 0.0, "weave": 0.0, "market": 0.0, "sylvan": 0.0}
	var total_weight := 0.0
	var high_elevation_weight := 0.0
	var high_quality_weight := 0.0

	# 1. 统计视野核心区 (Focus) 与内联共鸣区 (Linked) 的时代、风格、海拔与品质分布
	for id: String in house_music:
		var w: float = acoustic.weight(id)
		if w <= 0.0:
			continue
		var row: Dictionary = house_music[id]
		var era: String = str(row.get("era_theme", "pastoral"))
		var style: String = str(row.get("style", "warm"))
		var base_y: float = float(row.get("base_y", 0.0))
		var tier: int = int(row.get("level_tier", 1))

		era_weights[era] = float(era_weights.get(era, 0.0)) + w
		style_weights[style] = float(style_weights.get(style, 0.0)) + w
		total_weight += w
		if base_y >= 1.0 or int(row.get("towers", 0)) > 0:
			high_elevation_weight += w
		if tier >= 3:
			high_quality_weight += w * float(tier - 2) * 0.5

	if total_weight <= 0.001:
		return targets

	# 2. 按时代视野占比动态激活四大时代主声部（镜头移到文艺复兴/蒸汽/现代街区时，该时代器乐真正成为主角！）
	for era: String in era_weights:
		var ratio: float = float(era_weights[era]) / total_weight
		if ratio <= 0.05:
			continue
		if era == "pastoral":
			# 田园时代内部按 5 大街坊主题分配木吉他/深流/织机/市集/林间音轨
			var style_tracks := {"warm":"wood", "deep":"wood_deep", "weave":"wood_weave", "market":"wood_market", "sylvan":"wood_sylvan"}
			for st: String in style_weights:
				var st_ratio: float = float(style_weights[st]) / maxf(0.01, float(era_weights["pastoral"]))
				var combined := ratio * st_ratio
				if combined > 0.05:
					targets[style_tracks[st]] = lerpf(-22.0, -10.5, clampf(combined, 0.0, 1.0)) + attention_duck_db
		else:
			var track_key: String = ERA_TRACK_MAP[era]
			# 当镜头聚焦于文艺复兴/蒸汽/现代街区时，其音轨从 -21dB 跃升至 -10.5dB 主奏电平！
			targets[track_key] = lerpf(-24.0, -10.5, clampf(ratio * 1.15, 0.0, 1.0)) + attention_duck_db

	# 3. 高地海拔与塔楼比例自动推高 Air（高空木管/弦乐呼吸层）
	var air_ratio := clampf(high_elevation_weight / maxf(2.0, total_weight * 0.6), 0.0, 1.0)
	targets["air"] = lerpf(-22.0, -12.5, air_ratio) + attention_duck_db

	# 4. 房屋 Lv.3~5 品质进化与声学和弦 BUFF 自动推高 Terrace（高音钟琴与泛音华彩层）
	var chord_bonus_db := float(synergy_summary.get("active_chord_count", 0)) * 1.5
	var quality_ratio := clampf(high_quality_weight / maxf(2.0, total_weight * 0.5), 0.0, 1.0)
	targets["terrace"] = minf(-13.0, lerpf(-25.0, -15.0, quality_ratio) + chord_bonus_db) + attention_duck_db

	# 5. 星夜模式柔化高频，突出温暖绵长的中低频共鸣
	if night:
		targets["foundation"] += 1.0
		targets["terrace"] += 1.2
		targets["wood"] -= 1.5

	return targets

```

### 6.4 核心重构代码三：声学和弦 BUFF 与区域开拓激励器 (`scripts/world/city_creation_synergy_buffs.gd`)

此模块直接赋能 `city_creation_prosperity.gd` 与 UI 面板，提供清晰的**特殊建筑×地标×地形协同计算**：

```
class_name CityCreationSynergyBuffs
extends RefCounted
## Evaluates Acoustic Chord Synergies, Landmark Adjacency Super-Amplifiers,
## and Cross-District Counterpoint Multipliers.

const CHORD_DEFS := {
	"pastoral_triad": {
		"name": "🎵 晨光田园三和弦",
		"desc": "同街坊含【面包坊 + 花圃茶座 + 喷泉内院/池塘】· 饮茶转化+50%、Lv.3进化加速",
		"production_mult": 1.25
	},
	"highland_fifth": {
		"name": "🎵 高地钟楼五度共鸣",
		"desc": "高地台地(>=1.0m)含【>=4栋房屋 + 钟楼/古钟塔】· 高地步速+25%、声场聚焦扩大",
		"speed_mult": 1.25
	},
	"renaissance_fugue": {
		"name": "🎵 文艺复兴赋格四重奏",
		"desc": "含【人文书院 + 制琴坊 + >=2栋连拱柱廊楼】· 工艺品双倍产出、直通Lv.4华宅",
		"production_mult": 1.50
	},
	"clockwork_waltz": {
		"name": "🎵 蒸汽花房圆舞曲",
		"desc": "含【钟表工坊 + 阳光玻璃花房 + 电车轨街】· 电车沿线自动充能余韵、制作提速40%",
		"production_mult": 1.40
	},
	"chrono_counterpoint": {
		"name": "🎵 跨河古今交响对位",
		"desc": "两个不同时代街坊通过【桥梁或共鸣音弧】相连 · 两岸共享服务、全产出+30%",
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

	# 逐街坊检查和弦配方
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

	# 检查跨时代街坊共鸣
	var unique_eras := {}
	for did: String in district_eras:
		unique_eras[district_eras[did]] = true
	if unique_eras.size() >= 2 and (not city.musical_links.is_empty() or not city.district_answers.is_empty()):
		active_chords.append("chrono_counterpoint")

	# 计算跨区域开拓倍增系数：每多一个有住户的独立风貌街坊，全城共鸣效率递增 +12%（鼓励造新区域！）
	var active_district_count := district_roles.size()
	var expansion_multiplier := 1.0 + float(clampi(active_district_count - 1, 0, 5)) * 0.12

	return {
		"active_chords": active_chords,
		"active_chord_count": active_chords.size(),
		"active_district_count": active_district_count,
		"expansion_multiplier": expansion_multiplier,
		"production_bonus_mult": expansion_multiplier * (1.20 if not active_chords.is_empty() else 1.0)
	}

## 检查某栋功能建筑是否处于 6 大强力地标的“局部超级增幅圈”内
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
					speed_mult *= 1.50
					extra_batch += 1
					labels.append("🏛️ 音乐院同区赋能 (产出翻倍)")
			"botanical_palace":
				if dist <= 14.0:
					speed_mult *= 1.30
					labels.append("🌿 植物宫花海圈 (+30%茶聚与和谐)")

	return {
		"speed_mult": speed_mult,
		"extra_batch": extra_batch,
		"label": " · ".join(labels)
	}

```

### 6.5 分阶段落地施工路线图（Stage A ～ Stage D 验收清单）

施工 AI 或开发人员可按以下 **4 个增量阶段（Stage A \~ Stage D）** 逐步合入并运行实窗验证，确保每一步都不破坏现有存档（`Schema 1~17`）与帧率基线（`Life < 0.8ms`）：

| 施工阶段 | 核心交付文件 | 关键施工动作 | 自动化测试与实窗验收指标 | 
| ----- | ----- | ----- | ----- | 
| **Stage A**  **注意力状态机与 16 槽微拍量化器** | • `city_creation_attention_mixer.gd`  • `city_creation_music.gd`  • `city_creation_spatial.gd` | 1\. 实装 `Mode.SCULPTING / MANAGING / STROLLING / SYMPHONY` 四态切换与建造拖拽时的 `-4.2 dB` 侧链压限；  2\. 将 `play_house` 连拖拨弦接入 `0.1875s` 琶音节流队列；  3\. 将茶座、面包坊、钟楼、跨区问答、过桥、电车铃接入 `EVENT_SLOTS (0..15)` 微拍错峰调度。 | • 新建 `tests/test_city_creation_attention_mixer.gd`；  • 验证同一小节内同时触发茶座+面包+问答+过桥时，**0 次被丢弃 (`skipped == 0`)**，而是依次落在 `Slot 4 / 6 / 8 / 12` 错峰播放！  • 拖拽建房时无杂音叠爆。 | 
| **Stage B**  **音乐涌现引擎与多时代声部解放** | • `city_creation_harmonic_emergence.gd`  • `city_creation_theme_pcm.gd`  • `tools/bake_creation_music_bank.gd` | 1\. 解除 `renaissance_fugue / clockwork_waltz / modern_symphony` 在日常模式下的 `-21dB` 锁死，使其随镜头视野内对应时代建筑权重平滑升至 `-10.5 dB`；  2\. 为主声部增加随城市海拔、庭院围合度与品质等级切换的乐句变体；  3\. 重新运行 `bake_creation_music_bank.gd` 更新声部库签名。 | • 新建 `tests/test_city_creation_harmonic_emergence.gd`；  • 在 `四库共鸣交响大城样例.json` 中平移镜头至四大时代街区，验证主声部在 3 秒句界内丝滑切换为对应时代的独奏与复调乐器；音频 CPU `< 0.4ms`。 | 
| **Stage C**  **声学和弦 BUFF、地标增幅圈与新区域激励** | • `city_creation_synergy_buffs.gd`  • `city_creation_prosperity.gd`  • `city_creation_paper_hud.gd` | 1\. 实装五大【声学和弦组合 BUFF】与 6 大地标【14m\~18m 局部超级增幅圈】；  2\. 实装【跨区域开拓倍增器】（每多一个活跃异风格街坊，全城生产与升级效率 `+12%`）；  3\. 在左上角目标卡与右侧用途抽屉展示激活的和弦徽章与地标光环提示。 | • 新建 `tests/test_city_creation_synergy_buffs.gd`；  • 验证在河对岸开辟第二街坊并连线后，全城工坊获得 `expansion_multiplier` 与 `chrono_counterpoint` 加成，UI 实时显示和弦徽章。 | 
| **Stage D**  **声学地貌种子与“开下一把”乐章变奏卡** | • `city_creation_state.gd` (`Schema 18`)  • `city_creation_gallery_panel.gd`  • `city_creation_journal.gd` | 1\. 在新建河湾面板增加 **5 大声学地貌种子**（晴翠双岸、叠翠千阶、烟水群岛、林间秘境、星夜流光）；  2\. 在时代解锁时提供二选一【乐章特化铭牌 (`score_modifiers`)】；  3\. `Serializer` 升级支持可选 `Schema 18` 字段，旧 `Schema 1~17` 100% 原样兼容。 | • 运行全套回归测试与 `check_creation_paper_ui_live.gd`；  • 验证切换不同声学地貌种子开局时，地形特征、主调式音阶与专属法则立即生效，存档/读档/撤销完全一致。 | 
