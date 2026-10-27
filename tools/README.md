# 当前3D工程工具

游戏入口与能力状态见根 `PROJECT.md`、`AI_START_HERE.md` 和 `文档/Demo快速开始.md`。旧P0/2.5D工具及说明已按依赖归档到 `废弃/`，不作为当前入口。

| 工具 | 用途 |
| --- | --- |
| `check_ai_harness.py` | M01～M22任务原文契约、完成证据、四主文件棘轮与入口120行/15KB审计；单元验证运行 `python -B tests/test_ai_harness.py` |
| `check_creation_harness_live.gd` | M01隔离OpenGL烟测：两分辨率昼夕夜、5°/10°/15°低视角、真实Master录音峰值与帧时；PNG人工检查后记入verified_by |
| `sync_github_main.py` | `prepare`核对跟踪树差异与<100MB体积，`push`同步GitHub main；本地完整参考原件不上传 |
| `creation_bundle_audit.py` | 当前主场景的资源依赖闭包、三库来源记录与真实包资源审计；独立于旧P0打包器 |
| `bake_creation_music_bank.gd` | 从GDScript合成可重建PCM缓存；GitHub不存二进制缓存，导出或银行缓存验证前先运行 |
| `build_creation_bundle.py` | 仅用户明确要求时打本地试玩包；使用独立3D审计与隔离运行探针 |
| `build_creation_playtest.py` | 用户要求Windows试玩时导出；自动运行实际release EXE，核对两张GPU距离场及昼夕夜近远景，不以编辑器加载PCK代替 |
| `check_creation_spatial_popover_live.gd` | 屋顶罗盘两分辨率真实控件、相机跟随、保存及撤销验证 |
| `check_creation_edit_latency.gd` | 同一28屋样例的远岸、近路、改色编辑准备/提交帧时 |
| `check_creation_v3_experience.gd` | 旧v3综合探针；固定窗光/旧和声/混音断言待适配，P多屋拾取失败待核对；M01入口用当前HUD与隔离烟测，原失败证据保留 |
| `extract_creation_ambience.py` | Foundation溪流适配资源的定向提取，输出不覆盖现存原件 |
| `check_creation_phase_seven_alignment.gd` | 当前品质经营与首批地标整体验收；旧阶段文件名不作为当前阶段编号 |
| `fixtures/` | 可随仓库使用的回归数据；长路夹具独立于个人备份目录 |

本机Godot为 `D:/GODOT/Godot_v4.7.2-stable_win64_console.exe`。GDScript验证使用 `--path . --script res://tools/<工具>.gd`；只运行与当前变更直接相关的验证，实窗截图/帧时统一由根任务执行。

旧2.5D工具、失效的55MB导出器、依赖私人备份的单轮对照已移入本地 `废弃/主仓库旧体系归档_2026-10-18/`；本次依赖计划与结果见本地 `验证记录/仓库清理_2026-10-18/`。日常不自动导出便携ZIP，保留当前回归测试、个人 `user://` 数据和四库原件。

十二阶段对齐：`check_creation_phase_nine_alignment.gd` 核对30m总站门槛/真实派车；`check_creation_phase_ten_alignment.gd` 核对8桌120株/三拱植物宫/双倍野花。均支持headless单元与 `-- --live --isolated-session` 实窗。植物宫夹具通过真实居民茶聚与公开植被接口生成有效台账。

M02实窗：`check_creation_low_view_live.gd`捕获两城×昼夕夜×5°/10°/15°×两朝向，并审计所有GPU容量槽、LOD/编辑/撤销、真实Master录音。`check_creation_wish_closure_live.gd`支持`--resolution=1440`或`--resolution=1024`独立进程核对鼠标首炉延迟、真实携物路线和库存；使用`--out-dir=res://验证记录/...`隔离输出。

