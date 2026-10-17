# Foundation 全音频资源恢复与静态语义资料

本目录交付全部 2,041 个已索引原始媒体/数据项，以及全部 1,939 个 Wwise Vorbis 媒体的标准 PCM16 WAV 副本。音频资源及解码数据完整恢复；没有将资源解码称为游戏或 Wwise SDK 源码恢复。

## 原始资源与可播放副本

|成果|数量|总字节数|验证|
|---|---:|---:|---|
|`original/` 的 `.wem`|1,939|含在下一行总数内|原容器范围、逐项 SHA-256|
|`original/` 全部 `.wem` / `.plug`|2,041|631,973,428|逐项原始字节完整导出|
|`decoded/` 标准 PCM16 `.wav`|1,939|2,528,273,892|解码退出码 0、无 stderr、PCM 长度及每项 SHA-256|
|`opaque-plugin-params/`|9|188|原 bank 偏移、逐块 SHA-256、完整十六进制|

`original-media-manifest.json` 保存每项原容器路径/哈希、媒体 ID、绝对偏移、长度、恢复文件路径和 SHA-256。PCK 内嵌 3 个 bank 与原安装目录独立 bank 完全相同，manifest 保留匹配证据，未额外重复导出。

`decoded-media-manifest.json` 保存每项 vgmstream 元数据、执行结果、WAV 字节数、帧数、声道、采样率、时长和 SHA-256。1,939 / 1,939 项成功解码，失败数为 **0**；每项均检查物理 PCM 数据字节数 `frames × channels × 2`，所有媒体均为 48 kHz、16 bit PCM。合计原始完整流时长 **13,969.164 秒**（3 小时 52 分 49 秒）。

解码使用官方 vgmstream **r2117** Windows x64 CLI，发行压缩包 SHA-256 与 GitHub release asset digest 精确一致。使用 `-i -W 1`，保留完整源流，忽略重复循环；13 项源媒体带循环元数据，manifest 保留源循环点。本次没有播放任何音频。

102 个 `.plug` 已完整导出；完整 HIRC 效果媒体表将全部 102 个不同 PLUG 源链接到 **Wwise Convolution Reverb**（105 条引用，包含复用）。这是卷积混响插件使用的媒体数据；PLUG 内部 `data` 布局未语义解码，因此没有伪造 WAV 副本。

## 全 bank 静态解析与事件映射

原作者 wwiser **v20260808**，固定源码 commit `08e937b649bc7007c234bbd59e34a41d5eef3b38`，纯 Python 静态解析 3 个 bank。日志没有 parser error 或 skip；HIRC 共 **5,011 个对象、242,663 个字段**。

- `banks-full.xml` 是 wwiser 原始输出，包含 3 个相邻 `<root>`；`banks-full-wrapped.xml` 加上一个 `<banks>` 根，是可由标准 XML 工具直接加载的完整文档。两个版本均保留各字段在 bank 中的原始偏移。
- `hirc-all-fields.json` 保存全部 242,663 个字段、对象上下文、枚举标签、值和偏移；`hirc-object-map.json` 保存全部 5,011 个对象身份。
- `hirc-reference-map.json` 保存全部 24,614 条 `tid` 引用及解析结果。17 个 `ulLayerID` 已标记为内联 `CAkLayer` 身份，而非缺失的独立对象。
- `event-action-sound-media.json` 包含全部 **432 个 Event**、Action、容器子级、Sound 和媒体路径；产生 **2,806 条可达路径**，其中 **365 个 Event** 静态连到已恢复媒体。没有遍历环。
- `sound-media-map.json` 保存全部 **2,653 个 Sound** 的 sourceID / codec plugin / stream 类型。2,308 条引用连到媒体文件，其余 345 条为 **Wwise Silence** 生成源，没有遗漏的 Sound 媒体文件。
- `effect-plugin-media-map.json` 保存全部效果插件与媒体表；包括 PLUG 卷积混响映射。`inline-layer-map.json` 保存 17 个内联 layer 身份。
- `wwiser-names-map.json` 保留 wwiser 名称及其来源标签；没有原始名称的对象保留数值 ID，不编造名称。

