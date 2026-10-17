# Townscaper 最终独立业务覆盖审计

审计范围为发行包业务与平台清单的2087个唯一RVA、对应原生控制流、序列化资源和已保存原版运行观察。2175个原生输出地址包含88个匿名续体/辅助过程；方法导出与调用图闭合证明可定位，不能单独证明行为解释完成。Unity、.NET、Rewired、I2、第三方文件对话框的通用内部实现不无限扩张为本项目业务范围。

本次对照coverage原待行为表与generation、grid_topology、interaction_presentation、state_save_history、assets、platform、shaders和新增UI/material、wire/ground正文。分类中“已回答”指能由原控制流说明业务规则；“观测”另外列出限定输入实际运行结果；“部分”明确缺少的算法解释，而不把没有所有硬件实测作为静态未完成。

## 审计矩阵

| 业务链 | 静态回答 | 原版观察与定位 |
|---|---|---|
| 启动、逐帧世界阶段、dirty、时间预算 | 已回答 | state_save_history恢复状态0..42、KeepGoing和真实子阶段；runtime_startup进入Done，initializer全部返回 |
| 字符串、XML/PNG、设置、存储与失败分支 | 已回答 | codec_format、state_save_history与platform；真实发行默认城逐项相等、6个native codec往返、h255完整Load/Done/Save，私有XML仅只读统计 |
| 999组历史、分组、Undo/Redo与dirty耦合 | 已回答 | runtime_boundaries验证1000组裁首组两条、保存后Undo/Redo不重新设dirty；runtime_scenario添加/涂色/删除几何保存串恢复 |
| 格网生成、共享边、Corner/Qube、水地角与边界 | 已回答 | grid_topology、grid_math；runtime_grid_verification四数学点、217中心顶点、6Cluster映射、跨两patch八角/双向关系/coverage；不宣称独立全Compose逐位移植 |
| WFC六面候选、成本、传播、模块/装饰构建 | 已回答 | generation与原始fmod参数证据；默认城生成快照Undo恢复before/Redo恢复after，不把所有矛盾输入全局求解当成既有承诺 |
| 模块四角变形、材质合并、Mesh回收 | 已回答 | generation的GetTs/MultiplyPoint/BigMesh；本页补WorldMeshes池。真实D3D11原画面与生成检查另列 |
| Prop动机/可见性/collider、wire建立回收、Window/Propeller | 已回答 | prop_configurations与wire_ground_workflows；wire ReturnProp被Ghidra删块以原1457指令恢复；没有声称真实输入已生成某个wire实例 |
| AO切片、阴影请求、太阳/材质/外部PNG绑定 | 已回答 | generation、shaders、ui_material_workflows；84业务GPU variant公式、168接口及精确literal恢复，原版4PNG验证原shader运行，未替换恢复HLSL作像素等价 |
| 鼠标、手柄、Toucher、按键重映射、完整菜单业务 | 已回答 | interaction_presentation与ui_material_workflows：公共按钮、卡片CRUD、冲突Cancel、mapper存盘、导航、持续确认、太阳/色/声/路径/语言listener；硬件全型号未逐一按键实测不构成算法空白 |
| OBJ、截图、剪贴板与文件对话框回调 | 已回答 | interaction_presentation恢复Capture/编码质量/临时RT/OBJ格式；ui_material_workflows恢复选择目录/取消/路径归默认；原ScreenCapture截图不能冒充这些UI按钮实际操作 |
| 鸟、蝴蝶、构建音、菜单音、快照与音量 | 已回答 | interaction_presentation恢复状态与聚合门控；ui_material_workflows补UiAudio/层级modifier、菜单音乐、dB原字节，WaterSound见本页；实际原画面动物可见不等于随机全序列重现 |
| 平台选择、Standalone容器、异步请求、本地化 | 已回答 | platform恢复注册/选择/路径/请求，实际get_container为StandalonePCStorageContainer；I2与SDK空翻译区分，不声称Steam在线功能 |
| 沙洲与沿岸water CPU网格 | 已回答 | 初审partial已用四份数学报告和原字节闭合：3/6轮偶点传播、条带塌缩/换边、局部修正/Y0坡度、water固定三角/UV、sand双面tangent和GPU绑定；WaterSound选点错位保留真实行为 |

