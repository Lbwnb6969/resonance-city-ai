# 共鸣之城 · Resonance City

融合Tiny Glade自然美术、Townscaper模块化建筑、Foundation街坊生活与Cities: Skylines II城市工程机制的Godot城市音乐游戏。玩家画房屋、小路、林地与池塘，居民真实往来，房屋与街坊共同演奏。

## 开始试玩

使用Godot 4.7.2打开 `project.godot`，按F5；当前Compatibility，1440×900。也可双击：

- `启动Demo.cmd`：隔离新城，不写个人继续档。
- `继续我的河湾.cmd`：继续个人作品。
- `打开创作样例.cmd`：隔离创作样例。

其他特色样例入口在 [tools/样例启动器](tools/样例启动器/)。个人作品保存在Godot `user://`，作品收藏Ctrl+O、手记J、账本L；完整操作见 [快速开始](文档/Demo快速开始.md)。

## 开发入口

[当前状态与下一步](PROJECT.md) · [AI启动入口](AI_START_HERE.md) · [四库融合十二阶段总设计](文档/code_artifact.md) · [文档导航](文档/README.md) · [四库参考](文档/参考索引.md)

已有完整3D河湾编辑、真实经营/街坊演出、地形岸带、高地建房、坡路石阶、复杂建筑母型和自然声场。继续推进地貌观感、音乐融合、经营反馈与编辑响应；当前能力和下一项工作以PROJECT为准，开发按新蓝图Phase 1至Phase 12依次推进。

旧文档、2.5D美术流水线、原生音频扩展和一次性历史对照保留在本地 `废弃/`。当前文档仅保留主蓝图、导航、架构、操作与参考索引；当前回归测试与四库的精选文档/算法代码继续纳管，完整参考原件保留本地原路径。来源与原件说明见 [AI资料](AI资料/README.md)。

## 版本同步

[GitHub main](https://github.com/Lbwnb6969/resonance-city-ai/tree/main) 保留文档、代码、示范数据、实际运行资源及精选算法参考，当前文件总量严格小于 **100MB**。本地完整参考资料、大型导出数据、原始美术与音频、截图和压缩原件不随GitHub发布，仍留在原路径；取消跟踪不删除或搬移本地文件。参考发布范围见 [参考资料说明](参考资料/README_GITHUB.md)。

提交后运行 `python tools/sync_github_main.py prepare` 查看差异，再运行 `python tools/sync_github_main.py push`。工具保留历史备份、普通快进推送，并核对本地与远端完整Git文件树相同。