M05：`check_creation_courtyards_live.gd` 默认运行六类邻接预影/预听实窗，输出 `验证记录/M05/邻接预影`；历史庭院综合探针完整保留，可附 `--legacy-courtyard` 调用，旧9轨约束不代表当前12轨验收。CPU对应 `tests/test_city_creation_chemistry_preview.gd`。

M06：`check_creation_cluster_choir_live.gd` 追加真实76秒双岸问答/呼吸与双分辨率昼夕夜采样；`test_city_creation_phrase_tide.gd`验证乐句策略。修改音乐主脚本使声部库整文件签名变化时，先运行两项`bake_creation_*bank.gd`；`check_creation_bank_revision.gd -- --isolated-session --before-bank=res://废弃/<归档>/城市同步声部库.res`可核对全3907条PCM与循环端点。

M07：`check_creation_biome_music_live.gd -- --isolated-session --keyboard-only` 保留台地实际居民踩阶，并追加无种子手绘高地真实鼠标、庭院八拍、水车两正拍和真实电车到站；输出 `验证记录/M07/空间节拍器`。CPU阶键覆盖10调式、1米阈值与旧图，阶面测试覆盖30438个高度样点。全部实窗加 `--rendering-method gl_compatibility --audio-driver Dummy`。

M08：`check_creation_spatial_popover_live.gd` 保留真实改名/用途/配色/撤销，再运行四层中空模型拾取、三页310px手卷、翻到第六地标及阅读时真实建房/撤销/拖转；CPU `test_city_creation_spatial_scroll.gd` 覆盖多朝向与屏边布局。证据 `验证记录/M08/中空罗盘与手卷`；`check_creation_personalization_live.gd -- --isolated-session --out-dir=res://验证记录/M08/色翼回归` 覆盖自由色轮与加建回归。

M09：`check_creation_chords_live.gd` 对五配方先真实移除一项条件，再通过正式施工API完成；记录共享音频时钟的0.1875s顺序、4cm实际视觉枢轴位移、伙伴金弧、微章与五线谱到达。附加真实首炉/面包顾客升级/古钟塔光环及撤销/读档静默，`--juice-extras-only`可单独复核后半段。截图读回内存，连锁结束后写PNG；证据 `验证记录/M09/多米诺连锁`。CPU `test_city_creation_juice_feedback.gd`。

M10：`check_creation_score_modifiers_live.gd` 保留旧时代章程/连续问答验收，追加真实出炉、茶聚、送装、心愿赚取共鸣→鼠标三选一/撤销重做→收藏并重新打开→继续实际成长及新和弦防重刷。`--harmony-only`只跑新闭环；全部使用GL/Dummy/isolated-session，输出`验证记录/M10/共鸣手札`。CPU `test_city_creation_harmony_journey.gd`涵盖100级研习、18札效果、Schema19合法性、全部章程共生与真实茶客断路；旧章程 `test_city_creation_score_modifiers.gd`、茶聚 `test_city_creation_cafe_life.gd`与旧档375项保留。

M11：`check_creation_intuitive_guidance_live.gd`默认先跑原84项鼠标新手，再验证四类真实造景、保存未完成页/完成赐福、换页、撤销读档防重领、三次自然晋升与6秒双钟/微法线暖金波、三章程手记及真实领奏+0.6dB。可用`--vignettes-only`单独迭代后半段；证据`验证记录/M11/林间奇遇与时代盛典`，全部GL/Dummy/isolated-session。CPU `test_city_creation_vignettes.gd`含重做旧几何防刷，配合eras、phrase_tide、harmony_journey、score_modifiers与legacy_roundtrip。`city_creation_recording_span.gd`可记录一段真实交互全过程，不增音频声部。

