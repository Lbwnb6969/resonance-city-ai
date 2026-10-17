# Townscaper：存档编码、输入与平台存储

目标为 `D:\SteamLibrary\steamapps\common\Townscaper\GameAssembly.dll`，SHA-256 为 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。本文整理既有 Ghidra 伪代码与 IL2CPP 元数据的静态证据，没有启动游戏、操作用户存档或观察实际输入事件。RVA 不含映像基址；该 DLL 的分析基址为 `0x10000000`。[输入与存档反编译](townscaper_save_input_decompile.md:1)

## 证据与解读边界

两份新增反编译文件涉及的字面量共33项，均由 `SHA1(UTF-16LE literal)` 与 `_stringLiteral…` 符号尾缀逐项精确匹配，核对结果33/33。此过程用于恢复字符串值，不用于判断编码算法。机器可读映射保留来源文件、符号、地址和字面量。[字面量映射](townscaper_save_input_literals.json:1)

Ghidra 对共享 IL2CPP 方法和局部变量存在类型、符号别名失真，例如把整数暂存变量标成 `OrientedModule` 或对象指针。以下位宽、字段和调用解释依据运算、正反两个方向的对应关系及元数据签名，不把每个显示名称都当成独立业务调用。[编码函数局部变量](townscaper_save_input_decompile.md:64)

## 已确认：文本存档格式

`TextSaveAlphabet..cctor`（RVA `0x3015a0`）将下列字符串赋给 alphabet，并逐字符建立索引0–63的反向字典。必须保留小写尾段 `uvxyzw` 的顺序，以及最后的 `_-`：

```text
ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyzw0123456789_-
```

这是自定义64字符字母表；不能替换成标准 Base64 或常见 Base64URL 字母表。[字母表赋值](townscaper_storage_alphabet_decompile.md:48)；[反向字典构造](townscaper_storage_alphabet_decompile.md:69)

`SaveToString`（RVA `0x302ad0`）接收 corners 和 voxels 两个列表。它沿输入 corner 顺序扫描，为每个 corner 消耗其 count 指定的连续体素项，记录首个 x、最小/最大 y、相邻 corner 的最大正 x 增量，以及高度非0的体素类型集合。该函数内没有排序步骤，输入序列的排序要求须由上游保存路径解释。[扫描 corner 与类型](townscaper_save_input_decompile.md:207)

定义 `bitLength(0)=0`。从伪代码运算与对应的解码读取可恢复三个位宽：`B=bitLength(2*max(abs(firstX),abs(minY)))`、`DX=bitLength(maxXDelta)`、`Y=bitLength(maxY-minY)`。头部先用各5位写入 B、DX、Y；再用各B位写 `firstX+bias`、`minY+bias`，其中 `bias=B==0 ? 0 : 1<<(B-1)`。[位宽计算](townscaper_save_input_decompile.md:299)；[头部写入](townscaper_save_input_decompile.md:384)；[偏移起点读取](townscaper_save_input_decompile.md:1327)

类型表只收集0–14，按类型值升序映射成码1–N。写入4位的 N，再写每项4位的实际类型。体素码位宽为 `T=bitLength(N+1)`：0表示空高度，码1–N索引类型表，全1码 `(1<<T)-1` 表示当前列结束。高度0使用独立地面标记，不进入该类型表。[类型表构造](townscaper_save_input_decompile.md:454)；[类型位宽与终止码](townscaper_save_input_decompile.md:537)

每列的数据顺序为：第一列省略 x 变化字段；后续列写1位标记，0表示沿用 x，1表示紧随DX位的 x 增量；随后写Y位的 `y-minY`、1位的地面存在标记。高度从1递增，空洞写0码，存在体素的高度写类型码；列未达到高度256时写终止码。[列坐标写入](townscaper_save_input_decompile.md:568)；[地面标记](townscaper_save_input_decompile.md:653)；[空洞与体素码](townscaper_save_input_decompile.md:692)

