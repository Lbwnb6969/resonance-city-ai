# 《共鸣之城》Lyria 3.5 全场景音乐提示词库

2026-11-01 · 制作提案 v1。按用户最新决定，改用 Lyria 3.5 生成完整音乐，再分轨用于游戏变化与叠加。本文件交付创作任务与提示词；尚未生成、分轨或听评，不代表运行系统已改造。旧曲、原件、开放音源制作工程及其真实证据保留。

## 1. 使用结论

本库的 **11 首核心母曲＋1 首独立 6/8 曲＋1 首可选节庆曲** 是风格与场景储备目录，不是一次性生产承诺。用户最新要求已授权将 `D:/GODOT/Music` 里的纯音乐全部自动器乐分轨，按实际可拆声部制作候选；游戏接入仍先用 `01 · ly35_river_dawn` 完成听评、时间线和一个空间变化，再扩展。

每首下方英文块均可独立复制。它们已经包含纯器乐、主奏呼吸、编制、段落和制作要求，无需再拼一个长总提示。英文只是统一术语，不声称比中文生成质量更高。曲名和城市画面只作为人工索引，真正控制声音的是块内的音乐描述。

**叠加单位是同一录音的同步分轨，不能把下列不同歌曲直接相加。** 同 BPM、同调也不足以兼容：实际和声位置、乐句、起拍和速度漂移都必须匹配。跨母曲用独立曲末交接；同曲空间变化用分轨增益、预制片段或有限配器替换。

### Lyria 能力与提示词边界

- 官方把 Lyria 3.5 列为完整曲生成、44.1 kHz 立体声输出，默认MP3；API也可请求WAV，支持该选项的入口优先直接取WAV。REST参数为 generationConfig.responseFormat.audio.mimeType = AUDIO_WAV；这属于请求配置，写进音乐提示词不能代替配置。Gemini 产品页面列最长 3 分钟。本文取约 2 分 30 秒的目标长度，具体界面限制以所用入口为准。
- 官方文档未列出原生多 stem 导出。本方案按完整曲→外部分离/必要人工重制制作，不写“输出四条无串音 WAV”这类无法靠文字兑现的要求。
- 明写 `Instrumental only, no vocals`：官方说明模型默认会生成带歌词歌曲。下面同时排除吟唱，避免无词人声落入 pad。
- BPM、调性、拍号、小节数、入口和精确时长都是生成意图，必须以音频复核。没有保证锁拍、无缝循环或逐音服从的承诺。
- 官方说明同提示结果可变、当前音乐生成不支持多轮编辑。因此“把上一版钢琴拿掉，其余完全不动”不能作为同步替代 stem 的生产方法。
- 用户已确认现有文件为纯音乐。离线流程直接用 HTDemucs 6S、木管定向模型及剩余器乐细分；不以人声筛查为前置，也不把 Other／Vocals 模型槽位当真实乐器身份。逐轨试听后再分配 `lead`／`bed` 等游戏角色。

