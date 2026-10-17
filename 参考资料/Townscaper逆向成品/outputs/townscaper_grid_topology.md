# Townscaper 网格、拓扑与占据关系逆向

本报告对应当前 Steam 发行文件，`GameAssembly.dll` SHA-256 为 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。网格是一套由整数六边坐标确定的、分块生成并松弛的非规则四边网格；建造数据存储在网格顶点 `Corner` 的高度列，四边面 `Square` 再把四条高度列组合成用于模块选择的八角 `Qube`。模板选择、程序生成、边链接、地面占据、碰撞体和范围限制均已有静态证据，不能把普通六边网格中心直接当成最终房屋位置。

证据来自已保存的 REA/Ghidra 原生函数、发行 metadata/PDB 类型、严格字节消费的 Unity 资源解析、原始 x86 指令复核，以及主代理执行并保存的原游戏D3D11运行观测。独立 Python 解析、Capstone 和数值模型属于静态文件证据，不声称为 REA 工具的 Evidence；运行观测单独引用，下列验证脚本只读取记录。泛型共享函数的 PDB 名字存在错配，伪码的 `float2` 返回寄存器、浮点指针强转和 `InverseLerp` 类型也存在错误；下面公式已按类型和关键原始指令纠正。

## 交付与真实资源

- [完整模板与选择表](townscaper_grid_library.json)：40 个模板的整数坐标、混合面索引、选择数组、每模板拓扑统计、场景已保存的整数中心 patch 和松弛顶点。
- [原始指令和数值模型](townscaper_grid_math.json)：12 段原始 PE 字节/反汇编、SHA-256、浮点常数、坐标/hash/选择示例及24个重心权重样例。
- [可重跑脚本](../work/summarize_grid_topology.py)：读取既有完整资产快照和原始只读 DLL，重新生成上述文件及下图。

`CustomGridLibrary` 位于 `sharedassets1.assets` 的 PathID `1116`。`level1` 的 `GridGenerator` PathID `351` 引用这个库，初始只有原点 patch 和 `GridBit` PathID `325`。场景保存了 217 个整数顶点、192 个 quad、408 条无向边和48条边界边；保存的 Bit 有217个浮点顶点、255次松弛、状态 `Mesh(4)`，patch 已完成。这组整数顶点和几何 face 集合均不等于库中任何模板，不能因模板24也有217个顶点就认定中心使用模板24。

![发行场景中保存的松弛中心网格](townscaper_grid_center.svg)

模板中的 `quads` 其实是混合索引流：前 `quadTriCutoff` 个索引每3个构成三角形，其余每4个构成 quad；cutoff 是索引数。40个模板合计728个三角形、4088个quad，模板 `subdivisions` 取0..3。所有索引有效、每个 face 顶点互异、每条无向边最多邻接2个面，全部满足 `V-E+F=1`、连通且内边两面绕序相反。选择表中的重复项保存实际权重：

|选择表|槽位数|发行数组行为|
|---|---:|---|
|genericPatches|70|7个255回退；模板24占8槽；其它重复权重见JSON|
|straightPatches|14|25、26、27、28、29、30、39各2槽|
|centroidPatches|15|5、6、7、8、9各2槽；10、35、36、37、38各1槽|
|centroidCurvePatches|6|1和2各3槽|

## 整数坐标与世界坐标

使用 cube 坐标 `h=(x,y,z)`，始终 `z=-x-y`；资源 `int2` 存 `(x,y)`。顺时针60°为 `CW(h)=(-z,-x,-y)`，逆时针为 `CCW(h)=(-y,-z,-x)`，120°就是调用两次。这不是 Cartesian XY 旋转。[CW，RVA 0x40e0f0](native_application/40e0f0.c:14)、[CCW，RVA 0x40e070](native_application/40e070.c:14)。

`HexMath` 静态构造函数把 `(1,0)` 旋转120°，取两者距离倒数作为半径，再形成0/120/240°三个方向。半径理论值 `1/√3`；按float32旋转模型的 basis 为 `(0.5773502588,0)`、`(-0.2886751592,0.4999999702)`、`(-0.2886750698,-0.5)`。[构造函数，RVA 0x40e180](native_application/40e180.c:120)。伪码把旋转后x误留成输入x；原始指令在 `0x1040e1f1`、`0x1040e310`、`0x1040e369` 接收 EAX/EDX 并分别存入x/y，已保存在math JSON中。

