# Foundation 全量原生逆向资料

本目录覆盖给定 `foundation.exe` 的整个 PE x64 原生主程序。原文件 SHA-256：`2c0a048bc1fa2791f58ea432b85cbd9b816af0efec6d6d1c0be6c12195da31af`，映射基址 `0x140000000`。Ghidra C 输出为伪代码，不是原始源文件，也不能直接编译成原游戏。

## 文件导航

| 文件 | 内容 |
|---|---|
| `inventory.json` | 输入指纹、PE unwind 分类、MSVC RTTI/type/vtable 数量 |
| `all-pdata-ranges.jsonl.gz` | 全部 160,598 个 RUNTIME_FUNCTION 范围，含原文件位置、unwind flags、异常 handler、chain parent |
| `rtti-vtables.jsonl.gz` | 25,415 个 self-RVA 校验的 MSVC complete-object locator / 候选 vtable，含类名、继承描述符、slot 指针 |
| `all-ascii-strings.jsonl.gz` | 237,100 个完整 ASCII 字符串（长度5至2000），原字节偏移与VA |
| `assembly-*.jsonl.gz`、`assembly-address-index.csv` | 按 `.pdata` 范围分片的实际指令、原始 opcode、控制流类别 |
| `all-text-instructions.jsonl.gz` | 已恢复函数及 leaf/thunk 覆盖的完整 `.text` 指令列表，含地址/opcode/asm/owner |
| `unassigned-text-byte-ranges.jsonl.gz` | `.text` 中未建立指令的其余原始字节，逐范围保留 |
| `all-call-references.jsonl.gz`、`complete-call-references.jsonl.gz` | 原始范围和补全 listing 的控制流观察，直接调用/跳转以及无法静态解目标的间接指令 |
| `all-rip-data-references.jsonl.gz` | 解码指令中的 RIP-relative LEA/MOV 数据指向 |
| `leaf-function-recovery.json`、`additional-function-recovery.jsonl.gz` | 无 `.pdata` 的 direct call / tail jump / vtable slot 入口恢复和错误 |
| `decode-coverage.json` | 整个 `.text` 的指令字节/未分配字节闭合统计 |
| `pseudocode-*.jsonl.gz`、`pseudocode-address-index.csv` | 全部恢复函数/fragment 的 C 伪代码；每片最多 2000 条，地址索引给出片名、0起始行号和状态 |
| `pseudocode-retry.jsonl.gz`、`pseudocode-retry-address-index.csv` | 第一遍失败入口的第二遍受控重试结果，不覆盖原记录 |
| `decompile-coverage.json`、`decompile-failures.json` | 全量第一遍完成/失败/警告和每片计数、sha256 |
| `final-coverage.json` | 合并重试后的最终覆盖与剩余失败 |
| `native-output-sha256.json` | 最终输出文件 SHA-256、大小及原文件指纹 |
| `installed-pe-components.json`、`component-*.json` | 全部12个安装PE组件（2EXE/10DLL）的指纹、节、入口、regular imports、全部exports、debug和证书blob范围 |
| `luasocket-native-recovery.json` | `mods/libs/socket/core.dll` 的真实导出 `luaopen_socket_core` 和3层直接调用入口，共21函数伪代码/汇编 |
| `scripts/` | 完整解析和Ghidra恢复脚本、精确运行参数、成功日志 |

所有 `.jsonl.gz` 解压后每行一个完整 JSON 记录。读取特定函数不必解压所有资料：

```powershell
python .\read_native.py function 0x140128170
python .\read_native.py strings GamCLuaManager
python .\read_native.py types GamCAssetManager
```

## 恢复方法及限制

使用 Ghidra 12.1.4、JDK 21.0.12.1+1、`-noanalysis`。原生程序从未启动。PE loader 装载后，依照所有 `.pdata` 范围逐个定向解码/建立函数，再补充 direct call、tail jump 和 vtable 的可定位 leaf。未使用先前失败的全程序默认自动分析；没有运行全程序 demangler、RTTI analyzer 或在线符号下载。

代码范围包含 31,060 个 chained unwind fragment、56,645 个带异常 handler 范围、72,893 个普通 runtime function 范围。它们并不一一对应原始 C++ 源码中的函数，C++异常/冷分支/编译器生成的片段单独保留。原始结构分类会影响如何理解其伪代码。

完整 `.text` 为 46,543,712 字节；10,557,895 条解码指令共占 43,390,918 字节；其余 3,152,794 字节完整保留原始 bytes，包含至少 1,598,672 个 `00/CC` 字节。指令字节加其余字节精确闭合整个节。剩余范围会包含 alignment、跳转表、嵌入常量和未识别代码，未把所有非零字节强制解释为代码。

RTTI以确切 `.?AV/.?AU` 类型描述符及 COL signature/self RVA 绑定验证。vtable 的 slot 范围采用连续指向 `.text` 的指针扫描，停止在首个非代码指针，最多500；连续邻接的虚表会影响边界，故标记为候选并保留全部地址。未把 recovered class association 当作完整原始 C++ 类声明。

全量反编译使用 8 个有界 worker，每函数8秒；失败入口第二遍45秒。`status=complete` 表示 Ghidra成功输出 C，不能据此保证类型恢复或伪代码语义完全正确。C文本中的 WARNING、globals overlap、unresolved jump table、invalid instruction等诊断保留。方法/字段名称大量丢失，恢复地址与指纹是定位依据；`.c`伪代码中的FUN名称是分析标签。

有源代码路径/函数诊断字符串的项目层行为可在上一轮 `foundation-native-analysis/NATIVE_ANALYSIS.md` 和本轮逻辑索引中定位；全量资料为它们提供完整入口范围、指令和恢复代码，静态证据不代表观察到真实运行。

## 安装组件边界

全部12个 `.exe/.dll` 均为 x64 native PE，CLI directory均为空。FFmpeg组件 `avcodec-61`、`avformat-61`、`avutil-59`、`swresample-5`、`swscale-8`，CrashRpt/CrashSender、Steam API、winpthread、zlib 和 mod LuaSocket 具有各自独立输入指纹与导出表。仅主程序全量反编译，第三方共享库保留完整PE接口图和原文件，未宣称重建其全部内部源码。

LuaSocket入口为真实导出 `0x180006d00`，字符串显示 `LuaSocket 3.0-rc1`。静态函数先初始化平台库（失败写 `unable to initialize library`），创建Lua table并设置 `_VERSION`，再遍历内部函数指针表初始化子模块，返回1个Lua值。helper `0x18000ab50` 及直接3层范围在输出中；函数指针表的所有间接调用对象未全部赋予原始名字。

Steam API有一段WIN_CERTIFICATE记录，已保存字节范围与hash；此处没有验证签名信任。CodeView/PDB路径仅为编译时元数据，不等于实际取得PDB或其匹配符号。组件导入清单为regular imports；delay-load目录原始RVA/大小已保留，未递归遍历delay imports。
