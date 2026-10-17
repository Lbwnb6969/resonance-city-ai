# 屋顶可执行还原与原瓦片生成器

现在可完全脱离 EXE 和 Unicorn 生成圆形、矩形屋顶瓦片。`tools/recovered_roof_tiles.py` 提供高层圆形源码与矩形接口；矩形完整算法在 `roof_rectangle_lifted.py` 中展开为 912 个基本块的明确 Python 源，`roof_lift_runtime.py` 实现 float32/SIMD/整数语义。所有运行代码仅依赖 Python 标准库。

与保留的原代码 oracle 11 情景对照，9 个坡顶 3,722 条 64-byte 记录全部逐位一致，SHA-256 完全匹配，没有使用误差容忍。圆半径 2 默认 321 条、矩形 5×4 默认 531 条；两种山墙、尖顶、旋转偏心均闭合。原 EXE 仅用于创建及复核参考证据，不再是恢复源码的运行依赖。

圆形实现已结构化为行、环、瓦片、坡度、四元数与边缘瓦片计算。矩形实现是保留优化控制流和寄存器临时名的低层源码移植，全部常量内嵌；不是作者原 Rust 源码，也没有把整洁高层命名恢复到同等程度。`roof_tile_oracle.py` 继续保留作为独立原指令参考。

## 证据与边界

- EXE SHA-256：`4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5`。
- 原 PDB 函数范围来自既有 `evidence/native_callgraph.sqlite`、`pdb_symbols.jsonl`。
- 本轮私有 Ghidra 项目 `work/roof-restoration`；新增完整定向输出在 `evidence/reconstruction_roof/decompile/`、`helpers/`、`rng_helpers/`。这些文件是反编译伪代码，不是游戏作者源码。
- 数值对照：`evidence/reconstruction_roof/verification_extended.json`。
- 原瓦片记录及 11 个参数情景：`evidence/reconstruction_roof/tile_samples/`。
- 原指令白名单、逐函数字节 SHA-256 与 CRT 导入表：`evidence/reconstruction_roof/oracle_manifest.json`。
- 安装目录只读；未启动游戏；未调用 Windows、Steam、渲染或存档 API。所有分配、重分配和释放仅作用于 Unicorn scratch 内存。

## 已移植并数值验证

19 个原函数行为、20 个数值分组，1,774 个对照通过，最大绝对误差 `1.9073486328125e-6`。17 个分组所有采样逐值一致；其余最大误差来自 float32 运算结合顺序。判定阈值 `4e-6`，有效域为有限正尺寸、编辑参数 `[0,1]`。Curve 和 RNG 的中间状态也与原机器码一致。

| 原函数 | VA | Python 行为 |
|---|---|---|
| Roof::height | 0x140b77a00 | 平顶阈值 0.1、尺寸相关高度上限、世界高度插值 |
| Roof::is_flat | 0x140b77b50 | height_01 ≤ binary32(0.1) |
| Roof::shape_dims | 0x140b77170 | 矩形宽长；圆形直径 |
| calc_roof_tip_center_ls | 0x140ac6200 | 尺寸 × tip_offset × 调用者系数 |
| Roof::roof_tip_offset_xz | 0x140b771f0 | 半尺寸偏移，矩形朝向旋转 |
| Roof::gable_sides | 0x140b77190 | ridge_length_01 = 1 且非平顶时返回两侧编码 |
| Roof::get_roof_shape | 0x140b77bc0 | 屋顶任意归一化高度的带挑檐水平截面 |
| Roof::roof_shape_at_intersection_y | 0x140b77620 | 世界高度裁切截面、范围外 None、底面原形状 |
| Roof::profile_curve_normalized | 0x140b772d0 | 固定 20 点的幂曲线 |
| roof_height_ws_from_wall_shape | 0x140b76fd0 | 原 EasingFunction 枚举 2 的余弦尺寸映射 |
| RoofRidgeDims::calc | 0x140ac60c0 | 屋脊参数至宽长；最小轴为 0.1 |
| inverse_ridge_01_param | 0x140ac6180 | 反解并夹到 [0,1]；尺寸 0.1 为原 panic 域 |
| profile_curve_ws | 0x140b768b0 | 幂曲线点至世界截面坐标 |
| fastrand::Rng::f32 | 0x140e02880 | 64-bit wyrand 状态推进、IEEE float 位构造 |
| random_splits_into | 0x140de8bb0 | 等分点与局部 jitter，端点固定 0、1 |
| Curve::try_new_from_points | 0x140080c90 | 累积二维弧长、归一化 u cache |
| Curve::get_coord_at_u | 0x142802660 | u cache 二分、返回段索引与局部插值系数 |
| Circle2d::get_pos_at_u | 0x140def2c0 | 顺时针圆参数点与 yaw |
| Circle2d::get_normal_at_u | 0x140def5e0 | 对应圆外法线 |

