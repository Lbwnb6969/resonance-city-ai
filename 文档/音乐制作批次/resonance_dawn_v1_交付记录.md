# Resonance Dawn v1 制作批次

本批是 M84 首曲品质子步的真实制作产物，完整作品仍待用户实听，未接入默认运行池。

- 外置批次：`C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/resonance_dawn/v1/`
- 可编辑来源：`source/compose_resonance_dawn.py`、`source/mix_resonance_dawn.py`、三份 MIDI
- 形式：48 小节、4/4、80 BPM、D 大调；呈示 1–12、回应 13–24、安静发展 25–36、回归收束 37–48
- 配器：Salamander Grand Piano 主奏、VCSL Folk Harp 脉冲、VSCO-2-CE CelloEnsSusVib 持续底层
- 完整混音：`mix/complete_mix.wav`，SHA256 `e18ac85229b5b0391842ae55296fe230e0941890c7345abba65ff016015f8b83`
- 等响度对照：`mix/piano_control_level_matched.wav`，SHA256 `56e292b020f9d351243a345941b8d25b3263d753034ea833322942140c443403`
- 格式测量：48000 Hz、双声道、PCM16、7064576 帧、147.178667 秒；混音峰值 0.056721，满幅样本 0
- 各声部渲染：均由 `tools/render_open_sample_midi.py` 调用 sfizz 1.2.3 完成，报告与输入/输出哈希见批次 `evidence/` 与 `asset_manifest.json`
- 许可：SalamanderGrandPiano CC-BY-3.0；VCSL CC0-1.0；VSCO-2-CE CC0-1.0；署名与源 commit 见工程[开放音源目录](../../数据/音乐制作/开放音源目录.json)

## 状态

技术状态为可播。没有用户实际听评，故作品状态保持“待评”，不写入默认音乐、不制作分轨空间对照。听评时需绑定完整混音 SHA、完整曲和钢琴对照的具体片段，记录是否愿意继续听、主奏是否抢耳、安静中段是否成立、尾声是否疲劳。

## 可复现命令

```powershell
$batch = 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/制作批次/resonance_dawn/v1'
python $batch/source/compose_resonance_dawn.py
$bank = 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/音乐/开放音源_20261101'
$renderer = "$bank/制作工具/sfizz-1.2.3-win64/bin/Release/sfizz_render.exe"
python -X utf8 tools/render_open_sample_midi.py --renderer $renderer --sfz "$bank/音源/SalamanderGrandPiano/Salamander Grand Piano V3.sfz" --midi "$batch/source/piano.mid" --out-dir "$batch/renders/piano"
python -X utf8 tools/render_open_sample_midi.py --renderer $renderer --sfz "$bank/音源/VCSL/Chordophones/Composite Chordophones/Folk Harp.sfz" --midi "$batch/source/harp.mid" --out-dir "$batch/renders/harp"
python -X utf8 tools/render_open_sample_midi.py --renderer $renderer --sfz "$bank/音源/VSCO-2-CE/CelloEnsSusVib.sfz" --midi "$batch/source/cello.mid" --out-dir "$batch/renders/cello"
python $batch/source/mix_resonance_dawn.py
```

剩余问题是实际听感和长听疲劳；这两项不能由波形、哈希或技术渲染结果代替。
