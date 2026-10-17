# CPU 原生程序、建造与加速结构

## 身份与方法

主程序为 x86-64 PE32+，65,612,184 字节，image base 0x140000000，SHA-256 `4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`。没有 CLI/.NET 元数据；Cargo、PDB 函数及编译器记录共同确定 Rust 原生路线。REA PE 资源树证据 `ev_fddf5317e29e218717346c091587e9019f18dc5ce152e34ec9bc82b021a60396` 确认此 EXE 没有 PE 资源目录，不能用 PE 图标树解释外置 assets/window_icon.png。

PDB GUID/age 和 EXE RSDS 完全匹配，详见 pdb.md。所有原地址均为本次匹配构建的 VA；ASLR 运行地址不是这些固定地址。

REA/Ghidra 的默认全程序自动分析长时间运行并产生错误的控制流解码，没有得到完成的 overview；该分析已结束并关闭 session，未将部分结果当作完成证据。之后使用匹配 PDB 范围、70,804 个 callee 起始边界和独立 Capstone 指令做定向分析。脚本 `tools/PdbFocusedDecompile.java` 与目标 TSV 可复现这一路径。

共输出 28 个定向函数的 Ghidra 伪代码；其中 3 个大型载入/快照选择函数出现坏指令、重叠指令与错误 PIC 流，移入 `deprecated/limited-pseudocode`。剩余 25 份仍是缺少 Rust 字段类型/签名的伪代码，包含全局符号、终止函数或类型传播限制；不能当作原始 Rust 源码。所有质量信息在 `evidence/focused_decompile_quality.json`。`evidence/native` 的独立机器码/operand 记录和完整静态调用 SQLite 用于核对。

## 程序结构

本程序使用 Bevy ECS 作为实体、资源、查询和调度基础。渲染由 rhapsody/raw/rg 及 ash/Vulkan 相关路径承担，UI 有 egui 与项目 GUI/toolbar/onboarding crate。单独使用 ECS 不等于使用 Bevy 的完整渲染引擎。具体依赖版本见 assets_dependencies.json；DLL 导入见 pe_overview.json。

系统以墙构造、屋顶、装饰、树、水、杂物、动物、颜色、工具栏分别组织；PDB 恢复的项目源文件分组提供模块边界，直接调用边提供函数连接。用户输入→History edit→replay/资源状态→几何/实例 buffer→render graph 是综合这些证据的架构推断；本次没有观察完整游戏运行调度。

## 两个已数值验证的屋顶公式

### 屋檐长度

`RoofShapeParams::eave_length_ws`，VA 0x140b76870，62 字节。机器码从参数结构 +8 / +0x14 读取两项 float，执行 sqrt、SSE lane 组合及常量 1.5 / 0.5。结合匹配函数身份和存档参数命名，恢复为：

```text
eave_length_ws = 0.75 × eave_length_01 × (1 + sqrt(height_01))
```

字段语义是由函数和存档对应的推断，内存偏移及运算本身是机器码观察。

### 矩形比例决定初始屋脊参数

`ridge_length_01_from_rectangle_ratio`，VA 0x140b770a0，205 字节。对有限、正的宽高：

```text
C(x) = clamp(x, 0, 1)
S(x) = x² × (3 − 2x)
aspect = max(width / height, height / width)
size_bias = S(C((max(width, height) − 2.25) / 5.25))
ridge_01 = S(C((aspect + 1.5 × size_bias − 1.5) / 1.5))
```

这证明屋脊参数同时依赖长宽比和尺寸，不是仅 aspect ratio 的固定线性映射。所有常量地址及原始字节可在对应 function.json 的 rip_references 中查到。

`tools/roof_math.py` 保存恢复公式并用 Unicorn 在隔离地址空间执行原始两段机器指令；只映射 PE 字节与人工参数/栈，没有调用 Windows API或启动游戏。25 组屋檐＋35 组矩形输入均通过，最大绝对误差 `9.523191568661105e-08`，阈值 `2e-6`。报告 `evidence/roof_math_verification.json` 保留每个输入、原机器码模拟值与公式值。结果只验证这两个数值函数及这些输入，不等于屋顶生成整体等价。

## 屋顶创建、形状与瓦片

