# Foundation 首轮静态逆向记录

> 本文件保留首轮调查边界；继续调查的完整结果见 [最终综合报告](../FOUNDATION_REPORT.md)。原生函数、序列化和缓存证据现已补齐。

日期：2026-10-13。目标：`D:\steamtest\steamapps\common\Foundation`。已使用用户指定的 reverse-engineer-anything 技能和 REA。原始安装文件未修改，游戏未启动。

## 核心发现

- 主程序为原生 Windows x86-64 PE32+，大小 70,083,072 字节，CLR 数据目录 RVA 为 0；版本资源字符串为 **1.12.0.14**，另一处字符串为 `1.12.0.14 - steam`。
- 7 个 `.package` 的递归索引已完整解析，共 **34,884 个文件、1,929 个目录**，合计 4,034,717,466 字节。每个包都通过计数、索引边界、连续数据覆盖和 MD5 校验。
- 主程序的常规导入表直接包含 `OPENGL32.dll`、`steam_api64.dll`、FFmpeg（avcodec/avformat/avutil/swscale）和 `CrashRpt1403.dll`。这证明这些依赖在二进制中被声明，未证明各功能在当前运行中执行。
- 本地字符串带有 `HurricaneWindowClass`、`ComCPackage`、`lib_game_engine`、`lib_3d`、`lib_gui`、Lua 和 Wwise 路径/标识。这些是后续定位子系统的线索，尚未取得对应函数调用链。

## 目标身份与 REA 证据

主程序 SHA-256：`2c0a048bc1fa2791f58ea432b85cbd9b816af0efec6d6d1c0be6c12195da31af`。PE 声明的映像基址为 `0x140000000`，入口 VA 为 `0x142a8d0f8`；这是静态链接地址，未观察运行时地址或 ASLR。

REA `inspect_pe_resources` 返回 Evidence `ev_52f0c67a21803d02f80b2874f77ba358931ca943845d562e48a7ab9f6f56abe2`，覆盖完整资源树：20 个目录项、8 个资源（5 个图标载荷、1 个图标组、1 个版本资源、1 个 manifest）。图标组与 5 个同语言图标载荷的大小均匹配。REA 未解码版本资源；本地精确 UTF-16LE 字符串扫描在该版本资源范围内的文件偏移 69,121,724 与 69,122,048 读到 `1.12.0.14`。

Ghidra 12.1.4 默认自动分析长时间未返回。随后保存本次日志并终止本调查拥有的 Ghidra 进程，`close_binary` 成功，`binary_session` 已确认 `open:false`。没有函数概览、伪代码或 CFG 的完成证据。

## 包清单

| 包 | 字节数 | 文件数 | 目录数 | 数据区起点 | MD5 校验 |
|---|---:|---:|---:|---:|---|
| `dlc\agriculture\boot.package` | 32,491 | 17 | 3 | 1,030 | 通过 |
| `dlc\agriculture\content.package` | 447,333,632 | 5,045 | 341 | 296,543 | 通过 |
| `dlc\guivre_garden\boot.package` | 443,087 | 14 | 2 | 851 | 通过 |
| `dlc\guivre_garden\content.package` | 17,458,464 | 110 | 7 | 6,827 | 通过 |
| `engine.package` | 4,404,589 | 2,244 | 8 | 166,112 | 通过 |
| `game.package` | 3,529,004,763 | 27,446 | 1,568 | 1,506,655 | 通过 |
| `loading.package` | 36,040,440 | 8 | 0 | 376 | 通过 |

## 此版本的包格式

所有整数按 little-endian 解释。公开的旧版格式说明提供递归目录索引这一线索；下面的新版布局来自本次本地字节验证。

| 位置/记录 | 当前解释 |
|---|---|
| `0x00..0x03` | u32 格式版本；7 个包均为 2 |
| `0x04..0x23` | 32 字节 ASCII MD5；等于文件 `0x24` 至 EOF 的 MD5 |
| `0x24..0x27` | u32 数据区绝对偏移 |
| `0x28..0x2B` | u32 总文件数 |
| `0x2C..0x2F` | u32 根目录直属条目数 |
| 每条索引项前缀 | u32 名称字节长度 + UTF-8 名称 + 1 字节目录标志 |
| 目录项续部 | u32 子项计数 + u32 跳过偏移字段 + 递归子项 |
| 文件项续部 | 16 字节，按 u64 数据区相对偏移 + u64 字节长度解释 |

文件数据从 `data_section_offset + relative_offset` 读取。后续原生分析在 `0x1401507e0` 确认文件记录连续读取两个 8 字节值，分别计算绝对数据地址和保存长度，u64 宽度已证实。目录 skip_offset 已对全部 1,929 个目录验证，为最后一个子项结束后的绝对索引位置；对应原生入口为 `0x140151790`。