`GridConstants` 给出 `hexToPlane=0.121654496`（实际float32 `0.12165449559688568`，位型 `0x3df925fe`）、`planeToHex=8.22`、`hexDistance=72`、`centroidScale=32`。未松弛的名义平面位置为：

```text
plane = hexToPlane * (x*basis0 + y*basis120 + z*basis240)
world = (plane.x, height, plane.y)

忽略float32三角函数尾差时，令q=x、r=y：
world.X = 0.121654496 * (sqrt(3)/2 * q)
world.Z = 0.121654496 * (q/2 + r)

逆变换：
x = 8.22 * (2/sqrt(3) * world.X)
y = 8.22 * (-world.X/sqrt(3) + world.Z)
z = 8.22 * (-world.X/sqrt(3) - world.Z)
```

[HexToPlane wrapper，RVA 0xe13b80](native_application/e13b80.c:27) 的原始指令确认两个返回分量均乘scale；[PlaneToHex，RVA 0x40df70](native_application/40df70.c:29) 和 [PlaneToWorld，RVA 0x40e020](native_application/40e020.c:14) 给出逆变换和轴顺序。float32模型中 `(9,0,-9)` 对应XZ约 `(0.9482028484,0.5474452376)`，`(0,9,-9)` 对应 `(-8.70e-8,1.0948904753)`；最终资源中的松弛坐标不应拿来直接验证这条名义公式。

`HexRound` 先分别 `RoundToInt`，再把误差最大的分量改为另外两分量的负和。x误差必须严格大于另两个才改x，否则y误差大于z才改y，否则改z；该顺序决定边界归属。[RVA 0x40dcd0](native_application/40dcd0.c:17)。

邻近patch和大尺度centroid是不同坐标格：

```text
p = HexRound((h + CW(h))/216)
s = 216*p
nearestPatch(h) = (s + CCW(s))/3   # 整数除法，朝零截断

v = h + (0,-2160,+2160)
v = (v + CW(v))/3                # 逐分量整数除法
r[i] = ((v[i] + (1152 if v[i]>0 else -1152))/2304)*2304
修正r的最大误差分量，保持cube sum=0
centroid(h) = r + CCW(r) + (0,+2160,-2160)
```

[GetNearestPatchHex，RVA 0xe131d0](native_application/e131d0.c:20)、[HexToGridCentroid，RVA 0xe12f10](native_application/e12f10.c:23)。因此 `centroid(0,0,0)=(0,2160,-2160)`，这个平移不能丢掉。整数 round 的符号偏置与上面的浮点 `HexRound` 分开实现。脚本重建了这些映射并检查所有样本的cube sum。

## Patch 的确定性生成

`IteratePatch` 是可暂停的6状态机，不是每帧重新生成：[完整函数，RVA 0xe17890](native_application/e17890.c:350)。

|状态|实际工作|证据起点|
|---|---|---|
|0 Verts|坐标hash初始化Random，选择预制库或生成粗网格顶点|e17890.c:413|
|1 Triangulate|六个方向连接onion相邻环形成三角前缀|e17890.c:1073|
|2 Quadrangulate|随机顺序尝试合并共享边三角形；预制库也进入此阶段|e17890.c:1174|
|3 Subdivide|去重共享中点/中心，三角变3quad、quad变4quad，循环细分|e17890.c:1441|
|4 Sort|按名义平面y整理quad角顺序和面顺序|e17890.c:2453|
|5 Done|整数patch可供Bit和Cluster读取|e17890.c:2851|

随机序列只由坐标决定。原始 `int3.GetHashCode` 的无符号32位形式是 `x*0x4c7f6dd1 + y*0x4822a3e9 - z*0x553c3da3 + 0xd21d0945`，模 `2^32`。Random初始化先推进一次xorshift（左13、右17、左5）。`CustomGridLibrary.GetRandom` 用旧state的乘法高32位 `floor(N*state/2^32)` 取槽，随后推进state；字节255返回null，其余取 `allCustomPatches[index]`。后续方向选择消耗同一序列。[GetRandom，RVA 0x4c2390](native_application/4c2390.c:45)。这里不用系统时间或用户save中的城镇颜色种子。

