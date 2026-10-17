"""Three original city art directions, baked through the retained 2:1 geometry pipeline.

Only the opt-in review catalogue is written. Default game assets stay untouched.
Every role keeps a real ground anchor and its own geometry-derived cast/contact mask.
"""
from pathlib import Path
import hashlib
import json
import math
import re
import xml.etree.ElementTree as ET

from PIL import Image, ImageDraw

import build_classical_svg as b
from demo_lighting import masks as geometry_masks, shade_hex

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / "资源/美术候选/建筑"
b.RUNTIME = OUTPUT
b.PRODUCTION = OUTPUT

PALETTES = {
    "clay": {"label": "陶土街巷", "wall": ["#EFE0C3", "#D1C3AC", "#F7EACE"],
             "roof": ["#BF795D", "#975C4D", "#CF8B69"], "trim": ["#E8CDA7"] * 3,
             "glass": "#6F9295", "door": "#9B7960", "leaf": "#9EA078"},
    "garden": {"label": "清透园林", "wall": ["#E9ECE1", "#C7D2CC", "#F6F7E9"],
               "roof": ["#87A7A8", "#668D94", "#AEC6C1"], "trim": ["#CAD7D0"] * 3,
               "glass": "#729DA4", "door": "#76938F", "leaf": "#87AA8D"},
    "paper": {"label": "纸上城镇", "wall": ["#EDE5D9", "#CFC8BE", "#F9F1E7"],
              "roof": ["#B1A095", "#8F8079", "#C6B6A5"], "trim": ["#DDD1C0"] * 3,
              "glass": "#8C9AA1", "door": "#9F8F81", "leaf": "#A4B092"},
}

ROOF_EDGES = {
    "clay": {"terrace": [.47, .565, .515], "gabled": [.48, .605, .565], "hipped": [.48, .61, .565]},
    "garden": {"terrace": [.445, .63, .58], "gabled": [.49, .63, .58], "hipped": [.49, .63, .58]},
    "paper": {"terrace": [.58, .56, .52], "gabled": [.58, .55, .52], "hipped": [.58, .55, .52]},
}


def window(out, x, bottom, z, width, height, color, side=False):
    vertices = [(x-width/2, bottom, z), (x+width/2, bottom, z),
                (x+width/2, bottom+height, z), (x-width/2, bottom+height, z)]
    if side:
        vertices = [(z, y, px) for px, y, _ in vertices]
    b.face(out, vertices, color, .025)


def slab(out, width, length, y, thickness, color, x=0, z=0):
    b.box(out, (x, y+thickness/2, z), (width, thickness, length), [color]*3)


def base(out, p, width=1.22, length=1.12):
    b.box(out, (0, .025, 0), (width, .05, length), p["trim"])


def gable(out, p, width, length, y, rise, cx=0, cz=0):
    b.pediment(out, width, length, y, rise, p["roof"], cx, cz)


def hip(out, p, width, length, y, rise, ridge_length=.22):
    a, c = width/2, length/2
    r = min(ridge_length/2, c*.75)
    b.face(out, [(-a,y,-c),(-a,y,c),(0,y+rise,r),(0,y+rise,-r)], p["roof"][0])
    b.face(out, [(0,y+rise,-r),(0,y+rise,r),(a,y,c),(a,y,-c)], p["roof"][1])
    b.face(out, [(-a,y,c),(a,y,c),(0,y+rise,r)], p["roof"][2])
    b.face(out, [(-a,y,-c),(0,y+rise,-r),(a,y,-c)], p["roof"][0])


def clay_house(role, p):
    out = []
    base(out, p)
    b.box(out, (0, .26, 0), (1.10, .42, 1.00), p["wall"])
    b.arch(out, -.22, .05, .504, .18, .32, p["door"])
    b.arch(out, .25, .19, .504, .20, .24, p["glass"])
    for z in [-.23, .23]:
        b.arch(out, z, .18, .554, .18, .24, p["glass"], side=True)
    if role == "terrace":
        slab(out, 1.13, 1.03, .47, .07, p["roof"][2])
        for x in [-.53, .53]:
            b.box(out, (x,.59,0), (.09,.16,1.03), p["wall"])
        for z in [-.465,.465]:
            b.box(out, (0,.59,z), (1.00,.16,.10), p["wall"])
        b.box(out, (-.23,.69,-.20), (.34,.12,.32), p["wall"])
    elif role == "gabled":
        gable(out, p, 1.21, 1.13, .48, .23)
        # Tile ridges are physical ribs rather than painted color-only changes.
        for z in [-.38,-.13,.12,.37]:
            b.box(out, (0,.715,z), (.07,.035,.055), p["roof"])
        b.box(out, (.35,.60,-.22), (.12,.27,.12), p["wall"])
    else:
        hip(out, p, 1.22, 1.13, .48, .25, .42)
        b.box(out, (.33,.70,-.22), (.14,.35,.14), p["wall"])
    return out


