# 《共鸣之城》施工入口

这是施工 AI 的唯一入口。先执行一次远端审计，再只读本文件、[PROJECT 当前状态](PROJECT.md)和 [AGENTS 约定](AGENTS.md)。`ai_feature_backlog.json` 只读取 `holistic_integration.current_construction_spec`、首个未通过轮次和 `next_step`；`ai_progress.log` 只在需要核对最近证据时读末 30 行。

```text
python tools/audit_creation_workspace.py --check-remote
```

当前状态以实时 `origin/main`、`PROJECT.md` 和 backlog 为准。版本不同先查树，不 reset 覆盖；未提交、未推送内容不作云端已有。每轮只推进当前首个未通过任务中的一个可验证子步。M84～M86仍未整体验收。

## 当前施工首步

以实时 `PROJECT.md` 为准。当前 M84 优先处理美术样板：V 折脊草叶的近远 LOD 轮廓、门窗真实内凹/窗套厚度/独立玻璃路由、昼夕夜和增量/冷算一致性。音乐的领奏仍有“奇怪、抢耳”反馈，P0/P2 技术通过不等于听感通过，不切默认。

## 生效顺序

1. [54 最终施工总案](文档/54_V7_最终施工改造总案.md)：唯一产品规格。
2. [PROJECT](PROJECT.md) 与 backlog：唯一施工状态和验收事实。
3. [工程维护](文档/工程维护.md)：代码、兼容、验证和发布约束。
4. [56](文档/56_free成长权益映射.md)：旧截止、权益、legacy 和迁移。
5. 专题按任务读取：
   - 音乐：58 作曲、63 长听/DSP、64 暗线/慢过渡、65 双线、68 四首氛围资产。
   - 美术/扩库：59 质感光影、66 首批生产、67 `blau` 氛围资产。
   - 交互/UI/地形：60 营造体验、61 UI 清理、62 地形道路水岸。
   - 证据：52 画面连续性、53 功能区与母曲施工记录。

## 按任务最小读取

- 改音乐：先读 54、PROJECT、63/64；涉及候选再读 58/65/68；需要历史证据再读 53。
- 改美术：先读 54、PROJECT、59；涉及储备再读 66/67；需要实窗证据再读 52。
- 改经营/权益/存档：先读 54、56、工程维护；不要用旧 61 的“一律清零”目标覆盖 65 的版本化新账期。
- 改营造/UI/地形：先读 60/61/62 中对应章节，再查 52/53 的实际边界。
- 做候选扩充：读 66 的生产管线和对应的 67/68 候选；所有候选当前均为 `runtime_ready=false`。

来源原稿、旧委托、43～49接口历史、`废弃/`、`验证记录/`和外置资产不是首轮上下文。只有在核对来源哈希、许可证、失败证据或具体实现时，才打开对应文件。不要把原稿的“已实现、100%、已听评”当作事实。

## 不可破坏的边界

- 自由营造、手作质感、可关闭轻量经营是明线；音乐是独立暗线，不由经营、等级、接路或库存解锁基础音乐。
- 保留旧 `growth_cutoff`、旧权益、legacy、Schema 1～20、M80 外部 Schema1、旧 v2、个人作品、Undo/Redo 和 `house.seed` 外观。
- 新成长只用版本化单一政策/新账期；不建 `prosperity_enabled` 与 `cozy_progression` 双开关，不回放历史事件发奖。
- 运行预算保持 12 长轨、4 短槽、6 总线、2 自然声、唯一 `layer=3` 领唱；新音色/profile 必须有来源签名、缓存、回退和实证。
- 原曲、stem、模型和图片留在外置资产；候选数据不等于可运行内容，不把整曲直接挂入常驻播放池。

## 最低充分验证

文档/候选轮：

```text
python tools/check_doc_links.py
python tools/check_ai_harness.py
python tools/review_progressive_reserve.py --report 验证记录/渐进内容储备深化_20261031.json
python tools/review_blau_atmosphere.py --report 验证记录/blau氛围参考静态审阅_20261031.json
python tools/review_four_song_atmosphere.py --report 验证记录/四首氛围资产静态审阅_20261031.json
```

代码轮按工程维护选择最小 CPU/API、隔离旧档、必要 OpenGL 实窗、原图、PCM 和真实听评。没有人工听评就写“待听评”，不更新品质通过状态。每轮记录命令、结果、耗时和剩余风险。

完成验证后按[37 双库流程](文档/37_双库同步与云端施工.md) prepare → 审阅增删/预算 → push → 核远端树。外部 AI 参考包只留本地，发布树不含 `废弃/`、`验证记录/`、`资产/`和缓存。

[文档导航](文档/README.md) · [归档与恢复](文档/整理记录.md)
