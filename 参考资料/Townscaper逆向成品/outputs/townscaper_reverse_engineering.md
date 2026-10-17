# Townscaper 逆向工程基线

> 这是早期调查的历史基线，正文中的“尚未运行/待验证”描述当时的证据范围。最新交付与逐项状态以 [完整调查索引](townscaper_complete_index.md) 为准；本文件保留用于复核早期REA记录，不覆盖后来运行证据。

目标：`D:\SteamLibrary\steamapps\common\Townscaper`

本报告使用 REA 对已安装发行包做静态分析，并用本地脚本整理 PE、Unity 资源和 IL2CPP 元数据。原始 Steam 文件未被修改，也未从目标目录删除任何文件。

## 结论

这是 Unity 2020.3.4f1 的 Windows x86 IL2CPP 构建。主程序 `Townscaper.exe` 与 `UnityPlayer.dll` 的文件版本为 `2020.3.4.703331`；`GameAssembly.dll` 是 23,498,240 字节的 PE32 原生 DLL，带有单独的 `il2cpp` 可执行节。`global-metadata.dat` 的 IL2CPP metadata magic 是 `0xfab11baf`，版本为 27，文件大小 7,273,524 字节。

证据：静态索引 [townscaper_static.json](townscaper_static.json)；REA PE 资源证据 `ev_7a3a28acd819450753d3c6fbb1970aedcf543bf4cc4d932e7a1b67cdaf5ef6a8`、`ev_909d5391af037a68180c1c93c0a32523c1fcf5fa29611a8e5051831254bc7c1b`、`ev_1b5762c36af73467bdb104af9520e9c6ebc794e65b3170a3406d9aff3007a19d`；REA managed classification 证据 `ev_fea42fc12554589682c559a3c9da5e0f3d6a05e2792e725dc897ff190095ece3`、`ev_55124edefaf51f2105869d5ce690c1ea7ce774874a69d1457a6026f176dcf75b`、`ev_3de192a6b5a9363c40b9369e56e664209b719186250a2fbd1a17a6a167c5515b`。

REA 的托管检查将 `Townscaper.exe`、`GameAssembly.dll` 和 `UnityPlayer.dll` 都分类为 `not-managed`，原因是 PE 没有 CLI data directory；这与 IL2CPP 的“托管元数据 + 原生转换代码”布局一致。这里的 IL2CPP 结论来自独立的 metadata header、`il2cpp` 节、PDB/文件名和发行包配置，不能把 `GameAssembly.dll` 当成可直接反编译的 CIL 程序集。

## 包结构

- `Townscaper.exe`：PE32 GUI 启动器，入口 RVA `0x125d`，5 个节，SHA-256 `4bcb61b1afd9db11df9cbfe7d94317dabc8b0d1f2e58c7a385db953551722116`。
- `GameAssembly.dll`：PE32 x86 原生游戏逻辑，5 个节，其中 `.text` 约 1.8 MiB、`il2cpp` 约 15.6 MiB、`.rdata` 约 2.9 MiB；SHA-256 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。
- `UnityPlayer.dll`：Unity 原生运行时，7 个节，SHA-256 `0fe94ef87e762fe81076334ba656538a137ac66d5b1a4f31749cb313d802f764`。
- `baselib.dll`：Unity/IL2CPP 基础库，SHA-256 记录在静态索引中。
- `Townscaper_Data/Plugins/x86/Rewired_DirectInput.dll`：Windows 输入插件。
- `Townscaper_Data/il2cpp_data/Metadata/global-metadata.dat`：IL2CPP 元数据；`Townscaper_Data/Resources` 和各 `assets/resource` 文件承载 Unity 场景、材质、网格、音频与 UI 资源。

`ScriptingAssemblies.json` 列出 84 个构建程序集，包含 `Assembly-CSharp.dll`、`Assembly-CSharp-firstpass.dll`、`FuryStudios.FurySDK.*`、`Unity.Timeline.dll`、`Unity.TextMeshPro.dll`、`Rewired_Windows.dll`、`Ookii.Dialogs.dll`、`NintendoSDK.dll` 等。`RuntimeInitializeOnLoads.json` 记录了 Crosstales 文件浏览器初始化、I2 Localization 注册、Fury 平台 SDK 注册等启动入口。

## 场景与功能模块

