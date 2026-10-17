# Tiny Glade 着色器容器与渲染算法逆向

## 覆盖与证据边界

本报告直接读取 `C:/Steam/steamapps/common/Tiny Glade/compiled-shaders`。安装目录未改动，未运行游戏。结论为静态制品证据；不能把存在的 shader 当作某次运行实际执行的 pass。

**所有 303 个 `.precomp` 已结构化解析到 EOF，并重新编码后逐字节等于原文件。** 总输入 8,437,013 字节，471 个编译变体，670 个 SPIR-V 模块，563 个不同模块 SHA-256。全部 SPIR-V 1.3，所有 `OpSource` 均为 `Slang 1`。全部 378,762 条指令已按 Khronos grammar 解码，没有未知 opcode，没有失败样本。

执行模型：200 Vertex、199 Fragment、271 GLCompute。数量包含同一管线的不同变体及重复模块，不能直接当作运行时 pass 数。200/199 的差值来自存在单独 vertex 阶段的容器，解析器没有补造 fragment。

| 容器目录 | 文件 | 变体 | SPIR-V 模块 |
|---|---:|---:|---:|
| country-core | 259 | 378 | 575 |
| rhapsody-core | 11 | 49 | 50 |
| rhapsody-deferred | 1 | 1 | 1 |
| rhapsody-dof | 11 | 16 | 16 |
| rhapsody-gi | 8 | 8 | 8 |
| rhapsody-post | 2 | 2 | 2 |
| rhapsody-shadow | 2 | 2 | 2 |
| rhapsody-taa | 6 | 12 | 12 |
| clutter-icon-pipe | 3 | 3 | 4 |

`tiny-glade`、`grass2-shader` 目录存在列表/依赖记录，但本次没有 `.precomp`。目录名称是分组线索，执行模型、类型和访问指令才是算法证据。

证据文件：

- `evidence/shader_decode/shader_containers.json`：所有容器字段、字节区间、源文件 SHA-256、每阶段 SPIR-V 区间。
- `evidence/shader_decode/spirv/`：670 个原始 `.spv`，按原始容器路径和阶段出现顺序保存。
- `evidence/shader_reflection/shader_reflection.json`：入口、执行模式、变量、绑定、类型、成员布局、常量、capability、指令频次。
- `evidence/shader_reflection/instructions/`：完整指令的 byte offset、opcode mnemonic 与原始 operand words。
- `evidence/shader_reflection/assembly/`：670 个 grammar 解码 `.spvasm`，保留 numeric IDs、枚举、字符串及原始字节偏移。
- `evidence/shader_validation.json`：670 个阶段、工作组以及 3,647 个实际 SPIR-V 绑定的容器交叉验证，无错误。
- `evidence/shader_core_paths.json`：18 个核心模块的静态访存来源、循环结构、GLSL 数学操作、解码常量和关键类型。

以下路径均相对交付目录。它们是可直接重跑的本地证据，不是 REA session Evidence IDs；并行任务没有切换父任务的 REA active target。

## `.precomp` 二进制格式

本样本族没有独立 magic/version 头，首字段是 program 数量。所有固定宽度数值 little-endian。`string = u32 UTF-8字节数 + 原始UTF-8字节`；`Vec<T> = u32数量 + T重复`；`Option<T> = u8(0/1) + 有值时的T`。字符串没有补齐，SPIR-V 常常不在文件的 4 字节对齐地址。

