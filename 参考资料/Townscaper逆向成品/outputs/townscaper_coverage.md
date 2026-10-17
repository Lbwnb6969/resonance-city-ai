# Townscaper 方法覆盖边界

该清单完成元数据层面的范围界定，并为批量反编译提供去重地址。它不把方法名称、元数据声明、反编译成功或静态可见性当作行为验证。

共读取 8,132 个类型、61,885 个方法定义、94,368 条 ScriptMethod alias。ScriptMethod 中只有 57,102 个不同非零 RVA；一个原生过程能够承载多个方法、泛型实例和无操作回调。

当前应用与平台分析目标共 2,087 个非零 RVA：应用清单 1,734，平台清单 369，两者相交 16。目标包含 2,784 条已分类 ScriptMethod alias，以及 1 个只由 dump.cs 定义关联的 RVA。

## 归属规则

`dump.cs` 开头的 Image 起始 TypeDefIndex 将全部 8,132 个类型归入 55 个镜像；连续类型索引已核对。类型的 namespace、嵌套父类型和镜像归属一起参与分类。空 namespace 的闭包、协程和泛型嵌套类型继承同镜像父类型的 namespace，全部父类型已匹配。

`Assembly-CSharp.dll` 中 Placemaker、Os.Hex、Os.Utils 定义归入游戏应用。全局作用域的 Beatbox、CustomCameraProjection、PlatformManager、FurySystemMessenger、LocalizationService、BindingRow、CornerImage、TextFps、StoreAssetExporter/Frame、ExampleDebugMenu 归入应用集成；此分类不证明作者身份。

同镜像中 Rewired、I2、SFB、CielaSpike 定义归入第三方。ExampleScript 单列为来源未确认的示例，不把示例逻辑计为游戏核心。FuryStudios 的各镜像是平台 SDK，另列并纳入平台分析。UnityEngine/Unity.Mathematics/TextMeshPro 与 .NET/Mono 镜像分别列为引擎托管代码和基础运行库。

同名类型跨镜像冲突时，用定义 RVA 消歧；仍共享地址的记录保留候选 TypeDefIndex。全部候选属于同一类别时类别仍可确定，但不伪造唯一镜像归属。

全局仍有 4,660 条 alias 的唯一 owner 未确定，其中只有 10 条连类别也无法唯一确定；这些集中在重名或共享的运行库辅助定义。Placemaker/Os 核心的 ScriptMethod owner 均已关联。所有应用与平台的直接定义 RVA 已纳入目标清单。

## 方法和类型统计

| 类别 | 类型 | 方法定义 | 有直接 RVA | 无直接 RVA | 接口/abstract 声明 | ScriptMethod alias | 不同非零 RVA |
|---|---:|---:|---:|---:|---:|---:|---:|
| application | 392 | 2075 | 2011 | 64 | 16 | 2171 | 1699 |
| application-generated-support | 3 | 1 | 1 | 0 | 0 | 0 | 0 |
| application-integration | 16 | 56 | 56 | 0 | 0 | 56 | 41 |
| bundled-example-provenance-unconfirmed | 5 | 35 | 35 | 0 | 0 | 35 | 22 |
| bundled-third-party | 2008 | 19839 | 17094 | 2745 | 1450 | 21377 | 15140 |
| dotnet-managed-runtime | 4213 | 31618 | 29280 | 2338 | 1099 | 61640 | 34518 |
| platform-sdk | 160 | 641 | 513 | 128 | 111 | 557 | 369 |
| unity-managed-runtime | 1335 | 7620 | 7248 | 372 | 114 | 8522 | 6251 |

各行 RVA 会相互重叠，不能将行数相加当成二进制函数总量。`-1` 只代表方法定义没有直接 RVA，泛型实例仍能在 ScriptMethod 中出现；它不单独证明方法被裁剪、内联或不存在。

## 应用子系统导出范围

| 子系统导航分类 | alias | 不同非零 RVA | 有原生 alias 的类型 |
|---|---:|---:|---:|
| application-integration-support | 50 | 36 | 13 |
| audio | 8 | 8 | 3 |
| author-helpers | 293 | 167 | 21 |
| graph-topology | 88 | 82 | 16 |
| grid-generation | 82 | 81 | 11 |
| hex-math | 39 | 38 | 4 |
| input-camera-building | 95 | 88 | 10 |
| life-birds | 47 | 45 | 6 |
| module-mesh-generation | 100 | 97 | 15 |
| platform-sdk | 557 | 369 | 117 |
| props-decorations | 86 | 64 | 19 |
| save-storage-codec | 133 | 106 | 19 |
| scene-processing | 2 | 2 | 1 |
| ui | 861 | 694 | 126 |
| world-rendering-support | 318 | 251 | 62 |
| world-state | 25 | 24 | 2 |

