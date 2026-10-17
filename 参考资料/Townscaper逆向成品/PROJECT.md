# Townscaper reverse engineering

## Current goal
系统性逆向已完成。当前按用户要求清理可重建依赖/重复失败下载，并将完整成品整理到`C:\Users\Administrator\Desktop\mIDDLEFILE\Townscaper逆向成品`。保留报告、资源、代码、验证与Git历史；完成Ghidra数据库归档校验后才释放其未压缩副本空间。

## Requirements
- 使用 `reverse-engineer-anything` / REA。
- 不修改 Steam 安装目录中的原始文件。
- 保留文件哈希、REA Evidence 与工具限制。
- 重要交付物进入 Git 备份/专用备份目录；用户现已明确授权清理可重建缓存、失败下载和重复文件。重要数据库保留完整校验zip后才清未压缩重复副本。

## Status
该发行版本的游戏业务层系统性逆向已完成；最终审计矩阵必需问题均已回答。交付入口`outputs/townscaper_complete_index.md`，原作者源码/独立游戏工程/完整第三方内部/全输入逐像素等价不在已证实范围。

## Key decisions
- 以 Unity IL2CPP Windows x86 发行包为目标，核心静态入口是 `GameAssembly.dll`、`UnityPlayer.dll` 与 `global-metadata.dat`。
- 已配置 Ghidra 12.1.4 + Temurin JDK 21，并用新的 REA 6.4.0 stdio 进程实际完成原生分析。Codex REA配置显式绑定Ghidra/JDK路径和3600000ms启动时限，原配置已备份。
- IDA Free 9.4已安装并放置许可证，用户已确认首次许可；Free不提供IDAPython/IDAlib，不能连接REA的IDA provider。此前把Free许可证申请当成可完成该provider配置的步骤已纠正。Hopper在Windows无官方版本，不是等待下载的本地配置项。
- 核心原始二进制以SHA-256和路径绑定；IDA许可/加载核验仅使用工作区启动器副本。Steam原文件不修改，许可证内容不进Git。

## Progress
- 已整理桌面`mIDDLEFILE/Townscaper逆向成品`：5106个已版本管理文件复制核hash，1194个Markdown本地引用检查/迁移通过，完整Git bundle校验通过。完成数据库10个文件逐hash压缩归档，原约1.85GB→0.50GB，放在桌面`备份/Ghidra完成项目.zip`；配置/许可/私有save快照另外隔离备份。
- 已清重复下载/分片、失败Ghidra下载、未用JDK25、可重装UnityPy/Frida依赖和数据库未压缩副本；Ghidra/JDK21/IDA保持已安装，Steam及已有用户文件保持原样。包含桌面成品与Git备份新增空间后的净释放约5.1GB，具体逐项见`outputs/townscaper_cleanup_record.json`。原工作区Git及报告/核心脚本保留；后续从桌面入口查阅即可。
- 最终独立审计发现的沙洲CPU细节已闭合：3轮coverage与6轮偶点平滑、四case条带塌缩/换边、0.3/0.6局部修正、三角Y0坡度、水固定三角/UV、沙双面tangent与GPU参数；WaterSound真实错位选点以原字节确认。四份数学报告均有源定位/原始指令/参考验证。
- 34业务Shader的84程序已恢复可编译HLSL，5652指令/4039精确literal/452常量字段，84编译及168接口比较通过。原D3D11图形运行4PNG显示完整城镇；479导出媒体文件逐hash核验通过。
- 原版跨patch h0/h1增删四面/两patch的八角/mask/coverage/双向邻接全过，4坐标点模型匹配、217发行中心顶点匹配、6Cluster映射通过；真实Flow实例与Update为0仅覆盖该启动和场景。
- 全量业务/平台方法清单已建立：2087个独立RVA均已成功反编译；递归补齐编译器拆分续体/异常函数，现有输出共2175个独立函数，匿名FUN调用前沿已闭合（共享泛型和引擎调用边界分别保留）。
- 发行Unity资源已枚举8363对象、2517个完整脚本组件；建筑模块2072、装饰128、真实平台/输入/本地化配置和可导出mesh/纹理/音频已恢复。对应报告和完整字段在outputs。
- 自定义存档codec已重建；发行默认样本精确匹配，原版运行编解码6/6 fixtures通过。原版add/paint/remove与Undo/Redo恢复保存串；PDB布局核验后的生成模块快照Undo/Redo同样恢复。
- 原版完整WorldMaster.Load单列h255通过，boundsHeight/maxHeight=256。历史1000组边界正确裁去整组；MaybeSaveCurrent自然清dirty后Undo/Redo不重设dirty或计时已实测。
- 仪器化headless原进程确认初始化thunk全部正常返回，前次REA不返回标注为分析器模型限制。持久化重定向到工作区，Unity修改的注册表session/display值已按备份恢复；原始PE/已有用户存档哈希不变。
- 已完成目标盘点、关键文件哈希、PE32 资源树、托管边界检查、Unity/IL2CPP 元数据与字符串抽取。
- 已导出 REA Evidence bundle：`outputs/townscaper_rea_evidence.json`。
- 已生成静态索引：`outputs/townscaper_static.json`。
- 已生成中文逆向报告：`outputs/townscaper_reverse_engineering.md`。
- 已用 Il2CppDumper 从 `GameAssembly.dll` + `global-metadata.dat` 恢复 94,368 个方法条目，并用 Capstone 分析 29 个建造、网格、存档和 UI 入口；结果在 `outputs/townscaper_il2cpp_functions.json`，原始恢复文件在 `work/reverse/il2cpp/`。
- 已确认 `SaveSystem` 的 `Town`/`Saves`/`.scape` 常量、`WorldMaster` 存档路径调用、`Graph` 体素修改入口和 `GridGenerator` 六边形坐标转换入口，并写入报告。
- 已配置官方 Ghidra 12.1.4 与 Temurin JDK 21 用户环境变量；Ghidra 已导入同一 SHA-256 的 `GameAssembly.dll`，读取匹配的 PDB，并对 10 个关键 RVA 输出原生伪代码、函数体和调用者/被调用者摘要到 `outputs/townscaper_ghidra_decompile.md`。
- 已补充11个存档编码/解码、平台容器和输入函数的PDB支持伪代码，恢复自定义64字符字母表及输入动作名；33/33个字面量哈希精确匹配。解读在 `outputs/townscaper_save_input_findings.md`。
- 已导出并校验4条REA原生Evidence（同一输入哈希、Ghidra12.1.4、value flow无记录截断），bundle为 `outputs/townscaper_rea_evidence_v2.json`，可读索引为 `outputs/townscaper_native_evidence_summary.md`；会话已关闭。
- IDA运行库错误已定位：系统MSVC14.51较安装包14.44更新，错误0x80070666；IDA安装本身完成且退出0，无需降级或重装。许可证以Free查找的idafree.hexlic名称就位，本地日志通过许可阶段进入x86 PE加载；Free拒绝-S脚本参数。

