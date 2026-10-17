@echo off
chcp 65001 >nul
start "" "D:\GODOT\Godot_v4.7.2-stable_win64.exe" --path "%~dp0..\..\." -- --isolated-session --pond-example