M12：`python tools/check_creation_long_session_journey.py`顺序启动六个GL/Dummy/isolated-session进程（1440×900、1024×768各day1/day2/qa），首日保存退出后由真正不同PID读取同一作品、扩建到50屋并自然解锁四时代；生活模拟加速，声音及三场六秒仪式走实际时间。每次日2实际录Master约150秒、核两轮留白/八乐句/固定声音池；QA检查127屋GPU槽、四层屋中心/邻屋/二级用途坞避让、昼夕夜与漫步5°/10°/15°、漫步收藏保存。`--phases qa`只重跑画面；`--resolutions 1024`只跑该分辨率。直接GD工具需显式`--phase=... --resolution=...`，支持`--out-dir=res://验证记录/...`供独立验收隔离。输出`验证记录/M12/<分辨率>/<phase>.json`、PNG、WAV与时间戳日志；suite.json为最近一次批次，full_suite.json保留本轮完整六进程结果。CPU为spatial_scroll、juice_feedback与legacy_roundtrip；M12规范验收还须两项纪律检查及sync_github_main.py prepare。

M13：`test_city_creation_modern_architecture.gd`验证四屋顶/三立面实际几何、JSON稳定派生、原Box拾取、受光纸纹批次、暖光天窗与无状态写入。`check_creation_era_streets_live.gd`保留原34项，再附四原型发布/切时代撤销/恢复与双分辨率近景、昼夕夜、10°及UI检查，输出`modern_archetypes.json`；实窗加GL/Dummy/isolated-session，可设`--out-dir=res://验证记录/M13/现代原型`。未施工的M14～M22模块留在用户原件目录，按里程碑逐项接入。

M14：`test_city_creation_render_safety.gd`新增三变体四树种的14×6曲面/副簇顶点与法线有限检查。`check_creation_low_view_live.gd`保留两城所有GPU槽与36张低视角，再追加真实栽种的橄榄/金叶/柏树/灌木双分辨率5°/10°/15°昼夕夜；可用`--foliage-only --out-dir=res://验证记录/M14/...`只重拍树冠。共享叶shader独立为`creation_foliage.gdshader`，原触摸/风动/四时参数保留，录音/个人档/固定池检查不变。

M15：`test_city_creation_juice_feedback.gd`追加金弧横向UV、14cm曲顶与八槽回收。canonical `check_creation_chords_live.gd`保留原98项，再附窗光共享场/双分辨率昼夕夜真实道路像素A/B与公共石路/池塘沙岸造景九项；新22张PNG在`验证记录/M15/双色金弧与窗光`，`lighting.json`保存实际红通道增幅。`--lighting-only`可独立补拍新10项。金弧色芯继续使用原wall纸纹/AO，首次绘制用开场零透明度微网格预热，避免首个真实和弦编译停顿。

M16：`test_city_creation_harmony_journey.gd`含独立`tests/helpers/city_creation_tradition_rules_checks.gd`，共230项；`check_creation_tradition_rules_live.gd`以隔离合法测试信用逐项验证空间法则，44项覆盖真实缓坡网格/原生阶键/2树瞬发/6m活水及18卡排版，52张PNG与Master在`验证记录/M16/手札空间法则`。真实赚取、鼠标选札及续玩用原`check_creation_score_modifiers_live.gd -- --isolated-session --harmony-only`27项复核。

M17：`test_city_creation_tradition_synergy.gd`59项覆盖18札去重/2至3阶/真实生活奖励与旧茶基线；canonical `check_creation_score_modifiers_live.gd`75项，`--schools-only`仅跑新25项，`--harmony-only`原27项。流派图与实际阶键双音/原音/WAV/报告在`验证记录/M17/四大学派`，`octave_pcm_analysis.json`记录880Hz新增高八度；最终完整日志`M17_canonical_live_final_console.log`。

M18：`test_city_creation_poems.gd`覆盖新增8篇真实公共造景、时代/合法选址、二阶与Schema19；原`test_city_creation_vignettes.gd`81项保持。canonical `check_creation_intuitive_guidance_live.gd`保留完整自然引导/原4奇遇，再附十二诗新夹具；`--poems-only`只跑新增部分。双分辨率来信/昼夕夜/双拱与空廊低视角、二阶续玩及Master在`验证记录/M18/十二风物诗`。拍摄前通过原生点击收好待选札；实测品质粒子初始隐藏、真实发射可见、结束隐藏，避免Compatibility未发射缓冲显形。

