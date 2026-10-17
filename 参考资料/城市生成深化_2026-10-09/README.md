# 城市生成深化源码阅读包

2026-10-09。配合[技术深化报告](../../废弃/文档/2026-10-09_历史执行与研究/技术深化-丰富城市生成与公共交通_2026-10-09.md)。

16个仓库、99份精选源码/README/许可，共1,598,094字节原文件。14个仓库有实际实现；CityX-Lab、ProcGS仅收录发布状态文档，不能算已取得生成代码。源码未经第三方工程编译/运行，未安装插件、未下载模型权重。

- [源码索引.json](源码索引.json)：固定提交、原路径、下载URL、SHA-256与函数行号。
- [阅读入口.md](阅读入口.md)：按本项目任务选出的代码入口。
- [许可复核.json](许可复核.json)：逐仓库取用范围。
- [检索记录.json](检索记录.json)：EXA/Tavily结果与取得源码的方法、限制。
- [开始文档输入快照.json](开始文档输入快照.json)与[文档输入快照.json](文档输入快照.json)：本轮开始与收尾的设计/规格/历史文档文件哈希。
- `源码/`：可离线读取；Godot源码以`.gd.txt`保存；`.gdignore`排除资源导入。
- `.gitattributes`：保留原文件字节，避免Windows换行转换破坏索引哈希。
- `固定版本阅读包.zip`：上述资料的便携副本，不包含全仓库、媒体或模型权重。

固定版本来源：GitHub API解析提交后获取raw文件，或GitHub codeload ZIP的40位提交注释。SUMO目录树被截断，`tools/ptlines2flows.py`单独按固定SHA获取。Git传输失败和API限额不影响已保存文件的版本与哈希。

| 仓库 | 主要用途 | 许可/取用范围 |
|---|---|---|
| OliverJPost/citystackgen | 形态统计驱动的道路/建筑、类型分布变体 | GPL-3.0，研究思路，生产独立实现 |
| OliverJPost/citypy | 真实街道/建筑指标、统计模板 | GPL-3.0，离线研究 |
| tsinghua-fib-lab/DRL-urban-planning | 用地目标、公共服务、绿地 | MIT；修改直线覆盖算法后取用 |
| gboeing/osmnx | 路网形态、合并、寻路、坡度指标 | MIT；分析方法与数据结构 |
| pysal/momepy | 街坊边界、形态测量 | BSD-3-Clause；保留版权/许可 |
| kevin-earl-denny/city-doodle | 公园步道/池塘、分区 | MIT；补完整几何约束 |
| KuzeyGorgulu/procedural-city-generator | 地形寻路→地块→用途管线 | 根目录无明确许可；阅读，不复制进生产 |
| UDST/urbanaccess | 步行/公交整合与接驳 | AGPL-3.0，研究结构，生产独立实现 |
| eclipse-sumo/sumo | 站点、线路与时刻生成 | EPL-2.0或适用次级GPL；不嵌整套仿真 |
| alexandermorozzov/connectpt | 公交线路优化、转乘代价 | 根目录无明确许可；研究 |
| TheDuckCow/godot-road-generator | 路口/车道/沿线移动，版本0.9.3 | MIT；2D适配，不直接安装Node3D插件 |
| tsinghua-fib-lab/UrbanWorld2.0 | OSM环境、树分布、离线装配 | 根许可未明确；内部组件许可不同 |
| hzxie/GaussianCity | 建筑实例与背景分离 | S-Lab 1.0非商业；研究，不进入商用运行时 |
| hzxie/CityDreamer4D | 动静层组织 | S-Lab 1.0非商业；研究 |
| SGZhang608/CityX-Lab | 发布状态核查 | Apache-2.0；只有README/许可 |
| city-super/ProcGS | 发布状态核查 | 无明确根许可；只有README，非可用源码 |

第三方原版权与许可原样保留。根目录缺许可的资料不产生生产复制授权。原创路网覆盖原型位于`tools/city_service_planner.py`，不依赖本包第三方库。

本包可执行的最低校验：

```powershell
python tools/audit_city_references.py
```

校验仅证明本地精选文件与索引一致，不证明第三方项目可运行，也不是每轮开发必须重跑的检查。
