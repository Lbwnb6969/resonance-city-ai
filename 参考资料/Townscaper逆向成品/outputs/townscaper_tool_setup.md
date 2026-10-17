# Townscaper 分析工具配置与验证

更新：2026-10-13。用户许可证内容不进入报告、日志摘要或 Git。

## Ghidra / REA

- Ghidra 12.1.4：`work/tools/vendor/ghidra-12.1.4/ghidra_12.1.4_PUBLIC`。
- Temurin JDK 21：`work/tools/vendor/jdk-21/jdk-21.0.12.1+1`。
- 用户环境变量 `JAVA_HOME`、`GHIDRA_INSTALL_DIR` 已持久化。
- `C:/Users/Administrator/.codex/config.toml` 的 `[mcp_servers.rea.env]` 显式设置上述路径及 `REA_GHIDRA_STARTUP_TIMEOUT_MS = '3600000'`，REA 调用时限 `tool_timeout_sec = 3600`。其他条目与审批设置未变；配置已先备份至 `work/tools/config-backups/`，没有把含其他连接配置的备份纳入 Git。[Codex MCP 配置文档](https://developers.openai.com/codex/mcp)
- 使用独立的新 REA 6.4.0 stdio 进程实际验证，未依赖当前对话旧 MCP 进程的环境。默认330秒启动时限下首次分析超时，失败记录移入 `work/废弃/rea_timeout_20261013/`；延长后成功完成自动分析及4个函数 dossier，导出1,844,133字节的 Evidence bundle，随后 `close_binary` 正常完成。
- `rea inspect-evidence-bundle` 验证4条完整记录、同一目标哈希、provider版本12.1.4、value flow无记录截断。控制流仍受 Ghidra no-return 标记限制，详见 `townscaper_native_evidence_summary.md`。

可重用工作区脚本：`python work/rea_native_session.py --output <新的绝对输出路径>`。脚本拒绝覆盖已有 Evidence。已保存的证据和 PDB 项目无需重复导入。

## IDA Free

- 官方安装包：`C:/Users/Administrator/Downloads/ida-free-pc_94_x64win.exe`。Authenticode 状态 Valid，签名者 Hex-Rays。
- 已安装目录：`C:/Users/Administrator/Desktop/mIDDLEFILE/IDA`；实际 `ida.exe` 版本 `9.4.260915.1d72b8c0`。
- 安装包的 MSVC 14.44.35211 与系统已有14.51.36247冲突，运行库返回 `0x80070666` / 1638（较新版本已安装）。IDA 安装日志最终记录 `Installation completed`、退出码0，因此不需要重装或降级MSVC。
- 用户已完成首次启动许可确认。许可证原文件保留，副本以 Free 版实际查找的 `idafree.hexlic` 名称放在安装目录及 `%APPDATA%/Hex-Rays/IDA Pro/`。此前错误的 `ida.hexlic` 命名副本移到 `work/tools/license-backups/`。
- 本地验证日志从“没有有效许可”推进到 x86 PE 文件加载阶段：`Possible file format: Portable executable for 80386 (PE)`。随后 `-S` 参数被拒绝为 `Unknown switch '-S'`，所以没有把 IDC 自动化脚本当作已成功执行；该失败脚本和旧日志已归档。
- Free 版不提供 IDAPython、C++ SDK 或 IDAlib，不能运行 REA 所需的 ida-pro-mcp/idalib-mcp。之前把申请 Free 许可证当成可完成 REA provider 配置的步骤不成立，现已纠正；不设置一个无法运行的 `REA_IDA_MCP_CONFIG`。[IDA Free 官方功能与 FAQ](https://hex-rays.com/ida-free)
- 旧 `work/ida-mcp.template.json` 已移入废弃目录；它仅适用于具有相应接口的版本和已安装的现代 supervisor，不能用于当前 IDA Free。

## Hopper

Windows 没有官方 Hopper 版本，当前主机不配置 Hopper。该平台约束不妨碍使用 Ghidra 完成此次原生静态分析。[Hopper 官方 FAQ](https://www.hopperapp.com/faq.html)

## 验证范围

本轮读取原始二进制，未运行 Townscaper 游戏，未操作用户存档。IDA 许可与加载核验使用工作区内的启动器副本。GameAssembly SHA-256 与前两轮完全一致：`4aa99a8deaa9a322026094186ed283020a8b6d897f2777dbb330ebf0ca89532c`。许可证只保存在本地用户指定位置及不纳入Git的备份目录。
