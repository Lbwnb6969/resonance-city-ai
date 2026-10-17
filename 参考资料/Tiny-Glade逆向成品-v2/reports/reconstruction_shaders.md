# 全部着色器源码与接口还原

670 个保留 SPIR-V 模块全部产生 Vulkan GLSL 460；按源码摘要去重后 555 份 GLSL 全部经 glslang 编译通过。原模块、转换源码、回编译模块和各自摘要同时保留。它们是可读、可编译的翻译源码，不是原作者的 Slang 文本。

最终入口为 `reconstruction/shader_source_index.json`。每项连接原始 SPIR-V、GLSL 与严格验证后的派生 SPIR-V。直接转换的 654 份在 `reconstruction/shaders-source/glsl`，物理指针展开后转换的 16 份在 `reconstruction/shaders-pointer-source/glsl`。全部源码都是完整函数体，包含声明、资源绑定和 entry point。

## 物理指针链恢复

SPIRV-Cross 不支持本集合中的 OpPtrAccessChain，影响 16 模块、64 条指令。逐指令确认全部为 PhysicalStorageBuffer、四个 operand、32-bit signed/unsigned element index，指针 ArrayStride 显式为 4 或 16。转换工具依据实际 decoration，不根据变量名猜 stride。

展开公式为：

```text
address = (base_u64 + sign_or_zero_extend(element32) * ArrayStride) mod 2^64
```

用 uvec2 地址、SMulExtended/UMulExtended 乘积、低字相加及进位、高字相加、最后 Bitcast 回物理指针实现，没有引入 Int64 capability。原始文件不改写。10,144 个边界/随机算术案例全部与 Python 64-bit 模运算相同；16 个派生模块全部翻译和回编译成功。16 对原始/展开模块的 validator 结果相同，没有新增失败；其中 5 对仍带原始 Slang 的 stage-interface Offset 违规 decoration。

证据：`reconstruction/shaders-pointer-lowered/pointer_lowering.json`、`evidence/reconstruction_core/pointer_lowering_validation_comparison.json`。工具 `spirv_pointer_lower.py` 遇到本集合外的 pointer chain 会明确拒绝，不声称通用 SPIR-V 优化器。

## 编译问题与真实接口比对

一个原 debug local name `texture` 与 GLSL 的 texture() 内建函数冲突，导致 1 份源码编译失败。仅将该局部标识符改名为 tg_recovered_texture_value，保留内建调用。原未改名源码与首轮失败日志移入 `deprecated/reconstruction_shaders`。

SPIRV-Cross 反射原模块及回编译模块，递归比较 descriptor set/binding、资源类别、block size、成员 offset、array stride、matrix stride、矩阵方向和数组维度。物理指针统一为八字节地址及 pointee；GLSL buffer_reference 包装不当作嵌入 struct。

665/670 接口在标准回编译后完全一致。剩余 5 份 shader 中未使用的 runtime texture descriptor array 被 glslang 缩为 array[1]。`shader_runtime_array_restore.py` 根据原 descriptor slot，仅恢复这些 UniformConstant 声明为 OpTypeRuntimeArray，并补 RuntimeDescriptorArray capability；不修改运算、控制流或原模块。5 份恢复后均通过严格 Vulkan validation，670/670 host interface 全部一致。不能将这种局部 declaration 恢复说成全部数学等价证明。

## Vulkan 验证的 feature profile

首次严格 Vulkan 1.2 验证中，部分原模块和派生模块因 scalar uniform layout 失败。GLSL 明确使用 scalar 布局，因此另行显式启用 scalarBlockLayout profile；不使用 skip-block-layout 隐藏错误。

| 集合 | 验证结果 |
|---|---|
| 原始＋pointer 展开，共 686 路径/575 distinct | 552 distinct 通过；23 distinct 因原 stage IO Offset decoration 失败 |
| 回编译 555 distinct | scalarBlockLayout profile 下 555 全部通过 |
| runtime descriptor 恢复 5 distinct | scalarBlockLayout profile 下 5 全部通过 |
| 最终 670 路径 | 每条最终模块有通过验证的派生 SPIR-V，host interface 与原声明一致 |

没有修改原模块的违规 decoration，也没有宣称原游戏不工作。原始 shader 被发行版驱动接受与当前 validator 的严格规则是不同观察；具体失败诊断全部保留。

## 工具和可复现性

`tools/toolchain/windows-x64` 提供本次从 Khronos 官方源码 ZIP 编译的 SPIRV-Cross、glslang、spirv-val、spirv-dis，附许可证和 SHA-256。源 ZIP commit 与摘要位于 `evidence/reconstruction_core/*_build_source.json`。ZIP 没有 .git，构建系统最初错误引用外层调查仓库版本；已修正生成的版本字符串，原用于分析的工具摘要仍保留。没有把调查仓库 commit 当作 Khronos source commit。

主要工具：shader_reconstruct.py、spirv_pointer_lower.py、shader_compile_verify.py、shader_layout_verify.py、shader_runtime_array_restore.py、spirv_validate.py。分别执行翻译、指针展开、去重编译、反射比较、descriptor schema 恢复和结构验证，所有阶段留各自 JSON。

```powershell
python tools/spirv_pointer_lower.py --input evidence/shader_decode/spirv --out new-lowered
python tools/shader_reconstruct.py --cross tools/toolchain/windows-x64/spirv-cross.exe --input new-lowered --out new-pointer-glsl
python tools/spirv_validate.py --validator tools/toolchain/windows-x64/spirv-val.exe --input reconstruction/shaders-compiled --scalar-block-layout --out new-validation.json
```

[SPIRV-Cross 官方源码与说明](https://github.com/KhronosGroup/SPIRV-Cross)是转换器来源；[SPIRV-Tools 官方源码](https://github.com/KhronosGroup/SPIRV-Tools)是 validator 来源。这里的覆盖和比对结论来自本地保留模块，不来自网页。

完整 rendered-image 等价、跨显卡精度、原渲染图调度、每份 shader 的 CPU 参考实现尚未全部闭合。屋顶 gravity 已独立进行原 SPIR-V 真正 GPU dispatch，见 reconstruction_roof_runtime.md；不能把该验证推广到其他 669 模块。
