# 当前 Demo 兼容参数

五份 `spec.*.md` 保存 SP8、T6、E7、A2/A4/A26、B/H1 等当前程序参数。名称沿旧解析接口保留，内容属于旧运行配置。新版游戏规则只读取 [现行规格](../../文档/01_执行规格/README.md)。

生成器 `python tools/build_spec_data.py` 只从此目录提取参数，写 `数据/world_v2.json`；`--check` 校验文件同步。`数据/spec_values.json` 保持旧合成器基线。迁移新版代码时明确更改所需参数与 schema，不能因文档整理顺带改旧作品的运行值。来源哈希仅记录这五份实际输入。
