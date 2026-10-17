"""Restore exact slot bytes after measured GPU transfer and verify deployable PNGs."""
from pathlib import Path
import json,hashlib,shutil
import numpy as np
from PIL import Image,ImageDraw

ROOT=Path(__file__).resolve().parents[1]
LIB=ROOT/'资产/03_入库/P0城市'
RUN=ROOT/'资源/P0城市'

def main():
    manifest=json.loads((LIB/'manifest.json').read_text(encoding='utf-8'))
    lookup=json.loads((LIB/'encoding.json').read_text(encoding='utf-8'))
    inverse={int(k):int(v) for k,v in lookup.items()}
    canonical={8+10*n for n in range(24)}
    summaries=[]
    for entry in manifest['entries']:
        path=ROOT/entry['indexed_master']
        img=np.array(Image.open(path).convert('RGBA'));visible=img[...,3]>0
        colors=set(np.unique(img[visible,:3]).tolist())
        assert np.all(img[visible,0]==img[visible,1]) and np.all(img[visible,1]==img[visible,2])
        # Re-running this finalizer on canonical data is harmless.
        if not colors.issubset(canonical):
            assert colors.issubset(inverse),f'Unexpected GPU index samples: {colors-set(inverse)}'
            table=np.arange(256,dtype=np.uint8)
            for source,target in inverse.items():table[source]=target
            img[...,:3]=table[img[...,:3]]
        assert set(np.unique(img[visible,0])).issubset(canonical)
        img[~visible,:3]=0
        Image.fromarray(img,'RGBA').save(path)
        source_license=entry.get('source_license_file',entry['license_file'])
        license_copy=LIB/'许可'/entry['package']/'License.txt'
        license_copy.parent.mkdir(parents=True,exist_ok=True)
        shutil.copyfile(ROOT/source_license,license_copy)
        entry['source_license_file']=source_license
        entry['license_file']=license_copy.relative_to(ROOT).as_posix()
        entry['license_sha256']=hashlib.sha256(license_copy.read_bytes()).hexdigest()
        entry['palette_slots']=sorted({(int(v)-8)//10 for v in np.unique(img[visible,0])})
        entry['indexed_master_sha256']=hashlib.sha256(path.read_bytes()).hexdigest()
        texture=ROOT/entry['texture']; main=np.array(Image.open(texture).convert('RGBA'))
        main[main[...,3]==0,:3]=0
        Image.fromarray(main,'RGBA').save(texture)
        library_main=LIB/'整图'/texture.name
        shutil.copyfile(texture,library_main)
        assert max(main.shape[:2])>=2048
        entry['texture_sha256']=hashlib.sha256(texture.read_bytes()).hexdigest()
        entry['slot_encoding']='grayscale: 8+10*slot; GPU transfer canonicalized; alpha=silhouette'
        entry['alpha_border']='transparent RGB zero; runtime fix_alpha_border + mipmaps'
        summaries.append({'id':entry['id'],'main_size':[main.shape[1],main.shape[0]],'slot_count':len(entry['palette_slots']),'transparent_rgb_zero':True,'human_art':'PENDING'})
    text=json.dumps(manifest,ensure_ascii=False,indent=2)+'\n'
    for path in [LIB/'manifest.json',RUN/'manifest.json']:path.write_text(text,encoding='utf-8',newline='\n')
    sheet=Image.new('RGB',(1200,((len(manifest['entries'])+3)//4)*310),(34,39,45));draw=ImageDraw.Draw(sheet)
    for index,entry in enumerate(manifest['entries']):
        im=Image.open(ROOT/entry['texture']).convert('RGBA');im.thumbnail((280,260),Image.Resampling.LANCZOS)
        x=(index%4)*300+(300-im.width)//2;y=(index//4)*310+270-im.height
        sheet.paste(im,(x,y),im);draw.text(((index%4)*300+8,(index//4)*310+276),entry['id'][:40],fill=(235,235,230))
    proof=ROOT/'验证记录/P0/烘焙';proof.mkdir(parents=True,exist_ok=True)
    sheet.save(proof/'选件接触表.png')
    (proof/'technical_quality.json').write_text(json.dumps(summaries,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(f'Finalized {len(summaries)} exact-index and colored sprites; human three-grid PENDING')

if __name__=='__main__':main()
