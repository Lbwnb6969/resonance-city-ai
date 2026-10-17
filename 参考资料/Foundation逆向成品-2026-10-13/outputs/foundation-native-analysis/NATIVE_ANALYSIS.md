# Foundation 原生函数级补充分析

目标：`D:\steamtest\steamapps\common\Foundation\foundation.exe`，SHA-256 `2c0a048bc1fa2791f58ea432b85cbd9b816af0efec6d6d1c0be6c12195da31af`，PE x64，首选映射基址 `0x140000000`。

本次使用 REA skill 的原生证据工作流，并以已安装 Ghidra 12.1.4 的定向 headless 分析补齐此前 REA 默认全程序分析未返回的函数证据。下面的结果是本地 Ghidra 静态证据，不具有新 REA Evidence ID；应与上轮 REA bundle 区分。未运行目标程序，也未修改安装文件。

## 分析配置和复核边界

- JDK 21.0.12.1+1；Ghidra headless 内存 4G；`-noanalysis`。禁用整个默认自动分析流程，未运行全程序 demangler、RTTI、PDB 或全程序调用图恢复。
- 从 PE `.pdata` RUNTIME_FUNCTION 边界和完整 ASCII 诊断字符串选取入口；仅对种子和一级直接被调用函数建立指令。随后按具体证据缺口补查属性类型读取与包文件条目。
- Ghidra 解码后的 E8 rel32 指令形成直接调用引用；RIP-relative LEA/MOV 指令形成静态 ASCII 引用。仅有字节模式匹配的种子候选保存在 `native-seeds.json`，实际解码的指令与引用保存在各 `*functions.json` 和 `.asm.txt`。
- 每函数反编译时限 45 秒。`pseudocode/` 保存 109 个去重函数的 C 伪代码及对应汇编，没有空文件；所有实际请求均完成反编译。
- 函数命名仍为 `FUN_...`。字符串中的类/方法名称与函数的关联属于静态归属推断，并非恢复出的符号。一个函数可包含内联函数的诊断字符串；JSON 的 `seed` 字段是选择理由，不能单独当成函数名。
- 伪代码不是原始源代码。参数签名、局部类型、结构字段、Lua C API helper 名称未完整恢复；Ghidra 的 globals/type propagation 警告保留。直接/间接调用关系中的未命名代码不应自动解释为已识别 API。

## 包读取及校验

| 证据地址 | 函数行为 | 证据文件 |
|---|---|---|
| `0x140128170` | 引用 `ComCPackage::ComCPackage`；读 u32 版本，接受 1/2；读 32 字节校验文本；第三参数非零时调用校验 helper；随后读两个 u32 header 字段 | `pseudocode/140128170.c` |
| `0x1401812b0` | 将流定位到偏移 `0x24`（36），调用流 checksum helper，再比较与头部文本；构造函数根据比较结果标记包有效性 | `pseudocode/1401812b0.c` |
| `0x14015a8e0` | 使用 MD5 标准初始状态 `67452301 / efcdab89 / 98badcfe / 10325476`，每次 `fread` 64 字节，调用 chunk processor `0x1401404e0`，再调用 digest formatting `0x14014ec70` | `pseudocode/14015a8e0.c` |
| `0x1401507e0` | 按条目位置读 u32 文件名长度、跳过文件名、读 u8 类型；文件类型 0 后连续读取两次 `fread(...,8,1)`，完整使用高低各 32 位 | `pseudocode/1401507e0.c` |
| `0x140151790` | 文件的下一同级条目位置为 `entryOffset + nameLength + 0x15`；目录分支跳过 child count 后直接读取绝对 skip offset | `pseudocode/140151790.c` |
| `0x140151340` | 目录读取 child count，首子条目位置为 `entryOffset + nameLength + 0x0d` | `pseudocode/140151340.c` |

`0x1401507e0` 将第一个 64 位字段加上 package header 的 u32 data offset，存为文件绝对起点；第二个 64 位字段存为文件长度。这将之前仅由包样本推断的两字段 64 位宽度提升为代码证据：即使现有包中的高 32 位均为零，程序仍完整组合 `CONCAT44(high32,low32)`。

MD5 的覆盖范围由代码证实为相对包起点 36 至文件流末尾；与上一轮对全部 7 个包的独立 digest 验证一致。校验由构造函数参数控制，静态代码不证明每次游戏启动都启用校验，也不证明实际加载了全部已安装包。

## 对象序列化

`0x140167ab0`（内存版本）与 `0x140168090`（文件版本）读 u32 version、u32 compression flag；flag 只能为 0/1；文件版本超过 reader 支持版本时拒绝。`0x140164af0` 读取名称数量、NUL 结尾名称表和后续节点 block，并验证长度；`0x140166160` 对版本 >=3 还读取附加 header buffer。`0x140171730` writer 写 `(headerBufferExists ? 3 : 2)` 和压缩标志，再输出名称表与对象 block。v2 当前包样本可按结构直接读取；不能把 v2 样本布局泛化成所有版本和压缩分支。

