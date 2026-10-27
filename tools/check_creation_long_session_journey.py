#!/usr/bin/env python3
"""Run real separate Godot windows for day one, returning next day, and art QA."""
import argparse
import array
import json
from pathlib import Path
import subprocess
import time
import wave

ROOT = Path(__file__).resolve().parents[1]


def inspect_wave(path):
    with wave.open(str(path), "rb") as stream:
        samples = array.array("h", stream.readframes(stream.getnframes()))
        rate = stream.getframerate() * stream.getnchannels()
        zeros = longest = 0
        for value in samples:
            zeros = zeros + 1 if value == 0 else 0
            longest = max(longest, zeros)
        return {"seconds": len(samples) / rate, "peak": max(map(abs, samples)) / 32768,
                "clipped_samples": sum(abs(value) >= 32767 for value in samples),
                "longest_digital_silence_seconds": longest / rate}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--godot", default="D:/GODOT/Godot_v4.7.2-stable_win64_console.exe")
    parser.add_argument("--resolutions", default="1440,1024")
    parser.add_argument("--phases", default="day1,day2,qa")
    parser.add_argument("--out-dir", default="res://验证记录/M32")
    args = parser.parse_args()
    output_root = ROOT / args.out_dir.removeprefix("res://")
    output_root.mkdir(parents=True, exist_ok=True)
    old_suite = output_root / "suite.json"
    requested = set(args.phases.split(","))
    reports = [r for r in json.loads(old_suite.read_text(encoding="utf-8")).get("runs", [])
               if r.get("ok") and r.get("phase") not in requested] if old_suite.is_file() else []
    for resolution in map(int, args.resolutions.split(",")):
        folder = output_root / str(resolution)
        folder.mkdir(parents=True, exist_ok=True)
        for phase in args.phases.split(","):
            command = [args.godot, "--path", str(ROOT), "--rendering-method", "gl_compatibility",
                       "--audio-driver", "Dummy", "--script", "tools/check_creation_long_session_journey_live.gd",
                       "--", "--isolated-session", f"--phase={phase}", f"--resolution={resolution}", f"--out-dir={args.out_dir}"]
            print(f"RUN {resolution} {phase}", flush=True)
            started = time.monotonic()
            log = folder / f"suite_{phase}_{time.time_ns()}.log"
            with log.open("w", encoding="utf-8") as output:
                result = subprocess.run(command, cwd=ROOT, stdout=output, stderr=subprocess.STDOUT, timeout=360)
            text = log.read_text(encoding="utf-8", errors="replace")
            path = folder / f"{phase}.json"
            report = json.loads(path.read_text(encoding="utf-8")) if path.is_file() else {"ok": False}
            clean = "SCRIPT ERROR:" not in text and "\nERROR:" not in text
            ok = result.returncode == 0 and clean and "LONG_JOURNEY {" in text and report.get("ok") and report.get("phase") == phase
            row = {"resolution": resolution, "phase": phase, "ok": bool(ok), "exit_code": result.returncode,
                   "seconds": time.monotonic() - started, "log": str(log),
                   "checks": len(report.get("checks", {})), "failures": [k for k, v in report.get("checks", {}).items() if not v]}
            if phase == "day2" and ok:
                row["audio"] = inspect_wave(folder / "day2_连续河湾.wav")
                row["ok"] = row["audio"]["clipped_samples"] == 0 and row["audio"]["seconds"] >= 140
            reports.append(row)
            suite = {"ok": all(r["ok"] for r in reports), "runs": reports}
            (output_root / "suite.json").write_text(json.dumps(suite, ensure_ascii=False, indent=2), encoding="utf-8")
            print(json.dumps(row, ensure_ascii=False), flush=True)
            if not row["ok"]:
                return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
