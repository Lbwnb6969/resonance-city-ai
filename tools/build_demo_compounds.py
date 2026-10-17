"""Draw coordinated whole-house templates with a fixed 45/30 isometric projection."""
from pathlib import Path
import hashlib
import json
import math

import numpy as np
from PIL import Image, ImageDraw
from demo_lighting import masks, face_normal, shade_hex, config

ROOT = Path(__file__).resolve().parents[1]
PPI = 1000


def project(p):
    x, y, z = p
    return ((x - z) / math.sqrt(2), (x + z) / math.sqrt(2) * .5 - y * math.cos(math.pi / 6))


def box(faces, center, size, colors):
    x, y, z = center
    a, b, c = [v / 2 for v in size]
    faces.extend([
        ([(x-a,y-b,z+c),(x+a,y-b,z+c),(x+a,y+b,z+c),(x-a,y+b,z+c)], colors[0]),
        ([(x+a,y-b,z-c),(x+a,y-b,z+c),(x+a,y+b,z+c),(x+a,y+b,z-c)], colors[1]),
        ([(x-a,y+b,z-c),(x+a,y+b,z-c),(x+a,y+b,z+c),(x-a,y+b,z+c)], colors[2]),
    ])


def facade(details, cx, cy, width, height, z, color):
    details.append(([(cx-width/2,cy-height/2,z),(cx+width/2,cy-height/2,z),
                     (cx+width/2,cy+height/2,z),(cx-width/2,cy+height/2,z)], color))


def window(details, x, y, z, width=.13, height=.16):
    facade(details, x, y, width+.025, height+.025, z, '#F7F0E8')
    facade(details, x, y, width, height, z+.001, '#A5BCC2')
    facade(details, x, y, .012, height, z+.002, '#EDE8DE')
    facade(details, x, y, width, .011, z+.003, '#EDE8DE')


def geometry(kind):
    faces, details = [], []
    box(faces, (0,.02,0), (1.92,.04,.86), ['#D4D6CB','#C4CFCA','#E3E5D7'])
    box(faces, (0,.29,0), (1.8,.50,.72), ['#F1E9DE','#D6DCDD','#F6EFE5'])
    if kind == 'gable':
        faces.extend([
            ([(-.99,.54,-.47),(.99,.54,-.47),(.99,.87,0),(-.99,.87,0)], '#CFA59A'),
            ([(-.99,.54,.47),(.99,.54,.47),(.99,.87,0),(-.99,.87,0)], '#BC8C81'),
            ([(.9,.54,-.36),(.9,.54,.36),(.9,.87,0)], '#E3DED4'),
        ])
        box(faces, (-.5,.88,-.16), (.10,.22,.12), ['#D9CEC2','#C2C8C6','#E8E0D4'])
        for x in [-.67,-.30,.30,.67]:
            window(details,x,.33,.362)
        facade(details,0,.185,.145,.28,.363,'#BBA78F')
        facade(details,.043,.185,.015,.018,.364,'#F2DCC0')
        height = .99
    else:
        box(faces, (0,.55,0), (1.9,.06,.82), ['#C49B8D','#B58E84','#D9B4A5'])
        box(faces, (-.47,.745,-.06), (.82,.39,.60), ['#F1E9DE','#D6DCDD','#F6EFE5'])
        box(faces, (-.47,.955,-.06), (.91,.055,.68), ['#C1AAA4','#B19794','#D5BEAF'])
        # The annex is a coherent lower volume with an open roof terrace.
        box(faces, (.48,.63,.36), (.75,.10,.035), ['#EEE9DD','#D9DDDA','#F6F0E7'])
        box(faces, (.87,.63,0), (.035,.10,.72), ['#EEE9DD','#D9DDDA','#F6F0E7'])
        for x in [-.67,-.28,.29,.65]:
            window(details,x,.32,.362)
        for x in [-.66,-.28]:
            window(details,x,.76,.242,width=.15)
        facade(details,0,.18,.145,.27,.363,'#BBA78F')
        height = .983
    return faces, details, height


