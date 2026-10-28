$ErrorActionPreference = 'Stop'
Set-Location -LiteralPath $PSScriptRoot
$env:PYTHONUTF8 = '1'
$python = Join-Path $PSScriptRoot '.venv\Scripts\python.exe'
$uv = Get-Command uv -ErrorAction SilentlyContinue
if (-not (Test-Path -LiteralPath $python)) {
    if ($uv) {
        & $uv.Source venv --python 3.12 .venv
    } else {
        py -3.12 -m venv .venv
    }
    if ($LASTEXITCODE -ne 0) { throw 'Python 3.12 environment creation failed.' }
}
if ($uv) {
    & $uv.Source pip sync --python $python requirements.lock.txt
} else {
    & $python -m ensurepip --upgrade
    & $python -m pip install -r requirements.lock.txt
}
if ($LASTEXITCODE -ne 0) { throw 'Dependency installation failed.' }
foreach ($name in @('tools', 'work', 'input', 'results', 'deprecated')) {
    New-Item -ItemType Directory -Force -Path (Join-Path $PSScriptRoot $name) | Out-Null
}
$expected = 'C7847BD4C6E1C3A737B8CD5F94E7889792B086E368A6D71E2890229733B8BDA1'
$extractor = Join-Path $PSScriptRoot 'tools\essentia_streaming_extractor_music.exe'
if ((-not (Test-Path -LiteralPath $extractor)) -or ((Get-FileHash -LiteralPath $extractor -Algorithm SHA256).Hash -ne $expected)) {
    $download = Join-Path $PSScriptRoot 'work\essentia_download.exe'
    Invoke-WebRequest 'https://essentia.upf.edu/documentation/extractors/essentia-extractors-v2.1_beta5-356-g673b6a14-win-i686/essentia_streaming_extractor_music.exe' -OutFile $download
    if ((Get-FileHash -LiteralPath $download -Algorithm SHA256).Hash -ne $expected) { throw 'Downloaded extractor hash differs from the verified build.' }
    if (Test-Path -LiteralPath $extractor) {
        Move-Item -LiteralPath $extractor -Destination (Join-Path $PSScriptRoot ('deprecated\essentia_' + (Get-Date -Format 'yyyyMMdd-HHmmss-ffff') + '.exe'))
    }
    Move-Item -LiteralPath $download -Destination $extractor
}
& $python -c "import librosa, imageio_ffmpeg; print('librosa', librosa.__version__); print('FFmpeg', imageio_ffmpeg.get_ffmpeg_version())"
if ($LASTEXITCODE -ne 0) { throw 'Import check failed.' }
Write-Host 'Setup complete. Drag audio files onto analyze.cmd, or double-click it.'