M19：`test_city_creation_strum_hold.gd`42项保留输入所有权与独立0.45秒冷却/十调式递增；canonical `check_creation_strum_hold_live.gd`保留原32项，再运行`city_creation_arpeggio_stroll_live.gd`的五屋→树→池→真实石阶八音、实际4cm、原生WASD漫步与5m微光/原生俯仰。真实播放器PCM、Master、双分辨率昼夕夜与暂停同帧A/B在`验证记录/M19/琶音与漫步`，FFT结果`pcm_frequency.json`；全程GL/Dummy/isolated-session。原探针空白鼠标锚点避开新增共鸣徽章，先poll真实成长/来信建立完整快照基线。

M20：`test_city_creation_heritage_draft.gd`80项覆盖六种真实新地貌、图鉴权限、单份开局传承、原生经验不变、选札/撤销重做/JSON与防重授；配合原acoustic_archive33/harmony230/legacy375。`check_creation_phonograph_live.gd`保留真实图鉴大奖、混音回放与原色饰/调式，附跨城图鉴逐弦、原生两次新地貌/传承选札/待选仍可建屋及四流派烟火手卷，输出`验证记录/M20/传承与烟火`。原`check_creation_ledger_focused_live.gd`验证L/Enter/Esc/Tab/滚动与只读性，等待实际.22秒开卷Tween，并先poll真实来信/成长建立完整快照基线。全部GL/Dummy/isolated-session。

M21：`test_city_creation_road_prepared_inputs.gd`以60路完整冷编译对照验证一次装饰交接/消耗与跨revision失效，配合clockwork/legacy。`check_creation_paper_ui_live.gd`完整HUD/原生明信片按钮并附四时代实际127屋的双分辨率昼夕夜明信片；`--postcard-only`可独立核24项印记/逐像素原图/临时标记恢复/录音。输出`验证记录/M21/明信片`；诊断`city_creation_render_capture.gd`与原始测试截图通道不盖印。另跑原`check_creation_city_load_live.gd`核127屋60路隐藏安放/字段GPU精确回读/槽位身份，不以固定FPS作门槛。全部GL/Dummy/isolated-session。

M22：`python tools/check_creation_long_session_journey.py`默认写`验证记录/M22`，1440/1024各独立day1→退出→day2→qa六进程；`--out-dir=res://验证记录/另目录`保留旧M12证据。day2真实150秒窗口/两轮呼吸，qa保留127屋/罗盘/金弧/低视角并重跑原生递增琶音/漫步、现代4原型与油画树冠；琶音工具新增可选输出目录以免覆盖M19原证据。`check_creation_large_town_live.gd -- --isolated-session --out-dir=res://验证记录/M22/300`生成/保存真实300屋；已有同目录authored_300_world.json可加`--reuse-fixture`。完整工具检居民/编辑/24秒混音/54图；仅机位补拍可加`--views-only`，检查全部真实ground-cell外1.35m与完整作品只读，不替代完整功能/音频门禁。GL仍带--rendering-method gl_compatibility --audio-driver Dummy。所有性能数值仅作体验参考。


M23：`check_creation_house_styles_live.gd` 为当前新古典/真实罗盘实窗入口（委托 `check_creation_neoclassical_live.gd`）；统一GL兼容/Dummy/隔离参数，默认输出 `验证记录/M23`，可用 `--out-dir=res://验证记录/M23/final`。覆盖双分辨率六屋昼夕夜/真实相机5/10/15度、原生选屋/风貌与CtrlZ/Y、隔离保存回读、原始PCM固定音池及Master录音。历史旧面板探针留在本地废弃/M23_旧样式实窗工具。


