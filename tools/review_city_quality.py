"""Pixel/source checks plus reviewable three-asset boards; never invent art approval."""
from pathlib import Path
import json,csv,hashlib,math,stat
import numpy as np
from PIL import Image,ImageDraw,ImageFont
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'验证记录/P0/素材审查'

def main():
    OUT.mkdir(parents=True,exist_ok=True)
    manifest=json.loads((ROOT/'资源/P0城市/manifest.json').read_text(encoding='utf-8'))
    entries=manifest['entries'];checks=[];review=[]
    font=ImageFont.truetype('C:/Windows/Fonts/msyh.ttc',15)
    for n,e in enumerate(entries):
        im=np.array(Image.open(ROOT/e['texture']).convert('RGBA'))
        idx=np.array(Image.open(ROOT/e['indexed_master']).convert('RGBA'))
        preview=Image.open(ROOT/e['preview'])
        visible=im[...,3]>0
        values=set(np.unique(idx[visible,0]).tolist())
        original=ROOT/e['source_model'];source_sha=hashlib.sha256(original.read_bytes()).hexdigest()
        result={'id':e['id'],'main_sha256':hashlib.sha256((ROOT/e['texture']).read_bytes()).hexdigest(),
                'preview_512':max(preview.size)==512,'main_hd':max(im.shape[:2])>=2048,
                'index_same_alpha':bool(np.array_equal(idx[...,3],im[...,3])),
                'index_exact_slots':bool(np.all(idx[visible,0]==idx[visible,1]) and np.all(idx[visible,1]==idx[visible,2]) and values.issubset({8+10*s for s in range(24)})),
                'transparent_rgb_zero':bool(np.all(im[~visible,:3]==0)),
                'source_sha_matches':source_sha==e['source_model_sha256'],
                'source_read_only':not bool(original.stat().st_mode&stat.S_IWRITE),
                'license_sha_matches':hashlib.sha256((ROOT/e['license_file']).read_bytes()).hexdigest()==e['license_sha256']}
        result['technical_pass']=all(v for k,v in result.items() if k not in ['id','main_sha256'])
        assert result['technical_pass'],result
        checks.append(result)
        companions=[entries[(n+7)%len(entries)],entries[(n+13)%len(entries)]]
        board=Image.new('RGB',(1080,860),'#e4dfd2');draw=ImageDraw.Draw(board)
        draw.text((18,12),f"三格审查 {n+1}/{len(entries)} · 上：材质近看；下：同世界缩放比例 · 左待审项、右同库对照 · 未人工批准",font=font,fill='#343943')
        for c,item in enumerate([e]+companions):
            art=Image.open(ROOT/item['texture']).convert('RGBA')
            close=art.copy();close.thumbnail((324,330),Image.Resampling.LANCZOS)
            board.paste(close,(c*360+(360-close.width)//2,375-close.height),close)
            sx,sy,sz=item['model_bounds']['size']
            horizontal=(sx+sz)/math.sqrt(2)
            camera_size=max(horizontal,sy*math.cos(math.pi/6)+horizontal*.5)*1.1
            crop=item['image_bounds']['crop']
            pixels_per_world=2048*2048/(camera_size*max(crop[2:]))
            factor=90/pixels_per_world
            art=art.resize((round(art.width*factor),round(art.height*factor)),Image.Resampling.LANCZOS)
            x=round(c*360+180-item['origin'][0]*factor);y=round(770-item['origin'][1]*factor)
            board.paste(art,(x,y),art)
            label=item['id'];draw.text((c*360+16,802),label[:32],font=font,fill='#343943');draw.text((c*360+16,825),label[32:],font=font,fill='#343943')
        board.save(OUT/(e['id']+'.png'))
        review.append({'asset_id':e['id'],'main_sha256':result['main_sha256'],'companion_1':companions[0]['id'],'companion_2':companions[1]['id'],
                       'status':'PENDING','reviewer':'','notes':''})
    # Deterministic 10% close-edge audit includes one roof/wall and one tree silhouette.
    sample_ids=[entries[0]['id'],next(e['id'] for e in entries if e['category']=='tree')]
    audit=Image.new('RGB',(1080,420),'#343943');draw=ImageDraw.Draw(audit)
    for n,asset_id in enumerate(sample_ids):
        e=next(e for e in entries if e['id']==asset_id);art=Image.open(ROOT/e['texture']).convert('RGBA')
        art.thumbnail((250,360),Image.Resampling.LANCZOS)
        for c,bg in enumerate(['#ffffff','#000000']):
            tile=Image.new('RGB',(270,390),bg);tile.paste(art,((270-art.width)//2,380-art.height),art);audit.paste(tile,(n*540+c*270,0))
        draw.text((n*540+8,394),asset_id[:34],font=font,fill='#ffffff')
    audit.save(OUT/'10pct_透边抽检.png')
    review_path=OUT/'三格人工记录.csv'
    if not review_path.exists():
        with review_path.open('w',encoding='utf-8-sig',newline='') as f:
            writer=csv.DictWriter(f,fieldnames=review[0].keys());writer.writeheader();writer.writerows(review)
    report={'status':'TECHNICAL_PASS_HUMAN_PENDING','technical_items':len(checks),'checks':checks,'close_edge_sample_ids':sample_ids,'sample_fraction':len(sample_ids)/len(entries),
            'edge_method':'Exact transparent RGB/index alpha check plus black/white alpha-weighted downsizing boards (Pillow/NumPy); visual halo approval remains human',
            'human_review_file':review_path.relative_to(ROOT).as_posix(),'count_conflict':'S4 explicit counts total20; prose21 correction pending'}
    (OUT/'technical.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    text='# P0素材三格审查\n\n技术检查通过不代表人工观感通过。共20个明确类别项；21件正文冲突另待确认。\n\n每项打开图片，判断三件是否像同一个游戏。将三格人工记录.csv中status改approved或rejected，reviewer填真实姓名/代号，notes记录具体观察；不要改来源SHA或同伴ID。若拒绝，保留文件并记原因，后续修改副本。\n\n'
    for e in entries:text+=f"- [{e['id']}]({e['id']}.png)\n"
    text+='\n10%透边抽检：[白/黑底缩放图](10pct_透边抽检.png)。图示与像素检查用于技术诊断，不代替人工艺术评价。\n'
    (OUT/'说明.md').write_text(text,encoding='utf-8',newline='\n')
    print(f'QUALITY technical PASS {len(checks)} assets; {len(entries)} real three-grid boards; human review PENDING')
if __name__=='__main__':main()