每个字段按最低有效位先写入 BitArray；按 `bitsPerCharacter` 分组时，组内权重依次为1、2、4……，所得索引直接访问上述 alphabet。字符数量向上取整，最后一组未使用高位为0。解码同样按最低有效位先展开字符，再向后扫描末尾0位以确定有效位流末端。[字段位序](townscaper_save_input_decompile.md:846)；[字符生成](townscaper_save_input_decompile.md:868)；[解码与尾部扫描](townscaper_save_input_decompile.md:1251)

## 已确认：解码失败条件与世界状态

`LoadFromString`（RVA `0x301d60`）直接逐字符查 alphabetDict，没有在函数内部去除空格或换行；不存在于字典中的字符返回 false。空字符串返回 false；null 输入进入空引用异常路径。[输入检查](townscaper_save_input_decompile.md:1149)；[非法字符分支](townscaper_save_input_decompile.md:1198)

| 静态条件 | 返回与日志 | 来源 |
|---|---|---|
| 输入总位数 `length*bitsPerCharacter<=19` | false；`Bit array has no room for bounds or voxels` | [行1161](townscaper_save_input_decompile.md:1161) |
| 读取三个5位宽度后，有效位数不足以容纳两项B位起点及后续数据 | false；`Bit array has no room for voxels` | [行1302](townscaper_save_input_decompile.md:1302) |
| 起点之后不足4位类型数量，或不足 `N*4` 位类型表 | false；`Bit array has no room for types` | [行1337](townscaper_save_input_decompile.md:1337) |
| 非0、非终止的体素码减1后不在类型表 `[0,N)` 内 | false；`Invalid voxel value {0}/{1} at {2} {3}` | [行1490](townscaper_save_input_decompile.md:1490) |

解码地面标记会加入 `{t=15,h=0}`，其余有效类型码恢复类型和高度，逐项追加 voxels；每列结束时追加 corner 的 x、y、count。失败分支没有显示对已追加列表的回滚，且函数存在异常出口，因此不能概括为“所有无效输入均无副作用地返回 false”。[地面恢复](townscaper_save_input_decompile.md:1466)；[体素与 corner 追加](townscaper_save_input_decompile.md:1583)

字符串与磁盘存档入口分开：`WorldMaster.Load(string)`（RVA `0x3f8420`）清理当前 SaveData 后调用文本解码，成功后设置 `state=1`、`anyChange=false`、`lastChangeTime=-1`。`SaveSystem.LoadSave`（RVA `0xa02840`）调用的是 `WorldMaster.Load(SaveData)`（RVA `0x3f83d0`），该重载在对象不同时复制非图像数据，再设置相同状态；这里没有直接重建图形世界，后续状态迭代仍待追踪。[字符串重载](townscaper_ghidra_decompile.md:68)；[磁盘存档入口调用](townscaper_ghidra_decompile.md:398)；[SaveData 重载](townscaper_save_input_decompile.md:2571)

## 已确认：输入分支与添加体素

`ActionInputManager.Update`（RVA `0x870d80`）先检查玩家对象和 ReInput readiness。其静态分支读取 `Zoom`、`Right Stick X/Y`、`Horizontal`、`Vertical`、`Forward` 等动作；`Change State` 的正向按钮进入 `Maker.HoldUndo`，负向按钮进入 `Maker.HoldRedo`；`Color Selection` 的正/负方向进入上一/下一颜色选择；`Toggle Menu`、`Toggle Legend` 以及 `Color 0`–`Color 14` 有独立按钮按下分支。动作名称来自精确字面量映射，不能据此推断当前用户键盘或手柄的物理绑定。[readiness 检查](townscaper_save_input_decompile.md:1856)；[相机输入](townscaper_save_input_decompile.md:1884)；[撤销与重做](townscaper_save_input_decompile.md:1993)；[颜色选择](townscaper_save_input_decompile.md:2051)；[离散按钮分支](townscaper_save_input_decompile.md:2083)

