# Townscaper 世界调度、存储与撤销历史

本报告依据带 PDB 名称的原版 x86 GameAssembly.dll 原生函数反编译，覆盖 WorldMaster 调度、SaveSystem 状态与异步存储，以及 Maker / Graph.Action 的撤销重做。`dump.cs` 只用于枚举名称和 ABI 字段；行为结论来自下面逐项引用的原生函数。Ghidra 的共享函数名和泛型签名存在误配，例如 `AxisCalibrator.get_isValid` 与 `MetaSave.get_isLoading` 共用 RVA 1d17b0，不能把显示名称直接当成业务语义。

另有原版运行时插桩证据：[启动及 codec 观测](townscaper_runtime_startup.json:1)。该运行将 persistentDataPath 重定向到工作区、抑制 SaveMetaSaveToDisk，codec 和 WorldMaster 状态调度原函数保持不变。这是 instrumented-original-runtime，**不是 REA Evidence**。本报告的磁盘失败处理仍以静态证据为准，不把受抑制的写入当作真实保存验证。原生编辑验证包含 Add / Paint / Remove 的 Undo / Redo 几何恢复，未模拟完整物理鼠标事件。

## 世界迭代和帧预算

`WorldMaster.Update` 按 Time.frameCount 每帧至多重启一次共享 UniversalStopwatch；`KeepGoing` 读取这个共享表的 ElapsedMilliseconds，正常非负值严格小于 **8 ms** 才继续。不是每帧只处理一个状态，也不是总帧耗时上限：外层循环不断调用 Iterate，内部工作项也可检查 KeepGoing，某个不可切分的工作项及鸟群、蝴蝶、音频等后续工作仍能超过预算。实例字段 milliseconds 虽初始化为8，实际 KeepGoing 比较的是常量8。[共享计时](native_application/3f8c30.c:104)、[预算判断](native_application/3f82e0.c:49)、[继续循环](native_application/3f8fa8.c:39)

Iterate 返回 true 表示本轮仍可继续；对通常的子模块 Iterate，子模块返回 true 时保留当前状态，返回 false 时 WorldMaster 才递增状态。Done=42 返回 false，使 Update 停止迭代。Update 的编译器拆分尾段已补齐，确认 Iterate 返回 true 后重新检查预算并继续；随后运行 WFC.LaterUpdate、BirdFlock.OnUpdate、ButterflyFlock.OnUpdate、ManySoundsManager.OnUpdate。[返回语义](native_application/3f7b30.c:475)、[收尾调用](native_application/3f8fa8.c:88)

`Load(SaveData)` 读取非图像内容到自己的 SaveData，进入 state=1，清除 anyChange，lastChangeTime=-1；字符串入口先 Clear，再调用原生 codec，解码成功才执行同样状态切换。`ResetState` 把状态设为19，是普通编辑及撤销重做后的重建入口。[对象载入](native_application/3f83d0.c:19)、[文本载入](native_application/3f8420.c:34)、[重建入口](native_application/3f8b00.c:11)

`New` 两个重载仅清空 SaveData，随机选择 [0,40) 的 starting hex，并给 x、y 各加 [-12,12) 随机偏移，保存一个 count=0 的空列；**它本身不切换世界状态**。调用者随后 Load 才启动生成。NothingToLoadAtStartup 另调用镜头和阴影载入，直接进入7。[New](native_application/3f84d0.c:38)、[传入 SaveData 的重载](native_application/3f85b0.c:1)、[无启动存档](native_application/3f8690.c:1)

## WorldMaster 状态表

以下为实际调用而非仅凭枚举名。所有常规完成路径到下一状态；特殊跳转在表中标明。13/14 的枚举名称分别是 LoadGraph1 / LoadGridFocus，但原生调用实际分别为 Grid.IterateFocus / Graph.Iterate，重建时应遵循调用证据。

