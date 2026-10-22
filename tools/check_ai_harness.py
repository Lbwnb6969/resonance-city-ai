#!/usr/bin/env python3
"""《共鸣之城》AI 长期施工脚手架自动审计工具 (check_ai_harness.py)
检查项：
1. ai_feature_backlog.json 存在、结构完整、12个里程碑 ID (M01..M12) 未被篡改或删减；
2. ai_progress.log 存在且非空；
3. 四大巨型文件 (renderer, state, demo, music) 行数未突破棘轮上限（强制模块化拆分）；
4. 入口文档 AI_START_HERE.md 与 AGENTS.md 保持精简高信噪比（< 15KB）。
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

EXPECTED_MILESTONES = [f"M{i:02d}" for i in range(1, 13)]

# 上帝文件行数软棘轮上限（允许小幅委托调用，严禁大段堆砌新实现）
GOD_FILE_LIMITS = {
    "scripts/visual/city_creation_renderer.gd": 3020,
    "scripts/world/city_creation_state.gd": 3010,
    "scripts/ui/city_creation_demo.gd": 2520,
    "scripts/audio/city_creation_music.gd": 1820,
}

def main() -> int:
    errors = []
    backlog_path = ROOT / "ai_feature_backlog.json"
    progress_path = ROOT / "ai_progress.log"

    if not backlog_path.exists():
        errors.append("缺少根目录 ai_feature_backlog.json")
    else:
        try:
            data = json.loads(backlog_path.read_text(encoding="utf-8"))
            milestones = data.get("milestones", [])
            ids = [m.get("id") for m in milestones]
            if ids != EXPECTED_MILESTONES:
                errors.append(f"ai_feature_backlog.json 里程碑列表被篡改: 期望 {EXPECTED_MILESTONES}, 实际 {ids}")
            passed_count = sum(1 for m in milestones if m.get("passes") is True)
            next_m = next((m["id"] + " (" + m["title"] + ")" for m in milestones if not m.get("passes")), "ALL_COMPLETED")
            for m in milestones:
                if m.get("passes") is True and not str(m.get("verified_by", "")).strip():
                    errors.append(f"里程碑 {m.get('id')} 标记为 passes=true，但未填写 verified_by 验证依据")
        except Exception as e:
            errors.append(f"ai_feature_backlog.json 解析失败: {e}")
            passed_count = 0
            next_m = "UNKNOWN"

    if not progress_path.exists() or len(progress_path.read_text(encoding="utf-8").strip()) < 50:
        errors.append("缺少 ai_progress.log 或内容为空")

    for rel_path, limit in GOD_FILE_LIMITS.items():
        fp = ROOT / rel_path
        if fp.exists():
            lines = len(fp.read_text(encoding="utf-8").splitlines())
            if lines > limit:
                errors.append(
                    f"行数棘轮违规: {rel_path} 当前 {lines} 行 > 上限 {limit} 行。"
                    f"请将新增逻辑拆分到 <250 行的独立子脚本中！"
                )

    for doc_name in ("AI_START_HERE.md", "AGENTS.md"):
        dp = ROOT / doc_name
        if dp.exists():
            size_kb = dp.stat().st_size / 1024.0
            if size_kb > 16.0:
                errors.append(f"入口文档膨胀警告: {doc_name} 达到 {size_kb:.1f}KB (>16KB)，请将历史流水账归档至 文档/24")

    if errors:
        print("AI_HARNESS_AUDIT FAILED:")
        for err in errors:
            print("  [X]", err)
        return 1

    print(f"AI_HARNESS_AUDIT PASS: {passed_count}/{len(EXPECTED_MILESTONES)} milestones completed | Next up: {next_m}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