先前的 `tools/roof_math.py` 两项 eave/ridge-ratio 数值恢复继续有效，未覆盖或改写。

### 几个已闭合的算法细节

参数布局通过原 serde 序列化字段字符串和 Roof::new 的复制互证，避免仅凭偏移猜字段。RoofShapeParams 从 Roof+0x24 开始：tip_offset_01 在 +0x24/+0x28，profile_01 在 +0x2c，height_01 在 +0x30，ridge_length_01 在 +0x34，eave_length_01 在 +0x38，ridge_dir 在 +0x3c；pivot_y 在 +0x4c。

归一化 profile 为 `x=i/19, y=x^(0.5+profile_01)`。世界 profile 映射为 `x*end+(1-x)*start, y*height`。原圆形生成调用的 start 是扩张底部半径，end 是 0.2；反过来传会颠倒屋顶截面。

矩形底部扩张为每个轴增加 `1.5*eave_01*(0.5+0.5*sqrt(profile_01))+0.28`。圆形对应增长先乘 1.2 再加 0.28，最后除 2。这个分支常量已经与原截面函数对照，不是把圆与矩形统一后推断。

圆形瓦片排布用世界 profile 的累计弧长；行数基准 `max(1,ceil(length/0.4375))`，省去 tip 终点，行长度系数为 binary32(10/7)。圆周瓦片数最低 3，依据半径相关宽度因子计算。`circular_row_plan()` 只移植这些规划公式，未声明该函数完整恢复了后续随机角度、瓦片旋转与边缘瓦片。

RNG 原初始状态由生成函数写为 0。`random_splits` 为中间分割点增加 `(rng_f32-0.5)*min(jitter,0.495/(count-1))`，端点不扰动。调用圆屋顶时 jitter 系数是 0，因此等分点的偏移由后续随机相位及尺寸扰动体现。

## 原瓦片生成器

原核心入口：圆 `0x142816ba0`，矩形 `0x142812c70`。工具执行 38 个显式白名单函数范围；原 callback 圆 `0x142817e20` / 矩形 `0x142816720` 被截获。完整原位置计算、profile 弧长采样、随机调用次序、矩形侧面与角部流程、四元数构造均在原指令里执行。

CPU 检测、系统 allocator 和 Rust ECS callback 不执行。CRT `powf/cosf/sinf/atanf/fmodf/ceilf/roundf` 用 Python math 替代，f32 输入与输出保留，binary16 用 `struct.pack('e')` 转换；导入符号已直接核对 EXE IAT。CRT 自身最后一位舍入差别未证明等价；故输出是“原生成代码 + 声明的数学替代”，不能声称已与真实游戏帧逐字节对比。

调用者 `assemble_roof_tiles`（`0x141f46490`）先判断平顶，并跳过两个瓦片生成器。初始直接探测矩形内部函数 height=0 产生非有限四元数/零厚度；这是跨越调用域的诊断，不是游戏平顶行为。最终工具复现 caller 的平顶跳过逻辑，平顶返回 0 个瓦片。该事实防止把内部函数的未定义调用域当作游戏 bug。

11 个情景全部完成；9 个有效坡屋顶生成 3,722 条记录。平顶圆与矩形均返回 0。默认圆重复一次，其全部 callback bytes SHA-256 完全相同。

| 情景 | 记录数 |
|---|---:|
| 圆半径 2 默认 | 321 |
| 矩形 5×4 默认 | 531 |
| 圆平顶 / 矩形平顶 | 0 / 0 |
| 圆半径 0.3 浅坡 | 32 |
| 圆半径 4 陡坡 | 930 |
| 矩形 1×1 浅坡 | 47 |
| 矩形山墙方向 0 / 1 | 334 / 269 |
| 矩形尖顶 | 728 |
| 矩形 6×3 旋转偏心 | 530 |

验证断言：每条位置、scale、quat、profile 有限；三个 scale 分量正；wall_slot_id 保持原输入值；无未知代码路径或系统 API 执行。验证不等于可视帧对照。

### CPU callback 输入与 shader 的 64-byte ABI

`evidence/shader_reflection/assembly/country-core/compiled/nani_instanced_roof/000.spvasm` 的 `%63 RoofShingle_natural` 给出名字和所有 offsets，ArrayStride = 64，与原 callback 输入记录逐字段互证：

| 偏移 | Shader 名称 | 格式 |
|---:|---|---|
| 0 | base_position | f32×3 |
| 12 | current_height | f32 |
| 16 | clipping_plane__ | packed f16×4 |
| 24 | scale__t | packed f16×4（前三 scale，第四 profile/t） |
| 32 | rotation_quat__ | packed f16×4 |
| 40 | wall_slot_id | u32 |
| 44 | velocity__rotation | packed u32 |
| 48 | animation_t | f32 |
| 52 | seed | u32，生成时递增 |
| 56 | is_circle | u32 |
| 60 | is_main_roof_body | u32 |