Unity 资源字符串确认了三个场景：

- `Assets/Scenes/Boot.unity`
- `Assets/Scenes/Placemaker.unity`
- `Assets/Placemaker/Scenes/FlatscreenUi.unity`

`globalgamemanagers.assets` 中存在 `BootMaster`、`Placemaker`、`Placemaker.Audio`、`Placemaker.Graphs`、`Placemaker.Life`、`Placemaker.Modules`、`Placemaker.Modules.Processing`、`Placemaker.Props`、`Placemaker.Quads.GridGeneration`、`Placemaker.SceneProcessing` 和 `Placemaker.Ui`。

从 IL2CPP metadata 的精确字符串表中观察到的游戏侧符号包括：

- 世界/网格：`Grid`、`GridGenerator`、`GridConstants`、`DottedGrid`、`SmallGrid`、`LargeGrid`、`SnapToGrid`、`LoadCentralGridBit`、`LoadGridFocus`。
- 体素/网格生成：`Voxel`、`AddVoxel`、`RemoveVoxel`、`PaintVoxel`、`IntegrateVoxel`、`GetMeshWithVoxelType`、`BigMesh`、`BigMeshPart`、`BitMeshQuadChange`、`Rebuild`、`DelayedGraphicRebuild`、`DelayedMaterialRebuild`。
- 建筑/装饰/生命：`House`、`Bird`、`BirdFlock`、`BirdLanding`、`BirdTakeoff`、`SpawnBirds`、`ApplyDecor`、`ApplyWater`、`Sandbank`、`Fence`、`Window`、`Door`、`Plants`、`Lighthouse`。
- 颜色与界面：`ColorPick`、`Palette`、`CalculateColors`、`ApplyMaterialColors`、`RandomColor`、`Placemaker.Ui.PaletteMenu`、`Placemaker.Ui.UiMaster`、`Placemaker.Ui.SaveCard`、`Placemaker.Ui.SettingsMenu`、`Placemaker.Ui.ScreenshotButtons`。
- 相机/世界坐标：`SaveCamera`、`ScreenshotCamera`、`CalculateWorldBounds`、`GetWorldPos`、`ScreenToWorldPoint`、`RotateWorldPoint`。

资源字符串还直接出现 `Placemaker/AoStack`、`Placemaker/Bird`、`Placemaker/Border`、`Placemaker/Carnival`、`Placemaker/ColorPick`、`Placemaker/Debris`、`Placemaker/Dust`、`Placemaker/Fence`、`Placemaker/Grid`、`Placemaker/Ground`、`Placemaker/House`、`Placemaker/Plants`、`Placemaker/Sandbank`、`Placemaker/Skybox`、`Placemaker/Splash`、`Placemaker/Voxel`、`Placemaker/Water`、`Placemaker/WaterShadow`、`Placemaker/Window`。

这些观察支持下面的高层模型：Boot 场景负责初始化，Placemaker 场景持有可编辑城镇/体素世界，FlatscreenUi 场景提供菜单和控制界面；用户输入驱动网格上的体素变更，随后触发网格/材质重建与房屋、装饰、水体和鸟类等派生对象更新。这个调用顺序是静态结构推断，尚未由运行时跟踪证明。

## 存档、截图与平台集成

IL2CPP 字符串表包含 `SaveSystem`、`SaveFile`、`SaveFileAsync`、`SaveCurrent`、`SaveAndQuit`、`LoadSave`、`LoadSaveToByteArray`、`SaveMetaSaveToDisk`、`LoadMetaSaveFromDisk`、`MetaSave`、`GetUniqueSaveName`、`MoveAllSaves`、`TryLoadLastSave`、`SaveScreenshotToDisk`、`CaptureScreenshot`、`ScreenshotButtons`、`SaveCamera` 等符号。

`level2` 资源中出现绝对路径片段 `/Users/Oskar/AppData/LocalLow/Oskar Stalberg/Townscaper`，同时资源中还有 `com.oskarstalberg.townscaper` 和 `StreamingAssets/PS4SaveIcon.png`。这说明发行包内的存档系统以 Oskar Stalberg/Townscaper 为产品路径，并保留跨平台存档图标资源；Windows 实际运行时的重定位结果仍需要受控运行时证据确认。

