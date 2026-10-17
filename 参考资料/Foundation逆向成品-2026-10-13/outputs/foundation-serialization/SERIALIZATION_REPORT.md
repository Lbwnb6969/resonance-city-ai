# Foundation 资源对象与缓存解码报告

目标为 `D:\steamtest\steamapps\common\Foundation`，沿用上一轮 7 包、34,884 文件的已验证库存。本次直接按库存的绝对字节偏移只读读取原包；没有启动游戏或修改安装文件。以下全量资源证据是 **local-package-bytes**，不是新增 REA Evidence。类型代码核证另来自本地 Ghidra 输出 [原生分析](../foundation-native-analysis/NATIVE_ANALYSIS.md)。

## 已完成的覆盖

选择 `.data/.meta/.bt/.gui/.prefab/.scene` 六种扩展共 28,692 项，全部得到格式归属和结构验证。

| 格式 | 文件数 | 本次验证 |
|---|---:|---|
| 未压缩 v2 对象 | 26,274 | 字典、节点与属性链、类型载荷、全区间闭合；独立重编码与原始字节逐一完全一致 |
| FBX xbin 缓存 | 904 | 动画、骨骼矩阵、网格、索引、形态目标数组全部读至 EOF；顶点步长、索引边界、形态位移数量核对 |
| S3TCDXT 纹理缓存 | 1,172 | 标志、宽高、各 mip 的 DXT 块大小、完整载荷至 EOF |
| PNG 缓存 | 297 | 完整 chunk 边界、所有 CRC、zlib 解压、像素扫描线长度 |
| TIFF 缓存 | 36 | IFD 目录及值边界、strip 范围、压缩 strip 解压后的像素字节数 |
| 字体缓存 | 9 | header、多字号列表、字符矩形与字符 metric 数组至 EOF |

零解码错误。v2 共 6,856,434 个节点与属性。对象分类为 `.meta` 16,528、`.data` 8,317、`.bt` 70、`.gui` 932、`.prefab` 422、`.scene` 5。其余 2,418 项均为 `.meta`，扩展名并不意味着它一定是对象元数据，纹理和字体缓存也以该后缀发布。

验证入口为 [对象验证](validation-summary.json)、[字节重编码](roundtrip-validation.json)、[缓存验证](cache-validation-summary.json)。每项的包路径、包内绝对偏移、长度及 SHA-256 位于 [resource-status.json](resource-status.json)。

## v2 二进制格式

所有数字为 little-endian，UUID 的 16 字节以 network byte order 格式化。文件布局：

```text
u32 version = 2
u32 compressionFlag = 0
u32 bytesAfterThese12Bytes
u32 nameCount
nameCount 个 UTF-8 NUL 结尾名称
u32 objectBlockByteLength
objectBlock:
    u32 rootNodeOffset = 4
    nodes 与 attributes，按其 offset 寻址
```

offset 的基址是 `rootNodeOffset` 字段本身，0 为 null。节点是 `u32 nameIndex,nextSiblingOffset,firstChildOffset,firstAttributeOffset` 共 16 字节；属性是 `u32 nameIndex,nextAttributeOffset,typeTag` 共 12 字节，再跟随对应载荷。字典名称用于节点和属性，两者共用同一表。保持有序 children 列表才能保留重复 `Item` 和 `Node`，不能把重复名称覆盖成单个键。

| tag | 载荷 | 本次计数 | 证据 |
|---:|---|---:|---|
| 0 | uint32 | 41,850 | 原生 reader `0x1403267d0` |
| 1 | uint64 | 2 | 原生 reader `0x140326ef0`；样本值均为 0 |
| 2 | int32 | 462,166 | 原生 reader `0x140326680` |
| 4 | float32 | 1,165,030 | 原生 reader `0x140327dd0` |
| 5 | float64 | 26 | 原生 reader `0x1403279d0`；样本值均为 0 |
| 6 | bool 的 u32 0/1 | 324,823 | 原生 reader `0x140327040` 和全量载荷 |
| 7 | UTF-8 NUL 字符串 | 691,168 | 原生 reader `0x140326920` 和全量解码 |
| 8 | 16 字节 UUID | 554,416 | 原生 ComCGuid reader `0x140326c40`；资源声明引用实值核对 |
| 13 | int32x2 | 887 | 原生 validator 确认宽度 8；类型解释由正负图坐标推断 |
| 16 | u64 长度 + raw bytes | 1,352 | 文件长度及 EOF 核对；原生 validator 仅用长度低 32 位计算总长 |
| 17 | UTF-16LE NUL 字符串 | 17,478 | 原生 reader `0x140326aa0` 和全量解码 |

