# FMOD Studio 事件、参数与资源引用恢复

对象是 Tiny Glade 随附 `fmod.dll`、`fmodstudio.dll` 和 `assets/audio/Desktop` 的 37 个 bank。本阶段在独立 Python 进程中运行原随附 FMOD SDK，初始化输出为 NOSOUND_NRT，Studio 使用 SYNCHRONOUS_UPDATE。仅加载 bank 元数据并查询；没有创建或启动 event instance，没有加载 sample data、播放音频或启动游戏。PCM 解码由独立 `audio_decode.py` 流程负责，此工具没有重复解码。

## 已取得的完整元数据

37 个 bank 全部加载成功，错误数 0。Bank_GetEventList 给出 **547 个独立、有路径的 event/snapshot**。静态 EVTB 另有 57 个未列出的 GUID；逐个 System_GetEventByID 全部成功，取得描述与参数，但 GetPath 返回 EVENT_NOTFOUND。因此实际恢复了 **604 个 event description**，没有将公开列表误当作完整集合。

|内容|数量|
|---|---:|
|bank|37：18 元数据、18 sample assets、1 strings|
|Bank_GetEventList 独立 event/snapshot|547|
|仅 GUID 可获取的额外 event description|57|
|总 event description|604|
|snapshot description|38|
|3D description|270|
|stream description|122|
|event 参数条目|1,591：1,429 公开事件 + 162 未列出事件|
|系统 global 参数|61|
|bus|70|
|VCA|5|
|strings bank GUID/path 条目|771|
|LABELED 参数 / 用户属性|0 / 0|

每个 description 保存 GUID、path、长度毫秒、3D 距离范围、sound size、snapshot/oneshot/stream/3D/doppler/sustain 标志、所有参数及其 ID/GUID、范围、默认值、类型、flags、labels。bus/VCA 保存 GUID/path 与新建系统里的初始 volume/final volume；bus 另存 paused/muted。这些查询值不是对游戏实际 mixer 状态的观察。

ABI 来自打包 Cargo.lock 的同版本 `libfmod 2.222.6`，绑定 header version 是 `0x20222`；实际随附 DLL 的 Core_GetVersion 返回 **`0x20223`（2.02.23）**，Create 接受上述 header。`FMOD_GUID` 为 16 bytes，ParameterId 为 8 bytes，ParameterDescription 为 56 bytes，UserProperty 为 24 bytes；`abi_bindings_excerpt.rs` 保存原 repr(C) 字段与函数声明，`abi_source_identity.json` 绑定下载 crate 与源文件 SHA-256。实际结构通过 API 交叉检查，未将 crate 版本错当作 DLL 精确补丁版本。

原 DLL 和每个 bank 的 SHA-256 保存在 `full/studio_metadata.json`，与后续静态 bank 解析逐一核对。

## 验证范围

- 系统 bank count/list 的数量与 GUID 集合相同；各 bank 的 event/bus/VCA count 与实际返回列表相同。
- 742 次对象 path→LookupID→GUID、GUID→LookupPath→path 交叉查询通过，确认 GUID 字节顺序与名字表一致。
- 参数按 index/list 得到 description 后，再按 ParameterId 查询；1,763 次结构交叉检查通过。这个数包含跨 bank 重复 description 的验证。
- 604 个 description 的 instance count 全为 0；37 个 bank 与 604 个 description 的 sample loading state 全为 UNLOADED。
- 57 个未列出 GUID 全部能从实际 Studio system 取得 description；其 path 为空，未凭文件名替它们起名字。

全部 88 个 AUTOMATIC 参数（87 Distance、1 Direction）的 default 字段都是 f32 `0x7f7fffff`，数值约 3.4028234663852886e38，超出各自描述范围。工具原样保存并标记 `default_in_authored_range=false`；这些值不是游戏运行时实际距离，也未被错误地当成 bank 损坏。自动参数的实际计算需要 event instance，本阶段没有创建实例。

本次没有 LABELED 参数，labels 数为 0。工具绑定 label 查询 API，并按真实 LABELED flag 执行；没有声称在本地验证了不存在的 label 实例。

证据：`full/studio_validation.json`、`full/studio_summary.json` 和完整 `full/studio_metadata.json`。

## Bank、wave GUID 与 FSB sample

除 SDK 查询外，`audio_bank_graph.py` 完整消费 37 个 bank 的 RIFF/FEV、LIST/PROJ 嵌套边界，只读取 FSB header/name table，跳过压缩音频数据区。所有静态 BNKI GUID 与 SDK Bank_GetID 相同。