| 状态 | 原生执行内容 | 完成后 |
|---|---|---|
| 0 | 默认分支，不执行阶段 | 保持0，true |
| 1 | 无业务调用的阶段 | 2 |
| 2 | 清沙岸、重置鸟群/蝴蝶/PropPlacer，Load 阴影，清 UndoQueue | 3 |
| 3 / 11 / 35 | ModuleBuilder.IterateDeconstructQubes | 下一状态 |
| 4 / 12 / 36 | PropPlacer.IterateDeconstructProps | 下一状态 |
| 5 | PropMeshAnimator.OnReset | 6 |
| 6 | 等 awaitingDim=false | 7 |
| 7 | Graph.BeginLoad | 8 |
| 8 | Graph.IterateLoad | 9 |
| 9 / 20 | Graph.IterateFocus | 下一状态 |
| 10 | onCameraLoad(SaveData) | 11 |
| 13 / 21 | GridGenerator.IterateFocus | 下一状态 |
| 14 / 22 | Graph.Iterate | 下一状态 |
| 15 | GridGenerator.IterateGenerateCenter | 16 |
| 16 / 24 | WFC.Iterate0 | 下一状态 |
| 17 | 在预算内从 qubesToRebuild 尾部应用首个 possibleModule，移除已处理尾段 | 18 |
| 18 | 阴影 framing dirty + BakeShadow | **25** |
| 19 | ShadowBaker.OnBuilt | 20 |
| 23 | 阴影 framing dirty + BakeShadow | 24 |
| 25 | WFC.Iterate1 | 26 |
| 26 / 28 / 33 | BakeShadow | 下一状态 |
| 27 | WFC.IterateDecor | 28 |
| 29 | propagationCounter≥32768 时清每个 Qube.lastPropagation，计数器及 lastStartedPropagation 归零 | 30 |
| 30 | Sandbanker.Iterate | 31 |
| 31 | Graph.IterateRefillPools | 32 |
| 32 | ModuleBuilder.Iterate（枚举名 Props） | 33 |
| 34 | BirdFlock.IterateBirdCreation | 35 |
| 37 | PropPlacer.OnDoneResetting | 38 |
| 38 | WorldMeshes.IterateRefillPools | 39 |
| 39 | 无业务调用（枚举名 SaveToUrl） | 40 |
| 40 | Grid.IterateBits(KeepGoing delegate) | 41 |
| 41 | SaveSystem.IterateRefresh(KeepGoing delegate) | 42 |
| 42 | 返回 false | 保持42 |

原生阶段依据：[2–10](native_application/3f7b30.c:94)、[13–17](native_application/3f7b30.c:186)、[18跳25与编辑入口19](native_application/3f7b30.c:299)、[25–29](native_application/3f7b30.c:338)、[30–42](native_application/3f7b30.c:405)。启动插桩确实观察到 **1,2,…,18,25,26,…,42**，结束状态42；metadata initializer entered=12113、returned=12113，排除了此前首次元数据初始化卡住的状态。此观测没有覆盖普通编辑19–24每个阶段，也没有给出8ms的实测帧时长。[原运行时记录](townscaper_runtime_startup.json:1)

## Graph 的载入差量过程

BeginLoad 设内部 loadState=0。内部0清 Maker 历史；1为所有旧体素记录“当前类型→Empty”的 action（高度0强制 Ground=15）；2清已有 Qube 模块及相关队列，在预算内推进；3把存档体素与这些旧坐标/高度 action 对比，完全相同则删除对应 action，类型变化则将旧 action 的 outType 改成新类型，新坐标则追加 Empty→新类型；4在 KeepGoing 允许时逐个 Graph.ApplyAction(...,playEffect=false)，末尾清历史，再进入默认 false 分支返回完成。因此 Load 复用同一 Action 机制计算并应用差量，不会将载入产生的 action 留为用户可撤销历史。[内部0/1](native_application/e71200.c:169)、[匹配与合并](native_application/e71200.c:580)、[应用与预算](native_application/e71200.c:720)

零 corner 输入把 empty bounds center 设为(0,0)；一个 count=0 的占位 corner 且无 voxels 时采用该坐标。普通体素会检查保存坐标边界及 `height < maxHeight`；超限部分跳过并记录消息。因此 clipboard codec 可表达高度255，并不等于任意世界宽度都接受高度255。原版完整 Load→Done→Save 对单列(0,0,h255)精确恢复文本，boundsHeight=maxHeight=256，已证明此有效坐标的最高高度能通过整个生成流程。[高度运行证据](townscaper_runtime_boundaries.json:1)。[空载入和界限](native_application/e71200.c:331)、[高度过滤](native_application/e71200.c:559)

