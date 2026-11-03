param(
    [string]$Python = 'C:/Users/Administrator/AppData/Local/Programs/Python/Python312/python.exe',
    [string]$RuntimeRoot = 'C:/Users/Administrator/Desktop/mIDDLEFILE/资产/工具/audio-separator'
)
$ErrorActionPreference = 'Stop'
function Run-Python([string[]]$Arguments) {
    & $script:SeparatorPython @Arguments
    if ($LASTEXITCODE -ne 0) { throw "Python command failed: $Arguments" }
}
$SeparatorPython = $Python
if (!(Test-Path -LiteralPath "$RuntimeRoot/venv/Scripts/python.exe")) {
    Run-Python -Arguments @('-m', 'venv', "$RuntimeRoot/venv")
}
$SeparatorPython = "$RuntimeRoot/venv/Scripts/python.exe"
Run-Python -Arguments @('-m', 'pip', 'install', 'torch==2.11.0+cu128', 'torchvision==0.26.0+cu128', '--index-url', 'https://download.pytorch.org/whl/cu128')
Run-Python -Arguments @('-m', 'pip', 'install', 'audio-separator[gpu]==0.48.0', 'imageio-ffmpeg==0.7.0', 'librosa==0.11.0', 'onnxruntime-gpu==1.22.0')
Run-Python -Arguments @('-X', 'utf8', "$PSScriptRoot/separate_music.py", '--runtime-root', $RuntimeRoot, '--env-info')
& $SeparatorPython -m pip freeze | Set-Content -Encoding utf8 "$RuntimeRoot/installed-requirements.txt"