属性验证函数 `0x140180740` 从属性起点 `+0/+4/+8` 读取名称 ID、next attribute offset、type；payload 位于 `+12`，验证名称范围、下一个属性边界和类型长度。类型实际含义以 property reader 明确传入的 tag 进一步确认：

| tag | 含义/载荷 | 实际代码证据 |
|---|---|---|
| 0 | unsigned int，4 字节 | `0x1403267d0` 的 unsigned int reader 传 type 0 |
| 1 | unsigned __int64，8 字节 | `0x140326ef0` 的 unsigned __int64 reader 传 type 1 |
| 2 | int，4 字节 | `0x140326680` 的 int reader 传 type 2 |
| 3 | __int64，8 字节 | `0x140326da0` 的 __int64 reader 传 type 3 |
| 4 | float，4 字节 | `0x140327dd0`；double reader 也接受 4 并转 double |
| 5 | double，8 字节 | `0x1403279d0` 优先 type 5，使用 double |
| 6 | bool，4 字节 | `0x140327040` 的 bool reader 与 validator |
| 7 | char 字符串，NUL 结尾 | `0x140326920` 与 validator |
| 8 | ComCGuid，16 字节 | `0x140326c40` 与 validator；network byte order 由资源值独立核对 |
| 9/13 | validator 接受 8 字节 payload | `0x140180740`；具体类型不由本次代码单独确认 |
| 10/14 | validator 接受 12 字节 payload | 同上 |
| 11/15 | validator 接受 16 字节 payload | 同上 |
| 12 | validator 接受 24 字节 payload | 同上 |
| 16 | 8 字节长度前缀及 blob | validator 首先要求完整 20 字节属性前缀，但计算总长只使用长度低 32 位；此处不能证明高位支持 |
| 17 | wchar_t / UTF-16LE NUL 字符串 | `0x140326aa0` 与 validator |

节点及属性偏移结构与另一支调查对 26,274 个资源对象的结构闭合结果相互支持。该总数及资源值统计由资源解析输出负责，本原生报告不重复执行全量解析。

## Lua 与 mod 路径

- `0x140247e10`（引用 `GamCLuaManager::GamCLuaManager`）调用 VM 创建 helper `0x1426cfc30`，初始化相关 helper，然后交替传入 C callback 地址和字段名。代码明确把 `createMod` 绑定到 `0x140270430`、`findAsset` 绑定到 `0x140270720`；同一 table 还绑定 `createData`、`createAsset`、`findGameObject`、`isDlcEnabled`、`isModEnabled`、`isModLoaded`、`getModVersion`、`getGameVersion`、`localize`，之后发布为 `foundation`。
- `0x140261fb0`（引用 `initEngineScripts`）依次构造 `scripts/table.lua`、`scripts/math.lua`、`scripts/polygon.lua`，调用 `0x1402636e0` 加载，然后调用 Lua protected-call 形态的 helper `0x1426ca9a0`。返回值非空时要求 Lua 类型值 6（function）并保存引用，否则输出明确错误。
- `0x1402636e0`（引用 `loadLuaFile`）包含实际文件路径加载分支及读取文件到缓冲后调用 `0x140263620` 的分支。后者（引用 `loadLuaBuffer`）调用 `0x1426d0c50`，失败时读取 Lua 错误字符串、写日志并清理 stack。
- `0x140271d90`（引用 `s_modDoFile`）根据当前 mod 路径组合文件名，调用同一 `loadLuaFile`，设置 callback/environment 后调用 `0x1426ca9a0`；错误路径写 `Lua error: %s` 并将 mod 状态标记失败。
- `0x1402730b0`（引用 `s_modRegister`）实际输出 `register` 已弃用、应改用 `registerAsset` 的提示，再调用资产注册 helper `0x1401b4d40`。

上述是静态调用和数据绑定证据。Lua C API 原始函数名部分按调用形态推断；本次未观测到游戏执行这些入口或任何 mod 成功加载。

## 剩余范围和复建

本次闭合的目标是包格式/校验、对象序列化及类型 tag、Lua 注册和加载入口的函数级证据；不是整个 70 MB 程序的源码还原。渲染、AI、经济逻辑和全部虚表未覆盖。`data.xbin` 出现在 FBX 缓存传输函数 `0x14019d6b0 / 0x1401c3860`，不能据此解释所有 `.data-xbin.meta` sidecar 的原生缓存格式。

保存的 Ghidra 数据库位于项目 `work/native/ghidra-project/FoundationFocused`；原始数据库不删除。最终脚本、精确配置、输入指纹、选定范围表和本次成功日志随输出保留，见 `scripts/` 与 `analysis-config.json`。脚本通过已有工具导入、定向建立函数和导出静态结果，不启动 foundation.exe。