## 补充：WorldMeshes池和非主渲染入口

WorldMeshes.GetMeshFilter读取自身Transform最后一个子对象复用，没有子对象时新建MeshRenderer/MeshFilter；同一次Get将meshStack末项弹出赋sharedMesh，空栈则创建Mesh并MarkDynamic。ReturnMeshFilter清sharedMesh、将其放回meshStack、解绑sharedMesh，关闭GameObject、重设默认layer并归父到池，位置0/scale1/rotation identity。ReturnMeshFilterOnly不归还Mesh，GetMeshFilterOnly不要求新Mesh；这些入口的区别避免把共享Mesh重复归还。[获取](native_application/1e49a0.c)、[归还](native_application/1e4fa0.c)、[仅filter](native_application/1e4850.c)、[仅归filter](native_application/1e4e60.c)。

IterateRefillPools先将池下MeshFilter对象数补至10，再将独立meshStack补至10；每次创建后调用WorldMaster.KeepGoing，预算不足返回true等待下帧，全数达到目标返回false。这是世界阶段38的池预补，不能称WorldMeshes专门负责海面生成。[阶段38实际方法](native_application/1e4d10.c)。

PropPropeller.Apply在世界Y<1.5时把waterSplashEffect移到原XZ/Y0并激活，反之关闭；Update使用scaled Time.time，local EulerY=(forward?1:-1)*time*250+15。OnValidate将对象设为Propeller layer。这解释运行旋转/水花，不由静态8个组件推断推进或交通模拟。[位置门槛](native_application/804b00.c)、[旋转](native_application/804c70.c)、[layer](native_application/804a40.c)。

WaterSound.Update只设置自己的Transform位置；原始指令已经确认distance确实以此前selected点计算，而成功时却写当前candidate，因此不是严格最近岸点。每帧selected=zero、best=float.MaxValue，从verts.Count-1倒序遍历：d²=|camera-selected|²；d²<best时selected=candidate、best=d²；最后set_position。相机10、verts依次0/9/100的参考反例输出100而非最近9。没有调用Play，不把移动音源与新建声效混淆。[循环](native_application/3f0ae0.c)、[原始数据流/反例](townscaper_shore_local_math.md)。

## 沙洲阶段与最终补证

Sandbanker.Reset仅state=0，Clear清sandMf/waterMf.sharedMesh并归0；地面积分/移除调用Reset，WorldMaster阶段30持续Iterate。[Reset](native_application/81c1e0.c)、[Clear](native_application/815be0.c)。

| stage | 已复核操作 | 原生定位 |
|---|---|---|
| 0 | 清verts、tris、coverage、dict，index=0，再stage1 | [815c40](native_application/815c40.c) |
| 1 | 按预算遍历Square最低Qube且非empty、有候选时取所选模块；遍历压缩mesh三角、orientation及四角变形，边平均local Y满足abs(meanY-0.1)<0.01才取岸线。镜像标志影响边顺序。端点key=Round(X*100)*0x17d5+Round(Z*100)*0x17e1；命中复用pair并删开放端点，未命中添加两份vertex与双线性coverage；为strip写三角。index遍历完stage2，异常Dispose续体单独导出 | [筛选](native_application/815c40.c)、[量化/配对](native_application/815c40.c)、[推进](native_application/815c40.c)、[817057](native_funclets/817057.c) |
| 2 | 3轮coverage、偶点未归一化法向偏移、6轮偶点半差、奇点抬高、三角局部修正及坡度限制；完成推进3 | [平滑精确规则](townscaper_sandbank_smoothing.md)、[局部修正](townscaper_shore_local_math.md)、[坡度限制](townscaper_sandbank_slopes.md) |
| 3 | 偶点复制两份、coverage控制偶点扩张；每strip固定三角/中点，两轮外沿平滑；Perlin及5点signed距离UV累加，提交vertices/UV0/triangles；没有CPU按Y裁剪或水平交点 | [完整水网格方程](townscaper_sandbank_water_math.md) |
| 4 | 删全Y0三角、追加(a+N,c+N,b+N)；Cross面积加权normal归一化，w=Perlin(PevenXZ*0.2)+0.5；副本tangent按pair交换且仅w取负，位置复制；GPU镜面/AO/图集对应 | [沙面tangent与GPU](townscaper_sandbank_water_math.md) |
| >=5 | 返回false，让WorldMaster进入下一阶段；不每帧全部重算 | [default](native_application/815c40.c) |