M24：`check_creation_courtyards_live.gd` 默认顺序验证六类原造景预影及新古典公共三型（`check_creation_civic_live.gd`），使用GL兼容/Dummy/隔离参数，默认输出 `验证记录/M24`，可加 `--out-dir=res://验证记录/M24/final_cap`。`--chemistry-only` 仅重验预影；`--civic-only` 跳过预影，仅补验公共体量。旧2026-10-16庭院原探针保留 `--legacy-courtyard`，其旧UI/音池断言不作为本轮通过证据。


M25：modern_architecture CPU311与era_streets canonical55验证阿尔卑斯前三型、真实顺坡支承/连续山脊/四生态顶及空廊；GL/Dummy/isolated-session，输出参数--out-dir=res://验证记录/M25/final_bridge。

M26：test_city_creation_architecture_choice.gd验证六现代/六古典空间选择、Schema19与事务；check_creation_personalization_live.gd保留原色盘/加层/花园并附六现代72张双分辨率昼夕夜低视角、真实原型按钮/CtrlZ/Y/隔离JSON与连桥净空。GL/Dummy/isolated-session，--out-dir=res://验证记录/M26/final；Master.wav在同目录。


M27：test_city_creation_sky_apertures.gd以实际索引网格射线验证三变体天光孔，并核阶侧接地三角贴地/渐隐；check_creation_low_view_live.gd保留原两城安全检查，再附双分辨率自然与台基/石阶24近图，输出--out-dir=res://验证记录/M27/verified。台基合批后按共享shader及实际顶点核验，避免依赖临时节点名；完整实窗使用GL/Dummy/isolated-session。


M28：test_city_creation_citizen_visual.gd验证共享身份/道具资源、主体绘制预算与真实购买/送装；配合greetings、bakery_life、workshop_life与worker_lod。check_creation_greetings_live.gd保留原原生回应，再附42张双分辨率透视近景真实持物/相遇/茶杯、夜灯及Master；--out-dir=res://验证记录/M28/grounded，GL/Dummy/isolated-session。


M29：test_city_creation_phrase_tide.gd保留原55并扩至73项。check_creation_cluster_choir_live.gd默认M29，支持--out-dir=res://验证记录/M29/final；附104秒三真实聚落四周期领奏/句尾317帧与固定音池/72秒呼吸记录，104秒真实室内乐与呼吸.wav和phrase_tide.json在同目录。使用GL/Dummy/isolated-session；生活cue由既有公开声学入口发出，不改库存。

M30：test_city_creation_local_service_cache.gd七类公共编辑145项冷等价；check_creation_edit_latency.gd支持--out-dir，完整23项；check_creation_large_town_live.gd完整入口附三类编辑及撤销冷等价，可--local-only单独复验六项。复用300夹具先复制authored_300_world.json到新输出目录再--reuse-fixture，避免改原件。GL/Dummy/isolated-session。性能取budget.latency_ms，补充total_ms包含冷对照耗时；M30/three_edits_compare.json保存改前/后相同CPU输入和逐字段结果。

M31：check_creation_paper_ui_live.gd完整293项（--out-dir=res://验证记录/M31/手札_verified），--compact-only单独验证双窗口20项；完成章节夹具只改呈现rows，不写存档奖励。check_creation_spatial_popover_live.gd完整66项（--out-dir=res://验证记录/M31/罗盘_pass）；子探针与明信片跟随新输出目录，不覆盖旧证据。统一GL/Dummy/isolated-session，先等容器布局再ensure/原生点标题。

M32：long_session_journey.py/live和large_town_live默认输出M32；原M22证据保留。QA追加FinalPrototypes两尺寸各48图/十二原型实际短名与物理拾取/JSON冷重绘；1440阶段再跑小人、接地与紧凑手记（子工具自身覆盖两尺寸）。几何夹具跨世界后，小人另开真实新场景并通过作品加载切城，拍照先更新当前近景LOD。失败阶段可用--resolutions和--phases单独重验，保留成功长录；M32/suite_final.json列出本轮六阶段最终成功源。大型场景音频检查核对原PCM哈希、播放器身份及原缓存池归属，允许正常乐句变奏换源。


