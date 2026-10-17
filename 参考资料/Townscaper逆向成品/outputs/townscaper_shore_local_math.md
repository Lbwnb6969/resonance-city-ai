# 岸线局部修正与水声选点的原始公式

范围为 `WaterSound.Update` RVA `0x3f0ae0`，以及 `Sandbanker.Iterate` state2 中三角形局部修正段。读取原 Steam `GameAssembly.dll`，SHA256 为 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。使用 PE 原字节和 Capstone 核对伪代码的数据来源及分支，原游戏未修改；这属于独立静态证据，未新增 REA Evidence。

[原始指令、常量、数据流和反例](townscaper_shore_local_math.json) 保留 9 个有界代码窗口、1603 条指令及各条机器码。复现命令：`python work/inspect_shore_local_math.py`。

## WaterSound.Update：选点存在一项错位

[完整函数伪代码](native_application/3f0ae0.c) 中 `local_2c/local_24` 是前一次接受的点，`local_20/fVar9` 才是当前候选。原始指令确实使用前者做距离计算，因此这里不能解释成“寻找相机最近的岸点”。

```text
selected = Vector3.zero
best = float.MaxValue
camera = Camera.main.transform.position
for i = sandbanker.verts.Count - 1 down to 0:
    candidate = sandbanker.verts[i]
    distanceSquared = (camera - selected).sqrMagnitude
    if distanceSquared < best:
        selected = candidate
        best = distanceSquared
transform.position = selected
```

| 原生 VA | 数据来源或动作 |
|---|---|
| `0x103f0c03 / 0x103f0c08 / 0x103f0c26` | 加载 camera 的 x/y/z：`ebp-0x34/-0x30/-0x2c` |
| `0x103f0c0d / 0x103f0c1c / 0x103f0c2b` | 分别减 selected 的 x/y/z：`ebp-0x28/-0x24/-0x20` |
| `0x103f0c12 / 0x103f0c18 / 0x103f0c21` | 当前 candidate 另存到 `ebp-0x1c/-0x18` 和 EDI，未进入上述减法 |
| `0x103f0c49` | 对 `camera-selected` 调用 Vector3.sqrMagnitude |
| `0x103f0c5e / 0x103f0c61` | 严格判断 `best>distanceSquared`，相等或无序不接受 |
| `0x103f0c63..0x103f0c7a` | best 存本次测试的距离；selected 却存当前 candidate，二者对应不同点 |
| `0x103f0cb4` | 把最后 selected 写到水声组件的 transform.position |

这个函数每帧从原点重新开始，而不是保存上一帧位置。正常有限距离下，第一项比较的是相机到原点的距离，随后接受最后一个顶点；之后比较新 selected 的距离，决定是否接受更前一项。空顶点列表直接输出原点；如果比较全部失败，例如 NaN 或距离溢出为无穷，selected 也保持原点。相机、master、sandbanker、verts 或 transform 缺失走空引用异常路径。

反例令相机为 `(10,0,0)`，顶点列表按存储顺序为 `(0,0,0)、(9,0,0)、(100,0,0)`。倒序先测试到原点的距离平方100，接受100位置；之后两次都测试到100位置的距离平方8100，拒绝9和0，输出 `(100,0,0)`。真实最近点是9。参考复现及每一步状态已写入 JSON；它证明发布算法的错位行为，不是声称原游戏实测了此构造场景。

## Sandbank state2：有向边距离的 0.3 / 0.6 修正

[state2 伪代码](native_application/815c40.c) 从该三角形当前顶点获取 `A=verts[iA]`、`B=verts[iB]`、`C=verts[iC]`。这里是三角形局部规则，没有遍历全体顶点寻找最近邻，也没有按两端点的欧氏距离设定阈值。

规则只在以下条件成立时启用：外层 pass 等于0；`iA、iB` 为奇数、`iC` 为偶数；`A.y>0 || B.y>0`。前置 `A.y==0 && B.y==0 && C.y>0` 规则先判断，完整端点公式见下节。当前近邻修正规则没有额外 `C.y` 条件。

```text
u = B - A
u.y = 0
n = Normalize((u.z, 0, -u.x))
d = Dot(C - A, n)
delta = 0.6 * (0.3 - d) * n
displacement[iC / 2] += delta
```

`d` 是 C 到 A→B 边的水平有向距离。`n.y=0`，所以 C 的高度没有进入距离，也没有被这次位移修改。只向 C 对应的偶数顶点槽累加 delta；这段分支不移动 A 或 B。`0.3` 是目标距离，`0.6` 是松弛比例：`d<0.3` 时朝 `+n` 推开，`d>0.3` 时朝 `-n` 拉回，相等时位移为零。没有 `d<0.3` guard、Min/Max、绝对值或 clamp，因此不能把它描述为“只把太近的点推开”。

