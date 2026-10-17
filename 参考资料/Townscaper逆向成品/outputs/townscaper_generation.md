# Townscaper 建造、模块求解与渲染管线

本文逐函数解释已导出的 PDB 命名原生伪代码，并对候选成本中的取余参数补做原始指令验证。这里的“已确认”指发布二进制/序列化资源中的静态事实；没有把静态管线等同于游戏内运行结果。反编译中的泛型类型别名与异常处理局部变量存在错误，下面只使用可由字段访问、控制流和调用参数共同支持的结论。

## 建造后的更新链

Graph.IntegrateVoxel 将新体素写入相邻 qube 的 cornerValues，并切换对应占据位。`voxelCount` 虽然名字含 count，实际是 8 位占据掩码：下四位和上四位分别通过 `1/2/4/8` 与 `0x10/0x20/0x40/0x80` 更新；`fullyCovered` 直接判断等于 `0xff`。`empty` 却判断 `possibleModuleListIndex == -1`，不能用掩码为零替代这个属性。[IntegrateVoxel占据位](native_application/e6eee0.c:416)、[fullyCovered](native_application/809860.c:1)、[empty](native_application/809850.c:1)。

Graph.QubeUpdated 只在 awaitingGraphUpdate 为 false 时入 qubeUpdateQueue，随后置 true，避免同一 qube 重复入队。Graph.Iterate 消费队列，确认 qube 所属对象层级仍在 graph.squares 下才调用 WFC.QubeUpdated，并清除 awaitingGraphUpdate。该遍历受 WorldMaster.KeepGoing 的时间预算控制；建造输入后网格更新能够跨帧，而非一个点击函数同步构建全部建筑。[入队去重](native_application/e738f0.c:21)、[队列消费](native_application/e71f20.c:433)。

WFC.QubeUpdated 给 qube.lastPropagation 写当前 propagationCounter，并记录 qube、传播代数和 existanceIndex 到 updates。后续处理同时核对传播代数与存在代数，丢弃过期记录；Iterate1 还拒绝 existanceIndex 为奇数的传播项。此机制区分同一池化 qube 的不同生命周期，不能仅按对象地址识别稳定节点。[传播记录](native_application/3f5010.c:29)、[过期检测](native_application/3f2ab0.c:169)、[生命周期检测](native_application/3f3000.c:368)。

当 propagationCounter 与 lastStartedPropagation 相等时，IteratePropagationCount 将 counter 加 4。Iterate0 检测新代数，更新 lastStartedPropagation 并先返回 true。ResetPropagationCounter 在 counter 超过 `0x7fff` 后遍历 squares 下 qubes 清理传播索引，再将两个计数器置零。[代数步进](native_application/3f4210.c:1)、[开始新代](native_application/3f2ab0.c:135)、[重置阈值](native_application/3f57d0.c:31)。

## 从八角材料到候选库

ModuleLibrary.OnEnable 与 Setup 共享 RVA。它根据每个 cornerLookup 的 ByteQube values 建立 `cornerDict[values] = 列表索引`。WFC.Iterate0 先对真实 cornerValues 执行 MarkHiddenCornersAmbigous，再执行 GetIndexedMaterials，最后以归一后的八字节键查 cornerDict，查不到则写 possibleModuleListIndex=-1。[lookup字典](native_application/3d96f0.c:51)、[查归一键](native_application/3f2ab0.c:253)。

MarkHiddenCornersAmbigous 对八个角逐个检查：当前角和三种静态角置换对应值都不等于 `0x12` 时，把当前值改为 `0x10`。GetIndexedMaterials 对值小于 15 的角按首次出现顺序分配 0、1、2…，相同颜色保持同一编号，15 及以上的特殊值保留。这意味着候选匹配关注颜色相同/不同的结构关系；原始调色板的第几个颜色不会直接扩大全部形状键空间。`0x10` 对隐藏角的处理和角置换来自代码，不能把每个角颜色原样作为候选库键。[隐藏角归一](native_application/3d9ca0.c:49)、[材料重编号](native_application/3d9b00.c:33)。

真实资源提供了这个规则库，而非由运行时枚举所有建筑几何：`sharedassets1.assets / PathID 1119` 的 ModuleLibrary 有 2,072 个 modules、128 个 decorModules、4,769 个 cornerLookups、14,519 个 sideLookups、892 个 moduleMeshes、5,088 个 decorOverlaps 和 2 个 waterSides。module[0] 的成本为 0，profileIndexes=[0]，网格、道具与 decor 列表为空。ApplyModule 对 moduleIndex=0 的分支执行清理，与该零模块资源一致。资源证据见 [模块资产摘要](townscaper_module_asset_summary.json)；其数量与统计由资源提取流程生成。

