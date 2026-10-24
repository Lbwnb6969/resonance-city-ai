"""Align the 20 ms recorded envelope with observed native variation adoptions."""
import argparse
import json
import math
import wave as wave_io
from pathlib import Path
import numpy as np
from analyze_creation_master import analyze


def correlate(wave, events):
    pcm = analyze(wave)
    rows = json.loads(events.read_text(encoding="utf-8"))
    with wave_io.open(str(wave)) as stream:
        rate = stream.getframerate()
        x = np.frombuffer(stream.readframes(stream.getnframes()), dtype="<i2").reshape(-1, stream.getnchannels()).astype(np.float64) / 32768
    window = rate // 50
    sums = np.r_[0., np.cumsum(np.mean(x*x, axis=1))]
    rolling = np.sqrt(np.maximum(0., (sums[window:] - sums[:-window]) / window))
    near = []
    for swap in rows["swaps"]:
        at = swap["recording_time"]
        windows = [w for w in pcm["envelope_20ms"] if abs(w["time"] - at) <= .16]
        lo = max(0, int((at-.16)*rate))
        hi = min(len(rolling), int((at+.16)*rate)+1)
        local = rolling[lo:hi]
        audible = math.isfinite(swap["db"]) and swap["db"] > -60
        near.append({**swap, "db": swap["db"] if math.isfinite(swap["db"]) else None,
                     "audible_at_adoption": audible,
                     "minimum_grid_rms": min((w["rms"] for w in windows), default=None),
                     "minimum_sliding_rms": float(local.min()) if local.size else None,
                     "sliding_below_minus60_count": int(np.count_nonzero(local < .001))})
    rows["swaps"] = [{**r, "db": r["db"] if math.isfinite(r["db"]) else None} for r in rows["swaps"]]
    return {"pcm": pcm, "events": rows, "aligned_adoptions": near,
            "global_sliding_20ms_minimum_dbfs": float(20*np.log10(max(1e-12, rolling.min()))),
            "global_sliding_20ms_minimum_time": float(rolling.argmin()/rate),
            "alignment_tolerance_seconds": .16,
            "conclusion": "Envelope minima are candidates. Silent voice changes and composed rests remain valid; inspect sounding gain and adoption events before calling a dropout."}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("wave", type=Path)
    parser.add_argument("events", type=Path)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    report = correlate(args.wave, args.events)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"seconds": report["pcm"]["seconds"], "peak": report["pcm"]["peak"],
                      "clips": report["pcm"]["clipped_samples"],
                      "adoptions": len(report["aligned_adoptions"]),
                      "audible_adoptions": sum(r["audible_at_adoption"] for r in report["aligned_adoptions"]),
                      "sounding_adoptions_with_low_energy": sum(r["audible_at_adoption"] and r["sliding_below_minus60_count"]>0 for r in report["aligned_adoptions"]),
                      "global_sliding_20ms_minimum_dbfs": report["global_sliding_20ms_minimum_dbfs"]}))
