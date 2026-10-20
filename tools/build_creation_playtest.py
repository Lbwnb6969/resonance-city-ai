"""Export a single-user Windows playtest build from the current runtime closure."""
from pathlib import Path
import argparse
import json
import re
import shutil
import subprocess
import sys

from creation_bundle_audit import ROOT, source_audit
from build_creation_bundle import LICENSE_INPUTS, stage_runtime


def godot_config_string(value):
    return '"' + str(value).replace('\\', '\\\\').replace('"', '\\"') + '"'


def run(args, cwd, log):
    with log.open('w', encoding='utf-8') as stream:
        process = subprocess.run([str(value) for value in args], cwd=cwd,
                                 stdout=stream, stderr=subprocess.STDOUT,
                                 timeout=600)
    output = log.read_text(encoding='utf-8', errors='replace')
    if process.returncode or re.search(
            r'SCRIPT ERROR:|\bERROR:|Assertion failed|ObjectDB instances were leaked', output):
        raise RuntimeError(f'Godot build failed; details: {log}')


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--engine', type=Path, required=True)
    parser.add_argument('--template', type=Path, required=True)
    parser.add_argument('--console-template', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--evidence', type=Path, required=True)
    args = parser.parse_args()
    engine = args.engine.resolve()
    template = args.template.resolve()
    console_template = args.console_template.resolve()
    output = args.output.resolve()
    evidence = args.evidence.resolve()
    for path in (engine, template, console_template):
        if not path.is_file():
            raise FileNotFoundError(path)
    if evidence.exists():
        raise FileExistsError('Build evidence already exists; choose a new versioned path.')
    if output.exists() and any(path.name not in {'共鸣之城.exe', '共鸣之城.pck', '先玩五分钟.txt', '许可与来源'}
                               for path in output.iterdir()):
        raise FileExistsError('Playtest output contains unexpected files.')

    report = source_audit()
    evidence.mkdir(parents=True)
    output.mkdir(parents=True, exist_ok=True)
    stage = evidence / 'runtime_source'
    stage_runtime(stage)

    project = stage / 'project.godot'
    config = project.read_text(encoding='utf-8')
    config = config.replace('config/version="creation-p0-1"', 'config/version="2026.10.20"')
    config = config.replace('config/icon="res://icon.svg"',
                            'config/icon="res://icon.svg"\n'
                            'config/use_custom_user_dir=true\n'
                            'config/custom_user_dir_name="ResonanceCityPlaytest"')
    project.write_text(config, encoding='utf-8')

    presets = stage / 'export_presets.cfg'
    preset_text = presets.read_text(encoding='utf-8')
    section = '[preset.1.options]'
    if section not in preset_text:
        raise RuntimeError('Windows playtest export preset is missing')
    preset_text = preset_text.replace(section, section + '\n\ncustom_template/release=' +
                                      godot_config_string(template.as_posix()), 1)
    presets.write_text(preset_text, encoding='utf-8')

    (output / '先玩五分钟.txt').write_text(
        '共鸣之城\n\n'
        '双击“共鸣之城.exe”开始。\n'
        '鼠标拖动画面；滚轮缩放，右键旋转，中键平移。\n'
        '1–9 切换房屋、露台、道路、移除、用途、植被、水岸、街坊、地形。\n'
        '点击工具后，在工具上方圆章选择具体选项；拖动完成建造，Esc取消。\n'
        'Ctrl+Z撤销，Ctrl+Y重做，Ctrl+S保存，Ctrl+O打开作品收藏。\n'
        '左上手记可查看街坊成长。按H看全景，按F隐藏界面，按F10保存渲染诊断。\n'
        '本试玩版自动保存到独立的 ResonanceCityPlaytest 用户目录；'
        '不会读取开发版作品。作品收藏也保存在该试玩目录。\n', encoding='utf-8')
    licenses = output / '许可与来源'
    licenses.mkdir()
    for name, source in LICENSE_INPUTS.items():
        shutil.copy2(ROOT / source, licenses / name)
    (licenses / '第三方来源.txt').write_text(
        '本试玩版仅供本地试玩。Godot 使用 MIT 许可，见 Godot-MIT.txt。\n'
        '提取自参考游戏的网格与纹理分别记录在本目录来源文件中；不将其标为原创或 CC0。\n',
        encoding='utf-8')

    (evidence / 'build.json').write_text(json.dumps({
        'version': '2026.10.20', 'runtime_files': len(report['files']),
        'runtime_scripts': report['runtime_scripts'], 'mcp_removed': True,
        'isolated_user_dir': 'ResonanceCityPlaytest',
        'release_template': str(template),
        'console_template': str(console_template),
    }, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')

    run([engine, '--headless', '--audio-driver', 'Dummy', '--editor', '--path', stage,
         '--import', '--quit'], stage, evidence / 'import.log')
    executable = output / '共鸣之城.exe'
    run([engine, '--headless', '--audio-driver', 'Dummy', '--path', stage,
         '--export-release', 'Demo本地运行包', executable], stage,
        evidence / 'export.log')
    pack = executable.with_suffix('.pck')
    if not executable.is_file() or not pack.is_file():
        raise RuntimeError('Godot did not produce the standalone executable and PCK')
    # Editor/debug runs retain assert expressions that release exports strip.
    # Launch the shipped template and verify its actual GPU fields and views.
    verification = evidence / 'release_runtime'
    run([executable, '--audio-driver', 'Dummy', '--log-file', evidence / 'runtime.log',
         '--', '--isolated-session', '--verify-playtest', verification], output,
        evidence / 'release_check.log')
    release_report = json.loads((verification / 'release_check.json').read_text('utf-8'))
    if not release_report['ok'] or release_report['debug_build']:
        raise RuntimeError('The actual release runtime did not pass GPU verification')
    print(json.dumps({'executable': str(executable), 'pck': str(pack),
                      'runtime_files': len(report['files']),
                      'runtime_scripts': report['runtime_scripts'],
                      'output_bytes': executable.stat().st_size + pack.stat().st_size},
                     ensure_ascii=False))


if __name__ == '__main__':
    try:
        main()
    except Exception as error:
        print(f'PLAYTEST BUILD FAILED: {error}', file=sys.stderr)
        raise
