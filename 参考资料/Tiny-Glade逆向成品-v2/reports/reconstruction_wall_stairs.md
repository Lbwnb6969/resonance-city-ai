# 墙板、曲线采样与楼梯支撑的可执行还原

后续完整 planner、窗口/arch 世界坐标链、地形和真实非空场景查询见 `reconstruction_wall_pipeline.md`。本页保留前阶段 342 组内核验证的范围。

本轮交付 `tools/recovered_wall_stairs.py`，恢复了 12 条原生计算路径，并将原 EXE 指令作为隔离 oracle 逐输入核对。最终 `evidence/reconstruction_wall_stairs/verification-final.json` 的 342 组检查全部逐 float32 位与元数据匹配，零差异。它覆盖墙板布局的核心步骤及楼梯几何辅助计算；完整木墙生成、楼梯碰撞采样和装饰实例装配仍未全部还原。

## 身份和证据

目标是安装目录的 `tiny-glade.exe`，SHA-256 `4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`。匹配 PDB 的函数边界来自现有 `native_callgraph.sqlite` 与 `pdb_symbols.jsonl`。本轮新增 16 份按 PDB 边界定向生成的 Ghidra 伪代码，保存在 `evidence/reconstruction_wall_stairs/decompile` 和 `decompile-extra`；原始指令、常量引用在同目录 `0x*.asm` / `0x*.json`。Ghidra 使用独立 `work/wall-stairs` 项目，未触碰共享分析数据库。

`helper_machine_code.json` 保存随机数、矩形 perimeter 参数和 AABB 辅助函数的原始机器码及 SHA-256。每一条结论依赖本构建地址，不适用于另一个版本的 EXE。

## 已恢复的函数

| 原始函数 / VA | 恢复行为 | Oracle 输入数 |
|---|---|---:|
| split_oversized_board_piece / 0x1414882c0 | 由墙 ID、piece index 和端点位模式确定随机种子，递归切过长板 | 30 |
| subdivide_region_into_planks / 0x1414887e0 | 以尺寸/spacing 的 roundf 结果决定数量，再等分 region | 30 |
| subtract_wall_cutouts / 0x141484710 | 多个矩形孔洞与板 piece 的有序减法，保留元数据 | 18 |
| AlignKind::position_offset / 0x140c01750 | 枚举/flag 控制的双向量偏移 | 36 |
| AlignKind::outgoing_dir / 0x140c016f0 | 两个有效枚举分支返回不同字段中的方向 | 2 |
| WallSampler::sample_pair_at / 0x141483090 | 开放曲线 clamp、闭合曲线 wrap、二分找区间、float32 权重 | 64 |
| WallSampler::tangent_between / 0x141483320 | 曲线两点方向；退化时局部采样；最终默认 X 轴 | 32 |
| support_station_from_sample / 0x1408279f0 | 固定地面高度分支，生成 64 字节支撑站几何记录 | 30 |
| Rectangle2d::get_point_u / 0x140df0700 | 5 个 rectangle corner 的归一化 perimeter 坐标 | 15 |
| rectangle_side_wallspace_ranges / 0x141483c00 | 四个矩形侧面的连续 wallspace 区间 | 9 |
| top_rim_step_pattern_info / 0x141486f80 | 矩形侧面局部坐标与长度，其他形态的周期坐标 | 36 |
| classify_region_orientation / 0x1414871b0 | 垂直边界余量、局部曲率/切线相似度及长宽比决定方向 | 40 |

以上数量来自最终验证文件；早期 116 / 242 / 302 组结果仍保留用于审阅进展，最终结论使用 342 组文件。

## 算法与字段

### 过长墙板切割

原函数按方向只拆一个轴：水平板沿 X 拆，竖直板沿 Y 拆。阈值为对应 `max_width` 或 `max_height`，均下限 clamp 到 float32(0.05)。不用宿主随机库；还原的 `fastrand_f32` 按原始 64 位乘法和低 32 位 xor 产生相同随机值。