工具输出的是 callback **之前**的记录。最后两字段保留 raw flags。进一步实际执行原 callback 与 `SparseInstanceBufferWriter::push` 成功路径，两个 callback 对 body flag 0/1/2/3 共 8 次检查，都完整复制 64 bytes 不变，增加槽 usage 并置 dirty bit；没有 flag 规整、资源匹配或默认值填充。Shader 对 offset 60 使用 `OpINotEqual zero`，非零值均为真。证据在 `callback_verification.json`、`callback/` 与 `push/`。槽增长、锁争用及错误日志未作为已验证成功路径计入。

## 复用

```powershell
python -m pip install pefile unicorn
python tools/verify_recovered_roof.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_VERIFICATION.json
python tools/roof_tile_oracle.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --kind rectangle --width 5 --length 4 --ridge 1 --direction 0 --height 0.5 --profile 0.5 --eave 0.5 --out NEW_TILES.json
python tools/verify_roof_tiles.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_EVIDENCE_DIRECTORY
python tools/recovered_roof.py --demo NEW_SURFACE.obj
```

工具 JSON 使用新文件独占写入，既有结果不会静默覆盖。`--yaw` 为矩形旋转弧度；`--tip-x/--tip-z`、`--pivot-x/--pivot-y/--pivot-z` 暴露偏移，`--render-id` 和 `--flag` 暴露原生成器字段。独立 Python API 可传 `Roof` / `WallShape`。

`continuous_surface.obj` 仅是已移植连续截面的展示，不能冒称完整原瓦片网格。原记录样例 JSON 和 `.tiles64` 已保存；二进制中每连续 64 字节是一条原 callback 输入。

## 后续尚未闭合

1. 圆、矩形整体生成现已移植并逐位验证；矩形低层基本块也保留为可复建的纯 Python source。它已经不依赖原 EXE。
2. callback 成功路径原样拷贝记录已闭合；扩容、单线程 slot 回收、dirty flush、范围合并和分页上传已有独立参考实现。并发竞争与真实 GPU buffer 生命周期仍单独标记为边界。
3. 配对实际 roof shingle mesh 和 shader deformation；重建显示仍需 resource ID、shader 与渲染调度。
4. 后续已独立恢复 roof_tiles_gravity 并在真实 GPU 执行验证，动画初始化/数值推进、稀疏写入与增长、单线程 flush/reclaim 也已验证，见 `reconstruction_roof_runtime.md`。完整 ECS 帧调度、并发争用与真实 GPU 资源销毁仍未闭合；gravity kernel 本身没有 BVH 碰撞查询。
5. RoofRidgeDims::to_world_space、roof UV/point 投影等剩余函数已有本轮反编译，但未作为完整独立源码移植计入验证覆盖。

原游戏、存档与资源未修改。


## 独立源码复用与验收

```powershell
python tools/recovered_roof_tiles.py --kind rectangle --width 5 --length 4 --ridge 1 --direction 0 --out NEW_RECTANGLE.tiles64
python tools/recovered_roof_tiles.py --kind circle --radius 2 --out NEW_CIRCLE.tiles64
python tools/verify_recovered_roof_tiles.py --out NEW_SOURCE_VERIFICATION.json
```

以上三命令不读 EXE、不导入 Unicorn、不需要安装第三方库。`source_verification.json` 保留 11 情景的独立源码与旧原代码参考 SHA；9 个坡顶的全部 3,722 条 record 严格匹配，两个平顶输出为空。原 1,774 对照和 11 情景 oracle 证据未修改。

矩形源文件约 756 KB，来自 38 个函数范围、6,687 条静态指令，展开为 912 个可读 Python 基本块。91 段数字常量从原只读数据段提取为内嵌常量；不存在运行时读机器码字节的步骤。代码中每条表达式保留来源 VA/指令注释，`lift_manifest.json` 记录覆盖边界。运行层的临时寄存器、比较 flags、SIMD lane 和 scratch 指针保留编译产物语义，结构化恢复程度低于圆形高层源码，不能误称完全恢复作者原源码。

原证据的 CRT math 与 f16 替代约束继续成立，因此此处 bit identity 是对受控原指令参考的等价，尚未与真实游戏渲染帧比较。完整建造系统、GPU 模拟、资源生命周期与渲染调度不因瓦片核心闭合而自动闭合。

`tools/build_roof_source.py` 提供可复用生成器：需要 pefile、capstone、原 EXE 与已交付 SQLite 索引，输出到指定新路径。重建所得源码与交付的 `roof_rectangle_lifted.py` 逐字节一致；它仅用于重新生成分析成果，恢复源码本身运行不需要此生成器或这些依赖。

```powershell
python tools/build_roof_source.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --source NEW_LIFTED.py --manifest NEW_LIFT_MANIFEST.json
```
