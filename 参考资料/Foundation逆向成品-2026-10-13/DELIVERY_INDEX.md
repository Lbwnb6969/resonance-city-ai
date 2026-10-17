# Foundation 逆向成品索引

目标安装目录：`D:\steamtest\steamapps\common\Foundation`

完整成果位于 `outputs/`：综合报告为 [outputs/FOUNDATION_REPORT.md](outputs/FOUNDATION_REPORT.md)，全量资源为 [outputs/foundation-resources/export-summary.json](outputs/foundation-resources/export-summary.json)，全量原生资料为 [outputs/foundation-full-native/FULL_NATIVE_README.md](outputs/foundation-full-native/FULL_NATIVE_README.md)，玩法语义为 [outputs/foundation-game-systems/SEMANTIC_GUIDE.md](outputs/foundation-game-systems/SEMANTIC_GUIDE.md)，模型为 [outputs/foundation-models/README_MODEL_RECOVERY.md](outputs/foundation-models/README_MODEL_RECOVERY.md)，音频为 [outputs/foundation-audio-recovered/README_AUDIO_RECOVERY.md](outputs/foundation-audio-recovered/README_AUDIO_RECOVERY.md)。

`analysis-databases/FoundationFull.rep` 与 `FoundationFull.gpr` 是可复查的 Ghidra 全量数据库。项目状态见 [PROJECT.md](PROJECT.md)。Git 最终备份提交为 `f377e89c`，此前完整交付提交为 `209f964d`。

这是静态逆向资料和互操作资源恢复，不是可编译源码重建；18 个原生函数的 C 反编译失败项、未证实的模型绑定、动画时序和音频 opaque 参数均在对应清单中保留。没有取得运行时执行证据。
