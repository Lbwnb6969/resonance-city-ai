# Tiny Glade 资源语义与可执行恢复

对象：配对主程序 `tiny-glade.exe`，SHA-256 `4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`。本阶段读取实际归档、PDB 对应函数、EXE 指令、Serde 字段字符串；没有启动或修改游戏。

## 本阶段闭合结果

- 621 个纹理归档全部可以生成完整 DX10 DDS，包括 9 个数组与 1 个 3D LUT；mip、layer、depth 与 payload 顺序由原始机器码验证。
- 504 个目录条目的 32 字节 descriptor 字段名、枚举与 native/archive 映射已恢复。
- 5 个 Grass2 配置的 70 个 slot、280 个 exemplar 全部字段和深层 Vec 已解码；17,581,585 个 card point 的三组关联数组数量一致，16,067 个 piece / 13,440 个 piece group 的索引边界全部合法。
- 28 个 prefab RON 中 4 个 default、24 个实际 prefab 均完成解析与目录继承；child 指定字段保留、未指定字段从最近 default 继承，已用原始 POD 与字符串继承函数验证。
- 资源 recipe ID 的最终生成公式已恢复并通过 18 组原始指令模拟；BuildTextureLayer 的 Ready-source 与完整 Windows path file-source 参数流也已闭合。其他 builder 的 Rust Hash 参数流仍需分别还原。

工具是 `tools/recovered_resources.py` 与 `tools/recovered_resources_verify.py`，没有覆盖前一阶段的 `assets_tool.py`。

## 完整 DDS 与数组顺序

原始函数 `rhapsody::raw::texture::impl$14::next`（`0x140e16fc0`）先消耗当前 mip iterator，耗尽后递增 layer 并从原始尺寸重建 mip iterator。`impl$12::next`（`0x140e1e590`）每次将宽、高、深度右移一位并保留下限 1。其 byte count 为块宽数 × 块高数 × depth × block bytes。因此载荷为：

```text
layer 0: mip 0, mip 1, ...
layer 1: mip 0, mip 1, ...
3D 的每个 mip 内：z slice 0, z slice 1, ...
```

最后一行的连续 z-slice byte layout 与非压缩 3D payload / DDS 格式相符；没有将其当作 cubemap。原始迭代器验证实际的每个 mip 体积与顺序；本阶段未单独观察 Vulkan image memory 内部布局。

`tony_mc_mapface` 使用 DXGI `R9G9B9E5_SHAREDEXP`（67），DDS resourceDimension=4、depth=48、arraySize=1。共享指数解码为 `mantissa * 2**(exponent-24)`，三个 9-bit mantissa 依次来自 bit 0、9、18；所有值能以 f32 精确表示。PFM 输出保留 RGB 浮点值，PNG 切片把值限制到 [0,1] 生成预览，不能代替原始 LUT。

已实际生成 10 个复杂纹理 DDS，130 张数组 layer / LUT slice PNG，48 个 LUT PFM，位于 `extracted/reconstructed-textures`。9 个数组的 layer 总数为 82，3D 切片为 48。所有 621 个归档的 DDS 头由独立 consumer 解析，维度一致、数据段逐字节等于原始 payload。

证据：`evidence/reconstruction_resources/verification.json`，621 texture / 6,146 subresource 原始指令 checks；`decompiled3/0x140e16fc0.c` 与 `0x140e1e590.c`。

## TextureAssetList descriptor

每条 64-byte record 的 offset 32 开始是 28-byte archived `TextureOpts`，后接 4-byte `TextureAssetType`。早期报告只保留 u32 原值；现已恢复如下：

|descriptor 偏移|类型|字段及枚举|
|---:|---|---|
|0|u32 Option tag|resize：0=None、1=Some|
|4|u32|resize width，tag=1 时有效|
|8|u32|resize height，tag=1 时有效|
|12|u32 enum|gamma：0=Linear、1=sRGB|
|16|u32 enum|mips：0=None、1=Full、2=Limited|
|20|u32|Limited 的 mip 数值；其他 variant 的 payload 不使用|
|24|u8 enum + padding|compression：0=Default、1=Grayscale、2=NormalMap、3=None|
|25|u8 enum|alpha_mips：0=Average、1=AlphaDistribution|
|26|u8 enum|channels：0=Rgba、1=R|
|27|u8|padding，保留原始值|
|28|u32 enum|texture_type：0=Tex1d、1=Tex1dArray、2=Tex2d、3=Tex2dArray、4=Tex3d|

