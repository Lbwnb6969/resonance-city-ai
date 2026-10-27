#!/usr/bin/env python3
"""只读审计 M01～M52 契约、验证证据、主文件棘轮与精简入口。"""
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
EXPECTED_MILESTONES = [f"M{i:02d}" for i in range(1, 53)]
# 固定用户交付的任务契约；passes / verified_by 可变，其余任务定义不得漂移。
CONTRACT_SHA256 = "71c34724cdaf43f91c9ef8020a1c85d565fb03b33f56122e9632b7754e5f0c37"
CONTRACT_FIELDS = ("id", "title", "description", "verification_cmd")
# M01～M12 实测行数 + 艺术品升华篇最多 10 行短委托；不得通过抬高上限容纳内联实现。
GOD_FILE_LIMITS = {
    "scripts/visual/city_creation_renderer.gd": 3005,
    "scripts/world/city_creation_state.gd": 2994,  # M64: overlap + removed-host prune delegates
    "scripts/ui/city_creation_demo.gd": 2504,
    "scripts/audio/city_creation_music.gd": 1800,
}


def audit(root):
    errors = []
    milestones = []
    try:
        data = json.loads((root / "ai_feature_backlog.json").read_text(encoding="utf-8"))
        milestones = data["milestones"]
        if not isinstance(milestones, list) or any(not isinstance(m, dict) for m in milestones):
            raise ValueError("milestones 必须为对象列表")
        if [m.get("id") for m in milestones] != EXPECTED_MILESTONES:
            errors.append("里程碑必须依序完整保留 M01～M52")
        contract = [{key: m.get(key) for key in CONTRACT_FIELDS} for m in milestones]
        digest = hashlib.sha256(json.dumps(contract, ensure_ascii=False, sort_keys=True).encode()).hexdigest()
        if digest != CONTRACT_SHA256:
            errors.append("任务契约被修改：id/title/description/verification_cmd 必须保留用户原文")
        extension = data.get("ui_refactor", {}).get("rounds", []) + data.get("refinement", {}).get("rounds", []) + data.get("sixth_phase", {}).get("rounds", []) + data.get("seventh_phase", {}).get("rounds", []) + data.get("art_evolution", {}).get("rounds", [])
        for row in extension:
            if type(row.get("passes")) is not bool or not isinstance(row.get("verified_by"), str):
                errors.append("UI补充轮次缺少有效状态/验证字段")
            elif row["passes"] and not row["verified_by"].strip():
                errors.append(f"{row.get('id')} 缺少真实验收记录")
        for m in milestones:
            if type(m.get("passes")) is not bool:
                errors.append(f"{m.get('id')} passes 必须为布尔值")
            evidence = m.get("verified_by")
            if not isinstance(evidence, str) or (m.get("passes") is True and not evidence.strip()):
                errors.append(f"{m.get('id')} 缺少字符串验证证据 verified_by")
    except (OSError, ValueError, KeyError, TypeError) as exc:
        errors.append(f"任务文件读取失败: {exc}")

    try:
        if len((root / "ai_progress.log").read_text(encoding="utf-8").strip()) < 50:
            errors.append("ai_progress.log 内容为空或缺少有效交接")
    except OSError as exc:
        errors.append(f"缺少交接日志: {exc}")

    for name, limit in GOD_FILE_LIMITS.items():
        path = root / name
        if not path.is_file():
            errors.append(f"缺少受检主文件: {name}")
        else:
            count = len(path.read_text(encoding="utf-8").splitlines())
            if count > limit:
                errors.append(f"行数棘轮违规: {name} {count} > {limit}；新逻辑须拆为 <250 行子脚本")

    for name in ("AI_START_HERE.md", "PROJECT.md", "AGENTS.md"):
        path = root / name
        if not path.is_file():
            errors.append(f"缺少入口文档: {name}")
            continue
        if path.stat().st_size >= 15_000:
            errors.append(f"入口文档膨胀: {name} 必须 <15000 字节，历史数据归档至文档/24")
        if name != "AGENTS.md" and len(path.read_text(encoding="utf-8").splitlines()) > 120:
            errors.append(f"入口文档膨胀: {name} 必须 <=120 行")
    return errors, milestones


def main():
    errors, milestones = audit(ROOT)
    if errors:
        print("AI_HARNESS_AUDIT FAILED:")
        for error in errors:
            print("  [X]", error)
        return 1
    completed = sum(m["passes"] for m in milestones)
    total = len(milestones)
    pending = next((m["id"] + " (" + m["title"] + ")" for m in milestones if not m["passes"]), "ALL_COMPLETED")
    print(f"AI_HARNESS_AUDIT PASS: {completed}/{total} milestones completed | Next up: {pending}")
    extension = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8")).get("ui_refactor", {}).get("rounds", [])
    if extension:
        done = sum(row["passes"] for row in extension)
        pending_ui = next((row["id"] for row in extension if not row["passes"]), "ALL_COMPLETED")
        print(f"UI_REFACTOR_AUDIT: {done}/{len(extension)} | Next up: {pending_ui}")
    refinement = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8")).get("refinement", {}).get("rounds", [])
    if refinement:
        done = sum(row["passes"] for row in refinement)
        pending_refinement = next((row["id"] for row in refinement if not row["passes"]), "ALL_COMPLETED")
        print(f"REFINEMENT_AUDIT: {done}/{len(refinement)} | Next up: {pending_refinement}")
    sixth = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8")).get("sixth_phase", {}).get("rounds", [])
    if sixth:
        done = sum(row["passes"] for row in sixth)
        pending_sixth = next((row["id"] for row in sixth if not row["passes"]), "ALL_COMPLETED")
        print(f"SIXTH_PHASE_AUDIT: {done}/{len(sixth)} | Next up: {pending_sixth}")
    seventh = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8")).get("seventh_phase", {}).get("rounds", [])
    if seventh:
        done = sum(row["passes"] for row in seventh)
        pending_seventh = next((row["id"] for row in seventh if not row["passes"]), "ALL_COMPLETED")
        print(f"SEVENTH_PHASE_AUDIT: {done}/{len(seventh)} | Next up: {pending_seventh}")
    evolution = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8")).get("art_evolution", {}).get("rounds", [])
    if evolution:
        done = sum(row["passes"] for row in evolution)
        pending_art = next((row["id"] for row in evolution if not row["passes"]), "ALL_COMPLETED")
        print(f"ART_EVOLUTION_AUDIT: {done}/{len(evolution)} | Next up: {pending_art}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
