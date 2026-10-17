$ErrorActionPreference = 'Stop'
$audioRoot = Split-Path $PSScriptRoot -Parent
$audioDeps = Join-Path $audioRoot '.git/任务备份/round120'
$audioSdk = Join-Path $audioRoot '.git/原生构建/godot-cpp'
$audioPython = Join-Path $audioDeps 'build-python'
$audioSdkCommit = 'e83fd0904c13356ed1d4c3d09f8bb9132bdc6b77'

if (!(Test-Path -LiteralPath $audioSdk)) {
    git clone --depth 1 --branch godot-4.5-stable https://github.com/godotengine/godot-cpp.git $audioSdk
    if ($LASTEXITCODE) { throw 'godot-cpp clone failed' }
}
if ((git -C $audioSdk rev-parse HEAD) -ne $audioSdkCommit) { throw 'Unexpected godot-cpp revision' }
# Create generated output parents through the real checkout, before SCons
# traverses the ASCII junction used by MSVC.
New-Item -ItemType Directory -Path (Join-Path $audioSdk 'bin') -Force | Out-Null
if (!(Test-Path -LiteralPath (Join-Path $audioPython 'SCons'))) {
    python -m pip install --target $audioPython scons==4.11.1
    if ($LASTEXITCODE) { throw 'SCons installation failed' }
}
# MSVC response files need ASCII paths. Junctions keep sources and build data
# in the project; never replace or remove an existing checkout/junction.
$audioBuildRoot = Join-Path $env:TEMP 'ResonanceCityNativeRuntime'
New-Item -ItemType Directory -Path $audioBuildRoot -Force | Out-Null
foreach ($audioLink in @(@{Name='project'; Target=$audioRoot}, @{Name='sdk'; Target=$audioSdk})) {
    $audioPath = Join-Path $audioBuildRoot $audioLink.Name
    if (Test-Path -LiteralPath $audioPath) {
        if ((Get-Item -LiteralPath $audioPath).Target -ne $audioLink.Target) { throw "Build junction belongs to another checkout: $audioPath" }
    } else {
        New-Item -ItemType Junction -Path $audioPath -Target $audioLink.Target | Out-Null
    }
}
$audioPreviousPython = $env:PYTHONPATH
try {
    $env:PYTHONPATH = $audioPython
    Push-Location (Join-Path $audioBuildRoot 'project')
    try {
        python -m SCons -C native/city_audio "sdk=$(Join-Path $audioBuildRoot 'sdk')" platform=windows target=template_release precision=single build_profile=build_profile.json debug_symbols=no -j12
        if ($LASTEXITCODE) { throw 'Native audio build failed' }
    } finally { Pop-Location }
} finally { $env:PYTHONPATH = $audioPreviousPython }