def garden_house(role, p):
    out = []
    base(out, p)
    b.box(out, (0,.255,0), (1.03,.41,.94), p["wall"])
    # Wider glazing and thick horizontal edges remain legible at one city plot.
    window(out, -.14,.12,.474,.69,.26,p["glass"])
    window(out, .06,.12,.519,.65,.26,p["glass"], side=True)
    for x in [-.44,-.08,.23]:
        b.box(out,(x,.25,.482),(.027,.28,.023),p["wall"])
    for z in [-.24,.08,.38]:
        b.box(out,(.527,.25,z),(.023,.28,.027),p["wall"])
    window(out,.385,.05,.475,.15,.34,p["door"])
    slab(out, 1.26,1.16,.445,.045,p["trim"][0])
    if role == "terrace":
        slab(out,1.20,1.10,.49,.05,p["roof"][2])
        b.box(out,(-.28,.58,-.19),(.52,.08,.40),p["trim"])
        b.box(out,(-.28,.635,-.19),(.46,.05,.34),[p["leaf"]]*3)
        b.box(out,(.38,.64,-.32),(.12,.21,.12),p["wall"])
    elif role == "gabled":
        gable(out,p,1.26,1.16,.49,.22,cx=.03)
        window(out,.03,.515,.582,.23,.12,p["glass"])
    else:
        hip(out,p,1.26,1.16,.49,.18,.64)
        b.box(out,(.37,.18,.36),(.055,.28,.055),p["wall"])
    return out


def paper_house(role, p):
    out = []
    base(out,p,1.10,1.04)
    b.box(out,(0,.315,0),(.94,.53,.88),p["wall"])
    window(out,-.18,.07,.444,.15,.33,p["door"])
    for x in [.12,.32]:
        window(out,x,.28,.444,.12,.19,p["glass"])
    for z in [-.17,.21]:
        window(out,z,.25,.474,.14,.23,p["glass"],side=True)
    # Distinct edge-folds give this family a paper silhouette, not a new hue.
    b.box(out,(.475,.315,0),(.016,.53,.895),p["trim"])
    if role == "terrace":
        slab(out,1.12,1.04,.58,.07,p["roof"][2])
        b.box(out,(-.52,.70,0),(.05,.20,1.04),p["roof"])
        b.box(out,(.52,.70,0),(.05,.20,1.04),p["roof"])
        b.box(out,(0,.69,-.485),(1.02,.18,.06),p["trim"])
        b.box(out,(.22,.79,-.19),(.27,.28,.25),p["wall"])
    elif role == "gabled":
        gable(out,p,1.10,1.04,.58,.56)
        window(out,0,.66,.522,.15,.22,p["glass"])
        slab(out,1.13,.10,.57,.035,p["trim"][0],z=.50)
    else:
        hip(out,p,1.10,1.04,.58,.57,.14)
        b.box(out,(.27,.93,-.23),(.10,.50,.10),p["trim"])
    return out


def shop(style,p):
    out = []
    if style == "clay":
        base(out,p,1.28,1.10)
        b.box(out,(0,.285,-.055),(1.13,.47,.87),p["wall"])
        for x in [-.37,0,.37]:
            b.arch(out,x,.06,.384,.23,.36,p["glass"] if x else p["door"])
        # A terracotta awning casts its own angled shadow on the frontage.
        b.face(out,[(-.62,.48,.41),(.62,.48,.41),(.62,.34,.66),(-.62,.34,.66)],p["roof"][2])
        for x in [-.55,.55]:
            b.box(out,(x,.19,.61),(.045,.30,.045),p["trim"])
        slab(out,1.23,.99,.52,.07,p["roof"][2],z=-.055)
        b.box(out,(0,.61,.43),(.70,.10,.055),p["trim"])
    elif style == "garden":
        base(out,p,1.26,1.13)
        b.box(out,(0,.26,-.03),(1.10,.42,.96),p["wall"])
        window(out,0,.07,.454,.94,.29,p["glass"])
        window(out,.02,.09,.554,.76,.27,p["glass"],side=True)
        for x in [-.30,.14,.47]:
            b.box(out,(x,.235,.46),(.025,.33,.025),p["wall"])
        slab(out,1.28,1.17,.465,.065,p["roof"][2])
        slab(out,1.19,.30,.375,.035,p["roof"][2],z=.53)
        b.box(out,(-.42,.08,.60),(.24,.12,.18),p["trim"])
        b.box(out,(-.42,.16,.60),(.20,.05,.14),[p["leaf"]]*3)
        b.box(out,(.22,.60,-.19),(.46,.14,.46),p["wall"])
    else:
        base(out,p,1.13,1.06)
        b.box(out,(0,.34,0),(.98,.58,.90),p["wall"])
        for x in [-.25,.23]:
            window(out,x,.07,.454,.33,.35,p["glass"])
        gable(out,p,1.12,1.07,.63,.48)
        window(out,0,.72,.537,.17,.15,p["glass"])
        b.face(out,[(-.50,.47,.456),(.50,.47,.456),(.50,.37,.65),(-.50,.37,.65)],p["roof"][2])
        slab(out,.92,.035,.43,.08,p["trim"][0],z=.47)
    return out


