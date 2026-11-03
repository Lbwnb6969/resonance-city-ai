# AI纯音乐器乐分轨

2026-11-02 用户明确：这些输入都是纯音乐，目标是自动拆分其中不同乐器声部，越符合游戏变换和叠加需要越好。使用 [python-audio-separator](https://github.com/nomadkaraoke/python-audio-separator) 的器乐模型；人声分离不再是前置工序。原有原创 MIDI、音源和候选作品保留。

## 使用

工程根目录运行，输出必须是尚不存在的新目录：

```powershell
python -X utf8 tools/separate_music.py --input 'C:/歌曲/AI歌曲.wav' --out-dir 'C:/歌曲/分轨/歌曲_v1' --require-cuda
```

入口自动调用独立 Python 环境，无需激活 venv；支持 WAV、MP3、FLAC 等 FFmpeg 可解码输入。当前默认 `htdemucs_6s.yaml`：吉他、钢琴、低音、打击、其他与模型 Vocals 槽位。纯音乐中的 Vocals 槽位按未归类残余处理，不据此认定有人声。用 `--model 17_HP-Wind_Inst-UVR.pth` 专门尝试木管／其余器乐分离。历史 BS-RoFormer 人声／伴奏模型仍可显式指定，但不用于本批器乐细分。

## 整批纯音乐自动化

[batch_instrument_stems.py](../../tools/batch_instrument_stems.py) 对目录中的 MP3 逐首执行：六轨粗分 → 同源完整曲木管分离 → 对去木管结果再做六轨分离。得到互为替代的两套候选：原曲六轨，以及木管加其余六轨。两套不交叉相加；先保留真实分离结果，再决定游戏中的伴奏、旋律和空间叠加角色。

```powershell
& 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator/venv/Scripts/python.exe' -X utf8 tools/batch_instrument_stems.py --source-dir 'D:/GODOT/Music' --out-dir 'C:/用户指定的新批次目录'
```

所有原件只读复制、逐个核 SHA；CUDA 串行执行，单曲失败留报告并继续后面的歌曲。[共同尾部补齐](../../tools/music_stem_artifacts.py)只处理已确认的 VR 木管模型不足一个 hop 的统一尾长：原始文件保留，另建 aligned 版本，对所有轨道同样补零，不裁头、不拉伸。报告明确记录补帧及原曲缺失尾段的能量。

模型只能拆出训练目标，不能凭一个文件名保证钢琴、吉他、长笛和大提琴全部纯净独立；剩余器乐继续标成未区分声部。能量很低或有串音的轨道不因文件数量增加就自动占用游戏槽位。用户已授权整批离线处理，旧“只做一首后冻结其他曲”限制由此覆盖；游戏默认接入仍独立验证。

```powershell
python -X utf8 tools/separate_music.py --env-info
python -X utf8 tools/separate_music.py --list-models
```

默认本机目录 `C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator/`：`venv/` 独立依赖、`bin/ffmpeg.exe` 解码器、`models/` 模型与配置、`installed-requirements.txt` 实装依赖快照。可用 `--runtime-root` 换目录；不将这些大型文件放入工程或发布库。

安装/恢复：

```powershell
powershell -ExecutionPolicy Bypass -File tools/install_audio_separator.ps1
```

安装脚本限定 audio-separator 0.48.0、PyTorch 2.11.0+cu128、torchvision 0.26.0+cu128、librosa 0.11.0、ONNX Runtime GPU 1.22.0、imageio-ffmpeg 0.7.0。librosa 1.0.0 默认依赖缺少上游直接引用的 audioread；ORT 1.31.1 要求 CUDA 13，与本环境 CUDA 12.8 不配套，因此固定兼容版本。BS-RoFormer 实际由 PyTorch 推理。

## 输出与采用边界

每批保留 `decoded.wav`、`separation_input.wav`、分轨 WAV、`separator.log`、`report.json`；失败另存 `failure.txt`。输入统一到 44100Hz 立体声 FLOAT，采用一个共同输入增益预留至少 6dB 峰值余量，报告记录增益。分轨处于此增益标尺，不自动分别拉响；上游仍有超满幅限峰处理，回加误差须检查，不能承诺数学无损还原。

报告记录输入/模型/配置/产物 SHA256、设备、版本、帧数、峰值、RMS、回加输入残差和原件未变。`technical_ok` 只代表本批推理产物有效且对齐；能量接近零的模型槽位不单独判失败。分离算法会有串音、残留与瞬态损伤，实际听评后再确定可用轨和角色。

制作链为 AI 完整歌曲 → 离线分轨 → 实听/组合与同步审查 → 隔离游戏接入。保留完整混音回退；不把人声/伴奏两轨自动映射成游戏多乐器，不改默认音乐、不把技术通过写成 M84 或听评通过。AI 歌曲来源/使用权、模型许可及听评记录随正式采用批次补齐，工具安装不构成发行许可结论。

## 2026-11-02真实验证

- 输入为已有本地参考 `资产/音乐/blau/blau_source.mp3`，仅作离线工具验证，未进入游戏。输入 SHA256 `426c33f54081cc56b8881fda94c83826fe2160188c836a5fd2ff99334a85cf65`。
- 产物目录 `C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/分轨验证/20261102_blau_bsroformer_v1/`，完整报告 `report.json`，原始推理记录 `separator.log`。
- 实际设备 RTX 5070 Ti Laptop / CUDA，完整处理耗时 135.974 秒（含加载/导出，不含首次安装与模型下载）；音频 148.8 秒。
- 两轨均为 FLOAT WAV、44100Hz、双声道、6562080 帧、有限数值。伴奏峰值 0.4999964，人声峰值 0.0815603，共同输入增益 0.5096950；两轨相加相对工作输入 RMS 残差 `4.1455e-10`，原件 SHA 前后相同。
- 模型 639331213 字节，SHA256 `5b84f37e8d444c8cb30c79d77f613a41c05868ff9c9ac6c7049c00aefae115aa`，与上游随包校验清单一致；配置 SHA256 `2bfdd16c656bd9519aba757cc4f8834b7ede675eb1e00ec4772d74ae1c41af7f`。
- 安装脚本完整复跑成功，Torch CUDA 和 ONNX CUDAExecutionProvider 可见，`pip check` 通过。Windows PowerShell 5 的中文路径需 UTF-8 BOM，安装脚本已采用该编码；错误编码试装环境已归档至外置 `资产/废弃/audio_separator_ps5_encoding_20261102/`，22461 文件逐个哈希前后一致，记录在本地 `备份/audio_separator_20261102/`。
- 独立上下文 Critic 发现的 PowerShell 参数数组传递与归一化表述问题已修正。当前只证明本参考音频真实推理/导出可用；没有用户 AI 歌曲、没有人声分离品质听评、没有游戏运行接入或默认变更。
- 同一输出目录重跑被拒绝（退出1），旧报告哈希不变；`python -X utf8 tools/check_doc_links.py` 检查68文档/384链接0错，`python -X utf8 tools/check_ai_harness.py` 通过，Git空白检查通过。开工审计确认本地包含未发布施工，实时远端为 `03fb94c73c8e57541f51bd5a69f4d180c8e41a08`；未推送、未宣称两端一致。

## 项目内曲库（2026-11-03）

用户要求歌曲与成果迁回项目，当前资源与制作入口见[音乐资料入口](../../数据/音乐制作/README.md)。工具环境与模型继续保持外置；新增批次和分析输出写入`数据/音乐资产`。筛选后只将有效声部加入同步试听，历史近空输出保留。


## 已完成批次的中间品归档

2026-11-03整理后，42首已完成交付的stage WAV已转入本地废弃批次，原曲、交付stems/full_mix/sums和报告不变。明细见 `验证记录/三目录整理_20261103_132235/moves.jsonl`。旧report.json/迁回清单只证明当时结果，不证明stage文件仍在；分离工具会据旧report跳过生成，因此重做必须使用新的版本输出目录，或先按清单恢复原路径。播放与当前游戏包接入继续使用保留的交付音频。