```text
seed = wall_tag XOR (piece_index × 1000003)
       XOR (float32_bits(min_axis) × 68719)
       XOR (float32_bits(max_axis) × 97531)
state = seed + 0xa0761d6478bd642f                 # u64 wrapping
product = (state XOR 0xe7037ed1a0b428db) × state # u128
word = low32(low64(product) XOR high64(product))
r = float32_from_bits((word >> 9) OR 0x3f800000) − 1
horizontal_ratio = r × 0.85 + (1 − r) × 0.15
vertical_ratio = r × 0.40 + 0.30
cut = min_axis + size × ratio
```

所有算术按机器指令顺序舍入到 float32，包括中间结果；上面的等价数学缩写不能任意化简后用于逐位核对。原程序把高半块先推入栈、低半块后推入栈；低半块先出栈，因此最终顺序为低坐标优先的深度遍历。恢复工具保留该顺序。

### 均匀 plank 分区与孔洞减法

`subdivide_region_into_planks` 的 horizontal=true 将 region 沿 Y 分成水平板，false 沿 X 分成竖板。数量为 `max(1, roundf(extent / spacing))`；边界为 `min + i × extent / count`，没有随机抖动。

`subtract_wall_cutouts` 的 piece 是 40 字节：+0/+8 两个 u64 opaque 字段，+16/+20/+24/+28 是 Aabb2 的 minX/minY/maxX/maxY，+32 一字节 flag，后七字节是未解释 padding。有效样本使用首字段 0/1；首字段为 2 会进入原程序内部 sentinel 条件，未纳入高层输入域。工具保留两个 u64 与 flag。

孔洞相交是严格面积相交，边界贴合不算相交。horizontal=true 按 bottom、top、left、right 顺序形成四个不重叠片段，要求正宽高；false 按 left、right、bottom、top 顺序形成片段，同时过滤高度小于 float32(0.05) 的残片。孔洞按原顺序处理，最多重复 16 轮，没发现相交便停止。这些方向分支、输出顺序、阈值及停止条件均由原码观察，并经 oracle 对照。

### 曲线采样和方向

WallSampler 输入结构在 +0/+8/+16 为 Vec 的 capacity/pointer/length，+24 为路径总长，+28 为 closed byte。元素步长 20 字节：+0/+4 平面位置、+8 arc distance、+12/+16 两个垂直边界值。字段偏移与数值行为是观察；把后两项称为 bottom_y/top_y 是结合墙构造用途的语义推断。

开放曲线将查询距离 clamp 到 [0,length]；闭合曲线使用正模，并处理第一 sample 的 arc distance 非零时跨 seam 的区间。区间搜索是二分；权重分母下限为 float32(0.0001)，权重 clamp 到 [0,1]。首尾之外返回对应 sample 与自身、weight=0；空曲线返回 None。

切线首先插值两个查询位置、归一化差向量。平方长度不超过 float32(0.0001) 时，改在中点左右 `max(length × 0.001, 0.01)` 采样；仍退化便返回 (1,0,0)。闭合模式允许 end<start 跨 seam。

`classify_region_orientation` 在 region 的 minX/middleX/maxX 三处检查底/顶边界，并要求 region 底面严格高于插值 bottom+0.05，顶面严格低于 min(插值 top,cap_y)−0.05。再比较 midpoint/maxX 处 ±0.01 采样的切线与 minX 参考切线，要求 abs(dot)≥float32(0.85)，最后要求 region width/height>0.5 才返回 true。这个最终判定已完整恢复；内部 `region_is_straightish` 的 iterator 0x141421a50 也执行原指令参与 oracle，没有替代为 Python 判定。

### 楼梯对齐和固定地面支撑

AlignKind 的字节 +0 为 discriminant，+1/+2 是控制 flag；向量 A 在 +4/+8、向量 B 在 +12/+16。tag=0 的 outgoing_dir 为 A，tag=1 为 B；其他 tag 的原函数触发 panic。position_offset 的 tag=0 在任一 flag 非零时返回 A×scale，否则零；tag=1 返回 A×scale/2，且 +1 flag 非零时改用 (A+B)×scale/2；其他 tag 返回零。