def civic(style,p):
    out=[]
    base(out,p,2.04,1.76)
    if style == "clay":
        b.box(out,(0,.47,-.12),(1.84,.84,1.36),p["wall"])
        for x in [-.61,0,.61]:
            b.arch(out,x,.06,.565,.30,.64,p["door"] if x==0 else p["glass"])
        for z in [-.48,.07,.44]:
            b.arch(out,z,.29,.924,.23,.42,p["glass"],side=True)
        hip(out,p,1.96,1.55,.89,.24,.72)
        b.box(out,(0,.94,.62),(.62,.16,.32),p["wall"])
        b.face(out,[(-.92,.73,.61),(.92,.73,.61),(.92,.53,.84),(-.92,.53,.84)],p["roof"][2])
        for x in [-.83,.83]:
            b.box(out,(x,.28,.79),(.06,.47,.06),p["trim"])
    elif style == "garden":
        b.box(out,(0,.385,-.13),(1.75,.67,1.33),p["wall"])
        window(out,0,.10,.539,1.59,.46,p["glass"])
        window(out,.02,.11,.879,1.08,.44,p["glass"],side=True)
        for x in [-.68,-.34,0,.34,.68]:
            b.box(out,(x,.34,.553),(.045,.56,.035),p["wall"])
        slab(out,2.05,1.77,.72,.065,p["roof"][2])
        b.box(out,(-.32,.895,-.23),(.95,.22,.81),p["wall"])
        window(out,-.32,.84,.179,.77,.10,p["glass"])
        slab(out,1.08,.94,1.00,.045,p["roof"][2],x=-.32,z=-.23)
        b.box(out,(.67,.83,-.29),(.41,.085,.75),p["trim"])
        b.box(out,(.67,.885,-.29),(.36,.04,.69),[p["leaf"]]*3)
        slab(out,1.18,.35,.56,.04,p["roof"][2],z=.65)
    else:
        b.box(out,(0,.385,-.02),(1.83,.67,1.49),p["wall"])
        gable(out,p,2.06,1.77,.72,.51)
        for x in [-.60,-.27,.27,.60]:
            window(out,x,.18,.729,.20,.38,p["glass"])
        window(out,0,.05,.729,.24,.50,p["door"])
        window(out,0,.80,.889,.25,.22,p["glass"])
        for z in [-.42,.11,.48]:
            window(out,z,.20,.919,.23,.34,p["glass"],side=True)
        slab(out,2.09,.10,.69,.045,p["trim"][0],z=.83)
    return out


