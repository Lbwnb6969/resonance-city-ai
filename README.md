# 共鸣之城 · Resonance City

Godot城市音乐游戏：画房屋、道路、水岸和林地，欣赏城市的声画变化。当前正按新版50、51、52重构为空间驱动的功能区与完整母曲编配；当前能力和剩余任务见[PROJECT](PROJECT.md)。

用Godot4.7.2打开project.godot后按F5，Compatibility渲染，默认1440×900。项目附完整轻量音色库，克隆后可直接运行；普通试玩无需烘焙或打包。

- 启动Demo.cmd：隔离新城，不写个人继续档。
- 继续我的河湾.cmd：继续个人作品。
- 打开创作样例.cmd：隔离创作样例。

个人作品保存在Godot user://。操作见[快速开始](文档/Demo快速开始.md)，施工见[AI入口](AI_START_HERE.md)。

修改合成源码后按顺序重建两套音库，Godot替换为本机引擎路径：

```text
Godot --headless --path . --script tools/bake_creation_music_bank.gd
Godot --headless --path . --script tools/bake_creation_portable_bank.gd
```

[当前设计与排期](文档/50_空间驱动城建音乐与整合排期修订.md) · [工程维护](文档/工程维护.md) · [文档导航](文档/README.md) · [四库参考](文档/参考索引.md)

旧蓝图的有效工程条款已合并，废弃原文、重复工程包及一次性工具移出工作树，保存在唯一本地废弃及Git历史；范围与恢复见[整理记录](文档/整理记录.md)。代码、运行资源、旧档兼容、许可证、四库原件与个人作品保留。

[完整施工库](https://github.com/Lbwnb6969/resonance-city)与[精简设计库](https://github.com/Lbwnb6969/resonance-city-ai)有更新时一起同步；当前Git树分别小于1GB/100MB。提交后执行tools/sync_github_all.py prepare，审阅再push，流程见[双库同步](文档/37_双库同步与云端施工.md)。
