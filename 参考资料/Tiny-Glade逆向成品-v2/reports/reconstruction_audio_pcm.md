# 全量音频样本解码

18 个 FSB5 的 4,807 样本全部完成 FMOD 原生 codec 解码，错误 0。全部 PCM 为 IEEE float32、48,000 Hz；4,700 个双声道、107 个单声道。累计 93,376,259,360 PCM bytes、243,555.5618 秒。每个样本保留完整 PCM SHA-256、名称、帧数、时长、峰值及有限值检查，nonfinite float 数为 0。

`tools/audio_decode.py` 加载游戏随附 fmod.dll，实际 runtime version 0x20223；ABI 依据随附 Cargo.lock 对应 libfmod 2.222.6 的原绑定。输出设置为 NOSOUND_NRT，无声卡播放，不启动游戏。只在 scratch Python 进程中执行 codec，不修改安装与玩家存档。

FSB subsound 共用流状态，必须对每个 subsound SeekData(0) 后再 ReadData。初次缺少 seek 的失败输出保留在 extracted；当前验证只采用加 seek 后完整银行的 records。没有把失败/空解码当作成功。

## 完整性核验

除 FMOD GetLength 的 PCM bytes 核验外，`fsb_metadata_verify.py` 独立读取 FSB 64-bit variable sample headers 和 metadata chain，并逐项比较 name、frame count、frequency、channels。4807/4807 全匹配，4807 个 PCM block 公式也匹配。

| 验证 | 结果 |
|---|---|
| bank 数/样本数 | 18 / 4807 |
| 完整 decode/GetLength/PCM alignment | 全通过 |
| 所有 PCM float 有限 | 全通过 |
| header name/frames/rate/channels | 全通过 |
| 完整 PCM 哈希 | 4807 条保留 |

证据在 `evidence/reconstruction_core/audio_decoding.json`、`fsb_pcm_verification.json`。FSB chunk bit layout 参考其解析器原作者的 [python-fsb5 模板](https://github.com/HearthSim/python-fsb5/blob/master/FSB5.bt)，本次全部原银行再次与 codec 返回核对。

## 导出与保留策略

前六个银行的 1,116 个 WAV 已落盘保留。全部声音展开超过 93 GB，因此后续银行实际完整解码、核验、哈希，但不继续写巨大 WAV。工具默认输出完整 WAV，`--hash-only` 仅保留完整 PCM 哈希；`--reuse-complete` 复用已完成银行的样本记录且验证 bank 源摘要，避免重复完整解码。

```powershell
python tools/assets_tool.py audio --root 'C:/Steam/steamapps/common/Tiny Glade' --out new-fsb --extract
python tools/audio_decode.py --dll 'C:/Steam/steamapps/common/Tiny Glade/fmod.dll' --input new-fsb --out new-pcm --hash-only
python tools/fsb_metadata_verify.py --input new-fsb --decoded new-pcm/audio_decoding.json --out new-fsb-verification.json
```

WAV 存储 native PCM，float WAV 包含 fact chunk。可移除 --hash-only 重建 WAV，输出需新目录。extracted 中的巨大重复音频不加入 Git/便携 ZIP；工具、证据与全部元数据加入。

FMOD Studio 604 event/snapshot descriptors、参数、bus/VCA、GUID 与 bank 波形关联另见 reconstruction_audio_studio.md。样本解码不重建原 Ogg 包、不验证独立 Vorbis decoder 等价、不复原完整事件混音/条件时间线执行。