令 `d=patchHex-centroid(patchHex)`，库类型按以下条件选择；这些条件均来自 `IteratePatch` 状态0，而不是根据模板名字猜测：

1. `d.x==d.y==d.z`：用centroid表，12个方向编码对应6次旋转与反射。
2. 恰在 `d.x==d.y`、`d.y==d.z`、`d.z==d.x` 的径线上：若对应相等分量绝对值是72，使用centroidCurve表，并以centroid坐标hash协同相邻patch；否则用straight表。轴编号加上 `3*NextInt(4)` 决定方向，保证径线处拼接。
3. 其它位置：仅在超出cube分量±1152的内区后，且三次循环坐标的PerlinNoise之和大于 `1.54999995`，使用generic表。采样系数含float32位型 `0x3c37fe09` 和 `0xbea978d5`，精确值保存在math JSON；不能简化成无条件70槽均匀选择。
4. 不满足条件或抽到255：生成程序patch。原点因centroid有平移，落在这个分支。JSON里的generic抽槽样例仅展示Random函数，不表示这些样本实际通过generic门槛。

预制模板复制整数顶点、按旋转/反射变换并平移到patchHex，反射同时纠正三角/quad绕序；复制cutoff和subdivisions后跳到状态2。[模板变换](native_application/e17890.c:413)。

程序粗网格先算 `k=(Abs(trunc((hex.x+hex.y+72)/11))+3)%4`：k=0时细分次数n=1，k=1时n=3，其余n=2。[GetSubdivisions，RVA 0xe124d0](native_application/e124d0.c:17)。粗hex onion半径 `8/(1<<n)`，整数顶点步距 `9*(1<<n)`；随后六扇区三角化。Quadrangulate取候选共享边，搜索反向边对应的另一三角形，删除6个前缀索引，追加4个quad索引并将cutoff减6，一次成功合并后返回让外层调度继续；两个候选端点都在border时跳过，保护相邻patch兼容。Subdivide使用坐标字典共享新增点，经n轮后cutoff归零。Sort的 `GetVertCost` 返回名义 `plane.y`，它是排序键，不是松弛能量函数；原始指令确认返回的是EDX对应y分量。[GetVertCost，RVA 0xe12520](native_application/e12520.c:40)。

## Bit / Cluster、松弛与刷新范围

整数Patch决定面邻接，Bit/Cluster决定浮点顶点位置。每个Bit依赖自己的patch与周围6个Cluster；一个Cluster依赖3个Patch。Cluster中心步移使用 `(72,-72)` 的旋转，三个patch offset使用120°旋转。第一次motivation把孩子refcount加1；完成后释放孩子引用；失去全部motivation的对象保存在缓存中待复用。[MotivateBit](native_application/e1b130.c:175)、[MotivateCluster](native_application/e1b670.c:81)、[MotivatePatch](native_application/e1b980.c:69)。`MotivationCounter` 当前生产实现只是计数加减，source参数不保存成owner集合，不能假定自动去重。[Increment](native_application/3dce70.c:17)、[Decrement](native_application/3dcef0.c:17)。

Bit状态是 `Verts(0) → Relax(1) → Clusters(2) → Compose(3) → Mesh(4) → Done(5)`。`get_done` 只判断state5。[done，RVA 0xe0eed0](native_application/e0eed0.c:11)。Verts先等待整数patch完成、映射为名义float2；Relax做255轮；Clusters等待6邻块；Compose从邻块位置混合；Mesh按300顶点分块送到Unity Mesh再激活，最后state5。[IterateBit，RVA 0xe14000](native_application/e14000.c:390)。`KeepGoing`预算打断是保存状态后下帧继续，不能当成生成失败。

松弛的目标是让每个quad接近单位正方形，并把多个面的目标位移叠加给同一顶点。按quad绕序 `p0,p1,p2,p3`：

```text
C = (p0+p1+p2+p3)/4
V = normalize((p0-C) + R270(p1-C) + R180(p2-C) + R90(p3-C)) * (sqrt(2)/2)
ideal = [C+V, C+R90(V), C+R180(V), C+R270(V)]
每个quad给其四顶点累加 ideal[i]-pi
每个顶点 p += 0.4 * accumulatedDelta
清零delta，进入下一轮，最多255轮
```