程序也支持 tag3 signed int64 和其他 vector 型宽度；当前六扩展样本没有这些 tag，解码器遇到未支持 tag 会明确报错。当前对象集为未压缩 v2，原生代码支持 flag1、附加 header 的 v3，不能把样本格式推广成全部版本。tag16 在本样本中高 32 位全部为零，不能推断程序支持超过 4 GiB 的 blob。

## UUID 与资产类型

解出 15,589 个唯一 `.meta` UUID 声明，无重复 UUID，共 391 种资产 type。[uuid-definitions.json](uuid-definitions.json) 将 UUID 指向包、资源、type、scriptingId；[asset-types.json](asset-types.json) 列计数；[observed-type-schemas.json](observed-type-schemas.json) 按资产类型归集出现的属性路径与 tag。

排除 `.meta` 的自身 id 声明，得到 77,759 次已匹配元数据引用、91,930 次 null UUID、171,292 次未匹配声明的 UUID。最后一类包括行为树变量、节点、连接、prefab 局部对象 id、模型 subasset、引擎对象等，不能据此判定坏引用。属性 tag8 的总数还包含元数据子对象声明，因此不要把这三个计数与 tag8 总数直接等同。

[decoded-resources.jsonl.gz](decoded-resources.jsonl.gz) 是全部 26,274 项的人可读 JSONL 压缩归档，每行一个资源；`roots` 的 `@` 保存属性，重复 `Item/Node/Slot/Connection` 保持数组。`metadata` 保存匹配的资产声明。[uuid-references.jsonl.gz](uuid-references.jsonl.gz) 按资源保存各引用和匹配目标。`examples/` 包含易于直接阅读的展开 tree 与 offset；[mechanics-examples.json](mechanics-examples.json) 汇总以下八个聚焦对象。

## 实际玩法对象

这些数值是当前包发布的配置，未观察运行时执行，实际循环行为和加成仍由程序实现决定。

**生产链。** 风车配方的 `ResourceListNeeded` 引用 `WHEAT` 数量 4，`ResourceListProduced` 引用 `FLOUR` 数量 1。面包房配方需要 `FLOUR` 3、`WATER` 1，产出 `BREAD` 5。每个 UUID 均通过相应 `.data.meta` 的 `scriptingId` 与具体资源路径匹配；不是根据文件名猜配方。小麦农场配方的输入和输出都为 `WHEAT` 1，不能将其当作农场从无到有生成小麦的执行算法。

**村民需求。** `NeedFoodBasic.data` 的 `NeedTypeName=FOOD`、`NeedTypeList=[FOOD]`、`FillDurationInSeconds=630`、`FillRate=630`、`GracePeriod=180`、`DaysBeforeReapplyingHappinessFactor=30`、`DelayAfterUnsuccessfulFill=60`，`RestrictToLocalProviders=true`。`HappinessFactor` 解析到 `HAPPINESS_FACTOR_LACK_FOOD`。基础娱乐需求同样有 FillDuration/FillRate 630，GracePeriod 300、需求类型 TAVERN，幸福度引用解析到 `HAPPINESS_FACTOR_LACK_ENTERTAINMENT`。字段名不含单位的项按原名列出，不把 630 的 fill 字段等同为观察到的耗时。

**农业 DLC 鸡舍。** `BF_CommonCroftPart_ChickenCoop.data` 引用 `AGRI_ANIMAL_CONFIG_CHICKEN`，`MaximumAnimalSpawnCount=5`、生成 cooldown 420 秒、喂食 cooldown 180 秒、工人喂食 15 秒、繁殖最低饱食度 0.5、每日饲料消耗字段约 0.3。`ProductionCollectionCycleList` 明确有两项：`AGRI_RESOURCE_EGGS` 数量 1，`Time.Type=SECONDS,Time=90`；`AGRI_RESOURCE_CHICKEN` 数量 1，`Time.Type=SECONDS,Time=160`。子动物引用 Chick，额外动物引用 Rooster。鸡配置初始饱食度约 0.2、饱食度循环 2000 秒、消费每秒增加约 0.01、饥饿 cooldown 420 秒；状态引用已匹配 Feed/Follow_Feeder/Perch/Flee/Rest/Explore 六个具体对象。

**行为树。** `Behavior Farmer Common Croft.bt` 的 NodeGraph 13 个节点、12 条连接，root 指向 Selector。第一支是 Sequencer：RepeatUntilFail 的内部子 Sequencer 先执行 `PlaCAgentNodeCommonCroftFindResourceForDepot`（`IsFindingResourceInternal=true`），再调用资源运输子树；之后查外部来源（同类节点的该字段 false），再运输。第二支是 Sequencer：FindInteractiveLocationInBuilding → SetActivityMessage → GoTo → Wait。顺序来自保存的 ConnectionList 顺序。节点 type 与图连接、变量 slot UUID 均已解码；此处描述资产保存的控制图，节点的运行成功/失败条件没有由本配置单独证明。