允许编辑范围已经恢复：候选 hex bounds 的三轴最大跨度记为 d，候选高度 H=max(boundsHeight,h+1)。若需扩展当前 bounds，计算 a=InverseLerp(64,256,H)、b=InverseLerp(256,512,d/2)，a+b>1 则拒绝；最后还必须落在 viewBounds 内。InverseLerp 是 Mathf 的夹紧归一化；高度与城镇宽度共享预算，窄城的 h=255 对应 H=256、a=1，要求 b=0。载入时 GetMaxExtents 用这两种尺度分配范围并把 maxHeight 设为256→64之间的插值结果；其反编译把部分浮点临时值错误显示为 int，不能直接照抄该C伪代码作为数值实现。[编辑门限](native_application/e6f930.c:118)、[载入范围计算](native_application/e6bae0.c:32)

原 sparse_maxheight 是格式可编码但包含非发行网格 corner 的输入：Text codec 与 WorldMaster.Load 都接受、状态到42、maxHeight=256，最终 Graph.Save 却输出空城 `DA4CE`，中心(3,-2)、count0。运行 Player.log 记录移除(9,2)、(-3,-7)；原生 IntegrateCorner 调 grid.GetVertOrIterate 后先等 validPosition，再要求 Vert.full，full 实际比较 angle>350°。未达到full的corner会逐个 RemoveVoxel 并记录 Removing invalid corner。这是网格整合层的丢弃行为，不能用“codec接受”保证世界保留，也不能将空城归因同x逆序或空列。[格点整合](native_application/e6d2c0.c:477)、[full门限](native_application/3efd90.c:14)、[删除无效corner](native_application/e6d2c0.c:1818)。采用默认已有坐标的控制及三个单因素差异fixture已由原版运行验证：有效坐标 control 与同x逆序都精确保留5个体素并输出同一规范排序；混合空列仅删除空列，保留两列4体素；只把最后坐标y0改成2，便只移除该列；原无效坐标即使排序并去掉空列，仍为空城。因此排序与空列疑点已排除，失败归因350° full网格门限。[差异运行证据](townscaper_runtime_graph_load.json:1)。[差异fixture](townscaper_graph_load_fixtures.json:1)

## 保存触发与时间

`SetDirty` 首次把 anyChange 从 false 变 true 时记 lastStartChangeTime，每次调用都更新 lastChangeTime。它不调用 ResetState，保存脏标志与几何重建入口是两个动作。[标记](native_application/3f8b10.c:14)

仅当 WorldMaster.state>18，Update 才尝试自动保存。设 n=unscaledTime、l=lastChangeTime、s=lastStartChangeTime，触发公式为：

```text
(l > 0 AND n > l + 2 AND n > s + 10) OR n > s + 15
```

即首次变化后至少10秒且已空闲超过2秒，或首次变化后超过15秒强制尝试。MaybeSaveCurrent 另检查 anyChange；无变化不会真的保存。这里不是简单固定10秒周期，也不采用 ResetSaveCurrentTimer 所写的 Time.time+10。[时间比较](native_application/3f8c30.c:166)、[dirty gate](native_application/a02b40.c:21)、[未参与此分支的另一计时字段](native_application/3f8ae0.c:1)

MaybeSaveCurrent：取得或创建 current MetaSave → WorldMaster.PopulateSaveData → 更新时间 → SaveMetaSaveToDisk(setAsLastSave=true) → 更新预览纹理 → anyChange=false → 返回 true。PopulateSaveData 保存镜头、太阳/阴影、JPG、Graph 几何、UTC ticks，再用 TextSaveSystem.SaveToString 生成 clipboard 字符串。这个 true 表示提交了保存流程，**不表示磁盘完成**。[主保存流程](native_application/a02b40.c:24)、[组成](native_application/3f89b0.c:39)

OnSaveMenuOpen 会刷新当前快照和 JPG，启动存档列表刷新、显式保存 current(setAsLastSave=false)，并将当前项移到列表0；没有 current 且没有 dirty 时立即返回。切换 LoadSave 先 MaybeSaveCurrent；旧项未落盘且没变化则 Clear 并标 DidNotExistOnDisk，随后设新 current、更新 Settings.lastSave、WorldMaster.Load。MaybeSaveAndUnloadCurrent 采用同样旧项处理，再把 current 清空。[打开菜单](native_application/a03020.c:57)、[切换](native_application/a02840.c:61)、[卸载](native_application/a02aa0.c:1)

