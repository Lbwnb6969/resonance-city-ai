"""Create one traced Foundation river loop; source files are read-only.

Requires the existing NumPy installation. No decoder, Godot or player is run.
All outputs are exclusive creations, and an existing target aborts the task.
"""
from pathlib import Path
import hashlib
import io
import json
import wave
import numpy as np

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-audio-recovered"
OUT = ROOT / "资源/自然参考/环境声"
EVENT_NAME = "play_sfx_ambience_riverLoop"
EVENT_ID = 89158959
MEDIA_ID = 386937418
INPUT_SHA = "40ad8d6f3da439566a2e1aa1b1a8b3c7a6a20da7ee9c4fa1c89b6d463e31ba1d"
RATE = 22050
OFFSET = 4.0
DURATION = 12.0
CROSSFADE = 0.5
PEAK = 0.85


def sha(data):
    return hashlib.sha256(data).hexdigest()


def read_json(name):
    return json.loads((SOURCE / name).read_text(encoding="utf-8"))


def main():
    for name in ["溪流.wav", "README.md", "提取记录.json"]:
        if (OUT / name).exists():
            raise FileExistsError(f"Refusing to overwrite {OUT / name}")
    names = read_json("event-names-from-shipped-strings.json")
    # The shipped-string evidence is a structured object containing named rows.
    rows = names if isinstance(names, list) else next(v for v in names.values() if isinstance(v, list))
    named = next(r for r in rows if r.get("name") == EVENT_NAME)
    assert named["computed_wwise_id"] == EVENT_ID
    paths = read_json("event-action-sound-media.json")
    event = next(r for r in paths["events"] if r["event_id"] == EVENT_ID)
    chain = next(r for r in paths["paths"] if r["event_id"] == EVENT_ID and r.get("media_id") == MEDIA_ID)
    assert chain["object_path"] == ["audio/core.bnk:89158959", "audio/core.bnk:356780460", "audio/core.bnk:43288962"]
    assert event["reachable_media_paths"] == ["original/audio/core/386937418.wem"]
    original = next(r for r in read_json("original-media-manifest.json")["rows"] if r["id"] == MEDIA_ID)
    decoded = next(r for r in read_json("decoded-media-manifest.json")["rows"] if r["decoded_path"] == "decoded/audio/core/386937418.wav")
    path = SOURCE / decoded["decoded_path"]
    raw = path.read_bytes()
    assert sha(raw) == decoded["decoded_sha256"] == INPUT_SHA
    wem = SOURCE / original["path"]
    assert sha(wem.read_bytes()) == original["sha256"]
    with wave.open(io.BytesIO(raw), "rb") as reader:
        assert (reader.getframerate(), reader.getnchannels(), reader.getsampwidth()) == (48000, 2, 2)
        frames = reader.getnframes()
        pcm = np.frombuffer(reader.readframes(frames), dtype="<i2").reshape(-1, 2).astype(np.float64) / 32768.0
    # Downmix by arithmetic average; an FIR low-pass precedes downsampling.
    mono = pcm.mean(axis=1)
    source_dc = float(mono.mean())
    mono -= source_dc
    taps = np.arange(61, dtype=np.float64) - 30.0
    kernel = 2.0 * 9000.0 / 48000.0 * np.sinc(2.0 * 9000.0 / 48000.0 * taps) * np.kaiser(61, 8.0)
    kernel /= kernel.sum()
    begin = round(OFFSET * 48000)
    count = round((DURATION + CROSSFADE) * 48000)
    filtered = np.convolve(mono[begin-30:begin+count+30], kernel, mode="valid")
    target_frames = round((DURATION + CROSSFADE) * RATE)
    segment = np.interp(np.arange(target_frames, dtype=np.float64) * 48000.0 / RATE, np.arange(filtered.size), filtered)
    fade = round(CROSSFADE * RATE)
    weight = (1.0 - np.cos(np.linspace(0.0, np.pi, fade))) * 0.5
    join = segment[-fade:] * (1.0 - weight) + segment[:fade] * weight
    loop = np.concatenate([segment[fade:-fade], join])
    loop_dc = float(loop.mean())
    loop -= loop_dc
    source_peak = float(np.max(np.abs(loop)))
    loop *= PEAK / source_peak
    output_pcm = np.rint(loop * 32767.0).clip(-32768, 32767).astype("<i2")
    assert output_pcm.size == round(DURATION * RATE)
    stream = io.BytesIO()
    with wave.open(stream, "wb") as writer:
        writer.setnchannels(1); writer.setsampwidth(2); writer.setframerate(RATE)
        writer.writeframes(output_pcm.tobytes())
    output = stream.getvalue()
    with wave.open(io.BytesIO(output), "rb") as reader:
        assert (reader.getframerate(), reader.getnchannels(), reader.getsampwidth(), reader.getnframes()) == (RATE, 1, 2, DURATION * RATE)
        assert reader.readframes(reader.getnframes()) == output_pcm.tobytes()
    samples = output_pcm.astype(np.float64) / 32768.0
    report = {
        "event_name": EVENT_NAME, "event_id": EVENT_ID, "shipped_name_evidence": named,
        "event_to_media_path": chain, "non_play_actions": event["non_play_actions"],
        "original_media": original, "decoded_source": str(path), "decoded_sha256": INPUT_SHA,
        "original_duration_seconds": frames / 48000.0, "original_channels": 2, "original_sample_rate": 48000,
        "processing": {"slice_offset_seconds": OFFSET, "slice_duration_seconds": DURATION + CROSSFADE,
                       "downmix": "arithmetic stereo mean", "source_dc_removed": source_dc,
                       "resample": "61-tap Kaiser beta8 FIR lowpass 9000Hz at48k then linear interpolation to22050",
                       "crossfade_seconds": CROSSFADE, "crossfade": "tail/head raised-cosine weights summing to1; retain middle then blended join",
                       "output_dc_removed_before_gain": loop_dc, "pre_normalization_peak": source_peak, "target_peak": PEAK},
        "output": "res://资源/自然参考/环境声/溪流.wav", "output_sha256": sha(output), "bytes": len(output),
        "pcm_sha256": sha(output_pcm.tobytes()), "format": "PCM16 mono", "sample_rate": RATE,
        "frames": int(output_pcm.size), "duration_seconds": DURATION,
        "peak": float(np.max(np.abs(samples))), "rms": float(np.sqrt(np.mean(samples*samples))),
        "dc": float(samples.mean()), "seam_sample_jump": float(abs(samples[0]-samples[-1])),
        "source_unchanged": sha(path.read_bytes()) == INPUT_SHA and sha(wem.read_bytes()) == original["sha256"],
        "wav_readback_equal": True, "godot_run": False, "listened": False,
    }
    assert report["source_unchanged"] and report["peak"] <= 1.0
    text = """# 溪流环境声来源

Foundation原事件 `play_sfx_ambience_riverLoop`，Wwise ID89158959；原发布字符串在 `asset/Map Generation/MapGenerator.scene` 被引用，事件名证据为 `event-names-from-shipped-strings.json`。静态HIRC链 `core.bnk Event89158959 → PlayAction356780460 → Sound43288962 → media386937418`；同事件的Action309464735是Seek，不当作第二条播放源。精确链、原媒体/解码路径、包偏移与所有SHA见同目录提取记录。

原件来自本地 `参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-audio-recovered/`，原WEM由core.pck偏移216480439抽出，988009字节，标准已恢复WAV为48kHz stereo PCM16、36.1401666667秒。本轮只读这一已解码源，不重新逆向或解码整库，也未运行原游戏。

执行 `python tools/extract_creation_ambience.py` 独占创建，不覆盖任何现存输出。取原4秒起12.5秒，双声道均值转mono，去DC，61tap Kaiser(beta8)9kHz低通后重采样22050Hz；首尾0.5秒升余弦交叠，得到12秒循环，再去DC并归一峰值至0.85。输出 `溪流.wav` 为PCM16 mono22050、264600帧。WAV未写smpl循环标记，运行层设置循环播放；增益由本作环境声节点控制，资源峰值不是运行时混音目标。

这是Foundation商业原音频的本地研究适配，非CC0，不是本作原创录音。鸟/风/虫声由本作另行合成。

Python核验事件链、源SHA、PCM帧数/格式、WAV回读、输出峰值及接缝差；详见 `提取记录.json`。没有调用Godot或播放设备，听感、循环可闻性、镜头距离与主音乐融合由后续真实播放验证。
"""
    OUT.mkdir(parents=True, exist_ok=True)
    files = {"溪流.wav": output, "README.md": text.encode("utf-8"),
             "提取记录.json": (json.dumps(report, ensure_ascii=False, indent=2) + "\n").encode("utf-8")}
    for name, data in files.items():
        with (OUT / name).open("xb") as file: file.write(data)
        assert (OUT / name).read_bytes() == data
    print(json.dumps({k: report[k] for k in ["output", "output_sha256", "sample_rate", "frames", "duration_seconds", "peak", "rms", "dc", "seam_sample_jump", "source_unchanged", "wav_readback_equal"]}, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
