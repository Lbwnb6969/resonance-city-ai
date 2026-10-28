---
name: song-analysis
description: 用本机已安装的 librosa 与 Essentia 联合分析歌曲、比较音频、解读 BPM、调性、音色和能量结构；适用于本地音频分析，不用于歌词、曲名识别或音乐生成。
---

# 本地歌曲联合分析

工作流根目录是包含 `analyze.py` 和 `setup.ps1` 的目录；根据仓库实际位置确定。

- Python：`.venv/Scripts/python.exe`，已安装 librosa。
- Essentia：`tools/essentia_streaming_extractor_music.exe`，官方 Windows Music Extractor，版本 `v2.1_beta5-356-g673b6a14`。它是原生可执行文件，不是 `import essentia` 模块。
- 统一入口：`analyze.py`，会调用 FFmpeg、Essentia 和 librosa，无须 AI 另写两套分析程序。

## 调用

从任意位置用 PowerShell 调用；同时传多个文件或一个文件夹即为批量分析：

```powershell
$musicRoot = '<工作流所在目录>'
$env:PYTHONUTF8 = '1'
& "$musicRoot\.venv\Scripts\python.exe" "$musicRoot\analyze.py" 'D:\歌曲\示例.mp3'
```

用户说“库里的歌”时，先查根目录和 `input`；实际文件名、位置以目录为准。新分析默认保存到 `results/时间戳/`，不修改歌曲。AI 调用不加 `--open`，除非用户要求打开报告。已有结果可复用：核对 `summary.json` 的 source 路径和 source_sha256 与当前源文件一致，再确认分析成功。缺少环境时先读根目录 `README.md`，通过 `setup.ps1` 恢复。

## 读取结果并形成回答

- `summary.json`：两套 BPM、时长、Essentia 调性及分数、librosa RMS、频谱和色度统计。
- `essentia.json`：完整结果。比较 `tonal.key_edma`、`key_krumhansl`、`key_temperley` 的 key/scale/strength；`rhythm` 含节拍位置、BPM 直方图峰值、onset_rate。不同调性配置来自同一个引擎，不称作独立验证。
- `timeline.csv`：seconds、rms、centroid_hz、rolloff_hz、spectral_flatness、zero_crossing_rate。按所需时间窗聚合，找能量变化和音色变化；边界用“约”，不要凭能量图把段落命名成主歌/副歌。
- `beats.csv`：两套节拍时间。BPM 分歧明显时查看相邻拍间隔、直方图峰及半速/倍速关系。
- `overview.png`：查看图像，复核段落和频谱判断。
- `batch_summary.json`：确认每首 status；失败时读对应 error.log、decode.log 或 essentia.log。

回答应给音乐层面的解释和证据，而不只罗列特征。多首歌曲用小表并列 BPM/调性/时长，再说明节奏速度、音色明暗和能量结构差异。区分测量、算法估计和解释；没有播放或听觉分析时，不声称“听到”某种乐器、人声或情绪。未安装风格/情绪模型，不从文件名推断内容。

频谱质心可支撑相对亮度判断；RMS 是信号能量，不是 LUFS 或主观响度；average_loudness 不是 LUFS；调性 strength 不是正确概率；chords_key 是和弦统计主导标签，不自动等同全曲主调；直方图不能还原和弦先后。并列保留两套 BPM，勿用小数制造人工校准的确定性。细节见根目录 `README.md`。
