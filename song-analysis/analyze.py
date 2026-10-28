"""Offline song analysis: librosa Python + official Essentia Windows extractor."""
from __future__ import annotations

import argparse
import base64
import csv
from datetime import datetime
import hashlib
import html
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import time
import traceback
import webbrowser

import imageio_ffmpeg
import librosa
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import librosa.display
import numpy as np
import soundfile as sf

ROOT = Path(__file__).resolve().parent
EXTENSIONS = {".mp3", ".wav", ".flac", ".m4a", ".aac", ".ogg", ".opus", ".aif", ".aiff", ".wma", ".mp4"}
HOP = 512


def write_json(path, data):
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2, allow_nan=False), encoding="utf-8")


def stats(a):
    a = np.asarray(a)
    return {"mean": np.mean(a, axis=-1).tolist(), "std": np.std(a, axis=-1).tolist()}


def collect(paths):
    files = []
    for value in paths:
        path = Path(value).expanduser().resolve()
        if path.is_dir():
            files.extend(sorted(p for p in path.rglob("*") if p.suffix.lower() in EXTENSIONS and p.is_file()
                                and not any(part in {".venv", "work", "results", ".git", "deprecated"} for part in p.relative_to(path).parts)))
        elif path.is_file() and path.suffix.lower() in EXTENSIONS:
            files.append(path)
        else:
            raise ValueError(f"找不到音频文件或不支持此格式：{path}")
    return list(dict.fromkeys(files))


