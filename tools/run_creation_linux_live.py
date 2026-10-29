"""Run one isolated Godot probe with private Linux display and virtual audio servers.

Requires Godot 4.7.2, Xvfb, xauth and PulseAudio. No packages are installed here.
The virtual sink exercises real-time mixing/PCM, not physical output or listening.
"""
from pathlib import Path
import argparse
import contextlib
import json
import os
import re
import secrets
import shutil
import socket
import subprocess
import tempfile
import time

ROOT = Path(__file__).resolve().parents[1]


def executable(parser, value):
    found = shutil.which(value)
    if not found:
        parser.error('Executable not found: ' + value)
    return found


def free_port():
    with socket.socket() as sock:
        sock.bind(('127.0.0.1', 0))
        return sock.getsockname()[1]


def wait_port(process, port):
    deadline = time.monotonic() + 10
    while time.monotonic() < deadline:
        if process.poll() is not None:
            raise RuntimeError('Server exited before becoming ready; inspect its log.')
        try:
            with socket.create_connection(('127.0.0.1', port), timeout=.2):
                return
        except OSError:
            time.sleep(.05)
    raise RuntimeError('Server readiness timeout; inspect its log.')


@contextlib.contextmanager
def server(command, env, log):
    with log.open('wb') as output:
        process = subprocess.Popen(command, env=env, stdout=output, stderr=subprocess.STDOUT)
        try:
            yield process
        finally:
            if process.poll() is None:
                process.terminate()
                try:
                    process.wait(timeout=5)
                except subprocess.TimeoutExpired:
                    process.kill()
                    process.wait()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--godot', default=os.environ.get('GODOT_BIN', 'godot'))
    parser.add_argument('--xvfb', default='Xvfb')
    parser.add_argument('--xauth', default='xauth')
    parser.add_argument('--pulse', default='pulseaudio')
    parser.add_argument('--pulse-module-dir', type=Path)
    parser.add_argument('--script', required=True, type=Path)
    parser.add_argument('--out-dir', required=True, type=Path)
    parser.add_argument('--timeout', type=float, default=600)
    parser.add_argument('probe_args', nargs=argparse.REMAINDER)
    args = parser.parse_args()
    if not os.sys.platform.startswith('linux'):
        parser.error('This wrapper is Linux-only.')
    godot, xvfb, pulse = [executable(parser, v) for v in (args.godot, args.xvfb, args.pulse)]
    xauth = executable(parser, args.xauth)
    script = (ROOT / args.script).resolve()
    if not script.is_file() or script.suffix != '.gd' or not any(
            script.is_relative_to(ROOT / folder) for folder in ('tools', 'tests')):
        parser.error('--script must be a project tools/tests GDScript probe.')
    if args.timeout <= 0:
        parser.error('--timeout must be positive.')
    out = args.out_dir.resolve()
    out.mkdir(parents=True, exist_ok=True)
    if any(out.iterdir()):
        parser.error('--out-dir must be empty; preserve previous takes.')
    if out.is_relative_to(ROOT):
        (out / '.gdignore').touch()
    report = dict(ok=False, platform=os.sys.platform, script=script.relative_to(ROOT).as_posix(),
                  scope='Software OpenGL and PulseAudio virtual-sink PCM; '
                        'no physical output or subjective listening verification.')
    started = time.monotonic()
    try:
        version = subprocess.check_output([godot, '--version'], text=True, timeout=15).strip()
        report['engine'] = version
        if not version.startswith('4.7.2.'):
            raise RuntimeError('Expected Godot 4.7.2, got ' + version)
        # TCP servers and engine must share a process namespace. Unix sockets
        # and independently launched tool sessions need not be available.
        display_port = free_port()
        while display_port < 6000 or Path('/tmp/.X' + str(display_port - 6000) + '-lock').exists():
            display_port = free_port()
        display = display_port - 6000
        audio_port = free_port()
        with tempfile.TemporaryDirectory(prefix='creation-live-') as runtime:
            authority = Path(runtime) / 'Xauthority'
            authority.touch(mode=0o600)
            subprocess.run([xauth, '-f', str(authority), 'add', '127.0.0.1:' + str(display),
                            'MIT-MAGIC-COOKIE-1', secrets.token_hex(16)], check=True,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            env = dict(os.environ, DISPLAY='127.0.0.1:' + str(display),
                       XAUTHORITY=str(authority),
                       XDG_RUNTIME_DIR=runtime, PULSE_SERVER='tcp:127.0.0.1:' + str(audio_port),
                       LIBGL_ALWAYS_SOFTWARE='1')
            x_command = [xvfb, ':' + str(display), '-screen', '0', '1440x900x24',
                         '-nolisten', 'unix', '-nolisten', 'local', '-listen', 'tcp',
                         '-auth', str(authority)]
            p_command = [pulse, '-n', '--daemonize=no', '--use-pid-file=no', '--disable-shm=yes',
                         '--exit-idle-time=-1', '--load=module-null-sink sink_name=creation_cloud',
                         '--load=module-native-protocol-tcp listen=127.0.0.1 port=' +
                         str(audio_port) + ' auth-anonymous=1']
            if args.pulse_module_dir:
                modules = str(args.pulse_module_dir.resolve())
                p_command.append('--dl-search-path=' + modules)
                env['LD_LIBRARY_PATH'] = modules + os.pathsep + env.get('LD_LIBRARY_PATH', '')
            with server(x_command, env, out / 'display.log') as x, server(
                    p_command, env, out / 'audio.log') as p:
                wait_port(x, display_port)
                wait_port(p, audio_port)
                extra = args.probe_args[1:] if args.probe_args[:1] == ['--'] else args.probe_args
                command = [godot, '--path', str(ROOT), '--rendering-method', 'gl_compatibility',
                           '--audio-driver', 'PulseAudio', '--script', str(script), '--',
                           *extra, '--isolated-session', '--out-dir=' + str(out)]
                report['command'] = command
                with server(command, env, out / 'engine.log') as engine:
                    deadline = time.monotonic() + args.timeout
                    while engine.poll() is None:
                        if time.monotonic() >= deadline:
                            raise subprocess.TimeoutExpired(command, args.timeout)
                        if 'SCRIPT ERROR:' in (out / 'engine.log').read_text(
                                encoding='utf-8', errors='replace'):
                            raise RuntimeError('GDScript runtime error; inspect engine.log.')
                        time.sleep(.1)
                    exit_code = engine.returncode
                output = (out / 'engine.log').read_text(encoding='utf-8', errors='replace')
                errors = re.findall(r'^(?:SCRIPT ERROR:|ERROR:).*', output, flags=re.MULTILINE)
                fallback = 'falling back to the dummy driver' in output.lower()
                report.update(exit_code=exit_code, errors=errors, dummy_fallback=fallback,
                              ok=exit_code == 0 and not errors and not fallback)
    except (OSError, RuntimeError, subprocess.SubprocessError) as error:
        report['error'] = str(error)
    report['elapsed_seconds'] = round(time.monotonic() - started, 3)
    (out / 'linux_live_report.json').write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(report, ensure_ascii=False, indent=2), flush=True)
    return 0 if report['ok'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