```text
Container = Vec<Program>
Program = name:string
          parameter_definitions:Vec<(string,string)>
          variants:Vec<Variant>
Variant = parameter_values:Vec<(string,string)>
          name:string
          stages:Vec<Stage>
          modules:Vec<Module>
          push_constant_size:u32
Stage   = stage_tag:u32       # 0 compute / 1 vertex / 2 fragment
          spirv_word_count:u32
          spirv_bytes:word_count * 4
          workgroup:Option<(u16,u16,u16)>
          vertex_inputs:Vec<VertexInput>
VertexInput = name:string, location:u32, type:Type, active:u8
Module  = module_tag:u32, name:string, descriptor_set:u32
          descriptors:Vec<Descriptor>
          blocks:Vec<Block>
Descriptor = binding:u32, resource_kind:u32, array_kind:u32
             if array_kind==0: count:u32
             if array_kind==1: 无固定数量字段
             name:string
Block = binding:u32, name:string, size:u64, fields:Vec<Field>
Field = name:Option<string>, offset:u64, type:Type
```

容器 `Stage.stage_tag` 与每份 SPIR-V `OpEntryPoint` 模型逐一匹配；271 个 compute 的 workgroup 全部与 `OpExecutionMode LocalSize` 匹配。常见工作组为 `8×8×1`（149 模块）、`64×1×1`（81）、`512×1×1`（9）；不能从线程数量推断运行 dispatch 数量。

`VertexInput.active` 与 SPIR-V 输入 location 的存在关系完全吻合：477 个值 1 均实际声明该 location；16 个值 0 均未声明。模块 tag 仅出现 0/1：其区分自身入口模块和共享模块的解释与样本相符，但二进制枚举原始 Rust 类型名尚未从 CPU 反编译确认，工具保留 raw tag。

resource_kind 在本样本中出现 0/1/3/4/5。结合 SPIR-V `OpTypePointer`、`OpTypeImage.Sampled`、Block/BufferBlock 的布局，分别对应 storage buffer、uniform block、storage image、sampled image、sampler。array_kind=1 的 bindless 资源有运行时数组；58 个模块实际声明 `RuntimeDescriptorArray` / `SampledImageArrayNonUniformIndexing` / `ShaderNonUniform` capability。

递归 Type 格式：

| tag | 格式 |
|---:|---|
| 0 | scalar |
| 1 | scalar + lanes:u32 |
| 2 | scalar + rows:u32 + columns:u32 + Option<u32> + Option<u64> |
| 9 | element:Type + length:Option<u32> + stride:Option<u64> |
| 10 | name:Option<string> + fields:Vec<Field> |
| 13 | element:Type（device-address pointer） |

scalar 为 enum:u32；1=bool（无 width 字段）、2=signed int、3=unsigned int、4=float，后三者接 width:u32。本样本的 3,859 个 matrix 字段均为 float32 4×4，末尾两个 Option 的值为 0 和 64。其语义与 row-major 布局、矩阵总字节数相符，但工具以 `metadata_u32/metadata_u64` 保存，避免把尚未验证的格式语义硬编码成事实。SPIR-V 本身保留了 `RowMajor` 和 `MatrixStride 16`，真正访问布局应以该证据为准。

110 个容器定义特化参数。例：T G S R 定义 `use_sharpen:bool` / `wave32:bool`，4 个值组合对应 4 个完整 compute 模块，不是仅运行时 `OpSpecConstant`。大量材质的 `ShaderMode:String` 有两个变体。末尾 push_constant_size 范围为 0/4/8/12/16/20/24 字节，与实际 PushConstant 声明相符。10 个阶段没有使用容器声明的 push constant；这是阶段/变体的未用字段，验证结果单列记录，没有当作损坏数据。

## 核心算法：从实际指令得到的结论

### 地形笔划 rasterize_terrain_stroke

证据：`assembly/country-core/compiled/terrain_editing/rasterize_terrain_stroke/000.spvasm`；其 SPIR-V 内部 byte offset 作为以下定位基准。

这是 `8×8×1` compute。全局块包括 `stroke_width`、`stroke_infos_device_address`、`stroke_count` 及输出尺寸；实际内存模型是 `PhysicalStorageBuffer64 GLSL450`，pointer 类型是 PhysicalStorageBuffer，容器 Type tag 13 指向 uint4。该 shader 确实读取 CPU 提供的设备地址数据，不能把它解释成一般 uniform 数组。