Event 路径图表示 **Play / PlayEvent 到所有可达子级的静态并集**。完整 XML 保留 Switch、随机权重、RTPC、状态、总线、音量、虚拟声部与淡入淡出等参数；路径清单没有执行随机选择或计算运行时状态。Stop / Pause / Resume / Seek / SetState / SetGameParameter 的行为按各自 Action 标签保留，不当作开始播放。

## 覆盖限制与具体未解析项

`semantic-coverage-gaps.json` 完整记录原始偏移及限制。

1. 两个 Play 动作的目标未出现在所检查的全部 3 个 bank 中：core 动作 **315286992 → 511784944**，core 动作 **77412605 → 906422464**。因此 432 个 Event 中两个 Play 事件没有完整 Sound 路径。其余 65 个没有媒体路径的 Event 由 Stop、SetState、Pause、Resume 等非播放动作组成。
2. 引用表仍有 **72 个 `tid` 记录**在选定 bank/media 的定义集合中未找到对应项。这包含 Switch Group / State 等不同 ID 域，不能全部称为缺失音频对象；每项上下文均已列出。两处 Play 缺失单独登记。
3. wwiser 对 **9 个 `pParamBlock`（188 字节）**使用 opaque 字段：8 个 Compressor 参数块（各 22 字节，包括 Init/core 重复的 4 个对象）和 1 个 System device 参数块（12 字节）。已原样导出并记录 plugin ID、十六进制与 SHA-256；原始 float 候选仅作为数值视图，不赋予未证实参数名称。
4. 原始 bank 的 BKHD `dwLanguageID` 实际值均为 **393239870**；AKPK language 表的 ID **0 → sfx** 属于包目录字段，不能混淆两个数值域。此前浅层解析器的 `language_id` 第三 uint32 在格式 150 中实际是保留字段，完整 wwiser XML 是 BKHD 字段布局的准据。
5. 全部资源字节和已知 Wwise 静态格式字段已保留；没有游戏运行时触发记录，也没有宣称实时混音、随机选择、动态状态或全部专有插件内部语义已重建。

## 复现与工具出处

`recover_audio.py` 原样恢复原始媒体；`decode_audio.py` 使用 work 目录官方 CLI 解码并验证；`analyze_hirc.py` 派生引用/路径清单；`enrich_semantics.py` 提取 opaque 参数及插件媒体映射。脚本默认从本工作区根运行，使用原始安装路径，并写入本成果目录。

`tool-provenance.json` 保存官方来源 URL、版本、源码 commit、发行包与关键代码 SHA-256、操作范围；`tool-licenses/` 保存 vgmstream 发行包提供的 COPYING。wwiser 所读取的固定 commit 没有 LICENSE / COPYING 文件，此事实记录在 provenance，未编造许可。工具只下载到 `work/full-audio/vendor`，没有系统安装。`wwiser-dump.log` 保存实际静态解析日志。

`final-validation.json` 记录对 2,041 个导出文件的回读 SHA-256 校验、1,939 个解码结果与原始 manifest 的一一覆盖核对，以及 wwiser 实际 bank 节点的 error_count / skip_count（3 个 bank 均 0 / 0）。

出处：[wwiser 原作者源码](https://github.com/bnnm/wwiser)、[固定 wwiser commit](https://github.com/bnnm/wwiser/tree/08e937b649bc7007c234bbd59e34a41d5eef3b38)、[vgmstream 官方发行](https://github.com/vgmstream/vgmstream/releases/tag/r2117)、[vgmstream 使用说明](https://github.com/vgmstream/vgmstream/blob/master/doc/USAGE.md)。
