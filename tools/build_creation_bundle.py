"""Build the current local Windows creation game without export templates."""
from pathlib import Path
import argparse
import hashlib
import json
import re
import shutil
import subprocess
import zipfile

from creation_bundle_audit import ROOT, audit, run, sha, source_audit

PROBE = Path('tests/creation_bundle_probe.gd')
TEXTURE_SUFFIXES = {'.png', '.svg', '.jpg', '.jpeg', '.webp', '.bmp', '.tga', '.exr', '.hdr'}
LICENSE_INPUTS = {
    'Godot-MIT.txt': '文档/许可记录/Godot/LICENSE.txt',
    'TinyGlade草地纹理来源.md': '资源/自然参考/README.md',
    'Foundation悬钟来源.md': '资源/建筑参考/README.md',
    'Foundation庭院喷泉来源.md': '资源/建筑参考/庭院喷泉来源.md',
    'Foundation坡地伴石来源.md': '资源/自然参考/坡地伴石来源.md',
    'Foundation石墙纹理来源.md': '资源/建筑参考/石砌街屋来源.md',
    'Foundation湿砂河岸来源.md': '资源/自然参考/湿砂河岸来源.md',
    'Foundation层理岩壁来源.md': '资源/自然参考/层理岩壁来源.md',
    'TinyGlade睡莲来源.md': '资源/自然参考/睡莲/README.md',
    'Foundation生活声来源.md': '资源/生活声/README.md',
    '生活声加工记录.json': '资源/生活声/来源与处理.json',
}


def source_hashes():
    """Fingerprint authored runtime inputs, including original texture bytes."""
    paths = {
        'project.godot', 'export_presets.cfg', 'icon.svg',
        PROBE.as_posix(), 'tools/build_creation_bundle.py', 'tools/creation_bundle_audit.py',
        '文档/Demo快速开始.md', *LICENSE_INPUTS.values(),
    }
    paths.update(source_audit()['files'])
    return {path: sha(ROOT / path) for path in sorted(paths)}


def require_same_sources(expected):
    current = source_hashes()
    if current != expected:
        changed = sorted(path for path in expected.keys() | current.keys()
                         if expected.get(path) != current.get(path))
        raise RuntimeError('Build inputs changed; partial output and evidence retained: '
                           + ', '.join(changed))


def check_engine_log(path):
    text = path.read_text(encoding='utf-8', errors='replace')
    if re.search(r'SCRIPT ERROR:|\bERROR:|Assertion failed|will not work on export|ObjectDB instances were leaked', text):
        raise RuntimeError(f'Creation bundle startup failed; retained evidence: {path}')


