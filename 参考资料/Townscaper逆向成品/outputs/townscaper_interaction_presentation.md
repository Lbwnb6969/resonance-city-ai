# Townscaper 交互、界面、相机和视听系统逆向

后续补充：[UI/材质完整业务链](townscaper_ui_material_workflows.md)、[连线/地面工具](townscaper_wire_ground_workflows.md)、[原版D3D11四帧核验](townscaper_runtime_render_verification.json)。这里的静态输入模型仍不等于真实鼠标/手柄/触控硬件事件实测；新图形证据验证的是原画面与主动Graph/Maker操作。



本报告核对发行包PDB支持的原生伪代码、IL2CPP枚举/字面量以及Unity序列化场景值。伪代码文件来自已保存的同一GameAssembly.dll；这里的“分支/调用”指静态实现，鼠标操作、真实屏幕截图或鸟群动画未由这些代码文本实测。共享泛型/别名和x87/libm调用的显示类型有误差，涉及此类调用的精确浮点公式不能仅照抄伪代码。



## 输入入口与鼠标状态机



ActionInputManager读取Rewired Player动作；Zoom进入OrbitalCamera.GamepadZoom，Right Stick轴经过smooth axis、unscaledDeltaTime和反转设置后进入RotateCamera；Horizontal/Vertical/Forward进入WASDCamera。Change State正轴触发HoldUndo，负轴触发HoldRedo，并在成功时发反馈。实际默认34条键绑定、键码与轴贡献见townscaper_asset_summary.json；Z/X对应撤销/重做、W/S/A/D/Q/E对应移动轴。 [870d80 source](native_application/870d80.c:187), [870d80 source](native_application/870d80.c:282), [870d80 source](native_application/870d80.c:304)

MasterClicker直接实现Unity Pointer/Drag接口，解释了Rewired mouseMap的空占位。OnPointerClick只接受pointerId<0、非dragging、同一frame尚未处理、pointerPressUsed=false的事件。pointerId=-1（标准左鼠标）在clickTime+0.25已过时删除，否则添加；-2删除；-3取色。触控pointerId>=0在这条鼠标函数里被忽略，TouchDown/TouchUp是分开的入口。 [3d4cd0 source](native_application/3d4cd0.c:27), [3d4cd0 source](native_application/3d4cd0.c:36)

OnPointerDown先刷新hover，置pointerPressed并记录unscaledTime；存在hover voxel时开始VoxelBobEffect压下反馈。Update在按压持续>0.35秒启动即将移除音效/凹陷，0.32–1.5秒做bob插值，持续达到1.5秒尝试ColorPick，停止bobbing并将pointerPressUsed置true。这里阈值来自实际float常量0x3eb33333=0.35、0x3fc00000=1.5，0.32是插值起点而非发声门槛。 [3d4dc0 source](native_application/3d4dc0.c:43), [3d5000 source](native_application/3d5000.c:54), [3d5000 source](native_application/3d5000.c:75), [3d5000 source](native_application/3d5000.c:82)

BeginDrag停止旋转速度与按压反馈，置dragging=true、清除hover。拖拽左鼠标按屏幕短边归一化delta，使用130度比例进入RotateCamera；右/中拖拽进入PanCamera。EndDrag从5个环形drag样本取最近0.2秒内的运动，求速度后进入SetRotationSpeed，再清除dragging，形成惯性旋转。 [3d48a0 source](native_application/3d48a0.c:38), [3d4950 source](native_application/3d4950.c:57), [3d4950 source](native_application/3d4950.c:94), [3d4b40 source](native_application/3d4b40.c:68), [3d4b40 source](native_application/3d4b40.c:92)

PaintClick要求validPaint且目标voxel颜色与currentVoxelType不同，先BeginNewAction/AddAction记录旧新颜色，再Graph.PaintVoxel和SetDirty；颜色相同不添加动作。RemoveClick要求validRemove且非dragging，记录旧type→0x12（不存在）动作，再Graph.RemoveVoxel、SetDirty；点击效果在删除前产生。AddClick在此前报告中已核对validAdd/网格有效性/历史记录。 [3d4200 source](native_application/3d4200.c:36), [3d4200 source](native_application/3d4200.c:49), [3d4200 source](native_application/3d4200.c:60), [3d4480 source](native_application/3d4480.c:39), [3d4480 source](native_application/3d4480.c:85)