## 非对象缓存格式

[decoded-caches.jsonl.gz](decoded-caches.jsonl.gz) 包含 2,418 项完整结构清单及分段 hash；[cache-examples.json](cache-examples.json) 选 FBX mesh、动画、DXT、PNG、TIFF、字体各一份。没有将其它格式静默跳过。

**FBX xbin。** header 为 u8 flag（本集 0）、u32 cacheVersion（29—46）、u32 reserved（本集 0）、u32 animationCount。每动画是长度前缀 UTF-8 名称、double duration、double ticksPerSecond、u32 transformChannelCount；每 channel 有名称、u32 keyCount、`keyCount * 40` 字节的十 float TRS（position3/quaternion4/scale3）和保留的 13 字节后置字段。随后是 morph 动画 channel：mesh 名称、shape 名称表、宽度、值计数、float 权重数组和对应 u32 shape index 数组。

动画之后为 u32 meshCount。每 mesh 有名称、u32 boneCount 和每 bone 的名称/16 float matrix；四个 flag byte、三个保留的 u32 auxiliary 字段；u32 floatSlotCount 与 interleaved vertex bytes、u32 indexCount 与 u32 index bytes，最后形态目标数量，每目标名称/floatCount/三维位置差数组。前三个 flag 及最后一个 skin flag 的语义按数据布局推断。当前 vertex stride 是 60 字节（无 skin）或 92 字节（有 skin）；辅助 u32 的精确类型没有代码核证，因此以 raw 值保留。每个 mesh 的索引最大值均小于相应 vertexCount，每个 morph target 有 `vertexCount*3` floats。

所有 904 项包含 588 个动画、81,576 个 mesh、24,103,457 个顶点、55,061,373 个 index。骨骼/名称、关键帧首样本、变形首样本、buffer ranges 已解出。没有渲染 mesh、复原 FBX 文件或把 13 字节字段附会为已确定的时序语义。

**S3TCDXT。** 7 byte magic `S3TCDXT`，u32 version2，u8 ASCII format `1/3/5`，u32 width、height、mipCount；每 mip 是 u32 byteLength 加 DXT 块。每级按 `ceil(w/4)*ceil(h/4)*blockBytes` 验证，DXT1 的块 8 字节、DXT3/5 为 16。允许只有部分 mip，4 项只有顶级图，不能强制要求全部降到 1x1。没有将 DXT 原块下载或作 GPU probe。

**字体。** header u32 version4、32 个 hex 字符的 hash 加 NUL、三个 atlas 游标候选 u32、u8 flag、u32 字号数、u32 glyphMetricCount、字号 u32 列表、u32 rectangleCount；矩形是 `u16 codepoint + u32x4`，metric 是 `u16 codepoint + 7 float * 字号数`。全量字节严格闭合；各 metric float 分量与 hash 来源没有由原生代码解释。

**环境贴图缓存。** `.envmap.irr-*` 和 `.prefiltered-*` 有 PNG 或 TIFF 实际签名，不能按后缀当二进制对象。PNG 已解压验证，TIFF 包括 float HDR strip，IFD 元数据和压缩 byte 区间已核对。

## 复用命令与边界

脚本只使用 Python 标准库，已放入 [scripts/](scripts/)。在本项目目录执行：

```powershell
python outputs/foundation-serialization/scripts/decode_foundation.py --out work/serialization/recheck
python outputs/foundation-serialization/scripts/verify_roundtrip.py
python outputs/foundation-serialization/scripts/decode_caches.py
python outputs/foundation-serialization/scripts/decode_foundation.py --resource 'asset/Agent/AgentNeeds/NeedFoodBasic.data' --out work/serialization/single
```

前三条使用当前项目保存的包库存，decode 的全量输出目录可指定。roundtrip/cache 验证默认输出本 deliverable 目录；重跑之前应保存现有结果。`--resource` 是单项模式，不重跑全体；同名对象可加 `--package` 路径后缀消歧。原安装文件全程只读。

本分支完成了对象和所选 `.meta` 缓存的全量包装格式解码及验证，未承诺整个游戏源码还原。没有 runtime、所有 gameplay method、GPU renderer、压缩 v2/v3、source FBX 重建证据。资源值配置与原生函数证据应分别使用，不把字符串名称当已恢复函数符号。
