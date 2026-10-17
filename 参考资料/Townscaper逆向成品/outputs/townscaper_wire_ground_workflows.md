# 连线配对、回收和备用地面交互

本页补齐核心报告的两个业务链。依据是发行包IL2CPP方法映射、PDB支持的原生输出以及原始x86指令；不把静态分支当成真实鼠标或连线创建记录。共用泛型的Ghidra名字必须结合调用点MethodInfo解读。

## 连线不是距离搜索后直接绘制

`PropNode.relations`是分段列表，顺序为parent、child、overlap、motevee、anchor，各段有byte计数。AddAnchor将节点插在前四段长度与当前anchorCount之和的位置并增加anchorCount；RemoveAnchor仅在List.Remove成功时减少计数。[AddAnchor](native_application/758660.c)、[RemoveAnchor](native_application/7588d0.c)。

`PropPlacer.AddColliderToDict`先在空间分块中筛选邻居。候选必须是不同节点、世界AABB相交、relations尚无该对方、两种PropCollider.Layer允许碰撞。Anchor是第3层，专门检查朝向与源wire：

```text
d = normalize(positionOther - positionCurrent)
dot(-d, rightCurrent) >= 0.3
dot( d, rightOther)   >= 0.3
dot(-rightOther, rightCurrent) >= 0.5
currentAnchor.srcWire == otherAnchor.srcWire
```

通过后继续做有向包围盒相交，并排除Transform祖先/后代关系；双方调用AddAnchor，建立双向候选关系。因此范围由anchor自身collider的AABB/OBB决定，朝向门槛另行限制连接。0.3的实际float32是0.30000001192092896，0.5精确可表示。这里没有另外发现显式wire最大长度或节点degree上限。[候选和方向门槛](native_application/758e50.c)、[原始指令与常量](townscaper_wire_raw.json)。

## 放置、朝向、网格与动机

PlacePropsInQube的编译器拆分续体处理新anchor：设置voxelType，将其node加入碰撞字典，然后遍历relations最后的anchor段。对能够取得另一PropWireAnchor的关系：

1. 通过两端Transform.TransformPoint(connectPos)得到世界端点A、B；求中点M=(A+B)/2、长度L=|B-A|和方向D=(B-A)/L。
2. 从当前anchor.srcWire取得Prop源，调用GetProp放入secondaryPropsContainer，取得实例上的PropWire/PropNode；写anchor0和anchor1。
3. 若B.x小于A.x，交换两端引用与端点，并取反D，使端点X顺序一致。两端propWires列表均登记此wire。
4. wire Transform位置设M，朝向设LookRotation(D)。两端node把wireNode加入child段，wireNode把两端加入parent段，再加入两端wireConnectorNode作为motevee。
5. 有PropWireFlagMesh则调用其Setup(master,wire,L)，否则检测PropWireItalianMesh并调用对应Setup；wire Transform加入本次输出列表。

证据是[主放置过程](native_application/75b980.c)、[续体的完整连接段](native_funclets/75e59d.c)。创建段未另做wire去重或显式长度门槛；前面的relations.Contains及collider配对限制承担此职责。

FlagMesh生成网格/UV，材料UV使用两端voxelType。ItalianMesh使用确定性随机状态选择网格，按分支绕Y旋转180度，并使用一端voxelType取得着色mesh。它们使用连接长度L构造装饰，不是自由绳索物理模拟。[旗帜网格](native_application/805ae0.c)、[Italian网格](native_application/8063b0.c)、[发行4个anchor/2种wire配置](townscaper_prop_configurations.md)。

## 拆除必须补读原始指令

`ReturnProp`的Ghidra输出把0x76071f..0x7608f5标为不可达并删去。原始指令证明该块存在且由TryGetComponent成功分支进入：调用前LEA生成输出指针，调用后测试AL。共享过程被显示为GetComponentsInChildren(bool)，输出参数没进入模型，导致后续wire引用被错误消除。不能据伪代码的“Removing unreachable block”宣称程序不会清理wire。[有局限的原始伪代码](native_application/760410.c)、[1457条原始指令及恢复语义](townscaper_wire_raw.json)、[可读反汇编](townscaper_wire_raw.txt)。

真实回收从anchor.propWires.Count-1倒序遍历，流程为：

```text
wireNode = wire.GetComponent<PropNode>()
node0 = wire.anchor0.GetComponent<PropNode>()
node1 = wire.anchor1.GetComponent<PropNode>()
node0.RemoveChild(wireNode); node1.RemoveChild(wireNode)
wireNode.RemoveParent(node0); wireNode.RemoveParent(node1)
wire.anchor0.propWires.Remove(wire)
wire.anchor1.propWires.Remove(wire)
ReturnProp(wire.GetComponent<Prop>())
wireNode.RemoveMotevee(anchor0.wireConnectorNode)
wireNode.RemoveMotevee(anchor1.wireConnectorNode)
wire.anchor0 = null; wire.anchor1 = null
```

关键call VA分别是0x1076080b/0x1076081f、0x10760836/0x1076083f、0x10760865/0x1076088b、0x107608a2、0x107608bb/0x107608d4。它拆除双向引用并递归归还Prop对象池；这段没有直接调用Unity.Object.Destroy。源node的priority/motivations恢复、hasBeenTurnedOn清false也在该原始块中。可重跑`python work/inspect_wire_raw.py`。

## GroundClicker与当前MasterClicker的区别

发行场景配置关联Ui.MasterClicker；GroundClicker仍有编译代码，不能把它的阈值替换进当前鼠标入口。当前MasterClicker的0.25秒/1.5秒见[交互主报告](townscaper_interaction_presentation.md)。下表是备用GroundClicker实际逻辑：