## UI门控、加载和设置



CanTakeKeyInput实现(menuState & 0x78d)==0。IL2CPP MenuState枚举把此mask解释为Loading(1)、SaveMenu(4)、FocusCard(8)、Credits(128)、ControlLegend(256)、Settings(512)、ControlBinding(1024)；SideMenu(2)、SunButton(16)、MouseAndTouch(32)、Gamepad(64)、ControlListening(2048)不在此mask内。GamepadCursorShouldWork则要求menuState恰好等于Gamepad(64)，不是只要带该位。 [3e5580 source](native_application/3e5580.c:11), [3e5c00 source](native_application/3e5c00.c:11)

UiMaster.MaybeSetup分hasStarted和hasSetup两层：初始化静态Instance，接管BootMaster的dim/loadingUi，遍历IUiSetup组件，然后注册控制器连接/配置、读取存档设置并再次遍历组件做setup。序列化WorldMaster.uiMaster为空并不表示运行中无UI；跨场景绑定在启动代码完成。 [3e6000 source](native_application/3e6000.c:148), [3e6000 source](native_application/3e6000.c:335), [3e6000 source](native_application/3e6000.c:394)

UiMaster.LoadString先SaveData.Clear并解码corners/voxels，解码失败立即false，成功启动协程而非立即完成建造。协程先awaitingDim=true、Close SaveMenu、Dim(state2)、StartLoading、MaybeSaveAndUnloadCurrent，yield一次；恢复后WorldMaster.Load(SaveData)和StartFinishLoading。返回true表示文本解码/调度成功，不等于网格已经完成。 [3e5d90 source](native_application/3e5d90.c:64), [3e5d90 source](native_application/3e5d90.c:72), [9c7e80 source](native_application/9c7e80.c:54), [9c7e80 source](native_application/9c7e80.c:74)

界面Update检查safeArea、orientation、dpi和screen宽高变化；完成setup后更新缓存并发safe area/screen变化回调。抗锯齿设置false或dpi>360写antiAliasing=1；启用且dpi<=180写4，其余180<dpi<=360写2。VSync函数写(vSync != false)+1，静态行为是1或2，不能改写成false=0。Fullscreen设置独立调用Screen.set_fullScreen。 [3e6fe0 source](native_application/3e6fe0.c:68), [3e6d70 source](native_application/3e6d70.c:53), [3e6d70 source](native_application/3e6d70.c:56), [3e6fa0 source](native_application/3e6fa0.c:22), [3e6e90 source](native_application/3e6e90.c:46)



## 轨道相机



实际主相机控制类是OrbitalCamera，level2:4288引用主/天空/镜面三台相机。发行场景默认zoomCurrent/Target=0.8、rotationY=0.4、rotationX=0.3，pan六个归一化量均0.5；构造函数的zoom=0.5会被场景值覆盖，minRadius=3.5、snap=true由构造设定。 [74da10 source](native_application/74da10.c:21)

Save把rotationX、rotationY、zoomTarget乘255并Clamp至0..255后以向零截断转byte（原指令设置x87 RC=11；Ghidra显示ROUND并不等于四舍五入），写cam.x/y/z。Load用1/255恢复这三量，snap=true并把pan当前位置和目标重置0.5；文本城镇编码本身只保存corner/voxel，磁盘SaveData还保存这些相机值。 [74ce50 source](native_application/74ce50.c:19), [74ce50 source](native_application/74ce50.c:23), [74ae40 source](native_application/74ae40.c:21), [74ae40 source](native_application/74ae40.c:29)

PinchZoom用nonDollyDist*比例在distMin/distMax之间InverseLerp，同时设zoomCurrent与zoomTarget；原始SSE指令补齐了伪代码丢失的libm参数：ScrollZoom使用nonDollyDist*2^(-4*input)；GamepadZoom的指数依次为float(exp(-unscaledDeltaTime))*input*0.1*(-4)，再以2为底计算距离因子，进入同一InverseLerp。中间单精度舍入仍须按原指令顺序保留。LateUpdate结合world bounds、屏幕纵横比和当前姿态计算距离限制：起始distMin=2、distMax至少4，随后按视角/纵横比等比例调整，最终min/max并非恒定2/4。 [74c6b0 source](native_application/74c6b0.c:17), [74cf60 source](native_application/74cf60.c:18), [749590 source](native_application/749590.c:20), [749a50 source](native_application/749a50.c:499), [749a50 source](native_application/749a50.c:492)