验证覆盖：每个包解析结束位置恰好等于数据区起点，文件数等于头部计数；文件数据没有空洞或重叠，连续覆盖到 EOF；声明 MD5 与重新计算结果匹配。加载包的 7 个 PNG 都在索引指定位置出现 PNG 签名和 IHDR，尺寸已记录。

## 资源与架构线索

| 扩展名 | 文件数 | 数据总字节数 |
|---|---:|---:|
| `.meta` | 18,946 | 2,863,415,737 |
| `.data` | 8,317 | 35,171,452 |
| `.png` | 2,421 | 636,403,358 |
| `.fbx` | 904 | 16,034,369 |
| `.gui` | 932 | 11,078,813 |
| `.prefab` | 422 | 1,174,049 |
| `.bt` | 70 | 623,053 |
| `.lua` | 4 | 3,947 |
| `.vertex` | 1,214 | 3,178,136 |
| `.fragment` | 1,214 | 2,082,867 |

`.meta` 包含大量二进制数据，不能将全部 `.meta` 当作小型文本描述。抽取的 `.data`/小型 `.meta` 样本保留了 `object`、`version`、`meta`、`id`、`type`、`scriptingId`、`PlaCAssetBuilding` 等字典/类型字符串，并带有二进制结构。由此推断它们属于对象序列化资源；尚未解析完整对象语义。

按包与文件类型选取 31 个不超过 256 KiB 的样本，覆盖全部 7 个包，独立核对保存样本的长度和 SHA-256。未批量解包大型图像/模型或重建游戏源码。

## 证据账本与交付文件

| 结论 | 证据 | 分类/边界 |
|---|---|---|
| PE 资源树与图标关联 | REA `ev_52f0c67a21803d02f80b2874f77ba358931ca943845d562e48a7ab9f6f56abe2` | shipped-artifact / observed；实际图标加载未观察 |
| 包索引与哈希完整性 | package-summary.json、package-inventory.json、verification.json | 本地文件字节观察；不是 REA Evidence ID |
| 声明的入口与导入依赖 | foundation-exe-pe-layout.json | 本地 PE 解析；仅常规导入，不含延迟导入或运行时动态加载 |
| 版本/引擎/源码路径字符串 | foundation-exe-string-scan.json | 有文件偏移的本地字节扫描；存在不等于执行 |
| 保存样本完整性 | samples.json、verification.json | 本地长度与 SHA-256 核对；未完成全部格式解码 |

所有证据文件和脚本都在本报告同目录：

- [REA Evidence bundle](rea-evidence-bundle.json)
- [包摘要](package-summary.json)、[完整索引](package-inventory.json)、[CSV 清单](package-files.csv)
- [PE 布局与导入表](foundation-exe-pe-layout.json)、[精确字符串扫描](foundation-exe-string-scan.json)
- [根目录哈希清单](root-file-inventory.json)、[样本清单](samples.json)、[验证结果](verification.json)
- [包解析器](foundation_package_parser.py)、[PE/字符串分析脚本](inspect_foundation_pe.py)

## 调查问题完成情况

| 问题 | 状态 |
|---|---|
| 目标身份、版本和基本依赖 | 已回答（静态） |
| 7 个包的内容清单、索引结构与哈希 | 已回答 |
| 子系统划分 | 部分回答：导入与字符串线索，未验证调用链 |
| 对象序列化与资源引用语义 | 部分回答：字典/类型样本，未全面解码 |
| 原生函数与实际运行行为 | 未解决：Ghidra 未完成；没有运行时取证 |

## 后续工作与剩余限制

下一步的高价值入口是 `ComCPackage` 的包加载/校验、Lua 注册与序列化、村民行为树及生产配置。可直接用本次保存的包索引定位并读取对应资源。函数级逆向需要先解决大型主程序默认分析的时间/内存成本；本次日志显示其使用 2 GiB Java 堆，但不能据此断言根因。

原文件 MD5/SHA-256 验证只证明本次观察的内容与包内声明一致，不是来源真实性签名。当前没有修改/重打包能力的游戏侧验证，没有原始源码等价性结论，没有 Steam/DLC 的运行时启用状态结论。

## 外部参考

格式线索来自作者发布的 [旧版包格式说明](https://gist.github.com/joepie91/f4fa61f7478642a3dcd944d585eddb72) 和 [foundation-package-tools 源码](https://github.com/PegasusEpsilon/foundation-package-tools)。新版头部、文件记录长度和 MD5 规则由本地文件验证补充。

## 重现命令

在本项目根目录运行：

```powershell
python outputs\foundation-package-evidence\foundation_package_parser.py "D:\steamtest\steamapps\common\Foundation" --out work\recheck-packages
python outputs\foundation-package-evidence\inspect_foundation_pe.py
```

首次解析和新增哈希验证各运行一次；新增的样本长度/SHA-256 与 PNG 头部校验通过。Git 已保存调查产物和被替代样本，项目状态由 PROJECT.md 维护。
