# Townscaper 逆向成品

先打开 [完整调查索引](outputs/townscaper_complete_index.md)。

- `outputs`：报告、2175原生函数、资源、84份重建HLSL、编解码器与验证结果。
- `work`：可复核脚本和IL2CPP恢复元数据；外部工具/可重建依赖未打包。
- `备份`：完整Git bundle及校验后的Ghidra数据库压缩备份。
- `discarded`：少量有复核价值的早期失败输出，保留不删。
- `交付清单.json`：每个文件来源/交付SHA-256和链接迁移检查。
- `清理记录.json`：清理位置、归档校验和释放空间。

普通使用只读报告，存档工具无外部Python依赖：

```powershell
python outputs/townscaper_codec.py self-test
python outputs/townscaper_codec.py decode town.txt -o town.json
python outputs/townscaper_codec.py encode town.json -o rebuilt.txt
```

恢复Git历史：`git clone 备份/Townscaper-Git.bundle 恢复项目`。
恢复Ghidra：解压“Ghidra完成项目.zip”到项目目录并打开Townscaper.gpr。压缩包包含逐文件SHA-256清单。原安装工具继续保留在原工作区；以后启动REA/Ghidra需解压数据库到原路径或指定新的项目目录。

这是发行版本业务层逆向交付，不是作者原工程或独立可运行游戏。JSON里的原安装/工作区路径属于证据来源，保留未改；Markdown内部引用已迁移，可从这里查阅。私有存档/注册表/许可证不在公开Git bundle中。
