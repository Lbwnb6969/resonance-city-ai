# Foundation 全量资源语义索引与玩法系统目录

本目录将已验证的包字节解码结果转换为可检索的玩法资料，不复刻或编译游戏。原安装目录只读，未运行游戏。证据类型为 **local-verified-decoded-payload**，与 REA bundle 和 Ghidra 原生代码分开保存。所有系统记录都有源包、包内资源、绝对字节偏移、长度和 SHA-256；引用图的每条边也带来源 hash。

## 完整覆盖与选择规则

[semantic-index.sqlite](semantic-index.sqlite) 包含全部 **34,884 个物理包资源**，每项的 offset、length、SHA-256 已和 [原资源导出 manifest](../foundation-resources/package-resource-manifest.json) 逐项核对。解码 payload 有 **26,290 项**：既有 26,274 对象，加按实际 v2 签名发现的 9 `.envmap`、6 `.cubemap`、1 `.prefab-bin`。这 16 个附加对象全部做字节精确重编码核验，见 [additional-v2-validation.json](additional-v2-validation.json)。

数据库保存 3,321,574 个解码属性字段。它完整包含所有解码对象，下面各系统是为阅读而生成的类型/路径切片，互相可以重叠。某文件未出现在这些切片中不代表资源未索引。缓存、媒体和原始包数据由独立资源导出目录保存。

| 系统切片 | 对象数 | 实际选择依据 | 主要文件 |
|---|---:|---|---|
| 生产 | 126 | 配方、作物、养殖配置、养殖建筑功能、资源生成器 | `production.jsonl.gz`、`production.csv` |
| 职业 | 67 | `PlaCAssetJob*` | `jobs.jsonl.gz`、`jobs.csv` |
| 需求 | 52 | `PlaCAssetAgentNeedType*` | `needs.jsonl.gz`、`needs.csv` |
| 村民状态/档案 | 132 | 状态/状态 quota、AgentProfile、村民管理配置 | `villager_status.jsonl.gz`、`villager_status.csv` |
| 建筑功能 | 194 | `PlaCAssetBuildingFunction*` | `building_functions.jsonl.gz`、`building_functions.csv` |
| 贸易 | 121 | 资源、TradingVillage、TradeRoute、GameRuleTrade、Trader 类型 | `trade.jsonl.gz`、`trade.csv` |
| 幸福度 | 44 | HappinessFactor 和幸福度移民配置 | `happiness.jsonl.gz`、`happiness.csv` |
| 任务/条件资产 | 450 | Quest、VictoryCondition、AchievementGiver、建筑条件配置 | `quests_conditions.jsonl.gz`、`quests_conditions.csv` |
| 军事 | 93 | Military、EventMilitary 类型和 Military 路径的 data | `military.jsonl.gz`、`military.csv` |
| 地图生成 | 98 | MagC、地图生成/生成地图类型和 Map Generation 下 data/scene | `map_generation.jsonl.gz`、`map_generation.csv` |
| 行为树 | 70 | 所有 `.bt` | `behavior_trees.jsonl.gz`、[图索引](behavior-tree-index.json) |

JSONL 保存上述对象的全部字段、重复项顺序和 nested type，不止抽样列出的 scalar。CSV 汇总顶层 scalar、名字 key 和 UUID 字段；详细 nested 列表以 JSON 字符串保存。空列表、null UUID、重复列表成员均保留。

[asset-types.json](asset-types.json) 有完整 391 种资产声明类型；[observed-type-schemas.json](observed-type-schemas.json) 包括全部 391 项，其中 390 种有 v2 属性路径/tag，`EdiCAssetShaderAssembly` 是非 v2 shader assembly，空 schema 明示。详见 [type-schema-coverage.json](type-schema-coverage.json)。不要把类型字段当作已恢复的 C++ 完整布局，schema 是序列化属性观察结果。

## 直接读取玩法关系

**生产链。** [production-recipes.json](production-recipes.json) 和对应 CSV 是全部 **106** 个 `PlaCAssetWorkplaceRecipe`：每项含完整投入/产出数量、UUID、匹配资源路径及 scriptingId、引用它的建筑功能、工作循环秒数、所需循环次数和 worker capacity。所有配方资源 UUID 已匹配资产，零缺失。其余 20 个生产切片对象包括作物、动物、鸡舍与生成器，保留各自格式，不能强行归一为配方。大型 [production-network.mmd](production-network.mmd) 保留全部配方/资源连接和数量。

面包链实值是风车 **4 WHEAT → 1 FLOUR**，面包房 **3 FLOUR + 1 WATER → 5 BREAD**。每条配方通过 UUID 连接实际资源定义。小麦农场配方发布的是 1 WHEAT 输入及 1 WHEAT 输出，资源采集/田地算法由其它配置和代码决定，不能据此声称无成本生产。

