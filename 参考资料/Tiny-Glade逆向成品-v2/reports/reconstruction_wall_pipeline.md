# 完整墙板规划、世界坐标孔洞与楼梯场景查询

本轮将上一阶段的 12 个计算内核接成了完整规划及场景查询接口。`plan_horizontal_wall_boards`、`plan_vertical_wall_boards` 已从原函数入口跑到输出，包含原窗口/arch 数据提供者、世界坐标→wallspace 映射、合并、排序、细分、窄残片修正。楼梯链条扩展到 `support_station_at`，并恢复 packed terrain 采样和非空 Rapier 场景输入。现在工具能从三角网格/盒子构建原生查询，也能完全脱离 EXE 独立查询和计算楼梯支撑站。

原程序 SHA-256 仍是 `4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`。本报告对应第二阶段；第一阶段的 342 组证据保持原样。

## 使用入口

纯 Python 接口只依赖标准库：

```python
from recovered_scene_query import Scene
from recovered_stair_terrain import Terrain512, support_station_at
from recovered_wall_mapping import plan_wall_boards_from_world

scene = Scene.from_json('scene_query_example.json')
hit = scene.cast_ray((0, 3, 0), (0, -1, 0), max_t=100, mask=0x202)
terrain = Terrain512(samples, low=-2.3, high=4.1, texel_center_mode=True)
station = support_station_at(position, points, widths, tangents, terrain,
                             raycast=scene.ground_provider)
pieces = plan_wall_boards_from_world(
    regions, spacing, horizontal, curve, openings, holes, bottom_y,
    wall_length, freeform, expanded_length, samples=wall_samples,
    closed=True, cap_y=2.9, original_rectangle=original,
    expanded_rectangle=expanded)
```

`tools/recovered_wall_planners.py` 提供区域合并、窄板修正和完整 planner 的 pre-remapped cut 入口。`tools/recovered_wall_mapping.py` 提供 Curve2 / Rectangle2、完整孔洞映射和 world planner。`tools/recovered_stair_terrain.py` 提供 Terrain512、GroundHit、地形和完整支撑站。`tools/recovered_scene_query.py` 提供 Collider、Scene、Hit 和可独立运行的 CLI。

原始机器码接口与独立实现明确分开：

```python
from pathlib import Path
from raycast_scene_oracle import NativeSceneOracle

oracle = NativeSceneOracle(Path('C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe'))
oracle.build_scene(scene.colliders)
original_hit = oracle.cast_ray((0, 3, 0), (0, -1, 0), max_t=100, mask=0x202)
```

`build_scene` 支持任意有限、有效的三角网格顶点/索引，以及 unit-quaternion 变换的 cuboid。TriMesh、ColliderBuilder 由 EXE 原指令创建；原查询继续执行 Rapier、QueryPipeline、QBVH 和 shape cast。这里只有内存管理、Vec 容量扩展、内存拷贝和有限 CRT 运算的适配器，没有替代几何、BVH 查询或命中结果。

```powershell
python outputs/tiny-glade-analysis/tools/recovered_scene_query.py --scene outputs/tiny-glade-analysis/evidence/reconstruction_wall_stairs_planners/scene_query_example.json --ray 0 3 0 0 -1 0
python outputs/tiny-glade-analysis/tools/raycast_scene_oracle.py 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --scene outputs/tiny-glade-analysis/evidence/reconstruction_wall_stairs_planners/scene_query_example.json --ray 0 3 0 0 -1 0
```

示例场景返回 collider=1、tag=1、flag=0、TOI=2、position=(0,1,0)。JSON 中 `kind=mesh` 使用 vertices/indices，`kind=cuboid` 使用 half_extents；共有 layer/tag/flag/center/rotation_q。tag/flag 是原查询复制的游戏碰撞 metadata 字节，工具没有根据形状类型重写它们。

## 完整墙板 planner

原入口 `0x1414877d0`（水平，2,794 字节）和 `0x141485b80`（竖直，5,115 字节）执行如下链条：

```text
window-hole records + world arch samples
  → remapped_wall_cutouts
  → subtract_wall_cutouts
  → merge adjacent same-X / same-Y regions
  → float32 total-order sort by minX, then minY
  → subdivide region into planks
  → merge narrow fragments using largest overlap
  → final sorted 40-byte plank records
```