字段名来自 `TextureOpts::fmt`（`0x14170bca0`）的静态字段 name table；枚举名来自 `0x14170c0d0 / 0x14170c170 / 0x14170c1f0 / 0x14170c220 / 0x14170bd90 / 0x1417dd440` 的字符串/跳转表。native 24-byte TextureOpts 与 archived 28-byte TextureOpts 的 offset 差异由 `resolve`（`0x141db1d20`）建立联系，并对 504 个实际 descriptor 做原始机器码比对。Rust 不活跃 variant payload 与 padding 未当作有效字段验证。

## Grass2 字段与深层 Vec

slot 36-byte record：

|archive 偏移|字段|native 偏移|
|---:|---|---:|
|0|world_albedo_tint：ArchivedString|0|
|8|wind_wave_scale：f32|48|
|12|height_scale_min：f32|52|
|16|height_scale_max：f32|56|
|20|xz_scale_min：f32|60|
|24|xz_scale_max：f32|64|
|28|exemplars：ArchivedVec，112-byte record|24|

这些名字来自真实 `serde_json::serialize`（`0x142704590`），archive→native 对应关系来自 rkyv `deserialize_unsized`（`0x1409071f0`），没有仅凭数值或名词猜测风速/密度。

exemplar 112-byte record：

|archive 偏移|字段|元素布局|
|---:|---|---|
|0|lod0_mesh_name|ArchivedString|
|16|lod0_mesh|u128 recipe ID|
|32|max_y|f32|
|36|card_point_positions|Vec u32，PackedGrass2CardPointPosition|
|44|card_point_plant_offsets|Vec 4-byte packed word|
|52|card_point_pieces|Vec 20-byte：u32 start、u32 count、f32 radius_xz、center_y、half_y|
|60|card_point_piece_groups|Vec 8-byte：u32 first_piece、piece_count|
|68|cull_bounds|3×f32 radius_xz、center_y、half_y|
|80|lod0_parts|Vec 48-byte：u128 color_texture、u128 normal_texture、f32 albedo_style_scale，尾部对齐|
|88|shadow_opacity|f32|
|92|card_point_attrib_indices|Vec u16|
|100|尾部对齐|12 bytes，原归档保留|

字段名来自 `0x142704af0 / 0x142704460 / 0x142704760 / 0x1427049c0 / 0x142710500`；native 对应关系来自 `0x1409073d0`。根 offset 16/32/48 的三个 texture ID 分别是 `card_direction_lut`、`card_point_attrib_palette_albedo`、`card_point_attrib_palette_normal`；根另一个字段是 slots。

证据：`serde_field_evidence.json` 保存 32 个原程序字符串与 CPU 偏移；`foliage_semantics.json` 保存每个 Vec 的 offset/count/stride/bytes/SHA-256；`foliage_relationship_validation.json` 保存引用与索引边界核验。完整实际解码输出 `extracted/foliage_complete.json` 约 1.25 GB，可由工具再生，不适合纳入便携报告包。

packed position 是 4×unorm8，XYZ 是前三个 byte / 255；shader 从 visible instance 的 bounds_x/y/z 分别解包 half2(origin, range)，计算 `origin + unitXYZ*range`。第四 byte / 255 的平方参与风摆与物体推压；其原始 CPU 字段名未取得，工具保留 `channel_w` 语义。packed plant offset 的源 u32 低 16 bit 是两个 unorm8，XZ=`(unit*2-1)*2`，范围 [-2,2]。

CPU `0x1415ea9b0` 把两个 source u32 的低 u16 合为一个 GPU u32；奇数尾项高 u16=0。7 组原始函数模拟覆盖空、奇偶数组、边界值与高位截断。17,581,585 个实际源 offset 的高 16 bit 全为 0。shader `card_splats/000` 的 binding 1/2 及 bitwise/affine 指令支持该解码，完整字段证据在 `grass2_unpack_shader_evidence.json`；可直接复用 `card_point_normalized`、`card_point_plant_offset_xz`、`pack_plant_offset_words`。instance/clump 变换、后续地形/推压与风动画仍是完整草 pipeline 的独立恢复范围。

## Prefab 目录继承

`scan_asset_tree_walker`（`0x141c87390`）每个目录先尝试加载 `default.ron`；成功后调用 `inherit_from(local_default,parent_default)`，随后给同目录普通 RON 调用 `inherit_from(local,parent_default)`，递归子目录时把合并后的 default 作为 parent。代码明确排除把 `default.ron` 注册成实例。

`asset::inheritable::impl$5::inherit_from`（`0x142635370`）处理 parts map；`PrefabRenderConfig`（`0x14270a830`）只对 child 缺省字段克隆 parent 字段；RT POD（`0x14270a6c0`）同样保留 child 指定字段。已用 16 个四字段 presence mask 模拟 RT 原始函数；再用真实 naked_tree/large 的 mesh 与 parent shader 模拟原始 render 继承，并执行原始 String::clone；仅分配与 memcpy/free 是 harness。

