"""Project-authored historical building candidates, drawn as editable SVG facets."""
from pathlib import Path
import hashlib
import itertools
import json
import math
import numpy as np
from demo_lighting import face_normal, masks, shade_hex, config

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = ROOT / '资源/古典建筑候选'
PRODUCTION = ROOT / '资产/03_入库/古典建筑候选'
WALL = ['#F1E9DE', '#D6DCDD', '#F6EFE5']
STONE = ['#E4DCCF', '#CCD2CA', '#F0E8DA']
ROOF = ['#CFA59A', '#BC8C81', '#DBB9A8']


def project(p):
    x, y, z = p
    return ((x-z)/math.sqrt(2), (x+z)/math.sqrt(2)*.5-y*math.cos(math.pi/6))


def depth(p):
    return .612372*p[0]+.5*p[1]+.612372*p[2]


def painter_order(geometry):
    """Split intersecting faces by their planes before ordering for SVG painting.

    Average face depth cannot order long walls against roofs or window insets.
    A BSP keeps those occlusions geometric while retaining editable polygons.
    """
    def dot(a,b): return sum(x*y for x,y in zip(a,b))
    def sub(a,b): return tuple(x-y for x,y in zip(a,b))
    def cross(a,b): return (a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0])
    def plane(vertices):
        for i in range(1,len(vertices)-1):
            n=cross(sub(vertices[i],vertices[0]),sub(vertices[i+1],vertices[0]))
            length=math.sqrt(dot(n,n))
            if length>1e-10:
                n=tuple(v/length for v in n)
                return n,dot(n,vertices[0])
        return None
    class Node:
        def __init__(self,item):
            self.n,self.d=plane(item[1])
            self.faces=[item]
            self.front=None
            self.back=None
        def insert(self,item):
            vertices=item[1]
            distances=[dot(self.n,p)-self.d for p in vertices]
            positive=any(d>1e-7 for d in distances)
            negative=any(d< -1e-7 for d in distances)
            if not positive and not negative:
                self.faces.append(item)
                return
            if positive and negative:
                front,back=[],[]
                for i,p in enumerate(vertices):
                    q=vertices[(i+1)%len(vertices)]
                    a,b=distances[i],distances[(i+1)%len(vertices)]
                    if a>=-1e-7: front.append(p)
                    if a<=1e-7: back.append(p)
                    if (a>1e-7 and b< -1e-7) or (a< -1e-7 and b>1e-7):
                        t=a/(a-b)
                        intersection=tuple(x+(y-x)*t for x,y in zip(p,q))
                        front.append(intersection)
                        back.append(intersection)
                for side,points in [('front',front),('back',back)]:
                    piece=(item[0],points,item[2])
                    if plane(points) is not None: self.child(side,piece)
            else: self.child('front' if positive else 'back',item)
        def child(self,side,item):
            node=getattr(self,side)
            if node is None: setattr(self,side,Node(item))
            else: node.insert(item)
        def ordered(self):
            near,far=(self.front,self.back) if dot(self.n,(.612372,.5,.612372))>=0 else (self.back,self.front)
            if far: yield from far.ordered()
            yield from sorted(self.faces,key=lambda item:item[0])
            if near: yield from near.ordered()
    valid=[item for item in geometry if plane(item[1]) is not None]
    tree=Node(valid[0])
    for item in valid[1:]: tree.insert(item)
    return list(tree.ordered())


def face(out, vertices, color, bias=0):
    out.append((sum(depth(p) for p in vertices)/len(vertices)+bias, vertices, color))


def box(out, center, size, colors=WALL):
    x, y, z = center
    a, b, c = [v/2 for v in size]
    face(out, [(x-a,y-b,z+c),(x+a,y-b,z+c),(x+a,y+b,z+c),(x-a,y+b,z+c)], colors[0])
    face(out, [(x+a,y-b,z-c),(x+a,y-b,z+c),(x+a,y+b,z+c),(x+a,y+b,z-c)], colors[1])
    face(out, [(x-a,y+b,z-c),(x+a,y+b,z-c),(x+a,y+b,z+c),(x-a,y+b,z+c)], colors[2])


def arch(out, x, bottom, z, width, height, color='#B8AFA4', side=False):
    points = [(-width/2,0), (width/2,0), (width/2,height-width/2)]
    points += [(math.cos(t)*width/2,height-width/2+math.sin(t)*width/2) for t in [i*math.pi/12 for i in range(13)]]
    points += [(-width/2,0)]
    vertices = [(z,bottom+v,x+u) if side else (x+u,bottom+v,z) for u,v in points]
    face(out, vertices, color, .025)


def circle_front(out, x, y, z, radius, color):
    face(out, [(x+radius*math.cos(i*math.tau/32),y+radius*math.sin(i*math.tau/32),z) for i in range(32)], color, .026)