stage2精确纠正了初审的偶奇误读：每strip六索引[a,b,b+1,b+1,a+1,a]，a/b偶数；coverage按每边半差同步传播3轮，没有degree分母。边差(dX,dY,dZ)贡献(-dZ,0,dX)同向加两端，**偶点**先乘未归一化累积法向及Lerp(.8,.2,c)偏移，再保存归一化法向；6轮位置半差也是偶点，三维更新且每轮清临时量，奇点随后Y加.186。三轮局部修正使用独立位移累积，0.3/0.6支只首轮启用并更新奇奇偶组合的C偶点；它是有符号边距恢复，不是只把过近点推开。最终坡度支有一个Y0时以**三维Distance**乘.4限制其它两点，有两个Y0时以normalize(Cross(up,水平边))的signed距离乘.4限制第三点，不Abs/clamp。最后每odd减savedNormal*Y*.4。这些索引、guard、运算方向与清零顺序已经绑定原字节，完整式见三个独立stage2报告。

条带(A,B,C,C,D,A)还按dot(D-A,savedNormal[A/2])<0、dot(C-B,savedNormal[B/2])<0的四种case做端点塌缩/强制换边/短对角判断；换边是(A,B,D,C,D,B)。Cross调用的临时返回在该块未读取，不能当作flag数据源。三轮局部扫描的前置A.y=B.y=0、C.y>0分支则分别给偶A/B累加/减去.3*SetY(B-A,0)，不Normalize/clamp，也不更新C。[完整case表与两支局部规则](townscaper_shore_local_math.md)补齐这些既有代码规则。

初审留下的六轮索引/分母、近邻修正端点、Y0坡度法向、水mesh是否裁剪/UV和WaterSound选点均已由后续原字节与完整方程消歧。原始partial记录促成这轮定向补证，没有把5750行导出本身作为完成证明。尚未独立逐位移植整条生成链、求尽所有mesh输入或替换HLSL做GPU像素一致，这些是等价重建边界。

## 交付判定与无条件等价的边界

核心业务链已经从只列符号提升为具体输入、门控、状态、数据结构与副作用解释。初审识别的沙洲几何及WaterSound局部数据流已由定向读码、原字节绑定与参考模型补齐，本矩阵没有剩余必需的业务算法未回答项；此次有限发行版业务系统性逆向完成。其他“不等价原作者源码、完整Unity工程/第三方引擎、所有硬件、所有随机时间序列、恢复HLSL跨GPU逐像素等价”属于更强重建目标，没有把它们包装成此次已证实结论。

验证命令：`python -X utf8 work/write_ui_workflows.py`检查所有UI正文源文件定位；`python -X utf8 work/verify_ui_volume_math.py`绑定原PE log10返回与乘20；四个沙洲/音源脚本分别绑定真实字节/常量/分支及数学参考。最终`python work/verify_delivery.py`核验9份主/补充报告的所有本地链接、关键运行不变量和479个导出媒体hash。本页对照两份完整RVA清单和native_graph counts，2087/2087目标文件存在，missing_selected与anonymous_references_without_body均0。Steam原文件与私有save未修改，最终补证没有新启动游戏/Ghidra；原版仪器化运行和注册表值恢复由完整性记录单独保存。