def validate(entries,styles):
    assert len(entries)==15
    ids={entry["id"] for entry in entries}
    assert len(ids)==15
    reports=[]
    for style in styles.values():
        assert set(style["role_map"])=={"terrace","gabled","hipped","commercial","civic"}
        assert set(style["role_map"].values())<=ids
    for entry in entries:
        svg=ET.parse(ROOT/entry["texture"])
        fills={element.attrib["fill"] for element in svg.getroot() if "fill" in element.attrib}
        assert entry["author_palette_colors"] and set(entry["author_palette_colors"])<=fills
        for kind in ["texture","shadow","contact"]:
            key=kind if kind=="texture" else kind+"_texture"
            hash_key="texture_sha256" if kind=="texture" else kind+"_sha256"
            assert hashlib.sha256((ROOT/entry[key]).read_bytes()).hexdigest()==entry[hash_key]
        bounds=entry["model_bounds"]["size"]
        scale=28*math.sqrt(2)*entry["plot_span"]/max(bounds[0],bounds[2])/entry["pixels_per_world"]
        reports.append({"id":entry["id"],"role":entry["role"],
                        "size_at_city_scale":[round(entry["image_bounds"][axis]*scale,2) for axis in ["width","height"]],
                        "ground_anchor_world":entry["lighting"]["ground_anchor_world"]})
        assert entry["lighting"]["ground_anchor_world"]==[0.0,0.0,0.0]
    (OUTPUT/"validation.json").write_text(json.dumps({"entries":reports,"checks":"15 XMLs and 45 hashes; shared model ground anchors"},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")


def preview(entries):
    """Inspection sheet of the emitted SVG paths, at 3x the city sprite size."""
    sheet=Image.new("RGB",(840,940),"#EEEAE1")
    draw=ImageDraw.Draw(sheet)
    for index,entry in enumerate(entries):
        col=index//5
        row=index%5
        left=col*280
        top=row*188
        doc=ET.parse(ROOT/entry["texture"]).getroot()
        vx,vy,vw,vh=map(float,doc.attrib["viewBox"].split())
        size=entry["model_bounds"]["size"]
        scale=28*math.sqrt(2)*entry["plot_span"]/max(size[0],size[2])*3
        sprite=Image.new("RGBA",(math.ceil(vw*scale*4)+4,math.ceil(vh*scale*4)+4))
        painter=ImageDraw.Draw(sprite)
        for element in doc:
            if element.tag.endswith("path"):
                for subpath in element.attrib["d"].split("M")[1:]:
                    coordinates=re.findall(r"(-?[\d.]+),(-?[\d.]+)",subpath)
                    polygon=[((float(x)-vx)*scale*4+2,(float(y)-vy)*scale*4+2) for x,y in coordinates]
                    painter.polygon(polygon,fill=element.attrib["fill"])
        sprite=sprite.resize((math.ceil(sprite.width/4),math.ceil(sprite.height/4)),Image.Resampling.LANCZOS)
        x=left+(280-sprite.width)//2
        y=top+25+(145-sprite.height)//2
        sheet.paste(sprite,(x,y),sprite)
        draw.text((left+12,top+8),entry["id"],fill="#505459")
        draw.line((left+12,top+180,left+268,top+180),fill="#D2CCC0")
    sheet.save(OUTPUT/"preview.png")


def main():
    entries=[]
    styles={}
    maker={"clay":clay_house,"garden":garden_house,"paper":paper_house}
    for style,p in PALETTES.items():
        b.WALL=p["wall"]
        b.ROOF=p["roof"]
        roles={}
        for role in ["terrace","gabled","hipped","commercial","civic"]:
            ident=f"art_{style}_{role}"
            label=p["label"]+" · "+{"terrace":"平顶住宅","gabled":"山墙住宅","hipped":"四坡住宅","commercial":"商店","civic":"文化馆"}[role]
            category="residential" if role in ["terrace","gabled","hipped"] else role
            metadata={"category":category,"era":1,"variant":role,"role":role,"art_direction":style,
                      "plot_span":1.0 if role=="civic" else .8,"roof_style":role,
                      "texture":f"资源/美术候选/建筑/SVG/{ident}.svg",
                      "source":"tools/build_art_direction_buildings.py; original project geometry",
                      "availability":"art_direction_review_only; human_art_review_pending"}
            # Supply the real role/span before baking, so mask feather and anchor
            # reference use exactly the same scale as the eventual Godot draw.
            def bake_masks(entry,faces,runtime,production):
                entry.update(metadata)
                # Geometry is authored around (0,0,0). An awning can make the
                # image bounds asymmetric without moving that actual foot.
                entry["category"]="historical_building_candidate"
                result=geometry_masks(entry,faces,runtime,production)
                result["category"]=category
                return result
            b.masks=bake_masks
            geometry=maker[style](role,p) if category=="residential" else (shop(style,p) if role=="commercial" else civic(style,p))
            entry=b.build(ident,label,geometry)
            if category=="residential":
                y,half_x,half_z=ROOF_EDGES[style][role]
                entry["roof_eave_y"]=y
                entry["roof_half_extents"]=[half_x,half_z]
            roof_map={color:p["roof"][2] for color in p["roof"]}
            entry["author_palette_colors"]=sorted({shade_hex(color,vertices,roof_map)
                                                    for _,vertices,color in geometry if color in p["roof"]})
            entries.append(entry)
            roles[role]=ident
        styles[style]={"label":p["label"],"role_map":roles}
    manifest={"schema_version":1,"styles":styles,"entries":entries,"human_art":"PENDING",
              "purpose":"Same-city opt-in art direction study; presentation only"}
    (OUTPUT/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    validate(entries,styles)
    preview(entries)
    print("ART_DIRECTION_BUILDINGS: 15 original geometries, 30 physical masks; XML/hash/anchor validation passed")


if __name__=="__main__":
    main()
