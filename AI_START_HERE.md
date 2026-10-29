# 《共鸣之城》施工入口

先读[当前状态](PROJECT.md)、[日志末30行](ai_progress.log)、[唯一任务进度](ai_feature_backlog.json)与[施工约定](AGENTS.md)。

本地/云端交接先运行 `python tools/audit_creation_workspace.py --check-remote`，只读核对实时origin/main、当前HEAD及V7.1来源。版本落后先核对未提交改动；不自动reset/覆盖，也不把未提交或未推送的本地施工当成云端已有内容。

当前施工按[V7.1最终施工改造总案](文档/54_V7_最终施工改造总案.md)与[工程维护](文档/工程维护.md)。文档50及V3—V6保留历史，冲突以V7.1为准。庭院闭合房环、单体半围合及连续窄巷首轮契约已验证真实来源与L页；直线/斜向与混合来源保持；同成员缓弯连续界面CPU98/实窗30通过，共线细分不改资格，水域/实体仍截断；普通入口坡地接续CPU113及实窗通过，缺高差支撑保留局部空间，同高地可成区；现代非active立面/穿堂、其他复杂界面与其他三类契约待办；旧收益与已完成母曲/共享和声子步保持。用户最新要求每轮验证后提交并推送双库，核对两边Git树和当前施工版本；授权持续有效。

M75～M83技术验收完成；M83证据索引与屋谷保留结论见文档52。当前M84已完成自由城新屋指定原型的合法用途默认子步，见[施工记录](文档/53_功能区与母曲编配施工记录.md)；四功能区空间派生与L入口子步已通过，空间互哺/两和弦与实际+35%收益已通过子步，自由城近景乐器/经典写实政策已通过子步，水岸沿街布篷、临水新屋茶座/真实茶伞阵与浮灯子步已通过，自由城房屋提示/可选引导已改读真实空间，继续其余街景与权益，第一首田园144秒基础谱/逐段试听已通过，居民/房屋/建造单音共享和声CPU250及实窗73已通过，复音提示表CPU43/实窗78已通过，母曲原领唱独奏CPU15/实窗31及三子步独立审查已通过，全局换段/跨小节提示仍待施工，继续多档母曲分轨；M84～M86待办。云端入口python tools/check_creation_cloud.py --godot godot --geometry，包含15步与桥岸拾取回归。

代码入口：scenes/city_creation.tscn → scripts/ui/city_creation_demo.gd；State/API/序列化在scripts/world，表现与增量发布在scripts/visual，拍钟/谱面/换流在scripts/audio。正常新城initialize_free空地，initialize/initialize_empty仍为legacy配方API。

保留Schema1～20、真实历史权益、人工意图、Undo/Redo、个人作品与原12长4短6总线2自然声/唯一领唱。验证带--isolated-session及独立作品目录；没有真实听评就写听感待评。

```text
python tools/check_ai_harness.py
python tools/check_doc_links.py
python -B tests/test_ai_harness.py
Godot --headless --path . --audio-driver Dummy --script tests/test_city_creation_legacy_roundtrip.gd -- --isolated-session
```

Godot4.7.2，实窗使用gl_compatibility和实际音频驱动。相关CPU、旧档及一次实际实窗/原图/PCM构成最低充分验收；性能按体验，实测帧时不作硬门槛。

[资料导航](文档/README.md) · [本轮M83证据](文档/52_画面连续性修补与证据.md) · [整理范围与恢复](文档/整理记录.md) · [四库参考](文档/参考索引.md) · [双库流程](文档/37_双库同步与云端施工.md)
