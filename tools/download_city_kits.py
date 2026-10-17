"""Download only four user-approved official Kenney CC0 City Kits, retaining evidence."""
from pathlib import Path
from datetime import datetime,timezone
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
import re
import shutil
import urllib.request
import zipfile

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'资产/01_原始素材/CC0_Kenney'
EVIDENCE=ROOT/'资产/许可记录/CityKits'
NAMES=['roads','commercial','industrial','suburban']

def sha(data): return hashlib.sha256(data).hexdigest()

def download(name):
    url='https://kenney.nl/assets/city-kit-'+name
    page=urllib.request.urlopen(url,timeout=45).read()
    text=page.decode('utf-8')
    assert 'Creative Commons CC0' in text
    links=re.findall(r"href=['\"]([^'\"]+\.zip)['\"]",text)
    links=[s for s in links if s.startswith('https://kenney.nl/') and 'city-kit-'+name in s]
    assert len(links)==1,(name,links)
    zip_path=SOURCE/('kenney_city-kit-'+name+'.zip')
    assert not zip_path.exists(),f'Refusing to overwrite original: {zip_path}'
    data=urllib.request.urlopen(links[0],timeout=60).read()
    zip_path.write_bytes(data)
    directory=SOURCE/('city-kit-'+name)
    directory.mkdir()
    files={}
    with zipfile.ZipFile(zip_path) as archive:
        for member in archive.infolist():
            target=(directory/member.filename).resolve()
            assert target.is_relative_to(directory.resolve()),'Unexpected archive path traversal'
            if not member.is_dir():
                target.parent.mkdir(parents=True,exist_ok=True)
                content=archive.read(member)
                target.write_bytes(content)
                files[member.filename]=sha(content)
    license_files=[p for p in directory.rglob('*') if p.is_file() and 'license' in p.name.lower()]
    assert len(license_files)==1
    license_text=license_files[0].read_text(encoding='utf-8-sig')
    assert 'CC0' in license_text
    version=re.search(r'\((\d+\.\d+)\)',license_text)
    if not version:
        versions=re.findall(r"<span[^>]*class=['\"]version[^>]*>\s*([\d.]+)",text)
        version=versions[0] if versions else None
    else: version=version[1]
    if not version:
        versions=re.findall(r'>\s*(\d+\.\d+)\s*<',text)
        assert versions,(name,'version unavailable')
        version=versions[0]
    proof=EVIDENCE/name
    proof.mkdir(parents=True,exist_ok=True)
    (proof/'official-page.html').write_bytes(page)
    shutil.copy2(license_files[0],proof/'License.txt')
    models=[p for p in files if p.lower().endswith(('.glb','.gltf','.obj','.fbx'))]
    assert models
    report={'package':'city-kit-'+name,'source_url':url,'download_url':links[0],
            'package_version':version,'downloaded_at':datetime.now(timezone.utc).isoformat(),
            'license':'CC0-1.0','license_file':str((proof/'License.txt').relative_to(ROOT)).replace('\\','/'),
            'archive':str(zip_path.relative_to(ROOT)).replace('\\','/'),'archive_sha256':sha(data),
            'original_directory':str(directory.relative_to(ROOT)).replace('\\','/'),'files_sha256':files,
            'model_count_all_formats':len(models),'formats':sorted({Path(p).suffix.lower() for p in models})}
    (proof/'package.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    for path in directory.rglob('*'):
        if path.is_file(): path.chmod(0o444)
    zip_path.chmod(0o444)
    print(name,version,len(data),'bytes',len(models),'models')
    return report

if __name__=='__main__':
    SOURCE.mkdir(parents=True,exist_ok=True)
    EVIDENCE.mkdir(parents=True,exist_ok=True)
    reports=list(ThreadPoolExecutor(4).map(download,NAMES))
    (EVIDENCE/'packages.json').write_text(json.dumps(reports,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