水平规划将同 X 范围、相同 region flag、相同 identity 的 region 沿 Y 合并；竖直规划将同 Y 范围的 region 沿 X 合并。端点容差为 float32(0.01)，邻接轴接触容差 float32(0.001)。tag=0 类别忽略 key；tag=1 类别要求 key 相等。合并需要反复扫描以吸收间接相连的片段。

水平规划始终水平细分；竖直规划调用上一阶段恢复的 `classify_region_orientation`，其返回值决定每个 region 的细分方向。输出 +32 byte 改为该板的方向，+33 byte 保存原 region 的 +32 flag。这两个 byte 分别核对，六个未解释 padding byte 不纳入比较。

窄板条件是对应维度小于 float32(0.1)。水平修正窄高度，竖直修正窄宽度；候选邻板需要身份/方向兼容，并在窄轴上距离不超过 float32(0.01)，另一轴有正重叠。选择另一轴重叠最大的候选，同长候选由后一次扫描替换。然后删除两个原片段，按原输出顺序保留双方不重叠残片，将公共投影内两板合成一板。原循环最多 1,024 次并回退扫描位置；恢复实现保留此停止规则。

完整 planner 的 ABI 与 pre-remapped cut 入口分开。`wall_planners_oracle.py` 的非空 cut 检查显式替代 cut provider；`wall_mapping_oracle.py` 的 world/rectangle 检查直接提供真实窗口和 arch 结构，原 provider 也执行。因此完整 world 验证不依赖 pre-remapped provider hook。

## 世界坐标、窗口和 arch

`Curve::get_approx_u_from_pos` 0x141e38fb0 将点投影到每段 polyline，clamp 段权重，在平面距离最小段上插值对应 u 值；同距离保留先出现段。`WallSpaceCoord::from_world_space` 0x140dea520 只使用 X/Z，将该 u clamp 到 [0,1] 后乘 curve length。

窗口记录步长 20 字节：前 16 字节 Aabb2，+16 byte 为类型。原过滤器只保留此 byte 非零的记录；+17 origin byte 不参与过滤。`FinalizedWallHoles::holes_no_duplicates` 暴露的是已经去重的 Vec，本接口不再人为做一次去重。

arch 记录步长 104 字节，前两项是 height-offset Vec 和 XYZ position Vec，位于 +0 和 +24。两向量较短长度决定 sample 数。每个顶高为 position.y + height_offset，底高为 PublicWallState +0x278 减 float32(0.2)。每个 sample 从真实世界坐标投影到 wallspace；freeform discriminant=2 保留原范围，其余形态将倒退的距离逐个加周长，展开 seam。随后完整覆盖周长的 cut 变为 [0,wall_length]，其他跨 seam cut 分裂为合法周长区间。float32(0.0001) 控制结束和极小块过滤。

`BoardWallSpace::remap_x` 0x141483e90 已恢复两个分支。普通分支先 clamp 到原长，再按 expanded/original 比例换算。矩形分支识别原矩形侧面，沿原边采样、加法线 offset，再投影到 expanded 矩形对应边，计算新的 perimeter 距离。默认 offset=0.125 来自原 BoardWallSpace::new；它作为明确输入保留。

Rectangle2d 的原 24 字节字段是 rotation cos/sin +0/+4、center x/z +8/+12、width/height +16/+20。原 point 和 edge-normal 辅助函数也执行原码验证，包括旋转矩形与 signed zero。

最终 remapped cut 将足够接近原 seam 的 minX 强制设为 0，足够接近末端的 maxX 强制设为 expanded length；避免仅按比例换算而漏掉首尾边缘。本接口恢复了窗口过滤、arch 转换、concat 和该最终 remap 的整条原始路径。

## 地形与楼梯支撑

地形 CPU 网格是 512×512 的 row-major u16，Z 行 / X 列。`load_index_unchecked` 0x140927ec0 先除 65535，再在结构 +0x50/+0x54 的 low/high float 之间插值；这里不是 half-float 解码。`sample_at_world_xz` 0x14140ce00 将 X/Z 除 130 后加 0.5，再按两个运行时 flag 分支选邻格并进行双线性插值。

新 texel-center 分支使用 `min(u,1)×512−0.5`，下限 clamp 0，索引上限 511。另一个分支使用 `max(u,0)×512`，超出右边界时固定为 512，但基础索引上限 510，fraction 保留；边界能出现 fraction=2 的外插行为。工具保留原行为，没有擅自再 clamp 权重。当前安装程序实际运行选用哪个 flag 未被观察；验证将两种 flag 都作为输入。

