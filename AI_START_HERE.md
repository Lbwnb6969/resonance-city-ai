# 《共鸣之城》施工入口

先读[当前状态](PROJECT.md)、ai_progress.log末30行、[唯一任务进度](ai_feature_backlog.json)与[施工约定](AGENTS.md)。详细证据按需查，不从历史蓝图重新排期。

- 产品规格只读[54整合版](文档/54_V7_最终施工改造总案.md)，权益细则按[56](文档/56_free成长权益映射.md)。旧55/57已合并删除。
- 当前首步与已通过子步只查PROJECT/backlog，不在入口复制停止点；已通过空间与权益迁移按真实证据保持。
- 工程规则与代码入口：[工程维护](文档/工程维护.md)。具体实现状态和待办只在PROJECT与backlog维护，入口不重复测试流水。
- 母曲作曲内容与候选接入见[58审阅映射](文档/58_原创室内乐作曲审阅与施工映射.md)；截断原稿不直接覆盖运行谱，不提前认定验收。

交接先运行 `python tools/audit_creation_workspace.py --check-remote`，核对实时origin/main、HEAD、脏工作区与规格来源。提交号不同先查Git树差异；发布元数据差异和未发布施工分别记录，不reset覆盖。

文档轮最小检查：

```text
python tools/check_ai_harness.py
python tools/check_doc_links.py
```

游戏变更按工程维护追加相关CPU、隔离旧档、实际OpenGL输入/原图/PCM。Godot4.7.2，实窗gl_compatibility与实际音频驱动；没有实际听评就写待评。

每轮验证后按[双库流程](文档/37_双库同步与云端施工.md)提交、审阅、推送并核树。已有脏施工保留；仅发布已验收范围，必要时从本轮提交建立隔离干净检出。

[文档导航](文档/README.md) · [M83证据](文档/52_画面连续性修补与证据.md) · [M84证据](文档/53_功能区与母曲编配施工记录.md) · [归档恢复](文档/整理记录.md)