def column(out, x, z, bottom, height, radius=.05):
    box(out, (x,bottom+.025,z), (radius*2.8,.05,radius*2.8), STONE)
    for i in range(8):
        a, b = i*math.tau/8, (i+1)*math.tau/8
        color = WALL[0] if math.cos((a+b)/2)-math.sin((a+b)/2) > -.2 else WALL[1]
        face(out, [(x+radius*math.cos(a),bottom+.05,z+radius*math.sin(a)),
                   (x+radius*math.cos(b),bottom+.05,z+radius*math.sin(b)),
                   (x+radius*.86*math.cos(b),bottom+height-.05,z+radius*.86*math.sin(b)),
                   (x+radius*.86*math.cos(a),bottom+height-.05,z+radius*.86*math.sin(a))], color)
    box(out, (x,bottom+height-.025,z), (radius*2.9,.05,radius*2.9), STONE)


def pediment(out, width, length, y, rise, colors=ROOF, cx=0, cz=0):
    a, c = width/2, length/2
    face(out, [(cx-a,y,cz-c),(cx-a,y,cz+c),(cx,y+rise,cz+c),(cx,y+rise,cz-c)], colors[0])
    face(out, [(cx,y+rise,cz-c),(cx,y+rise,cz+c),(cx+a,y,cz+c),(cx+a,y,cz-c)], colors[1])
    face(out, [(cx-a,y,cz+c),(cx+a,y,cz+c),(cx,y+rise,cz+c)], WALL[0], .006)


def steps(out, width, length):
    for i in range(3):
        box(out, (0,.025+i*.05,0), (width-i*.12,.05,length-i*.12), STONE)


def temple():
    out = []
    steps(out, 1.94,1.65)
    box(out, (0,.575,-.12), (1.08,.85,.92))
    arch(out, 0,.15,.342,.23,.53,'#B4A696')
    for x in [-.67,-.335,0,.335,.67]: column(out,x,.58,.15,.86)
    for z in [-.52,-.13,.26]: column(out,.67,z,.15,.86)
    box(out, (0,1.035,0), (1.65,.08,1.34), STONE)
    pediment(out,1.81,1.50,1.08,.31)
    face(out,[(-.57,1.125,.755),(.57,1.125,.755),(0,1.325,.755)],'#DED4C7',.03)
    return out


def church():
    out = []
    steps(out,1.48,1.96)
    box(out,(.10,.52,0),(.97,.74,1.49))
    pediment(out,1.08,1.66,.90,.29,cx=.10)
    arch(out,.10,.15,.748,.23,.40,'#BDAE9B')
    circle_front(out,.10,.76,.75,.125,'#E7D6BD')
    circle_front(out,.10,.76,.754,.082,'#A5BCC2')
    for z in [-.47,-.05,.37]: arch(out,z,.38,.586,.105,.27,'#A5BCC2',side=True)
    box(out,(-.48,.81,-.27),(.36,1.32,.38))
    arch(out,-.48,.98,-.075,.14,.23,'#A5BCC2')
    box(out,(-.48,1.49,-.27),(.41,.07,.43),STONE)
    peak=(-.48,1.80,-.27)
    face(out,[(-.705,1.525,-.505),(-.705,1.525,-.035),peak],ROOF[0])
    face(out,[(-.705,1.525,-.035),(-.255,1.525,-.035),peak],ROOF[1])
    face(out,[(-.255,1.525,-.035),(-.255,1.525,-.505),peak],ROOF[2])
    box(out,(.10,1.225,.66),(.028,.17,.026),STONE)
    box(out,(.10,1.26,.66),(.125,.026,.026),STONE)
    return out


def civic_hall():
    out = []
    steps(out,2.02,1.57)
    box(out,(0,.50,-.07),(1.78,.70,1.02))
    for x in [-.65,-.38,.38,.65]: arch(out,x,.31,.445,.10,.26,'#A5BCC2')
    arch(out,0,.15,.447,.20,.44,'#B5A590')
    for x in [-.48,-.16,.16,.48]: column(out,x,.65,.15,.67,.047)
    box(out,(0,.88,-.04),(1.91,.08,1.14),STONE)
    box(out,(0,.94,.46),(1.14,.06,.50),STONE)
    pediment(out,1.25,.66,.98,.23,STONE,cz=.47)
    for x in [-.68,.68]: box(out,(x,.957,-.19),(.44,.09,.74),ROOF)
    return out


