"""Read-only asset/GPU lighting evidence; run after lighting_contract --asset-gray."""
from pathlib import Path
import colorsys
import hashlib
import json
import math
import sys

import numpy as np
from PIL import Image, ImageFilter, ImageDraw, ImageFont

from demo_lighting import glb_faces, project, shade_rgb, config, face_normal
from prepare_demo_art import COLORS
from build_demo_compounds import geometry
from build_classical_svg import WALL, STONE, ROOF, temple, church, civic_hall, amphitheater

ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'验证记录/Demo/UI-006_第55轮'

def lightness(rgb):
    s=np.asarray(rgb,dtype=float)/255
    linear=np.where(s<=.04045,s/12.92,((s+.055)/1.055)**2.4)
    y=linear@np.array([.2126,.7152,.0722])
    return 116*np.where(y>(6/29)**3,np.cbrt(y),y/(3*(6/29)**2)+4/29)-16

def sha(path): return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    entries={}
    for folder in ['Demo城市','风格小景','古典建筑候选']:
        manifest=json.loads((ROOT/'资源'/folder/'manifest.json').read_text(encoding='utf8'))
        for e in manifest['entries']:
            if e['id'] in entries:
                assert entries[e['id']]['texture_sha256']==e['texture_sha256']
            entries[e['id']]=e
    bases=COLORS+['#E3E5D7','#F6EFE5','#E8E0D4','#D9B4A5','#D5BEAF','#F6F0E7','#DBB9A8']+[WALL[2],STONE[2],ROOF[2],config()['compound_base'],config()['historic_stone']]
    bases=list(dict.fromkeys(bases))
    rgb=np.array([tuple(bytes.fromhex(c[1:])) for c in bases])
    triples=np.stack([shade_rgb(rgb,0,0),shade_rgb(rgb,1,1),shade_rgb(rgb,1,0)],axis=1)
    labs=lightness(triples)
    hsl=[100*(max(colorsys.rgb_to_hls(*c/255)[1] for c in tri)-min(colorsys.rgb_to_hls(*c/255)[1] for c in tri)) for tri in triples]
    assert np.min(labs[:,0]-labs[:,1])>=5 and np.min(labs[:,1]-labs[:,2])>=10 and max(hsl)<=30
    c=config(); a=math.radians(c['sun_west_south_degrees']); sun_shift=np.array([math.cos(a),0,-math.sin(a)])/math.tan(math.radians(c['sun_height_degrees']))
    angle=math.degrees(math.atan2(*project(sun_shift)[::-1]))
    proofs=[]
    generated={'classical_temple_01':temple,'historic_church_01':church,'classical_civic_hall_01':civic_hall,'classical_amphitheater_01':amphitheater}
    original={e['id']:e for e in json.loads((ROOT/'资源/P0城市/manifest.json').read_text(encoding='utf8'))['entries']}
    for e in entries.values():
        assert sha(ROOT/e['texture'])==e['texture_sha256']
        for kind in ['shadow','contact']:
            assert sha(ROOT/e[kind+'_texture'])==e[kind+'_sha256']
            assert e[kind+'_pixels_per_world']>0 and len(e[kind+'_origin'])==2
        if e['id'] in original:
            old=original[e['id']]
            assert e['origin']==old['origin'] and e['image_bounds']==old['image_bounds']
            assert np.array_equal(np.asarray(Image.open(ROOT/e['texture']))[...,3],np.asarray(Image.open(ROOT/old['texture']))[...,3])
            faces=glb_faces(ROOT/e['model'])
        elif e['id'] in generated:
            faces=[(np.asarray(v),face_normal(v)) for _,v,_ in generated[e['id']]()]
        else:
            f,d,_=geometry(e['variant']); faces=[(np.asarray(v),face_normal(v)) for v,_ in f+d]
        anchor=np.array(e['lighting']['ground_anchor_world'])
        vertices=np.unique(np.concatenate([v for v,_ in faces]),axis=0)-anchor
        moved=vertices+vertices[:,1,None]*sun_shift; moved[:,1]=0
        coords=project(moved)*e['shadow_pixels_per_world']+np.array(e['shadow_origin'])
        mask=np.array(Image.open(ROOT/e['shadow_texture']))[...,3]
        missing=0
        for x,y in np.rint(coords).astype(int):
            missing+=int(mask[max(0,y-2):y+3,max(0,x-2):x+3].max(initial=0)<128)
        assert missing==0,(e['id'],'missing cast vertices',missing)
        assert abs(e['lighting']['sun_screen_shadow_degrees']-angle)<=3
        gpu=np.array(Image.open(OUT/'灰度原图'/f"{e['id']}.png").convert('RGB'))
        colors,counts=np.unique(gpu.reshape(-1,3),axis=0,return_counts=True)
        candidates=[]
        for i,tri in enumerate(triples):
            rows=[]
            for color in tri:
                matches=np.max(np.abs(colors.astype(int)-color),axis=1)<=1
                count=int(counts[matches].sum())
                measured=np.average(colors[matches],weights=counts[matches],axis=0) if count else color
                rows.append((count,measured))
            candidates.append((min(r[0] for r in rows),i,rows))
        _,i,rows=max(candidates,key=lambda item:item[0])
        measured=lightness([r[1] for r in rows])
        face_result={'base':bases[i],'pixels_per_face':[r[0] for r in rows],'delta_Lstar':[float(measured[0]-measured[1]),float(measured[1]-measured[2])]}
        if e['category'] not in ['tree','decoration']:
            assert min(face_result['pixels_per_face'])>=8,(e['id'],face_result)
            assert face_result['delta_Lstar'][0]>=5 and face_result['delta_Lstar'][1]>=10,(e['id'],face_result)
        else: face_result['scope']='Organic/sloped geometry; no forced horizontal-top/vertical-side triple.'
        ground=np.array([225,232,236]); occupied=np.max(np.abs(gpu.astype(int)-ground),axis=2)>2
        bottom=[]
        for x in range(512):
            ys=np.flatnonzero(occupied[:,x])
            if len(ys)>8:
                y=ys[-1]
                bottom.append(float(abs(lightness(gpu[max(0,y-2),x])-lightness(ground))))
        bottom_metrics={'sample_columns':len(bottom),'p10_delta_Lstar':float(np.percentile(bottom,10)),'median_delta_Lstar':float(np.median(bottom)),
                        'scope':'Unshadowed asset silhouette on #e1e8ec; 2px inside lowest contour. Record failures; no replacement of actual scene contact contrast.'}
        if e['category'] not in ['tree','decoration']:
            assert bottom_metrics['p10_delta_Lstar']>=8,(e['id'],'bottom contrast',bottom_metrics)
        proofs.append({'id':e['id'],'source_SHA':e['texture_sha256'],'mask_SHA':[e['shadow_sha256'],e['contact_sha256']],
                       'ground_anchor':anchor.tolist(),'cast_vertices':len(vertices),'missing_cast_vertices':missing,'shadow_degrees':angle,
                       'three_faces_GPU':face_result,'bottom_contour_GPU':bottom_metrics})
    proof={'assets':len(proofs),'palette_checks':{'minimum_top_lit_delta_Lstar':float(np.min(labs[:,0]-labs[:,1])),
        'minimum_lit_dark_delta_Lstar':float(np.min(labs[:,1]-labs[:,2])),'maximum_HSL_delta_percent':max(hsl)},
        'assets_evidence':proofs,'human_art':'PENDING','building_bottom_P10_8':'PASS; 15 architectural assets. Thin trees/lamp contours and AA fringe pixels are recorded separately.'}
    (OUT/'UI-006_资产灰度.json').write_text(json.dumps(proof,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
    font=ImageFont.truetype('C:/Windows/Fonts/msyh.ttc',24)
    board=Image.new('RGB',(1440,940),'#edf0f3');draw=ImageDraw.Draw(board)
    for row,label in enumerate(['主城推近','风格小景_推近','古典小景_推近']):
        for col,phase in enumerate(['改前','改后']):
            image=Image.open(OUT/f'{phase}_{label}.png').convert('RGB');image.thumbnail((710,270),Image.Resampling.LANCZOS)
            x=col*720+(720-image.width)//2;y=row*310+38
            board.paste(image,(x,y));draw.text((col*720+18,row*310+5),f'{phase} · {label}',font=font,fill='#526473')
    board.save(OUT/'光影统一_前后对照.png')
    gray=Image.open(OUT/'改后_主城推近.png').convert('L');gray.save(OUT/'改后_主城灰度.png')
    gray.filter(ImageFilter.GaussianBlur(8)).save(OUT/'改后_主城灰度_模糊8px.png')
    print('UI-006 ASSET PASS',len(proofs),'hashes/ground anchors/cast vertices/actual GPU same-material planes; bottom-edge limitations recorded')

if __name__=='__main__': main()
