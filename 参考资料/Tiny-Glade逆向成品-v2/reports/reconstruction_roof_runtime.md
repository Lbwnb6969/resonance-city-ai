# 屋顶状态、稀疏写入与真实 GPU 更新

独立瓦片生成之后，本轮进一步恢复 CPU 动画状态、稀疏实例页/槽写入和 GPU 重力更新。真实 `roof_tiles_gravity` SPIR-V 已在 NVIDIA GeForce RTX 5070 Ti Laptop GPU 上执行。安装目录与存档未写入，游戏未启动；GPU 验证仅创建本工具的 Vulkan device、scratch buffers、pipeline 和 command buffer，等待完成后全部销毁。

## GPU 重力 kernel

主证据是已恢复的 `reconstruction/shaders-source/glsl/country-core/compiled/roof_tiles_gravity/000.comp`，对应原 SPIR-V SHA-256 `ed7e96dc6df2b078e30116f0ee9432f7819683739fc4ac971215fcacc8881a13`。新 `tools/roof_gpu_reference.py` 将算法移植为独立 CPU Python。`vulkan_roof_dispatch.py` 使用 Windows stdlib ctypes 直接调 Vulkan，执行的是原 SPIR-V，不是用 CPU 扮演 GPU。

kernel 以 64 条线程为一个 workgroup，push constants 是 20 bytes：first_instance u32、instance_count u32、wall_height_delta f32、roof_pivot_y f32、animation_t f32。FrameConstants.delta_time_seconds 位于 UBO offset 132。记录唯一更新字段是 offset 12 current_height、offset 44 packed half velocity/rotation、offset 48 animation_t，其余 52 bytes 保持不变。

恢复行为包括：根据 profile 的 50 档 floor 量化调整重力、缓慢降墙时贴近新 pivot、防止落到 pivot 下方、抬墙带来的速度上限 15、按 seed 的 Jenkins 位混合选择快速/慢速回位、接近屋脊 t>0.9 的固定高度、反弹时旋转。

`evidence/reconstruction_roof/gpu_verification.json` 保存 6 个 GPU 情景、每次 257 条记录，共 1,542 次更新。257/64 向上取整为 5 workgroups，显式覆盖最后 workgroup 的越界线程 return。stationary、slow-lowering、fast-lowering、raising、strong-raising、long-timestep 全部通过。

- current_height 最大误差 `9.5367431640625e-7`。
- packed velocity 和 animation_t 与 CPU 参考全部相等。
- packed rotation 最大误差 `1.1920928955078125e-7`，即 2 个 binary16 subnormal ULP。
- 所有结果有限，其余 52 字节逐位不变。

GPU exp intrinsic 和 FMA 与 CPU libm 的舍入差异被记录。近零 exp 的 GPU 逼近带来极小正/负旋转与 signed-zero 差别；因此此验证没有伪称整条记录 bit-identical。初版 half-ULP 比较错误地把跨 signed-zero 的差别记成 65536；已改为 IEEE half 单调排序距离，并保留初版到 deprecated。

## 动画与模拟初始化

`tools/roof_animation_reference.py` 恢复：

| 原函数 | VA | 行为 |
|---|---|---|
| RoofTileSimulation::new | 0x1409e1370 | 写入 21 个有效字节；+4 保存传入 pivot_y，其余有效状态为 0 |
| RoofAnimation::new | 0x140a007d0 | 两个 f32 返回值都为 0 |
| RoofAnimation::is_being_animated | 0x140a007b0 | 第一动画参数不等于 1 |
| roof_animation 数值核心 | 0x1428085b4..0x142808673 | 构造/删除的双参数推进与夹值 |

构造时主参数增长 `dt * binary32(20/7)`；主参数旧值大于 binary32(0.99) 后，次参数增长 `dt * binary32(10/3)`。平顶的两项增长速率乘 2。删除时分别减 `4*dt`、`10*dt`。两项夹在 [0,1]。原函数另写 ECS change tick，便携模型没有伪称复现完整 ECS query/borrow/change-detection。

`animation_verification.json` 的 69 个对照全部逐位一致；三个构造/判断函数执行完整原机器码，数值核心从原函数已装入参数的基本块进入，使用显式重建寄存器输入，并在下一实体的 ECS loop 前停止。模拟结构 stride 24 来自原音频模拟 query；21..23 是原 constructor 未写的 padding，未将这 3 字节计入 constructor 验证。

原 `simulate_roof_tile_for_audio`（0x142808b60）和 CPU compute-pass 构建函数（0x140b04130）已增加完整定向反编译，位于 `evidence/reconstruction_roof/state/`。音频事件阈值、并发 ECS 访问与游戏真实 dispatch 调度尚未作为完整恢复行为计入。

## SparseInstanceBufferWriter

独立 `tools/roof_sparse_reference.py` 恢复与原 writer `0x141f49fd0` 对应的页、槽、位图：

- 每条记录 64 bytes；每槽 32 条；每页 256 槽、8,192 条、0x80000 bytes。
- page = slot >> 8；页内 record index = ((slot & 255) << 5) | used_count。
- 槽满后从 LIFO free slots 取新槽；维护 owner 的槽列表、current_slot、u8 usage。
- dirty 与 allocated 位图均以槽号寻址，不以 tile ordinal 寻址。
- free list 耗尽时，已分配页数翻倍并受最大页数限制；新页清零，新增槽按降序入栈，弹出最小新槽。
- `dispatch_ranges()` 返回每个槽所属页、first_instance 与 instance_count，可直接用于已恢复 GPU kernel 的范围参数。

