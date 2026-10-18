# 车辆分组调度生产端 · 来源与覆盖

2026-10-18定向补充，来自用户本地 `D:/SteamLibrary/steamapps/common/Cities Skylines II/Cities2_Data/Managed/Game.dll`。只读分析，没有启动原游戏或修改安装文件。

REA `inspect_managed_artifact` 的Evidence为 `ev_19687ed33f4de77a2b9ea5d66a360b05abaf35f908cd7218566009a7da35b679`，确认文件12,165,120字节及SHA-256 `aaee15c4fa41c130abaa1183840667e4faae531d67e8a9fa7536618effa2f86a`，与原六项分析同一文件。REA元数据因64MiB表示预算停止，类型/MVID等未由本次REA确立；没有把不完整元数据当成完整成功。

使用本机已有ILSpy 11.1.0.9782执行 `--disable-updatecheck -t Game.Simulation.CarMoveSystem -r <Managed目录> -o <本地验证目录>/code <Game.dll>`，退出0，得到旁边的定向C#文件。这是普通CLI反编译结果，与REA字节身份观察分别记录；C#为反编译重建，不是原始工程源码或运行观测。

`OnUpdate`用 `frameIndex & 0xF` 过滤UpdateFrame组，以 `(frameIndex >> 4) & 3` 选择历史写槽，调度CarMoveJob后登记地形读依赖和EndFrameBarrier生产者依赖。显示端的ObjectInterpolateSystem读取四槽历史计算插值。16个逻辑tick不等于16个实时画面帧，也不直接决定本作模拟频率。

适配《共鸣之城》时采用按可见度分档、稳定身份错峰与到期事件结算。沿用本作共享音乐拍钟、服务只结算一次以及编辑/存档一致要求。具体频率与CPU收益需在本作300屋、有电车场景实测。
