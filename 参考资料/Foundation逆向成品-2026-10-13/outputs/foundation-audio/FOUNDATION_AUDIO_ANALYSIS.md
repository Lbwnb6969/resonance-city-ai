# Foundation 音频容器静态分析

分析日期：2026-10-13。目标：`D:/steamtest/steamapps/common/Foundation` 中全部 3 个 `.bnk` 和 2 个 `.pck`。全部以只读模式检查，未启动游戏、未播放音频、未批量提取媒体、未修改安装目录。

## 已确认结果

3 个独立 bank 的 BKHD 版本字段均为 **150**。wwiser 原作者版本表将此格式代际对应为 Wwise 2023.1；这不能确定 SDK 的具体补丁版本。[版本表](https://github.com/bnnm/wwiser/blob/master/wwiser/parser/wdefs.py)

|文件|索引媒体/数据项|RIFF WAVE|PLUG|HIRC 对象外壳|
|---|---:|---:|---:|---:|
|audio/core.bnk|1,175|1,073|102|3,837|
|audio/Init.bnk|0|0|0|41|
|dlc/agriculture/audio.bnk|565|565|0|1,133|
|audio/core.pck 的 streamed_media 表|269|269|0|内嵌 bank 与独立文件一致|
|dlc/agriculture/audio.pck 的 streamed_media 表|32|32|0|内嵌 bank 与独立文件一致|

共 2,041 个已索引媒体/数据项：1,939 个 RIFF WAVE、102 个 PLUG。此计数排除了 PCK 内嵌 bank 与独立 `.bnk` 的重复载体，未断言这是 2,041 个不同音效。PCK 目录只有 `sfx` 语言项；external_media 表为空。

所有 1,939 个 WAVE 的 `fmt ` 格式标识均为 `0xFFFF`，采样率均为 48,000 Hz。按 vgmstream 原作者源码映射，标识对应 Wwise Vorbis。单声道 1,205 项、双声道 734 项；未解码音频，未证明解码成功或可听内容。[Wwise 解析源码](https://github.com/vgmstream/vgmstream/blob/master/src/meta/wwise.c)

core.bnk 的另外 **102 项是 PLUG 容器**。每项都包含 `hash`（16 字节）、`junk`（0 字节）、`data`（可变长度）三个子块；PLUG 声明总长、DIDX 长度及子块范围全部一致。这些是非 WAVE 数据，不是 RIFF 损坏、空记录或短头；其具体插件用途、`hash` 计算方法和 `data` 语义尚未解析。

## 范围与一致性验证

- 所有 BNK 区块完整覆盖对应 bank；所有 DIDX 项均在 DATA 范围内，彼此无重叠。
- core DATA 有 7,883 字节索引间隙；agriculture DATA 有 4,259 字节。间隙全部为零，单段最多 15 字节；结构与对齐填充一致。
- 全部 5,011 个独立 HIRC 对象外壳按声明数量、类型字节、32 位长度和对象 ID 枚举，精确到达 HIRC 区块结尾。没有剩余尾部或越界对象。
- 全部 1,939 个 WAVE 的 RIFF 声明总长等于对应媒体索引长度，`fmt `/`hash`/`data` 等全部子块范围完整。无 partial/prefetch 条目。
- Wwise RIFF 子块使用 `8 + size` 前进，不增加普通 RIFF 的奇数长度对齐字节。这符合 vgmstream 的 Wwise 解析规则；本次 946 项最后的 `data` 长度为奇数，按此规则也精确到达媒体末尾。
- core.pck 的 header 占 5,480 字节，之后的两个 bank 与 269 项 streamed_media 连续覆盖全文件；agriculture/audio.pck 的 header 占 720 字节，之后的一个 bank 与 32 项 streamed_media 连续覆盖全文件。目录范围全部有效，无重叠、无 payload 侵入 header，无 header 之外的未解释间隙。[PCK 原作者格式实现](https://github.com/bnnm/wwiser-utils/blob/master/scripts/wwise_pck_extractor.bms)

|PCK|bank ID|绝对偏移|字节数|SHA-256 精确匹配的独立 bank|
|---|---:|---:|---:|---|
|audio/core.pck|1355168291|5,480|5,319|audio/Init.bnk|
|audio/core.pck|3787826988|10,799|69,898,769|audio/core.bnk|
|dlc/agriculture/audio.pck|2931976874|720|6,925,742|dlc/agriculture/audio.bnk|

## HIRC 类型证据与限制

按 wwiser 版本 >=128 的枚举标签，core bank 包含 1,905 个 Sound、407 个 Action、337 个 Event、435 个 Random/Sequence Container、85 个 Switch Container 等对象；agriculture bank 包含 748 个 Sound、110 个 Action、95 个 Event、89 个 Random/Sequence Container、15 个 Switch Container 等对象。Init bank 包含总线、设备和效果类型外壳。[HIRC 枚举与解析实现](https://github.com/bnnm/wwiser/blob/master/wwiser/parser/wparser.py)

这些是类型字节及声明长度的静态证据。没有解析对象负载中的动作目标、事件到动作引用、Sound 到媒体引用、RTPC、路由、切换条件或参数。因此不能将对象数量直接解释为运行中播放数量，也不能根据此清单声称已重建音频系统逻辑。

## 可复用成果

- `inspect_wwise.py`：仅 Python 标准库的只读目录解析器；枚举全部 `.bnk` / `.pck`，输出 SHA-256、目录、DIDX、HIRC 外壳、RIFF/PLUG 子块及范围验证。支持现代 LE/BE 目录和 20/24 字节 AKPK 项布局；本目标实际使用 LE、20 字节项。
- `summary.json`：全文件摘要及内嵌 bank 哈希匹配。
- `audio__core.bnk.json`、`audio__Init.bnk.json`、`dlc__agriculture__audio.bnk.json`：独立 bank 的逐项证据。
- `audio__core.pck.json`、`dlc__agriculture__audio.pck.json`：逐项包目录及内嵌 bank 证据。
- `media-index.csv`：2,041 行媒体/数据目录，可按容器、ID、绝对偏移、长度、魔数、格式、声道和采样率查找。
- `hirc-object-index.csv`：5,011 行 HIRC 类型/ID/绝对偏移/负载长度目录。
- `validation-and-sources.json`：验证命令、最终计数和所读取原作者源码的 URL、日期、SHA-256。

复现命令：

```powershell
python .\inspect_wwise.py 'D:\steamtest\steamapps\common\Foundation' .\inventory
```

本次验证命令完成并返回退出码 0。保存的 CSV 和结构化证据再次检查了所有 WAVE/PLUG 子块范围。剩余工作是 HIRC 负载及 PLUG 数据语义分析、媒体解码和游戏运行时事件核对；本报告的完成范围为容器目录与结构验证。
