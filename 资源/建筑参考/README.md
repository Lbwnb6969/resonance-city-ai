# 教堂悬钟资源出处

提取命令：`python tools/extract_creation_bell.py`。脚本只读原件，以独占创建方式写入新资源与本说明，不覆盖既有文件。

- 原始恢复资源：`参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/glb/game/asset/Buildings/Church/Model/Church.glb`。
- 原件 SHA256：`456bd65a164b1440981cea70ba0b10dd239727a6a02653c5fc4b349daaab93f1`；原恢复库出处见 `参考资料/Foundation逆向成品-2026-10-13/outputs/foundation-models/README_MODEL_RECOVERY.md`。
- glTF mesh 158：`ChurchBellTowerTopPart_ChurchBell`，节点 312 `ChurchBellTowerTopPart_6`，原钟楼顶节点 303。
- 314 顶点、1026 个 uint32 索引、342 三角形；仅保 POSITION、NORMAL、_SOURCE_NORMAL 与 indices。逐属性有效元素字节与原 GLB 完全相同，保留原顶点/索引顺序；_SOURCE_NORMAL 是恢复库保留的原始法线槽，NORMAL 是其标准 glTF 法线。没有迁移其他模型、UV、纹理、原材质或动画。
- 原 POSITION bounds：min `[-0.5570217370986938, 0.5011568665504456, -0.5585412383079529]`，max `[0.5318357944488525, 1.7830458879470825, 0.5001165270805359]`；实读全部顶点核对一致，索引范围 0–313。
- 根节点 `FoundationHangingBell`，子节点 `OriginalChurchBell`；只通过节点变换将底部中心移至原点，统一缩放 `0.293886014220059`，顶点 bytes 不变。
- 导入后米制尺寸 X/Y/Z：`[0.32, 0.37672925517070893, 0.3111247110931368]`；宽 0.32 米、底部 Y=0，钟口朝下。视觉使用方可整体缩放或覆材质后合批。
- 本作自定义材质 `ResonanceMatteCopper`：baseColorFactor `[0.49,0.31,0.14,1]`、metallic `.25`、roughness `.82`，不是 Foundation 原材质还原。
- 抽出 GLB：`教堂悬钟.glb`，17252 bytes，SHA256 `d73cdfe41136ec55e1b67634f612321af1f83a69053a46311df71d0cd0b1e90d`。

许可与范围：该钟体来源于 Foundation 商业游戏资源的本地研究恢复，按本项目用户授权用于本地参考与适配；非 CC0，也未取得独立再分发许可。本说明不将用户授权表述为版权方许可。完整资源保留在本地工程，精简协作库剔除 GLB/纹理等二进制。没有修改原游戏、原恢复库或其资源；未验证游戏原生动画与最终材质像素等价。