def amphitheater():
    out = []
    count=48
    outer=(1.37,.96)
    inner=(1.04,.65)
    for i in range(count):
        a,b=i*math.tau/count,(i+1)*math.tau/count
        p=lambda t,y,r:(math.cos(t)*r[0],y,math.sin(t)*r[1])
        face(out,[p(a,0,outer),p(b,0,outer),p(b,.78,outer),p(a,.78,outer)],STONE[0] if math.cos((a+b)/2)>math.sin((a+b)/2) else STONE[1])
        face(out,[p(a,.78,inner),p(b,.78,inner),p(b,.09,inner),p(a,.09,inner)],'#C8BCAF')
        face(out,[p(a,.78,outer),p(b,.78,outer),p(b,.78,inner),p(a,.78,inner)],STONE[2])
        for height in [.34,.70]:
            r=(outer[0]+.016,outer[1]+.016)
            face(out,[p(a,height,r),p(b,height,r),p(b,height+.025,r),p(a,height+.025,r)],'#EEE5D7',.012)
        # Each arch is mapped onto its own curved wall segment.
        for bottom in [.07,.42]:
            vertices=[]
            for u,y in [(.22,0),(.78,0),(.78,.15)]+[(.5+.28*math.cos(t),.15+.095*math.sin(t)) for t in [j*math.pi/10 for j in range(11)]]+[(.22,0)]:
                vertices.append(p(a+(b-a)*u,bottom+y,(outer[0]+.002,outer[1]+.002)))
            face(out,vertices,'#B5ACA0',.025)
    floor=[(math.cos(i*math.tau/count)*inner[0],.04,math.sin(i*math.tau/count)*inner[1]) for i in range(count)]
    face(out,floor,'#DDD0BA')
    return out


def build(identifier, label, geometry):
    source_faces = [(np.asarray(vertices),face_normal(vertices)) for _,vertices,_ in geometry]
    base_map = {color:family[2] for family in [WALL,STONE,ROOF] for color in family}
    for color in STONE: base_map[color] = config()['historic_stone']
    geometry = [(distance,vertices,shade_hex(color,vertices,base_map)) for distance,vertices,color in geometry]
    points=[project(p) for _,vertices,_ in geometry for p in vertices]
    left=min(p[0] for p in points)-.025
    top=min(p[1] for p in points)-.025
    width=max(p[0] for p in points)-left+.025
    height=max(p[1] for p in points)-top+.025
    ppu=2048/max(width,height)
    w,h=round(width*ppu),round(height*ppu)
    parts=[f'<svg xmlns="http://www.w3.org/2000/svg" width="{w}" height="{h}" viewBox="{left:.6f} {top:.6f} {width:.6f} {height:.6f}">',f'<title>{label}</title>']
    # A compound path fills adjacent same-color fragments in one rasterizer pass.
    # Normalize winding so overlaps form a union rather than cancelling holes.
    for color,items in itertools.groupby(painter_order(geometry),key=lambda item:item[2]):
        contours=[]
        for _,vertices,_ in items:
            projected=[project(p) for p in vertices]
            area=sum(a[0]*b[1]-b[0]*a[1] for a,b in zip(projected,projected[1:]+projected[:1]))
            if area<0: projected.reverse()
            contours.append('M'+' L'.join(f'{x:.6f},{y:.6f}' for x,y in projected)+' Z')
        parts.append(f'<path d="{" ".join(contours)}" fill="{color}" fill-rule="nonzero"/>')
    parts.append('</svg>')
    content='\n'.join(parts)+'\n'
    for base in (RUNTIME,PRODUCTION):
        (base/'SVG').mkdir(parents=True,exist_ok=True)
        (base/'SVG'/f'{identifier}.svg').write_text(content,encoding='utf-8',newline='\n')
    xs=[p[0] for _,v,_ in geometry for p in v]
    ys=[p[1] for _,v,_ in geometry for p in v]
    zs=[p[2] for _,v,_ in geometry for p in v]
    entry = {'id':identifier,'display_name':label,'category':'historical_building_candidate',
            'texture':f'资源/古典建筑候选/SVG/{identifier}.svg','origin':[-left*ppu,-top*ppu],
            'image_bounds':{'width':w,'height':h,'crop':[0,0,w,h]},'pixels_per_world':ppu,
            'model_bounds':{'position':[min(xs),min(ys),min(zs)],'size':[max(xs)-min(xs),max(ys)-min(ys),max(zs)-min(zs)]},
            'source':'tools/build_classical_svg.py; original project geometry',
            'license':'Project-authored geometry','source_url':'','availability':'visual_review_candidate; not_a_gameplay_unlock',
            'camera':{'azimuth':45,'elevation':30,'projection':'orthogonal'},
            'texture_sha256':hashlib.sha256(content.encode('utf-8')).hexdigest()}
    return masks(entry, source_faces, RUNTIME, PRODUCTION)


def main():
    entries=[build('classical_temple_01','神殿',temple()),
             build('historic_church_01','教堂',church()),
             build('classical_civic_hall_01','古典公共建筑',civic_hall()),
             build('classical_amphitheater_01','斗兽场',amphitheater())]
    common=json.loads((ROOT/'资源/风格小景/manifest.json').read_text(encoding='utf-8'))
    entries += [e for e in common['entries'] if e['category']=='tree']
    manifest={'schema_version':1,'entries':entries,'human_art':'PENDING','purpose':'Historical SVG art candidates; era grammar is not implemented'}
    for base in (RUNTIME,PRODUCTION):
        (base/'manifest.json').write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print('CLASSICAL_SVG built 4 editable original buildings')


if __name__=='__main__': main()