PROJ 记录包含 EVTB、MBSB、IBSB、GBSB、TLNB、MUIB、WAIB 等 GUID 基础字段。本阶段保留 **40,867 个记录范围**、**127,292 个精确 GUID 字节引用**，604 个独立 EVTB GUID 与全部 SDK descriptions 对应。这里的引用角色以原 chunk kind 保存，没有仅凭缩写宣布每个字段的完整语义。

已闭合的 sample 关系是：

```text
WAIB 的第二个 GUID → WAV record 的第一个 GUID
WAV record → 当前 .assets.bank 的 FSB container / subsound index
FSB header name table → sample name
```

每个 WAV record 的完整结构在本次构建中是 30 bytes：

|data 偏移|字段|
|---:|---|
|0|16-byte FMOD_GUID|
|16|u16 payload length=12|
|18|u32 FSB container index|
|22|u32 subsound index|
|26|u32 flags，保留原值|

全部 **4,807 个 WAV record 与 4,807 个 FSB subsound 一一对应**，每个 assets bank 内索引无重复、无遗漏、无越界。Wave GUID 全局有 2,991 个独立值，部分音频在不同 sample bank 中重复打包；输出保留每个实际 bank/subsound occurrence。

例如 animals.bank 中 47 个 WAIB record 引用 animals.assets.bank 中 39 个 WAV。WAV 的 subsound index 是 0..38，sample name 直接来自实际 FSB 名称表。该映射把 event 记录中的资源 GUID 接到了可提取的压缩 sample；WAV flags 的全部语义仍未定义。

`full/bank_guid_graph.json` 约 55 MB，包含 source hash、chunk 范围、record kind、GUID 引用所在 byte offsets、WAV/sample 映射与候选 event→sample 可达图。它可由纯标准库工具再生，不依赖 FMOD DLL。

## 依赖图的已知边界

SDK Bank_GetEventList / BusList / VCAList 给出的是真实对象归属。`studio_relationships.json` 保存 705 条这些 membership 关系；strings bank 内出现其他 bank GUID，是名字表记录，不能当作播放依赖。

静态候选可达图只沿指定 event/timeline/instrument/input/master-bus record kinds 追踪 GUID，604 个 descriptions 中 554 个能找到 sample GUID。多个 bank 的相同 GUID record 会合并引用；相同 wave 也会落到多个 sample bank。因此 `event_possible_samples` 是继续追踪的候选集合，**不能解释为所有列出的 bank 都必须加载，或事件必定播放其中每个 sample**。

完整 timeline/instrument 字段、条件、随机选择、曲线、命令触发、event→bus routing、重复 wave 的实际 bank 解析优先级仍未闭合。没有因 event metadata 可读就声称完成 FMOD Studio 项目重建。

## 可复用工具与复现

`tools/audio_studio_inspect.py`：Windows 64-bit Python，标准库即可；使用本机游戏随附 DLL，仅查询元数据。

`tools/audio_bank_graph.py`：标准库静态 parser，任何能读取文件的 Python 主机都可运行；不载入 DLL、不解码音频。

先提取公开 SDK 元数据，再生成静态 graph；利用 graph 发现未列出 GUID，最后补齐所有描述与 graph 中的 SDK 身份：

```powershell
python outputs/tiny-glade-analysis/tools/audio_studio_inspect.py --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full
python outputs/tiny-glade-analysis/tools/audio_bank_graph.py --root 'C:/Steam/steamapps/common/Tiny Glade' --studio-metadata outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full/studio_metadata.json --out outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full/bank_guid_graph.json
python outputs/tiny-glade-analysis/tools/audio_studio_inspect.py --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full --declared-events outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full/bank_guid_graph.json
python outputs/tiny-glade-analysis/tools/audio_bank_graph.py --root 'C:/Steam/steamapps/common/Tiny Glade' --studio-metadata outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full/studio_metadata.json --out outputs/tiny-glade-analysis/evidence/reconstruction_audio_studio/full/bank_guid_graph.json
```

`--bank animals.bank --bank animals.assets.bank --bank Master.bank` 可做针对一个 bank 的查询；strings bank 会一起加载。`audio_bank_graph.bank(path)` 可直接返回完整嵌套 chunk inventory、FSB 名称表与 raw record ranges。

游戏和存档保持只读；上述所有命令拒绝把输出放进游戏目录。当前结果可以支持 event ID/参数查找与 sample 资源定位；恢复 event 的实际播放逻辑仍需继续沿记录图和 SDK 原始解析函数拆解。