FillQubePossibilities 清空当前 possibleModules；若 qube.empty 返回 0。否则读取 `cornerLookups[possibleModuleListIndex].orientedModules`，再通过 moduleIndex 索引 modules，并用 `flags & 7` 选 orientation、以 profileIndexes[orientation] 索引 sideLookups。候选记录包括 SideProfile、OrientedModule 和 float cost。[候选枚举](native_application/3f1e80.c:235)、[orientation低3位](native_application/74e260.c:1)。

## 六面兼容条件

SideProfile 存储四个水平侧面的正/反两种 16 位编码 v00/v01、v10/v11、v20/v21、v30/v31，以及 v4/v5。Get0(0..3) 取正编码，Get1(0..3) 取反编码；4、5 在两个函数中都直接返回 v4/v5。因此邻接匹配是 `当前候选.Get0(当前面) == 邻居候选.Get1(indexInOther)`，不能对同一面号直接比较整个 SideProfile。[Get0](native_application/2f54f0.c:1)、[Get1](native_application/2f5590.c:1)。

FillQubePossibilities 查询 Graph.GetQubeRelation6，逐个面测试候选：

- 无邻居且不是最低 sibling 层时，该面的 profile 必须为 0。
- 最低 sibling 层无邻居时，水平面 0..3 必须在 ModuleLibrary.waterSides 中；面 4 必须为 1；面 5 必须为 0。
- 邻居 fullyCovered 时，当前面编码必须为 1。
- 有未完全覆盖邻居且满足传播代数约束时，需要在邻居 possibleModules 中找到反方向编码相同的候选；邻居无候选时接受当前编码小于 2。

这些条件均在 [六面筛选](native_application/3f1e80.c:437) 中出现。最低层由 Transform.GetSiblingIndex()==0 判断。Graph.GetQubeRelation 的面 4 访问同一 Square 下 siblingIndex-1 并返回反面 5，面 5 访问 siblingIndex+1 并返回反面 4；Graph.IntegrateVoxel 把新 qube 的 localPosition.y 设为递增层索引，因此 4 为下、5 为上。水平 0..3 按 Square.GetRelation 的四条不规则边，不是固定的全局 ±X/±Z。最低层的下表面 profile=1，上表面=0，外水平边使用 waterSides 两种编码。[上下邻接](native_application/e6c510.c:1)、[层索引与Y坐标](native_application/e6eee0.c:364)。

候选之间的侧面编码不同会设置六位 sideVariationMask。该 mask 让传播只追踪仍有变化的面；不要把它与八位体素占据掩码混用。Fill 返回该变化 mask，并写 qube.sideVariationMask。[变化mask](native_application/3f1e80.c:642)。

## 成本、传播与折叠

OrientedModuleSides.CompareTo 只比较 float cost；Fill 用 BinarySearch/Insert 维护排序。候选成本从 Module.cost 加确定性位置扰动得到，代码没有在该候选选择路径调用 Unity.Random。原始指令和常量进一步确认两处 `_CIfmod` 的除数为 1：先 fld 位置表达式，再 fld1；分发表指向的 fallback 先 fxch 后 fprem。[成本比较](native_application/74e030.c:1)、[排序插入](native_application/3f1e80.c:603)、[原始数值证据](townscaper_generation_numeric_evidence.json)。

以伪代码变量的几何含义表示，候选扰动为 `fmod(abs((candidateIndex + x + z + y) * float32(pi) * 17), 1)`；qube 排序成本的扰动为 `fmod(abs((z + x + y) * float32(pi) * 7), 1)`，加在该 qube 的最低基础模块成本上。这里表达式先按 SSE float32 顺序计算，再提升为 float64 取余，最后转回 float；复现时使用普通 Python double 从头算会改变靠近边界的排序。该扰动是位置相关选择，不能描述成按概率权重随机抽样。

Iterate1 按队列优先级处理 lastRemovals，然后 propagations，然后 toCollapse。传播项的侧面约束移除不兼容候选。处理 toCollapse 时，从列表末端开始删除候选，停在索引 0；因此保留成本排序中的首项。剩一项时立即 ApplyModule，再把该 qube 排入 decorUpdates 并推进传播代数。[队列优先级](native_application/3f3000.c:156)、[折叠删除](native_application/3f3000.c:273)。