输入/平台侧存在 `Rewired_Windows`、`Rewired_DirectInput.dll`、`XInput`、`DirectInput8`、`Platform_Steam`、`Platform_Steam_Base`、`FuryStudios.FurySDK.StandalonePC`、`FuryStudios.FurySDK.Noop` 和 `NintendoSDK` 字符串。可确认发行包包含这些集成层及其静态 API/资源线索；不能仅凭字符串断言 Steam API 在当前运行中已建立连接。

## PE 资源观察

REA 的 `inspect_pe_resources` 完整遍历了 PE 资源树：

- `Townscaper.exe`：12 个资源、28 个目录项、1 组图标。
- `GameAssembly.dll`：无 PE 资源。
- `UnityPlayer.dll`：6 个资源、14 个目录项。
- `UnityCrashHandler32.exe`：18 个资源、41 个目录项、2 组图标。

这些是静态资源树和 payload 哈希，不代表系统实际选择的语言、图标解码结果或窗口加载行为。

## IL2CPP 函数级映射

前一轮先使用 Perfare Il2CppDumper 从同一份 `GameAssembly.dll` 与 `global-metadata.dat` 恢复 IL2CPP 方法表、签名和 RVA，再用 Capstone 对每个入口做 32 位 x86 有界反汇编。工具输入的 `GameAssembly.dll` SHA-256 为 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`；metadata version 为 27；方法表共 94,368 项，筛选了 29 个与建造、网格、存档和 UI 直接相关的方法。完整机器可读结果在 [townscaper_il2cpp_functions.json](townscaper_il2cpp_functions.json)，原始恢复结果在 [work/reverse/il2cpp](../work/reverse/il2cpp)。

关键入口如下：`Graph.AddVoxel` RVA `0xe6ae80`、`ApplyAction` `0xe6b480`、`IntegrateVoxel` `0xe6eee0`、`PaintVoxel` `0xe73610`、`RemoveVoxel` `0xe73950`、`Save` `0xe77c40`；`GridGenerator.HexToPlane` 四个重载位于 `0xe13a30`、`0xe13ac0`、`0xe13b80`、`0xe13c00`，`GetQuad` 位于 `0xe11020`/`0xe116a0`；`WorldMaster.GetSaveString` `0x3f7a90`，`Load(string)` `0x3f8420`，`New()` `0x3f84d0`；`SaveSystem.GetSaveFilePath` `0xa01780`、`LoadSave` `0xa02840`、`SaveMetaSaveToDisk` `0xa03390`；`UiMaster.LoadString` `0x3e5d90`、`StartNew` `0x3e68f0`、`DefaultPath` `0x3e5930`。

直接调用关系给出三条可复核的静态路径。第一，`WorldMaster.GetSaveString` 依次触及 `SaveData.Clear`、`Graph.Save` 和 `TextSaveSystem.SaveToString`；`WorldMaster.Load(string)` 触及 `SaveData.Clear` 与 `TextSaveSystem.LoadFromString`。第二，`WorldMaster.New` 触及 `SaveData.Clear`、`GridGenerator.GetStartingHex` 和 Unity 随机数接口，说明新世界初始化会清理保存状态并选择起始六边形。第三，`Graph.ApplyAction` 解析动作后进入 `BinaryTreeSearchVoxel` 与 `Graph.PaintVoxel`；`Graph.AddVoxel` 触及角点获取、体素查找/创建和 Unity Transform 父子关系；`Graph.IntegrateVoxel` 触及网格共享网格更新与 `Sandbanker.Reset`。这些是有界反汇编中解析到的直接调用观察，不等同于完整运行时调用图。

存档类字段和常量也已恢复：`SaveSystem` 使用 `saveFilePrefix = "Town"`、`saveFileDirectoryName = "Saves"`，扩展名为 `.scape`；`MetaSave` 持有 `path`、`fileName`、`saveData`、`existsOnDisk`、异步读写请求和时间戳字段；`WorldMaster` 持有 `UiMaster`、`GridGenerator`、`Graph`、`Maker` 等核心对象；`Voxel` 暴露 `type`、`height`、`cost` 字段。类字段清单和方法原型均保留在 JSON 与 `dump.cs` 中。

该阶段的限制已明确记录在 JSON：Il2CppDumper 恢复的是元数据签名与地址，不是原始 C#；Capstone 每个函数最多读取 120 条指令或遇到首个 `ret`；共享泛型代码地址、间接调用、运行时分派和实际执行路径仍未解析；本次没有启动游戏或读取用户存档。

## Ghidra 原生伪代码

已配置官方 Ghidra 12.1.4 与 Temurin JDK 21，并将用户环境变量 `GHIDRA_INSTALL_DIR`、`JAVA_HOME` 持久化。Ghidra headless 成功导入同一 SHA-256 的 `GameAssembly.dll`，读取发行包旁的 `GameAssembly.pdb`，并保存本地分析项目。全量自动分析在 600 秒时停止，但导入、PDB 符号、函数创建和关键区域分析已经保存；定点脚本随后对 10 个关键入口完成伪代码输出，详见 [townscaper_ghidra_decompile.md](townscaper_ghidra_decompile.md)。

Ghidra 伪代码把静态调用链具体化了：`WorldMaster.GetSaveString` 清理 `SaveData`，调用 `Graph.Save`，再调用 `TextSaveSystem.SaveToString` 并写回 `lastSaveString`；`WorldMaster.Load(string)` 清理保存数据后调用 `TextSaveSystem.LoadFromString`；`WorldMaster.New` 清理状态、调用 `GridGenerator.GetStartingHex` 和随机数接口。`SaveSystem.LoadSave` 会检查当前对象、调用 `MaybeSaveCurrent`，再调用 `WorldMaster.Load(SaveData)`、`SaveData.Clear`、`ChangeState`，错误路径写入 Unity 日志。`GridGenerator.HexToPlane(int2)` 直接转入 `Os.Hex.HexMath.HexToPlane`。

体素路径比元数据层更具体：`Graph.ApplyAction` 根据动作分支调用 `Graph.RemoveVoxel`、`Graph.AddVoxel` 或 `Graph.PaintVoxel`，并使用世界坐标到平面坐标转换、体素二叉搜索、点击效果和错误日志；`Graph.AddVoxel` 获取/创建角点和新体素，设置 Transform 父子关系，随后调用 `Graph.IntegrateVoxel`；`Graph.PaintVoxel` 更新子对象并调用 `Graph.QubeUpdated`；`Graph.Save` 遍历 Transform 子项，把体素/角点数据写入 `SaveData` 列表。上述关系来自 Ghidra 生成的非源代码伪代码和函数引用，仍需 REA 原生 Evidence 或运行时观察验证间接分派与真实执行条件。

## 新增：存档编码、输入与平台容器

已补充11个定点函数，分别保存在 [输入与存档反编译](townscaper_save_input_decompile.md) 和 [字母表与平台存储反编译](townscaper_storage_alphabet_decompile.md)。逐项来源和详细解读见 [存档、输入与平台存储结论](townscaper_save_input_findings.md)。

文本存档是最低有效位优先的自定义位流，字母表为 `ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyzw0123456789_-`。头部包含3个5位字段、偏移起点和类型表；各列保存x变化、y偏移、地面标记、稀疏高度类型码及列终止码。不能按标准Base64解码。33/33个相关字面量经 UTF-16LE SHA-1 与 IL2CPP 字符串精确匹配。[字面量映射](townscaper_save_input_literals.json)

`SaveSystem.LoadSave` 调用 `WorldMaster.Load(SaveData)`（RVA `0x3f83d0`），与字符串重载的 `TextSaveSystem.LoadFromString` 路径不同。两种重载在成功后写入 `state=1`，并重置变更标记；后续状态迭代未实测。`GetSaveFilePath` 返回容器内相对路径 `Saves<分隔符><fileName>`，容器来自 `Platform.SDK.Storage("storage")`。StandalonePC 根路径由 `standalone.storageRoot` 与 `storageRootSuffixPc` 决定，文件拼接再受容器行为设置影响；当前用户的绝对目录尚未确认。

`ActionInputManager.Update` 使用 Rewired 的 `Zoom`、`Right Stick X/Y`、`Horizontal`、`Vertical`、`Forward`、`Change State`、`Toggle Menu`、`Toggle Legend` 和 `Color 0–14` 等动作名。`MasterClicker.AddClick` 在hover可添加且非拖动时检查网格/坐标，开始动作，调用 `Graph.AddVoxel`，记录 `Maker.AddAction`，标脏并触发点击效果。这里确认的是静态控制路径，不是当前用户实际按键或鼠标执行记录。

## REA 原生 Evidence 与分析边界

REA 6.4.0 已通过新进程加载 Ghidra 12.1.4，完成默认自动分析，并对4个核心函数导出完整 dossier，包含伪代码、基本块、引用和 value flow。1,844,133字节的 [原生 Evidence bundle](townscaper_rea_evidence_v2.json) 已通过 REA `inspect-evidence-bundle` 校验；[可读索引](townscaper_native_evidence_summary.md) 保存全部基本块和调用入口。会话已正常关闭。此前7条PE/托管分类Evidence保留在旧bundle，未被覆盖。

| 方法 | 地址 | 基本块 | Evidence |
|---|---|---:|---|
| WorldMaster.GetSaveString | `0x103f7a90` | 10 | `ev_cf878edb6538bf17c0a896993b9ae0bd79d1a03484e4de7455fa8f4ad1a93aef` |
| WorldMaster.Load(string) | `0x103f8420` | 11 | `ev_d2c0088cf64c7e6f1ae021aaf34790d2ac783140bbcad1be4d2925a59815cc09` |
| Graph.ApplyAction | `0x10e6b480` | 39 | `ev_dee9fdf71c96246fbd17656600696c8bd8b6a73fff674102c000deb194b1e689` |
| Graph.PaintVoxel | `0x10e73610` | 51 | `ev_78a536b0674c3898bce411d0ac506006fc5bb948d1287cc47c735c54c1b74265` |

本轮REA临时副本未加载发行包PDB，函数名称为 `FUN_*`，上述业务名称由独立元数据按地址关联。4个value flow记录均未截断，已知省略数为0；这不证明分析模型覆盖所有运行时路径。Ghidra将初始化thunk `0x1018e950` 标为不返回，首次初始化分支因而丢失fallthrough；独立原始字节校验确认该thunk跳到 `0x1015fca0`，包装函数在 `0x1015fcb1` 有RET尾部。尚未实测嵌套调用的返回行为，不能把这个数据库标记当成实际终止的证明。[返回尾部字节核验](townscaper_initializer_return_check.json)

Ghidra/JDK路径已显式写入Codex的REA配置。IDA Free 9.4已安装、放置许可证并通过许可检查进入PE加载阶段，但Free不提供IDAPython/IDAlib，也不接受 `-S`，不能接入REA的IDA provider；此前把申请Free许可证当成可完成该provider配置的步骤已纠正。Hopper没有官方Windows版本。安装日志、配置备份位置、验证结果与工具约束见 [工具配置报告](townscaper_tool_setup.md)。

## 调查状态

| 原始问题 | 状态 | 证据边界 |
|---|---|---|
| 构建架构与包身份 | 已回答 | PE、IL2CPP metadata、文件哈希、REA分类 |
| 场景及资源组织 | 静态基线已回答 | Unity资源字符串；对象完整序列化结构未恢复 |
| 核心游戏模块及体素修改 | 已回答静态入口与重点路径 | 29个地址映射、21个本地定点反编译、4个REA dossier |
| 存档与输入集成 | 静态路径已补齐 | 文本编码、平台容器、输入动作和点击路径；物理绑定及实际用户目录未验证 |
| 实际启动顺序与Steam初始化 | 未验证 | 当前工作未运行游戏，静态字符串不证明实时连接 |

## 交付物与备份

- [townscaper_reverse_engineering.md](townscaper_reverse_engineering.md)
- [townscaper_static.json](townscaper_static.json)
- [townscaper_rea_evidence.json](townscaper_rea_evidence.json)
- [townscaper_il2cpp_functions.json](townscaper_il2cpp_functions.json)
- [townscaper_ghidra_decompile.md](townscaper_ghidra_decompile.md)
- [analyze_townscaper.py](../work/analyze_townscaper.py)
- [analyze_il2cpp.py](../work/analyze_il2cpp.py)
- [TownscaperDecompile.java](../work/ghidra_scripts/TownscaperDecompile.java)
- [Il2CppDumper 恢复结果](../work/reverse/il2cpp)
- [PROJECT.md](../PROJECT.md)

工作区 Git 提交包含上述报告、Evidence 和分析脚本；Steam 安装目录没有 Git 初始化、没有写入，也没有删除。