完整 `support_station_from_sample` 0x1408279f0 在 left/right/center 三处从支撑几何 Y 加 0.1 发出向下射线，掩码 0x202。命中 tag=1 使用 hitY+0.3；tag=2 的 flag bit0=1 使用 hitY，bit0=0 使用 hitY−1；tag=17 或其他 tag 回退到原 terrain sampling。固定高度分支保持上一阶段行为。

`support_station_at` 0x140827820 使用 Vec3 curve 的 XZ 投影找最近段，Y 不参与该最近段判定。它插值 widths 和二维 tangents，归一化 tangent；零 tangent 返回零向量。之后直接进入上述完整支撑站路径。原近段函数为 0x1413fa210，其负零权重在恢复实现中保留。

## 真实非空 Rapier 场景输入

`native_scene_layout.json` 保留经过原构造/查询核对的具体 ABI。核心布局如下：

| 结构 | 原字段 |
|---|---|
| Rapier | 17 个 layer，stride 0x390；metadata Vec 在 +0；第 0 层 ColliderSet +0x20、QueryPipeline +0x50、QBVH +0xe0 |
| metadata entry | stride 40；头 24 字节复制给 hit；+32 generation |
| Collider arena entry | stride 192；+0 occupied=1；+4 generation；+16 为 176 字节原 Collider |
| Collider body | +0 u128 user_data；+16 Arc data；+24 shape vtable；+52 quaternion；+68 translation |
| QBVH | nodes Vec +24；proxies Vec +96 |
| QBVH node | stride 128；6 个 SIMD4 min/max vector；children u32×4 在 +96；leaf byte 在 +120 |
| proxy | stride 16；collider index/generation 在 +8/+12 |
| ray hit | 40 字节；头 24 字节 metadata；XYZ +24；TOI +36；no-hit tag 17 |

工具用原 SharedShape::cuboid 0x141b3b160 或 SharedShape::trimesh 0x141b3b1f0 创建 shape，用原 ColliderBuilder::new/build 0x140cd48c0 / 0x140cd4920 创建 Collider，随后填入真实 arena 和外层四叉 QBVH。TriMesh 内部 QBVH 由原构造函数生成。外层 QBVH 是符合实际布局的人工树，不声称恢复原场景的更新/分区顺序。

原 Rapier 查询从 collider.user_data 的低 32 位找到 metadata slot，核对其 generation，再复制 metadata 前 24 字节、计算世界命中点和 TOI。因此 tag=1/2 的来源不是 shape 类型判断；它来自该碰撞实例关联的游戏 metadata。验证场景分别设置 tag/flag 并保留原分派路径。

## 独立场景查询的来源和边界