## Next steps
- 桌面成品目录是可浏览/分享的交付位置，内部Markdown引用已迁移；证据JSON保留原始来源路径不改。`备份/Ghidra完成项目.zip`是10文件逐hash校验的原Ghidra数据库，原1850115152字节压缩至500162007字节。
- 清理后原`work/ghidra_project21`不再保留未压缩数据库；恢复它需从桌面zip解压到原路径再用REA/savedGhidra。`work/tools/vendor/ghidra-12.1.4`及`jdk-21`是实际已配置工具，保持不删。第三方Python依赖可按需重装，独立codec无需依赖。
- 以`outputs/townscaper_complete_index.md`作为完整调查入口，独立审计`outputs/townscaper_remaining_audit.md`作为问题状态表；早期baseline/Evidence报告保持历史范围。
- 复用已保存Ghidra/PDB、metadata、函数/资源/GPU及原运行fixture；不重复导库或已过的原程序probe/84Shader编译。Git保存核心脚本与交付，失败初版移入discarded保留。
- 后续若要求构建独立游戏，以现有算法/素材/fixtures进行重建；当前交付不是可编译Unity源码工程或全GPU逐像素等价实现。

## Unresolved issues
- 原始作者C#/HLSL注释/工程、全部物理输入组合、各硬件/图形后端逐像素一致和独立整个游戏移植未获证明。业务静态解释与有限运行观察分开登记，不声称所有路径已执行。
- 2087业务/平台RVA及88匿名FUN目标有body，但9621条命名运行库/引擎依赖边、UnityPlayer/.NET/Rewired/第三方对话框内部不在业务闭环中；共享泛型依MethodInfo上下文解释。
- sparse失败已用5个原版差异案例收敛：无效整数格网坐标被IntegrateCorner angle>350门槛删除；有效同x逆序保留并规范排序，空列省略。codec语法可解码不等于城镇坐标有效。
- REA临时数据库的初始化thunk no-return标记是模型误差；原进程图形probe12427次进入/返回已验证相等。原REA bundle保留、后续观察不伪装REA Evidence。
- 实际平台已确认StandalonePC，Steam字段不证明在线Steam服务。Flow在本次D3D11启动及跨patch增删中实例0/Update0，不扩大为任何情况下都不可达。
- 重建HLSL84/84编译、168接口匹配，但未替换原shader做像素等价；中心Bit217顶点和发行fixture完全匹配，但它是发行预存中心，未捕获Compose前数组，不声称独立从零逐位重建。
