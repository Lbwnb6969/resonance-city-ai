"""Build the fixed 700 sprite fixture and one occlusion-aware window layer."""
from pathlib import Path
import json,hashlib,re
import numpy as np
from PIL import Image
ROOT=Path(__file__).resolve().parents[1]

def main():
    spec=ROOT/'文档/01_执行规格/spec.ui.md'
    text=spec.read_text(encoding='utf-8-sig').split('## 表 U6',1)[1]
    columns,rows,count=map(int,re.search(r'(\d+)×(\d+)=(\d+)栋',text).groups())
    assert columns*rows==count
    width,height=map(int,re.search(r'实际有画面(\d+)×(\d+)',text).groups())
    dx,dy=map(int,re.search(r'步进\((\d+),(\d+)\)px',text).groups())
    sprite_width=int(re.search(r'屏幕宽(\d+)px',text).group(1))
    origin_x,origin_y=map(int,re.search(r'\((\d+)\+.*?,(\d+)\+',text).groups())
    seed=int(re.search(r'种子(\d+)',text).group(1))
    run=ROOT/'资源/P0城市';source=run/'manifest.json'
    buildings=[e for e in json.loads(source.read_text(encoding='utf-8'))['entries'] if e['voice_tag']!='non_voice']
    assert len(buildings)==9
    cache={}
    for entry in buildings:
        im=Image.open(ROOT/entry['texture']).convert('RGBA')
        factor=sprite_width/im.width
        size=(sprite_width,round(im.height*factor))
        index=np.array(Image.open(ROOT/entry['indexed_master']).convert('RGBA'))
        mask=(index[...,0]==48)&(index[...,3]>0)
        window=np.zeros_like(index);window[mask]=[255,217,138,255]
        cache[entry['id']]=(im.resize(size,Image.Resampling.LANCZOS),Image.fromarray(window,'RGBA').resize(size,Image.Resampling.LANCZOS),factor)
    entries=[]
    for y in range(rows):
        for x in range(columns):
            index=int.from_bytes(hashlib.sha256(f'{seed}/{x}/{y}'.encode()).digest()[:8],'big')%len(buildings)
            entry=buildings[index];im,window,factor=cache[entry['id']]
            entries.append({'asset_id':entry['id'],'texture':entry['texture'],'texture_sha256':entry['texture_sha256'],
                            'position':[origin_x+(x-y)*dx,origin_y+(x+y)*dy],'origin':entry['origin'],'scale':factor,'cell':[x,y]})
    # Later building alpha occludes earlier window pixels before adding its own windows.
    overlay=np.zeros((height,width,4),dtype=np.float64)
    for entry in sorted(entries,key=lambda e:e['position'][1]):
        im,window,factor=cache[entry['asset_id']]
        x=round(entry['position'][0]-entry['origin'][0]*factor);y=round(entry['position'][1]-entry['origin'][1]*factor)
        assert x>=0 and y>=0 and x+im.width<=width and y+im.height<=height,'Every building fully inside viewport'
        old=overlay[y:y+im.height,x:x+im.width]
        a=np.asarray(im)[...,3:4]/255
        w=np.asarray(window,dtype=np.float64);wa=w[...,3:4]/255
        old[...,:3]=old[...,:3]*(1-a)+w[...,:3]*wa
        old[...,3:4]=old[...,3:4]*(1-a)+w[...,3:4]
    # Stored RGB is straight alpha; CanvasItemMaterial handles additive drawing.
    alpha=overlay[...,3:4]/255
    overlay[...,:3]=np.divide(overlay[...,:3],alpha,out=np.zeros_like(overlay[...,:3]),where=alpha>0)
    window_path=run/'performance_windows.png'
    Image.fromarray(np.clip(overlay,0,255).astype(np.uint8),'RGBA').save(window_path)
    config={'spec_sha256':hashlib.sha256(spec.read_bytes()).hexdigest(),'manifest_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),
            'seed':seed,'count':count,'grid':[columns,rows],'viewport':[width,height],'step':[dx,dy],'sprite_width':sprite_width,
            'warmup_seconds':10,'measurement_seconds':60,'min_fps':60,'max_p95_ms':16.67,'window_strength':0.18,
            'window_texture':window_path.relative_to(ROOT).as_posix(),'window_sha256':hashlib.sha256(window_path.read_bytes()).hexdigest(),
            'entries':entries,'audio':'not part of static visual budget fixture','art':'candidates; human approval pending'}
    (run/'performance_layout.json').write_text(json.dumps(config,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(f'Prepared {count} in-view building sprites and one {width}x{height} additive window layer')
if __name__=='__main__':main()
