# Lyria 首曲离线分轨与试听交付

2026-11-02。对应[同源分轨方案](Lyria35_同源分轨与Godot接入施工方案_v1.md)与[首批候选](../../数据/音乐制作/Lyria35_首批同源分轨候选_v1.json)。本轮完成一首曲目的离线制作证据和试听候选，不代表分轨品质、节拍时间线或游戏接入通过。

**后续用户纠正：输入全部为纯音乐，目标是器乐声部分离。** 本文以下保留首次工具探针与旧试听的历史证据；人声筛查不再作为制作前置，Other＝lead 的假设撤回。当前改用 HTDemucs 6S、木管模型与剩余器乐细分，19首整批自动化见[器乐分轨工具](AI歌曲分轨工具.md)。旧音频和旧页完整保留，新的逐器乐试听不依赖本页旧分组。

## 1. 原件与批次

- 原件：`D:/GODOT/Music/Pastoral Riverside Dawn Chamber Music.mp3`，3,527,641 字节。
- SHA256：`01a8ed354b835f12df7a7671a83f150ca249abfabbc2d7be757d1fe65b520e5d`；外置只读副本、分析输入与原件一致。
- 批次：`C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/`。
- 源复制在 `source/`；推理原始报告与日志在 `separation/`；双引擎原始结果在 `analysis/20261102-130707-788112/001_Pastoral Riverside Dawn Chamber Music/`。
- 交付音频：44,100 Hz、双声道、PCM16，整曲 6,470,784 帧／146.729796 秒。推理工作文件为 FLOAT。

## 2. 实际结果与采用边界

| 项目 | 实测结果 | 结论 |
| --- | --- | --- |
| Stage 1 BS-RoFormer | CUDA，117.428 秒；两轨对齐，原件未变；回加 RMS 残差 `1.3194e-10` | 技术产物有效，人声筛查不替代听评 |
| Stage 1 Vocals | RMS −73.802 dBFS，峰值 0.006732 | 保留原完整母带，不采用去人声版本冒充底床 |
| Stage 2 HTDemucs 6S | CUDA，173.682 秒（含首次下载）；六轨对齐、有限数值 | 只作为器乐分组候选 |
| 六轨回加 | 相对共同输入 RMS 残差 `0.0133053`，约为母带 RMS 的 13.5% | 不是无损拆分，必须试听回加音色 |
| 完整母带试听版 | −23.0 LUFS，true peak −11.91 dBTP | 使用共同 −5.89 dB 试听增益，不对单轨分别拉响 |
| 旧制作基线 | `resonance_dawn/v1/mix/complete_mix.wav`，独立恒定增益 +16.04 dB | 只作两首完整作品的响度对照，不宣称乐句一致 |
| 节拍估计 | librosa 129.199 BPM；Essentia 汇总 164.162 BPM，拍间隔中值约 136 BPM | 算法分歧未解决，提示词 80 BPM 不能用作运输时钟 |
| 调性估计 | Essentia 汇总 A major；提示词意图 D major | 仅保留估计，不作逐小节和弦转录 |

`Other` 暂作前景试听候选，其余 `Bass/Drums/Vocals/Guitar/Piano` 五轨合并作底床试听候选。标签不证明乐器身份；Demucs 的 Vocals RMS 为 0.01246，远高于 Stage 1 筛查轨，不能据此判断原曲存在人声。底床是否自足、前景是否干净均待用户实听。

`timeline/beat_map.json` 同时保留两套拍点和逐拍间隔估计，`approved_clock_engine=null`；`sections_harmony.json` 留空待标注。没有自动凑齐 P0—P5、逐小节和弦或循环边界。`stems/pulse.wav` 不生产。完整回退曲、底床候选和前景候选全部 `runtime_ready=false`。