实际输入为 water_mask `(set0,binding5)`、bg_terrain_heightmap `(0,6)`、sampler `(2,5)`。四个 image store 目标分别是 img_output `(0,1)`、stroke_indices `(0,2)`、rocky_terrain `(0,3)`、terrain_sdg `(0,4)`。末尾写入位置在 `0xfc04 / 0xfc40 / 0xfc7c / 0xfce0`；第二个输出复用整数 stroke_index，第三/四个输出保存多个通道的岩石/距离场属性，并非一个 mesh 生成器。

`group_min_dist` 是 Workgroup 变量。`0x206c` 设置组内屏障，`0x26a0` 执行 `OpAtomicUMin`，`0x26bc` 再次屏障，之后读取该最小值。这个路径证明线程组协同归约距离/筛选信息，而非每个 texel 完全独立处理。43 个 `OpLoopMerge` 包括大量内联展开后的噪声/笔划循环，不能把 43 解读成“每像素处理 43 个笔划”。

保留值名 sdf / sdf_heightmap / sdf_heightmap_noise / slope_angle，并实际执行 18 次 Dot、12 次 Length、16 次 FClamp、6 次 Pow、6 次 SmoothStep、8 次 Floor/Fract及1次Tan。以这些计算与四路输出交叉验证，可判定该路径把笔划/坡度/噪声距离场转换为高度图和岩石属性。精确的 stroke 输入结构以及全部混合权重仍需恢复 CPU 构造器或继续逐 SSA 翻译；报告不把变量名当作完整公式。

### 鼠标地形命中：固定步进而非二分

证据：`assembly/country-core/compiled/mouse_terrain_raycast/000.spvasm`。compute 工作组 `1×1×1`。仅一个循环，直接读地形高度采样并写结构化缓冲 `my_buffer (set0,binding2)`，另读 `stroke_indices (0,1)`。

以下公式可由指令直接重建，`o` / `d` 对应全局块两项 float3：

```text
upper = o + d * ((24 - o.y) / d.y)
lower = o + d * ((0  - o.y) / d.y)
step  = length(lower - upper) * 0.001
p = upper
最多 1000 次：
    next = p + d * step
    uv = next.xz * (1 / 130) + 0.5
    height = mix(-2.5, 24, terrain_heightmap.sample_lod0(uv).r)
    若 next.y < height：退出
    p = next
最终写出 p，并用 p.xz 的网格坐标读取 stroke_indices
```

证据常量：24=`0x41c00000`、−2.5=`0xc0200000`、1000=`0x3e8`、0.001=`0x3a83126f`、1/130=`0x3bfc0fc1`。初始化 `0x908–0xa40`；循环与上限 `0xa64–0xadc`；高度采样及比较 `0xb70–0xc40`；输出 `0xd30–0xde0`。退出后写的是循环 Phi `%216`，即越过高度面之前的 `p`，不是被比较的 `%77 next`。输入方向是否已归一化须由 CPU 调用侧确认；本 shader 没有归一化，也没有独立 hit bool 输出。

### 草：烘焙网格输入＋运行变形＋GPU 筛选

`grass2/lod0/000.spv` 是 vertex。实际加载 Baked_Position/Normal/Dpdu/Dpdv/BladeLocalHeight/BladeSeed/PlantOffsetXZ/PartIndex，加载实例间接表、实例数据、exemplar_materials，并实际采样草删除 mask 与 terrain heightmap。其 FrameConstants 确认含 time_since_startup_secs（offset128）、game_time_sec/frac（152/156）、wind_strength（308）；材质含 wind_wave_scale（8）、height/xz scale min/max（16/20/24/28）。

该 vertex 执行 Sin 2、Cos 1、Fract 4、FMix 6、Normalize 2，并写出 blade_local_height / lod_transition_t / blade_seed / frag_position_ws 等 varying。证据支持烘焙叶片几何的实例化、地形贴合及按时间/种子变形；不支持声称所有草几何仅由 vertex shader从零生成。