实际结果例：`clearing/naked_tree/large` 的最终 trunk render 同时有 `mesh=olden_tree_large` 与 `shader=country_core/clearing/tree_trunk`。24 个 prefab 完整结果与参与合并的 source 文件写入 `prefabs_resolved.json`。

补充恢复 runtime RT config 默认向量：`Inheritable<Option<PrefabRtConfig>>::inherit_from`（`0x14270d410`）在 Specified 配置与 Specified parent 合并后，把四个未指定 vec3 填为 `[1,1,1]`，涵盖 mesh_scale、summer_albedo、autumn_albedo、winter_albedo；原始函数的 16 个 presence mask 全部通过验证。工具 `rt_config_vector_defaults()` 独立提供该物化步骤，目录合并 JSON 保留原配置。原始函数还把 offset 64 的缺省 byte 填 1、offset 65 的缺省 byte 填 0；对应枚举的名字没有取得，未给它们猜测命名。

为闭合这部分仍未命名的状态，`tools/inheritable_state_probe.py` 对原始
`0x14270d410` 做了 4 个 RT vec3 字段各自的 4×4 child/parent 原始 tag
交叉测试，结果保存在 `evidence/reconstruction_resources/inheritable_state_probe.json`
（64 行，EXE 同一 SHA-256）。机器码可观察到的行为是：child raw tag=3
始终原样保留；tag=2 保留自己的 vec3；tag=0 在 parent tag=2 时取 parent
vec3，在 parent 没有具体值时由 native 填 `[1,1,1]`；tag=1 保留自己的
vec3 与 raw tag=1。PDB/二进制没有保存这四个 discriminant 的 Rust 变体
名称，因此工具与报告只使用 `raw_tag_0..3`，不把它们误标成 `None`、
`Inherited` 或其他枚举。该探针是状态转换的原生证据，不等同于对任意
RON 扩展语法的支持。

parser 支持本次 prefab 使用的 RON 结构、map、array、number、string、enum、注释。当前解析/继承覆盖这些已打包的隐式值；`Inheritable` 的其他状态、泛化任意 RON extension 与全量类型默认值物化未实现，不能将本 parser 称为完整 Rust RON/Serde runtime。

## BuildTextureAsset recipe wrapper

The outer `BuildTextureAsset` hash stream is now validated for seven native fixtures: single Ready source, single file source, empty array, one-layer array, mixed source array, reverse source array, and a 12-layer array. `recovered_resources.py texture-asset-id` uses the observed single/array enum tag and the validated layer hash stream; it is no longer an unverified archive-name helper. The native check count is recorded in `recovered_resources_verify.py` evidence. Other asset builders still require their own parameter streams.

## AssetRecipeId 最终生成

已恢复纯函数：

```python
preimage = builder_name.encode('utf-8') + b'\0'
preimage += version.to_bytes(8, 'little')
preimage += parameter_hash.to_bytes(16, 'little')
recipe_id = xxhash.xxh3_128_hexdigest(preimage)
```

证据是 `turbosloth::asset::asset_id`（`0x141747730`）对 Vec 的实际追加以及 XXH3 算法；18 个短、中、长 builder 名/版本/128-bit 参数哈希组合经过原始机器码模拟，与上述实现全部一致。`BuildContext::build<BuildTextureLayer>`（`0x141710980`）实际传 builder 名字符串、version=8 与 `Hash128::finish_128` 的结果。该 caller 的参数流包含逻辑资源名+0xff、source variant、source path 或已有 source asset ID、TextureOpts Rust Hash；恢复最终包装公式不等于每种 builder 输入流都已恢复。

本阶段进一步恢复该 caller 的两个完整输入域：

```text
Ready-source: name_utf8 + ff + u64(1) + source_recipe_id_u128_LE + texture_opts_hash_bytes
File-source:  name_utf8 + ff + u64(0) + windows_path_hash_bytes + texture_opts_hash_bytes
parameter_hash = XXH3_128(上述 stream)
```

TextureOpts 的 Rust Hash 序列由 `0x140905300` 确认：Option resize 的 u64 tag；Some 时写 u64 tuple length=2 再写两个 u32 尺寸；依次 gamma、mips 的 u64 enum tag，Limited 另写 u32 limit；最后 compression、alpha_mips、channels 各一个 u64 enum tag。针对本次全部 21 种实际 descriptor 值组合以及 1 个补充分支 fixture，原始 Hash 调用的每个输入字节均与实现匹配。