0x14280dd10 create_roof 的直接调用依次连接 PublicWalls::get、PublicWallState::max_y、WallMaterial::gable_roof_style、Roof::new、RoofTileSimulation::new、RoofTriggerVolume/Animation 默认构造及 Commands::spawn。spawn 的原始实例化类型包括 Roof、RoofTileSimulation、RoofTriggerVolume、RoofAnimation、RoofTiles、RoofSpire、RoofSupportBeams、StoneFloorInstanceData。这是生成实体组件和关联墙状态的实际调用证据。

0x141f46490 assemble_roof_tiles 读取 Roof::is_flat / PublicWalls::get，清空 SparseInstanceBufferWriter<RoofTileSsbo>，并分别直接调用矩形构造器 0x142812c70 与圆形构造器 0x142816ba0。原始调用链与参数化的 snapshot wall_shape Circle/Rectangle 对应。两个构造器的完整机器码和伪代码已保存；圆形路径直接使用 RoofBoundsDims::as_circle、profile_curve_normalized、profile_curve_ws 与高度/弧线采样，矩形路径读取屋檐、gable_sides、形状与 profile 曲线并遍历放置。完整瓦片间距、随机扰动及裁切公式尚未逐 SSA 重写。

辅助函数已有定向伪代码：RoofRidgeDims::calc/inverse/to_world_space、profile_curve_ws、roof_height_ws_from_wall_shape、roof_shape_at_intersection_y。它们可作为下一次逐函数还原的入口；未数值验证的输出不能与上面两公式等同。

## 墙与曲线

系统 `system_wall_constructor::construct_walls`（0x140808800）有独立 PDB 函数范围；木墙子模块包含 plan_vertical_wall_boards、plan_horizontal_wall_boards、subtract_wall_cutouts、arch_openings_to_aabb2、split_oversized_board_piece。这些函数名是身份观察，尚未对全部墙构造做高层语义还原。

已定向分析 `replay_wall`（0x141c24750）和 `InProgressCurve::compute_final_curve`（0x140bec4b0），并保存机器码及伪代码。保存样本有墙的几何曲线、封闭形状和 compound 编辑序列，提供可检验的输入形态。没有声称完整实现撤销、实时墙孔切割或默认 prefab 合并规则。

## CPU BVH 构建与 GPU 对应

`country_core::resources::rt::bvh::build_gpu_bvh`（0x140c5d4d0，1,232 字节）实际直接调用 `obvhs::cwbvh::builder::build_cwbvh_from_tris`（0x141c88ad0，2,372 字节）。后者的机器指令存在以下顺序的直接 call：

```text
split_aabbs_precise           0x141c89420
PlocSearchDistance::build     0x142636550
ReinsertionOptimizer::run     0x14263d7c0
bvh2_to_cwbvh                 0x14263fe50
```

转换器再调用 Bvh2Converter::new、calculate_cost_impl、convert_to_cwbvh_impl。因此此 CPU 路径包含 AABB splitting、PLOC 构建、重新插入优化和压缩宽 BVH 转换。直接调用的存在与相对指令顺序已确认；是否走到每一项、运行参数、更新频率与分支选择需要额外数据流/运行证据。

该路径与 shader 中的 80 字节宽 BVH 节点、24 字节半精度压缩边三角形、Workgroup/局部遍历栈形成 CPU/GPU 互证，见 shaders.md。没有据符号名声称它调用硬件 ray tracing API；已交付着色器的实际路径是软件遍历。

证据：`core_cpu_paths.json`、`native/0x140c5d4d0`、`native/0x141c88ad0`、`native/0x14263fe50`、`extra-decompile`、`shader_core_paths.json`。

## 工具

`native_inspector.py`（pefile＋capstone）导出 PE 区段/导入/RSDS、PDB 范围汇编、direct call/jmp 和 RIP 数据引用。`native_graph_query.py` 从只读 SQLite 查询所有函数的 callers/callees；它是静态 direct-call 索引，间接目标保持未解析。`PdbFocusedDecompile.java` 在独立 Ghidra project 中创建匹配 PDB 函数范围，原始 EXE 字节不变。

```powershell
python tools/native_inspector.py overview 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out new-pe-overview.json
python tools/native_inspector.py function 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --symbols evidence/pdb_symbols.jsonl --address 0x140b770a0 --out new-ridge-disassembly
python tools/native_graph_query.py evidence/native_callgraph.sqlite --name build_gpu_bvh --direction callees --limit 30
python tools/roof_math.py --verify 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out new-roof-verification.json
```

所有地址与恢复公式绑定当前 EXE 摘要。游戏更新后先重新验证 EXE/PDB 身份，不能把旧地址直接当作新构建的函数。
