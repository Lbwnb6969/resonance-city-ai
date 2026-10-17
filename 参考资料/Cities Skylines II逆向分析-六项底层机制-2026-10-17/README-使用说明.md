# Cities: Skylines II 静态逆向分析资料

本目录对应 2026-10-17 完成的六项底层机制分析，来源安装目录为：

`D:\SteamLibrary\steamapps\common\Cities Skylines II`

核心入口是[六项底层机制逐项分析](六项底层机制逐项分析.md)。六篇专题分别覆盖：

1. 建造预览与正式提交
2. 增量更新与缓存失效
3. 模拟与渲染时间解耦
4. 实体身份与引用修复
5. 并行随机与可重复性
6. 资产到运行数据编译链

`*-code` 目录保存定向反编译类型；`verified-cil` 和 `verified-il` 保存关键方法核验材料；`verification.md`、`selected-methods.json`、`analysis-status.json` 和 `validation-results.json` 记录来源、哈希、范围与剩余不确定性。

这些资料来自静态读取，未启动游戏、未加载用户存档、未修改安装目录。报告中的部分链接仍指向原始 Codex 工作区，原始工作区交付位于：

`本资料包根目录`