设置使用另一套时间：SetSettingsDirty 在先前已保存时记录 settingsStartChangeTime，每次记录 settingsChangeTime；MaybeSaveSettings(delay) 要求 start>saveTime 且 now>start+delay，Update 的 delay=10，退出用0。SaveSettings 在提交时就更新 settingsSaveTime，完成回调清 request 和减 activeRequestsCounter，不按失败状态重设 dirty。[设置 dirty](native_application/a037d0.c:1)、[延迟条件](native_application/a02c00.c:1)、[提交时计时](native_application/a034d0.c:130)、[完成回调](native_application/a03ba0.c:39)

OnApplicationQuit 同步调用 MaybeSaveCurrent 和零延迟的设置保存，但自身不等待。SaveAndQuit 协程先作同样尝试，再等待本次需保存的 current.isSaving 和 saveSettingsRequest 清空，最后调用退出 callback；它不直接等待全部 activeRequestsCounter 归零。[退出事件](native_application/a02fc0.c:1)、[退出协程](native_application/1dc1c0.c:27)

## 异步文件和 MetaSave

SaveSystem 使用 Platform.SDK 的 `storage` 容器；路径为 `Saves/<name>`，新文件 `Town` + 16个随机字母数字字符 + `.scape`。文件名 alphabet 为 `ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyzw0123456789`（保留 xyzw 次序），不同于 clipboard 多出 `_ -` 的 alphabet。随机源为 DateTime.Now.GetHashCode 再经 xorshift；NoPathRoutine 等异步 Exists 结果，冲突时重抽再试。常量来自 dump.cs 的字段及 UTF-16LE SHA1 对 stringliteral.json 的映射；原生 ctor 分配16字符缓存并设该 alphabet。[存储容器](native_application/a04020.c:47)、[路径](native_application/a01780.c:1)、[文件名](native_application/a01820.c:56)、[冲突协程](native_application/9c7fe0.c:231)、[缓存](native_application/a03d70.c:108)

新保存强制 XML（isBin=false），同时支持已有 `.binscape` 文件的 BinaryFormatter 读取/写入。`.scape` 的 XmlSerializer<SaveData> 输出包含 cam、sun、corners、voxels、bigJpg、lastWriteTime、saveString；clipboard 几何串只是其中一个字段。设置独立序列化为 `Sett.ings`。原版运行探针实际取得的容器 class 为 StandalonePCStorageContainer；重定向后的 root 以 `profile/Raw Fury/Townscaper/../../Oskar Stalberg/Townscaper` 表示，归一化后是 `profile/Oskar Stalberg/Townscaper`，因此不能仅用 Application.persistentDataPath 的 Raw Fury 目录推断最终读写目录。[容器实测](townscaper_runtime_scenario.json:247)。[序列化选择](native_application/1dfa10.c:106)、[设置 XML](native_application/a034d0.c:74)、[扩展名过滤](native_application/a03ad0.c:39)

SaveMetaSaveToDisk 在 MetaSave 正加载或正保存时记录错误并返回；existsOnDisk=true 直接保存，否则启动文件名分配协程。SaveSave 同步序列化到 MemoryStream，向 IStorageContainer.Save 提交字节，保存 saveRequest，增加 activeRequestsCounter，挂完成 callback。[重入 gate](native_application/a03390.c:55)、[提交](native_application/1dfa10.c:149)

保存完成 callback 只在 isNewSave 且 request state==2 时增加 totalSaveGameCount；随后不以成功条件包住 existsOnDisk=true / saveRequest=null / counter-- / ChangeState(UpToDate=4)。setAsLastSave=true 且对象仍为 current 时再更新 Settings.lastSave。按所见控制流，**UpToDate 和 existsOnDisk 不能单独作为写入成功证明**；此失败分支尚未做真实文件故障注入。[条件计数](native_application/1dfdd0.c:69)、[无成功条件的状态赋值](native_application/1dfdd0.c:99)、[lastSave](native_application/1dfdd0.c:136)