`MasterClicker.AddClick`（RVA `0x3d36a0`）不是简单转调 `Maker.AddClick`：其机器码内包含添加路径。若 hover.validAdd 为 false 或正在 dragging，返回 null；读取目标高度和顶点，必要时 `GridGenerator.GetVertOrIterate`；顶点完整且 `Graph.IsCoordinateAllowed` 通过后，调用 `Maker.BeginNewAction`、`Graph.AddVoxel`，更新 lastAddedVoxel/lastActionPos，调用 `Maker.AddAction`（旧类型为 `0x12`），再调用 `WorldMaster.SetDirty`。成功结果随后传给点击效果。[hover/drag 判断](townscaper_save_input_decompile.md:2427)；[顶点补全](townscaper_save_input_decompile.md:2455)；[允许坐标与新动作](townscaper_save_input_decompile.md:2472)；[添加与历史记录](townscaper_save_input_decompile.md:2495)；[标记变更](townscaper_save_input_decompile.md:2513)

## 已确认：平台容器与路径拼接

`SaveSystem.get_storageContainer`（RVA `0xa04020`）取 Platform.SDK，以 `ContainerID("storage")` 调用 IPlatformSDK.Storage（接口槽11），返回容器。这里没有选定当前运行中的具体SDK，也没有返回用户绝对目录。显示为 `SR_GetString` 的共址身份函数应结合 ContainerID 转换和接口参数理解，不能解释成系统资源字符串查找。[SDK 获取与接口分派](townscaper_save_input_decompile.md:1680)

`BasePlatformSDK.Storage`（RVA `0x110bab0`）按 ContainerID 查容器字典；未命中时通过虚调用创建容器，并缓存后返回。StandalonePC 的创建入口（RVA `0x1142570`）分配 StandalonePCStorageContainer，并设置调度器和根路径。[容器缓存](townscaper_storage_alphabet_decompile.md:122)；[StandalonePC 创建](townscaper_storage_alphabet_decompile.md:184)

`StandalonePCStorageContainer..ctor`（RVA `0x1142fb0`）读取 `settings.standalone.storageRoot` 与 `storageRootSuffixPc`，传给 `FilePathRootExtensions.Path`（RVA `0x10cf350`），将结果写入 RootPath。当前证据尚未解析这两个设置字段的实际资产值，也未观察函数在当前用户环境的返回值。[RootPath 初始化](townscaper_storage_alphabet_decompile.md:235)

`SaveSystem.GetSaveFilePath`（RVA `0xa01780`）格式化得到 `Saves<DirectorySeparatorChar><fileName>`。StandalonePCStorageContainer.GetFilePath（RVA `0x1142c00`）把该相对路径与 RootPath 拼接，按容器行为数值分三种结果：[相对保存路径](townscaper_ghidra_decompile.md:242)

| 容器行为 | 静态表达式 | 来源 |
|---|---|---|
| 1 | `Path.Combine(RootPath, String.Format("{0}_{1}", ContainerID, filename))` | [行293](townscaper_storage_alphabet_decompile.md:293) |
| 2 | `Path.Combine(RootPath, ContainerID, filename)` | [行309](townscaper_storage_alphabet_decompile.md:309) |
| 其他 | `Path.Combine(RootPath, filename)` | [行319](townscaper_storage_alphabet_decompile.md:319) |

因此已确认“容器名、相对保存路径、可配置根路径及拼接分支”；尚未确认当前用户使用哪一个分支及最终绝对路径。发行包资源中的开发者路径不能替代该运行结果。

## 待验项

- 从实际平台配置资产解析 storageRoot、storageRootSuffixPc 和容器行为；继续分析 FilePathRootExtensions.Path 的根枚举映射。确认本次发行包所选SDK与配置后，才能给出静态配置对应路径；当前用户运行路径另需运行证据。
- 追踪 Graph.Save 的 corner/voxel 排序和数据一致性条件，验证编码对非递增坐标或稀疏高度的输入约束；当前解码格式结论来自伪代码，没有游戏导出样本对照。
- 追踪 WorldMaster.Iterate 中 state=1 的后续网格加载、资源重建；不能把 Load 重载的状态设置等同于画面已重建。
- 查明实际 Rewired 绑定资产、PointerClick/TouchUp 到 AddClick 的条件；确认撤销动作分组、长按/拖动行为和自动保存触发条件。
- 结合真实应用导出样本验证尾部扫描和异常路径；不能宣称对所有畸形输入的兼容性，也不能将独立重建工具的测试当成游戏实际执行。
