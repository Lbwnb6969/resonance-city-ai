# 工程工具

当前设计见[融合总案](../文档/50_空间驱动城建音乐与整合排期修订.md)，代码/兼容和验证规则见[工程维护](../文档/工程维护.md)。保留维护、烘焙、分析和真实回归工具；已结束阶段的导入器、一次性画廊汇总及失效旧夹具见[整理记录](../文档/整理记录.md)。

| 任务 | 工具 |
| --- | --- |
| 任务/入口/文档审计 | check_ai_harness.py、check_doc_links.py、audit_creation_workspace.py（只读资源/来源/缓存盘点）、tests/test_ai_harness.py |
| 两库审阅后同步 | sync_github_all.py prepare，再push；完整库独立索引 |
| 音库重建 | bake_creation_music_bank.gd，再bake_creation_portable_bank.gd |
| M80特征→brief→原创谱面 | build_creation_music_study.py、music_reference_features.py、music_authored_score.py、verify_creation_music_study.py |
| 当前街具/共享风实窗 | check_creation_street_furniture_contact_live.gd、check_creation_shared_wind_live.gd |
| 屋面UV/旧档/路口回归 | check_creation_hinge_roof_uv_live.gd、tests/test_city_creation_legacy_roundtrip.gd、tests/test_city_creation_junction_integration.gd |
| 实测分析 | profile_creation_*、analyze_creation_*；按具体任务选相关工具 |
| 来源资源可重建 | extract_creation_*；只读本地参考原件，不覆盖现存输出 |

check_creation_*及fixtures保留现有继承/预载依赖和旧功能回归。工具参数以各脚本为准，测试--isolated-session、独立out-dir，真实录音用实际音频驱动。历史测试若与新设计冲突，先核实适用政策再升级；旧档兼容和数据完整性仍保留。

没有导出请求时不运行build_creation_bundle.py。工具/tests的生成.gd.uid不是发布输入，不再跟踪；scripts和addons运行UID保持。
