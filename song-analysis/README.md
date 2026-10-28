# 歌曲分析工作流：librosa + Essentia

Windows 本地歌曲分析工作流。首次运行 `setup.ps1` 需要联网安装依赖并下载 Essentia；安装完成后可离线分析。原始音频不会被修改。

## 使用

首次使用先在本目录运行 `powershell -NoProfile -ExecutionPolicy Bypass -File .\setup.ps1`。

1. 把歌曲或整个歌曲文件夹拖到 **analyze.cmd** 上。
2. 或把歌曲放进 **input** 文件夹，双击 **analyze.cmd**。双击也会处理工作流根目录现有的歌曲。
3. 分析完成后自动打开结果。每次运行在 **results/日期时间/** 下建立新文件夹，保留历史结果。

支持 MP3、WAV、FLAC、M4A、AAC、OGG、Opus、AIFF、WMA，以及含音轨的 MP4。目录输入会递归扫描，并跳过环境、临时目录和默认结果目录。文件夹批量处理中，单个文件失败会留下 error.log 并继续处理其他歌曲；退出码为 1 表示存在失败。

首次使用 librosa 会编译部分算法，首首歌耗时较长。后续使用会复用缓存。2 秒以下音频不进入分析。

## 每首歌的结果

| 文件 | 内容 |
| --- | --- |
| report.html | 中文报告，内嵌波形、节拍、RMS 能量、Mel 频谱、色度图，可离线打开 |
| 摘要.txt | 时长、两套 BPM、Essentia 调性与调性强度 |
| summary.json | 综合结果、版本、原始文件 SHA256、librosa 特征统计 |
| essentia.json | Essentia 完整低层、节奏、调性特征，含 MFCC、频谱、和弦统计等 |
| beats.csv | librosa 与 Essentia 的节拍时间点，单位秒 |
| timeline.csv | 随时间变化的 RMS、频谱质心、滚降、平坦度、过零率 |
| overview.png | 独立图表图片 |
| decode.log / essentia.log | 解码、Essentia 执行日志 |

每次批量运行还会生成 **batch_summary.csv / batch_summary.json**。CSV 使用带 BOM 的 UTF-8，便于 Windows Excel 读取中文。

## 命令行

在本文件夹打开 PowerShell：

```powershell
.\.venv\Scripts\python.exe .\analyze.py 'D:\歌曲\示例.mp3'
.\.venv\Scripts\python.exe .\analyze.py 'D:\歌曲文件夹' --open
.\.venv\Scripts\python.exe .\analyze.py 'D:\甲.mp3' 'D:\乙.flac' --output 'D:\分析结果'
```

可编辑 **config/essentia.yaml** 调整 Essentia 参数。默认分析整首，先由 FFmpeg 解码为 44.1 kHz 双声道 PCM，再交给 Essentia；librosa 使用 22.05 kHz 单声道。临时解码文件在分析结束后清理。

## 环境与实现

- Python 3.12.10，独立环境 **.venv**。
- librosa 1.0.0；全部依赖版本记录在 **requirements.lock.txt**。
- Essentia 官方 Windows 原生程序 **v2.1_beta5-356-g673b6a14**，Music Extractor 2.0。
- FFmpeg 7.1 随 imageio-ffmpeg 安装，不修改系统 PATH。

Essentia 官方 Python wheel 当前提供 Linux/macOS 版本，Windows Python 绑定尚未正式支持。本工作流调用官方 Windows Music Extractor，**不是可 import essentia 的 Python 环境**。这是官方提供的较早版本；完整原始输出保留其版本号。无需 WSL、Docker 或系统服务。

需要重建环境时运行：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .\setup.ps1
```

安装脚本优先使用 uv，备用方式需要 Python 3.12 与 py 启动器。它从锁定依赖恢复环境，校验 Essentia SHA256，旧版程序移至 **deprecated**。不要直接移动已安装的 .venv；移动整个工作流后需重新创建环境。

## 结果边界

- BPM、节拍、调性是算法估计。变速、节奏较弱、半速/倍速、转调会影响结果；两套 BPM 并列保留。
- 调性强度是算法分数，不是正确概率。全曲调性不是逐段调性或和弦转录。
- average_loudness 是 Essentia 动态范围描述符，不是 LUFS。
- 未安装 TensorFlow/SVM 模型；不提供风格、情绪、乐器、人声分离、歌词或曲名识别。
- 所有分析在本机完成。全长音频会载入内存，超长录音的时间和内存开销随时长增长。

## 官方来源与许可

- [librosa 安装文档](https://librosa.org/doc/latest/install.html)
- [Essentia 安装与 Windows 支持说明](https://essentia.upf.edu/installing.html)
- [Music Extractor 使用与特征文档](https://essentia.upf.edu/streaming_extractor_music.html)
- [所用 Windows 程序官方目录](https://essentia.upf.edu/documentation/extractors/essentia-extractors-v2.1_beta5-356-g673b6a14-win-i686/)
- [Essentia 源代码与许可](https://github.com/MTG/essentia)

Essentia 使用 AGPL，librosa 使用 ISC，FFmpeg 构建的许可见随附二进制信息。商业分发需按各组件许可处理。本地代码、配置和锁文件纳入 Git；下载的分析程序、歌曲、环境和结果不纳入 Git。重要弃用文件统一保留在 **deprecated**。
