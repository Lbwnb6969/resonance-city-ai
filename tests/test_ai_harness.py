"""隔离夹具核对 Harness 能拦截真实治理违规，不写项目或个人存档。"""
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("harness", ROOT / "tools/check_ai_harness.py")
harness = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(harness)


class HarnessTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.backlog = json.loads((ROOT / "ai_feature_backlog.json").read_text(encoding="utf-8"))
        self.save_backlog()
        (self.root / "ai_progress.log").write_text("交接记录" * 20, encoding="utf-8")
        for name in [*harness.GOD_FILE_LIMITS, "AI_START_HERE.md", "PROJECT.md", "AGENTS.md"]:
            path = self.root / name
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text("baseline\n", encoding="utf-8")

    def save_backlog(self):
        (self.root / "ai_feature_backlog.json").write_text(json.dumps(self.backlog, ensure_ascii=False), encoding="utf-8")

    def errors(self):
        return harness.audit(self.root)[0]

    def test_valid_and_evidenced_progress(self):
        self.assertEqual(self.errors(), [])
        self.backlog["milestones"][0].update(passes=True, verified_by="actual test command: PASS")
        self.save_backlog()
        self.assertEqual(self.errors(), [])

    def test_contract_mutations(self):
        for key in harness.CONTRACT_FIELDS:
            with self.subTest(key=key):
                original = self.backlog["milestones"][0][key]
                self.backlog["milestones"][0][key] = "modified"
                self.save_backlog()
                self.assertTrue(self.errors())
                self.backlog["milestones"][0][key] = original

    def test_missing_and_malformed_backlog(self):
        for raw in ['{', '{}', '{"milestones": null}', '{"milestones": [42]}']:
            (self.root / "ai_feature_backlog.json").write_text(raw, encoding="utf-8")
            self.assertTrue(self.errors())
        (self.root / "ai_feature_backlog.json").unlink()
        self.assertTrue(self.errors())

    def test_missing_or_reordered_milestones(self):
        self.backlog["milestones"].reverse()
        self.save_backlog()
        self.assertTrue(self.errors())
        self.backlog["milestones"].pop()
        self.save_backlog()
        self.assertTrue(self.errors())

    def test_evidence_and_status_types(self):
        for status, evidence in [(True, " "), (True, None), ("false", ""), (0, "")]:
            self.backlog["milestones"][0].update(passes=status, verified_by=evidence)
            self.save_backlog()
            self.assertTrue(self.errors())

    def test_missing_required_files(self):
        for name in [*harness.GOD_FILE_LIMITS, "AI_START_HERE.md", "PROJECT.md", "AGENTS.md", "ai_progress.log"]:
            path = self.root / name
            original = path.read_bytes()
            path.unlink()
            with self.subTest(name=name):
                self.assertTrue(self.errors())
            path.write_bytes(original)

    def test_line_ratchet_boundaries(self):
        for name, limit in harness.GOD_FILE_LIMITS.items():
            path = self.root / name
            path.write_text("x\n" * limit, encoding="utf-8")
            self.assertEqual(self.errors(), [])
            path.write_text("x\n" * (limit + 1), encoding="utf-8")
            self.assertTrue(self.errors())
            path.write_text("x\n", encoding="utf-8")

    def test_entry_document_boundaries(self):
        for name in ["AI_START_HERE.md", "PROJECT.md"]:
            path = self.root / name
            path.write_text("x\n" * 120, encoding="utf-8")
            self.assertEqual(self.errors(), [])
            path.write_text("x\n" * 121, encoding="utf-8")
            self.assertTrue(self.errors())
            path.write_text("x" * 15000, encoding="utf-8")
            self.assertTrue(self.errors())
            path.write_text("x\n", encoding="utf-8")


if __name__ == "__main__":
    unittest.main()