**建筑、职业与村民需求。** [building-function-links.json](building-function-links.json) 是全部 194 个建筑功能，列 job、behavior、worker/output capacity、生产时间、配方引用，并保留 `all_fields`；[job-requirements.json](job-requirements.json) 是全部 64 个基础职业，列前置 mastered jobs、progression、default behavior 和显式兼容状态；[status-needs-jobs.json](status-needs-jobs.json) 是全部 47 个状态，列 needs/removeNeeds/compatibleJobs，所有资料也有 CSV。

例如 Baker 发布 `UseWorkplaceBehavior=true`、默认 `Behavior Work.bt`，显式 CompatibleJobList 的反向引用来自 Commoner 与 Newcomer。此处只是保存的兼容列表，`AreLowerStatusCompatible` 等字段也保留，不把显式反向列表等同运行时全部允许状态。Commoner 中 `NeedFoodAdvanced_Basic` 重复两次，这是真实列表，不去重。Serf 的 needs 列表保存 Water、FoodBasic、FoodAdvanced_Extra、HouseLevel1、Services_Extra；Citizen 新增 GoodsExtra/Luxury/精制食物/三级住房/基础娱乐的同时配置 removeNeeds。状态变化后的继承/执行算法应再结合代码证据，不能将这些列表直接称作运行时最终需求集合。

**交易。** [trade-prices.json](trade-prices.json) 列全部 99 资源的 Tradable、resource types、`TradeBuyingPrice`、`TradeSellingPrice`。价格是 `PlaCResourceCollection`，可用其它货币资源，因此保留资源和数量，不强制写成一个数字。Bread/Flour 的两个发布字段为金币 2/4，Wheat 为 1/3；按原字段名记录，买卖视角不自行重命名。农业节庆餐虽保存 5/10 价格，`IsTradable=false` 也同时显示。不能据数值表声称该资源可实际交易。[trade-villages.json](trade-villages.json) 列全部 6 个 TradingVillage 的买卖列表及所有升级/补货配置。

**幸福度。** 43 HappinessFactor 与 1 ImmigrationFactorHappiness 的所有字段在 happiness 切片。Value、IsDecaying、TimeBeforeDecayingSeconds、DecayingRatePerMinute、IsCumulative、IsSolvable、RemovedOnDecayed 等均保留。需求资产的幸福度 UUID 可由 `needs-relations.jsonl.gz` 跳到相应 factor；不用名称相似性替代资源引用。

**任务条件。** [all-condition-instances.jsonl.gz](all-condition-instances.jsonl.gz) 和 CSV 遍历所有解码对象，保存每个条件 type、完整 nested 内容和精确属性路径：共 **3,376** 个含 GameCondition/QuestCondition/VictoryCondition 类型的节点，其中 **3,281** 个实际 `PlaCDataGameCondition*` 实例，其余 95 是条件相关资产声明/定义节点，不能混称为 3,376 个独立任务。

出现最多的具体类型包括 ExecuteActionList 549、AccumulateInStorage 401、ResourceQuantityNumber 307、BuildingBuilt 214、GameStepConditionList 207、QuestState 147、DayCount 137、Probability 104。每项保存 comparison operator、amount、条件开始即满足标志、Reverse、Optional、嵌套 condition list 和 action list；组合条件语义与触发评估未以字符串推断为运行结果。

**军事与地图。** MilitaryCompany、Grade、WeaponType、HostingMission、CampaignSettings、Warning 和各军事活动资产完整列在 military。Grade 所需 VillagerStatus、company 武器列表通过 UUID 索引查询；成功概率/mission duration 等按实际发布字段保留。地图切片保存生成器 backend、Voronoi、heightmap、resource config、slider 与 scene graph。MapGeneratorSettings 明确发布 Ocean/Bay/River/Lake/Island/Beach/Elevation/Promontory/Bumpiness/Slope 10 种 slider 顺序；seed、曲线、阈值和生成参数从其具体对象读取，不把 UI 名称当成生成公式。

## 全部行为树图

[behavior-trees/](behavior-trees/) 保存 **70 组 JSON、DOT、Mermaid**，不是挑选八个样例。JSON 含变量/default value、node ID、原 type、位置、slot 与 variable name、node Data、每条 connection 的原数组 ordinal、root。UUID node type 若匹配另一棵 behavior asset，保存对应目标，不更改其原值。

全图共 **817 nodes、735 connections**，以下核验全部通过：root 存在、节点 id 唯一、每条边两端属于同图、所有非 null slot 指向声明变量。**19 个从 root 不可达的节点**仍完整保留并在各 JSON 列出，反映发布图中未连接或停用的节点；不当成损坏，也不删除。DOT/Mermaid 边上的数字是原 ConnectionList 的序号，不能自动当作每个执行节点的运行时优先级。

农业 Common Croft 根 Selector 的两个分支及运输子树是真实连接数据；图表达配置控制关系，节点成功/失败定义依旧由原生程序提供。不能用静态图保证它已被游戏执行。