RemovePossibleModule 删除一个候选后，逐面检查该被删编码是否仍有别的候选支持；若这个编码的最后支持消失且邻居该面仍变化，把邻居/侧面/传播代数写入 lastRemovals，Iterate1 随后删除依赖该编码的邻居候选。原候选数为 2 时删除后直接应用剩余唯一候选。原候选数为 1 时函数画红色调试射线、记录错误并返回 false，拒绝删掉最后候选。Fill 最终得到零候选则另行 LogError。这里确认的是最后支持传播和拒删机制，尚未证明所有矛盾输入的全局回溯求解。[拒绝删最后候选](native_application/3f52d0.c:122)、[最后支持入队](native_application/3f52d0.c:223)、[零候选记录](native_application/3f1e80.c:782)。

MaybeQueueQubeForRebuilding 遇到掩码为 0 返回 false，遇到唯一候选立即 ApplyModule；其余情况由 awaitingRebuilding 去重进入 qubesToRebuild。IterateApplyModules 按时间预算消费待重建 qubes，清 awaitingRebuilding，非空候选列表直接取 [0] 应用。结构求解与装饰求解有独立的 updates/propagations/toCollapse/toBuild 队列；WorldMaster.Iterate 依次调度 Iterate0、Iterate1、IterateDecor。[立即构建/去重](native_application/3f4950.c:1)、[重建选首项](native_application/3f3800.c:94)、[世界调度](native_application/3f7b30.c:1)。

## 模块网格不是单位立方体拼接

ApplyModule 跳过零模块和 fullyCovered 的可见构建分支；已有第一个 ModuleContainer 的 OrientedModule 与新候选相同时复用，否则标记旧容器待分解。新容器从池中获取、设为 qube 子物体并排第一，记录 orientedModule，同时将 qube 按 awaitingGrass 去重排入草地/装饰更新队列。[模块替换](native_application/3d7130.c:387)、[容器与草地队列](native_application/3d7130.c:496)。

每个选中的 module mesh 使用压缩 SbyteFloat3 顶点/法线/切线、ByteFloat2 UV、byte triangle index。ApplyModule 先按 orientation 置换/旋转，再计算 GetTs 权重，调用 MultiplyPoint 或 MultiplyVector 将单位模块变形到目标 Square。GetTs 的四个权重确认为 `((1-z)*(1-x), (1-z)*x, z*x, (1-x)*z)`；它是由 x/z 决定的四角双线性权重。MultiplyPoint 在 Square.m0..m3 上分别变换 `(0,y,0)`，最后按这四个权重求和；MultiplyVector 采用对应矩阵的向量变换。由此建筑模块跟随不规则四边形格网形状，而非只附加平移。[GetTs权重](native_application/3d8920.c:1)、[四角位置变形](native_application/3d8dc0.c:1)、[向量变形](native_application/3d8fd0.c:1)、[orientation与压缩网格](native_application/3d7130.c:784)。

上述 GetTs 调用在伪代码中被命名为 TMP_Offset.ctor；这是四个 float 结构体构造的共享 RVA，并不表示生成系统依赖 TextMeshPro 布局。相同问题也会把泛型 List<OrientedModuleSides> 的临时容器显示成别的 List 类型。解释必须跟调用参数、真正的 MethodInfo alias 和字段布局，不把共享过程名称直接移植为源码语义。

## 网格批处理与回收

BigMeshMaster.GetBigMesh 先按 Material 寻找组，检查 BigMesh.availableCount 是否足以容纳当前顶点，不足则获取新的池化 Mesh/MeshFilter。BigMesh.availableCount=`availableIndexes.Count-createdCount+65535`，remainingCount=`65535-createdCount`。free index 允许旧模块被移除后的槽位复用，而不是每次建造创建一个长期独立 Mesh。[按材质选组](native_application/877af0.c:1)、[可用数量](native_application/878970.c:1)、[剩余数量](native_application/8789b0.c:1)。

AddMesh 记录 BigMeshPart 指向所属 BigMesh，先消费 availableIndexes 和 availableTris 的可回收位置，再附加所需顶点属性与三角索引，置 dirty=true。MaybeApply 无 dirty 时返回；有 dirty 时处理空网格回收、压缩有效顶点/重映射三角索引，上传 vertices/normals/tangents/UVs/triangles 并重算 bounds，然后清 dirty。ReturnMesh 返还该 part 的索引/三角槽位并标记 dirty。这个系统是按材质的 CPU 增量合并与 GPU mesh 上传。[添加与dirty](native_application/8770c0.c:661)、[网格上传](native_application/877e50.c:26)、[返还mesh part](native_application/878420.c:1)。