独立 `recovered_scene_query.py` 的三角形射线数学来自匹配 [parry3d 0.17.0 的 ray_triangle 实现](https://docs.rs/parry3d/0.17.0/src/parry3d/query/ray/ray_triangle.rs.html)，并由原 ShapeCast 验证。它做法线/射线方向判定，再按符号计算重心范围和 TOI。盒子查询在 inverse quaternion 变换后的 local ray 上使用 slab 交集。

独立工具使用新编写的 median binary BVH，提供加速和可移植性；它与原四叉 QBVH 的拓扑、构建顺序不是同一算法。合法输入下的命中/最近距离/层掩码由原查询核对。等距重叠碰撞体的 tie 顺序、三角形退化边界和非有限输入未做全域等价证明。

Cargo.lock 证据对应 parry3d 0.17.0 与 [PounceLight Rapier 的固定提交 7b5ece73](https://github.com/PounceLight/rapier/tree/7b5ece73c45a4d39bb983c48c283e773d7241050)。源码用于解释结构角色和数学，最终字节偏移及本构建行为来自匹配 EXE，未用普通上游 Rust 布局替代机器码观察。

## 验证结果

| 最终证据 | 检查数 | 结果 |
|---|---:|---|
| reconstruction_wall_stairs/verification-final.json | 342 | 前阶段 float32 位/元数据全匹配，文件未改 |
| reconstruction_wall_stairs_planners/verification-planners-final.json | 84 | 完整 planner、窄板逻辑、signed-zero total-order 全匹配 |
| reconstruction_wall_stairs_planners/verification-world-pipeline-final.json | 175 | world/窗口/arch/矩形映射及完整 planner 全匹配 |
| reconstruction_wall_stairs_planners/verification-stair-terrain-final.json | 116 | 两种地形采样、完整支撑站 dispatch/插值全匹配 |
| reconstruction_wall_stairs_planners/verification-populated-raycast-final.json | 90 | 非空原 ShapeCast/场景查询/支撑站全部通过；最大误差 1.1920928955078125e-7 |

最后一组包含平面、斜面、盒子、旋转盒子、7 个 Collider 的外层多节点 QBVH、32 个三角形的原 TriMesh、层筛选、最近命中、inside solid ray 和完整 `support_station_at`。独立数学与原查询的阈值 2e-5，实际最大误差约 1.19e-7；没有只验证单独返回的 GroundHit record。

每次结果保留具体输入、原输出、恢复输出、替代接口调用计数与实际进入的原函数计数。非空查询能看到原 QueryPipeline/QBVH/Shape::cast_ray 和三角形相交函数的进入记录。早期两份失败尝试移到 `deprecated/reconstruction-wall-planners-attempts`：一份是 int/float JSON 比较格式差异，一份发现并修正了 nearest segment 的负零权重；最终文件以表格列出的通过证据为准。

## 尚未恢复的边界

这组工具恢复计算和查询链，不等于全部游戏系统。尚未闭合：完整 `construct_wooden_wall_boards` 的采样输入/材质/随机实例装配；region 创建、gable/merlon 特例的所有工况；Collider 实际 ECS 生命周期与 Rapier 每帧更新调度；原外层 QBVH 构建拓扑；游戏碰撞 metadata 头 24 字节的完整字段类型；用户已有实景的原 runtime memory capture。

下一层已经有明确入口：`plan_rectangle_wallspace_regions` 0x141489480、`plan_circle_horizontal_wall_boards` 0x1414899d0、`construct_wooden_wall_boards` 0x14144a4c0、`Rapier::raycast_simple` 0x1409f9030 的 collider update callers。实景比对需要在指定存档/场景时刻读取 Rapier 的 17 层 arena/QBVH、metadata Vec 和 TerrainHeightsData 网格；布局现在足够将这些字段转换为同一个查询接口，原报告“缺乏非空查询 ABI”的缺口已消除。

所有原 EXE、PDB、安装资产和存档保持只读；Unicorn 里的 runtime 指针/字段属于人工隔离内存。没有启动游戏。Git 与最终包由主任务统一备份。


### Wooden wall instance and top-rim closure (stage 3)

`tools/recovered_wall_instances.py` reconstructs the closed SSBO/decoration helpers used by `construct_wooden_wall_boards`: `wooden_plank_default()` emits the 80-byte record (identity matrix blocks, integer flag 1 at offset 60); `wooden_gable_plank_default()` emits the 96-byte record (integer 1 at offset 56 and float pair `(1,1)` at offsets 72/76); `curved_half_timber(...)` follows `0x140aaa870` radial half-width, angles, scalar, style table and next-power-of-two segment exponent; `top_rim_merlon_ranges(start,end,mode)` follows `0x1414851c0` count/spacing and minimum-width filter.

`evidence/reconstruction_wall_instances/verification-instances-final.json` has 15 rows: all 10 merlon inputs, both 80/96-byte defaults and three curved records are bit exact. Curved style domain is 0..3; the first four table values are `[0,2,2,4]`. Native Rust ABI stack scalar/angle/angle/style slots are +0x28/+0x30/+0x38/+0x40 at entry. Native pseudocode/assembly are in `evidence/reconstruction_wall_instances/decompile*`.


### Stage 3 instance and gable closure

The stage-3 evidence closes 102 additional native comparisons. `verification-instances-final.json` is 15/15 exact for curved half-timber construction, merlon interval generation, and straight/gable SSBO defaults. `verification-regions-final.json` is 63/63 exact for rectangle gable ranges and the wall-space region splitter (including gable upper pieces and thin-foundation elision). `verification-emission-final.json` is 24/24 exact for the curved horizontal emitter, with circular angle wrapping, `WindowCutLists` empty-provider path, seed/flags/window fields, and 80-byte output assembly.

The independent API is in `tools/recovered_wall_instances.py`; native adapters are in `tools/wall_instances_oracle.py`. The 35,831-byte `construct_wooden_wall_boards` entry and all helper machine evidence remain under `evidence/reconstruction_wall_instances`; live wall-state callback ABI and nonempty window-list provider are the only unresolved inputs to the full top-level constructor.
