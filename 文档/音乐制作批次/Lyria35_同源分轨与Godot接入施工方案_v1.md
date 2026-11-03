# 《共鸣之城》Lyria 3.5 同源分轨与 Godot 接入施工方案

日期：2026-11-02 · 状态：设计规范与候选契约，`runtime_ready=false`

本方案把新音乐链路限定为：**Lyria 3.5 完整曲 → 可复现离线分轨与时间线测绘 → 同源 stem 在 Godot 中变换/叠加**。本文件保留候选规范；用户最新要求已授权首曲显式隔离样板，实际交付见[有效分轨与空间叠加](Lyria35_有效分轨与空间叠加_20261102.md)。正式默认仍待听评。

## 1. 物理边界与兼容

- Lyria 不提供可依赖的原生多 stem；提示词中的 BPM、调性、拍号和时长都是意图，必须以母带测量为准。
- 生成曲不保证无缝循环。loop 点必须由实际乐句、余韵和和声边界试听确认。
- 旧 MIDI、开放音源、`schema1/M80`、内部 `v2/v3`、预编译声部库和 `resonance_dawn/v1` 全部保留。新资源使用独立 `lyria_stem_bundle_v1`，不得套旧单声道 PCM 或旧 `bytes/2` 假设。
- 所有未生成、未登记、未试听或未获授权的资源都保持 `runtime_ready=false`。

## 2. 首批范围

用户最新要求覆盖离线制作规模：`D:/GODOT/Music` 内纯音乐全部自动分轨，按乐器及游戏叠加用途细分；不把人工听评作为批量离线制作前置。游戏隔离接入仍从一曲、一空间、一回退开始：

- 曲目：`ly35_river_dawn/v1`，来源为 `D:/GODOT/Music/Pastoral Riverside Dawn Chamber Music.mp3`。
- 空间变化：真实闭合院落围合度控制已有同源 stem 的支撑暖度；不以经营、等级或接路解锁基础音乐。
- 回退：优先 `full_mix`，bundle 缺失或校验失败时回到旧预编译声部库/已验证 v3 基线。
- 其余外部 MP3 自动制作候选；分离可用性与游戏上线分别验证。

## 3. 外置批次结构

批次根目录：`C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/<source_id>/<version>/`。

```text
brief.md
bundle_manifest.json
source/original_source.mp3
source/generation_record.json
separation/decoded.wav
separation/separation_input.wav
separation/stage1_bsroformer/report.json
separation/stage2_instruments/report.json
stems/full_mix.wav
stems/bed.wav
stems/lead.wav
stems/pulse.wav                 # 可选
timeline/beat_map.json
timeline/sections_harmony.json
listening/loudness.json
listening/listen.html
```

原件只读复制并核对 SHA256。所有交付 stem 必须共同使用 44.1kHz、双声道、相同起点、相同帧数和共同输入增益；禁止单轨裁头、拉伸、峰值归一化或独立母带处理。

## 4. 分轨能力与拒收

输入按用户确认的纯音乐处理，不设人声筛查前置。`tools/separate_music.py` 默认 HTDemucs 6S，结合 `17_HP-Wind_Inst-UVR.pth` 专门提取木管，并对去木管后的器乐继续六轨细分。保留原曲六轨与“木管＋剩余六轨”两套替代候选，先试听各独立声部再分配 `lead/bed/pulse`；不能直接把 Other 当主旋律。模型 Vocals 槽位是未归类残余，不据此判断原曲有人声。工具与命令见[器乐分轨工具](AI歌曲分轨工具.md)。

首批按以下阶梯交付：

1. `full_mix`：始终保留的完整曲回退。
2. `bed + lead`：首批目标；bed 单听必须自足，lead 不得有明显残影、金属毛刺或起音损伤。
3. `bed + lead + pulse`：只有第三轨通过单听、串音、残差和组合试听后才允许。

任一条件失败即降级：主奏残影、频谱空洞、水声伪影、相位抵消、帧数不一致、独立增益标尺、削波或不自然起音。分离器不合格时退回 `full_mix`；必要时才用同一 beat map 的开放音源重制局部伴奏，并重新绑定来源与授权。

## 5. 时间线与 manifest

`beat_map.json` 是唯一运输时钟，记录实际 beat 时间点、速度曲线、前导和尾音；`sections_harmony.json` 记录实际 P0—P5 区间、每小节和弦、lead 空位、loop/transition 窗口。名义 80 BPM、D 大调、4/4 只能作为生成意图。

候选 manifest 必须包含：`schema`、`source_id/version`、原件路径/字节数/SHA256、生成入口和完整提示词、分轨模型与报告、sample rate/channels/frames、共同增益、beat map 与和声文件哈希、stem role/layer、允许组合、空间包络、缓存版本、回退策略、听评状态和 `runtime_ready`。

唯一 `layer=3` 前景领唱；role 与 layer 分开。预算仍为 12 长轨、4 短槽、6 总线、2 自然声，按全局活跃资源计算。

## 6. 离线工具与后续 B 阶段

1. 离线准备现在可执行：用既有 `tools/separate_music.py` 解码/分轨，复用 librosa/Essentia 分析，再由 `tools/prepare_lyria_batch.py` 校验原件/报告哈希、生成待确认节拍图、试听页和候选 manifest。该工具不自动填写和声、段落和循环，不以算法拍点冒充人工确认时钟。
2. `scripts/audio/city_creation_lyria_bundle.gd`：独立只读 manifest 校验器，与旧 score 容器隔离。
3. `scripts/audio/city_creation_lyria_director.gd`：借用现有长轨槽位，同源 stem 共用运输时钟，失败即时回退。
4. CPU 与 OpenGL/WASAPI 测试：帧对齐、预算、锁相、静音、暂停、换城、Undo、失效后台任务、循环接缝和零削波。

用户2026-11-02最新要求允许先完成显式隔离空间叠加样板，技术验证与人工听评分开；第2—4项正式默认采用仍须母带、组合与循环听评。首曲现用独立 `lyria_spatial_preview_v1` 容器，不冒充完整 `lyria_stem_bundle_v1` 时间线契约。离线结果与剩余门禁见[首曲交付记录](Lyria35_首曲离线交付记录_v1.md)。

## 7. 人工听评门禁

用户必须绑定实际音频 SHA256，对以下五组作同位置等响度切换并记录原话：完整母带与旧基线、bed 单听、lead 单听、bed+lead 与 full_mix、loop 末 8 秒到首 8 秒。技术报告不替代听评；未通过时保留 full_mix 并归档失败批次，不删除原件。

## 8. 首批命令顺序

```text
python -X utf8 tools/check_doc_links.py
python -X utf8 tools/check_ai_harness.py
python -X utf8 tools/separate_music.py --list-models
```

只读复制 MP3 到外置新批次，直接运行器乐分离与必要的定向细分；不再运行 BS-RoFormer 人声阶段。历史原件、分轨输出和报告保留，输出目录不覆盖。
