"""Download fixed-commit reading excerpts; never install or execute third-party code."""
import concurrent.futures as futures
import hashlib
import io
import json
from pathlib import Path
import re
import subprocess
import urllib.request
import zipfile

BASE = Path(__file__).resolve().parent
REPOS = {
    'anokta/barelymusician': ('audio', ['performer', 'instrument', 'engine', 'godot', 'processor']),
    'YuriSizov/gdsion': ('audio', ['driver', 'sound_chip', 'stream', 'channel', 'voice']),
    'EclipsingLines/GodotSynth': ('audio', ['audio_synth', 'oscillator', 'context', 'envelope', 'player']),
    'nonameentername/godot-csound': ('audio', ['audio_stream', 'csound_server', 'csound_godot', 'test.csd']),
    'nyxkn/godot-synth': ('audio', ['synth.gd', 'oscillator', 'envelope']),
    'sfztools/sfizz': ('audio', ['Synth.cpp', 'Voice.cpp', 'sfizz.h', 'FilePool', 'Region.cpp']),
    'schellingb/TinySoundFont': ('audio', ['tsf.h', 'tml.h']),
    'thestk/stk': ('audio', ['Plucked.cpp', 'Bowed.cpp', 'Clarinet.cpp', 'ADSR.cpp', 'Stk.h']),
    'xjmusic/xjmusic': ('music', ['fabricator', 'craft', 'choice', 'segment', 'voice']),
    'libraz/midi-sketch-bach': ('music', ['counterpoint', 'fugue', 'subject', 'voice_leading', 'motif']),
    'georgesdimitrov/arvo': ('music', ['transformations.py', 'minimalism.py', 'tintinnabuli.py', 'isorhythm.py']),
    'timoncool/godot-strudel': ('music', ['scheduler', 'pattern', 'synth', 'clock']),
    'hyprtuna/divisi': ('music', ['clock', 'transition', 'director', 'layer']),
    'irmozius/meta_player': ('music', ['player', 'transition', 'track']),
    'Briganti-Games/Straight-Skeleton-Generator': ('fabric', ['StraightSkeleton', 'Skeleton', 'Wavefront']),
    'Syomus/ProceduralToolkit': ('fabric', ['StraightSkeletonGenerator', 'RoofConstructor', 'FacadeConstructor', 'BuildingGenerator']),
    'BorisTheBrave/DeBroglie': ('fabric', ['TilePropagator', 'PathConstraint', 'AdjacentModel', 'Topology']),
    'mxgmn/WaveFunctionCollapse': ('fabric', ['Model.cs', 'SimpleTiledModel.cs', 'OverlappingModel.cs']),
    'ranjian0/building_tools': ('fabric', ['roof', 'floorplan', 'building', 'wall']),
    'magnificus/Procedural-Cities': ('city', ['plot', 'allotment', 'building', 'road']),
    'christinec-dev/DayNightCycleGodot': ('visual', ['day', 'night', 'shadow', 'light']),
    'joanroig/godot-shaders': ('visual', ['shadow', 'light']),
    'JaccomoLorenz/godot-simple-wind-shader-2d': ('visual', ['wind', 'shader']),
    'KoBeWi/Godot-Palette-Swap-Shader': ('visual', ['PaletteSwap', 'Palette', 'shader']),
    'thiagoamendola/godot-color-lut-shader': ('visual', ['lut', 'shader']),
    'gdquest-demos/godot-shaders': ('visual', ['water', 'wind', 'outline', 'shadow']),
    'weigert/SimpleHydrology': ('terrain', ['hydrology', 'erosion', 'particle', 'water']),
    'dandrino/terrain-erosion-3-ways': ('terrain', ['river_network.py', 'simulation.py', 'ridge_noise.py']),
    'xpTURN/Klotho': ('replay', ['ReplayRecorder', 'ReplayPlayer', 'DeterministicRandom', 'Replay.md']),
    'sgossner/VSCO-2-CE': ('samples', ['.sfz']),
}
EXT = {'.gd', '.gdshader', '.shader', '.cpp', '.h', '.hpp', '.cs', '.py', '.ts', '.js', '.csd', '.sfz'}

def fetch(url):
    req = urllib.request.Request(url, headers={'User-Agent': 'ResonanceCity-source-research'})
    with urllib.request.urlopen(req, timeout=45) as response:
        raw = response.read(24_000_001)
    if len(raw) > 24_000_000:
        raise ValueError('archive exceeds 24 MB reading-pack limit; use selected raw files')
    return raw

def collect(repo, category, keywords):
    out = {'repo': repo, 'category': category, 'url': 'https://github.com/' + repo}
    try:
        remote = subprocess.run(['git', 'ls-remote', out['url'] + '.git', 'HEAD'], capture_output=True, text=True, timeout=35, check=True)
        sha = remote.stdout.split()[0]
        out['commit'] = sha
        archive_url = f'https://codeload.github.com/{repo}/zip/{sha}'
        raw = fetch(archive_url)
        out['archive_url'] = archive_url
        out['upstream_archive_sha256'] = hashlib.sha256(raw).hexdigest()
        z = zipfile.ZipFile(io.BytesIO(raw))
        files = {n.split('/', 1)[1]: n for n in z.namelist() if '/' in n and not n.endswith('/')}
        out['tree'] = sorted(files)
        docs = [p for p in files if '/' not in p and re.search(r'(?i)^(readme|licen[sc]e|copying|notice|authors)', p)]
        def score(p):
            return sum((len(keywords) - i) * 10 for i, k in enumerate(keywords) if k.lower() in p.lower()) - p.count('/')
        code = [p for p in files if Path(p).suffix.lower() in EXT and not re.search(r'(?i)(thirdparty|third_party|external/|vendor/|godot-cpp/)', p) and score(p) > 0]
        selected = docs + sorted(code, key=lambda p: (-score(p), p))[:8]
        out['files'] = []
        for p in dict.fromkeys(selected):
            data = z.read(files[p])
            if len(data) > 700_000:
                continue
            local = Path('源码') / repo.replace('/', '__') / p
            dest = BASE / local
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(data)
            anchors = []
            for i, line in enumerate(data.decode('utf-8', errors='replace').splitlines(), 1):
                if re.match(r'^\s*(?:func |def |class |(?:static )?(?:inline )?(?:void|bool|int|float|double) \w+\s*\()', line):
                    anchors.append({'line': i, 'signature': line.strip()[:180]})
            out['files'].append({'path': p, 'local_path': local.as_posix(), 'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest(), 'url': f'https://github.com/{repo}/blob/{sha}/{p}', 'raw_url': f'https://raw.githubusercontent.com/{repo}/{sha}/{p}', 'anchors': anchors[:12]})
        out['status'] = 'downloaded_reading_excerpts'
    except Exception as exc:
        out['status'] = 'incomplete'
        out['error'] = str(exc)
    return out

def main():
    results = []
    with futures.ThreadPoolExecutor(max_workers=6) as pool:
        jobs = [pool.submit(collect, repo, *cfg) for repo, cfg in REPOS.items()]
        for job in futures.as_completed(jobs):
            result = job.result()
            results.append(result)
            print(result['repo'], result['status'], len(result.get('files', [])), result.get('error', ''), flush=True)
            (BASE / '来源索引.json').write_text(json.dumps(sorted(results, key=lambda x: x['repo']), ensure_ascii=False, indent=2) + '\n', encoding='utf-8')

if __name__ == '__main__':
    main()