证据为 [IterateBit的quad累加](native_application/e14000.c:1821) 和 [位移更新](native_application/e14000.c:1957)；代码没有按顶点valence除平均。`diagonal` 的静态构造原始指令是双精度 `sqrt(2)` 转float再乘0.5。[RVA 0xe1fc50](native_application/e1fc50.c:16)。Cluster将3个patch的整数坐标顶点去重，保留每patch的short索引映射，用相对cluster中心的名义浮点位置做同样255轮松弛。[IterateCluster，RVA 0xe162a0](native_application/e162a0.c:580)。

Compose的三个混合来源是本Bit松弛结果和相邻两个Cluster，不能误读为三个Cluster。定义 `P(h)=HexToPlane(h)`，`o_j=CW^j(72,-72,0)`，`a_j=P(o_j)`。静态 `ModuleMath.baryVectors[j]` 的构造是先取相邻中心的中点 `m_j=(a_j+a_(j+1))/2`，再存 `D_j=-m_j/|m_j|²`，数组下标均模6。代码用 `(m/length(m))/length(m)` 再翻符号实现。静态数组名字和偏移0x34也由运行时reflection确认。[ModuleMath.cctor的baryVectors构造](native_application/3da370.c:2312)；相应原始字节 `0x3dcace..0x3dcc24` 已加入math JSON。

对patch顶点i，以下是Compose的具体方程，权重来自原始指令 `0xe15162..0xe15357`，可据此移植数学实现：

```text
O = P(bit.hexPos)
v = P(patch.verts[i] - patch.hexPos)       # 名义位置，不能改用bitRelax[i]
s = Floor(((SignedAngle(v, P((1,-1)))+360) % 360)/60)
a = a_s
b = a_(s+1)
clusterA = clusterDict[bit.hexPos + o_s]
clusterB = clusterDict[bit.hexPos + o_(s+1)]

component(j) = [z,y,x][j % 3]
kA = clusterA.vertIndexes[clusterA.patchVertOffsets.component(s) + i]
kB = clusterB.vertIndexes[clusterB.patchVertOffsets.component(s+1) + i]
LA = clusterA.relaxedVerts[kA] + a
LB = clusterB.relaxedVerts[kB] + b
L0 = bit.verts[i]                         # 当前Bit单独255轮松弛后的local位置

w0 = dot(v-a, D_s)
wA = dot(v-b, D_(s+2))
wB = dot(v,   D_(s+4))
bit.verts[i] = O + w0*L0 + wA*LA + wB*LB  # Compose后改为全局平面位置
```

[扇区与两个Cluster选择](native_application/e14000.c:693)、[offset分量选择](native_application/e14000.c:798)、[mapped samples与权重](native_application/e14000.c:873)、[最终赋值](native_application/e14000.c:956)。weight阶段没有clamp、没有除以sum、没有normalize。它们是三角形 `(0,a,b)` 的重心坐标；使用理想等角basis时，三顶点分别得到 `(1,0,0)`、`(0,1,0)`、`(0,0,1)`，和为1。边界上相应无关项自然为0。float32构造存在尾差，不能加一个原程序没有的归一化来“修正”。独立模型覆盖6扇区×4位置（原点、A、B、内部0.2A+0.3B），24个样例的权重和目标误差均<1e-6，最大误差写入math JSON。

Cluster的patch→顶点映射也已确定：`GetPatchOffset`对cluster cube坐标c计算 `(c+CW(c))/216`，分别RoundToInt y/z，再设x=-y-z；放大216后取 `(r+CCW(r))/3-c` 为首个patch相对offset，另外两个offset依次CW120°旋转。按此顺序拼接3个patch的原始顶点索引，patchVertOffsets保存这三段的起点，vertIndexes保存每个原始顶点在去重后的Cluster顶点数组中的short下标。[GetPatchOffset](native_application/e10e90.c:43)、[Cluster拼接和映射](native_application/e162a0.c:359)、[写patchVertOffsets](native_application/e162a0.c:582)。例如cluster `(72,-72)` 的patch顺序为 `(144,-72)`、`(72,-144)`、`(0,0)`，中心Bit因此按s=0读取z段；这说明为何s%3采用 `[z,y,x]`。本轮已恢复数学方程与索引转换；未建立完整程序patch/松弛/Compose的逐位运行等价独立移植。