| 原生 VA | 已确认语义 |
|---|---|
| `0x1081887c / 0x108188b8 / 0x108188f4` | 按 iA/iB/iC 读取当前 `verts`；三个点分别保存到 `ebp-0x208/-0x214/-0x270` |
| `0x10818956..0x108189ac` | pass0、奇/奇/偶和 `A.y>0 || B.y>0` guard |
| `0x10818cac / 0x10818d0b` | Subtraction(B,A) 后 SetY(...,0) |
| `0x10818d21..0x10818d73` | 构造 `(u.z,0,-u.x)`，负号通过 float sign-bit XOR |
| `0x10818d7b` | Vector3.normalized，输入是上述水平垂直向量 |
| `0x10818dcf` | Subtraction(C,A)，不是 C-B、中心点差或缓存候选差 |
| `0x10818e06..0x10818e3d` | 展开三个分量乘积、求和，计算 `0.3-Dot(C-A,n)` |
| `0x10818e41 / 0x10818e4c..0x10818e88` | 按分量乘 n 后乘0.6，生成 delta；该算式区没有距离条件跳转 |
| `0x10818e51..0x10818e60` | 以 iC/2 为位移列表索引 |
| `0x10818ea7 / 0x10818ee5 / 0x10818f0a` | 读取该槽、加 delta，再写回位移槽 |

Normalize 的原生实现也已核对：向量长度严格大于 float32 `9.999999747378752e-06` 时逐分量除以长度，否则返回 Vector3.zero。因此退化或极短的水平边会添加零位移。

后续公共规则使用的 Vector3.op_Inequality RVA `0x674620` 也有独立字节证据：有限输入时返回 `(a-b).sqrMagnitude >= 9.999999439624929e-11`，阈值地址 `0x111d3a88`、位模式 `0x2edbe6fe`。`COMISS threshold,distanceSquared` 后执行 `SETBE`，无序/NaN也返回true；它不是三个分量逐项精确不等判断。

三角形按列表末尾向前、每次三个索引处理。两个规则都不满足时，把索引与坐标同步轮换 `(A,B,C)→(B,C,A)`，最多检查三种有向边；任何规则命中后就停止该三角形的轮换。每个外层 pass 扫完三角形后，对每个槽 k 执行 `verts[2*k] += displacement[k]`，然后清零该槽；三个 pass 都有这一步，但这里的0.3/0.6分支仅 pass0启用。三角形扫描期间累加的是独立位移，实际顶点更新发生在扫描后的统一应用阶段。

常量直接读取原 DLL：`0x111e1e48` 为 float32 `0.30000001192092896`，`0x111f1658` 为 `0.6000000238418579`。语义公式可写0.3和0.6，原始位模式在 JSON 中保留。

## 三轮扫描的前置 Y0 端点收拢规则

每个三角形最多轮换三次，先检查 `A.y==0 && B.y==0 && C.y>0`；这个分支在外层 pass0、1、2 都启用。坐标与索引同步 `(A,B,C)→(B,C,A)`，所以当前角色来自对应有向边。命中后直接完成该三角形，不再尝试后面的0.3/0.6规则或其他边。

```text
if A.y == 0 and B.y == 0 and C.y > 0:
    u = SetY(B - A, 0)
    delta = 0.3 * u
    if iA % 2 == 0:
        displacement[iA / 2] += delta
    if iB % 2 == 0:
        displacement[iB / 2] -= delta
    finish this triangle
else if pass == 0 and iA odd and iB odd and iC even
        and (A.y > 0 or B.y > 0):
    apply previous section's correction to C
    finish this triangle
else:
    rotate indices and positions, at most three orientations
```

两个端点的索引奇偶独立判断：都为偶数时两端相向收拢；仅一端为偶数时只移动该端；都为奇数时该规则不添加位移，但仍结束当前三角形。C 不被这段规则修改。没有 iC 奇偶限制、Normalize、投影、Sign、长度阈值、Min/Max 或 clamp。因为 u 不归一化，水平边长2时，每个 eligible 端点的位移长度为0.6，不是固定距离0.3。位移仍先累加到独立列表，扫描后才统一应用到 `verts[2*k]` 并清零。