`sparse_verification.json` 执行原 writer 连续 70 次 push，跨越两个 32 条边界；所有原数据、current_slot、usage、free-slot 顺序、dirty 与 ownership 位图都与独立模型逐位一致。parking_lot deadlock detector bookkeeping 被声明为 no-op，未执行 OS 锁。

`sparse_growth_verification.json` 强制 free list 空、页数 1→2；原指令分配并清零 524,288 bytes、追加 511..256 槽、弹出 256、写记录并置对应位图。10 项状态检查全部通过，新页全部 0x80000 bytes 与便携模型逐位一致。allocator 使用 scratch，OnceLock 使用明确的无争用 Box pointer/length ownership-move hook；并发 OnceLock/停车锁慢路径未执行。

`sparse_exhaustion_verification.json` 另验证最大页容量已满、free list 空的失败路径：原 writer 返回失败，页数、usage、dirty、数据全部不变，未调用 allocator，与便携模型一致。7 项检查通过。

`clear_verification_corrected.json` 重新按原指令核对 `0x141f4a6c0`：它把 owned-slot 的 usage 清零并清除 allocation/liveness 位图，保留 dirty 位图；owned 向量从尾部转移到 free-list，因此释放槽按 LIFO 重用。保留 dirty 是为了下一次 GPU flush 上传该槽的完整 32-record 范围，避免把删除后的清理误记成 dirty 清零。此前 `sparse_clear_verification.json` 的两个位图标签已过时，未用于当前结论。

## GPU flush、延迟回收与上传范围

`tools/roof_gpu_flush_reference.py` 独立恢复了 `SparseInstanceBufferWriter::gpu_flush`（`0x141f482c0`）的单线程可复用路径，并以 `MockVulkanSink` 记录每个底层写入：

- 先消费 allocation drop 移交的 owned-slot 向量；每个槽清 usage/allocated 位并逆序追加 free-list。drop 本身不立即修改 GPU，也不伪造并发锁行为。
- GPU 容量不足时按页数扩容，并把 allocated 位并入 dirty，触发所有 live 槽完整重传。
- 原子交换 dirty 位图为零；连续 dirty 槽合并为 half-open record ranges（每槽 32 条），再按 8,192-record 页边界切分。
- `0x142818d40` 将 range 的 record 起止值左移 6 转为字节范围，目标页偏移为 `page * 0x80000` 加页内起点；空槽在 clear 后仍会上传其完整范围，实际绘制由 usage/draw-range 决定。

`gpu_flush_verification.json` 的 12 项检查覆盖相邻槽合并、页内目的字节偏移、clear 后 dirty 保留、延迟回收以及 1→2 页扩容全量重传。此处 sink 是确定性 CPU/Vulkan 写入记录器；真实 Vulkan buffer 生命周期与 parking_lot 争用仍不在单线程源码范围内。

两条 callback 0x142817e20 / 0x142816720 仅 push 记录并在失败时记录日志。成功路径**不改动任意数据字段，也不规整 flags**。此前 callback_verification.json 的 8 次 0/1/2/3 flags 对照保持有效。wall_slot_id 是墙身份字段，与物理 sparse slot、页内 first_instance、辅助 snapshot Roof.id 标记不同。

## 使用

```powershell
python tools/roof_gpu_reference.py --input INPUT.tiles64 --out UPDATED.tiles64 --dt 0.0166666667 --delta -0.02 --pivot 4 --animation 0.3
python tools/verify_roof_gpu.py --out NEW_GPU_VERIFICATION.json
python tools/verify_roof_animation.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_ANIMATION_VERIFICATION.json
python tools/verify_roof_sparse.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_SPARSE_VERIFICATION.json
python tools/verify_roof_sparse_growth.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_GROWTH_VERIFICATION.json
python tools/verify_roof_sparse_clear.py --exe 'C:/Steam/steamapps/common/Tiny Glade/tiny-glade.exe' --out NEW_CLEAR_VERIFICATION.json
python tools/verify_roof_gpu_flush.py --out NEW_GPU_FLUSH_VERIFICATION.json
```

CPU reference 本身都只有标准库依赖。真实 GPU 验证需要本机 Vulkan loader，目前选择已观察的 NVIDIA device；原指令验证需要匹配 EXE、pefile 与 Unicorn。输出均写入新文件。

Circle 新补充 yaw 字段，来源原 Circle2d 的 center x/z、radius、yaw 布局。`circle_yaw_verification.json` 记录 yaw -1、0.3、8 三情景各 321 条瓦片，独立源码与原 oracle 的完整 64-byte 输出 SHA 全部一致。Width=0、Length=1 已直接核对 PDB 对应 is_width/is_length 的原机器码。

仍需恢复：完整 ECS 调度、并发争用、实际网格与最终帧渲染，以及真实 GPU 资源销毁的全部平台慢路径。单线程 GPU 上传、dirty flush、slot 回收已由 `gpu_flush_verification.json` 覆盖；CPU 音频模拟数值、tag/gain 请求与 RoofState advance 已恢复并由 `audio_simulation_verification.json` 验证，事件资源身份和完整 ECS writer 仍未闭合。这些边界不妨碍当前独立生成、稀疏数据写入及重力 kernel 的复用。