刷新不把整个无限地图都生成出来。`Refocus`只在focusUpdated时运行：Graph的genBounds中心先取nearestPatch作hexOrigo；genBounds各轴扩84；onion的dualPos2 `(x-z,y-x)` 乘72加hexOrigo得到Bit中心。中心在扩张cube bounds内才MotivateBit，遍历到最后命中环之外再一环；之后统一减去此前的motivation，让旧新交集净计数不变、离开范围的Bit失活。Graph计算genBounds时已有额外±96缓冲，并受border裁剪。[Refocus，RVA 0xe172e0](native_application/e172e0.c:206)、[dualPos2](native_application/40f470.c:17)、[Graph bounds](native_application/e6fbe0.c:314)。失去引用的Bit关闭GameObject，并按未完成状态释放Cluster和ownPatch；Cluster/patch保留数据或归入零引用复用候选。[UnmotivateBit](native_application/e1fa80.c:23)、[UnmotivateCluster](native_application/e1fbb0.c:19)。

## Graph 如何把四边网格连成建造空间

`GetVertOrIterate`通过 `HexToPatchHexes` 找共享整数顶点涉及的1..3个patch，收集其邻接quad；`Vert`最多6个quad。无Bit返回quadCount=-1，未完成且没有继续预算返回-2，预算耗尽仍未完成返回-3。有效判定是quadCount≥0；完整判定是邻接角之和>350°。Graph因此在边界补齐前不会构造半个建造Corner。[GetVertOrIterate，RVA 0xe125c0](native_application/e125c0.c:28)、[validPosition](native_application/3efdb0.c:11)、[full](native_application/3efd90.c:13)、[IntegrateCorner等待](native_application/e6d2c0.c:477)。

`IntegrateCorner`对周围每个quad做以下工作：

1. `Square`键是quad四个**整数**顶点之和，显示中心是四个**松弛浮点**顶点的均值；由此复用已有Square。建立中心Transform和4个warpMatrix，供房屋模块从规则参考面变形到实际quad。[Quad.hexPosSum](native_application/807200.c:14)、[Quad.planePos](native_application/807240.c:14)。
2. 遍历有向边 `(vi,vnext)`。先查edgeDictionary的反向键 `(vnext,vi)`；命中则给双方Square设置互为邻接的 `SquareRelation` 和 `indexInOther`，删除待配对反向键；未命中则存本边及其Square/edge index。关系由实际共享边决定，不依据距离猜邻居。[反向边匹配](native_application/e6d2c0.c:1357)。
3. 四个Corner以整数hex键复用，世界XZ取对应松弛顶点；分别执行Square.SetCorner和Corner.AddSquare，建立面与顶点的双向引用。[角关系](native_application/e6d2c0.c:1458)。
4. 为当前Corner生成可点击柱体的横截面：每个邻接quad的浮点中心减Corner位置组成环，环点在本地Y=-0.7和+0.3各复制一次，连接侧壁并封顶/底，写入Corner.colliderMesh。这里高度不是±0.5；blitVerts的其它点是附加数据，不应全部误认成碰撞mesh顶点。[碰撞环与高度](native_application/e6d2c0.c:1549)、[mesh提交](native_application/e6d2c0.c:1756)。

Voxel的对象有convex MeshCollider、MeshFilter、MeshRenderer和专用layer/material；同一Corner的不同高度Voxel共享Corner.colliderMesh。Voxel Transform本地Y=`height+0.5`，因此上述柱体最终纵向覆盖 `height-0.2 .. height+0.8`。这是选择/编辑的逻辑碰撞体，不是各建筑雕刻细节的碰撞网格。[VoxelGetNew](native_application/e6bd70.c:53)、[AddVoxel位置](native_application/e6ae80.c:200)、[共享mesh](native_application/e6eee0.c:160)。

## 高度占据、Ground/Water 与脏更新

`VoxelType`中0..14是颜色，15=Ground，16=Any，17=Water，18=Empty。它们属于模块约束值，不能全部当成实体Voxel。`Qube`以Square+高度为键，有四个底角和四个顶角。添加Corner高度h的Voxel，写入同一个Corner所接所有Square的下层Qube(h)顶角 `4+i` 和上层Qube(h+1)底角 `i`，并维护8位occupancy mask。[IntegrateVoxel角与bit写入](native_application/e6eee0.c:414)。