`grass2/lod0/001.spv` fragment 读取 part material 的 color/normal texture，实际走 bindless 资源采样，读取 LOD transition 和 frame counter，输出 gbuffer。该路径可确认材质纹理/法线/LOD混合在 fragment 完成。阴影变体的 CPU 选择顺序仍需管线状态证据。

`grass2/build_draws/000.spv` 为 compute：实际读取 plant_sample_map、水mask、地形、path_mask、exemplar_params，执行3个AtomicIAdd，写 clump_attribs、active_count、active_instances。这是 GPU 草实例筛选/分配证据。`nani/cull_and_bucket/000.spv` 实际2个AtomicIAdd、1个AtomicOr，读写 previous/next visibility bitmask、filtered_instance数据和output_histogram；`nani/generate_draw_lists/000.spv` 有4个AtomicIAdd、3个ControlBarrier，输出类型含 `DrawIndexedIndirectCommand_natural`。据此可以构建“筛选/分桶→前缀/列表整理→间接绘制命令”的 GPU 管线解释；实际 dispatch 时序仍由 CPU command recording 决定。

### GI / 水反射：计算着色器的软件 BVH 遍历

核心证据是 `country-core/compiled/gi/trace_gi_candidates/000.spv`，不是仅其文件名。入口为普通 GLCompute，8×8×1，20个循环，读取 half_depth/half_normal、reprojection、taa_history、blue_noise，写 candidate_radiance_tex / candidate_hit_tex。

它实际读 `rt_scene.rt_bl_bvh (set24,binding2)`、`rt_scene.rt_triangles (24,3)`、`rt_scene.rt_triangle_meta (24,1)` 并使用 `rt_lds_stack` Workgroup栈。节点数据为5个uint4，runtime array 的 `ArrayStride 80`；三角形为float[3] + uint[3]，成员 offset0/12，`ArrayStride 24`。节点5次uint4加载 `0xa89c–0xa98c`；随后连续 shift/mask（含字节掩码）、量化值转float、乘scale、加origin、FMin/FMax与区间比较，并构造命中bitmask。这是压缩宽BVH包围盒遍历的实际运算证据。

三角形加载 `0xcf20–0xd024`；三个 uint edge words 在 `0xd070/0xd088/0xd0a0` 通过 `GLSL.std.450 UnpackHalf2x16` 解出6个half分量。后续 Cross/Dot、除法和重心坐标 `u,v,1-u-v` 比较用于三角形相交（`0xd328–0xd3e8`）；命中法线 Cross 在 `0xd48c`。弹栈路径 `0xd588–0xd688` 根据栈深选择 Workgroup栈或局部数组。这些操作足以确认该模块手工处理 BVH 与三角形求交，不依赖仅命名推断。

全部670个模块的 capability/opcode扫描中没有 RayTracingKHR、RayQueryKHR、OpTraceRay、OpRayQuery 类指令。**对这批已交付 shader，可确认 RT 路径使用普通 shader的软件遍历。** 这项负面结论严格限定 compiled-shaders，不能排除 executable 动态生成其他 shader或其他版本硬件分支。

`primary_rt_debug`、`water/deferred_rt`、`water/ice_deferred_rt` 也加载同样80字节BVH/24字节triangle布局，存在同类位解码与交叉/重心相交路径。水路径额外读取 water_rt_count / water_rt_ray buffer、历史/深度重投影与体积雾相关纹理，用Reflect、Exp/Exp2、FMix输出反射贡献。场景 BVH 在 CPU 何时重建、采用哪种 builder、编辑后是否局部更新，目前未从 shader证明。

### 时间抗锯齿、超分与笔触