子系统名是导航分类；Maker 同时承载输入和历史，UI 命名空间同时承载点击与相机，不据分类名称推断单一职责。所有 alias 和原生地址保持可追溯，批量输出每 RVA 一次。

## 深读优先顺序与待验证问题

| 范围 | 首要过程 | 待解决行为 |
|---|---|---|
| 世界状态 | WorldMaster.Iterate/Update/LateUpdate/KeepGoing | 分阶段调度、dirty 消费、加载完成和时间预算 |
| 格网生成 | GridGenerator.IterateBit/IterateCluster/IteratePatch/IterateGenerateCenter/GetVertOrIterate | 六边形坐标到不规则四边形格网、边界和种子数据 |
| 拓扑 | Graph.IntegrateVoxel/IntegrateCorner/RemoveVoxel/QubeUpdated/Iterate | 邻接重建、占据位和重建队列 |
| 模块求解 | WaveFunctionCollapse.FillQubePossibilities/RemovePossibleModule/Iterate0/Iterate1/IterateDecor | 候选兼容规则、传播、权重、冲突恢复 |
| 网格集成 | ModuleBuilder.ApplyModule/ApplyDecor/Iterate；BigMeshMaster.AddMesh/MaybeApply/ReturnMesh | 模块朝向、材质、网格批处理和清理 |
| 道具 | PropPlacer；PropNode；PropRadiusIterator | 装饰放置、碰撞半径、连接和重建触发 |
| AO/阴影 | AoBaker；ShadowBaker；WorldMeshes；MaterialMaster | 烘焙/着色路径、GPU 材质与代码参数的关系 |
| 建造与历史 | Maker.BeginNewAction/EndAction/Undo/Redo；Action.GetReverse；MasterClicker | 撤销分组、redo 分支、拖动、颜色拾取、桶和推土机 |
| 存档与设置 | StorageUtils 各协程 MoveNext；SaveSystem；SettingsData.ctor | XML/PNG/文本格式、默认值、自动保存、异步时序 |
| UI/相机 | UiMaster.MaybeSetup；OrbitalCamera；InputModeManager；SunButton | 初始化顺序、控制器切换、相机限制、太阳参数 |
| 动物与环境 | BirdFlock.OnUpdate/SetState；BirdLanding；ButterflyFlock；Flow.Update | 栖息点、鸟群状态、生成触发和流场 |
| 平台 | PlatformManager；StandalonePCPlatformSDK；BasePlatformSDK；FurySystemMessenger | 实际平台 SDK 选择、存储根、对话框和本地化服务 |

## 交付和验证

清单文件：

- `townscaper_method_inventory.json`：镜像/类型、应用与平台的字段和方法声明、源文件 SHA-256、alias 候选归属和原生地址映射。
- `townscaper_application_methods.tsv`：应用去重 RVA 导出输入。
- `townscaper_platform_methods.tsv`：平台去重 RVA 导出输入。
- `townscaper_selected_methods.tsv`：二者并集导出输入。

TSV 列为 `va, rva, subsystem, alias, global_alias_count`。VA 基于 PE 的首选 ImageBase `0x10000000`，运行时需要加进程实际重定位基址。JSON 同时保留该 RVA 在全局 ScriptMethod 中的全部 alias，以避免将共享运行库过程误称成特定游戏过程。

本清单的 110 个目标 RVA 与别的分类共享，必须结合调用点 MethodInfo/泛型上下文解释。尤其通用构造函数、identity getter、空回调不能凭 Ghidra 最终名字认定唯一源码方法。

生成命令：`python work/build_method_inventory.py`，报告命令：`python work/write_coverage_report.py`。验证连续 TypeDefIndex、全量定义 RVA 纳入目标、目标 RVA 非零去重、代表性 namespace owner 与源定义一致。原 Steam 安装只读。

后续导出已完成：2087/2087 selected RVA均有原生body，加编译器续体共2175独立函数；88个匿名FUN引用目标全部有body。精确文件、hash和调用边界见[townscaper_native_graph.json](townscaper_native_graph.json)。全部直接依赖并未闭合：9621条边指向未导出的命名运行库/引擎过程。

本表的深读问题是初始调查清单，当前回答和静态/运行边界见[完整调查索引](townscaper_complete_index.md)与[独立审计](townscaper_remaining_audit.md)。GPU全部84业务program及资源/拓扑/UI补充已有独立交付；这些覆盖不声称作者原始源码、全部第三方内部或所有输入行为被恢复。