高度0写入Qube约束时强制使用Ground15，并调用Sandbanker.Reset；这段代码不覆盖Voxel.type，它仍保存添加请求的类型，不能把存档层也强制改写为Ground。Qube高度0的底四角初始Water17且mask=0x0f，其它高度新Qube初始Empty18。因而世界从平面水域逐角转成地面，房屋颜色从更高处生效；Water并不要求一个显式海水Voxel对象。[地面强制值](native_application/e6eee0.c:170)、[底层Water初始化](native_application/e6eee0.c:354)、[Qube默认Empty](native_application/8097c0.c:46)。

Ground积分同时给相邻Square的四个Corner增加 `groundCoverage`，这是计数；移除Ground对称减去并重置沙洲。积分把h-1..h+1的邻近Qube置为待更新，修改cornerValues和mask后交给WFC模块筛选。删除清空对应上下两层角值/bit，回收Voxel以及失去建造引用的Corner/Square相关数据，重新计算必要的高度/平面bounds；染色只换相关角颜色并触发更新。[coverage](native_application/e6eee0.c:466)、[RemoveVoxel](native_application/e73950.c:416)、[PaintVoxel](native_application/e73610.c:35)。

`Graph.Iterate`优先处理Corner积分队列，再处理脏Qube；预算不够即保留队列返回busy。仍属活动Square的Qube调用WFC.QubeUpdated并清 `awaitingGraphUpdate`；AO/阴影mesh随后维护。底角非Empty且height位置>.1才进入相关阴影处理，AO阶段把Empty临时当Any查表不代表实际填充实体。[Graph.Iterate，RVA 0xe71f20](native_application/e71f20.c:216)。

全局groundCollider另外是BoxCollider：XZ覆盖shadowBounds并各加50，Y大小2、中心Y=-1，所以顶面Y=0。它负责背景地面的射线拾取，和Corner柱体、楼房模块渲染三者分开。[groundCollider更新](native_application/e6fbe0.c:721)。

## 建造范围与水路辅助算法

范围限制有实际的高度/横向规模交换，并非仅一条固定最大高度。常规模式：

```text
H = 已占据最大高度（使用height+1）
D = cube XYZ三个跨度最大值 / 2
a = clamp01((H-64)/192)
b = clamp01((D-256)/256)
扩展坐标要求 a+b <= 1，同时在viewBounds内

GetMaxExtents:
若a+b>1，则a和b分别除以a+b
borderExtent = Round(Lerp(512,256,a))
maxHeight = Floor(Lerp(256,64,b))
```

已有bounds内的高度位置走快捷允许分支，新建扩张才做预算计算。[IsCoordinateAllowed，RVA 0xe6f930](native_application/e6f930.c:79)、[GetMaxExtents，RVA 0xe6bae0](native_application/e6bae0.c:30)。后者Ghidra将float返回值强转成int，原始x87 `fstp` / SSE浮点运算已复核并保存在math JSON，不能照抄伪码。无限制配置路径用maxHeight256和cube border±1024。[Graph.RecalculateBounds](native_application/e6fbe0.c:296)。这些是容量/视野门槛，未找到按居民数量计算的城市人口系统。

编译代码还有 `Flow`/`FlowData` 在Corner/Square邻接上的距离与方向传播，但发行场景的2,517个可解析MonoBehaviour中没有Flow组件。运行时从module load起计数Flow.Update，在图形启动和本次跨patch增删前后两次 `Resources.FindObjectsOfTypeAll(Type)`（包括inactive加载对象）均发现0实例，Update计数0。因此本次可见海面没有这条Flow组件的更新活动；结论仅覆盖此启动和场景，不断言所有可能操作下都不存在。FlowData持voxel引用、dist/newDist、dir/newDir和denom；empty把dist设为float最大值，Setup记录索引可用和voxel是否为空。[FlowData.empty](native_application/838c40.c:28)、[SetupFlowData](native_application/83bdf0.c:30)。

两个可用邻接Flow节点A/B相距L时，`delta=Clamp(distA-distB,-L,L)`，单位方向 `d=(posB-posA)/L`。delta>0则A累加delta*d、取min(newDistA,distB+L)、denom++；否则对B作对应累加、取min(newDistB,distA+L)、denom++。这个辅助函数的available门槛不等同Setup里的open门槛。[FlowTwoFlows，RVA 0x839840](native_application/839840.c:52)。[Flow.Update，RVA 0x83bef0](native_application/83bef0.c:100)遍历高度和Square关系调用它并累计下一轮数据；本次运行没有Flow节点状态可采集。可见海面资源与shader组织见独立资源/Shader报告。