MetaSave.state 是 bitmask：Unclear1、NeedsUpdating2、UpToDate4、NotYetSaved8、NewFromDuplicate16、FailedToLoad32、DidNotExistOnDisk64、Deleted128；BrokenMask224、InvisibleMask227、ShouldBeInPoolMask192。ChangeState 触发 onStateChange，调整可见数及 GameObject active 状态，首次进入 Broken 会 Clear saveData；64/128 进入 pool，而不是销毁对象。[枚举 ABI](../work/reverse/il2cpp/dump.cs:379970)、[状态转换](native_application/a00fa0.c:35)

LoadMetaSaveFromDisk 阻止加载/保存期间重入，通过 storage.Read 后按 isBin 解码；有效结果补文件 UTC write ticks、lastSaveDataTime、JPG 并标UpToDate，无 SaveData 结果构造空对象并标FailedToLoad。成功分支尾函数更新 GameObject 可见状态、existsOnDisk=true，并清 loadRequest；空 SaveData 分支在标32后提前返回，不经过该成功尾段。反序列化异常由异常表及拆分 handler 处理，不能把正常尾段作为所有异常出口共同的 finally。[成功尾段](native_funclets2/1df92e.c:35)。[读请求](native_application/a02660.c:1)、[反序列化](native_application/1df560.c:99)、[成功与空结果分支](native_tails/1df76a.c:45)

DuplicateSave 创建 NewFromDuplicate 项，CopyFrom 全存档、更新时间及 JPG，插入原项之后，异步保存(setAsLastSave=false)。DeleteMetaSaveFromDisk 阻止 busy 项；若删除 current，先 WorldMaster.New+Load 空城并卸 current，再提交 storage.Delete，马上标Deleted、清 SaveData；删除完成成功时才减少 totalSaveGameCount。[复制](native_application/a012e0.c:35)、[删除](native_application/a010a0.c:70)、[删除 callback](native_application/1e0080.c:49)

其它已读的 SaveSystem 辅助方法：GetMetaSaveCount / GetMetaSave 从 Transform 子级计数及取组件；GetAndMaybeCreateCurrent 仅在没有 current 时创建状态8、path="no path" 的项；GetNewMetaSave 优先复用 pool，pool仅剩模板时 clone，并给新对象创建512×512预览纹理；SetCurrentMetaSave 对已有 current 记录错误但仍赋新值；SetSiblingIndex 接受普通索引或二分查找的补码插入索引并发 onIndexChange；SortAll 按上述比较器排序后把 current 放0；MaybeUpdateTexture / UpdateAllTextures 按 lastSaveDataTime 与 lastTextureLoadTime 决定 JPG 重载；GetDateTimeLong 采用 yyyyMMddHHmmss 文本再Parse(Int64)，与存档UTC ticks不同。构造器 maxSaveGameCount 为 Int32.MaxValue，该字段不构成小额存档槽数上限。[取MetaSave](native_application/a01510.c:1)、[池与预览](native_application/a01570.c:60)、[设current](native_application/a03720.c:46)、[排序](native_application/a03880.c:55)、[纹理](native_application/a02f70.c:20)、[日期数](native_application/a014a0.c:26)、[槽数](native_application/a03d70.c:173)

## 启动和刷新存档列表

SaveSystem.BootState 与 WorldMaster.state 是不同字段。启动0检查 Sett.ings，1读取 XML 并规范 lastSave 分隔符，再升级旧版本，3尝试 lastSave，4等待载入；成功结束于7，失败改走5。2创建新设置后也到5；5执行列表发现，无文件时复制 DefaultSaveData、Load、SetDirty，boot=9；9把列表状态设Done并结束。存在文件则boot6继续刷新到boot8。7/8/9的外层后续选择交给 UiMaster 启动调用，不在本函数里直接把列表第一项作为有效 lastSave。[设置与默认值](native_application/a019d0.c:85)、[路径修正](native_tails/a01c4a.c:49)、[载入及默认城](native_application/a019d0.c:239)

