"""Read-only SHA-matched reference metrics for music prompting."""
import argparse
import csv
import hashlib
import json
from pathlib import Path


def sha(path):
    with open(path, "rb") as handle:
        return hashlib.file_digest(handle, "sha256").hexdigest()


def load_metrics(root):
    import numpy as np
    results = []
    for name in ["blau", "jz", "novel", "paris", "star"]:
        source = root / (name + ".mp3")
        digest = sha(source)
        matches = []
        for path in (root / "results").glob("*/*/summary.json"):
            summary = json.loads(path.read_text(encoding="utf-8"))
            if summary.get("source_sha256") == digest:
                matches.append((path, summary))
        if not matches:
            raise ValueError(f"No SHA-matched successful analysis: {source}")
        path, summary = sorted(matches, key=lambda pair: str(pair[0]))[-1]
        raw = json.loads(path.with_name("essentia.json").read_text(encoding="utf-8"))
        rows = list(csv.DictReader(path.with_name("timeline.csv").open(encoding="utf-8-sig")))
        timeline = np.array([[float(r[k]) for k in ["seconds", "rms", "centroid_hz"]] for r in rows])
        windows = []
        for start in range(0, int(summary["duration_seconds"]), 15):
            block = timeline[(timeline[:, 0] >= start) & (timeline[:, 0] < start + 15)]
            windows.append({"start": start, "end": min(start + 15, summary["duration_seconds"]),
                            "rms": float(block[:, 1].mean()), "centroid_hz": float(block[:, 2].mean())})
        results.append({"name": name, "source": str(source), "source_sha256": digest,
                        "analysis_summary": str(path), "duration_seconds": summary["duration_seconds"],
                        "bpm_librosa": summary["librosa"]["bpm"], "essentia": summary["essentia"],
                        "centroid_hz": summary["librosa"]["spectral_centroid_hz"]["mean"][0],
                        "key_profiles": {k: v for k, v in raw["tonal"].items() if k.startswith("key_")},
                        "windows_15s": windows})
    return results


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=True)
    songs = load_metrics(args.root)
    (args.output / "metrics.json").write_text(json.dumps(songs, ensure_ascii=False, indent=2), encoding="utf-8")
    for song in songs:
        print(song["name"], round(song["duration_seconds"], 2), round(song["bpm_librosa"], 2),
              song["essentia"]["bpm"], song["essentia"]["key"], song["essentia"]["scale"], flush=True)
    if not all(sha(song["source"]) == song["source_sha256"] for song in songs):
        raise ValueError("Source changed during analysis")
    print("PASS: all five original source hashes unchanged", flush=True)


if __name__ == "__main__":
    main()