## UUID 声明与引用解析

新增本地 registry 从所有 `.meta` 子资产、行为树 Node/变量 Id、GUI/scene 对象 id、prefab 局部 id 建立身份表，覆盖 **218,269 个不同 UUID**、312,393 个声明出现。它不只使用顶级 `.data.meta` 的资产 id。

| UUID 形状属性分类 | 出现次数 |
|---|---:|
| 声明自身 | 312,393 |
| null | 91,961 |
| 顶级资产引用 | 78,265 |
| 同资源内局部引用 | 10,830 |
| 元数据 subasset 引用 | 68,142 |
| 跨资源对象 id 引用 | 73 |
| 未匹配 | 1,466 |

合计 563,130 个 UUID 形状属性，包含 tag8 GUID 和行为 node type 等字符串 UUID；不等同每项都为外部资源引用。registry 规则优先同资源局部作用域，再匹配 root asset、metadata subasset、跨资源对象；存在多匹配时保留 `match_count`，主目标不代表排他性证明。`Id` 等局部身份的语义按序列化位置分类，未凭 UUID 随意猜实体。

剩余 **417 个不同 UUID**、1,466 次出现，见 [unresolved-references.jsonl.gz](unresolved-references.jsonl.gz)、[unresolved-groups.json](unresolved-groups.json)。主要包括 LodConfig、材质/纹理/PrefabGuid 和 CompatibilityVariableIdList。引擎内置身份、废弃对象及跨版本引用的具体原因尚未确认，不能宣称它们坏了或虚构目标。完整 registry [uuid-registry.jsonl.gz](uuid-registry.jsonl.gz)、完整边表 [resource-reference-graph.jsonl.gz](resource-reference-graph.jsonl.gz) 与 SQLite 可查询全部目标候选。

## 查找与复建

无需第三方库，[scripts/search_semantics.py](scripts/search_semantics.py) 默认只读打开本目录 SQLite：

```powershell
python outputs/foundation-game-systems/scripts/search_semantics.py --search 'BakeryPart'
python outputs/foundation-game-systems/scripts/search_semantics.py --type PlaCAssetWorkplaceRecipe --limit 106
python outputs/foundation-game-systems/scripts/search_semantics.py --system military --limit 93
python outputs/foundation-game-systems/scripts/search_semantics.py --uuid cfb2b53e-f104-479d-9bf5-2db3845ea865
python outputs/foundation-game-systems/scripts/search_semantics.py --rid 14797
python outputs/foundation-game-systems/scripts/search_semantics.py --field ProductionCycleDurationInSec
```

`rid` 是本次索引键，不是游戏资源 ID。`--rid` 解压返回原 decoded payload；`--uuid` 返回全部声明候选及引用。SQLite 表为 `resources/declarations/fields/refs/memberships/conditions/graphs`，可按 type、路径、属性、UUID 搜索；每个 raw resource 也在 [resource-catalog.csv](resource-catalog.csv)。`payload` 使用标准 zlib 压缩 JSON 字节，未解码媒体的 payload 为 SQL NULL。

下面从既有完整 decoded archive 与原资源 manifest 创建独立副本，不覆盖已交付成果：在本项目 cwd 执行，设置任务专用变量并保留输入目录。

```powershell
$env:FOUNDATION_SEMANTICS_OUTPUT = 'work/full-semantics/rebuilt'
python outputs/foundation-game-systems/scripts/decode_additional.py
python outputs/foundation-game-systems/scripts/build_semantics.py
python outputs/foundation-game-systems/scripts/enrich_semantics.py
python outputs/foundation-game-systems/scripts/enrich_physical.py
python outputs/foundation-game-systems/scripts/extend_schemas.py
python outputs/foundation-game-systems/scripts/verify_semantics.py
```

build 会明确拒绝已存在数据库，不删除重要成果。额外 16 对象需要实际包的只读字节；其它 26,274 对象复用既有解码结果，不重新解码。全部脚本仅 Python 标准库。

## 验证与剩余边界

[semantic-validation.json](semantic-validation.json) 检查全部物理资源计数/hash、解码数量、各系统文件行数、引用目标存在、70 棵图的节点/连接/slot、106 配方的资源解析。结果 **零失败**。检索 CLI 按名字与 Bread UUID 的定向查询已通过。静态语义 catalog 的完整覆盖是本次已安装资源集，不保证未发布或运行时动态生成的资产也在其中。

程序源代码中的完整 gameplay method、运行时变量、DLC 授权、所有 condition evaluator、shader 执行和地图算法未由本目录恢复；原生代码资料见独立 native 输出。tag16 blob、部分 cache 辅助字段和 reader 版本分支保持原逆向报告的边界。用户要的资料与资源已按实际资产证据整理，本目录不会把可读 JSON 当成原项目源码或可编译工程。