ModuleBuilder.MarkModuleContainerForDeconstruction 移除相关 props、将旧容器移到分解容器，并立即返还其 bigMeshParts；后续 DeconstructModuleContainer 返还独立 MeshFilter，按镜面材质区别处理 Mesh 的回收，清 orientedModule 后将 ModuleContainer 送回池中。IterateDeconstructQubes 和 PropPlacer.IterateDeconstructProps 分开消费清理工作，受世界时间预算控制。[分解入队与part回收](native_application/3d8b80.c:1)、[独立网格与容器返还](native_application/3d8680.c:1)、[道具清理](native_application/75b280.c:1)。

## 道具的可见性与空间分块

PlacePropsInQube 从模块的 propPlacements 和对应 orientation 取出道具；RecursivePropNodeSetup 处理源节点到池化目标节点的层级、网格批处理及引用。PropPlacer.GetChunkMatrix 的平移明确为 `2*coordinate+1`，标记道具空间分块的中心位置。[道具放置](native_application/75b980.c:1)、[递归节点设置](native_application/75f5f0.c:1)、[分块矩阵](native_application/75ac70.c:48)。

RecursiveCheck 仅在 hideCount==0 且 motivations!=0 时尝试加入 colliderDict 并激活节点；它还更新兄弟/子节点的隐藏计数，递归传播可见状态。ChangeHideCount 用 byte 加一/减一，减到 0xff 时记录错误。这说明附属门窗/连线等道具存在基于动机和遮挡的可见性网络；它不是简单地“模块里有 prop 就总显示”。[节点可见条件](native_application/75ee30.c:101)、[隐藏引用计数](native_application/75abb0.c:30)。

[道具逐资源配置](townscaper_prop_configurations.md) 和 [完整数值](townscaper_prop_configurations.json) 关联发布 GameObject/Transform 层级，涵盖 159 节点、154 collider、62 transformer、21 window 及 wire/propeller/modifier 组件，共427条。collider 的 Bounds.m_Extent 为半尺寸，不是半径；序列化 worldBounds 为初始化值，放置后由 CalculateWorldBounds 将局部盒经 GetMatrix 变换、逐角 Encapsulate 得到实际 AABB。[变换后包围盒](native_application/7562f0.c:1)。

PropCollider.Layer 与 Unity physics layer 是两个概念：Object=0、Door=1、Path=2、Anchor=3、InWall=4、Step=5、Unclear6=6、Self=7。Collides 对称规则只有 (0,0),(0,2),(0,5),(1,1),(3,3),(4,4),(5,5) 为 true，其余 false。AddColliderToDict 先 Bounds.Intersects 再 OrientedBoxOrientedBox 测试；排除自身父子层级，Anchor 层命中相互 AddAnchor，其余命中相互 InserOverlap，当邻居已 turnedOn 且 priority>=新节点时增加新节点 hideCount。[层碰撞矩阵](native_application/756490.c:1)、[精细碰撞](native_application/758e50.c:11)、[anchor与priority](native_application/758e50.c:296)。

四个发布 PropWireAnchor 连接两类实际 wire 源：3个引用1469，1个引用1468，connectPos、connectorNode、voxelType 均在配置表。源 wire 的 anchor0/anchor1 为空，发布配置不能替代运行时配对状态；PropWire.Setup 为共享空过程。ItalianMesh.Setup 根据确定性随机状态选择 MiscReferences.italianMeshes 中的网格、部分分支绕Y旋转180度，取一个端点 voxelType 经 GetMeshWithVoxelType 设置 mesh；FlagMesh.Setup 构造顶点/UV并按两个端点 voxelType 偏移材质UV。[Italian mesh选择](native_application/8063b0.c:1)、[旗帜端点UV](native_application/805ae0.c:391)。

## AO 与方向阴影

AoBaker.BakeAo 用 Graph.shadowMeshBounds 和 boundsHeight 计算体积切片布局：totalCount=boundsHeight+1，遍历 countX 与 ceil(totalCount/countX) 的组合，选择图集边长最小的布局，设置全局纹理参数并上传 shadowMeshes 的 vertices/UVs/triangles。OnPostRender 将 renderTexture0 用 spreaderMaterial Blit 到 renderTexture1，然后关闭该相机，表明该 AO 更新是一次请求触发的渲染阶段。声明中的 texSize=2048、texelSize=1/2048 是固定 AO 纹理规模；它不是屏幕空间每帧 AO 的单独证据。[体积切片打包](native_application/871c00.c:139)、[AO扩散与相机关停](native_application/872500.c:10)。

