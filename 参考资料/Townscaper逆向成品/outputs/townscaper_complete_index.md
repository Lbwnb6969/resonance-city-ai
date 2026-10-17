# Townscaper 完整调查索引

目标是 `D:\SteamLibrary\steamapps\common\Townscaper` 的Unity2020.3.4f1、Windows x86 IL2CPP发行版本。核心输入GameAssembly.dll SHA-256为 `4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。日期：2026-10-13。

本交付已完成此发行版游戏业务及其平台集成的系统性逆向：恢复资源、方法、数据结构、算法和重要状态链，再以原程序验证存档、生成、历史、边界、拓扑及D3D11画面。最后审计发现的沙洲stage2/3/4和WaterSound数学规则也已补原始指令与完整公式。业务方法去重2087个RVA全部有原生输出，另补编译器拆分续体等88个函数，共2175个独立函数；不是把2087次导出称成2087个行为都已实测。

## 从哪里开始

| 阅读目标 | 交付 |
|---|---|
| 方法范围、地址、别名和调用边界 | [方法覆盖](townscaper_coverage.md)、[完整清单](townscaper_method_inventory.json)、[原生调用图/文件hash](townscaper_native_graph.json) |
| 坐标到不规则四边形、松弛、拼接、八角占据 | [网格拓扑](townscaper_grid_topology.md)、[40模板完整库](townscaper_grid_library.json)、[中心网格图](townscaper_grid_center.svg) |
| 建筑如何选模块、变形、合并与回收 | [WFC/模块/道具/AO/阴影](townscaper_generation.md)、[逐道具配置](townscaper_prop_configurations.md) |
| 世界迭代、自动保存、撤销、XML/PNG格式 | [状态与保存历史](townscaper_state_save_history.md) |
| 自定义保存串的可运行重建 | [格式](townscaper_codec_format.md)、[Python编解码器](townscaper_codec.py)、[六个原生fixture](townscaper_runtime_codec.json) |
| 鼠标、相机、音效、鸟蝶、截图、OBJ | [交互与呈现](townscaper_interaction_presentation.md) |
| 手柄/触控、按钮、卡片、重映射、太阳、调色纹理 | [UI/材质完整流程](townscaper_ui_material_workflows.md) |
| 连线实际配对、被伪码误删的回收、地面工具 | [连线与工具](townscaper_wire_ground_workflows.md)、[原始指令补证](townscaper_wire_raw.json) |
| GPU公式、所有业务variant和参数绑定 | [核心Shader说明](townscaper_shaders.md)、[34个Shader完整算法](townscaper_shader_algorithms.md)、[84份HLSL及验证](townscaper_shader_algorithms/manifest.json) |
| 沙洲/水面CPU网格与沿岸音源的精确规则 | [3/6轮偶点平滑](townscaper_sandbank_smoothing.md)、[条带换边/局部修正/错位选点](townscaper_shore_local_math.md)、[三角坡度](townscaper_sandbank_slopes.md)、[水/沙mesh、UV/tangent、GPU绑定](townscaper_sandbank_water_math.md) |
| 启动的平台、实际存储根、本地化服务边界 | [平台报告](townscaper_platform.md) |
| 场景、模块、纹理、网格、音频及语言资产 | [资产报告](townscaper_assets.md)、[8363对象索引](townscaper_assets.json)、[2517脚本完整字段](townscaper_asset_components.json)、[导出媒体索引](townscaper_extracted_assets/index.json) |
| 独立审计及还不能断言的部分 | [完成/剩余审计](townscaper_remaining_audit.md) |

## 原始代码与数据的精确覆盖

- `native_application/`逐RVA保存业务/平台PDB支持伪代码、body范围、直接callees；`native_funclets*`和`native_tails`补续体。每个文件都带地址，不伪装原C#源码。调用图逐文件存SHA-256。
- 2087个selected RVA全部导出，88个被引用匿名FUN目标全部有body；12512条静态直接边中9621条指向未导出的命名运行库/引擎依赖。此结论只闭合业务输出与匿名函数前沿，不声称UnityPlayer、.NET、Rewired等第三方内部已全部逆向。
- IL2CPP恢复94368个ScriptMethod alias、57102个非零独立RVA，8132类型、61885方法定义。业务392类型、集成16类型及平台160类型按metadata/PDB归属，不凭最终共享函数名字认定作者身份；110个selected RVA有跨类别共享。
- 真实PDB布局与原生运行反射分开保存：[PDB43核心结构](townscaper_pdb_layouts.json)、[943运行类型/字段](townscaper_runtime_layouts.json)。静态/字面字段不能套实例offset。
- 11个序列化来源共8363对象，2517可解析完整MonoBehaviour。2072建筑模块、128装饰、40网格patch模板；127OBJ、74PNG、92FSB/WAV、88可解析shader及6个Unity默认资源原始shader载荷。两个零尺寸运行纹理保留元数据，不伪造像素。
- 34业务Shader包含84个顶点/像素program、5652条执行指令、4039个原token精确立即数分量、452个常量字段。恢复的HLSL全部D3DCompile成功；168组输入/输出semantic、宽度和类型匹配。它们是算法等效重建，不是作者原始HLSL。

## 行为清单与证据闭环

“已回答”表示所列业务问题已有可定位实现/配置/算法解释；运行记录只证明其声明的有限场景。

| 调查问题 | 状态与证据 |
|---|---|
| 世界分阶段调度、预算、加载和dirty | 已回答；0..42阶段、8ms预算、2/10/15秒自动保存门槛详见状态报告。原启动推进到Done42，初始化thunk进入/返回数量相等。 |
| 六边形坐标、模板/程序patch、Cluster/Bit松弛及Compose | 已回答；255轮松弛、完整重心权重与索引公式、40模板拓扑验证。原版4点HexToPlane逐值匹配，6Cluster索引映射验证；217中心顶点与发行fixture相同。中心fixture已发行预存，不能把此比较称成独立从零算法复刻。 |
| Corner/Square/上下Qube、Ground/Water、碰撞、范围 | 已回答；原程序跨patch h0/h1增删，4面分属2patch，所有八角/mask/coverage/双向边检查通过。代码说明共享collider和容量范围；该运行未单独读Voxel.sharedMesh。 |
| WFC候选、兼容、传播、成本、构建/清理 | 已回答；真实候选库、六面profile、确定性数值常量及guard解释。默认城增删/撤销重做保存串和生成模块快照一致；没有证明所有合法输入都能无矛盾求解。 |
| 道具隐藏、碰撞优先、wire、动物 | 已回答静态链；wire创建/回收补读原字节，鸟蝶状态/数量/音效及Propeller已解释。Flow在这次图形启动与增删场景实例0/Update0，不推广为永久无法动态创建。 |
| CPU mesh批处理、沙洲/水面、AO/Shadow与GPU | 已回答；沙洲偶点平滑、四case换边、两种局部修正/Y0坡度、水网格固定三角/UV、沙面复制/反绕序/tangent、GPU图集和镜面绑定完整。原D3D11城市画面实际可见。未以重编译HLSL替换原程序shader，不能断言像素逐位相等或不同硬件/后端一致。 |
| 点击/桶/推土机、历史组、Undo/Redo | 已回答；原版add/paint/remove每项改变并Undo/Redo恢复；1000组边界删除最早完整组，保存清dirty后Undo/Redo不重设dirty/计时实测。主动Graph/Maker调用不等于人类UI事件录制。 |
| 保存文本、XML/PNG、异步错误/状态 | 已回答；重建codec与默认资产完全一致，6原生fixture通过；独立4手算向量、25roundtrip、7非法向量。原最大h255加载到Done、maxHeight256；5差异案例说明无效格网坐标被删、空列略去、同x逆序规范化。 |
| 完整UI导航、重映射、路径、卡片和输入模式 | 已回答静态流程；关键门槛、callback、异步续体、触控/手柄选中及冲突分支在UI补充。真实硬件设备、原生文件对话框交互未实测；第三方库内部明确单列。 |
| 相机/太阳/材质/截图/OBJ/语言/音量 | 已回答；浮点/字面量原字节复核，太阳进入dirty/save/GPU，磁盘PNG热读和palette绑定说明。原Unity ScreenCapture四图可解码且已视觉检查，业务截图/缩略图分别解释，不能把ScreenCapture当成点击ScreenshotButtons。 |
| 平台选择与存储根 | 已回答；实际StandalonePC容器与根路径原程序返回验证；SDK支持0x2400，两个LocalizationService.Translate返回空，游戏UI另走I2。未凭Steam字段声称在线SDK。 |

## 最低充分验证结果

原生编码：[6/6](townscaper_runtime_codec.json)。行为与模块：[默认城](townscaper_runtime_scenario.json)、[图形模式](townscaper_runtime_graphics.json)、[高度/dirty/1000组](townscaper_runtime_boundaries.json)、[5组加载差异](townscaper_runtime_graph_load.json)。拓扑：[原观测](townscaper_runtime_grid.json)、[独立检查](townscaper_runtime_grid_verification.json)。Shader：[84编译/168接口](townscaper_shader_algorithms/verification.json)。图形：[四PNG哈希/设备与视觉核验](townscaper_runtime_render_verification.json)。

![原版D3D11添加后画面](townscaper_runtime_render_after.png)

第一次图形采集只取得启动logo，已移动到`discarded/runtime-first-render-splash`并解释原因；错名前缀的首轮shader输出也移入`discarded/shader-first-export-incorrect-prefix`。这些失败结果保留，没有覆盖成成功证据。后来25秒观测完成画面切换。最新PNG来自grid_graphics_probe，最新hash与观察归属以render_verification为准。

所有运行probe在工作区隔离保存根；自动meta保存被抑制，codec/Graph/Maker/生成/shader原实现未改。Unity会写session/显示注册表值，脚本最终恢复预先备份。三份原PE、全部预先存在用户文件和注册表语义比较都不变：[完整性验证](townscaper_integrity_verification.json)。私有用户存档、许可证、注册表备份均不进Git。

## REA与本地证据的区别

[REA早期bundle](townscaper_rea_evidence.json)包含PE资源和托管分类；[REA原生bundle](townscaper_rea_evidence_v2.json)有四条原生Evidence，由[Evidence索引](townscaper_native_evidence_summary.md)给出精确ID和局限。REA临时数据库曾把0x18e950误标不返回；原始字节和后来原进程12427次进入/12427次返回推翻“实际终止”的解释，原bundle仍保留。

全量PDB/Ghidra导出、Capstone数值/指令、Unity资源解析、Frida原程序观测均是独立本地证据，不新增或虚构REA Evidence ID。REA原生会话已关闭。IDA Free许可已配置并经用户确认，但Free不支持IDAPython/IDAlib；Hopper无官方Windows版本，二者不是悬而未完成的本地provider安装步骤。

## 完成结论的边界

此发行包的游戏业务、配置、资源、算法和关键行为已系统恢复与交叉核验，最终审计矩阵的必需业务问题均已回答。没有恢复作者注释、原工程结构、每个源变量名或原始HLSL；也没有交付独立可编译、与原版逐位/逐像素等价的完整游戏。这些是另一层重建与验证目标。

UnityPlayer/操作系统、完整.NET/第三方输入与对话框库内部、未运行的平台服务、全部物理输入组合、长期压力和跨GPU后端输出不在已完成业务证据范围。所有具体残余边界保留在各报告及独立审计，不用“覆盖100%”掩盖它们。

## 可复核操作

```powershell
python outputs/townscaper_codec.py self-test
python outputs/townscaper_codec.py decode town.txt -o town.json
python outputs/townscaper_codec.py encode town.json -o rebuilt.txt
python work/verify_runtime_grid.py
python work/verify_native_frontier_and_frames.py
python work/verify_target_integrity.py
```

依赖/大型数据库在ignored `work`下，核心脚本及输出纳入Git。原生业务函数是可读证据，不是可直接作为完整项目编译的C代码。后续使用请先读[项目状态](../PROJECT.md)和本索引，早期baseline报告按当时范围保留。
