# Tiny Glade 资源、构建清单与可复用工具

分析范围：`C:/Steam/steamapps/common/Tiny Glade`，2026-10-13。本报告是静态文件与实际提取验证结果；没有写入或启动游戏。证据是 `evidence/assets_*.json` 与目标文件本身；REA 原生程序证据由主报告负责。

## 核心结果

目录共 **2078 个文件，3,260,744,318 字节**。构建清单使用 **BLAKE3**，不是 SHA-256。清单中的 2077 项有 **2076 项匹配、0 项缺失、1 项不匹配**：唯一差异是 `build-info/manifest.json` 自身的清单项。主程序和 PDB 完整匹配清单。文件清单之外仅有 `tmp/crash_reporter_log.txt`。自包含清单差异的生成原因未确认，不能将其解释成已证实损坏。

全部 753 个 `compiled-assets/*.bin` 已识别结构类别：621 个纹理归档、120 个草植被网格归档、6 个包清单、6 个已知 Rust 类型的根归档（1 个纹理目录、5 个植被配置）。类别未知数为 0；其中植被配置的部分字段语义仍未知。

已实际导出 **479 个明文网格 OBJ、120 个编译植被网格 OBJ**，分别包含 1,257,189 / 287,572 顶点和 650,705 / 193,269 三角形。所有索引范围、属性数量及解析指针边界通过验证。明文的 3 个 outline 文件不是三角形索引序列，保留在导出清单的 `other` 字段，未误作三角形。

纹理目录解析出 **504 个命名纹理**，全部映射到实际归档，全部 mip/block 字节数精确匹配。秋季 canopy 的 BC7、black 的 RGBA8 sRGB、blue_noise 的 RGBA8 已生成 DDS，并被 Pillow 实际解码为 PNG。brick_colors 的五层纹理输出原始 payload 和元数据，未假定数组层顺序。

37 个 FMOD bank 均通过顶层 RIFF/FEV 边界验证；18 个含 FSB5，共 **4807 个样本名称**。已将 animals bank 中包含 39 个样本的 FSB5 容器精确提取出来。没有声称完成音频样本解码。

## 盘点

|目录|文件数|字节数|内容|
|---|---:|---:|---|
|assets|982|2,021,759,769|628 JSON、106 RON、85 TTF、37 bank、34 snapshot、33 JPG、21 cube、15 YML、11 TXT、8 PNG、3 VDF、1 GLB|
|compiled-assets|753|838,312,629|二进制纹理、植被网格及归档根|
|compiled-shaders|325|8,448,074|303 precomp、22 list；着色器分析见独立报告|
|build-info|3|560,776|Cargo.lock、manifest、toolchain-info|
|根目录|11|391,602,519|主程序、PDB、6 DLL、设置、credits、licenses|
|legal|3|60,096|许可证|
|tmp|1|455|crash reporter 日志|

证据：`assets_inventory.json` 保存每个文件的实际 SHA-256；`assets_integrity.json` 保存独立 BLAKE3 核验。两种摘要有不同用途，字段已明确命名。

## 构建与依赖证据

`build-info/toolchain-info.json` 声明 Rust 1.95.0、LLVM 22.1.2、优化级别 3、DEBUG=true，目标 `x86_64-pc-windows-msvc`，构建 host `x86_64-unknown-linux-gnu`。这些是打包元数据，不代表本机存在相同工具链。

Cargo.lock 共 960 条 package 记录，其中 53 条没有 `source` 字段。后者包含项目 crate，也包含 FidelityFX、GPU-Raytracer、XeGTAO 等供应代码，因此不能把 53 全部称为自研模块。

可直接确定的结构：tiny-glade 0.2.0 依赖 country-core、Bevy ECS 0.17.3，以及 system-wall-constructor、system-roof、system-tree、system-water、system-clutter、system-color、system-critters、system-decorator、system-onboarding、timberframe、toolbar。country-core 依赖 rhapsody 系列、asset/asset-pipe、rapier3d 0.22.0、libfmod 2.222.6、Steamworks 0.11.0、rkyv 0.8.16。asset-pipe 依赖 image、ddsfile、intel_tex_2、BLAKE3；foliage-pipe 另外依赖 gltf、meshopt、half、grass2-shader。渲染底层依赖中有 ash 0.38.0+1.3.281。这些是**依赖图事实**，不能仅据 crate 名认定某算法的运行参数或调用关系。

