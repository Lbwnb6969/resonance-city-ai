"""Audit the actual Godot export ZIP rather than trusting a successful export exit."""
from pathlib import Path
import argparse,json,hashlib,re,zipfile
ROOT=Path(__file__).resolve().parents[1]

def audit(pack,output):
    manifest=json.loads((ROOT/'资源/P0城市/manifest.json').read_text(encoding='utf-8'))
    with zipfile.ZipFile(pack) as z:
        names=z.namelist()
        forbidden=[n for n in names if n.startswith(('资产/','tests/','tools/','文档/','验证记录/','addons/','.git/','资源/测试/')) or n.lower().endswith(('.eps','.jpg','.jpeg','.glb','.fbx','.obj'))]
        assert not forbidden,forbidden
        assert len(names)==len(set(names)) and z.testzip() is None
        assert z.read('资源/P0城市/manifest.json')==(ROOT/'资源/P0城市/manifest.json').read_bytes()
        textures=[]
        for entry in manifest['entries']:
            path=entry['texture']
            assert hashlib.sha256((ROOT/path).read_bytes()).hexdigest()==entry['texture_sha256']
            assert entry['license']=='CC0-1.0' and entry['package'] in ['roads','commercial','industrial','suburban']
            imported=z.read(path+'.import').decode('utf-8')
            target=re.search(r'^path="res://([^"]+)"',imported,re.M).group(1)
            assert target in names
            assert hashlib.sha256(z.read(target)).digest()==hashlib.sha256((ROOT/target).read_bytes()).digest()
            textures.append({'id':entry['id'],'runtime_path':path,'source_png_sha256':entry['texture_sha256'],'packed_ctex':target,'packed_ctex_sha256':hashlib.sha256(z.read(target)).hexdigest(),'license':entry['license']})
        scripts={}
        for name in names:
            if name.startswith('scripts/') and name.endswith('.gdc'):
                source=ROOT/name[:-1]
                assert source.is_file(),name
                scripts[name[:-1]]=hashlib.sha256(source.read_bytes()).hexdigest()
        expected={'scenes/p0_main.tscn.remap','scenes/listening_session.tscn.remap','scenes/performance_fixture.tscn.remap','project.binary','数据/spec_values.json','数据/listening_fixtures.json'}
        assert expected.issubset(names),expected-set(names)
        layout=json.loads(z.read('资源/P0城市/performance_layout.json'))
        assert len(layout['entries'])==700
        result={'rule_id':'ASSET-001','case':'export_audit','status':'PASS','pack':str(pack),'pack_sha256':hashlib.sha256(pack.read_bytes()).hexdigest(),
                'pack_size_bytes':pack.stat().st_size,'file_count':len(names),'files':names,'forbidden_entries':forbidden,'textures':textures,'script_sources_sha256':scripts,
                'scope':'Actual local audit ZIP exclusion and exact whitelist imported resources; isolated scene test separate; human art/shipping executable not approved'}
    output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(f"ASSET-001 EXPORT_AUDIT PASS files={len(names)} masters={len(textures)} scripts={len(scripts)} bytes={pack.stat().st_size}")
if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('pack',type=Path);p.add_argument('--output',type=Path,default=ROOT/'验证记录/P0/导出审计/pack.json');args=p.parse_args();audit(args.pack,args.output)