版本0迁移从 UiMaster.DefaultPath("Saves") 枚举 `.scape`，复制到 DefaultPath("") 根目录下同名文件，目标已存在则不覆盖；枚举完成后显式标 settings dirty 并把版本设1；原先非0版本也设为1。[迁移收尾](native_funclets/a02ef0.c:32)。此处是游戏兼容逻辑，本次分析没有触发该旧文件迁移。[迁移](native_application/a02c50.c:83)

列表 Refresh 分6阶段：[整个状态函数](native_application/a02080.c:97)

| 状态 | 工作 |
|---|---|
| 0 | 清 anyChangeWhenRefreshing，记 startRefreshTime |
| 1 | storage.List，等待 request 后拷贝 fileList、重置 totalSaveGameCount |
| 2 | 只保留目录正好为 Saves 且扩展名 .scape / .binscape 的相对路径 |
| 3 | 检查已有 MetaSave；NotYetSaved(8)不消耗磁盘项，消失项标64，非 current 的项重新 Load |
| 4 | 余下文件创建 NeedsUpdating(2) 的 MetaSave 并读取；current 移到index0 |
| 5 | 等待 loading，按比较器重排，保持 current 在0 |
| 6 | 返回 false |

每次调用处理一个字符串/MetaSave 后返回 true；参数 KeepGoing delegate 在此原生实现中未被调用，实际帧预算来自 WorldMaster 外层反复 Iterate。比较器先按 BrokenMask 分正常/坏项，再按 lastFileWriteTime 倒序，再按 Unity InstanceID；不要把它解释为文件名字典序。StartRefreshSaves 在state>0时重置0；StartMaybeSaveSaves 在state>4时重置index、count并进入5，只重跑后半部分。[逐项处理](native_application/a02080.c:158)、[比较器](native_application/3d5c20.c:28)、[刷新入口](native_application/a03ab0.c:11)、[后半段入口](native_application/a03a70.c:17)

## 撤销 action ABI、分组和 redo 分叉

Action 是16字节值类型：x:Int32@0、y:Int32@4、height:Byte@8、inType:Byte@9、outType:Byte@10、padding@11、actionId:Int32@12。Ground=15、Empty=18（0x12）；颜色0..14。GetReverse 复制坐标、高度、actionId，仅交换 in/out。Graph.ApplyAction 的分派：in=Empty → AddVoxel；否则 out=Empty → 找现有体素后 RemoveVoxel；否则 PaintVoxel；true 的 playEffect 会播放相应点击效果。[布局](../work/reverse/il2cpp/dump.cs:384275)、[反向](native_application/871830.c:21)、[分派](native_application/e6b480.c:83)

Maker 用 `actions` 平面列表及四个数维持历史：actionIndex 是已应用 entry 末端，actionCount 是已应用组数，actionRedoMax 是当前分支可到达的组数，actionId 是新组序号。AddAction 采用当前 actionId，append并增加 actionIndex；它不负责开始分组，也不直接改 Graph。[追加](native_application/3d1920.c:35)

BeginNewAction 顺序为：当已应用组数>998，整组删掉最早连续 actionId 的 entries 并减 actionIndex/actionCount；RemoveRange(actionIndex,尾部)裁掉 redo 分支；ResetState(19)；WFC.IteratePropagationCount；actionCount++、actionId++、actionRedoMax=actionCount；发布队列事件(undo组数,redo组数)。因此正常 Begin 路径新建后最多保留999个已应用组，限制的是**组数而非999个体素动作**。单次 Clear 可包含整个世界的 entries。TrimActionList 复用组裁剪及 redo 尾部删除，但不创建新组。独立 Trim 在999组时会降到998，且不重算 actionRedoMax，也不发队列事件。CanRedo 使用 actionIndex!=actions.Count，因而真实 redo 能力与旧 actionRedoMax-actionCount 显示计数不能混同。[独立Trim收尾](native_application/3d2480.c:84)、[CanRedo](native_application/3d1d30.c:23)。[整组裁剪](native_application/3d1b50.c:48)、[分叉和组计数](native_application/3d1b50.c:94)、[仅裁剪入口](native_application/3d2480.c:43)

