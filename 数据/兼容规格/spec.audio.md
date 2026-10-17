# 旧运行数据 · audio

仅供 `tools/build_spec_data.py` 生成当前 Demo 参数；这些表不定义新版建造与进度。新规则取 [执行规格](../../文档/01_执行规格/README.md)。完整历史公式与测试协议在 `废弃/文档/2026-10-14_全量复核/原始文档/01_执行规格/`。



以下表仅用于复现当前代码/生成配置。保留数值不恢复旧玩法语义；新建造不受这些音乐/额度/自动生长参数限制。

## 表 A2 · 时钟、增益与响度

| 参数 | 值 / 约束 |
|---|---|
| BPM / 拍号 / 小节 / 乐句 | 120 / 4/4 / 2 s / 8小节=16 s |
| ducking 白名单 | Rhythm / Environment / UI；非 drone 目标−6 dB，300 ms回弹 |
| 总混音 | 初始完整混音校准−16 LUFS后固定公共增益；后续报告实际响度，真峰值余量3 dB；见A9用户裁定 |
| 进出淡化 | equal-power，2–4拍；试听状态比较是否去强调见 U04 |

## 表 A4 · P0时钟实现参数（本次工程轮）

| 参数 | 值 / 规则 |
|---|---|
| PCM采样率 | 22050 Hz；显式CUSTOM模式，所有时间换算使用实际生成率 |
| 生成缓冲长度 | 0.12 s；占用帧数使用启动后实际get_frames_available容量，不假定等于秒数乘采样率 |
| 边界帧 | round(单位序号 × 每单位拍数 × 60 × 采样率 / BPM)，不得累加取整后的单拍长度 |
| 可听帧 | rendered_frames − queued_frames + (time_since_last_mix − output_latency) × 采样率；限制在0…rendered_frames并保持单调 |
| 未渲染区 | rendered_frames是首个可写样本；它恰在乐句边界可落定，否则排到下个边界 |
| 下溢 | 记录AudioStreamGeneratorPlayback.get_skips；发生下溢的运行不能作为同步或真人正式验收证据 |

## 表 A26 · 河谷社区合奏与两层落定参数

| 参数 | 值 |
|---|---|
| control_fade_beats | 2 |
| pitch_glide_seconds | 0.04 |
| pad_gain | 0.075 |
| rhythm_gain | 0.032 |
| theme_gain | 0.040 |
| response_gain | 0.022 |
| bed_gain | 0.006 |
| background_gain | 0.125892541 |
| pad_group_limit | 30 |
| pad_reference_communities | 3 |
| rhythm_slot_limit | 2 |
| theme_slot_limit | 1 |
| response_slot_limit | 1 |
| theme_rotate_phrases | 4 |
| theme_rest_phrases | 7 |
| render_voice_limit | 70 |
