# 《共鸣之城》施工入口

先读[PROJECT当前状态](PROJECT.md)、ai_progress.log末30行、[backlog](ai_feature_backlog.json)的holistic_integration和[AGENTS约定](AGENTS.md)。当前首步只查PROJECT/backlog，不从旧日志或原稿重新排期。

```text
python tools/audit_creation_workspace.py --check-remote
```

核对实时origin/main、HEAD、规格/来源和脏工作区。提交不同先查树；未提交、未推送内容不作云端已有，不reset覆盖继承施工。只推进首个未通过任务中的一个可验证子步。

## 依据与冲突处理

- 产品主规格（已整合58—65采用规则）：[54整合版](文档/54_V7_最终施工改造总案.md)。已审阅的采用规则已融入54，专题保存具体材料与修正；来源原稿、旧委托和历史蓝图不直接执行。
- 明线/扩库采用[65](文档/65_明暗双线与AI储备审阅及施工映射.md)，首批生产和接口边界按[66](文档/66_渐进内容储备深化与首批生产实施审阅及施工映射.md)：轻量经营/正向成长可关闭，覆盖旧free一律退场目标；旧截止/权益和已开放基础权限保持，须版本化启停/新账期。66的音乐、窗材质、建筑母型和变体仍是`runtime_ready=false`候选，必须按单步顺序施工。
- 音乐内容按[58](文档/58_原创室内乐作曲审阅与施工映射.md)，柔和度/长听及新谱校正按[63](文档/63_背景音乐柔和配器与长听审阅及施工映射.md)。空间映射、慢过渡与显线退场按[64](文档/64_音乐暗线重构审阅与施工映射.md)，批次生产按[66](文档/66_渐进内容储备深化与首批生产实施审阅及施工映射.md)，`blau`按[67](文档/67_blau氛围参考与原创资产重制审阅及施工映射.md)，四首新古典氛围资产按[68](文档/68_四首新古典氛围资产与暗线接入审阅及施工映射.md)。覆盖旧声音硬门槛/成区宣告；保留已有技术证据，听感另评。
- 美术按[59](文档/59_美术质感光影续稿审阅与施工映射.md)；营造交互按[60](文档/60_自由营造交互与玩家体验审阅及施工映射.md)，UI布局/冗余取舍由[61](文档/61_UI与冗余系统清理审阅及施工映射.md)统一；地形道路水岸按[62](文档/62_地形道路与水岸创作审阅及施工映射.md)。待施工目标不冒充现成功能。
- 原权益与迁移按[56](文档/56_free成长权益映射.md)；工程/代码入口按[工程维护](文档/工程维护.md)。新用户要求覆盖旧设计，实际验收范围由[52](文档/52_画面连续性修补与证据.md)/[53](文档/53_功能区与母曲编配施工记录.md)证明，不让旧实现反向删减新目标。

## 验证与交付

文档轮运行Harness、文档链接及相关候选提取检查，不重跑游戏：

```text
python tools/check_ai_harness.py
python tools/check_doc_links.py
python tools/review_music_comfort.py
python tools/review_music_undercurrent.py
python tools/review_dual_line.py
python tools/review_bright_supplement.py
python tools/review_progressive_reserve.py --report 验证记录/渐进内容储备深化_20261031.json
python tools/review_blau_atmosphere.py --report 验证记录/blau氛围参考静态审阅_20261031.json
python tools/review_four_song_atmosphere.py --report 验证记录/四首氛围资产静态审阅_20261031.json
```

代码轮按工程维护取最低充分CPU/API、隔离旧档与必要OpenGL实窗输入/原图/PCM；听感必须真实听评，未听就写待评。M84～M86未整体验收，勿用局部检查提前勾选。

验证后按[37双库流程](文档/37_双库同步与云端施工.md)提交→prepare→审阅增删/预算→push→核实时远端树。只发布已验收范围，隔离继承脏施工；外部AI参考包只留本地。个人作品、原件和旧有效能力保持。

[文档导航](文档/README.md) · [归档与恢复](文档/整理记录.md)