Undo 取 actionIndex-1 的 actionId，从后向前对该组每条 action 调用 GetReverse + Graph.ApplyAction(true)，actionIndex--，最后 actionCount--。Redo 取 actionIndex 的组，从前向后原样 ApplyAction(true)，actionIndex++，actionCount++。两者都先 ClearHover、ResetState19、增加 WFC propagation count，组边界保证多个体素编辑作为同一次撤销。队列事件始终以 actionCount 与 actionRedoMax-actionCount 发布。ClearUndoQueue 清列表与这三个指针/计数，不重置actionId。[Undo](native_application/3d25f0.c:46)、[Redo](native_application/3d2240.c:40)、[清队列](native_application/3d1d90.c:25)

AddClick 先验证 full grid vertex 和允许坐标，再 BeginNewAction → AddVoxel → AddAction(Empty→目标) → SetDirty。Clear 为一次 BeginNewAction 包住逐体素删除并 SetDirty；EndAction 只调用 SetDirty。Undo / Redo、其命令包装、Graph.ApplyAction 和 Graph Add/Paint/RemoveVoxel 函数未显示直接 SetDirty，因此不能把“几何已撤销”自动等同于“重新启动保存脏计时”。后续原生边界实验用 EndAction 自然置dirty，再调用 MaybeSaveCurrent 自然清dirty，随后 Undo 与 Redo 都成功且 anyChange 保持0，lastChangeTime / lastStartChangeTime 精确保持原值。这验证 native Undo/Redo 自身不重新标dirty；保存入口仍被抑制，所以不表示磁盘保存成功，也不覆盖外层UI事件的额外回调。[dirty边界](townscaper_runtime_boundaries.json:1)。[AddClick](native_application/3d19a0.c:113)、[Clear](native_application/3d1e30.c:51)、[EndAction](native_application/3d2040.c:14)、[Undo命令](native_application/3d25b0.c:1)

长按 Undo/Redo 通过 RapidButton.Press：非连续帧按下立即响应并清t/count，同帧重复不响应；连续下一帧按 unscaledDeltaTime×slowSpeed/fastSpeed 累加，countThreshold 决定速度切换，t>1才响应并扣除整数间隔。这不是平台键盘自动重复；资产的 serialized 速度决定实际频率。[RapidButton](native_application/80ca70.c:20)、[HoldUndo](native_application/3d20d0.c:1)、[HoldRedo](native_application/3d2070.c:1)

原版主线程 scenario 从发行默认城执行 `(0,0,h=3) Empty→颜色0`、`颜色0→颜色5`、`颜色5→Empty`。每步保存串确实变化，Undo 精确恢复该步 before 串，Redo 精确恢复 after 串，三个场景各三项断言全部通过；最后删除新增体素回到发行默认串。流程调用 BeginNewAction、AddAction、Graph.ApplyAction，并显式 SetDirty，因此证明 action 语义与分组历史，不是完整UI输入回放、自动保存计时或故障持久化验证。[原生场景及断言](townscaper_runtime_scenario.json:227)

历史边界原版实验：第998组 count998/list999、第999组 count999/list1000（首组含两项），第1000组 count999/list999，首 actionId 从4变5，证明首组两项整体删除。随后独立 Trim 到 count998/list998，首Id变6、redoMax仍999，与原函数控制流吻合。[历史边界数据](townscaper_runtime_boundaries.json:1)

## 验证范围与未解决项

- clipboard codec：独立实现、4个手算向量、25个 roundtrip、7个严格非法输入、发行 DefaultSaveData 和只读 XML 样本；6个自造 fixture 经原版 LoadFromString→结构→SaveToString 验证全部吻合，见 [格式报告](townscaper_codec_format.md:1)。
- 世界启动：原版 headless 插桩观察到完整载入分支1–18→25–42；状态映射由对应 switch 分支验证。
- 磁盘流程：静态追踪异步请求及完成 callback，未做真实写失败/删失败注入；抑制保存的运行不能证明磁盘持久化。
- 原生边界：Undo/Redo 在原保存流程清dirty后不会自行置dirty，999/1000组及独立Trim裁剪通过；单列有效格点高度255整个载入与生成通过。原任意坐标 sparse fixture 在网格整合后丢失体素，保留为失败证据；5个控制/差异案例均完成原版验证，已分清网格有效性、同x排序和空列语义。
- 编译器 tail 的伪递归与若干错误泛型类型不作为源级语法；这是原生控制流恢复，不是完整可重新编译的原C#源码。