ShadowBaker.BakeShadow 只打开组件并置 shouldBake=true；LateUpdate 处理 target/current 太阳角度平滑与 angleDirty/framingDirty，完成 MaybeUpdateAngle/Framing 后在 shouldBake 为 true 时打开 shadow camera 并清旗标。ShadowBakerCamera.OnPostRender 再关掉相机。它形成“角度/建筑变化→请求→一次相机渲染→关相机”的方向阴影路径。LateUpdate 同时根据 target.y==0 更新 lamps 与 Shader 全局向量；世界天色和灯光受同一太阳参数驱动。[阴影请求](native_application/a09830.c:1)、[相机触发](native_application/a098d0.c:113)、[阴影相机关停](native_application/a09800.c:1)。

## 完成范围与剩余核验

已解释的发布代码路径涵盖 dirty qube 去重、生命周期代数、八角材料归一、真实候选库、六面 profile 筛选、确定性成本、支持消失传播、折叠/构建选择、模块四角变形、材质网格合并/回收、道具可见性网络，以及 AO/方向阴影请求。数值证据还补齐了反编译遗漏的 fmod 参数。

GPU 编译程序已从资产 compressedBlob 恢复，详见 [业务 Shader 和核心像素公式](townscaper_shaders.md) 与 [全部业务GPU算法](townscaper_shader_algorithms.md)：34个业务Shader、84个顶点/像素variant、5652执行指令全部生成寄存器显式HLSL并成功D3DCompile，包含75邻域反距离AO扩散、水面周期、材质查色、像素抗锯齿、阴影、天空、UI距离场、镜面和粒子。452常量字段、纹理sampler、每个variant和输入输出接口均恢复并验证；4039立即数分量使用原DXBC精确位模式。此工作补齐GPU程序算法证据，尚未证明重编译程序与原游戏的最终像素等价。

[原生主线程运行场景](townscaper_runtime_scenario.json) 额外核验特定默认城操作：before42 qubes/89 ModuleContainers，执行 GraphApplyAction+MakerAddAction 后45/96；undo 的完整 qube 模块快照（坐标/ordinal/占据mask/candidateListIndex/OrientedModule.index及flags）等于before，redo等于after；两个 generation_checks 均true。它验证该默认城的一次添加/撤销/重做和生成选择状态；headless没有GPU渲染，不扩展为所有输入或所有图片一致。

[真实发布 PDB 结构布局](townscaper_pdb_layouts.json) 确定Qube对象52字节：voxelCount0x0c、sideVariationMask0x0d、decorSideVariationMask0x0e、shadowIndex0x10、possibleModuleListIndex0x14、existanceIndex0x18、lastFillIndex0x1c、lastPropagation0x1e、cost0x20、cornerValues0x24、awaitingRebuilding/Grass/GraphUpdate/ModuleClearing0x2c..0x2f、possibleModules指针0x30。WFC对象76字节：master0x0c、propagationCounter0x10、lastStartedPropagation0x12、removeNeighbors0x14、updates0x18、propagations0x1c、validations0x20、toCollapse0x24、decorUpdates0x28、decorPropagations0x2c、decorToCollapse0x30、decorToBuild0x34、lastRemovals0x38、lastDecorRemovals0x3c、qubesToRebuild0x40、hashset0x44、doDebugBreak0x48。这是PDB布局和原生运行快照证据；`dump.cs` 的Qube尾部0x0不能用作偏移。

沙洲完整CPU/GPU链补充见[偶点3/6轮平滑](townscaper_sandbank_smoothing.md)、[条带塌缩/换边与局部修正](townscaper_shore_local_math.md)、[Y0坡度与最终偏移](townscaper_sandbank_slopes.md)、[水/沙mesh与UV/tangent绑定](townscaper_sandbank_water_math.md)。这些报告修正了初审偶奇索引与距离解释，原始指令确认WaterSound实际错位选点；最终业务审计已闭合。

剩余等价核验是复杂矛盾能否从所有输入恢复、更多城镇操作的生成选择、实际wire运行实例以及独立重建GPU输出与不同后端差异。原版D3D11城市四帧已经观察，不等于重建程序与它像素一致。原始C#逐字恢复未获证明；`FUN_...` helper、异常处理栈变量及静态模板共享别名保留在原输出，不凭伪代码假象补写未证实逻辑。

本报告来自现有原生输出的人工深读；并非新增 REA Evidence。独立原始数值验证命令为 `python work/verify_generation_numeric.py`，报告生成命令为 `python work/write_generation_report.py`。原游戏二进制只读。
