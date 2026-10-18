# Tiny Glade 草地世界乘色场

按用户明确允许直接使用三个逆向项目实现、参数与可用资源的指令，本项目接入单张已还原纹理 `grass2/world_albedo_tint`；运行只读本目录PNG，不依赖原游戏安装。

- 原件：`C:/Steam/steamapps/common/Tiny Glade/compiled-assets/texture-package/8ae8acb416e1ce85126c81d2b8a9bb36.bin`，512×512 BC7_SRGB，349580字节。
- 原件SHA256：`8d4a1ab1b221d4dc9d26e0d3a5587ad7fe79ff713e4d31efe482db9a32970e21`。
- 本目录 `grass2_world_albedo_tint.png`：512×512 RGBA，429460字节，SHA256 `8d8cdf16d3ba868bafa2a32a94da1293a753f99b37c1559e15e669ba1b35d3e0`。
- 单资源提取器：`参考资料/Tiny-Glade逆向成品-v2/tools/recovered_resources.py textures --name grass2/world_albedo_tint --png`；实际参数、原输出清单/DDS留在 `备份/草毯成片前_20261015/TinyGlade原件/`，原件未修改。

原Grass2 `card_splat_resolve/001.frag:192–215` 按母簇中心 `xz/128+.5` 镜像重复采样，以线性 `local_palette ×5.6897139549×world_tint` 相乘。本作保该坐标/镜像与乘色式，使用现有绿色基底代替原card palette，按纹理线性均值归一曝光、42%混合；草簇按中心取色，地面按世界位置取同场。它是灰紫乘色场，不能直接当绿草albedo，也不能叠加另一base-bake管线的1.422428系数。

Compatibility中 `OUTPUT_IS_SRGB=true`，本作显式转到线性计算后转回工作空间；`source_color` hint仍保留。实际GL色块测试覆盖恒定均值保持亮度和两组有色输入，与独立Color线性计算一致。Forward+路径未实窗验证。原每card颜色/法线palette与完整Grass2渲染器未移植。

此纹理是原游戏资源，不标为CC0或本作原创。当前Godot运行需要这张PNG，GitHub保留精选运行资源及此出处说明；完整原游戏资源包与批量导出仅在本地。