Windows PathBuf::hash 的 `0x1417ce070` 已扩展到 Rust 1.95 Windows 的 Disk、UNC、DeviceNS、Verbatim、VerbatimDisk、VerbatimUNC 六类 prefix。普通路径将 `\\` 与 `/` 视为 separator，跳过空 component 与内部 `.`；verbatim 路径只把 `\\` 当 separator、保留 `.`。每个有效 component 写入原 UTF-8/WTF-8 bytes；状态初值 0，每个 component 更新 `state=rotate_right_u64(state+byte_length,2)`，最后写入 state 的 u64 LE。prefix 先写其 Rust Prefix discriminant（Disk=5、UNC=4、Verbatim=0、VerbatimDisk=2、VerbatimUNC=1、DeviceNS=3），再写 prefix component length+bytes。41 个真实原始 EXE fixture 覆盖盘符相对/绝对、UNC、Device、Volume、Malformed prefix、中文和混合 separators，全部一致。

7 组 Ready-source、41 组 file-source（含空 path、slash/backslash、dot、parent、UTF-8、全部 Windows prefix）在原始 BuildContext::build 控制流中捕获 Rust Hash write bytes，最终 asset_id 参数也一致；完整 recipe native checks=48。此 oracle 对 registry guard 与内存服务使用 harness，哈希组合阶段另有原始 streaming Hash128；它没有执行整个 asset 构建/加载流程。

为闭合哈希组合，补充执行原始 `Hash128::default / write / finish_128`：9 个输入长度覆盖 0/1/63/64/239/240/241/512/2048 bytes，按 73-byte 分段写入，全部与 XXH3-128 相同。随后 19 个 Ready/file recipe fixture 再执行原始 BuildContext::build、真实流式 Hash128、真实 asset_id，到 asset_id 返回后停止；完整原始哈希结果与可复用工具一致。此第二阶段仅 stub registry guard 与 allocator/memcpy/memset/free，并在模拟内存的 feature cache 选择 SSE 路径，没有替换哈希计算，也没有执行 asset IO 或游戏引擎。

PathBuf 的定向 Ghidra 输出遇到 bad instruction / jumptable sanity truncation，已隔离到 `deprecated/reconstruction_resources/path_hash_incomplete`；恢复使用 `path_hash_assembly.txt` 与原始机器码流捕获，未用错误伪代码冒充完整实现。

`AssetContentId::from_bytes`（`0x141c2d770`）tailcall `0x142570fc0` 的 XXH3-128；DiskStore::store 的代码另外生成 content ID，与 recipe ID 分开存放。因此包文件名不能称为 archive 裸内容哈希；以前针对 BLAKE3/裸 XXH3 不匹配的观察有这个结构性解释。

## 复现

```powershell
$env:PYTHONPATH=(Resolve-Path 'work/python-deps').Path
python outputs/tiny-glade-analysis/tools/recovered_resources_verify.py --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence/reconstruction_resources/verification.json
python outputs/tiny-glade-analysis/tools/recovered_resources.py textures --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/all-dds --all --include-foliage
python outputs/tiny-glade-analysis/tools/recovered_resources.py foliage --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/extracted/foliage_complete.json
python outputs/tiny-glade-analysis/tools/recovered_resources.py foliage --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence/reconstruction_resources/foliage_semantics.json --summary
python outputs/tiny-glade-analysis/tools/recovered_resources.py prefabs --root 'C:/Steam/steamapps/common/Tiny Glade' --out outputs/tiny-glade-analysis/evidence/reconstruction_resources/prefabs_resolved.json
python outputs/tiny-glade-analysis/tools/recovered_resources.py asset-id --builder 'asset_pipe::texture::BuildTextureLayer' --version 8 --parameter-hash 00000000000000000000000000000001
python outputs/tiny-glade-analysis/tools/recovered_resources.py texture-layer-id --name black --source-path 'assets/black.png' --descriptor '[0,0,0,1,1,0,0,2]'
```

普通 parser 只需标准库与同目录 `assets_tool.py`；asset-id 需要 `xxhash`，PNG 需要 Pillow，native verifier 需要 pefile / unicorn / xxhash。所有命令拒绝把输出写进游戏目录。

BuildTextureAsset 的外层 recipe 也完成：`texture_asset_recipe_id()` 按 Single=0 / Array=1 变体序列化 layer desc；7 个完整原始 fixture（Single Ready/File、empty/one/mixed/reverse/12-layer Array）通过 BuildTextureAsset→真实 Hash128→asset_id，`texture_asset_recipe_native_checks=7`。Array layer 顺序是输入顺序，空 array 也保留有效 recipe。对应 native 入口为 `0x141711ee0`，单/数组构造函数为 `0x140d9d030 / 0x140d9d070`。

下一入口：完整 Grass2 instance/clump/风动画 pipeline；`Inheritable` 其他状态与完整类型默认值。已解决的是实际格式、字段、顺序、指定范围的继承与 TextureAsset/TextureLayer recipe，不声称全部游戏行为已还原。