def build(kind):
    faces, details, height = geometry(kind)
    original_faces = [(np.asarray(v), face_normal(v)) for v, _ in faces+details]
    base_map = {color: colors[2] for colors in [
        ['#D4D6CB','#C4CFCA','#E3E5D7'], ['#F1E9DE','#D6DCDD','#F6EFE5'],
        ['#D9CEC2','#C2C8C6','#E8E0D4'], ['#C49B8D','#B58E84','#D9B4A5'],
        ['#C1AAA4','#B19794','#D5BEAF'], ['#EEE9DD','#D9DDDA','#F6F0E7'],
    ] for color in colors}
    base_map.update({'#CFA59A':'#DBB9A8','#BC8C81':'#DBB9A8','#E3DED4':'#F6EFE5'})
    for color in ['#D4D6CB','#C4CFCA','#E3E5D7']: base_map[color] = config()['compound_base']
    faces = [(v, shade_hex(c,v,base_map)) for v,c in faces]
    details = [(v, shade_hex(c,v,base_map)) for v,c in details]
    points = [project(p) for vertices, _ in faces + details for p in vertices]
    left = min(p[0] for p in points) - .015
    top = min(p[1] for p in points) - .015
    width = math.ceil((max(p[0] for p in points) - left + .015) * PPI)
    height_px = math.ceil((max(p[1] for p in points) - top + .015) * PPI)
    image = Image.new('RGBA', (width, height_px))
    draw = ImageDraw.Draw(image)

    def polygon(vertices, color):
        draw.polygon([((project(p)[0]-left)*PPI,(project(p)[1]-top)*PPI) for p in vertices], fill=color)

    # A depth buffer keeps annex roofs from painting over the upper facade.
    pixels = np.array(image)
    depth = np.full((height_px, width), -np.inf, dtype=np.float32)
    for vertices, color in faces + details:
        rgba = tuple(int(color[i:i+2],16) for i in (1,3,5)) + (255,)
        projected = np.array([((project(p)[0]-left)*PPI,(project(p)[1]-top)*PPI) for p in vertices])
        distances = np.array([.612372*p[0]+.5*p[1]+.612372*p[2] for p in vertices])
        for i in range(1, len(vertices)-1):
            triangle = projected[[0,i,i+1]]
            distance = distances[[0,i,i+1]]
            lo = np.maximum(np.floor(triangle.min(axis=0)).astype(int), 0)
            hi = np.minimum(np.ceil(triangle.max(axis=0)).astype(int), [width,height_px])
            xx = np.arange(lo[0],hi[0])[None,:]+.5
            yy = np.arange(lo[1],hi[1])[:,None]+.5
            (ax,ay),(bx,by),(cx,cy) = triangle
            denominator = (by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
            if abs(denominator) < 1e-8:
                continue
            a = ((by-cy)*(xx-cx)+(cx-bx)*(yy-cy))/denominator
            b = ((cy-ay)*(xx-cx)+(ax-cx)*(yy-cy))/denominator
            c = 1-a-b
            value = a*distance[0]+b*distance[1]+c*distance[2]
            region = depth[lo[1]:hi[1],lo[0]:hi[0]]
            mask = (a>=-1e-7)&(b>=-1e-7)&(c>=-1e-7)&(value>=region-1e-6)
            region[mask] = value[mask]
            pixels[lo[1]:hi[1],lo[0]:hi[0]][mask] = rgba
    image = Image.fromarray(pixels)
    crop = image.getbbox()
    image = image.crop(crop)
    factor = 2048 / max(image.size)
    image = image.resize((round(image.width*factor),round(image.height*factor)), Image.Resampling.LANCZOS)
    identifier = 'residential_compound_' + kind + '_01'
    relative = '整图/' + identifier + '.png'
    for base in ('资源/Demo城市','资产/03_入库/Demo城市'):
        image.save(ROOT / base / relative)
    entry = {'id':identifier,'category':'compound','voice_tag':'residential','variant':kind,
            'texture':'资源/Demo城市/'+relative,'origin':[(-left*PPI-crop[0])*factor,(-top*PPI-crop[1])*factor],
            'image_bounds':{'width':image.width,'height':image.height,'crop':[crop[0],crop[1],crop[2]-crop[0],crop[3]-crop[1]]},
            'pixels_per_world':PPI*factor,'plot_span':1.5,'footprint_tiles':[2,1],
            'model_bounds':{'position':[-.99,0,-.47],'size':[1.98,height,.94]},
            'source':'tools/build_demo_compounds.py; original project geometry and coordinated facade',
            'license':'Project-authored geometry','source_url':'','availability':'demo_style_candidate; user_visual_review_pending',
            'camera':{'azimuth':45,'elevation':30,'projection':'orthogonal'},
            'texture_sha256':hashlib.sha256((ROOT/'资源/Demo城市'/relative).read_bytes()).hexdigest()}
    return masks(entry, original_faces, ROOT/'资源/Demo城市', ROOT/'资产/03_入库/Demo城市')


def main():
    entries = [build(kind) for kind in ('gable','terrace')]
    for base in ('资源/Demo城市','资产/03_入库/Demo城市'):
        path = ROOT / base / 'manifest.json'
        manifest = json.loads(path.read_text(encoding='utf-8'))
        manifest['entries'] = [entry for entry in manifest['entries'] if entry['category'] != 'compound'] + entries
        path.write_text(json.dumps(manifest, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print('DEMO_COMPOUND built continuous-roof and stepped-terrace whole images with facade rhythm')


if __name__ == '__main__':
    main()