`tg-package-integrity` 依赖 BLAKE3，实际逐文件计算也与清单吻合，二者相互印证。资源文件 128-bit ID 的生成过程尚未恢复：抽样证明它不是对应归档文件 BLAKE3 的前 16 字节及其逆序。工具将其称为 ID，不称为已确认内容哈希。

证据：`assets_dependencies.json` 包含完整依赖与版本，不依赖在线资料。

## 包清单结构

全部 6 个 `manifest.bin` 完整消费到 EOF，无未解析尾字节：

```text
u64 LE entry_count
repeat entry_count:
    u64 LE name_utf8_byte_count
    byte[] name_utf8
    u128 LE asset_id
    u64 LE rust_type_utf8_byte_count
    byte[] rust_type_utf8
```

纹理包条目名为 `texture-list`，类型 `asset_pipe::texture::TextureAssetList`，ID `79347cbf031c3702d82f293b7a8637c6`。五个植被包条目名为 `grass2/runtime-config/<season>`，类型 `asset::foliage::Grass2RuntimeConfigAsset`，文件名由 ID 的 32 位小写十六进制构成。所有引用都存在。

## 纹理目录与归档

TextureAssetList 文件 42,488 字节；末尾 8 字节是 `i32 relative_pointer + u32 count`。指针相对于其字段地址，定位到 offset 10,224；count=504；每条 64 字节。

|条目偏移|结构|
|---:|---|
|0|8 字节 rkyv ArchivedString|
|8|8 字节对齐区域，原样保留|
|16|16 字节 LE u128 ID|
|32|32 字节描述字段，当前保存 8 个原始 u32|

短字符串 inline，8 字节内以 0xff 填充；外置字符串首字段的 bit 7 是标志，低 7 位及更高字节保存长度，第二 i32 相对**字符串结构起点**定位 UTF-8 数据。504 个名字均正确解码、无重复 ID、无缺失文件。

纹理归档最后 28 字节为 `<IIIHHIiI>`：width、height、depth、mips、layers、format_word、payload_relptr、payload_len。payload 指针相对于 footer 的最后 8 字节起点，所有本次纹理的 payload 从文件开头开始，正好在 footer 前结束。

格式字低 8 位与 Vulkan 格式相符；高位实际对应 2D、数组及 3D 布局：

|格式字|低字节|已验证格式|命名条目数量|
|---:|---:|---|---:|
|658|146|BC7 sRGB，2D|428|
|555|43|RGBA8 sRGB，2D|25|
|651|139|BC4 UNORM，2D|21|
|657|145|BC7 UNORM，2D|15|
|914|146|BC7 sRGB，数组|9|
|549|37|RGBA8 UNORM，2D|5|
|1147|123|E5B9G9R9 UFLOAT，3D|1|

最后一项 `tony_mc_mapface` 是 48×48×48 的 3D LUT，不是 cubemap。已对 504 条按各 mip 的 `max(1,dimension>>level)`、BC 块的 4×4 rounding、每层 bytes 及 depth 计算，总长度全部精确吻合。相同 footer 也识别出植被包里的 117 个纹理，合计 621 个。

DDS 写出采用 DX10 头、准确 DXGI 格式；当前只导出单层 2D，以避免将尚未验证的数组/3D 载荷顺序写错。raw 导出覆盖所有命名纹理。PNG 是主 mip 的预览，没有声称保留全部 mip。

## 编译植被网格

120 个文件的末尾 16 字节均为两个 archived Vec：`indices_relptr, indices_count, attributes_relptr, attributes_count`。索引为 LE u32。属性表记录宽 20 字节：8 字节 archived name，u32 类型，i32 data_relptr，u32 element_count。

观察到类型 0、1、2 分别存放 f32、f32x2、f32x3；属性包括 Vertex_Position、Vertex_Normal、Vertex_UV、Baked_Position、Baked_Normal、Baked_PlantOffsetXZ、Baked_BladeSeed、Baked_BladeLocalHeight、Baked_PartIndex、uv2、uv3，部分还含 Baked_Dpdu/Baked_Dpdv。解析后验证每个属性的顶点数量一致、每个数据区域位于归档内、三角索引均小于顶点数。

