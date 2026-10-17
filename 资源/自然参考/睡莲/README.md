# 睡莲原资源与本作适配

来源为本机Tiny Glade商业游戏，只读原件与既有恢复工具；非CC0，用户授权的本地研究/适配不等于版权方再分发许可。精简协作库继续剔除二进制与原资源。逐源路径、原SHA、输出SHA、属性float32/int32摘要、PNG解码像素SHA见同目录 `提取记录.json`。

运行 `python tools/extract_creation_lilypads.py`，仅创建新输出，任何目标已存在即拒绝覆盖。原JSON逐字节复制，无坐标、拓扑、法线、顶点色变换：叶12点、16索引三角（10有效、6退化保原），花80点、60索引三角（40有效、20退化保原）。根/局部变换恒等；叶半径约.33m、Y=0，花高度约.226m，精确bounds/半径见记录。叶含Vertex_Position/Normal/Color/UV/stem/wind_bend，花只含Position/Normal/Color；indices均是独立buffer。没有生成GLB、没有原动画。

`叶形.png` 是精确定名 `lilypad/alpha` 的256² BC7_UNORM原基级RGBA解码，不重采样、不gamma变换；作为数据纹理取R。原 `lilypad/000.vert:306` 重新生成 `position.xz*1.5+.5` UV，JSON自带UV不能直接替代；`001.frag:92` 按 `R<mix(0,.9,seed)` 裁弃。Godot导入应禁用fix_alpha_border与premult_alpha以保RGB原texel，不将数据R当sRGB。

`花色.png` 精确定名为 `lilypad_flower`，原summer/flowery/olden `assets/glade/*/textures.json:8` 均绑定此名，秋季另有lilypad_flower_autumn不在本轮。256² BC7_SRGB原基级RGBA解码，未在线性化时改像素，运行时作为source_color采样。原 `lilypad_flower/000.vert:265` 的UV是最终世界XZ*.1；`001.frag:90–101` 还按世界高度混采样色/顶点色，不能把此纹理叫花瓣UV图集。两JSON原Vertex_Color数值保持，不额外做sRGB转换。原渲染器受光/Gbuffer/季节混色/动态水波不包含在资源提取内。

本作使用稀疏静态共享实例、池塘真水位/净空与身份稳定派生；密度、花概率、缩放、平面偏移及性能预算由产品选择，不照搬TG园林遮罩阈值。脚本仅Python资源字节/属性/PNG回读核验，没有Godot、GPU、碰撞、画面或性能通过结论。

Phase7运行导入只滤掉叶索引末尾6个(0,0,0)填充，提交10个有效叶面；花沿用源60个索引三角。原JSON仍保留恢复数据。池塘中心岸距限-.85～-.25m，完整叶圆避开道路/房屋与干岸。实际MultiMesh和三角数见 `验证记录/四库路线_2026-10-17/Phase7/live.json`。