def stage_runtime(destination):
    """Create a game-only export workspace without modifying the developer project."""
    report = source_audit()
    destination.mkdir(parents=True, exist_ok=False)
    files = set(report['files']) | {'export_presets.cfg'}
    for name in sorted(files):
        source = ROOT / name
        target = destination / name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
        for suffix in ('.uid', '.import'):
            sidecar = Path(str(source) + suffix)
            if sidecar.is_file():
                shutil.copy2(sidecar, Path(str(target) + suffix))
    # Runtime game exports have no editor plugin or development server. Keep the
    # original project.godot, including its MCP setup, untouched in ROOT.
    config = (ROOT / 'project.godot').read_text(encoding='utf-8-sig')
    config = re.sub(r'(?m)^MCPRuntimeServer=.*\r?\n', '', config)
    config = re.sub(r'(?ms)^\[editor_plugins\]\r?\n.*?(?=^\[|\Z)', '', config)
    if 'res://addons/godot_mcp_toolkit/' in config:
        raise RuntimeError('Development toolkit remained in staged runtime config')
    (destination / 'project.godot').write_text(config, encoding='utf-8')
    missing = [name[6:] for name in re.findall(r'res://[^"\s]+', config)
               if not (destination / name[6:]).is_file()]
    if missing:
        raise RuntimeError('Staged config references missing resources: ' + ', '.join(missing))
    (destination / '导出暂存来源.json').write_text(json.dumps(
        {'runtime_dependencies': report['files'], 'development_autoload_removed': True,
         'editor_plugins_removed': True}, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    return report


def launcher(output, name, user_arguments):
    command = ('@echo off\r\nchcp 65001 >nul\r\n'
               'start "" "%~dp0运行环境\\Godot.exe" --path "%~dp0运行环境" '
               '--main-pack "%~dp0运行环境\\共鸣之城.zip"')
    if user_arguments:
        command += ' -- ' + ' '.join(user_arguments)
    (output / name).write_bytes((command + '\r\n').encode('utf-8'))


def copy_licenses(output, evidence):
    licenses = output / '许可'
    licenses.mkdir()
    for destination, source in LICENSE_INPUTS.items():
        shutil.copy2(ROOT / source, licenses / destination)
    shutil.copy2(evidence / 'Godot及第三方许可.json', licenses / 'Godot及第三方许可.json')
    (licenses / '项目与资源说明.txt').write_text(
        '本包供本地研究与试玩，未上传或发布到外网。\n'
        '本项目实现的程序化建筑、交互和合成音乐与第三方资源分开记录。\n'
        'Godot引擎使用MIT许可，见本目录Godot-MIT.txt；本包所含参考资源各自来源另列。\n'
        '草地世界乘色纹理来自Tiny Glade原游戏资源，用于本地研究与试玩；'
        '它不是本作原创，也不标为CC0。准确资源名、SHA及适配方式见'
        'TinyGlade草地纹理来源.md。\n'
        '钟楼小钟体提取自Foundation本地研究恢复资源，非CC0；准确来源、SHA及适配范围见Foundation悬钟来源.md。\n'
        '庭院喷泉同样使用Foundation恢复资源，保留实际LOD0网格；见Foundation庭院喷泉来源.md。\n'
        '坡地的两块小石母型提取自Foundation恢复资源，见Foundation坡地伴石来源.md。\n'
        '石砌街屋墙面使用Foundation恢复的Diffuse贴图，见Foundation石墙纹理来源.md。\n'
        '层理岩壁使用Foundation恢复的Cliff A地表纹理，仅采RGB表现真实陡坡，非CC0；见Foundation层理岩壁来源.md。\n'
        '池塘睡莲的原叶、花网格与两张原纹理来自Tiny Glade本地资源，非CC0；见TinyGlade睡莲来源.md。\n'
        'Godot许可来源：https://godotengine.org/license/\n', encoding='utf-8')


def write_readme(output):
    shutil.copy2(ROOT / '文档/Demo快速开始.md', output / 'Demo快速开始.md')
    (output / '先读我.txt').write_text(
        '共鸣之城 · 本地自由创作试玩\n\n'
        '无需安装Godot或配置编辑器，解压后保持运行环境文件夹完整。\n'
        '启动Demo.cmd：从六座河湾小屋开始，不读取旧作品；可手动保存。\n'
        '打开创作样例.cmd：打开已有房屋、露台与跨河桥的编辑样例，不读取旧作品。\n'
        '打开台地样例.cmd：西岸宽顶台地与庭院河湾；按9选平顶台地继续塑形，不读取旧作品。\n'
        '打开建筑街景样例.cmd：木构、石砌与灰泥三种街屋；按5选屋换样式，不读取旧作品。\n'
        '打开露台花架样例.cmd：三处露天上层小庭园；按4点布篷可移除露台，Ctrl+Z恢复。\n'
        '打开睡莲池塘样例.cmd：西岸新挖睡莲池，浮叶和少量花随真实池形派生；按7继续画水。\n'
        '打开经营河湾样例.cmd：28屋两岸街坊从零经营；L打开生活账本，不读取旧作品。\n'
        '打开庆典接力样例.cmd：两庭沿真实小路接力；按5选演奏庭，点击从这里开始庆典接力。\n'
        '打开庭院样例.cmd：沿桥进入听泉长院，试着移除院墙或撤销，看庭院自动开合。\n'
        '打开地貌样例.cmd：查看露岩草丘、湿砂与疏落扁石组；按7画水，岸景随之变化。\n'
        '打开街坊连奏样例.cmd：听暖庭与蓝瓦街沿真实小路交换短句。\n'
        '继续我的河湾.cmd：读取已有作品，停手后自动保存。\n'
        '存档为Godot用户目录的city_creation_v1.json，与本机同名开发版共用。\n\n'
        '九种工具：1房屋、2露台、3道路、4移除、5用途、6植被、7水岸、8街坊、9地形。\n'
        '先点墙扩房、点顶加层，再画一条接通门口的小路。工具5安排面包坊、'
        '制琴坊、花圃茶座或演奏庭，让居民实际采购、喝茶、赴约演出。\n'
        '将同一位置叠满三层，顶层独立并留足邻屋净空，会自动长出尖顶钟楼。'
        '点尖顶继续长高；近处钟楼在乐句间隙轻奏，公共演出轮到本户时参与应答。\n'
        '房屋围出至少四格封闭内院后自动铺石，宽敞处留喷泉；保留玩家种植的树穴，给道路和门口留净空。\n'
        '完整演出后会出现节庆木饰委托；匠人沿路送装，升旗添花，下一场成功'
        '演出留下90秒余韵。建设和演出不要求先完成委托。\n'
        '工具9抬高草丘、压低洼地或局部还原；Shift起笔临时压低，Esc取消。'
        '草木随真实地面起伏，房屋、小路和聚会处保留平地。工具7画池塘形成下切河床。\n\n'
        '选择“露岩 · 草丘”，一笔形成较陡的草岭，草从石坡退让、少量小石顺坡接地。'
        '整笔可一次撤销，存档仍使用原地形笔画格式。\n\n'
        '工具8选择暖庭、深流、织机、市集长街或林间静谧。'
        '市集奏短簧片与拨弦，林间奏长笛和高铃；风格在下一乐句自然交接。'
        '可开启“随用途变化配器”，保留所选基调，让邻里用途添一种伴奏。\n\n'
        '相邻不同主题有实际短路连接时，会在真实乐句边界一问一答。'
        '工具8“邻里短句对答”可关闭本次聆听；断路、移远、静音或演出会取消。\n\n'
        '左上“河湾手记”或J查看三章成长，点“试一试”前往对应工具和房屋。'
        '真实建桥、烘焙和完整演出留下第一章；茶聚、匠作与更大街坊继续后续成长。'
        '工具5可直接选择四组原建筑配色，达成三章还会得到三组纪念饰色；'
        '改色可撤销，已达成手记随作品保留，不限制自由建设。\n\n'
        '滚轮缩放，右键转动，中键平移；H全景，F隐藏界面。\n'
        '按住左键拖出整笔房屋、道路、植物或水岸；Esc取消。\n'
        'Ctrl+Z撤销，Ctrl+Y / Ctrl+Shift+Z重做；Ctrl+S保存。\n'
        '左上“作品收藏”或Ctrl+O：具名收藏可编辑版本，支持同名多版；打开其他作品前自动留存当前河湾，Esc返回建造。\n'
        '作品库位于Godot用户目录city_creation_works，连同居民、经营和演出进度保存；每次收藏独立保留。\n'
        '道路按R切换曲线/直拉；界面按钮控制音乐与光线。\n'
        '完整操作见Demo快速开始.md；其中工程证据链接供开发记录参考。\n\n'
        '此包包含现有Windows x86_64引擎及资源ZIP，不是发行模板生成的EXE。\n'
        '附构建身份和许可；草地参考纹理的Tiny Glade来源单独如实标注。\n'
        '构建检查使用真实GPU与Dummy音频时钟，不等于真人设备试听或大城压力测试。\n',
        encoding='utf-8')


def build(engine, output, evidence):
    engine = engine.resolve(strict=True)
    output = output.resolve()
    evidence = evidence.resolve()
    shipping = output.with_suffix('.zip')
    if output.exists() or evidence.exists() or shipping.exists():
        raise FileExistsError('Use new output/evidence paths; existing builds are preserved')
    sources = source_hashes()
    source_commit = subprocess.check_output(
        ['git', 'rev-parse', 'HEAD'], cwd=ROOT, text=True).strip()
    output.mkdir(parents=True)
    evidence.mkdir(parents=True)
    runtime = output / '运行环境'
    runtime.mkdir()
    packaged_engine = runtime / 'Godot.exe'
    shutil.copy2(engine, packaged_engine)
    console = engine.with_name(engine.stem + '_console.exe')
    if not console.is_file():
        console = engine
    pack = runtime / '共鸣之城.zip'
    staging = evidence / '导出暂存工程'
    stage_runtime(staging)
    # Import in the isolated workspace to build its own remaps/class registry.
    run([console, '--headless', '--editor', '--path', staging, '--import'],
        evidence / '暂存导入.log', staging)
    check_engine_log(evidence / '暂存导入.log')
    run([console, '--headless', '--path', staging, '--export-pack', 'Demo本地运行包', pack],
        evidence / '导出.log', staging)
    check_engine_log(evidence / '导出.log')
    require_same_sources(sources)
    audit_result = audit(pack, imported_root=staging)
    with zipfile.ZipFile(pack) as archive:
        packed_textures = {name: hashlib.sha256(archive.read(name)).hexdigest()
                           for name in sorted(archive.namelist()) if name.endswith('.ctex')}
        for name, digest in packed_textures.items():
            if sha(staging / name) != digest:
                raise RuntimeError('Stale imported texture in pack: ' + name)
    isolated = evidence / '空隔离目录'
    isolated.mkdir()
    result_path = evidence / '隔离结果.json'
    probe_log = evidence / '隔离引擎.log'
    run([packaged_engine, '--audio-driver', 'Dummy', '--path', runtime,
         '--main-pack', pack, '--log-file', probe_log, '--script', ROOT / PROBE,
         '--', '--isolated-session', '--result=' + str(result_path)],
        evidence / '隔离运行.log', isolated)
    check_engine_log(probe_log)
    check_engine_log(evidence / '隔离运行.log')
    result = json.loads(result_path.read_text(encoding='utf-8'))
    if result['status'] != 'PASS':
        raise RuntimeError('Creation bundle probe failed: ' + str(result_path))
    # Exercise packaged scene entry modes without reading personal saves.
    for label, extra in [('直接启动', []), ('样例启动', ['--creation-example']),
                         ('庭院启动', ['--courtyard-example']),
                         ('地貌启动', ['--landform-example']),
                         ('连奏启动', ['--reply-example']),
                         ('台地启动', ['--plateau-example']),
                         ('街景启动', ['--styles-example']),
                         ('经营启动', ['--town-example']),
                         ('接力启动', ['--relay-example']),
                         ('露台启动', ['--terrace-example']),
                         ('睡莲启动', ['--pond-example'])]:
        engine_log = evidence / (label + '引擎.log')
        run([packaged_engine, '--audio-driver', 'Dummy', '--path', runtime,
             '--main-pack', pack, '--log-file', engine_log, '--quit-after', '180',
             '--', '--isolated-session', *extra], evidence / (label + '.log'), isolated)
        check_engine_log(engine_log)
        check_engine_log(evidence / (label + '.log'))
    require_same_sources(sources)
    launcher(output, '启动Demo.cmd', ['--isolated-session'])
    launcher(output, '打开创作样例.cmd', ['--isolated-session', '--creation-example'])
    launcher(output, '打开庭院样例.cmd', ['--isolated-session', '--courtyard-example'])
    launcher(output, '打开地貌样例.cmd', ['--isolated-session', '--landform-example'])
    launcher(output, '打开街坊连奏样例.cmd', ['--isolated-session', '--reply-example'])
    launcher(output, '打开台地样例.cmd', ['--isolated-session', '--plateau-example'])
    launcher(output, '打开建筑街景样例.cmd', ['--isolated-session', '--styles-example'])
    launcher(output, '打开经营河湾样例.cmd', ['--isolated-session', '--town-example'])
    launcher(output, '打开庆典接力样例.cmd', ['--isolated-session', '--relay-example'])
    launcher(output, '打开露台花架样例.cmd', ['--isolated-session', '--terrace-example'])
    launcher(output, '打开睡莲池塘样例.cmd', ['--isolated-session', '--pond-example'])
    launcher(output, '继续我的河湾.cmd', [])
    write_readme(output)
    copy_licenses(output, evidence)
    record = {
        'status': 'PASS', 'source_commit': source_commit,
        'source_identity_scope': 'Git baseline commit plus exact working-tree runtime/build-input SHA256; includes uncommitted changes',
        'source_files_sha256': sources,
        'build_inputs_sha256': {p: value for p, value in sources.items()
                                if p in {'project.godot', 'export_presets.cfg', PROBE.as_posix()}
                                or p.startswith(('tools/', '数据/', '文档/'))},
        'script_sources_sha256': {p: value for p, value in sources.items() if p.endswith('.gd')},
        'shader_sources_sha256': {p: value for p, value in sources.items()
                                  if Path(p).suffix in {'.gdshader', '.gdshaderinc'}},
        'scene_sources_sha256': {p: value for p, value in sources.items()
                                 if Path(p).suffix in {'.tscn', '.scn'}},
        'texture_sources_sha256': {p: value for p, value in sources.items()
                                   if Path(p).suffix.lower() in TEXTURE_SUFFIXES},
        'packed_textures_sha256': packed_textures,
        'engine_version': result['engine'], 'engine_sha256': sha(packaged_engine),
        'pack_sha256': sha(pack), 'pack_size_bytes': pack.stat().st_size,
        'engine_size_bytes': packaged_engine.stat().st_size,
        'output': str(output), 'portable_zip': str(shipping),
        'checks': result['checks'], 'opening': result['opening'], **audit_result,
        'scope': 'Local portable Windows x86_64 creation game; real GPU, Dummy audio runtime clock, isolated default/example startup; not physical listening, large-city/low-end stress, or external publication',
    }
    (evidence / '构建记录.json').write_text(
        json.dumps(record, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    identity_keys = ['source_commit', 'source_identity_scope', 'source_files_sha256',
                     'packed_textures_sha256', 'engine_version',
                     'engine_sha256', 'pack_sha256', 'scope']
    (output / '构建身份.json').write_text(json.dumps(
        {key: record[key] for key in identity_keys}, ensure_ascii=False, indent=2) + '\n',
        encoding='utf-8')
    with zipfile.ZipFile(shipping, 'w', zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(output.rglob('*')):
            if path.is_file():
                archive.write(path, Path(output.name) / path.relative_to(output))
    print(f'CREATION_BUNDLE PASS checks={len(result["checks"])} '
          f'sources={len(sources)} textures={len(packed_textures)} portable={shipping}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--engine', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--evidence', type=Path, required=True)
    args = parser.parse_args()
    build(args.engine, args.output, args.evidence)