| 操作 | 门槛/结果 | 原生证据 |
|---|---|---|
| AddClick | pressUsed=true；validAdd后Maker.AddClick，再ClickEffect.Click | [e1fe70](native_application/e1fe70.c) |
| RemoveClick | pressUsed=true；validRemove后先ClickEffect，再Maker.RemoveClick | [e206f0](native_application/e206f0.c) |
| ColorPick | pressUsed=true；存在Voxel且type<=14才SelectPicker并播放取色效果 | [e20380](native_application/e20380.c) |
| BucketClick | validBucket，颜色不同才BeginNewAction；遍历floodVoxels记录每项旧/新type、PaintVoxel，最后EndAction | [e1fef0](native_application/e1fef0.c) |
| BulldozeClick | validBucket后同样一个动作组；遍历floodVoxels记录type→Empty18并RemoveVoxel，最后EndAction | [e20170](native_application/e20170.c) |

Bucket/Bulldoze消费已有HoverData.floodVoxels，不在点击函数里重新搜索全城。Hovered的存在分别驱动validPaint/validRemove/validBucket；validAdd要求目标未占据、格网位置有效、height在0..255且insideBorders。[HoverData.SetHover](native_application/411e50.c)。因此“桶一次一个撤销组”与“每个Voxel一个动作条目”同时成立。

这个flood集合按建筑模块的cornerLinks传播，而非简单按相同颜色或欧氏距离选邻居。Hover切换到集合外Voxel时清列表、加入该Voxel、重置floodIndex；Iterate一次消费列表中的一个Voxel，找到它关联Square的上下两层Qube，取所选OrientedModule及方向映射，把当前八角索引映射到源module角。逐一检查其它七角对应GetCornerLinkIndex的bit是否在module.cornerLinks中，命中才反向映射到目标Corner和height，以Graph.BinaryTreeSearchVoxel取得Voxel，List.Contains去重后追加队列。没有可消费项时返回false，成功扩展一步返回true，因而形成增量连通分量遍历。[初始化](native_application/411e50.c)、[队列与模块链接传播](native_application/4115c0.c)。

OnPointerClick要求dragMode=0、同帧未处理且pressUsed=false。touch pointerId>=0时，clickTime+0.32已过则RemoveClick，否则AddClick。负pointerId的左鼠标还读取Rewired功能按钮与currentVoxelType；正常短点击添加，延时/删除模式删除，取色修饰按钮进入ColorPick；右键删除或在取色修饰下取色，中键取色。处理后消费事件。[完整点击分支](native_application/e20ea0.c)。

Update仅在bobbing时运行：超过0.32秒开始即将删除音效，使用InverseLerp(0.29,2,time)和二次ease在-0.2到-0.4间压下；到2秒取色并停止bobbing。这是另一组真实阈值。[长按和shader更新](native_application/e21210.c)。

BeginDrag停止相机惯性和VoxelBob、清hover；恰好两触点用dragMode1，左鼠标或触控用2，右/中鼠标用3。两触点只由pointerId0处理：以先前/当前两点距离之比乘zoomCurrent，经Clamp01写zoomTarget/current，并以两点平均位置/平均delta平移。mode2按屏幕短边归一化delta，以180度比例旋转，并记录时间样本；mode3平移。MasterClicker对应旋转比例130，不能混用。[BeginDrag](native_application/e20760.c)、[pinch/rotate/pan](native_application/e20850.c)、[EndDrag](native_application/e20d20.c)。

## 证据范围

另一个独立道具PropPropeller在OnValidate把对象层设为LayerMaster.Propeller；Apply在其世界Y<1.5时将waterSplashEffect定位到同XZ、Y=0并激活，否则关闭。Update使用scaled Time.time，localRotation=Euler(0,(forward?1:-1)*time*250+15,0)，没有角加速度或风力求解。[layer](native_application/804a40.c)、[splash](native_application/804b00.c)、[旋转](native_application/804c70.c)。这也解释GPU/截图里动态道具不能按静态像素相等比较。

Window.Apply按cornerIndex&3取Square角，求确定性seed：`Abs(int32(hex.x*0x4c7f6dd1 + hex.y*0x4822a3e9 + RoundToInt(qube.worldY)*-0x553c3da3 -0x2de2f6bb))`。GetMeshWithVoxelType为每个源mesh缓存60项（15色×4变体，含原源c0/v0，实际Instantiate59个），索引为`(sourceIndex/60*15+voxelType)*4 +seed%4`。[Apply](native_application/3f71f0.c)、[mesh缓存](native_application/3f6be0.c)。

窗户UV的两处x87 fmod被伪码漏掉参数，原指令恢复真实模数均1：每次迭代以**当前**列表UV计算`x'=Sign(x)*float32(float32(fmod(abs(x),1))+color)`，`y'=Sign(y)*float32(float32(fmod(abs(y),1))+variant)`，结果写回列表，再克隆mesh。Sign(x>=0)=+1，因此负零输入会取+1；不能不加条件地用原始UV闭式代替这个迭代。例如(-2,-3)先生成c0/v1=(-0,-1)，到c0/v2=(+0,-2)，到c1/v0=(1,-0)，到c1/v1=(1,+1)。[两个call窗口、常量/Sign实现、缓存循环及60项参考轨迹](townscaper_window_math.json)保存这一数值边界，避免重建时零余数颜色符号错误。

以上配对、几何、引用维护和备用交互语义已由原生代码与缺失块原始指令回答。原版图形建造/撤销、跨patch八角与邻接另见[图形拓扑运行](townscaper_runtime_grid.json)；那些任务主动调用Graph/Maker，不证明人类鼠标、硬件触控或实际wire预制件配对已执行。所有输入组合、对象池长时间压力和逐位独立游戏重建不是本页已验证结论。
