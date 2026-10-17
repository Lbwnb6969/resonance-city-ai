"""Prepare writable CC0 copies and textures from authoritative palette slots."""
from pathlib import Path
import json,re,shutil,hashlib
import numpy as np
from PIL import Image

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'资产/02_加工中/P0_CityKits'
RUNTIME=ROOT/'资源/P0城市'
choices=[('residential','suburban',['building-type-a','building-type-b','building-type-c']),
         ('commercial','commercial',['building-a','building-b','building-c']),
         ('industrial','industrial',['building-a','building-b','building-c']),
         ('ground','roads',['tile-low','tile-high']),('road','roads',['road-straight','road-bend','road-crossroad']),
         ('tree','suburban',['tree-small','tree-large']),('decoration','suburban',['fence','planter']),
         ('decoration','industrial',['water-tower']),('decoration','roads',['light-square'])]

def main():
    spec=(ROOT/'文档/01_执行规格/spec.asset.md').read_text(encoding='utf-8-sig').split('## 表 S6',1)[1]
    palette=[{'slot':int(i),'name':n.strip(),'hex':c} for i,n,c in re.findall(r'\| (\d+) \| ([^|]+) \| (#[A-Fa-f0-9]{6}) \|',spec)]
    assert len(palette)==24
    colors=np.array([tuple(bytes.fromhex(p['hex'][1:])) for p in palette],dtype=np.float64)
    WORK.mkdir(parents=True,exist_ok=True);RUNTIME.mkdir(parents=True,exist_ok=True)
    Image.fromarray(colors.astype(np.uint8)[None,:,:],'RGB').save(RUNTIME/'palette.png')
    Image.fromarray(np.repeat((8+10*np.arange(24,dtype=np.uint8))[None,:,None],3,axis=2),'RGB').save(WORK/'index_palette.png')
    (RUNTIME/'palette.json').write_text(json.dumps(palette,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    packages=json.loads((ROOT/'资产/许可记录/CityKits/packages.json').read_text(encoding='utf-8'))
    packages={p['package'].replace('city-kit-',''):p for p in packages}
    # The source UV atlas has three groups of eight columns, each a base/shade row pair.
    mapping=np.array([3,4,1,6,2,22,21,19,7,8,9,0,10,11,1,12,13,14,15,16,17,18,19,20])
    used_categories={package:sorted({category for category,pkg,_ in choices if pkg==package}) for package in packages}
    for package in packages:
        source=ROOT/packages[package]['original_directory']/'Models/GLB format'
        folder=WORK/package; (folder/'Textures').mkdir(parents=True,exist_ok=True)
        texture_copy=folder/'Textures/colormap.png'
        if texture_copy.exists():
            assert texture_copy.read_bytes()==(source/'Textures/colormap.png').read_bytes()
        else:
            shutil.copyfile(source/'Textures/colormap.png',texture_copy)
        texture_copy.chmod(0o666)
        original=np.asarray(Image.open(source/'Textures/colormap.png').convert('RGB'),dtype=np.float64)
        h,w=original.shape[:2];yy,xx=np.indices((h,w));row=np.maximum(0,(yy//(h//8)-2)//2);col=xx//(w//8)
        slots=mapping[np.minimum(row,2)*8+col]
        encoded=np.repeat((8+10*slots)[...,None],3,axis=2).astype(np.uint8)
        luma=original@np.array([.2126,.7152,.0722]);base=original[(2+row*2)*(h//8)+(h//16),col*(w//8)+(w//16)]@np.array([.2126,.7152,.0722])
        shade=np.clip(luma/np.maximum(base,1),.55,1.15)
        color=np.clip(colors[slots]*shade[...,None],0,255).astype(np.uint8)
        grey=np.repeat(np.clip(55+140*shade[...,None],0,255).astype(np.uint8),3,axis=2)
        for mode,array in [('index',encoded),('color',color),('preview',grey)]:
            Image.fromarray(array,'RGB').save(folder/(mode+'.png'))
        for category in used_categories[package]:
            adjusted=mapping.copy()
            if category=='residential':
                adjusted[[0,4]]=1
                adjusted[5]=4
            elif category=='industrial':
                adjusted[12]=2
                adjusted[13]=14
                adjusted[15]=8
            elif category=='tree':
                adjusted[17]=3
                adjusted[12]=12
            elif category=='decoration':
                adjusted[17]=3
                adjusted[12]=12 if package=='suburban' else 2
                if package=='industrial':
                    adjusted[13]=14
                    adjusted[5]=4
            selected=adjusted[np.minimum(row,2)*8+col]
            encoded=np.repeat((8+10*selected)[...,None],3,axis=2).astype(np.uint8)
            colored=np.clip(colors[selected]*shade[...,None],0,255).astype(np.uint8)
            for mode,array in [('index',encoded),('color',colored),('preview',grey)]:
                Image.fromarray(array,'RGB').save(folder/(category+'_'+mode+'.png'))
    counts={};entries=[]
    for category,package,names in choices:
        for name in names:
            counts[category]=counts.get(category,0)+1
            id=f'{category}_{name.replace("-","_")}_{counts[category]:02d}_base'
            original=ROOT/packages[package]['original_directory']/'Models/GLB format'/(name+'.glb')
            copied=WORK/package/original.name
            if copied.exists(): assert copied.read_bytes()==original.read_bytes()
            else: shutil.copy2(original,copied);copied.chmod(0o666)
            entries.append({'id':id,'category':category,'variant':'base','package':package,'model':str(copied.relative_to(ROOT)).replace('\\','/'),
                            'source_model':str(original.relative_to(ROOT)).replace('\\','/'),'source_model_sha256':hashlib.sha256(original.read_bytes()).hexdigest(),
                            'source_url':packages[package]['source_url'],'package_version':packages[package]['package_version'],
                            'downloaded_at':packages[package]['downloaded_at'],'license':'CC0-1.0','license_file':packages[package]['license_file'],
                            'voice_tag':category if category in ['residential','commercial','industrial'] else 'non_voice','attribution':'Kenney (optional)',
                            'palette_slots':sorted(set(mapping.tolist()))})
    assert len(entries)==sum(len(names) for _,_,names in choices)
    (WORK/'selection.json').write_text(json.dumps({'palette':palette,'entries':entries},ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(f'Prepared {len(entries)} writable CC0 models, 24-slot palette and three texture modes')

if __name__=='__main__':main()