`rhapsody-taa/taa` 实际读 color/history/reprojection/current_view，使用history_uv、nmin/nmax、clamp_dist、blend_factor等SSA值，ImageWrite两个目标并进行组内亮度tile屏障。这支持历史重投影＋邻域限制＋输出历史的时间积累算法。`tgsr` 的不同变体实际读 luminance/chroma/history/aux、执行ImageGather/GroupNonUniformShuffle，并写 history_output / output / aux_output三个纹理；`use_sharpen`、`wave32`已由容器参数矩阵验证。

`painterly/generate_strokes` 工作组32×1×1，实际采样 target/depth_target并写 strokes_buf，执行位置/尺寸/旋转计算，保留 coc_norm、base_rotation、size_mult_log。其路径支持从颜色深度生成笔触实例；有独立 raster_strokes shader说明另有光栅阶段，但目前没有以 CPU 调度证明最终画面一定经过该模式。

## 重跑工具与验证

工具仅使用 Python 标准库，已经用 `D:/PythonCore/python.exe` 在本机运行。路径应在交付根目录运行：

```powershell
D:/PythonCore/python.exe tools/shader_precomp.py 'C:/Steam/steamapps/common/Tiny Glade/compiled-shaders' --output evidence/shader_decode --extract
D:/PythonCore/python.exe tools/shader_spirv.py evidence/shader_decode/spirv --output evidence/shader_reflection --instructions --assembly
D:/PythonCore/python.exe tools/shader_verify.py evidence/shader_decode/shader_containers.json evidence/shader_reflection/shader_reflection.json --output evidence/shader_validation.json
D:/PythonCore/python.exe tools/shader_trace.py evidence/shader_decode/spirv --match 'mouse_terrain_raycast/' --match 'terrain_editing/rasterize_terrain_stroke/' --match 'gi/trace_gi_candidates/' --output evidence/shader_core_paths.json
```

首次命令：303文件解析/重编码/EOF全部通过；第二条：670模块全部解码并生成完整text/assembly；第三条：stage/workgroup/hash/3647绑定匹配，无issues。第四条可按 `--match` 自主聚焦；交付已有18模块宽于示例命令。

没有发现 `spirv-dis`、`spirv-cross`、`glslangValidator` 在 PATH，也没有 C:/VulkanSDK、C:/Program Files/VulkanSDK、C:/tools、D:/tools。未安装SDK。工具使用交付的Khronos原始 grammar生成文本；`.spvasm` 的常量保留原始hex位串，未通过外部 spirv-as/spirv-val验证，也未产出GLSL高层反编译。完整原始word listing和SPIR-V保留，后续可直接交给这些标准工具。

grammar取自 [Khronos SPIRV-Headers core grammar](https://github.com/KhronosGroup/SPIRV-Headers/blob/main/include/spirv/unified1/spirv.core.grammar.json) 与 [GLSL.std.450 grammar](https://github.com/KhronosGroup/SPIRV-Headers/blob/main/include/spirv/unified1/extinst.glsl.std.450.grammar.json)，交付副本和SHA见 `evidence/shader_summary.json`。联网仅获取格式说明，没有上传游戏二进制。

## 已回答与剩余范围

已回答：全部容器的字节语法和可逆提取；全部 SPIR-V 声明/入口/绑定/类型/指令；核心鼠标地形步进公式；地形笔划的设备地址/协作归约/多输出数据流；草材质、实例化及间接命令；软件BVH布局与三角形半精度edge求交；时间积累/超分、笔触shader的资源数据流。

部分回答：地形全部噪声/混合数学公式、草全部风摆曲线、GI完整采样策略与光照权重、T G S R完整滤波核。它们的完整SSA指令已交付，但没有逐行高层重写。

未由本子任务回答：CPU渲染图及dispatch顺序、BVH生成器、CPU/shader结构传入、材质纹理/mesh源制品解码、实际运行质量档位与模式。应与父任务CPU/资源证据合并，不能把本报告全量容器覆盖写成整个游戏源码完整恢复。