RotateCamera限制垂直rotationX在0..1，水平rotationY按周期取余并校正负值；LateUpdate对rotationSpeed做衰减并更新相机、天空/镜面和边界。原始SSE调用数据流恢复了旋转公式：a=asin(max(panHeightCurrent*heightCurrent/(-currentDist),-0.95))，rotationX=Clamp01(rotationX+deltaY/(88-a*57.29578018))；rotationY=fmod(rotationY+1+deltaX/360,1)，负值再加1。输入距离/边界条件沿用调用方；伪代码中的unaff/extraout变量不能直接重编译。 [74cd50 source](native_application/74cd50.c:29), [74cd50 source](native_application/74cd50.c:37), [749a50 source](native_application/749a50.c:283)



## 截图、缩略图和OBJ导出



ScreenshotCamera.Capture使用临时RenderTexture，配置天空与主相机渲染，执行像素读取/Texture2D.Apply，并释放临时RenderTexture。SaveImageToPath只接受精确小写.jpg或.png，jpg使用质量98（0x62）、png无该参数，随后File.Create写全部编码字节；.jpeg或大写扩展名不在此函数的两条比较内。默认截图设置2048×2048来自SaveSystem序列化settingsData。 [a05b50 source](native_application/a05b50.c:402), [a05b50 source](native_application/a05b50.c:982), [a05b50 source](native_application/a05b50.c:986), [a06cd0 source](native_application/a06cd0.c:40), [a06cd0 source](native_application/a06cd0.c:54)

存档缩略图由另一套SaveCamera.GetImage生成，使用NextPowerOfTwo的渲染尺寸、固定15度俯视/16度FOV和cam.y旋转，最后EncodeToJPG质量90（0x5a）并释放RenderTexture。不能把存档jpg的质量90与用户截图jpg的质量98混为一谈。 [9fb1f0 source](native_application/9fb1f0.c:179), [9fb1f0 source](native_application/9fb1f0.c:300), [9fb1f0 source](native_application/9fb1f0.c:579)

ObjExporter.Export读取settings.objExport.path，目录无效时使用UiMaster.DefaultPath("ObjExports")并创建目录；默认名称Town，有有效currentMetaSave时取其fileName无扩展名。FileBrowser保存对话框限制obj，返回路径交给Action；取消/空路径分支不导出。 [3e2bb0 source](native_application/3e2bb0.c:108), [3e2bb0 source](native_application/3e2bb0.c:113), [3e2bb0 source](native_application/3e2bb0.c:156)

Action调用Do生成OBJ内容，再StreamWriter写OBJ和Town.mtl，将当前houseTex.gameTex（不存在则srcTex）编码成TownColor.png。实际MTL字面量是newmtl Town与map_Kd ./{0}；Do输出建筑/水/沙/鸟等组，使用en-US文化、F6浮点格式、v/vt/vn/f与共享全局索引。AddMesh用Matrix4x4变换顶点/法线并拼接OBJ面条目，导出结果是当前世界几何而非原模块资产列表。 [3dd4b0 source](native_application/3dd4b0.c:113), [3dd4b0 source](native_application/3dd4b0.c:120), [3dd4b0 source](native_application/3dd4b0.c:174), [3dd4b0 source](native_application/3dd4b0.c:198), [3dd830 source](native_application/3dd830.c:345), [3dd830 source](native_application/3dd830.c:353)



相机/鸟群关键算式另外对6个入口共1,184字节的原始PE指令核验，见townscaper_interaction_math.json；已纠正Ghidra的ROUND显示误读。所需字面量逐一以UTF-16LE SHA-1匹配PDB `_stringLiteral{SHA1}`，保存在townscaper_interaction_literals.json；不是从未关联的可见字符串推导扩展名/输出文件名。



## 音效调度和动物生命