原始 VA 对应：`0x10818920..0x10818950` 为高度 guard；`0x10818a64` 调用 Subtraction(B,A)；`0x10818ac3` 将 y 设0；`0x10818b00..0x10818b44` 按分量乘0.3；`0x10818b4c..0x10818b5b` 判断 iA 偶数，`0x10818bbe/0x10818be3` 加到 A/2槽；`0x10818bf3..0x10818c02` 判断 iB 偶数，`0x10818c65/0x10818f0a` 减去并写 B/2槽。

## 三轮扫描前：条带端点塌缩与对角线替换

六轮平滑结束后，先对每个奇数顶点执行 `verts[i] += Vector3.up*0.186`。原生 `0x10817cfd..0x10817e24` 从索引1开始、每次加2；常量 `0x111f1650` 位模式 `0x3e3e76c9` 为 float32 `0.1860000044107437`。

接着从末尾倒序，每6个索引处理一条带。令起点为 s，读 `iA=T[s]、iB=T[s+1]、iC=T[s+2]、iD=T[s+4]`，并保存对应顶点快照 A/B/C/D。stage1 的六次 List.Add 建立初始两三角形 `(iA,iB,iC)、(iC,iD,iA)`，共用 A-C 对角线。

```text
fA = Dot(D - A, savedNormalized[iA / 2]) < 0
fB = Dot(C - B, savedNormalized[iB / 2]) < 0
```

这里的 `savedNormalized` 是独立的 local_58 列表，不是即时 Cross 返回值。原代码在 `0x1081815b` 确实计算 `Cross(up,SetY(C-D,0))`，写到 `ebp-0x4a8`，随后立刻读取 `savedNormalized[iA/2]`；整个条带块没有再次读取该 Cross 输出缓冲区。因而不能把两个标志写成“用新 Cross 做线段交叉检测”。原调用保留在字节证据中，但这个返回向量不驱动后续规则。

用 `P0=SetY(P,0)` 表示保留 x/z、把 y 直接设0。四种情况完整行为如下；各赋值读取进入条带时保存的 A/B/C/D 快照。

| fA | fB | 两三角形 | 顶点修改 |
|---|---|---|---|
| false | false | 保持原索引 | `verts[iA]=D0; verts[iB]=C0; verts[iC]=C0; verts[iD]=D0` |
| false | true | 无条件换到 B-D 对角线 | `verts[iD]=D0; verts[iA]=D0` |
| true | false | 保持原索引 | `verts[iC]=C0; verts[iB]=C0` |
| true | true | 仅当 `|B-D|² < |A-C|²` 时换到 B-D 对角线 | 不修改顶点 |

切换后的六个索引始终为：

```text
T[s:s+6] = (iA, iB, iD, iC, iD, iB)
triangles = (A,B,D), (C,D,B)
```

最短对角线比较使用完整3D平方距离，包含 y；严格更短才切换，相等保持原索引。它只属于 `fA && fB` 一种情况。`!fA && fB` 无条件重排，另外两种情况有端点合并和归零高度，故整个块不能简化为“每条带选择更短对角线”。这是直接改写顶点与三角形列表的前置阶段，不使用后面的 displacement 累加器。

| 原生 VA | 数据流或分支 |
|---|---|
| `0x10818185 / 0x108181d9 / 0x10818213..0x1081825e` | 读 savedNormalized[A/2]，计算 D-A 并以 dot<0 得 fA |
| `0x10818271 / 0x108182bf / 0x108182fc..0x10818334` | 读 savedNormalized[B/2]，计算 C-B 并以 dot<0 得 fB |
| `0x10818337..0x10818349` | 四种情况分流 |
| `0x10818352 / 0x1081835c` | 两标志均false时先把保存的 D.y/C.y 归零，随后四个顶点写入 |
| `0x10818454..0x10818503` | fA=false/fB=true 的六次索引写入，无距离比较 |
| `0x1081850e..0x10818575` | D.y归零，并分别写 D 与 A |
| `0x10818585..0x108185f0` | C.y归零，并分别写 C 与 B |
| `0x10818634 / 0x10818657` | Subtraction(A,C) 与其平方长度 |
| `0x10818699 / 0x108186bc` | Subtraction(B,D) 与其平方长度 |
| `0x108186cc / 0x108186d0` | 比较两条对角线，`old²<=new²` 则保留 |
| `0x108186ee..0x1081879d` | 更短时的同一六次索引重排 |

本报告恢复上述局部规则的完整公式、守卫、端点、轮换和索引重排；六轮平滑及state3由对应报告解释。静态原字节证明这些分支存在及其数据流，不代替所有城镇输入的运行验证。