## 验证结论与具体剩余验证

执行 `python -X utf8 work/summarize_grid_topology.py` 成功：40个模板、728三角、4088quad，40/40满足disk Euler=1、边incidence≤2、索引有效及face无重复顶点，所有selector为0..39或255；场景中心独立满足217-408+192=1；24个Compose重心权重样例误差<1e-6。原始PE hash、12段指令hash、选择表、中心fixture与SVG都已保存，可重跑，不改原Steam文件。`python -X utf8 work/verify_grid_topology.py`核验报告链接/行号与每段原始字节绑定。`node --check work/runtime_grid_helpers.js`核验辅助脚本语法；脚本支持精确重载 `gridmath`、中心Bit及六Cluster `gridbits`、按hex筛选八角/relations/coverage/collider指针的 `gridgraph` 任务，运行结果由主代理另外保存。

静态语义已贯通：坐标→分类/hash/模板或程序patch→细分排序→Bit/Cluster松弛与拼接→共享边Square关系→Corner高度列→上下Qube角占据→WFC/阴影与collider。主代理已实际执行以上4项有界运行观测，原始记录在 [townscaper_runtime_grid.json](townscaper_runtime_grid.json)，独立校验在 [townscaper_runtime_grid_verification.json](townscaper_runtime_grid_verification.json)，可重跑命令 `python -X utf8 work/verify_runtime_grid.py`：

1. `HexToPlane(int2)`按参数类型精确选重载，由il2cpp_runtime_invoke返回盒装float2后unbox；`(0,0)`、`(9,0)`、`(0,9)`、`(72,-36)`四点与独立float32模型逐值完全相同。实际baryVectors六项与静态构造模型最大绝对差 `2.3027567e-9`，符合中间float运算尾差；记录保留原始结果位型。结论覆盖这4点，不推广成任意坐标逐位一致。
2. 中心Bit最终state5、relaxationSteps255，217个浮点顶点与发行场景fixture逐值完全相同，整数patch顶点与face索引也一致。发行场景原已保存state4和这些顶点，因此此比较确认预计算数据进入完成状态，不能当成程序生成/松弛/Compose重新执行的独立复刻。六个中心Cluster均done，分别641、649、641、653、653、649个去重顶点；全部3段patchVertOffsets、mapped索引范围及共享整数顶点映射一致性通过，与上述 `[z,y,x]` 索引转换相符。
3. 在真实patch边界Corner `(72,-36)` 做5阶段：before→添加h0 Ground→添加h1颜色3→删除h1→删除h0。相邻4个Square中左2个属于patch `(0,0)`、右2个属于 `(144,-72)`，因此确实跨块。每个占据阶段的8条非空有向边relation均反向匹配；全部Qube八角、mask和9个邻角coverage符合计算，中心coverage=4、angle360。h0阶段下层mask为 `0x0f|(1<<(4+i))`、上层mask=`1<<i`；h1阶段再加入下层顶角与上层底角颜色3。删除h1精确恢复h0阶段八角/mask；删除h0回收选中4个Square和Voxel。Corner.colliderMesh指针在三个占据阶段稳定非零；尚未单独读取Voxel MeshCollider.sharedMesh，不能把稳定Corner指针扩大为运行时已核验所有共享mesh属性。
4. 本次正常D3D11场景、增删前后Flow加载实例数和Update计数均0，观察范围如前述；shader海面可见和Flow组件未活动可以同时成立。

本任务剩余边界是**独立端到端数值重建**，不是尚未确定Compose方程：没有捕获Compose之前的Bit松弛local数组，无法据最终verts和Cluster数据直接声称逐位复刻。完整程序patch/松弛/Compose移植、任意坐标/任意seed逐位一致未验证。Voxel共享碰撞mesh的setter已有原始代码证据，本次仅核验Corner指针稳定；h0任意请求颜色的Voxel.type保留也有静态代码证据，本次h0请求的是Ground15，未覆盖其它颜色。上述具体边界之外不另留笼统“网格公式未知”结论。
