"""Measure recorded stereo PCM; metrics describe evidence, not aesthetic scores."""
import argparse
import json
from pathlib import Path
import wave
import numpy as np


def analyze(path):
    with wave.open(str(path)) as stream:
        if stream.getsampwidth() != 2:
            raise ValueError("Expected recorded 16-bit PCM")
        rate, channels = stream.getframerate(), stream.getnchannels()
        pcm = np.frombuffer(stream.readframes(stream.getnframes()), dtype="<i2").reshape(-1, channels)
    x = pcm.astype(np.float64) / 32768
    block = max(1, rate // 50)
    trim = x[:len(x) // block * block].reshape(-1, block, channels)
    rms = np.sqrt(np.mean(trim * trim, axis=(1, 2)))
    peaks = np.max(np.abs(trim), axis=(1, 2))
    mono = x.mean(axis=1)
    size = 4096
    chunks = mono[:len(mono) // size * size].reshape(-1, size)
    power = (np.abs(np.fft.rfft(chunks * np.hanning(size), axis=1)) ** 2).mean(axis=0)
    hz = np.fft.rfftfreq(size, 1 / rate)
    strongest = np.argsort(power)[-12:][::-1]
    zero = np.all(pcm == 0, axis=1)
    edges = np.flatnonzero(np.diff(np.r_[False, zero, False].astype(np.int8)))
    longest = int((edges[1::2] - edges[::2]).max(initial=0))
    return {"path": str(path), "rate": rate, "channels": channels, "seconds": len(x) / rate,
            "peak": float(np.abs(x).max()), "peak_dbfs": float(20 * np.log10(max(1e-12, np.abs(x).max()))),
            "rms_dbfs": float(20 * np.log10(max(1e-12, np.sqrt(np.mean(x * x))))),
            "clipped_samples": int(np.count_nonzero(np.abs(pcm.astype(np.int32)) >= 32767)),
            "longest_exact_silence_seconds": longest / rate,
            "rms_20ms_dbfs_percentiles": (20 * np.log10(np.maximum(1e-12, np.percentile(rms, [5, 25, 50, 75, 95])))).tolist(),
            "spectral_centroid_hz": float(np.dot(power, hz) / max(1e-20, power.sum())),
            "strongest_frequency_bins_hz": hz[strongest].tolist(),
            "envelope_20ms": [{"time": round(i * block / rate, 3), "peak": round(float(peaks[i]), 6),
                               "rms": round(float(rms[i]), 6)} for i in range(len(rms))],
            "interpretation": "Natural musical rests remain valid. PCM envelopes do not establish harmony or subjective listening quality."}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("waves", nargs="+", type=Path)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    reports = [analyze(path) for path in args.waves]
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(reports, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    for report in reports:
        print(json.dumps({k: v for k, v in report.items() if k != "envelope_20ms"}, ensure_ascii=False))