HTDemucs 权重 `5c90dfd2-34c22ccb.th` 为 54,996,327 字节，SHA256 `34c22ccb381c6f9fdbf324f04e1e2fe21aaaf293f5ded163a162697ff9a02ddd`；配置及权重哈希补记在 `listening/loudness.json`。现有分轨脚本的 `model_files` 对 Demucs 只登记 YAML，因此不能单凭该字段重建权重来源。

## 3. 复现命令

以下 Stage 输出目录均要求不存在；已有产物不覆盖。

```powershell
python -X utf8 tools/separate_music.py --list-models
python -X utf8 tools/separate_music.py --input 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/source/original_source.mp3' --out-dir 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/separation/stage1_bsroformer' --model model_bs_roformer_ep_317_sdr_12.9755.ckpt --require-cuda
python -X utf8 tools/separate_music.py --input 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/separation/stage1_bsroformer/separation_input.wav' --out-dir 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/separation/stage2_instruments' --model htdemucs_6s.yaml --require-cuda
& 'C:/Users/Administrator/Desktop/mIDDLEFILE/music/.venv/Scripts/python.exe' -X utf8 'C:/Users/Administrator/Desktop/mIDDLEFILE/music/analyze.py' 'D:/GODOT/Music/Pastoral Riverside Dawn Chamber Music.mp3' --output 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/analysis'
& 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator/venv/Scripts/python.exe' -X utf8 tools/prepare_lyria_batch.py --legacy-grouped-review --candidate '数据/音乐制作/Lyria35_首批同源分轨候选_v1.json' --analysis-summary 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1/analysis/20261102-130707-788112/001_Pastoral Riverside Dawn Chamber Music/summary.json' --baseline 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/resonance_dawn/v1/mix/complete_mix.wav'
```

[prepare_lyria_batch.py](../../tools/prepare_lyria_batch.py) 校验既有原件、两阶段报告和分析 SHA，生成试听文件、候选 manifest 和待确认时间线；不重跑推理。重复执行会拒绝，已有 manifest 哈希保持不变。

## 4. 试听入口与待裁决内容

批次 `listening/listen.html` 可直接在本机浏览器打开。Codex 内预览使用[本地音频服务](../../tools/serve_lyria_review.py)，支持 WAV byte ranges，保证拖动和同位置切轨；普通 `python -m http.server` 不满足此处跳转验证。

```powershell
python -X utf8 tools/serve_lyria_review.py --batch-root 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/lyria35/ly35_river_dawn/v1'
```

打开 `http://127.0.0.1:8765/listening/listen.html`。页面包含完整母带、旧基线、底床单听、前景单听、回加、原始末 8 秒接首 8 秒、人声筛查轨。不同作品各自保存位置，同源完整曲／底床／前景／回加沿用位置，播放一条会暂停其他条。

用户需分别回答：完整曲能否采用；底床有无主奏残影或水声；前景有无毛刺；回加有无变薄；接缝是否自然。原始硬接只是诊断，不是已制作的无缝循环。听评绑定 `listening/loudness.json` 中的音频 SHA，未收到反馈前不建立运行时容器／调度器。

## 5. 验证与下一步

- 真实 CUDA 两阶段推理、音频格式/帧数/有限数值、原件哈希与试听输出无满幅样本通过；生成工具实际运行约 9 秒。
- 新脚本语法编译通过；重跑拒绝且既有 manifest 不变；7 个音频引用存在。
- 浏览器检查全部音频时长可读、无媒体加载错误；本地服务区间读取与同源切轨实测结果记入 `listening/verification.json`。
- Harness 通过。全库链接检查仍有三项既有缺失，来自其他施工删除的旧作曲候选 JSON；本轮保留现场，不宣称全库检查通过。
- 尚未完成：用户听评、节拍/和声/循环人工标注、同源分组采用裁决、Godot 接入及实窗音频验证。M84～M86 完成状态保持。

本轮 Git 前置快照在 `备份/Lyria首曲离线_20261102_130653/`。音频与模型均留外置批次，只做本地 Git 备份。