AudioSourcePool按(index+1)%count轮转Transform子对象上的AudioSource，每次恢复panStereo=0、pitch=1、volume=1。ManySoundsManager.PlaySound按SoundType查字典：counter原值必须<51，camera.main必须存在、世界非dimmed、位置在相机前且viewport x/y均0..1，受类型冷却和lastClick延迟门控；通过后按屏幕位置累计权重、位置、声像/参数并使counter额外加4。此函数主要聚合同类事件，不是每调用一次立即播一个音。 [873d50 source](native_application/873d50.c:30), [873d50 source](native_application/873d50.c:44), [3d3290 source](native_application/3d3290.c:62), [3d3290 source](native_application/3d3290.c:78), [3d3290 source](native_application/3d3290.c:118), [3d3290 source](native_application/3d3290.c:123)

ManySoundsManager.OnUpdate重置counter、处理聚合权重，射线遮挡时缩小volume/pitch，取音源池、设置音量/音高/声像和世界位置，从类型clip数组随机选择，调用Play，然后清空本批累积字段并设置下一次冷却。代码把在屏幕外的局部构建音与菜单音频路径区别处理；菜单UiAudio和ButtonAudio各有独立组件。 [3d2bb0 source](native_application/3d2bb0.c:149), [3d2bb0 source](native_application/3d2bb0.c:289), [3d2bb0 source](native_application/3d2bb0.c:302), [3d2bb0 source](native_application/3d2bb0.c:318), [3d2bb0 source](native_application/3d2bb0.c:326)

BirdFlock持有坐/半坐/站/着陆/拍翅/飞行/滑翔7种网格，landings决定理想数量。CalculateOptimalLandings仅在dirty时重算；landingCount<1时min/ideal/max全部0，否则sqrt后减6、Clamp到0..64，ideal取Floor，min=int(max(0,0.9*F-2))、max=int(max(0,1.1*F+2))均向零截断。原始SSE/x87指令已核对sqrt输入为先转float再转double的landingCount、返回转换及6/0.9/1.1/2常量；这些算式与截断不再依赖伪代码缺失的libm签名。 [879180 source](native_application/879180.c:23), [879180 source](native_application/879180.c:25), [879180 source](native_application/879180.c:37), [879180 source](native_application/879180.c:27)

鸟群OnUpdate含五态Boiding(0)、Landing(1)、Stopping(2)、Stopped(3)、Leaving(4)，查找/预占落点、切换状态并更新位置/旋转。IterateBirdCreation只在activeBirdsCount<minBirdCount时继续创建/重用Bird，随机停靠时长和拍翅音效；UprootBird/UprootRadius使建造或删除附近动物离开落点。具体随机序列、鸟群数量变化和视觉动画仍是静态模型而非已录制行为。 [879c30 source](native_application/879c30.c:201), [879c30 source](native_application/879c30.c:187), [87aea0 source](native_application/87aea0.c:846), [87aea0 source](native_application/87aea0.c:883)

ButterflyFlock的Flying(0)、Stopping(1)、Stopped(2)与鸟群分开；更新记录前后position/velocity/rotation，使用PerlinNoise飞行并查找花/植物landing。Stopped分支先将velocityNext清零，Random.value<0.004重新进入Flying；这是每次该分支执行的概率，不能直接换算为每秒概率而忽略调度频率。场景组件含拍翅/坐/坐拍翅3种mesh和active/disabled容器。 [8811c0 source](native_application/8811c0.c:380), [8811c0 source](native_application/8811c0.c:397), [8811c0 source](native_application/8811c0.c:777)



## 可复核边界



- 以上证据覆盖交互、界面调度、相机存储与投影控制、两条图像路径、OBJ三文件输出、音效聚合和鸟蝶状态机。全部业务方法的原生伪代码索引在native_application/index.tsv；存在的artifact不等于逐条视觉行为已实测。

- 运行时启动记录townscaper_runtime_startup.json独立回答headless世界state推进与初始化返回；它没有窗口像素、真实鼠标事件、截图编码结果或手柄硬件记录，不能据此将本报告全部分支标为runtime已验证。

- 未在本报告逐项重写的复杂LateUpdate浮点表达式、平台特定输入设备采样、可见GPU输出与随机生命动画的复现精度需要对应运行条件；本报告没有虚构这些验证。
