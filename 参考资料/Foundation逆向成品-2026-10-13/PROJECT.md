# Foundation Reverse Engineering

## Current goal
用户已将目标扩大并明确为“完整逆向资料与全部资源”。继续全量主程序反编译/调用与类型图、全部34884原包文件与724 loose文件导出、全对象/玩法语义索引、完整音频/媒体恢复与可用资源格式转换。不是可编译游戏重建或游戏复刻。

## Requirements
- 用户明确要求“继续直到完成”；不得以初步字符串扫描代替函数/格式证据。
- 使用 reverse-engineer-anything / REA；区分真实 REA Evidence 与本地文件/反编译证据。
- 原始安装目录只读。重要替代材料移动到 work/abandoned；调查产物进行 Git 备份，二进制保留精确字节。
- outputs/ 保存交付，work/ 保存分析脚本、日志与数据库；不删除重要分析数据库。

## Key decisions
- 按 REA 技能的独立问题并行流程，原生、序列化、音频分别分析；根线程负责包索引、Mod、系统清单和综合验证。
- 主程序默认 Ghidra 全分析未完成。采用已有 Ghidra 12.1.4 的 -noanalysis，按 PE .pdata 精确范围及 RIP 字符串引用定向反汇编/反编译；原始 SHA-256 固定为 2c0a048bc1fa2791f58ea432b85cbd9b816af0efec6d6d1c0be6c12195da31af。
- 所有标准 version2 序列化文件进行独立重编码字节比对；非此格式的纹理/模型缓存单独解析，不把它们当作错误。
- 本轮 Computer Use 的启动观察被用户物理 Escape 停止，之后未继续任何界面操作；运行时结果不作为已取得证据。

## Progress / validated conclusions
- 完整安装目录：731 个文件、4,851,283,262 字节；生成全部 SHA-256 清单，16 个根目录文件与上轮 baseline 完全一致。
- 7 个资源包：34,884 文件、1,929 目录，MD5(offset36..EOF)、索引、数据连续覆盖校验通过。所有目录 skip_offset 均验证为最后子项结束的绝对索引位置。
- REA PE 资源树：8 资源、20 目录项；Evidence ev_52f0c67a21803d02f80b2874f77ba358931ca943845d562e48a7ab9f6f56abe2。上一会话已关闭。
- 标准序列化：26,290 文件结构/typed值已解码，独立重编码逐字节一致；全量语义索引已覆盖 312,393 个声明与 78,265 个解析资产引用。
- 定向原生分析已取得真实函数反编译；后续函数覆盖/推断边界由 native 子报告记录。
- 3 个 Mod ZIP：75 成员，34 Lua/JSON/文本原样提取；904 JSONC snippets；本体17种语言578 JSON全部可解析。

## Final delivery / validation
- 综合报告 outputs/FOUNDATION_REPORT.md；全量原生、资源、语义、模型、音频和格式报告、只读脚本、CSV/JSONL及证据已交付。
- 原生：194,922 函数记录，194,904 份完整 C 反编译，18 份失败记录保留原始函数体/汇编；10,557,895 条指令、全量调用引用、RTTI/COL/vtable 清单已闭合。
- 资源：34,884 个包 payload + 724 个 loose 文件逐项 SHA-256 导出；26,290 个 v2 对象逐字节 roundtrip；2,418 个缓存结构闭合，格式目录无未分类项。
- 玩法：70 行为图、817 节点、735 边、106 配方，引用和未解析项全量索引，semantic-validation failures=0。
- 模型：904 metadata、904 GLB、81,576 mesh、24,103,457 顶点、55,061,373 索引，GLB validator 904/904。
- 音频：3BNK+2PCK，2,041 原始项（1,939 WAVE、102 PLUG），1,939 PCM16 WAV 解码成功，5,011 HIRC 外壳及事件路径保留。
- Ghidra所有headless进程已退出；原DB work/native/ghidra-project保留，162MB ZIP备份在outputs中，CRC/逐成员SHA-256通过。
- 交付manifest复核：native237项、serialization97项；保存脚本单资源typed值及独立重编码复核通过。
- 原根目录16文件hash与首轮baseline一致；完整731文件hash清单已保存。

## Next steps
全量静态恢复已完成。后续若需要，可针对 18 条原生失败记录、具体模型 sidecar、未解析音频 tid 或某一玩法对象继续做定点研究；不需要重跑全量导出。

## Unresolved issues / limits
- 用户按Escape取消Computer Use启动观察；之后未操作界面，未取得运行时主菜单/Steam/DLC状态。
- 定向Ghidra不是全程序源码还原；伪代码与推断的诊断字符串归属不能当原始符号。
- 原生支持的压缩/v3序列化分支未有本次样本验证，当前解码器只支持实际未压缩v2。
- 动画13字节辅助字段、字体metric分量、模型aux字段、HIRC载荷与PLUG语义部分未知，但包装与区间已完整验证。
- 未匹配UUID含本地图/组件/subasset等，不作为坏引用判断。

## Full restoration phase (complete)
- 2026-10-13：全部 34,884 包内资源 + 724 loose 文件已物理导出至 `outputs/foundation-resources`，每项重读 SHA-256 验证，原始格式/名称保留。
- 主程序全量指令分区闭合；194,922 函数记录中 194,904 份 C 输出成功、18 份失败保留原始证据；31,060 chained unwind fragments、33,202 RTTI 类型描述符、25,415 COL/vtable 候选已索引。
- 904 个模型 metadata 与 GLB 全部通过解析/结构验证；2,041 个音频媒体原件、1,939 个 PCM16 WAV 和完整 HIRC/事件图已交付；70 个行为图和全量玩法语义索引验证无失败。
- 用户选择“完整逆向资料与全部资源”；不要求可编译重建工程，也不恢复已取消的 UI 操作。
- 原始资源、分析数据库和失败清单均保留；运行时仍未执行。
