# 《共鸣之城》施工入口

先读[当前状态](PROJECT.md)、[日志末30行](ai_progress.log)、[唯一任务进度](ai_feature_backlog.json)与[施工约定](AGENTS.md)。

本对话的新版50_m82_m86.md、51.md、52.md为当前设计来源；[融合总案](文档/50_空间驱动城建音乐与整合排期修订.md)统一冲突取舍、四功能区、完整母曲与城建分轨编配。旧蓝图有效的工程和兼容条款已并入[工程维护](文档/工程维护.md)，不再按历史排期施工。

M75～M83技术验收完成；M83证据索引与屋谷保留结论见文档52。当前M84已完成自由城新屋指定原型的合法用途默认子步，见[施工记录](文档/53_功能区与母曲编配施工记录.md)；四功能区空间派生与L入口子步已通过，空间互哺/两和弦与实际+35%收益已通过子步，自由城近景乐器/经典写实政策已通过子步，水岸沿街布篷、临水新屋茶座/真实茶伞阵与浮灯子步已通过，继续其余街景与权益，再做完整母曲分轨；M84～M86待办。云端入口python tools/check_creation_cloud.py --godot godot --geometry，包含15步与桥岸拾取回归。

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