M33：`test_city_creation_music_experience.gd`核首屋/双屋、四时代、-1.2dB退让与专用钟楼声源。`check_creation_music_experience_live.gd`使用原生GL/Dummy/isolated-session，`--out-dir=res://验证记录/M33/另目录`隔离输出；可用`--cafe-only`、`--bell-only`、`--mill-only`独立验证合法公开视图/库存/地标。实际Master、双尺寸PNG、声池身份与个人档字节均留证。大城单采样窗错过的短音不伪装为通过，保留原日志并用对应真实公共地标单独复验。

M34：`test_city_creation_smooth_variation.gd`核实际AudioStreamPlayer的延迟换流/音量保持、十调式六音阶、实际四时代编辑音色和共享混响/总线回收。`check_creation_smooth_music_live.gd`连续52秒实录与原生状态编辑，检查每次切轨时间、pending主轨没有强制-60dB坑、六次真实建屋依次发声、双尺寸昼夕夜和原音池；默认输出`验证记录/M34/live`，支持`--out-dir=`。`analyze_creation_master.py <WAV...> --out <JSON>`用NumPy测峰/RMS/20ms包络/频谱；本机可用Codex bundled Python运行，指标不代替主观审听。每两项与M41/M42将原图/录音诊断交独立上下文Critic，原始报告保留在本地验证记录。

M39：`test_city_creation_meadow_gait.gd`核共享形态、左右腿、屈腿坐姿与权威坐标不变；citizen_visual/citizen_lod和原生meadow_clumps/meadow_drifts保持。`check_creation_meadow_gait_live.gd`使用GL/Dummy/isolated-session，附`--gait-sequences`采集真实生活24帧序列，`--large-only`读原300屋夹具记录可见/离屏模拟；支持`--out-dir=res://验证记录/M39/verified`，不同轮证据不覆盖。记录性能实测，不设固定耗时门槛。

M40：`test_city_creation_season_stamps.gd`核18轮廓边界/区分、四时声部/相位/包络与原气候事务；`check_creation_season_stamps_live.gd`原生GL/Dummy/isolated-session采18种实际罗盘双尺寸及4时节图，支持`--out-dir=`。只读截图前让现有传世/奇遇正常初始化，再冻结其轮询，比较完整存档；模式切换使用真实天气印章。紧凑手札沿用`check_creation_paper_ui_live.gd --compact-only`。

M41：`check_creation_aesthetic_music_subagent_gate.gd`必须GL/Dummy/isolated-session；继承真实音源验收并追加52秒换流事件/PCM、18实际原型216图（`--full-angles`为468图）与小人。`--gait-sequences`含茶客72帧，其余24帧。`analyze_creation_continuity.py WAV events.json --out report.json`逐采样滑动20ms并区分发声/静音采纳，不以包络代替审听。`check_creation_meadow_gait_live.gd --tea-only --gait-sequences`定向复拍杯掌，`--large-only`核300屋；`check_creation_organic_boughs_live.gd`与`check_creation_prototype_resonance_live.gd`均新增`--out-dir=`隔离旧证据。Critic每个上下文限2～3张原图，结构化保存缺陷/未评项，避免超大图组413。

M42定向原生复拍：`check_creation_m42_refine_live.gd -- --isolated-session`，只重建圆拱与两处玻璃受检场景；完整图集和跨进程续玩沿用M41门禁/long_session_journey。

M43：`check_creation_ancient_architecture_live.gd -- --isolated-session` 原生双尺寸/昼夜/低角32图与实际射线；`--geometry-only`只跑物理/旧档/录音，不重复图片。

M44：`check_creation_house_rotation_live.gd -- --isolated-session` 原生按键/物理拾取/实际斜街采购/4时代/斜放内院/冷读；`check_creation_rotation_input_guard_live.gd` 专测草稿与相机release、斜墙非门位吸附。日常Q/E90°、R自由，单击/R/Enter确认，Esc/右键取消。