OBJ 保留原坐标、法线、第一套 UV；自定义 baked 属性和 UV2/3 没有塞进 OBJ，其名字、原始偏移、类型、数量都留在源元数据，工具 `compiled_mesh(path, decode=True)` 可完整解码所有已知属性。尚未恢复双面和 shader 材质语义，OBJ 不等同于完整游戏渲染重建。

## 五个植被配置

每个 Grass2RuntimeConfig 的尾部 64 字节是根：archived Vec（i32 pointer/u32 count）、8 字节对齐、三个 LE u128 纹理 ID。Vec 指向 14 条 36 字节记录；每条包含 archived 字符串、5 个 f32、一个 exemplar Vec。每组有 4 条 112 字节 exemplar 记录，其中名字与 LE u128 网格 ID 均完整恢复。合计 5×14×4=280 条网格引用，全部实际存在，15 个根纹理引用也都存在。

float 字段和 exemplar 剩余数组未获得字段声明，本报告只保存原始值和布局，不给密度、LOD 阈值、动画参数等字段凭空命名。证据：`assets_foliage_configs.json`。

## 明文、prefab 与声音

628 个 JSON 全部经标准 JSON parser 成功读取；schema 索引记录根类型、字段与数组数量。482 个 mesh JSON 其中 479 个可作为索引三角网格导出；3 个 decorators outline 保留原序列，primitive topology 未声明。

106 个 RON 的源引用索引提取 mesh、shader、texture、material、prefab 的字符串字面量及原字符 offset。**这是源码引用索引，不是完整 RON parser，也不恢复 prefab 的 default 继承/覆盖执行规则。**例如 naked_tree/default 指定 trunk shader，large 指定 trunk mesh；实际合并顺序仍需代码证据。

声音文件均以 `RIFF ... FEV ` 开头，顶层 chunk 包括 FMT、LIST/PROJ，assets bank 通常还有 SND。FSB5 version=1 的 header 60 字节，样本 header/name/data 三区长度与容器边界吻合；样本名通过名称表 u32 offset 解码。全部 18 FSB5 的 codec_mode_raw=15；样本头的 codec setup 与音频数据没有解码或重建 Ogg/WAV。

## 工具与复现

工具：`tools/assets_tool.py`。Python 3.11+；inspect 需要 `blake3`，PNG 预览需要 Pillow，其余命令仅需标准库。本次 blake3 安装在项目 `work/python-deps`，没有改动游戏或系统 Python。

```powershell
$env:PYTHONPATH=(Resolve-Path 'work/python-deps').Path
python outputs/tiny-glade-analysis/tools/assets_tool.py inspect --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence
python outputs/tiny-glade-analysis/tools/assets_tool.py meshes --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/meshes
python outputs/tiny-glade-analysis/tools/assets_tool.py compiled-meshes --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/foliage-meshes
python outputs/tiny-glade-analysis/tools/assets_tool.py textures --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/textures-sample --name autumn_canopy --name black --name blue_noise --name brick_colors --png
python outputs/tiny-glade-analysis/tools/assets_tool.py audio --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence
python outputs/tiny-glade-analysis/tools/assets_tool.py audio --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/audio-sample --name animals.assets.bank --extract
```

`textures --all` 提取全部 504 命名纹理的 payload 与 metadata，适用者还产生 DDS；`--png` 开启预览。单个 mesh 可以使用 `mesh <json-path> --out <obj-path>`。单个包清单使用 `manifest <manifest.bin-path>`。完整二进制布局函数还可由 Python 导入调用。

实际验证结论已记录在对应 evidence 和 export JSON。后续未解决范围：资源 ID 的生成规则；32 字节纹理 descriptor 的完整字段声明；prefab 合并执行规则；植被配置 float/array 字段语义；数组与 3D 纹理完整容器重建；FMOD 压缩样本解码。已交付的是可重复的结构解码、提取与证据，不声称这些语义缺口已消失。
