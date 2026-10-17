# Townscaper REA 原生证据索引

后续原程序观测已补充初始化返回证据：[图形运行](townscaper_runtime_grid.json)记录12427次进入与12427次返回（具体次数以该文件final_runtime_status为准）。以下保留REA原记录的分析模型和当时局限；后续Frida观察是独立本地证据，不能冒充REA Evidence或改写原bundle。

REA 6.4.0 / Ghidra 12.1.4 / Temurin JDK 21。完整记录保存在同目录的 `townscaper_rea_evidence_v2.json`，已通过 REA `inspect-evidence-bundle` 校验。

目标 SHA-256：`4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。名称由独立的 IL2CPP 元数据按地址关联；本轮 REA 临时副本未加载发行包 PDB，因此原始 provider 名称仍为 `FUN_*`。

| 方法 | 地址 | 函数体字节 | 基本块 | 调用者 | 被调用者 | 入/出引用 |
|---|---|---:|---:|---:|---:|---:|
| WorldMaster.GetSaveString | `0x103f7a90` | 146 | 10 | 1 | 6 | 2/18 |
| WorldMaster.Load(string) | `0x103f8420` | 152 | 11 | 0 | 5 | 1/18 |
| Graph.ApplyAction | `0x10e6b480` | 746 | 39 | 3 | 18 | 4/107 |
| Graph.PaintVoxel | `0x10e73610` | 680 | 51 | 5 | 11 | 6/112 |

## 解释边界

4 个 dossier 的 value flow 均未截断，已知省略的操作、输入和边均为 0。这只说明记录在当前分析模型中完整，不能推出运行时路径完整。

每个函数体均有不连续范围。REA 记录把 `0x1018e950` 元数据初始化 thunk 标为 `hasNoReturn=true`，相应首次初始化分支的 fallthrough 被排除；这是 Ghidra 数据库的标记。独立原始字节校验确认该 thunk 跳到 `0x1015fca0`，其包装函数在 `0x1015fcb1` 有 RET 尾部；详见同目录的 `townscaper_initializer_return_check.json`（pefile/Capstone 观察，不是 REA Evidence）。这未实测嵌套调用是否返回，但不能把 no-return 标记当成实际永不返回的证明。发行包 PDB 支持的本地 Ghidra 输出保留了初始化后继续执行的伪代码。此差异必须保留，不能用 REA CFG 断言首次初始化分支实际终止。

调用者数为 0 只表示当前模型未找到入站调用；共享地址别名不全部当成直接调用目标。函数内 def-use 不能替代跨函数内存别名或运行时接口分派证据。bundle 的 `unknowns` 为 0 表示没有注册残余条目，不表示调查不存在未知。

## WorldMaster.GetSaveString

- Evidence：`ev_cf878edb6538bf17c0a896993b9ae0bd79d1a03484e4de7455fa8f4ad1a93aef`
- 原始名称：`FUN_103f7a90`
- 函数体范围：`0x103f7a90..0x103f7aa5`, `0x103f7ab0..0x103f7b2b`

观察到的被调用函数：

- `0x101280f0` — `il2cpp_runtime_class_init`
- `0x1018e950` — `thunk_FUN_1015fca0`
- `0x1018eae0` — `FUN_1018eae0`
- `0x10302ad0` — `Placemaker.TextSaveSystem$$SaveToString`
- `0x109fdb90` — `Placemaker.SaveData$$Clear`
- `0x10e77c40` — `Placemaker.Graphs.Graph$$Save`

Provider 的基本块：

| 开始 | 结束 | 后继 |
|---|---|---|
| `0x103f7a90` | `0x103f7a9c` | `0x103f7a9c`, `0x103f7ab0` |
| `0x103f7a9c` | `0x103f7aa6` |  |
| `0x103f7ab0` | `0x103f7ac0` | `0x103f7ac0`, `0x103f7b27` |
| `0x103f7ac0` | `0x103f7ad2` | `0x103f7ad2`, `0x103f7b27` |
| `0x103f7ad2` | `0x103f7aed` | `0x103f7aed`, `0x103f7b27` |
| `0x103f7aed` | `0x103f7b01` | `0x103f7b01`, `0x103f7b10` |
| `0x103f7b01` | `0x103f7b07` | `0x103f7b07`, `0x103f7b10` |
| `0x103f7b07` | `0x103f7b10` | `0x103f7b10` |
| `0x103f7b10` | `0x103f7b27` |  |
| `0x103f7b27` | `0x103f7b2c` |  |

## WorldMaster.Load(string)

- Evidence：`ev_d2c0088cf64c7e6f1ae021aaf34790d2ac783140bbcad1be4d2925a59815cc09`
- 原始名称：`FUN_103f8420`
- 函数体范围：`0x103f8420..0x103f8435`, `0x103f8440..0x103f84c1`

观察到的被调用函数：

- `0x101280f0` — `il2cpp_runtime_class_init`
- `0x1018e950` — `thunk_FUN_1015fca0`
- `0x1018eae0` — `FUN_1018eae0`
- `0x10301d60` — `Placemaker.TextSaveSystem$$LoadFromString`
- `0x109fdb90` — `Placemaker.SaveData$$Clear`

Provider 的基本块：

| 开始 | 结束 | 后继 |
|---|---|---|
| `0x103f8420` | `0x103f842c` | `0x103f842c`, `0x103f8440` |
| `0x103f842c` | `0x103f8436` |  |
| `0x103f8440` | `0x103f844e` | `0x103f844e`, `0x103f84bd` |
| `0x103f844e` | `0x103f8463` | `0x103f8463`, `0x103f84bd` |
| `0x103f8463` | `0x103f8479` | `0x103f8479`, `0x103f8488` |
| `0x103f8479` | `0x103f847f` | `0x103f847f`, `0x103f8488` |
| `0x103f847f` | `0x103f8488` | `0x103f8488` |
| `0x103f8488` | `0x103f849d` | `0x103f849d`, `0x103f84a0` |
| `0x103f849d` | `0x103f84a0` |  |
| `0x103f84a0` | `0x103f84bd` |  |
| `0x103f84bd` | `0x103f84c2` |  |

## Graph.ApplyAction

- Evidence：`ev_dee9fdf71c96246fbd17656600696c8bd8b6a73fff674102c000deb194b1e689`
- 原始名称：`FUN_10e6b480`
- 函数体范围：`0x10e6b480..0x10e6b49b`, `0x10e6b4d8..0x10e6b7a5`

观察到的被调用函数：

- `0x101280f0` — `il2cpp_runtime_class_init`
- `0x1018e950` — `thunk_FUN_1015fca0`
- `0x1018eae0` — `FUN_1018eae0`
- `0x10224ac0` — `FUN_10224ac0（元数据地址有 10 个别名，未消歧）`
- `0x102328b0` — `Placemaker.ClickEffect$$Click`
- `0x1040e150` — `FUN_1040e150（元数据地址有 2 个别名，未消歧）`
- `0x1043f140` — `FUN_1043f140（元数据地址有 63 个别名，未消歧）`
- `0x1066e3c0` — `UnityEngine.Transform$$GetChild`
- `0x1066f960` — `UnityEngine.Transform$$get_position`
- `0x10a3aa80` — `UnityEngine.Component$$get_transform`
- `0x10a3c6b0` — `UnityEngine.Debug$$LogError`
- `0x10a4aa60` — `UnityEngine.Object$$op_Implicit`
- `0x10e67e60` — `FUN_10e67e60`
- `0x10e6ae80` — `Placemaker.Graphs.Graph$$AddVoxel`
- `0x10e6b990` — `Placemaker.Graphs.Graph$$BinaryTreeSearchVoxel`
- `0x10e73610` — `Placemaker.Graphs.Graph$$PaintVoxel`
- `0x10e73950` — `Placemaker.Graphs.Graph$$RemoveVoxel`
- `0x10f02470` — `System.String$$Concat`

Provider 的基本块：

| 开始 | 结束 | 后继 |
|---|---|---|
| `0x10e6b480` | `0x10e6b492` | `0x10e6b492`, `0x10e6b4d8` |
| `0x10e6b492` | `0x10e6b49c` |  |
| `0x10e6b4d8` | `0x10e6b4f2` | `0x10e6b4f2`, `0x10e6b6a9` |
| `0x10e6b4f2` | `0x10e6b500` | `0x10e6b500`, `0x10e6b7a1` |
| `0x10e6b500` | `0x10e6b522` | `0x10e6b522`, `0x10e6b652` |
| `0x10e6b522` | `0x10e6b52d` | `0x10e6b52d`, `0x10e6b7a1` |
| `0x10e6b52d` | `0x10e6b552` | `0x10e6b552`, `0x10e6b7a1` |
| `0x10e6b552` | `0x10e6b566` | `0x10e6b566`, `0x10e6b7a1` |
| `0x10e6b566` | `0x10e6b57f` | `0x10e6b57f`, `0x10e6b596` |
| `0x10e6b57f` | `0x10e6b58f` | `0x10e6b58f` |
| `0x10e6b58f` | `0x10e6b596` |  |
| `0x10e6b596` | `0x10e6b5a0` | `0x10e6b5a0`, `0x10e6b63f` |
| `0x10e6b5a0` | `0x10e6b5ab` | `0x10e6b5ab`, `0x10e6b7a1` |
| `0x10e6b5ab` | `0x10e6b5b6` | `0x10e6b5b6`, `0x10e6b7a1` |
| `0x10e6b5b6` | `0x10e6b5c9` | `0x10e6b5c9`, `0x10e6b7a1` |
| `0x10e6b5c9` | `0x10e6b5f5` | `0x10e6b5f5`, `0x10e6b609` |
| `0x10e6b5f5` | `0x10e6b5fb` | `0x10e6b5fb`, `0x10e6b609` |
| `0x10e6b5fb` | `0x10e6b609` | `0x10e6b609` |
| `0x10e6b609` | `0x10e6b62a` | `0x10e6b62a`, `0x10e6b7a1` |
| `0x10e6b62a` | `0x10e6b63f` | `0x10e6b63f` |
| `0x10e6b63f` | `0x10e6b652` |  |
| `0x10e6b652` | `0x10e6b688` | `0x10e6b688`, `0x10e6b697` |
| `0x10e6b688` | `0x10e6b68e` | `0x10e6b68e`, `0x10e6b697` |
| `0x10e6b68e` | `0x10e6b697` | `0x10e6b697` |
| `0x10e6b697` | `0x10e6b6a9` |  |
| `0x10e6b6a9` | `0x10e6b6d3` | `0x10e6b58f`, `0x10e6b6d3` |
| `0x10e6b6d3` | `0x10e6b6e2` | `0x10e6b6e2`, `0x10e6b6f1` |
| `0x10e6b6e2` | `0x10e6b6e8` | `0x10e6b6e8`, `0x10e6b6f1` |
| `0x10e6b6e8` | `0x10e6b6f1` | `0x10e6b6f1` |
| `0x10e6b6f1` | `0x10e6b704` | `0x10e6b58f`, `0x10e6b704` |
| `0x10e6b704` | `0x10e6b712` | `0x10e6b712`, `0x10e6b7a1` |
| `0x10e6b712` | `0x10e6b71d` | `0x10e6b71d`, `0x10e6b7a1` |
| `0x10e6b71d` | `0x10e6b72c` | `0x10e6b72c`, `0x10e6b7a1` |
| `0x10e6b72c` | `0x10e6b755` | `0x10e6b755`, `0x10e6b769` |
| `0x10e6b755` | `0x10e6b75b` | `0x10e6b75b`, `0x10e6b769` |
| `0x10e6b75b` | `0x10e6b769` | `0x10e6b769` |
| `0x10e6b769` | `0x10e6b783` | `0x10e6b783`, `0x10e6b7a1` |
| `0x10e6b783` | `0x10e6b7a1` |  |
| `0x10e6b7a1` | `0x10e6b7a6` |  |

## Graph.PaintVoxel

- Evidence：`ev_78a536b0674c3898bce411d0ac506006fc5bb948d1287cc47c735c54c1b74265`
- 原始名称：`FUN_10e73610`
- 函数体范围：`0x10e73610..0x10e73628`, `0x10e7365b..0x10e738e9`

观察到的被调用函数：

- `0x101280f0` — `il2cpp_runtime_class_init`
- `0x1018e950` — `thunk_FUN_1015fca0`
- `0x1018eae0` — `FUN_1018eae0`
- `0x1043f140` — `FUN_1043f140（元数据地址有 63 个别名，未消歧）`
- `0x1066e3c0` — `UnityEngine.Transform$$GetChild`
- `0x1066e440` — `FUN_1066e440（元数据地址有 3 个别名，未消歧）`
- `0x10a3aa80` — `UnityEngine.Component$$get_transform`
- `0x10a4a920` — `UnityEngine.Object$$op_Equality`
- `0x10a4aa60` — `UnityEngine.Object$$op_Implicit`
- `0x10aa2e60` — `System.ThrowHelper$$ThrowArgumentOutOfRangeException`
- `0x10e738f0` — `Placemaker.Graphs.Graph$$QubeUpdated`

Provider 的基本块：

| 开始 | 结束 | 后继 |
|---|---|---|
| `0x10e73610` | `0x10e7361f` | `0x10e7361f`, `0x10e7365b` |
| `0x10e7361f` | `0x10e73629` |  |
| `0x10e7365b` | `0x10e73667` | `0x10e73667`, `0x10e738e5` |
| `0x10e73667` | `0x10e73671` | `0x10e73671`, `0x10e738e0` |
| `0x10e73671` | `0x10e7367f` | `0x10e7367f`, `0x10e7368e` |
| `0x10e7367f` | `0x10e73685` | `0x10e73685`, `0x10e7368e` |
| `0x10e73685` | `0x10e7368e` | `0x10e7368e` |
| `0x10e7368e` | `0x10e7369f` | `0x10e7369f`, `0x10e736db` |
| `0x10e7369f` | `0x10e736b2` | `0x10e736b2`, `0x10e738e5` |
| `0x10e736b2` | `0x10e736c5` | `0x10e736c5`, `0x10e738e5` |
| `0x10e736c5` | `0x10e736db` | `0x10e736de` |
| `0x10e736db` | `0x10e736de` | `0x10e736de` |
| `0x10e736de` | `0x10e736f1` | `0x10e736f1`, `0x10e738e5` |
| `0x10e736f1` | `0x10e736fc` | `0x10e736fc`, `0x10e738e5` |
| `0x10e736fc` | `0x10e7370a` | `0x10e7370a`, `0x10e738e0` |
| `0x10e7370a` | `0x10e73714` | `0x10e73714` |
| `0x10e73714` | `0x10e7371f` | `0x10e7371f`, `0x10e738e5` |
| `0x10e7371f` | `0x10e73724` | `0x10e73724`, `0x10e7372e` |
| `0x10e73724` | `0x10e7372e` | `0x10e7372e` |
| `0x10e7372e` | `0x10e7373f` | `0x10e7373f`, `0x10e738e5` |
| `0x10e7373f` | `0x10e73752` | `0x10e73752`, `0x10e738e5` |
| `0x10e73752` | `0x10e7376b` | `0x10e7376b`, `0x10e738e5` |
| `0x10e7376b` | `0x10e7378c` | `0x10e7378c`, `0x10e738e5` |
| `0x10e7378c` | `0x10e737a7` | `0x10e737a7`, `0x10e738e5` |
| `0x10e737a7` | `0x10e737d2` | `0x10e737d2`, `0x10e737e1` |
| `0x10e737d2` | `0x10e737d8` | `0x10e737d8`, `0x10e737e1` |
| `0x10e737d8` | `0x10e737e1` | `0x10e737e1` |
| `0x10e737e1` | `0x10e737f9` | `0x10e737f9`, `0x10e73899` |
| `0x10e737f9` | `0x10e73810` | `0x10e73810`, `0x10e7381f` |
| `0x10e73810` | `0x10e73816` | `0x10e73816`, `0x10e7381f` |
| `0x10e73816` | `0x10e7381f` | `0x10e7381f` |
| `0x10e7381f` | `0x10e73833` | `0x10e73833`, `0x10e73889` |
| `0x10e73833` | `0x10e7384a` | `0x10e7384a`, `0x10e73859` |
| `0x10e7384a` | `0x10e73850` | `0x10e73850`, `0x10e73859` |
| `0x10e73850` | `0x10e73859` | `0x10e73859` |
| `0x10e73859` | `0x10e7386d` | `0x10e7386d`, `0x10e738e5` |
| `0x10e7386d` | `0x10e73871` | `0x10e73871`, `0x10e7387d` |
| `0x10e73871` | `0x10e73875` | `0x10e73875`, `0x10e738e5` |
| `0x10e73875` | `0x10e7387d` | `0x10e738a7` |
| `0x10e7387d` | `0x10e73881` | `0x10e73881`, `0x10e738e5` |
| `0x10e73881` | `0x10e73889` | `0x10e738a7` |
| `0x10e73889` | `0x10e7388d` | `0x10e7388d`, `0x10e738e5` |
| `0x10e7388d` | `0x10e73891` | `0x10e73891`, `0x10e738e5` |
| `0x10e73891` | `0x10e73899` | `0x10e738a7` |
| `0x10e73899` | `0x10e7389d` | `0x10e7389d`, `0x10e738e5` |
| `0x10e7389d` | `0x10e738a1` | `0x10e738a1`, `0x10e738e5` |
| `0x10e738a1` | `0x10e738a7` | `0x10e738a7` |
| `0x10e738a7` | `0x10e738de` | `0x10e73714`, `0x10e738de` |
| `0x10e738de` | `0x10e738e0` | `0x10e738e0` |
| `0x10e738e0` | `0x10e738e5` |  |
| `0x10e738e5` | `0x10e738ea` |  |