M57：`check_creation_musical_toys_live.gd`真实P/V点击、12s源独奏、邻人合法步行/中途冷档、两岸.75s回声与静音/停工/删路Undo；`check_creation_archway_details_live.gd`补四时代真实挂件、穿廊下的地面行人和奇观V聚焦。两者GL/isolated-session，输出可用`--out-dir=`隔离。CPU `tests/test_city_creation_musical_toys.gd`验证推导/实际移动/原日程/冷读。
M58：跨进程day1先从林水或用途浮窗回筑屋、收好手札后实际展开来信；day2新纪元从统一手札领取已经赚取的页，旧独立章程仍由旧档工具覆盖。默认长录仍约150秒，不把此段标成3分钟；`--resolutions`/`--phases`可定向跑所需旅程。

M59：`tests/test_city_creation_road_curve_geometry.gd`核RDP/向心Catmull与精确二次曲线/数组存档；原生`check_creation_three_road_modes_live.gd -- --isolated-session --out-dir=res://验证记录/M59/complete`双尺寸真实三印章、定点/拖画/Tab/取消/升级/撤销，`test_city_creation_road_chain_live.gd`保留锁段与文本输入回归，输出首参数在`--`后（并带`--isolated-session`）。

M60：`tests/test_city_creation_road_ruler.gd`核真实段切线/两侧角度/圆心半径/端点切线/非圆曲率。原生`check_creation_road_ruler_live.gd -- --isolated-session --out-dir=res://验证记录/M60/final`双尺寸Alt/相交罗盘/正圆与落地。三模工具等待UI真实位置稳定，device92隔离外部原生输入，仍经Viewport真实GUI点击，不直接调用选项方法。

M61：CPU `tests/test_city_creation_road_closure.gd`检查真实段中投影/曲线控制点/自闭合/多段平面环心及净空/冷读；原生`check_creation_road_closure_live.gd`双尺寸段中接路/真寻路/金环/自闭合泉/撤销/音频，`check_creation_road_loop_details_live.gd`补真圆半径闭合、四曲路成环/喷泉近景碰撞/桥端口。参数同`-- --isolated-session --out-dir=...`。空城自然声单独命名，闭合Master在真实点击前开启录制，不拿低电平自然声当泉声。

M62：`test_city_creation_organic_corners.gd`32项核旧档/切角闭合体积/法线/共墙；`check_creation_organic_corners_live.gd`原生GL/isolated-session/--out-dir采实际微雕印章循环、真实墙角与檐口射线、双层合檐、旋转换色、圆厅暂存清除/Undo/恢复、冷读与Master。最终accepted46；实测几何/装配分片/编辑帧记录不设固定耗时门槛。

M63：`test_city_creation_hinged_wing.gd`66核真实曲路、稳定铰链轴、接缝占地/封顶/门口/草缘/磁盘旧档；`check_creation_hinged_wing_live.gd`原生GL/isolated-session/--out-dir核叶章/滚轮/右键、代理拾取、真实端墙加建与冷读。`check_creation_hinged_wing_details_live.gd`另核双层Z/-X、角度单独改动后Life门口缓存、原位置占用拒绝拉直。门禁必须同时查日志无SCRIPT ERROR，最早live43绿报告含草缘错已拒；最终final45/details_verified26。

M64：`test_city_creation_balconies.gd`47核四种外挑、事务/身份/冷读、同屋斜角/邻屋低檐与删除宿主Undo；`check_creation_balconies_live.gd`原生GL/isolated-session/--out-dir核实墙背开口、两侧玻璃、12阶双航内梯、双款真实居民每4cm支撑/胶囊、E90°、暂存原型、双尺寸、昼夕夜、近远LOD和Master。最终verified77；旧绿报告未通过原图审查的目录保留，不能替代最终图。