def analyze_one(source, destination):
    started = time.perf_counter()
    destination.mkdir(parents=True, exist_ok=False)
    ffmpeg = imageio_ffmpeg.get_ffmpeg_exe()
    exe = ROOT / "tools/essentia_streaming_extractor_music.exe"
    if not exe.is_file():
        raise FileNotFoundError("缺少 Essentia 程序，请运行 setup.ps1")
    (ROOT / "work").mkdir(exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="song_", dir=ROOT / "work") as temp:
        temp = Path(temp)
        wav = temp / "audio.wav"
        # An ASCII temporary filename also works with the older native extractor.
        decoded = subprocess.run([ffmpeg, "-nostdin", "-hide_banner", "-y", "-i", str(source),
                                  "-map", "0:a:0", "-vn", "-ac", "2", "-ar", "44100",
                                  "-c:a", "pcm_s16le", str(wav)], capture_output=True, text=True,
                                 encoding="utf-8", errors="replace")
        (destination / "decode.log").write_text(decoded.stderr, encoding="utf-8")
        if decoded.returncode:
            raise RuntimeError(f"FFmpeg 解码失败，查看 {destination / 'decode.log'}")
        info = sf.info(wav)
        if info.duration < 2:
            raise ValueError("音频需至少 2 秒，才能进行本工作流的节奏与调性分析。")
        print("  Essentia：节奏、调性、频谱特征…", flush=True)
        profile = temp / "profile.yaml"
        profile.write_bytes((ROOT / "config/essentia.yaml").read_bytes())
        extracted = subprocess.run([str(exe), "audio.wav", "essentia.json", "profile.yaml"], cwd=temp,
                                   capture_output=True, text=True, encoding="utf-8", errors="replace")
        (destination / "essentia.log").write_text(extracted.stdout + extracted.stderr, encoding="utf-8")
        if extracted.returncode or not (temp / "essentia.json").is_file():
            raise RuntimeError(f"Essentia 分析失败，查看 {destination / 'essentia.log'}")
        raw = json.loads((temp / "essentia.json").read_text(encoding="utf-8"))
        write_json(destination / "essentia.json", raw)
        print("  librosa：节拍、色度、MFCC 与图表…", flush=True)
        y, sr = librosa.load(wav, sr=22050, mono=True)
        magnitude = np.abs(librosa.stft(y, n_fft=2048, hop_length=HOP))
        rms = librosa.feature.rms(S=magnitude)[0]
        onset = librosa.onset.onset_strength(y=y, sr=sr, hop_length=HOP)
        silent = float(np.max(np.abs(y))) < 1e-5
        if silent:
            tempo, beats, onsets = 0.0, np.array([]), np.array([])
            chroma = np.zeros((12, magnitude.shape[1]))
        else:
            tempo, beats = librosa.beat.beat_track(onset_envelope=onset, sr=sr, hop_length=HOP, units="time")
            onsets = librosa.onset.onset_detect(onset_envelope=onset, sr=sr, hop_length=HOP, units="time")
            chroma = librosa.feature.chroma_stft(S=magnitude ** 2, sr=sr, hop_length=HOP)
        tempo = float(np.asarray(tempo).reshape(-1)[0])
        mel = librosa.feature.melspectrogram(S=magnitude ** 2, sr=sr, n_mels=128)
        mfcc = librosa.feature.mfcc(S=librosa.power_to_db(mel), n_mfcc=13)
        centroid = librosa.feature.spectral_centroid(S=magnitude, sr=sr)
        rolloff = librosa.feature.spectral_rolloff(S=magnitude, sr=sr)
        flatness = librosa.feature.spectral_flatness(S=magnitude)
        zcr = librosa.feature.zero_crossing_rate(y)
        times = librosa.frames_to_time(np.arange(len(rms)), sr=sr, hop_length=HOP)
        rhythm, tonal, low = raw.get("rhythm", {}), raw.get("tonal", {}), raw.get("lowlevel", {})
        key = tonal.get("key_edma", {})
        key_name = key.get("key", tonal.get("key_key"))
        key_scale = key.get("scale", tonal.get("key_scale"))
        key_strength = key.get("strength", tonal.get("key_strength"))
        source_hash = hashlib.sha256()
        with source.open("rb") as stream:
            for block in iter(lambda: stream.read(1024 * 1024), b""):
                source_hash.update(block)
        summary = {
            "source": str(source), "source_sha256": source_hash.hexdigest(),
            "duration_seconds": info.duration, "analysis_sample_rate_librosa": sr,
            "analysis_sample_rate_essentia": 44100, "silent": silent,
            "versions": {"python": sys.version.split()[0], "librosa": librosa.__version__,
                         "essentia": raw.get("metadata", {}).get("version", {}),
                         "ffmpeg": imageio_ffmpeg.get_ffmpeg_version()},
            "librosa": {"bpm": tempo, "beats_seconds": np.asarray(beats).tolist(),
                        "onsets_seconds": np.asarray(onsets).tolist(), "rms": stats(rms),
                        "spectral_centroid_hz": stats(centroid), "spectral_rolloff_hz": stats(rolloff),
                        "spectral_flatness": stats(flatness), "zero_crossing_rate": stats(zcr),
                        "mfcc_13": stats(mfcc), "chroma_12": stats(chroma)},
            "essentia": {"bpm": rhythm.get("bpm"), "beats_count": rhythm.get("beats_count"),
                         "onset_rate": rhythm.get("onset_rate"), "danceability": rhythm.get("danceability"),
                         "key": key_name, "scale": key_scale, "key_strength": key_strength,
                         "tuning_frequency_hz": tonal.get("tuning_frequency"),
                         "average_loudness": low.get("average_loudness"),
                         "dynamic_complexity": low.get("dynamic_complexity")},
            "notes": ["BPM 和调性为算法估计；半速/倍速及转调会影响结果。",
                      "average_loudness 是 Essentia 动态范围描述符，不是 LUFS。",
                      "未安装深度学习或 SVM 模型；不输出风格、情绪、乐器或歌词识别。"],
        }
        if silent:
            summary["essentia"].update(key=None, scale=None, key_strength=None, bpm=None)
            summary["notes"].append("输入为静音，节奏和调性不适用。")
        with (destination / "beats.csv").open("w", newline="", encoding="utf-8-sig") as f:
            writer = csv.writer(f)
            writer.writerow(["engine", "beat_index", "seconds"])
            for engine, positions in [("librosa", beats), ("essentia", rhythm.get("beats_position", []))]:
                writer.writerows((engine, i + 1, float(t)) for i, t in enumerate(positions))
        with (destination / "timeline.csv").open("w", newline="", encoding="utf-8-sig") as f:
            writer = csv.writer(f)
            writer.writerow(["seconds", "rms", "centroid_hz", "rolloff_hz", "spectral_flatness", "zero_crossing_rate"])
            writer.writerows(zip(times, rms, centroid[0], rolloff[0], flatness[0], zcr[0]))
        plt.rcParams.update({"font.family": "sans-serif", "font.sans-serif": ["Microsoft YaHei", "DejaVu Sans"],
                             "axes.unicode_minus": False})
        fig, axes = plt.subplots(4, 1, figsize=(14, 12), layout="constrained")
        stride = max(1, len(y) // 150000)
        axes[0].plot(np.arange(0, len(y), stride) / sr, y[::stride], linewidth=.45, color="#4263eb")
        axes[0].set(title="波形与节拍（librosa）", ylabel="振幅")
        for beat in beats[:2500]:
            axes[0].axvline(beat, color="#f59f00", alpha=.18, linewidth=.5)
        axes[1].plot(times, rms, color="#0ca678", linewidth=.8)
        axes[1].set(title="RMS 能量变化", ylabel="RMS")
        spec = librosa.display.specshow(librosa.power_to_db(mel, ref=np.max), sr=sr, hop_length=HOP,
                                       x_axis="time", y_axis="mel", ax=axes[2], cmap="magma")
        axes[2].set_title("Mel 频谱")
        fig.colorbar(spec, ax=axes[2], format="%+2.0f dB")
        librosa.display.specshow(chroma, sr=sr, hop_length=HOP, x_axis="time", y_axis="chroma", ax=axes[3], cmap="viridis")
        axes[3].set_title("十二音级色度")
        fig.suptitle(source.name, fontsize=15)
        fig.savefig(destination / "overview.png", dpi=130)
        plt.close(fig)
        summary["elapsed_seconds"] = round(time.perf_counter() - started, 2)
        write_json(destination / "summary.json", summary)
        e = summary["essentia"]
        display_key = f"{e['key']} {e['scale']}" if e["key"] else "不适用"
        text = (f"歌曲分析：{source.name}\n时长：{info.duration:.2f} 秒\n"
                f"librosa BPM：{tempo:.2f}\nEssentia BPM：{e['bpm']}\n"
                f"Essentia 调性：{display_key}\n调性强度：{e['key_strength']}\n"
                f"分析耗时：{summary['elapsed_seconds']} 秒\n\n" + "\n".join(summary["notes"]))
        (destination / "摘要.txt").write_text(text, encoding="utf-8-sig")
        image = base64.b64encode((destination / "overview.png").read_bytes()).decode("ascii")
        report = ("<!doctype html><html lang='zh-CN'><meta charset='utf-8'>"
                  f"<title>{html.escape(source.name)} · 歌曲分析</title>"
                  "<style>body{font:16px/1.7 'Microsoft YaHei',sans-serif;max-width:1150px;margin:36px auto;padding:0 20px;background:#f4f6fa;color:#182230}"
                  "pre{white-space:pre-wrap;background:white;padding:24px;border-radius:12px}img{width:100%;border-radius:12px}a{color:#4263eb}</style>"
                  f"<h1>{html.escape(source.name)}</h1><pre>{html.escape(text)}</pre>"
                  f"<img alt='波形、能量、频谱与色度' src='data:image/png;base64,{image}'>"
                  "<p><a href='summary.json'>综合 JSON</a> · <a href='essentia.json'>Essentia 完整特征</a> · "
                  "<a href='beats.csv'>节拍 CSV</a> · <a href='timeline.csv'>特征时间线 CSV</a></p></html>")
        (destination / "report.html").write_text(report, encoding="utf-8")
    return summary


def main():
    parser = argparse.ArgumentParser(description="librosa + Essentia 离线歌曲分析（文件 / 文件夹批量）")
    parser.add_argument("inputs", nargs="*", help="歌曲文件或文件夹；默认扫描 input 和工作流根目录的歌曲")
    parser.add_argument("--output", type=Path, default=ROOT / "results")
    parser.add_argument("--open", action="store_true", help="完成后打开报告")
    args = parser.parse_args()
    if args.inputs:
        files = collect(args.inputs)
    else:
        files = collect([ROOT / "input"]) if (ROOT / "input").is_dir() else []
        files += sorted(p for p in ROOT.iterdir() if p.is_file() and p.suffix.lower() in EXTENSIONS)
        files = list(dict.fromkeys(files))
    if not files:
        print("未找到歌曲。请放入 input 文件夹，或把歌曲/文件夹拖到 analyze.cmd。")
        return 1
    run = args.output.resolve() / datetime.now().strftime("%Y%m%d-%H%M%S-%f")
    run.mkdir(parents=True)
    rows, failed = [], []
    for i, source in enumerate(files, 1):
        print(f"[{i}/{len(files)}] {source.name}", flush=True)
        folder = run / f"{i:03d}_{source.stem[:65]}"
        try:
            result = analyze_one(source, folder)
            rows.append({"source": str(source), "status": "ok", "duration_seconds": result["duration_seconds"],
                         "librosa_bpm": result["librosa"]["bpm"], "essentia_bpm": result["essentia"]["bpm"],
                         "key": result["essentia"]["key"], "scale": result["essentia"]["scale"], "report": str(folder / "report.html")})
            print(f"  完成：{folder / 'report.html'}", flush=True)
        except Exception as error:
            folder.mkdir(parents=True, exist_ok=True)
            (folder / "error.log").write_text(traceback.format_exc(), encoding="utf-8")
            failed.append(str(source))
            rows.append({"source": str(source), "status": "failed", "error": str(error)})
            print(f"  失败：{error}", file=sys.stderr, flush=True)
    fields = ["source", "status", "duration_seconds", "librosa_bpm", "essentia_bpm", "key", "scale", "report", "error"]
    with (run / "batch_summary.csv").open("w", newline="", encoding="utf-8-sig") as stream:
        writer = csv.DictWriter(stream, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)
    write_json(run / "batch_summary.json", rows)
    print(f"完成 {len(rows) - len(failed)} 首，失败 {len(failed)} 首。结果：{run}")
    if args.open:
        target = Path(rows[0]["report"]) if len(rows) == 1 and not failed else run
        webbrowser.open(target.as_uri())
    return 1 if failed else 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (ValueError, FileNotFoundError) as error:
        print(error, file=sys.stderr)
        raise SystemExit(1)