来源：[官方音乐生成文档](https://ai.google.dev/gemini-api/docs/generate-content/music-generation)、[官方提示词指南](https://ai.google.dev/gemini-api/docs/lyria-prompt-guide)、[Gemini 音乐产品页](https://gemini.google/overview/music-generation/)。本次以 EXA 检索及正文提取、Brave 官方站点检索交叉核对，WAV配置另核对官方完整正文。

## 2. 仓库依据与覆盖表

已核对[54主规格](../54_V7_最终施工改造总案.md)、[58六曲素材](../58_原创室内乐作曲审阅与施工映射.md)、[63柔和长听](../63_背景音乐柔和配器与长听审阅及施工映射.md)、[64音乐暗线](../64_音乐暗线重构审阅与施工映射.md)、[65明暗双线](../65_明暗双线与AI储备审阅及施工映射.md)、[67蓝色氛围参考](../67_blau氛围参考与原创资产重制审阅及施工映射.md)、[68四曲氛围](../68_四首新古典氛围资产与暗线接入审阅及施工映射.md)、[69制作路线](../69_成长动力与开放音源制作路线.md)、[70施工手册](../70_音乐与成长系统施工手册.md)、[首曲实际批次](resonance_dawn_v1_交付记录.md)，以及源码的时代、地貌、调式、品质、声部分工、播放与注意力调度。以下是新制作身份，不是已经注册的游戏 ID。

| 维度 | 仓库实际定义 | 此库覆盖 |
| --- | --- | --- |
| 四时代风貌 | 古典田园河湾、文艺复兴连拱城、蒸汽钟表与花房、现代生态交响城 | 01—04；风貌指音乐语汇，不强行历史复原 |
| 六个旧母曲身份 | pastoral_breeze、deep_flow、felt_nocturne、renaissance_arcade、clockwork_chimes、highland_echoes；后三者为旧提议 ID | 01、05、06、02、03、07；全部重新创作，不承诺复现旧旋律 |
| 四类功能空间 | courtyard、waterfront、artisan、civic | 第4节同曲染色；不是四套独占歌曲 |
| 五种旧编配颜色 | warm、deep、weave、market、sylvan | 第4节居住、深流、百工、市集/茶座、林园；用途标签不直接充当声音资格 |
| 地貌 | 晴翠双岸、叠翠千阶、烟水群岛、林间秘境、星夜流光、每日随机共鸣 | 01、07、08、09、06；每日随机复用实际选中的地貌，不另写“每日随机曲” |
| 调式0—3 | 晨曦暖阳、深流古巷、人文晴空、星夜交响；当前 KEY_TONES 同属 D 大调音级集合 | 01/05/02/06提供情绪身份；新06为 F♯ 小调，须作新资源映射，不能冒称与旧 mode3 严格同调 |
| 调式4—9 | G Lydian、B Dorian、A major、F♯ minor、C宫五声、F major7 | 07、08、09、06、10、11；major7 是和声色彩，不是独立音阶名 |
| 四 role | foundation、pulse、answer、lead | 第3节职责与第5节档位 |
| 五品质 | 初筑暖舍、安居花舍、雅致风铃屋、连廊华宅、传世共鸣名宅 | 第6节；品质不解锁基础曲、完整旋律或必要声部 |
| 操作/注意力 | 建造、经营、漫步、静听、主动侧耳、收藏/回访 | 第7节复用同源混音 |
| 其他 | 空城、孤屋、无水、混搭、昼夜、天气、季节、地标、跨岸、节庆、升级、生活短声 | 第4、7、9节 |

### 参考资料怎样被使用

| 参考 | 保留的音乐特征 | 落点 |
| --- | --- | --- |
| Tiny Glade、Dorfromantik | 自然原声、轻触感、小编制、乐句呼吸；已有官方文字与项目审阅，不冒充本轮实听分析 | 01/09及全库的动态尺度 |
| blau／齐马蓝 | 近景琴键、暗色流动、弦垫呼吸、窄到宽的声场；两者在仓库记录为同源 SHA，不当两首独立参考 | 04；不复制原旋律或固定和弦循环 |
| coastal_wind | 开阔、钢琴留白、近景与远景分层 | 11；风浪留给游戏环境声 |
| cello_elegy | 中低音弦乐长线、受控摩擦质感 | 05；不把悲怆写成所有巷道的默认心情 |
| fifth_space | 开放五度、稀疏拨弦、缓慢弦乐浪潮 | 07 |
| warm_6_8 | 六八拍摇摆、钢琴与大提琴包裹、温柔叙事 | 12；独立拍号，不叠在4/4母曲上 |
| resonance_dawn/v1 与开放库 | 原创完整作品、钢琴/竖琴/大提琴、同源分轨的实际制作链 | 保留对照；不是已获用户认可的质量标准 |
| Tiny Glade FMOD、Foundation Wwise恢复资料 | 事件/参数/资源的静态组织，不等于已重建其真实播放时序 | 借鉴职责分层，不复制媒体或照搬引擎 |
| 本地 XJ music、barelymusician、Nova Roma 等 | 自适应音乐/季节状态/音频调度工程参考 | 不增加歌曲数量，不因此要求迁移中间件 |

本轮研究是设计、目录、已有测量和源码核对；没有重新播放全部原音频，没有批量阅读历史来源原稿，也没有重做逆向。库中算法估计 BPM/调性不作为新曲必须复刻的数值。

## 3. 给后期分轨留出的作曲空间

每首核心曲只安排 **3—4 个清楚的音色家族**。选择与不同素材分离能力相适应的轨道数，避免把“分离”误当“恢复制作工程”。四 role 是音乐职责，不保证软件能按这四项直接拆开。

| 职责 | 制作目标 | 可接受的实际交付 |
| --- | --- | --- |
| foundation | 中低音和声、稳定低音；主奏休止时仍成立 | 独立低音/和声轨；分不开时与pulse合并为bed |
| pulse | 稀疏拨弦、琴键或轻木质运动 | 独立轨或并入bed，不强行制造持续节拍 |
| answer | 主奏气口内的短回应 | 仅分离确实干净时独立；否则保留在相应乐器轨或离线编辑成受测片段 |
| lead | 唯一可辨的旋律前景，长句后真正休止 | 一条主奏轨；不得再叠第二条不同曲领唱 |

首轮交付优先为 **bed＋lead**，第三轨选可干净分出的pulse或texture。四轨是素材允许后的扩展。反复出现金属水声、相位抖动、主奏残影时，退回较少轨道或人工重制需要的声部。钢琴、竖琴、拨弦弦乐彼此重叠时尤其不能靠文件名宣称分离成功。

## 4. 区域与空间：变化写在同一首内部

下列英文是生成某首的“场所偏重版本”时可添加的短句，**每次至多选一条**。它会生成新完整曲，不会生成与已认可曲严格对齐的变体。运行阶段只在该首实际分离出的轨道上做右栏变化；独立生成的区域版放独立播放列表。

| 情况 | 可选附加句 | 同源运行变化 |
| --- | --- | --- |
| 庭院/窄巷、warm | `Favor close, warm inner voicings and unhurried bass; let the melody leave genuine breathing space.` | 稍抬已有暖支撑；闭院不等于所有声音更响 |
| 水岸、Flowing | `Give the plucked accompaniment a gentle wave-like contour, with broken figures separated by silence.` | 使用本曲已有流动轨；环境水声独立，不能靠水岸资格解锁整首 |
| 百工、weave/Echo | `Use a few interlocking wooden-note replies in the gaps between lead phrases, with a patient handmade rhythm.` | 主奏空位出现短答句，避免叠成生产节拍器 |
| 礼乐、Lyrical | `Shape one poised, expressive melodic arch over spacious supporting voices, intimate rather than ceremonial.` | 使用写定的抒情片段；不用增高音/增响度代替高潮 |
| 市集/烘焙/茶座、market | `Suggest a friendly small gathering through lightly syncopated plucked responses, keeping the ensemble quiet and spacious.` | 少量pulse/answer；真实生活声另调度，不按库存循环播放 |
| 花园/林荫、sylvan | `Let soft woodwind answers alternate with a few plucked notes, leaving the acoustic background open.` | 轻答句与自然声留空，不额外铺满鸟叫 |
| 高地/台地 | `Use open fourths and fifths, widely spaced voicings, and long pauses that imply distance without a large reverb wash.` | 支撑开阔、减少近景细碎；不以任意base_y授予礼乐 |
| 内陆曲路 | `Let the accompaniment sway gently with unevenly spaced phrases while the underlying meter stays steady.` | 复用Sway；无水城也完整，不假造浪声 |
| 跨岸/相邻空间呼应 | `Write a short two-voice imitation with an intentional delayed answer; keep the answering voice subordinate.` | 只用本曲已写对位，不能把主奏复制延迟后直接称Canon |
| 混合时代/混合区 | `Keep one coherent theme and harmonic language; let a secondary instrumental color enter only during a lead rest.` | 一首掌握和声与唯一lead；不把各时代曲同时混播 |
| 空城/孤屋/未接路 | 不加“empty”“unfinished”等削弱音乐的词 | 完整简编直接可用；画面稀少不等于音乐残缺 |

## 5. 11 首核心母曲：直接复制区

全部以约2分30秒为目标；提示内“稳定速度”服务后期对齐，最终按实际音频建节拍图。下列ID仅是制作批次名。每首保留一个清晰旋律身份，不把“温暖、治愈、电影感”堆成唯一差异。

旧 P0—P5 的呈示→展开→减法→推进→高点→收束，保留为后期标记的六种曲式职责。给认可音频标实际边界，不预先按每24秒硬切：主题首次完整出现标P0，主题变化标P1，稀疏中段标P2，回归前铺垫标P3，克制高点标P4，尾声标P5。原曲缺少某种段落就如实记录，不用把一段复制六次凑齐；旧六段接口仍按旧资源读取。

### 01 · 河湾初光 · `ly35_river_dawn`

覆盖：古典田园河湾、晴翠双岸、田园晨风。目标 D major / 80 BPM / 4/4。与09区别：本首是开阔河湾的长线呼唤，09是林下短句交替。

```text
Instrumental pastoral chamber music for a small handcrafted riverside city. No vocals, humming, or choir. About 2 minutes 30 seconds, D major, 80 BPM, steady 4/4. A warm mid-register flute carries one original, gently rising theme; nylon-string guitar provides sparse broken chords, and a softly bowed cello supplies spacious bass support. Let the flute finish its thoughts and rest for whole phrases; guitar and cello remain musically complete without it. Develop the theme through altered phrase endings and subtle harmonic movement rather than constant repetition. Form: a brief intimate opening, clear theme, a quiet reduced middle, a modest lyrical return, then an open, unhurried ending. Keep the recording natural and close, instrumental attacks distinct, reverberation restrained, and dynamics supple. Quietly hopeful and lived-in, with no high whistling peaks, drum groove, epic climax, or environmental sound effects.
```

### 02 · 拱廊日影 · `ly35_arcade_light`

覆盖：文艺复兴连拱城、拱廊回响、人文晴空。目标 D major / 80 BPM / 4/4；是当代背景室内乐中的古风句法，不标成历史复原。

```text
Instrumental Renaissance-inspired chamber music, intimate and humane rather than royal. No vocals, humming, or choir. About 2 minutes 30 seconds, D major, 80 BPM in steady 4/4, with the quiet poise of a pavane. A mellow tenor recorder states an original balanced theme; a lute supplies light broken harmonies, and a viola da gamba supports the bass. Use graceful suspensions that resolve clearly, a few gently imitative replies, and spacious contrary motion. Only one melodic voice leads at a time. Form: a plain opening statement, a subtly ornamented answer, a reduced lute-and-gamba passage, a warm return with one expressive melodic arch, and a calm open ending. Keep the instrumental lines distinct and the room small, with rounded attacks and natural breathing. Avoid harpsichord glitter, piercing recorder tones, dense fugue, grand cathedral reverb, drums, cinematic brass, and triumphant fanfares.
```

### 03 · 铜齿与花房 · `ly35_glasshouse_clock`

覆盖：蒸汽钟表与花房、铜钟百工谐、百工节奏身份。目标 D major / 80 BPM / 4/4；3+3+2是轻重音，不是另起速度。

```text
Instrumental acoustic chamber minimalism for a sunlit clockmaker's glasshouse. No vocals, humming, or choir. About 2 minutes 30 seconds, D major, 80 BPM, steady 4/4. A rounded low marimba plays a small original motif with occasional gentle 3+3+2 accents; a mellow bass clarinet gives short melodic answers, and pizzicato cello supports a patient bass line. Alternate who leads so the wooden pattern and clarinet never compete. Develop the motif by shifting rests, lengthening its ending, and changing the bass direction. Include an unhurried opening, a lightly interlocking passage, a nearly still middle, one quietly satisfying return, and a spacious ending. Suggest careful human craft rather than machinery. Keep transients soft but distinct, bass light, and reverb short. No ticking sound effects, music-box sparkle, busy ostinato throughout, waltz meter, drum kit, harsh metal, or steampunk battle music.
```

### 04 · 玻璃叶脉 · `ly35_green_underflow`

覆盖：现代生态交响城、blau水下新古典氛围。目标 D major / 80 BPM / 4/4。这里的“交响”是宽阔层次，编制仍克制。

```text
Instrumental electroacoustic neoclassical music for a quiet ecological city of glass, water, and gardens. No vocals, humming, or choir. About 2 minutes 30 seconds, D major with restrained add9 and major7 colors, 80 BPM, steady 4/4. Close, soft felt-piano phrases carry one original reflective theme above a warm, slowly breathing string texture and a few dark, filtered synth-pluck pulses. Keep the piano, sustained texture, and pulse clearly distinguishable. The pulse is a gentle undercurrent, never a beat drop or dance groove. Move from a narrow intimate opening to a modestly wider middle, withdraw to piano and silence, then return with quiet warmth before an open ending. Let the piano rest between complete phrases, leaving the backing self-sufficient. Rounded midrange, controlled low bass, restrained room ambience, and clear attacks. No underwater sound effects, rain, waves, tape hiss, bright shimmer, sub-bass swell, dramatic risers, or oversized cinematic climax.
```

### 05 · 古巷深流 · `ly35_alley_cantabile`

覆盖：deep_flow、深流古巷、cello_elegy的低音叙事。目标 D major，以 B minor 邻近色彩作局部阴影 / 80 BPM / 4/4。不是悲剧区专曲。

```text
Instrumental chamber music with a quiet lower-register narrative, thoughtful but comforting. No vocals, humming, or choir. About 2 minutes 30 seconds, centered on D major with brief B-minor shading, 80 BPM in steady 4/4. A warm solo cello sings an original cantabile melody with gentle pickups and occasional understated syncopation. A soft piano provides widely spaced upper-middle-register harmony; a very sparse nylon-guitar figure adds a sense of flow without doubling the cello. Keep the bass region clear while the cello leads. Let long melodic lines end in genuine rests, with a short piano answer afterward. Form: intimate statement, patient development, a reduced piano passage, one restrained expressive crest, then a calm return. Natural bow texture, controlled vibrato, distinct lines, and a small room. No tragic funeral mood, abrasive bow noise, soaring violin layer, low-frequency drone, heavy percussion, or emotional cinematic swell.
```

### 06 · 星窗夜话 · `ly35_starlit_felt`

覆盖：felt_nocturne、星夜流光地貌、F♯ minor调式；夜间也可继续播放其他母曲，不强制自动切本首。

```text
Instrumental felt-piano nocturne, private, spacious, and gently reassuring. No vocals, humming, or choir. About 2 minutes 30 seconds, F-sharp minor, 80 BPM in steady 4/4, with a slow half-time feeling. A soft mid-register piano introduces an original melody after a brief pause; warm sustained cello notes support it, and a few muted harp notes answer only at phrase endings. Write long rests and let the harmony breathe. Use restrained added seconds and occasional warmth from A major without a dramatic key change. Form: sparse opening, a clear quiet theme, an even more reduced middle, a modest return with one altered phrase, then a lingering open ending. Keep piano attacks and string support distinct, bass controlled, and reverberation modest. Tender rather than sad, with no high chiming arpeggios, ticking clock, lullaby vocals, constant pad wash, rain, vinyl crackle, drums, or dramatic crescendo.
```

### 07 · 千阶微光 · `ly35_terraced_sky`

覆盖：highland_echoes、叠翠千阶、G Lydian、fifth_space。目标 80 BPM / 4/4；用 C♯ 的轻触建立Lydian身份，避免只写“神秘山谷”。

```text
Instrumental spacious chamber music for terraced hills opening toward a wide sky. No vocals, humming, or choir. About 2 minutes 30 seconds, G Lydian with a gentle characteristic C-sharp, 80 BPM, steady 4/4. A mellow low flute shapes an original motif of open fourths and fifths followed by a long descending answer. Sparse harp figures suggest measured upward steps; a restrained bowed-cello foundation provides widely spaced support. Give distance through rests and register spacing rather than huge reverb. Develop the motif through changing bass direction and one luminous harmonic opening, then reduce to harp and cello before the theme returns. End with a quiet, open sonority. Clear instrumental separation, natural rounded attacks, moderate dynamics, and no continuous low drone. Avoid heroic mountain scoring, brass, timpani, shrill flute peaks, glittering harp runs, orchestral walls, wind recordings, and triumphant cadences.
```

### 08 · 烟水群岛 · `ly35_island_dorian`

覆盖：烟水群岛、沙洲回声、B Dorian。这里的沙洲来自群岛水域，不扩写成沙漠或中东地域标签。

```text
Instrumental chamber music for small misty river islands and connecting footbridges. No vocals, humming, or choir. About 2 minutes 30 seconds, B Dorian with a gentle G-sharp color, 80 BPM in steady 4/4. A warm clarinet carries an original gently circling melody; nylon-string guitar traces a few rising and falling broken-chord figures, while a bowed cello supplies simple spacious support. Use soft offbeat pickups and pauses to suggest floating movement without changing tempo. Let each melodic question receive a shorter, quieter answer. Form: a close opening, an unfolding theme, a nearly still middle, a subtly brighter return, then an open ending. Keep the modal minor character curious and welcoming rather than mournful. Distinct instrumental attacks, short natural room ambience, and controlled bass. No desert stereotypes, exotic percussion, sea shanty, wave recordings, continuous ostinato, dramatic swells, or piercing high notes.
```

### 09 · 林间牧歌 · `ly35_woodland_dialogue`

覆盖：林间秘境、A major、sylvan。目标 80 BPM / 4/4；区别于河湾长笛长线，采用短句木管对话。

```text
Instrumental woodland chamber folk, shaded, playful in small details, and deeply unhurried. No vocals, humming, or choir. About 2 minutes 30 seconds, A major, 80 BPM, steady 4/4. A mellow clarinet leads with an original short, conversational motif; a soft flute answers only in its rests, while nylon-string guitar provides a complete sparse harmonic backing. Keep clarinet and flute in separate phrases with only one melodic foreground. Vary phrase lengths and leave occasional whole bars open instead of repeating a busy pattern. Form: a small question and answer, gentle development, a guitar-only clearing, a warmer return, and a light open ending. Natural wood and breath textures, rounded middle registers, restrained reverb, and modest dynamics. Suggest life beneath trees through musical interaction, not sound effects. No bird recordings, sparkling celesta, fantasy choir, rustic stomping, rapid woodwind runs, heavy bass, or grand orchestral climax.
```

### 10 · 宫商河韵 · `ly35_pentatonic_courtyard`

覆盖：C宫五声独立模式。目标 C-D-E-G-A / 80 BPM / 4/4；现代器乐创作，不把五声写成所有东亚文化的笼统代称。

```text
Instrumental contemporary Chinese-inspired chamber music for a quiet waterside courtyard. No vocals, humming, or choir. About 2 minutes 30 seconds, centered on the C gong pentatonic collection C D E G A, 80 BPM, steady 4/4. A rounded mid-register xiao carries one original, spacious melodic line. A softly plucked guzheng offers a few widely separated notes, and a warm bowed cello supplies simple open-fifth support. Favor pentatonic melodic logic, gentle ornamental inflection, and breathing pauses rather than a Western dominant-driven cadence. Let each instrument complete its phrase before another answers. Form: a plain introduction, a clear theme, a reduced plucked passage, a slightly fuller lyrical return, and a quiet open ending. Distinct timbres, restrained room ambience, and natural dynamics. No festival gongs, martial drums, cinematic erhu wailing, rushing guzheng glissandi, bird sounds, tourist-music clichés, or epic climax.
```

### 11 · 印象水光 · `ly35_water_reflections`

覆盖：F major7和声色彩、coastal_wind、水岸/开放庭院。目标 F major / 80 BPM / 4/4；与04区别：纯原声、和声转位与色彩发展，不靠电子脉冲。

```text
Instrumental impressionistic chamber music, luminous but soft, for light reflected across still water. No vocals, humming, or choir. About 2 minutes 30 seconds, F major with gentle major7 and add9 colors, 80 BPM in steady 4/4. A soft acoustic piano leads with an original, unhurried melody over widely spaced harp responses and restrained sustained cello support. Let color come from smooth voice-leading and changing chord inversions, not dense chord stacks or constant arpeggios. Keep the melodic foreground singular and leave whole phrases without lead. Form: a few close piano notes, an opening harmonic landscape, a sparse middle, one restrained luminous crest, and a quiet open ending. Clear attacks, supple natural dynamics, small-to-medium room ambience, and clean low mids. No surf or wind recordings, sentimental piano-ballad climax, bright harp cascades, synth shimmer, drums, or huge reverberant wash.
```

## 6. 档位与等级：不再额外生成几十首

### 声部档位覆盖

| 原档位 | 新制作要求 | 同源资产实现 |
| --- | --- | --- |
| foundation：Pizz / Warm | 基础简编本身完整，暖度是音色/和声重心变化 | 优先bed固定；真要Pizz/Warm互换，离线重制同一和声时间线，不能从独立Lyria调用凑 |
| pulse：Sparse / Sway / Flowing，及三color | 同一身份包含留白、摇曳、流动段落 | 先用原曲已有片段；color只在确有不同材料时登记，不把三种音量冒称三套配器 |
| answer：Mute / Echo / Canon | 无回答也完整；回答服从主奏气口；Canon必须写定对位 | 分离干净的answer可开关；否则仅用原曲已存在的答句，Canon后置人工编写 |
| lead：Simple / Lyrical / Virtuoso | 清楚主题、抒情长线、克制高潮；不是低/中/高频堆叠 | 先利用原曲段落，不任意把整条主奏切碎或叠第二主奏 |

### 五级品质与新成长等级

品质层级和J页新账期等级是不同数据。自由音乐不以任何一种等级为前置。本表表达可选主动鉴赏/真实升阶短声的制作范围，不新增自动等级混音门禁。

| 品质 | 音乐处理 | 新歌曲需求 |
| --- | --- | --- |
| 1 初筑暖舍 | 从一开始就有完整、耐听的简编和主题 | 无 |
| 2 安居花舍 | 可选更温暖的同源平衡；不能多一个必需和声层 | 无 |
| 3 雅致风铃屋 | 实际升阶且用户允许时，主奏空位内一个轻短答句 | 无；第9节短声素材 |
| 4 连廊华宅 | 主动鉴赏时适度展示已写的抒情段；自动播放仍按空间和曲式 | 无 |
| 5 传世共鸣名宅 | 主动作品巡礼可播放本曲完整认可混音；不常驻满编炫技 | 无 |
| 新账期任意等级 | 成长资格用于已设计的美学奖励；音乐基础完整性不变 | 无；不编造Lv.6—Lv.20独占歌曲 |

## 7. 其他状态与变化规则

这些是同曲后期/运行配方，不用再次请求Lyria生成“完全相同但不同天气”的歌曲。

| 状态 | 处理 |
| --- | --- |
| 清晨/白天 | 原曲基础平衡，保留旋律气口；不每次黎明重启曲头 |
| 黄昏 | 同源暖支撑稍靠前，减少尖锐瞬态；没有可分离支撑时保持原混音 |
| 夜间 | 减少活动pulse/answer；有完整night曲可在曲末自愿换入，fixed保持 |
| 雨/雾 | 环境声独立；不把雨烘焙进所有音乐，不因下雨不断切曲 |
| 春夏秋冬 | 用已有同源混音和环境层表达；冬季减少运动不等于升高钢琴音区或新增铃铛 |
| 连续建造 | 对已有音乐温柔让位并节流短音；不逐笔触发高潮 |
| 经营/停业/关闭成长 | 音乐完整性不变；经营事件只提供真实、稀少、可关闭的点景 |
| 漫步/近景 | 只突出有实际声部归因的轨；不能把整曲lead假称某栋房子的声音 |
| B静听/quiet | 降低可选细碎层，保持当前主题；不强制改为06 |
| P侧耳/独奏 | 仅对真实可分离轨提升注意力；切回恢复原平衡和游标 |
| 地标/礼乐高点 | 等待曲内已写好的高点，不能进地标立刻叠交响高潮 |
| 照片/收藏/回访 | 原曲或同源认可完整混音；保留作品曲目身份与实际播放资源 |
| 快速镜头/拆除/Undo | 空间目标稳定后再入乐句；拆除撤当前来源、已播允许受控尾音；Undo复用有效资产 |
| 静音/暂停/换城 | 用户操作优先；静音即时生效，换城取消旧发布，新资源未就绪不伪称已播 |
| 自动换曲 | 各曲不同调性不直接叠长尾；优先曲末和受测衔接，静候也比错误和声更明确 |

新方案不要求所有母曲遵守旧144秒/80BPM/4/4契约。核心提示统一80BPM只是首批制作取舍；实测偏移必须记录。第12、13首独立运输，不送入旧schema1，也不以整体移调替代逐句调式改写。

## 8. 两首具有独立用途的扩展曲

### 12 · 灯下归途 · `ly35_homeward_six_eight`

覆盖：warm_6_8、黄昏回访/主动静听。目标 D major / 6/8，**附点四分音符=54**，不是六个八分音符都按54。仅在新拍号运输接通后使用；当前先作完整曲试听候选。

```text
Instrumental neoclassical chamber music with a gentle six-eight sway, like returning to a warmly lit home. No vocals, humming, or choir. About 2 minutes 30 seconds, D major, 6/8 meter, dotted-quarter pulse around 54 BPM: two broad beats per bar. A soft piano carries one original, tender melody; bowed cello provides a warm lower line, and sparse nylon-guitar notes lightly imply the compound meter. Keep the guitar out of the piano's attacks and let the cello answer only after the melody rests. Develop one theme through a quiet contrasting middle and a warm, restrained return. The emotional high point should come from melodic direction and harmony, not louder playing or a higher octave. End with an unhurried open sonority. Clear instrumental separation, natural small-room ambience, and moderate dynamics. No pop-ballad drums, lullaby singing, grand string swell, dramatic key change, or three-quarter waltz.
```

### 13 · 一城相聚 · `ly35_city_gathering`

覆盖：用户主动节庆/作品盛典。目标 D major / 88 BPM / 4/4。是独立可选节目，不作为区域解锁或品质5自动响起的fanfare。四时代主题的严格再现必须从认可素材后期编排；单次提示不能记住四首独立生成的主题。

```text
Instrumental chamber celebration for a small city gathering, joyful, graceful, and personal. No vocals, humming, or choir. About 2 minutes 30 seconds, D major, 88 BPM, steady 4/4. Use a warm flute, soft piano, low marimba, and bowed cello as four distinct acoustic colors. Introduce one original welcoming theme, then pass its short phrases between flute and piano while marimba adds a few playful wooden accents and cello keeps the harmony grounded. Never let two independent lead melodies compete. Build from an intimate beginning to a modest shared high point, include a quiet reflective passage, then bring the theme back for a satisfying complete ending. Keep the scale human and the instrumental lines clear, with rounded attacks, natural room ambience, and supple dynamics. No epic orchestra, brass fanfare, martial drums, fireworks, crowd sounds, glittering bells, frantic runs, or stadium-sized finale.
```

## 9. 短音素材：一个素材页，代替每事件一首歌

Lyria 3 Clip输出固定30秒，Lyria 3.5也不能靠“0.5秒”确保短到目标。本段每次选择一个音色描述，生成带足够空隙的素材页，再裁出实际可用单音；不要求它一次输出八条命名文件。

通用可复制模板：

```text
Instrumental sound-design study made only of [INSTRUMENT]. No vocals or background accompaniment. Present isolated, soft C4, E4, G4, and A4 notes one at a time, each with a rounded attack and a natural decay, leaving several seconds of silence between notes. Then offer two very short, understated two-note gestures from the same pitch collection. Keep the recording dry and close, with consistent gentle dynamics and clearly separated events. This is a collection of quiet acoustic note gestures for a handcrafted building game, not a continuous song. No reverb wash, bass bed, percussion groove, melodic runs, ambient noise, or environmental sound effects.
```

`[INSTRUMENT]`只替换为以下六项之一：

| 素材家族 | 替换词 | 对应事件/边界 |
| --- | --- | --- |
| 木质 | `a warm low wooden marimba` | 筑屋、道路、百工、轻劳作确认 |
| 拨弦 | `a gently played nylon-string guitar` | 桥拱、过街、营造落笔；跨岸对位仍用写定乐句 |
| 琴键 | `a soft mid-register acoustic piano` | 地形/石阶、历史操作、收藏轻确认 |
| 呼吸 | `a mellow mid-register flute` | 茶座/居民稀少答句；不伪装实录鸟声 |
| 暖钟 | `a softly damped low bronze bell` | 钟塔、电车；实际钟声天然有非谐波，不按普通旋律样本保证移调 |
| 竖琴 | `a softly plucked low harp` | 真实升级/品质点景；一两音即可，不做领奖大琶音 |

生成的实际音高、事件间隔、背景静音和干湿程度逐个核对；错音/串音片段不入库。C4等只是录制意图，不能按提示元数据直接认定音高。广泛移调或音色连续性要求高时，使用已有开放采样库制作这些短音更直接。

短音只按**最终实际发声时的和弦**选音，调性和弦表要从认可音频逐段建立。C/E/G/A素材页不能在B Dorian、F♯ minor等所有曲上硬套。保存失败/阻挡等功能提示用清楚UI与独立反馈，不要求悦耳音乐掩盖原因。

## 10. 同源分轨交付与游戏接入清单

1. **先完整听评。** 保存每次实际模型/入口、原始提示、生成时间、原始文件和hash。先评旋律、配器、主奏抢耳、安静段是否成立与长听疲劳；提示专业不代表音频已好听。
2. **再建真实时间线。** 读取原始WAV或解码原MP3后测声道、采样率、前导/尾音、总帧数；建立实际速度/拍号/小节和和声标记。优先选择拍钟稳定的作品；局部修正全部同步轨一起做，不能各轨单独拉伸。
3. **只从一首认可母带分离。** 分离器若不能干净区分乐器，先交bed＋lead。保存分离工具/版本/模型和参数；原始音频不覆盖。有API原生WAV时直接使用；将MP3解码成WAV不会恢复压缩前的信息，不标成原生无损录音。
4. **统一剪辑与导出。** 所有轨共同采样率、同起点、同帧数，保留前置静音和尾音；禁止各轨自动裁头、独立归一化、独立母带。保留一个认可全混音供对照。和声性长尾不能跨不兼容和弦乱叠。
5. **组合先限制。** 第一批只批准bed、bed＋lead、bed＋lead＋一条可选轨；bed单听必须成立。完整录音分出的主奏残影会在删lead时暴露，发现后修素材，不用更大混响遮盖。
6. **别承诺数学重建。** AI分离通常含残差，有损源还带来编码影响，stem相加须与源作等响度对照；若保留residual独立说明，不能把噪声残差当新创作层。独立母带非线性处理也会改变sum。
7. **先做一处空间。** 固定01或04，选择真实围合/流动的单个连续变化。用实际分出的轨决定控制范围，不预先绑定“每一条都能完美独奏”。保留固定完整混音回退。
8. **最后接新资源容器。** 统一使用 `lyria_stem_bundle_v1`，记录资源ID/原曲身份、sample_rate/channels/frames、节拍图、和声标记、loop点/尾音、轨角色、允许组合、来源hash与缓存版本。新立体声音频不得套旧单声道bytes/2计算；旧M80/schema1、v2、v3保持原义。字段与回退按[同源分轨施工方案](Lyria35_同源分轨与Godot接入施工方案_v1.md)和[首批候选](../../数据/音乐制作/Lyria35_首批同源分轨候选_v1.json)执行。
9. **预算沿用。** 12长轨、4短槽、6总线、2自然声是全局预算，不是每首12条；活跃、旧尾音和在途资源一并计算。role与layer分开，唯一layer3领唱保持。
10. **确认接缝与撤销。** 原曲不天然循环。选择实际合适的乐句边界并连听首尾；不靠零交叉或淡入淡出宣称音乐无缝。检查静音、暂停、快速掠镜、来源删除/Undo、换城与失效任务不发布。

首批素材目录继续放 `C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/`，后续按具体曲ID/版本分批建立，不把大音频移回仓库。登记生成条款与来源，失败版移入专门废弃批次，不删除原件。

## 11. 本轮事实与剩余问题

只新增本提示词文档，没有调用音乐生成、进行分轨、试听或修改默认运行音乐，没有修改passes/verified_by。没有更改其他会话的成长、美术和存档修改。

入口审计 `python tools/audit_creation_workspace.py --check-remote`：运行约2.32秒；HEAD为9f2eaee422a628e08a696ce926043760a8d9c4f1，远端报告03fb94c73c8e57541f51bd5a69f4d180c8e41a08，状态different_or_unfetched且工作区有其他会话修改；原有PROJECT链接指向未纳入发布树的成长交付文档，导致审计失败。没有reset或上传。此记录是启动时快照，不声称是交付时的新HEAD。

剩余不确定性集中在实际生成服从度、旋律/音色质量、分轨串音与残影、实际节拍图和循环接缝；全部等待真实音频。提示词库已覆盖制作需求，不将覆盖完整等同于成品品质通过。

文档验证：`python -X utf8 tools/check_ai_harness.py`通过（约0.23秒）；`python -X utf8 tools/check_doc_links.py`扫描67份文档/383个本地链接，本文件链接已修正，剩余1项为上述已有PROJECT发布树链接错误（首次约0.37秒）。最终独立上下文Critic核查了覆盖、音乐术语、直接复制与分轨承诺；其指出的68链接与原生WAV选项均已修正。文档轮未启动游戏或重跑音频测试。