`support_station_from_sample` 的固定高度分支生成下列 16-float 记录：

| 偏移 | 内容 |
|---|---|
| +0..+8 | left XYZ |
| +12..+20 | right XYZ |
| +24..+32 | center XYZ |
| +36/+40/+44 | left/right/center ground height |
| +48..+56 | outgoing tangent XYZ |
| +60 | 原 width |

center = (position.x, position.y − float32(0.34), position.z)。横向法线是 (−tangent.z,0,tangent.x)，横向距离为 `max(0,width/2 − float32(0.11))`，left/right 为 center ∓ normal×distance。固定高度分支只将同一个 height 放入三个 ground 字段，原指令没有调用碰撞/地形接口。非固定分支有三次 `RaycastWorld::raycast_simple`，并按结果退回 terrain sample；尚未将该支撑依赖闭合。

### 矩形侧面和 rim

Rectangle2d 尺寸字段在 +16/+20。归一化 perimeter 的 corners 为 0、h/[2(w+h)]、0.5、(w+2h)/[2(w+h)]、1；实现保留原 float32 计算顺序。BoardWallSpace 的 expanded shape discriminant 在 +28，expanded rectangle 尺寸在 +48/+52，expanded length 在 +60。`rectangle_side_wallspace_ranges` 把 perimeter 坐标乘 expanded length，返回四个连续侧面区间；circle/None 返回 None。

`top_rim_step_pattern_info` 在 mode=1 且 rectangle 分支返回 `max(0,distance−side_start)`、`side_end−side_start`、true；没有 upper clamp。其他分支返回正模 distance、全 expanded length、false。

## 验证和限制

```powershell
$env:PYTHONPATH='work/python-deps'
python outputs/tiny-glade-analysis/tools/wall_stairs_oracle.py 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW-verification.json
```

结果：`checks=342, passed=true, mismatches=0`。每个输入、所有输出 float32 十六进制位、元数据和替代接口调用次数均在 JSON 保存。输入包括方向分支、多个 ID/index、负坐标、尺寸阈值、孔洞完全包含/贴边/重叠、闭合 seam、退化切线、空/单 sample 曲线、多种矩形比例、直/弯曲墙的 orientation 分支及底/顶边界拒绝条件。

Unicorn 映射 PE 节区和人工构造的栈/参数，只执行隔离原始指令，没有启动游戏。Rust alloc/dealloc、两种 Vec grow 为宿主 scratch memory 实现；roundf 按有限输入的精确规则替代，fmodf 为宿主 math.fmod 后舍入到 float32。几何、fastrand、查找和控制分支执行 EXE 字节。未把 allocator 或 CRT 接口替代声称为游戏全运行验证。padding 字节不纳入比较；仅输入有限有序矩形、正 spacing/路径长度、有效 enum 与有限输出规模。尚未证明全部 IEEE 非有限值、溢出或原游戏调用域。

## 未闭合部分及后续入口

- `arch_openings_to_aabb2` 0x1414853f0 可观察为 height/position sample 转 wallspace、seam 解绕与 AABB 范围；`Utils::nearest_wallspace` 0x140dea520 和 PublicWallState 布局仍需恢复，不能把世界坐标直接当 wallspace。
- `plan_horizontal_wall_boards` 0x1414877d0、`plan_vertical_wall_boards` 0x141485b80 连接 region、cutout、top rim 和上述算子；尚未恢复它们完整的规划参数与输出组织。
- `BoardWallSpace::new` 0x141483d90 仍依赖 enclosure expand/as_curve2。可确定输出 +64 恒为 float32(0.125)，输出 +56 为原 wall length、+60 为 expanded length，两个 shape payload 分别从 +0/+28 开始；shape enum 完整布局与 transform 扩张行为未闭合。
- 楼梯 support_station_at、curved_brace_params_from_positions、完整支撑组织和装饰实例 buffer 需要额外几何/碰撞/资源上下文。已保留 16 份定向伪代码供继续分析，不将其计为完成算法。

原游戏、PDB、存档均只读；本轮文件只写 outputs 与 work。备份提交由主任务统一完成。
