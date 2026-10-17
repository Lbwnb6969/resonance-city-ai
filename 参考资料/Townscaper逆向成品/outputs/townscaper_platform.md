# 平台选择、存储与服务边界

该发行版本实际包含StandalonePC和Noop实现。运行时主动请求SaveSystem.storageContainer得到`StandalonePCStorageContainer`，不是通过Steam常量推断；证据为[townscaper_runtime_scenario.json](townscaper_runtime_scenario.json)。启动日志分别记录两者注册，随后平台启动流程采用注册的首选类型；Steam appId=0及useSteamDrm=1仅是资产字段，本版本没有由这些字段自动证明的Steam会话。

## SDK注册与初始化

StandalonePC.RegisterSelf调用Platform.RegisterPlatformSDK，写入首选SDK类型。Noop.RegisterSelf仅提供fallback类型。Platform.Init先检查是否已有SDK，若首选类型为空则采用fallback；创建持久Platform对象、消息组件、本地化和PlayerPrefs实例，然后AddComponent选中SDK，调用其Init并保存实例。PlatformManager在Boot场景持有真实MainGamePlatformSettings：Start调用Platform.Init(settings)后SignIn；OnEnable仅在SDK已存在且没有当前用户时SignIn。身份完成后再接续场景。[首选注册](native_application/10d1660.c)、[Standalone注册](native_application/1142790.c)、[平台初始化](native_application/10d1060.c)、[Boot入口](native_application/750c60.c)、[Boot开始](native_application/750e10.c)。

Standalone.Init直接继承BasePlatformSDK.Init，Update依次驱动base及system/storage/stats三个请求调度器。supportedFeatures返回`0x2400`：ManualForceQuit(1024)与OpenURL(8192)。成就/统计/排行榜方法多返回带错误代码的NoopAsyncRequest；不能把接口存在等同于Steam成就已实现。[初始化](native_application/1142640.c)、[调度](native_application/11429b0.c)、[支持标记](native_application/1142a90.c)、[SetStat](native_application/1142870.c)。

## 实际路径和容器

资产settings.standalone.storageRoot=2、suffixPc=`/../../Oskar Stalberg/Townscaper`、containerBehaviour=0。Unity原persistentDataPath实测`C:/Users/Administrator/AppData/LocalLow/Raw Fury/Townscaper`，因此规范化后的游戏保存根为`C:/Users/Administrator/AppData/LocalLow/Oskar Stalberg/Townscaper`。运行probe只将persistentDataPath替换到工作区的同形子目录，保留后续原生路径算法；实际容器root保留`/../../`，操作系统解析后落入工作区隔离profile。[资产配置](townscaper_assets.md)、[实际返回与容器](townscaper_runtime_scenario.json)。

FilePathRootExtensions.Path按1=dataPath、2=persistentDataPath、3=streamingAssetsPath选根并拼接suffix，其他值为空根。BasePlatformSDK.Storage用ContainerID缓存并虚调用CreateContainer；Standalone.CreateContainer构造DotNet容器。GetFilePath的三个策略分别为直接root+filename、root+`container_filename`、root/container/filename；当前0忽略容器命名，不添加storage子文件夹。SaveSystem.GetSaveFilePath产生`Saves/<name>.scape`等相对路径。[根选取](native_application/10cf350.c)、[容器缓存](native_application/110bab0.c)、[构造](native_application/1142570.c)、[路径策略](native_application/1142c00.c)、[Save相对路径](native_application/a01780.c)。

## 文件请求

Standalone.SaveBytes/GetFilePath后构造DotNetSaveStorageRequest并入storage调度器。OnStarted创建缺失父目录，用FileMode.Create打开目标，启动WriteAsync；OnUpdate等待Task完成，faulted时Fail并关流，成功时关流并完成请求。它直接覆盖目标文件，没有看到临时文件rename或事务替换。LoadBytes、ListFiles、Exists、Delete同样经调度或文件API，不是远端Steam存储调用。[SaveBytes](native_application/1142ed0.c)、[写启动](native_application/110c780.c)、[完成](native_application/110c930.c)、[调度器](native_application/110af40.c)、[列举](native_application/110c380.c)。

SaveSystem上层的dirty清除与MetaSave标志不是文件写成功保证：MaybeSaveCurrent提交即清anyChange，完成callback在失败后仍标existsOnDisk/UpToDate。完整错误路径与状态详见[保存与历史](townscaper_state_save_history.md)。此结论来自代码；本轮没有向真实用户存档注入写失败。

## 本地化与网络边界

LanguageSourceAsset恢复92项Term、46项语言数据。平台settings的本地化服务类型为`LocalizationService, Assembly-CSharp`，但它的两个Translate重载均直接返回String.Empty，是SDK服务占位实现。游戏UI采用另外的I2.Localize组件；UiMaster.CheckForNonLocalizedText检查这些组件及ControlBindingKey例外，不能把两条路径混在一起。OpenURL是显式系统请求，不代表后台持续网络访问；语言资产中的Google/Spreadsheet地址属于保留配置，本轮未调用这些外部端点。[语言与映射](townscaper_localization.json)、[SDK翻译一](native_application/502d10.c)、[SDK翻译二](native_application/502d40.c)、[UI检查](native_application/3e55a0.c)、[OpenURL](native_application/1142730.c)。

## 观測与限制

本报告结合发行配置、PDB原生伪代码和限定原进程观测。保存根及实际Standalone容器已验证；后续[原版图形运行](townscaper_runtime_grid.json)实际创建D3D11设备并进入城镇场景，仍未证明控制台、手柄或在线服务环境下的另一SDK实现可达。Unity显示设置和session注册表值曾随启动变化，已恢复预先备份；原始PE及已有用户存档哈希不变，见[完整性核验](townscaper_integrity_verification.json)。
