"""Reproducible project-authored miniature buildings and trees for the live valley.

Geometry is authored in the retained 2:1 projection, ordered with the existing BSP,
then baked as transparent PNG plus editable SVG and physical cast/contact masks.
No downloaded assets, source overwrites, gameplay RNG or Blender runtime required.
"""
from pathlib import Path
import argparse
import hashlib
import itertools
import json
import math
import re
import xml.etree.ElementTree as ET

import numpy as np
from PIL import Image, ImageDraw

import build_classical_svg as b
from build_art_direction_foliage import ellipsoid, ring_volume, calibrate
from demo_lighting import face_normal, masks, shade_hex

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / "资源/精制河湾"
WALL = ["#E4D3B1", "#BDAE92", "#F0E0BF"]
STONE = ["#D3C0A0", "#AF9E84", "#F1E3C7"]
WOOD = ["#88674D", "#604E40", "#AF8B64"]
OPENING = "#42483E"
LEAF = "#4D7960"
ROOFS = {
    "tile": ["#B97859", "#8D5747", "#D39170"],
    "deep": ["#597A83", "#3E5B66", "#79949A"],
    "warm": ["#728A72", "#536C5D", "#92A089"],
}


def block(out, center, size, palette=WALL):
    b.box(out, center, size, palette)
    # Complete rear and left faces are needed for genuine four-angle bakes.
    x,y,z=center;a,h,c=[v/2 for v in size]
    b.face(out,[(x-a,y-h,z-c),(x-a,y+h,z-c),(x+a,y+h,z-c),(x+a,y-h,z-c)],palette[0])
    b.face(out,[(x-a,y-h,z-c),(x-a,y-h,z+c),(x-a,y+h,z+c),(x-a,y+h,z-c)],palette[1])


def plane(out, x, y, z, width, height, color, side=False):
    vertices = [(x-width/2, y, z), (x+width/2, y, z),
                (x+width/2, y+height, z), (x-width/2, y+height, z)]
    if side:
        vertices = [(z, py, px) for px, py, _ in vertices]
    b.face(out, vertices, color)


def framed_window(out, x, bottom, front, width=.22, height=.28, side=False, arch=False):
    def edge(cx, cy, cz, sx, sy, sz, palette):
        block(out, (cz, cy, cx) if side else (cx, cy, cz),
              (sz, sy, sx) if side else (sx, sy, sz), palette)
    # Classical aperture: deep shaded opening, dressed-stone lintel/sill,
    # and opened timber shutters. No reflective glass or modern pane grid.
    edge(x, bottom+height/2, front+.008, width+.075, height+.065, .032, STONE)
    if arch:
        b.arch(out, x, bottom, front+.028, width, height, OPENING, side)
    else:
        plane(out, x, bottom, front+.028, width, height, OPENING, side)
    edge(x, bottom-.025, front+.038, width+.10, .044, .10, STONE)
    for sign in [-1,1]:
        edge(x+sign*(width/2+.024), bottom+height/2, front+.033, .049, height*.92, .024, WOOD)
        for slat in range(5):
            plane(out,x+sign*(width/2+.024),bottom+.032+slat*height*.16,front+.047,.043,.011,"#B29670",side)


def arched_door(out, x, bottom, z, width=.21, height=.39, side=False):
    b.arch(out, x, bottom-.006, z+.012, width+.09, height+.065, STONE[0], side)
    b.arch(out, x, bottom, z+.030, width, height, WOOD[1], side)
    # Individual voussoirs and planks remain geometric surfaces, not texture decals.
    spring = bottom+height-width/2
    for index in range(7):
        a, c = index*math.pi/7, (index+1)*math.pi/7-.018
        vertices = [(x+radius*math.cos(t), spring+radius*math.sin(t), z+.038)
                    for radius,t in [(width/2,a),(width/2,c),(width/2+.044,c),(width/2+.044,a)]]
        if side: vertices = [(pz,py,px) for px,py,pz in vertices]
        b.face(out, vertices, STONE[2] if index%2 else STONE[0])
    for offset in [-.29,-.08,.13,.34]:
        plane(out, x+width*offset, bottom+.018, z+.033, width*.19, height-width/2-.025, WOOD[0], side)
    plane(out, x+.04, bottom+.16, z+.040, .022, .013, "#D9B77C", side)


def reflected_details(out,source,axis):
    for _,vertices,color in source:
        points=[tuple(-value if i==axis else value for i,value in enumerate(p)) for p in vertices]
        b.face(out,points,color)


def rear_and_left_windows(out,width,length,bottom=.18,height=.23):
    rear=[];left=[]
    for x in [-width*.22,width*.22]: framed_window(rear,x,bottom,length/2+.006,.20,height)
    for z in [-length*.22,length*.22]: framed_window(left,z,bottom,width/2+.006,.20,height,True)
    reflected_details(out,rear,2)
    reflected_details(out,left,0)


def classical_column(out,x,z,bottom,top,radius=.040):
    block(out,(x,bottom+.026,z),(radius*3.0,.052,radius*3.0),STONE)
    rings=[]
    for y,r in [(bottom+.06,radius),(bottom+.25,radius*1.015),(top-.12,radius*.82)]:
        rings.append([(x+r*(1.0 if i%2==0 else .87)*math.cos(i*math.tau/20),y,
                       z+r*(1.0 if i%2==0 else .87)*math.sin(i*math.tau/20)) for i in range(20)])
    for lower,upper in zip(rings,rings[1:]):
        for i in range(20): b.face(out,[lower[i],lower[(i+1)%20],upper[(i+1)%20],upper[i]],STONE[0])
    capital=[]
    ring_volume(capital,[(top-.12,radius*.86,radius*.86),(top-.08,radius*.88,radius*.88),
                         (top-.036,radius*1.40,radius*1.40)],STONE[2],20)
    for _,vertices,tint in capital: b.face(out,[(vx+x,vy,vz+z) for vx,vy,vz in vertices],tint)
    block(out,(x,top-.018,z),(radius*3.25,.036,radius*3.25),STONE)


def steps(out, x=0, z=.59, width=.34, count=3, base=.018):
    for index in range(count):
        block(out, (x, base+.018+index*.025, z-index*.035),
              (width-.025*index, .036, .18-.035*index), STONE)


def masonry(out, width, length, bottom, height, cx=0, cz=0):
    # A sparse, staggered seam course and a few raised corner stones.
    for row in range(3):
        y = bottom+.10+row*.14
        plane(out, cx, y, cz+length/2+.004, width-.04, .005, "#C4B69B")
        plane(out, cz, y, cx+width/2+.004, length-.04, .005, "#A89982", True)
        for index in range(4):
            x = cx-width/2+.12+(index+row*.5)*.23
            if x < cx+width/2-.08: plane(out, x, y-.12, cz+length/2+.004, .005, .12, "#CCBDA1")
    for row in range(4):
        y = bottom+.07+row*.125
        for x in [cx-width/2+.045,cx+width/2-.045]:
            block(out, (x,y,cz+length/2+.014),(.085,.07,.045),STONE)


def cornice(out, width, length, y, cx=0, cz=0):
    block(out,(cx,y-.016,cz),(width,.026,length),["#A7957C"]*3)
    block(out,(cx,y+.009,cz),(width+.055,.034,length+.055),STONE)
    block(out,(cx,y+.033,cz),(width+.075,.014,length+.075),WALL)
    for x in np.linspace(cx-width*.40,cx+width*.40,5):
        block(out,(float(x),y-.05,cz+length/2+.007),(.027,.052,.042),STONE)


def tiled_roof(out, width, length, y, rise, palette, cx=0, cz=0):
    a,c = width/2,length/2
    b.face(out,[(cx-a,y,cz+c),(cx+a,y,cz+c),(cx,y+rise,cz+c)],WALL[0])
    b.face(out,[(cx-a,y,cz-c),(cx,y+rise,cz-c),(cx+a,y,cz-c)],WALL[0])
    for sign in [-1,1]:
        b.face(out,[(cx,y+rise,cz-c),(cx+sign*a,y,cz-c),
                    (cx+sign*a,y,cz+c),(cx,y+rise,cz+c)],palette[0 if sign<0 else 1])
        for row in range(5):
            inner,outer = row*a/5,(row+1)*a/5
            for tile in range(8):
                z0=cz-c+tile*length/8+.007
                z1=cz-c+(tile+1)*length/8-.007
                tint=palette[0 if (tile+row)%4 else 2]
                vertices=[(cx+sign*inner,y+rise*(1-inner/a)+.007,z0),
                          (cx+sign*outer,y+rise*(1-outer/a)+.011,z0),
                          (cx+sign*outer,y+rise*(1-outer/a)+.011,z1),
                          (cx+sign*inner,y+rise*(1-inner/a)+.007,z1)]
                b.face(out,vertices,tint)
                b.face(out,[vertices[1],vertices[2],(vertices[2][0],vertices[2][1]-.014,z1),
                            (vertices[1][0],vertices[1][1]-.014,z0)],palette[1])
    block(out,(cx,y+rise+.020,cz),(.055,.038,length+.025),palette)
    for index in range(8):
        block(out,(cx,y+rise+.042,cz-c+(index+.5)*length/8),(.065,.012,length/8-.013),palette)


def planter(out, x, z, y, width=.18):
    block(out,(x,y+.037,z),(width,.073,.13),ROOFS["tile"])
    block(out,(x,y+.080,z),(width+.018,.017,.147),STONE)
    ellipsoid(out,(x-.033,y+.11,z),(.062,.058,.055),LEAF,8,3)
    ellipsoid(out,(x+.030,y+.12,z),(.055,.068,.052),"#6D9270",8,3)


def house_shell(out,width=1.02,length=.90,height=.48):
    block(out,(0,.022,0),(width+.12,.044,length+.12),STONE)
    block(out,(0,.044+height/2,0),(width,height,length),WALL)
    block(out,(0,.089,0),(width+.023,.052,length+.023),STONE)
    masonry(out,width,length,.044,height)
    cornice(out,width+.04,length+.04,.044+height)


def terrace(palette):
    out=[]
    house_shell(out,height=.47)
    arched_door(out,-.26,.052,.456,.20,.34)
    framed_window(out,.24,.17,.456,.26,.23)
    for z in [-.21,.22]: framed_window(out,z,.17,.516,.21,.23,True)
    rear_and_left_windows(out,1.02,.90,.17,.23)
    steps(out,-.26,.54,.29)
    block(out,(0,.567,0),(1.15,.072,1.03),palette)
    # Recessed roof garden inside a real stone balustrade; a shaded pergola
    # and a small clerestory produce a different silhouette from the pitched roof.
    block(out,(0,.61,0),(.90,.026,.78),["#8FA0A0"]*3)
    for x in [-.54,.54]: block(out,(x,.655,0),(.055,.14,1.02),STONE)
    for z in [-.485,.485]: block(out,(0,.655,z),(1.02,.14,.055),STONE)
    for x in [-.50,.50]: block(out,(x,.739,0),(.09,.029,1.04),palette)
    for z in [-.49,.49]: block(out,(0,.739,z),(1.05,.029,.09),palette)
    for x in [-.26,.20]:
        for z in [-.22,.18]: block(out,(x,.73,z),(.030,.25,.030),WOOD)
    for z in np.linspace(-.25,.21,6): block(out,(-.03,.866,float(z)),(.56,.030,.027),WOOD)
    planter(out,.36,.28,.605,.21)
    block(out,(-.36,.67,-.33),(.24,.13,.22),WALL)
    block(out,(-.36,.744,-.33),(.27,.023,.25),palette)
    return out


def gabled(palette):
    out=[]
    house_shell(out,width=1.03,length=.92,height=.49)
    arched_door(out,-.25,.055,.466,.20,.35)
    framed_window(out,.24,.18,.466,.24,.24)
    framed_window(out,-.20,.20,.521,.22,.22,True)
    framed_window(out,.23,.20,.521,.22,.22,True)
    rear_and_left_windows(out,1.03,.92,.20,.22)
    steps(out,-.25,.555,.30)
    tiled_roof(out,1.20,1.10,.574,.26,palette)
    framed_window(out,0,.608,.555,.145,.14)
    block(out,(.30,.78,-.25),(.13,.36,.14),STONE)
    block(out,(.30,.974,-.25),(.17,.037,.18),palette)
    plane(out,.30,.974,-.25+.093,.075,.012,"#4B4D44")
    planter(out,.30,.57,.072,.20)
    return out


def courtyard(palette):
    out=[]
    block(out,(0,.018,0),(1.16,.036,1.04),STONE)
    # Three masonry wings create an open, visible court. It is inside the
    # sprite footprint and does not pretend to reserve gameplay space.
    for cx,cz,w,l in [(-.39,0,.34,.91),(.39,0,.34,.91),(0,-.32,.50,.30)]:
        block(out,(cx,.25,cz),(w,.46,l),WALL)
        cornice(out,w+.02,l+.02,.50,cx,cz)
        tiled_roof(out,w+.10,l+.07,.552,.115,palette,cx,cz)
    block(out,(0,.062,.12),(.42,.029,.60),["#CDBF9D"]*3)
    for z in [-.13,.04,.21,.38]:
        plane(out,0,.073,z,.39,.004,"#A89C83")
    arched_door(out,0,.05,-.164,.16,.31)
    framed_window(out,-.39,.17,.461,.17,.22)
    framed_window(out,.39,.17,.461,.17,.22)
    for z in [-.18,.20]: framed_window(out,z,.19,.566,.17,.21,True)
    rear=[];left=[]
    for x in [-.39,.39]: framed_window(rear,x,.17,.461,.17,.22)
    for z in [-.18,.20]: framed_window(left,z,.19,.566,.17,.21,True)
    reflected_details(out,rear,2);reflected_details(out,left,0)
    steps(out,0,.48,.29,2)
    planter(out,-.10,.31,.08,.17)
    # A light timber trellis defines the courtyard entry without filling it.
    for x in [-.20,.20]: block(out,(x,.19,.42),(.029,.24,.029),WOOD)
    for x in [-.19,-.08,.03,.14]: block(out,(x,.327,.405),(.025,.024,.16),WOOD)
    block(out,(0,.319,.43),(.47,.028,.036),WOOD)
    # A small peristyle inside the true open court, not an extra reserved lot.
    for x in [-.20,.20]:
        for z in [-.13,.20]: classical_column(out,x,z,.086,.48,.025)
        block(out,(x,.495,.035),(.087,.035,.45),STONE)
    return out


def shop(palette):
    out=[]
    house_shell(out,width=1.08,length=.85,height=.52)
    # Roman taberna: broad open timber shopfront, a dressed-stone lintel,
    # shutters stacked beside the entrance and jars on the shop counter.
    block(out,(0,.257,.439),(.91,.38,.032),STONE)
    plane(out,0,.068,.460,.78,.35,OPENING)
    block(out,(0,.077,.478),(.83,.045,.13),STONE)
    for x in [-.44,.44]:
        block(out,(x,.26,.475),(.068,.38,.068),WOOD)
        for z in [.49,.52,.55]: block(out,(x,.24,z),(.045,.31,.018),WOOD)
    block(out,(0,.45,.48),(.98,.056,.066),STONE)
    framed_window(out,-.18,.21,.546,.27,.26,True)
    framed_window(out,.22,.21,.546,.23,.26,True)
    rear_and_left_windows(out,1.08,.85,.20,.23)
    tiled_roof(out,1.20,1.01,.607,.17,palette,cz=-.03)
    # Fabric awning, shaped valance, cornice sign frame, shelf and urns.
    for index in range(8):
        x0=-.55+index*1.10/8;x1=x0+1.10/8
        tint="#D5B985" if index%2 else "#BD8E5F"
        b.face(out,[(x0,.51,.46),(x1,.51,.46),(x1,.37,.63),(x0,.37,.63)],tint)
        b.face(out,[(x0,.37,.63),(x1,.37,.63),(x1-.014,.326,.644),(x0+.014,.326,.644)],tint)
    for x in [-.52,.52]: block(out,(x,.20,.61),(.036,.30,.036),WOOD)
    block(out,(0,.561,.466),(.57,.091,.045),WOOD)
    plane(out,0,.539,.494,.48,.045,"#DBC59B")
    for x in [-.17,-.05,.08,.20]: plane(out,x,.554,.495,.047,.012,"#877553")
    steps(out,0,.55,.25,2)
    block(out,(-.39,.102,.575),(.20,.13,.15),WOOD)
    for x in [-.44,-.36]: ellipsoid(out,(x,.20,.60),(.048,.060,.048),"#D1AB67",8,3)
    planter(out,.41,.59,.05,.18)
    return out


def civic(palette,sections=None):
    out=[]
    # The existing lowest stylobate retains the ground contact and public scale.
    # Its upper steps now support an open peristyle instead of a front-only porch.
    for index in range(3):
        block(out,(0,.028+index*.038,.07-index*.0175),(2.02-index*.09,.056,1.66-index*.045),STONE)
    block(out,(0,.52,-.035),(1.24,.77,.81),WALL)
    masonry(out,1.24,.81,.135,.77,cz=-.035)
    arched_door(out,0,.135,.377,.34,.58)
    for x in [-.43,.43]: framed_window(out,x,.43,.377,.17,.27)
    for z in [-.23,.16]: framed_window(out,z,.44,.626,.18,.28,True)
    rear=[];left=[]
    for x in [-.36,.36]: framed_window(rear,x,.44,.446,.20,.27)
    for z in [-.23,.16]: framed_window(left,z,.44,.626,.18,.28,True)
    reflected_details(out,rear,2);reflected_details(out,left,0)
    columns=[]
    positions=[(float(x),z,side) for side,z in [("front",.70),("back",-.66)] for x in [-.80,-.48,-.16,.16,.48,.80]]
    positions += [(x,z,side) for side,x in [("right",.80),("left",-.80)] for z in [-.388,-.116,.156,.428]]
    for x,z,side in positions:
        start=len(out);classical_column(out,x,z,.13,.955,.047)
        columns.append({"position":[x,.13,z],"side":side,"faces":[start,len(out)]})
    # A continuous Doric entablature turns every corner. The narrow inner hall
    # leaves real daylight gaps behind the shafts on all four facades.
    frieze_start=len(out)
    block(out,(0,.982,.02),(1.96,.072,1.55),STONE)
    block(out,(0,1.043,.02),(1.98,.050,1.57),WALL)
    front=[];side=[]
    for x in np.linspace(-.88,.88,11):
        block(front,(float(x),1.045,.810),(.048,.063,.028),STONE)
        for line in [-.012,.012]: plane(front,float(x)+line,1.025,.827,.004,.038,"#A8987F")
    for z in np.linspace(-.63,.67,9):
        block(side,(.996,1.045,float(z)),(.028,.063,.048),STONE)
        for line in [-.012,.012]: plane(side,float(z)+line,1.025,1.013,.004,.038,"#A8987F",True)
    out.extend(front);out.extend(side)
    back=[(depth,[(x,y,z-.04) for x,y,z in vertices],tint) for depth,vertices,tint in front]
    reflected_details(out,back,2);reflected_details(out,side,0)
    cornice(out,1.97,1.55,1.095,cz=.02)
    frieze_end=len(out)
    tiled_roof(out,2.10,1.66,1.16,.33,palette,cz=.02)
    # Both gable ends have full stone tympana, raking geisa and carved relief.
    # They are actual planes before rotation/shading/BSP, never screen outlines.
    pediment=[]
    b.face(pediment,[(-1.015,1.136,.862),(1.015,1.136,.862),(0,1.48,.862)],STONE[2])
    b.face(pediment,[(-.82,1.18,.874),(.82,1.18,.874),(0,1.438,.874)],WALL[1])
    for sign in [-1,1]:
        b.face(pediment,[(0,1.49,.887),(sign*1.045,1.154,.887),(sign*1.035,1.122,.887),(0,1.456,.887)],STONE[2])
    block(pediment,(0,1.155,.882),(2.12,.044,.064),STONE)
    relief=[]
    ring_volume(relief,[(0,.06,.06),(.020,.06,.06)],STONE[2],20)
    for _,vertices,tint in relief: b.face(pediment,[(vx,1.292+vz,.891+vy) for vx,vy,vz in vertices],tint)
    for x in [-.24,.24]:
        block(pediment,(x,1.27,.888),(.037,.11,.023),STONE)
        ellipsoid(pediment,(x,1.343,.888),(.030,.032,.018),STONE[2],8,3)
    pediments=[]
    start=len(out);out.extend(pediment);pediments.append([start,len(out)])
    back=[(depth,[(x,y,z-.04) for x,y,z in vertices],tint) for depth,vertices,tint in pediment]
    start=len(out);reflected_details(out,back,2);pediments.append([start,len(out)])
    for x in [-.70,.70]: planter(out,x,.77,.13,.19)
    if sections is not None:
        sections.update({"columns":columns,"pediments":pediments,"entablature":[frieze_start,frieze_end],
                         "cella_width":1.24,"cella_length":.81,"entrance_position":[0,.135,.410],
                         "ground_stylobate":[2.02,1.66,.07]})
    return out


def branch(out,nodes,color="#877B64",sides=10):
    """A continuous bent/tapering woody limb, with real forks and bark facets."""
    rings=[]
    for band,(x,y,z,radius) in enumerate(nodes):
        rings.append([(x+radius*(1+.08*math.sin(i*2.7+band))*math.cos(i*math.tau/sides),y,
                       z+radius*(1+.06*math.cos(i*2.1-band))*math.sin(i*math.tau/sides)) for i in range(sides)])
    b.face(out,list(reversed(rings[0])),color)
    for band,(lower,upper) in enumerate(zip(rings,rings[1:])):
        for i in range(sides):
            tint=color if i%4 else "#A2947B"
            b.face(out,[lower[i],lower[(i+1)%sides],upper[(i+1)%sides],upper[i]],tint)
    b.face(out,rings[-1],color)


def leaf_mass(out,center,radii,color,phase,leaves=True):
    """An asymmetric lobed solid crown; uneven sprays break the outer contour."""
    cx,cy,cz=center;rx,ry,rz=radii
    sides,bands=14,7;rings=[]
    for band in range(bands+1):
        latitude=-math.pi/2+band*math.pi/bands
        radial=max(.006,math.cos(latitude))
        rings.append([(cx+rx*radial*(1+.13*math.sin(i*2.3+phase)+.05*math.cos(band*3+i))*math.cos(i*math.tau/sides),
                       cy+ry*math.sin(latitude)+ry*.05*math.sin(i*2.1+phase)*radial,
                       cz+rz*radial*(1+.11*math.cos(i*2.7+phase))*math.sin(i*math.tau/sides)) for i in range(sides)])
    b.face(out,list(reversed(rings[0])),color)
    for band,(lower,upper) in enumerate(zip(rings,rings[1:])):
        for i in range(sides):
            tint=color
            if (i+band*3+round(phase))%9==0: tint="#A4AD91" if cy>1.0 else "#899780"
            b.face(out,[lower[i],lower[(i+1)%sides],upper[(i+1)%sides],upper[i]],tint)
    b.face(out,rings[-1],color)
    if leaves:
        # Lancet olive leaves are slender folded solids, not painted speckles.
        for spray in range(13):
            angle=spray*2.399+phase
            elevation=.15+.47*(.5+.5*math.sin(spray*1.73+phase))
            at=np.array([cx+rx*.82*math.cos(angle),cy+ry*elevation,cz+rz*.82*math.sin(angle)])
            along=np.array([math.cos(angle),.28,math.sin(angle)])*.061
            across=np.array([-math.sin(angle),.05,math.cos(angle)])*.013
            ridge=at+np.array([0,.014,0])
            b.face(out,[at-along,at+across,ridge,at+along],"#A9B298")
            b.face(out,[at-along,at-across,ridge,at+along],"#7B8B72")


def tree(kind):
    out=[]
    if kind=="canopy":
        # The olive is low, broad and gnarled; five limbs carry unequal crowns,
        # while two deliberate crown windows reveal the branching structure.
        branch(out,[(0,0,0,.065),(-.02,.18,.018,.056),(.025,.40,-.010,.047),
                    (-.020,.61,-.026,.034),(-.072,.81,-.020,.022)],sides=12)
        limbs=[[(.004,.35,.006,.042),(-.14,.59,.08,.032),(-.29,.83,.085,.020),(-.43,1.035,.070,.008)],
               [(.025,.40,-.01,.037),(.18,.63,.12,.029),(.32,.88,.16,.017),(.46,1.09,.18,.007)],
               [(-.015,.57,-.02,.028),(-.12,.76,-.19,.023),(-.23,.99,-.26,.013),(-.27,1.18,-.25,.006)],
               [(-.005,.59,-.02,.027),(.12,.79,-.15,.021),(.23,1.04,-.25,.013),(.18,1.24,-.28,.006)],
               [(.13,.61,.10,.024),(.12,.85,.28,.016),(.035,1.05,.35,.009)]]
        for limb in limbs: branch(out,limb,sides=9)
        branch(out,[(-.17,.65,.08,.016),(-.34,.81,-.04,.009),(-.40,.97,-.14,.004)],sides=7)
        branch(out,[(.25,.77,.14,.014),(.38,.88,.02,.010),(.47,1.015,-.04,.004)],sides=7)
        clusters=[(-.43,1.11,.07,.25,.18,.21,"#748367"),(.46,1.17,.18,.24,.20,.20,"#839173"),
                  (-.29,1.25,-.26,.23,.22,.19,"#75896E"),(.18,1.32,-.29,.22,.21,.19,"#8A987D"),
                  (.025,1.14,.37,.22,.15,.19,"#687B61"),(-.12,1.20,.15,.18,.16,.17,"#879477"),
                  (-.47,1.02,-.17,.16,.13,.15,"#748168"),(.48,1.09,-.05,.16,.15,.16,"#98A187"),
                  (-.11,1.41,-.15,.15,.14,.13,"#A0AB90")]
        for index,(x,y,z,rx,ry,rz,tint) in enumerate(clusters): leaf_mass(out,(x,y,z),(rx,ry,rz),tint,index*.73)
    else:
        # Mediterranean cypress: one narrow rising axis, oblique branches and
        # unequal vertical foliage fingers. No repeated horizontal cone tiers.
        branch(out,[(0,0,0,.047),(.006,.28,.003,.040),(-.015,.63,-.009,.029),
                    (.016,1.02,-.006,.023),(.008,1.40,.014,.015),(-.018,1.92,.0,.004)],"#857A62",10)
        crowns=[(-.08,.59,.015,.14,.28,.11,"#5C7159"),(.08,.83,-.035,.13,.31,.11,"#667D61"),
                (-.06,1.07,-.09,.125,.32,.10,"#74876C"),(.085,1.20,.075,.115,.31,.10,"#6B8165"),
                (-.065,1.45,.04,.105,.33,.087,"#7D9073"),(.035,1.62,-.065,.085,.29,.070,"#8A9A7D"),
                (-.020,1.87,.00,.057,.22,.051,"#96A58A"),(.07,.64,.10,.10,.23,.089,"#536D55"),
                (-.12,.87,.03,.074,.20,.07,"#6C8066"),(.115,1.04,.02,.068,.21,.063,"#7D8D73")]
        for index,(x,y,z,rx,ry,rz,tint) in enumerate(crowns):
            branch(out,[(0,max(.20,y-.27),0,.014),(x*.5,y-.11,z*.5,.009),(x,y+.08,z,.003)],"#91866D",7)
            leaf_mass(out,(x,y,z),(rx,ry,rz),tint,index*.87,False)
        # Smaller long sprays supply an irregular needle edge and inner slits.
        for index in range(9):
            y=.68+index*.125;angle=index*2.1
            x,z=.10*math.cos(angle),.07*math.sin(angle)
            leaf_mass(out,(x,y,z),(.045,.18+.04*math.sin(index),.040),"#819077",index,False)
    return out


def raster_svg(svg, target=None):
    doc=ET.fromstring(svg.read_text(encoding="utf-8"))
    left,top,width,height=map(float,doc.attrib["viewBox"].split())
    w,h=int(doc.attrib["width"]),int(doc.attrib["height"])
    sample=2
    result=Image.new("RGBA",(w*sample,h*sample))
    painter=ImageDraw.Draw(result)
    for element in doc:
        if not element.tag.endswith("path"): continue
        for contour in element.attrib["d"].split("M")[1:]:
            points=re.findall(r"(-?[\d.]+),(-?[\d.]+)",contour)
            painter.polygon([((float(x)-left)/width*w*sample,(float(y)-top)/height*h*sample) for x,y in points],fill=element.attrib["fill"])
    result=result.resize((w,h),Image.Resampling.LANCZOS)
    if target: result.save(target)
    return result


def write_texture_import(path):
    """Retain Godot UIDs, and prefilter the 1024px bake for the city scale."""
    settings=path.with_suffix(path.suffix+".import")
    if settings.exists():
        text=settings.read_text(encoding="utf-8")
        text=text.replace("mipmaps/generate=false","mipmaps/generate=true")
    else:
        source="res://"+path.relative_to(ROOT).as_posix()
        text=f'[remap]\nimporter="texture"\ntype="CompressedTexture2D"\n\n[deps]\nsource_file="{source}"\n\n[params]\ncompress/mode=0\nmipmaps/generate=true\nprocess/fix_alpha_border=true\n'
    settings.write_text(text,encoding="utf-8",newline="\n")


def rotated_geometry(geometry,orientation):
    # Builders' entrance is +z. Canonical is -z, followed by true Y rotations
    # -90/-180/-270: orientation indices point north/east/south/west in World.
    angle=math.radians(180-orientation*90)
    c,s=math.cos(angle),math.sin(angle)
    return [(sum(b.depth(p) for p in vertices)/len(vertices),vertices,tint)
            for _,points,tint in geometry
            for vertices in [[(round(c*x+s*z,9),y,round(-s*x+c*z,9)) for x,y,z in points]]]


def bake(identifier,label,role,geometry,expression="",orientation=0,canonical_id=""):
    plot_span=.8
    if role=="tree":
        geometry,plot_span=calibrate(geometry,15 if "pine" in identifier else 30,42 if "pine" in identifier else 36)
    if role=="civic": plot_span=1.0
    points3=np.asarray([p for _,vertices,_ in geometry for p in vertices])
    points2=np.asarray([b.project(p) for p in points3])
    left,top=points2.min(axis=0)-.026
    width,height=points2.max(axis=0)-(left,top)+.026
    ppu=1024/max(width,height)
    w,h=round(width*ppu),round(height*ppu)
    shaded=[(depth,vertices,shade_hex(color,vertices)) for depth,vertices,color in geometry]
    parts=[f'<svg xmlns="http://www.w3.org/2000/svg" width="{w}" height="{h}" viewBox="{left:.6f} {top:.6f} {width:.6f} {height:.6f}">',f'<title>{label}</title>']
    ordered=b.painter_order(shaded)
    for color,items in itertools.groupby(ordered,key=lambda item:item[2]):
        contours=[]
        for _,vertices,_ in items:
            projected=[b.project(p) for p in vertices]
            area=sum(a[0]*c[1]-c[0]*a[1] for a,c in zip(projected,projected[1:]+projected[:1]))
            if area<0: projected.reverse()
            contours.append("M"+" L".join(f"{x:.6f},{y:.6f}" for x,y in projected)+" Z")
        parts.append(f'<path d="{" ".join(contours)}" fill="{color}" fill-rule="nonzero"/>')
    parts.append("</svg>")
    svg=OUTPUT/"SVG"/f"{identifier}.svg"
    svg.write_text("\n".join(parts)+"\n",encoding="utf-8",newline="\n")
    png=OUTPUT/"整图"/f"{identifier}.png"
    raster_svg(svg,png)
    bounds=np.ptp(points3,axis=0)
    entry={"id":identifier,"display_name":label,"category":"historical_building_candidate",
           "role":role,"texture":png.relative_to(ROOT).as_posix(),"editable_source":svg.relative_to(ROOT).as_posix(),
           "origin":[-left*ppu,-top*ppu],"pixels_per_world":ppu,"plot_span":plot_span,
           "image_bounds":{"width":w,"height":h,"crop":[0,0,w,h]},
           "model_bounds":{"position":points3.min(axis=0).tolist(),"size":bounds.tolist()},
           "source":"tools/build_refined_valley_art.py; original project geometry",
           "license":"Project-authored geometry","source_url":"","availability":"production_refined_valley",
           "era":1,"historical_language":"Classical Greek / Roman stone, terracotta, timber; no modern glass grids",
           "camera":{"azimuth":45,"elevation":30,"projection":"orthogonal"},
           "geometry_faces":len(geometry),"texture_sha256":hashlib.sha256(png.read_bytes()).hexdigest(),
           "source_sha256":hashlib.sha256(svg.read_bytes()).hexdigest(),"refined_valley":True}
    if role != "tree":
        entry.update({"canonical_id":canonical_id or identifier,"orientation":orientation,
                      "rotation_y_degrees":-orientation*90,
                      "entrance_normal":[round(math.sin(orientation*math.pi/2)),round(-math.cos(orientation*math.pi/2))]})
    else:
        olive="canopy" in identifier
        entry.update({"tree_species":"olive" if olive else "mediterranean_cypress",
                      "morphology":"gnarled branching limbs, unequal grey-green lobed leaf masses and crown windows" if olive else "tapered rising trunk, oblique forks and uneven upright foliage fingers",
                      "historical_language":"First-era Mediterranean olive / cypress; project-authored botanical form",
                      "tree_revision":208,"stable_tone":0 if olive else 1})
    masks(entry,[(np.asarray(vertices),face_normal(vertices)) for _,vertices,_ in geometry],OUTPUT,OUTPUT)
    for path in [png,ROOT/entry["shadow_texture"],ROOT/entry["contact_texture"]]: write_texture_import(path)
    entry["category"]="residential" if role in ["terrace","gabled","courtyard"] else role
    if expression: entry["first_expression_style"]=expression
    if role in ["terrace","gabled","courtyard"]:
        entry.update({"variant":role,"roof_style":role,"roof_eave_y":.552 if role=="courtyard" else .574,
                      "roof_half_extents":[float(bounds[0])/2,float(bounds[2])/2]})
    scale=28*math.sqrt(2)*plot_span/max(bounds[0],bounds[2])/ppu
    entry["runtime_reference"]={"visible_size_px":[round(w*scale,3),round(h*scale,3)],"ground_anchor":"actual model foot (0,0,0)"}
    return entry


def validate(entries):
    records=[]
    for entry in entries:
        image=Image.open(ROOT/entry["texture"]).convert("RGBA")
        assert image.size==(entry["image_bounds"]["width"],entry["image_bounds"]["height"])
        assert image.getchannel("A").getextrema()==(0,255)
        assert entry["lighting"]["ground_anchor_world"]==[0.0,0.0,0.0]
        for kind in ["texture","shadow","contact"]:
            path=ROOT/entry[kind if kind=="texture" else kind+"_texture"]
            key="texture_sha256" if kind=="texture" else kind+"_sha256"
            assert hashlib.sha256(path.read_bytes()).hexdigest()==entry[key]
        assert entry["geometry_faces"]>=90
        records.append({"id":entry["id"],"faces":entry["geometry_faces"],"alpha_contour":"PASS",
                        "anchor":"PASS","hashes":"PASS","visible_size_px":entry["runtime_reference"]["visible_size_px"]})
    (OUTPUT/"validation.json").write_text(json.dumps({"passed":True,"entries":records,"source":"Actual baked PNG/SVG plus geometric shadow/contact; visual sheet still requires live-window review."},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")


def preview(entries):
    entries=[entry for entry in entries if int(entry.get("orientation",0)) == 2 or entry["role"] == "tree"]
    sheet=Image.new("RGB",(1500,1120),"#DED5BA")
    draw=ImageDraw.Draw(sheet)
    draw.text((28,18),"CLASSICAL VALLEY / actual south-facing templates / city scale x5",fill="#415E57")
    for index,entry in enumerate(entries):
        x=(index%5)*300;y=(index//5)*520+50
        draw.rounded_rectangle((x+12,y,x+288,y+484),12,fill="#F3EAD3")
        draw.text((x+22,y+15),entry["id"].replace("refined_",""),fill="#475B52")
        image=Image.open(ROOT/entry["texture"]).convert("RGBA")
        scale=28*math.sqrt(2)*entry["plot_span"]/max(entry["model_bounds"]["size"][0],entry["model_bounds"]["size"][2])/entry["pixels_per_world"]*5
        image.thumbnail((round(image.width*scale),round(image.height*scale)),Image.Resampling.LANCZOS)
        sheet.paste(image,(x+150-image.width//2,y+90),image)
        draw.text((x+22,y+448),f'{entry["geometry_faces"]} geometry faces / PNG alpha',fill="#6E7967")
    sheet.save(OUTPUT/"资产接触表.png")


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--trees-only",action="store_true",help="Bake only two trees; preserve every building entry and file byte for byte")
    parser.add_argument("--emission-only",action="store_true",help="Bake only sparse classical doorway/window night masks; preserve all existing assets")
    parser.add_argument("--civic-only",action="store_true",help="Bake only four civic geometries and their four night masks; preserve every other asset")
    parser.add_argument("--emission-role",choices=["civic"],help="With --emission-only, update only the selected role in the independent night manifest")
    args=parser.parse_args()
    if args.emission_only:
        rebuild_emission(args.emission_role)
        return
    if args.civic_only:
        rebuild_civic()
        return
    for folder in ["SVG","整图","阴影"]: (OUTPUT/folder).mkdir(parents=True,exist_ok=True)
    if args.trees_only:
        rebuild_trees()
        return
    makers=[("refined_house_terrace","石檐露台住宅","terrace",terrace(ROOFS["tile"]),""),
            ("refined_house_gabled","陶瓦坡屋住宅","gabled",gabled(ROOFS["tile"]),""),
            ("refined_house_courtyard","开庭连翼住宅","courtyard",courtyard(ROOFS["tile"]),""),
            ("refined_shop_arcade","遮檐拱窗商铺","commercial",shop(ROOFS["tile"]),""),
            ("refined_civic_loggia","柱廊文化馆","civic",civic(ROOFS["tile"]),""),
            ("refined_deep_terrace","深流石蓝露台","terrace",terrace(ROOFS["deep"]),"deep"),
            ("refined_weave_shop","织机陶瓦商铺","commercial",shop(ROOFS["tile"]),"weave"),
            ("refined_warm_courtyard","暖庭绿灰庭院","courtyard",courtyard(ROOFS["warm"]),"warm"),
            ("refined_tree_canopy","分叉灰绿橄榄树","tree",tree("canopy"),""),
            ("refined_tree_pine","细长地中海柏","tree",tree("pine"),"")]
    entries=[];orientations={}
    for identifier,label,role,geometry,expression in makers:
        indices=range(4) if role != "tree" else [0]
        ids=[]
        for orientation in indices:
            name=identifier if orientation == 0 else identifier+f"_o{orientation}"
            print("BAKE",name,len(geometry),flush=True)
            oriented=rotated_geometry(geometry,orientation) if role != "tree" else geometry
            entries.append(bake(name,label,role,oriented,expression,orientation,identifier))
            ids.append(name)
        if role != "tree": orientations[identifier]=ids
    manifest={"schema_version":2,"era":1,"direction":"第一时代 · 古典希腊/罗马精制河湾 · 暖石/陶瓦/石蓝/绿灰/深松绿",
              "entries":entries,"residential_ids":["refined_house_terrace","refined_house_gabled","refined_house_courtyard"],
              "commercial_id":"refined_shop_arcade","civic_id":"refined_civic_loggia",
              "tree_ids":["refined_tree_canopy","refined_tree_pine"],
              "authored_ids":{"deep":"refined_deep_terrace","weave":"refined_weave_shop","warm":"refined_warm_courtyard"},
              "orientations":orientations,"orientation_contract":{"0":[0,-1],"1":[1,0],"2":[0,1],"3":[-1,0],"construction":"Actual geometry rotated around (0,0,0) before shading, BSP, raster and physical shadow projection"},
              "ground_anchor":"actual foot (0,0,0), common to texture and physical masks",
              "palette":{"wall":"#E4D3B1","stone":"#F1E3C7","tile":"#B97859","deep":"#597A83","warm":"#728A72","tree":"#4D7960"},
              "production":"Presentation replacement only; retained original resources remain available."}
    (OUTPUT/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    validate(entries)
    preview(entries)
    print("REFINED_VALLEY_ART",len(entries),"assets / alpha, origin and hashes PASS")


def rebuild_trees():
    manifest=json.loads((OUTPUT/"manifest.json").read_text(encoding="utf-8"))
    buildings=[entry for entry in manifest["entries"] if entry["role"]!="tree"]
    before={}
    for entry in buildings:
        for key in ["texture","editable_source","shadow_texture","contact_texture"]:
            path=ROOT/entry[key]
            for file in [path,path.with_suffix(path.suffix+".import")]:
                if file.exists(): before[file.relative_to(ROOT).as_posix()]=hashlib.sha256(file.read_bytes()).hexdigest()
    replacements={}
    for identifier,label,kind in [("refined_tree_canopy","分叉灰绿橄榄树","canopy"),("refined_tree_pine","细长地中海柏","pine")]:
        geometry=tree(kind)
        print("BAKE_TREE",identifier,len(geometry),flush=True)
        replacements[identifier]=bake(identifier,label,"tree",geometry)
    manifest["entries"]=[replacements.get(entry["id"],entry) for entry in manifest["entries"]]
    manifest["vegetation_revision"]=208
    (OUTPUT/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    after={path:hashlib.sha256((ROOT/path).read_bytes()).hexdigest() for path in before}
    assert before==after and buildings==[entry for entry in manifest["entries"] if entry["role"]!="tree"]
    validate(manifest["entries"])
    preview(manifest["entries"])
    evidence=ROOT/"验证记录/round208_古典植被"
    evidence.mkdir(parents=True,exist_ok=True)
    (evidence/"building_unchanged.json").write_text(json.dumps({"passed":True,"building_entries":len(buildings),"building_files":len(before),"hashes":after,"command":"python tools/build_refined_valley_art.py --trees-only"},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    tree_evidence(manifest)
    print("TREES_ONLY 2 bakes /",len(buildings),"building entries and",len(before),"building files unchanged / PASS")


def rebuild_civic():
    manifest=json.loads((OUTPUT/"manifest.json").read_text(encoding="utf-8"))
    original=[entry for entry in manifest["entries"] if entry["role"]!="civic"]
    previous={entry["id"]:entry for entry in manifest["entries"] if entry["role"]=="civic"}
    previous_images={identifier:Image.open(ROOT/entry["texture"]).convert("RGBA") for identifier,entry in previous.items()}
    night=json.loads((OUTPUT/"夜光/manifest.json").read_text(encoding="utf-8"))
    preserved={}
    for entry in original:
        for key in ["texture","editable_source","shadow_texture","contact_texture"]:
            path=ROOT/entry[key]
            for file in [path,path.with_suffix(path.suffix+".import")]: preserved[file.relative_to(ROOT).as_posix()]=hashlib.sha256(file.read_bytes()).hexdigest()
    for entry in night["entries"]:
        if entry["id"] in previous: continue
        path=ROOT/entry["emission_texture"]
        for file in [path,path.with_suffix(path.suffix+".import")]: preserved[file.relative_to(ROOT).as_posix()]=hashlib.sha256(file.read_bytes()).hexdigest()
    geometry=civic(ROOFS["tile"]);replacements={}
    for orientation in range(4):
        identifier="refined_civic_loggia"+(f"_o{orientation}" if orientation else "")
        print("BAKE_CIVIC",identifier,len(geometry),flush=True)
        entry=bake(identifier,"四面环柱文化馆","civic",rotated_geometry(geometry,orientation),orientation=orientation,canonical_id="refined_civic_loggia")
        entry.update({"civic_revision":210,"civic_architecture":{"doric_columns":20,"colonnade_sides":["front","back","left","right"],
                     "complete_pediments":2,"cella_width":1.24,"cella_length":.81,"main_entrance":"original +z doorway; World orientation contract unchanged"}})
        replacements[identifier]=entry
    manifest["entries"]=[replacements.get(entry["id"],entry) for entry in manifest["entries"]]
    manifest["civic_revision"]=210
    (OUTPUT/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    validate(manifest["entries"]);preview(manifest["entries"])
    rebuild_emission("civic")
    after={path:hashlib.sha256((ROOT/path).read_bytes()).hexdigest() for path in preserved}
    assert after==preserved and original==[entry for entry in manifest["entries"] if entry["role"]!="civic"]
    proof=ROOT/"验证记录/round210_文化馆四向";proof.mkdir(parents=True,exist_ok=True)
    (proof/"civic_generation.json").write_text(json.dumps({"passed":True,"civic_entries":4,"preserved_noncivic_files":len(after),
          "preserved_noncivic_hashes":after,"command":"python -B tools/build_refined_valley_art.py --civic-only",
          "scope":"Only four civic geometries, shadows/contact and four sparse night masks; all 28 houses/shops, two trees and 28 noncivic night masks retained byte for byte."},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    civic_evidence(manifest,previous,previous_images)
    print("CIVIC_ONLY 4 geometry + 4 emission /",len(after),"noncivic files unchanged / PASS",flush=True)


def _civic_depth_evidence(entry,geometry,sections):
    """Independent triangle raster proves exposed architecture, world light
    and BSP visibility. This uses primitive face identity, not color guessing.
    """
    ratio=256/max(entry["image_bounds"]["width"],entry["image_bounds"]["height"])
    wh=np.maximum(1,np.rint(np.array([entry["image_bounds"]["width"],entry["image_bounds"]["height"]])*ratio).astype(int))
    depth=np.full((wh[1],wh[0]),-np.inf);owner=np.full(depth.shape,-1,dtype=int)
    margin=np.zeros(depth.shape);reference=np.zeros((*depth.shape,3))
    for face_id,(_,vertices,tint) in enumerate(geometry):
        points=np.asarray([b.project(p) for p in vertices])*entry["pixels_per_world"]*ratio+np.asarray(entry["origin"])*ratio
        distance=np.asarray([b.depth(p) for p in vertices]);rgb=np.array(list(bytes.fromhex(shade_hex(tint,vertices)[1:])))
        for index in range(1,len(vertices)-1):
            triangle=points[[0,index,index+1]];d=distance[[0,index,index+1]]
            lo=np.maximum(0,np.floor(triangle.min(0)).astype(int));hi=np.minimum(wh-1,np.ceil(triangle.max(0)).astype(int))
            if np.any(hi<lo): continue
            xx,yy=np.meshgrid(np.arange(lo[0],hi[0]+1)+.5,np.arange(lo[1],hi[1]+1)+.5)
            (ax,ay),(bx,by),(cx,cy)=triangle;den=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
            if abs(den)<1e-10: continue
            a=((by-cy)*(xx-cx)+(cx-bx)*(yy-cy))/den
            c=((cy-ay)*(xx-cx)+(ax-cx)*(yy-cy))/den;f=1-a-c
            dd=a*d[0]+c*d[1]+f*d[2]
            region=depth[lo[1]:hi[1]+1,lo[0]:hi[0]+1];mask=(a>=0)&(c>=0)&(f>=0)&(dd>=region-1e-9)
            region[mask]=dd[mask]
            owner[lo[1]:hi[1]+1,lo[0]:hi[0]+1][mask]=face_id
            margin[lo[1]:hi[1]+1,lo[0]:hi[0]+1][mask]=np.minimum(np.minimum(a,c),f)[mask]
            reference[lo[1]:hi[1]+1,lo[0]:hi[0]+1][mask]=rgb
    actual=np.asarray(Image.open(ROOT/entry["texture"]).convert("RGBA").resize(tuple(wh),Image.Resampling.LANCZOS)).astype(float)
    visible=np.isfinite(depth)&(actual[:,:,3]>250)&(margin>.012)
    agreement=float((np.abs(actual[:,:,:3]-reference).max(-1)[visible]<24).mean())
    assert agreement>.93,(entry["id"],agreement)
    architectural=np.isfinite(depth)&(actual[:,:,3]>250)
    columns=[]
    for column in sections["columns"]:
        low,high=column["faces"];count=int(np.count_nonzero(architectural&(owner>=low)&(owner<high)))
        if count>=6: columns.append({"position":column["position"],"side":column["side"],"visible_pixels":count})
    gables=[int(np.count_nonzero(architectural&(owner>=low)&(owner<high))) for low,high in sections["pediments"]]
    low,high=sections["entablature"];entablature=int(np.count_nonzero(architectural&(owner>=low)&(owner<high)))
    assert len(columns)>=6 and max(gables)>100 and entablature>100,(entry["id"],columns,gables,entablature)
    return {"id":entry["id"],"geometry_faces":len(geometry),"world_light_bsp_depth_agreement":round(agreement,6),
            "nearest_surface_samples":int(visible.sum()),"visible_doric_columns":columns,"visible_pediment_pixels":gables,
            "visible_entablature_pixels":entablature,"reference_long_edge":256,"rgb_tolerance":24}


def civic_evidence(manifest,old_entries,old_images):
    entries=[entry for entry in manifest["entries"] if entry["role"]=="civic"]
    night=json.loads((OUTPUT/"夜光/manifest.json").read_text(encoding="utf-8"))
    night_entries={entry["id"]:entry for entry in night["entries"] if entry["id"] in old_entries}
    sections={};geometry=civic(ROOFS["tile"],sections)
    results=[];sheet=Image.new("RGB",(1440,1030),"#DED5BA");draw=ImageDraw.Draw(sheet)
    draw.text((22,16),"CIVIC / original World orientation / same ground scale x5 / front + rear complete pediments",fill="#415E57")
    for index,entry in enumerate(entries):
        results.append(_civic_depth_evidence(entry,rotated_geometry(geometry,int(entry["orientation"])),sections))
        x=index*360
        draw.text((x+22,42),f'O{entry["orientation"]} / entrance {entry["entrance_normal"]}',fill="#415E57")
        for row,item,label in [(0,old_entries[entry["id"]],"BEFORE / retained current civic"),(1,entry,"AFTER / four-side Doric ring")]:
            y=70+row*320
            draw.rounded_rectangle((x+12,y,x+348,y+300),12,fill="#F3EAD3")
            draw.text((x+24,y+18),label,fill="#415E57")
            image=old_images[item["id"]] if row==0 else Image.open(ROOT/item["texture"]).convert("RGBA")
            factor=28*math.sqrt(2)*item["plot_span"]/max(item["model_bounds"]["size"][0],item["model_bounds"]["size"][2])/item["pixels_per_world"]*5
            rendered=image.resize((round(image.width*factor),round(image.height*factor)),Image.Resampling.LANCZOS)
            at=(round(x+180-item["origin"][0]*factor),round(y+235-item["origin"][1]*factor))
            sheet.paste(rendered,at,rendered)
            small=image.resize((max(1,round(image.width*factor/5*.62/.7)),max(1,round(image.height*factor/5*.62/.7))),Image.Resampling.LANCZOS)
            sheet.paste(small,(x+276,y+242),small)
            draw.text((x+24,y+264),f'{item["geometry_faces"]} faces / origin (0,0,0)',fill="#596A57")
        y=710;draw.rounded_rectangle((x+12,y,x+348,y+300),12,fill="#4D626E")
        draw.text((x+24,y+18),"NEW / sparse actual aperture light",fill="#F4E3BF")
        base_pixels=np.asarray(Image.open(ROOT/entry["texture"]).convert("RGBA"),dtype=float)/255
        emission=np.asarray(Image.open(ROOT/night_entries[entry["id"]]["emission_texture"]).convert("RGBA"),dtype=float)/255
        rgb=np.clip(base_pixels[:,:,:3]*np.array([.48,.61,.73])+emission[:,:,:3]*emission[:,:,3:4],0,1)
        image=Image.fromarray(np.rint(np.concatenate((rgb,base_pixels[:,:,3:4]),axis=-1)*255).astype(np.uint8))
        rendered=image.resize((round(image.width*factor),round(image.height*factor)),Image.Resampling.LANCZOS)
        at=(round(x+180-entry["origin"][0]*factor),round(y+235-entry["origin"][1]*factor));sheet.paste(rendered,at,rendered)
        small=image.resize((max(1,round(image.width*factor/5*.62/.7)),max(1,round(image.height*factor/5*.62/.7))),Image.Resampling.LANCZOS)
        sheet.paste(small,(x+276,y+258),small)
        draw.text((x+24,y+264),f'{len(results[-1]["visible_doric_columns"])} exposed columns / .62 site >',fill="#F4E3BF")
    proof=ROOT/"验证记录/round210_文化馆四向"
    sheet.save(proof/"文化馆四向旧新对照.png")
    (proof/"geometry.json").write_text(json.dumps({"passed":True,"civic_revision":210,"doric_columns":20,"complete_pediments":2,
        "sections":sections,"entries":results,"scope":"Independent nearest-triangle face identity and same world-light RGB against real BSP PNG. Same foot scale; no live window or human aesthetic approval."},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")


def tree_evidence(manifest):
    """Check BSP visibility against a separate triangle depth raster, and show
    old/new silhouettes at their real runtime scale without rebuilding houses.
    """
    archive=ROOT/"废弃/美术/round208_树形替换前"
    evidence=ROOT/"验证记录/round208_古典植被"
    evidence.mkdir(parents=True,exist_ok=True)
    old=json.loads((archive/"manifest.json").read_text(encoding="utf-8"))
    old_entries={entry["id"]:entry for entry in old["entries"] if entry["role"]=="tree"}
    entries={entry["id"]:entry for entry in manifest["entries"] if entry["role"]=="tree"}
    sheet=Image.new("RGB",(1200,680),"#DED5BA");draw=ImageDraw.Draw(sheet)
    draw.text((24,18),"CLASSICAL TREES / same runtime ground scale x7 / old and new",fill="#415E57")
    results=[]
    for species,identifier in [("canopy","refined_tree_canopy"),("pine","refined_tree_pine")]:
        entry=entries[identifier]
        geometry,_=calibrate(tree(species),15 if species=="pine" else 30,42 if species=="pine" else 36)
        size=np.array([entry["image_bounds"]["width"],entry["image_bounds"]["height"]])
        ratio=192/max(size);wh=np.maximum(1,np.rint(size*ratio).astype(int))
        depth=np.full((wh[1],wh[0]),-np.inf);reference=np.zeros((wh[1],wh[0],3))
        for _,vertices,color in geometry:
            projected=np.asarray([b.project(v) for v in vertices])*entry["pixels_per_world"]*ratio+np.asarray(entry["origin"])*ratio
            distance=np.asarray([b.depth(v) for v in vertices]);rgb=np.array(list(bytes.fromhex(shade_hex(color,vertices)[1:])))
            for index in range(1,len(vertices)-1):
                tri=projected[[0,index,index+1]];d=distance[[0,index,index+1]]
                lo=np.maximum(0,np.ceil(tri.min(0)).astype(int));hi=np.minimum(wh-1,np.floor(tri.max(0)).astype(int))
                if np.any(hi<lo): continue
                xx,yy=np.meshgrid(np.arange(lo[0],hi[0]+1)+.5,np.arange(lo[1],hi[1]+1)+.5)
                (ax,ay),(bx,by),(cx,cy)=tri;den=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
                if abs(den)<1e-8: continue
                a=((by-cy)*(xx-cx)+(cx-bx)*(yy-cy))/den
                c=((cy-ay)*(xx-cx)+(ax-cx)*(yy-cy))/den;f=1-a-c
                dd=a*d[0]+c*d[1]+f*d[2]
                region=depth[lo[1]:hi[1]+1,lo[0]:hi[0]+1]
                mask=(a>.01)&(c>.01)&(f>.01)&(dd>=region-1e-6)
                region[mask]=dd[mask];reference[lo[1]:hi[1]+1,lo[0]:hi[0]+1][mask]=rgb
        actual=np.asarray(Image.open(ROOT/entry["texture"]).resize(tuple(wh),Image.Resampling.LANCZOS)).astype(float)
        visible=np.isfinite(depth)&(actual[:,:,3]>250)
        agreement=float((np.abs(actual[:,:,:3]-reference).max(-1)[visible]<24).mean())
        assert agreement>.93
        old_alpha=np.asarray(Image.open(archive/old_entries[identifier]["texture"]).resize((128,128)).getchannel("A"))>127
        new_alpha=np.asarray(Image.open(ROOT/entry["texture"]).resize((128,128)).getchannel("A"))>127
        difference=float(np.logical_xor(old_alpha,new_alpha).sum()/np.logical_or(old_alpha,new_alpha).sum())
        assert difference>.15
        results.append({"id":identifier,"species":entry["tree_species"],"faces":len(geometry),"nearest_surface_samples":int(visible.sum()),"bsp_depth_agreement":round(agreement,6),"rgb_tolerance":24,"silhouette_change_fraction":round(difference,6),"runtime_size":entry["runtime_reference"]["visible_size_px"]})
        column=0 if species=="canopy" else 2
        for version,item,base in [(0,old_entries[identifier],archive),(1,entry,ROOT)]:
            x=(column+version)*300
            draw.rounded_rectangle((x+12,50,x+288,654),12,fill="#F3EAD3")
            title=("OLD / ROUND CANOPY" if species=="canopy" else "OLD / LAYERED PINE") if version==0 else ("NEW / OLIVE" if species=="canopy" else "NEW / CYPRESS")
            draw.text((x+26,71),title,fill="#415E57")
            image=Image.open(base/item["texture"]).convert("RGBA")
            factor=28*math.sqrt(2)*item["plot_span"]/max(item["model_bounds"]["size"][0],item["model_bounds"]["size"][2])/item["pixels_per_world"]*7
            rendered=image.resize((round(image.width*factor),round(image.height*factor)),Image.Resampling.LANCZOS)
            ground=(x+150,430)
            at=(round(ground[0]-item["origin"][0]*factor),round(ground[1]-item["origin"][1]*factor))
            sheet.paste(rendered,at,rendered)
            draw.line((x+24,430,x+276,430),fill="#BCAF8F",width=1)
            draw.text((x+26,476),f'Geometry: {item["geometry_faces"]} faces',fill="#596A57")
            draw.text((x+26,498),f'City: {item["runtime_reference"]["visible_size_px"]} px',fill="#596A57")
            # Actual city-size cutout is also shown, not only an enlarged tree.
            small=image.resize((max(1,round(image.width*factor/7)),max(1,round(image.height*factor/7))),Image.Resampling.LANCZOS)
            sheet.paste(small,(x+150-small.width//2,540),small)
    sheet.save(evidence/"树形旧新对照.png")
    (evidence/"geometry.json").write_text(json.dumps({"passed":True,"trees":results,"scope":"Independent triangle nearest-depth check against BSP PNG; edge antialias pixels excluded. No human aesthetic approval."},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")


def _night_window(x,bottom,front,width,height,side=False,mirror=None):
    source=[]
    framed_window(source,x,bottom,front,width,height,side)
    opening=[item for item in source if item[2]==OPENING]
    origin=np.array((front+.028,bottom,x) if side else (x,bottom,front+.028))
    along=np.array((0,0,1) if side else (1,0,0),dtype=float)
    outward=np.array((1,0,0) if side else (0,0,1),dtype=float)
    if mirror is not None:
        mirrored=[];reflected_details(mirrored,opening,mirror);opening=mirrored
        origin[mirror]*=-1;along[mirror]*=-1;outward[mirror]*=-1
    return {"kind":"window","geometry":opening,"origin":origin,"along":along,"outward":outward,
            "width":width,"height":height,"peak":.30,"spread":.34}


def _night_window_candidates(role):
    # Exact calls from the production makers, excluding the gable clerestory.
    dimensions={"terrace":(1.02,.90,.17,.23),"gabled":(1.03,.92,.20,.22),"commercial":(1.08,.85,.20,.23)}
    candidates=[]
    if role in dimensions:
        w,l,bottom,height=dimensions[role]
        for x in [-w*.22,w*.22]: candidates.append(_night_window(x,bottom,l/2+.006,.20,height,mirror=2))
        for z in [-l*.22,l*.22]: candidates.append(_night_window(z,bottom,w/2+.006,.20,height,True,0))
    elif role=="courtyard":
        for x in [-.39,.39]: candidates.append(_night_window(x,.17,.461,.17,.22,mirror=2))
        for z in [-.18,.20]: candidates.append(_night_window(z,.19,.566,.17,.21,True,0))
    else:
        for x in [-.36,.36]: candidates.append(_night_window(x,.44,.446,.20,.27,mirror=2))
        for z in [-.23,.16]: candidates.append(_night_window(z,.44,.626,.18,.28,True,0))
    if role=="terrace":
        candidates.append(_night_window(.24,.17,.456,.26,.23))
        for z in [-.21,.22]: candidates.append(_night_window(z,.17,.516,.21,.23,True))
    elif role=="gabled":
        candidates.append(_night_window(.24,.18,.466,.24,.24))
        for z in [-.20,.23]: candidates.append(_night_window(z,.20,.521,.22,.22,True))
    elif role=="courtyard":
        for x in [-.39,.39]: candidates.append(_night_window(x,.17,.461,.17,.22))
        for z in [-.18,.20]: candidates.append(_night_window(z,.19,.566,.17,.21,True))
    elif role=="commercial":
        for z,width in [(-.18,.27),(.22,.23)]: candidates.append(_night_window(z,.21,.546,width,.26,True))
    else:
        for x in [-.43,.43]: candidates.append(_night_window(x,.43,.377,.17,.27))
        for z in [-.23,.16]: candidates.append(_night_window(z,.44,.626,.18,.28,True))
    return candidates


def _night_visible_window(geometry,candidates,orientation):
    """Select at most one existing recess using independent nearest-surface rays.
    A window behind a wing, a roof, a column or the back wall cannot win.
    """
    keys={_face_key(vertices):index for index,(_,vertices,_) in enumerate(geometry)}
    triangles=[];depths=[];owners=[]
    for face_id,(_,vertices,_) in enumerate(rotated_geometry(geometry,orientation)):
        for at in range(1,len(vertices)-1):
            triangle=[vertices[0],vertices[at],vertices[at+1]]
            triangles.append([b.project(p) for p in triangle]);depths.append([b.depth(p) for p in triangle]);owners.append(face_id)
    triangles=np.asarray(triangles);depths=np.asarray(depths);owners=np.asarray(owners)
    ax,ay=triangles[:,0,:].T;bx,by=triangles[:,1,:].T;cx,cy=triangles[:,2,:].T
    denominator=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
    valid=abs(denominator)>1e-10
    ax,ay,bx,by,cx,cy,denominator,depths,owners=[value[valid] for value in [ax,ay,bx,by,cx,cy,denominator,depths,owners]]
    best=None;score=0
    for candidate in candidates:
        key=_face_key(candidate["geometry"][0][1]);assert key in keys
        points=[b.project(_night_rotation(candidate["origin"]+candidate["along"]*candidate["width"]*u+
                                         np.array([0,candidate["height"]*v,0]),orientation))
                for u,v in [(0,.4),(-.12,.32),(.12,.32),(0,.52)]]
        x,y=np.asarray(points).T
        a=((by-cy)[:,None]*(x-cx[:,None])+(cx-bx)[:,None]*(y-cy[:,None]))/denominator[:,None]
        c=((cy-ay)[:,None]*(x-cx[:,None])+(ax-cx)[:,None]*(y-cy[:,None]))/denominator[:,None];f=1-a-c
        z=a*depths[:,0,None]+c*depths[:,1,None]+f*depths[:,2,None]
        z[(a<0)|(c<0)|(f<0)]=-np.inf
        nearest=owners[z.argmax(axis=0)]
        count=int(np.count_nonzero(nearest==keys[key]))
        if count>score: best=candidate;score=count
        if score==4: break
    return best


def _night_features(role,geometry,orientation):
    """One narrow doorway patch and at most one geometrically visible recess.
    Original frames/planks are identity evidence, never recolored emitters.
    """
    door=[]
    specs={"terrace":(-.26,.052,.456,.20,.34),
           "gabled":(-.25,.055,.466,.20,.35),
           "courtyard":(0,.05,-.164,.16,.31),
           "civic":(0,.135,.377,.34,.58)}
    if role=="commercial":
        plane(door,0,.068,.460,.78,.35,OPENING)
        x,bottom,front,width,height=0,.068,.430,.78,.35
    else:
        x,bottom,front,width,height=specs[role]
        arched_door(door,x,bottom,front,width,height)
        door=[item for item in door if item[2] in [WOOD[0],WOOD[1]]]
    result=[{"kind":"door","geometry":door,"origin":np.array((x,bottom,front+.033 if role!="commercial" else .460)),
             "along":np.array((1,0,0)),"outward":np.array((0,0,1)),"width":width,"height":height,
             "peak":.56 if role!="commercial" else .46,"spread":.33 if role!="commercial" else .18}]
    window=_night_visible_window(geometry,_night_window_candidates(role),orientation)
    if window is not None: result.append(window)
    return result


def _face_key(vertices):
    return tuple(sorted(tuple(round(value,8) for value in point) for point in vertices))


def _emission_support(entry,geometry,features):
    """All original faces remain opaque BSP occluders; only independent small
    faces within selected apertures carry red/green feature labels.
    """
    original={_face_key(vertices) for _,vertices,_ in geometry}
    selected={_face_key(vertices) for feature in features for _,vertices,_ in feature["geometry"]}
    assert selected<=original,(entry["id"],"aperture does not match original geometry")
    # Every original face is an opaque black occluder. Each light is a small
    # independent face immediately above its original recess/timber surface.
    tagged=[(depth,vertices,"#000000") for depth,vertices,_ in geometry]
    for index,feature in enumerate(features):
        origin=feature["origin"]+feature["outward"]*.0005
        half=feature["width"]*(.34 if feature["kind"]=="window" else feature["spread"])
        bottom=feature["height"]*.17;top=feature["height"]*.63
        points=[origin+feature["along"]*u+np.array([0,v,0]) for u,v in [(-half,bottom),(half,bottom),(half,top),(-half,top)]]
        b.face(tagged,[tuple(p) for p in points],["#FF0000","#00FF00"][index])
    oriented=rotated_geometry(tagged,int(entry["orientation"]))
    doc=ET.parse(ROOT/entry["editable_source"]).getroot()
    left,top,width,height=map(float,doc.attrib["viewBox"].split())
    w,h=int(doc.attrib["width"]),int(doc.attrib["height"])
    canvas=Image.new("RGB",(w*2,h*2));draw=ImageDraw.Draw(canvas)
    for _,vertices,tint in b.painter_order(oriented):
        projected=[tuple(round(value,6) for value in b.project(p)) for p in vertices]
        draw.polygon([((x-left)/width*w*2,(y-top)/height*h*2) for x,y in projected],fill=tint)
    support=np.asarray(canvas.resize((w,h),Image.Resampling.LANCZOS),dtype=np.float32)/255
    return support,oriented,(left,top,width,height,w,h),len(selected)


def _night_rotation(point,orientation):
    angle=math.radians(180-orientation*90);c,s=math.cos(angle),math.sin(angle)
    x,y,z=point
    return (c*x+s*z,y,-s*x+c*z)


def _emission_alpha(entry,support,view,features):
    left,top,width,height,w,h=view
    alpha=np.zeros((h,w),dtype=np.float32);records=[]
    for index,feature in enumerate(features):
        visible=support[:,:,index]>.72
        yy,xx=np.where(visible)
        if not len(xx):
            records.append({"kind":feature["kind"],"visible_pixels":0,"peak_alpha":0.0})
            continue
        orientation=int(entry["orientation"])
        origin=np.asarray(feature["origin"])
        p=np.asarray(b.project(_night_rotation(origin,orientation)))
        u=np.asarray(b.project(_night_rotation(origin+feature["along"],orientation)))-p
        v=np.asarray(b.project(_night_rotation(origin+[0,1,0],orientation)))-p
        screen=np.stack((left+(xx+.5)/w*width,top+(yy+.5)/h*height),axis=-1)
        local=(screen-p) @ np.linalg.inv(np.stack((u,v),axis=-1)).T
        falloff=np.exp(-2.0*((local[:,0]/(feature["width"]*feature["spread"]))**2+
                            ((local[:,1]-feature["height"]*.40)/(feature["height"]*.34))**2))
        values=falloff*feature["peak"]*support[yy,xx,index]
        alpha[yy,xx]=np.maximum(alpha[yy,xx],values)
        records.append({"kind":feature["kind"],"visible_pixels":int(np.count_nonzero(values>1/255)),
                        "peak_alpha":round(float(values.max()),6)})
    return alpha,records


def _independent_emission_depth(entry,oriented,view,alpha):
    """Independent nearest-triangle depth at final PNG texel centers. Measure
    aperture ownership at bright pixels, excluding one raster edge texel.
    """
    left,top,width,height,w,h=view
    yy,xx=np.where(alpha>.035)
    x=left+(xx+.5)/w*width;y=top+(yy+.5)/h*height
    depth=np.full(len(xx),-np.inf);owner=np.zeros(len(xx),dtype=np.uint8)
    margin=np.zeros(len(xx),dtype=np.float32)
    for _,vertices,tint in oriented:
        points=np.asarray([b.project(p) for p in vertices]);dist=np.asarray([b.depth(p) for p in vertices])
        for index in range(1,len(vertices)-1):
            tri=points[[0,index,index+1]];d=dist[[0,index,index+1]]
            (ax,ay),(bx,by),(cx,cy)=tri
            denominator=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
            if abs(denominator)<1e-10: continue
            a=((by-cy)*(x-cx)+(cx-bx)*(y-cy))/denominator
            c=((cy-ay)*(x-cx)+(ax-cx)*(y-cy))/denominator;f=1-a-c
            z=a*d[0]+c*d[1]+f*d[2]
            inside=(a>=0)&(c>=0)&(f>=0)&(z>=depth-1e-9)
            depth[inside]=z[inside];owner[inside]=1 if tint!="#000000" else 0
            margin[inside]=np.minimum(np.minimum(a,c),f)[inside]
    interior=margin>.004
    bad=interior&(owner==0)
    return {"bright_samples":len(xx),"interior_samples":int(interior.sum()),"occluded_bright_samples":int(bad.sum()),
            "nearest_surface_agreement":round(float(owner[interior].mean()),6) if interior.any() else 1.0}


def rebuild_emission(role=None):
    manifest_path=OUTPUT/"manifest.json"
    manifest=json.loads(manifest_path.read_text(encoding="utf-8"))
    all_buildings=[entry for entry in manifest["entries"] if entry["role"]!="tree"]
    buildings=[entry for entry in all_buildings if role is None or entry["role"]==role]
    retained_night=json.loads((OUTPUT/"夜光/manifest.json").read_text(encoding="utf-8")) if role else None
    selected={entry["id"] for entry in buildings}
    retained_entries=[entry for entry in retained_night["entries"] if entry["id"] not in selected] if role else []
    retained_hashes={}
    for entry in retained_entries:
        path=ROOT/entry["emission_texture"]
        for file in [path,path.with_suffix(path.suffix+".import")]: retained_hashes[file.relative_to(ROOT).as_posix()]=hashlib.sha256(file.read_bytes()).hexdigest()
    before={manifest_path.relative_to(ROOT).as_posix():hashlib.sha256(manifest_path.read_bytes()).hexdigest()}
    for entry in all_buildings:
        for key in ["texture","editable_source","shadow_texture","contact_texture"]:
            path=ROOT/entry[key]
            for file in [path,path.with_suffix(path.suffix+".import")]:
                assert file.exists(),file
                before[file.relative_to(ROOT).as_posix()]=hashlib.sha256(file.read_bytes()).hexdigest()
    assert len(all_buildings)==32 and len(before)==257
    makers={"terrace":terrace,"gabled":gabled,"courtyard":courtyard,"commercial":shop,"civic":civic}
    folder=OUTPUT/"夜光";folder.mkdir(parents=True,exist_ok=True)
    records=[];evidence=[];geometry_cache={}
    for entry in buildings:
        canonical=entry["canonical_id"];role=entry["role"]
        if canonical not in geometry_cache:
            roof="deep" if entry.get("first_expression_style")=="deep" else ("warm" if entry.get("first_expression_style")=="warm" else "tile")
            geometry_cache[canonical]=makers[role](ROOFS[roof])
        features=_night_features(role,geometry_cache[canonical],int(entry["orientation"]))
        support,oriented,view,matched=_emission_support(entry,geometry_cache[canonical],features)
        alpha,visible=_emission_alpha(entry,support,view,features)
        base_alpha=np.asarray(Image.open(ROOT/entry["texture"]).getchannel("A"),dtype=np.float32)/255
        alpha=np.minimum(alpha,base_alpha)
        depth_check=_independent_emission_depth(entry,oriented,view,alpha)
        assert depth_check["nearest_surface_agreement"]>.995,(entry["id"],depth_check)
        rgba=np.zeros((*alpha.shape,4),dtype=np.uint8)
        rgba[:,:,:3]=[255,201,130];rgba[:,:,3]=np.rint(alpha*255).astype(np.uint8)
        path=folder/(entry["id"]+"_emission.png")
        Image.fromarray(rgba).save(path);write_texture_import(path)
        lit=int(np.count_nonzero(rgba[:,:,3]));solid=int(np.count_nonzero(base_alpha>.5))
        assert lit/solid<.035,(entry["id"],lit,solid)
        record={"id":entry["id"],"emission_texture":path.relative_to(ROOT).as_posix(),
                "emission_origin":entry["origin"],"emission_pixels_per_world":entry["pixels_per_world"],
                "emission_sha256":hashlib.sha256(path.read_bytes()).hexdigest(),"base_texture_sha256":entry["texture_sha256"],
                "orientation":entry["orientation"],"entrance_normal":entry["entrance_normal"],"era":1,
                "visible_feature_count":sum(feature["visible_pixels"]>0 for feature in visible),
                "feature_policy":"An independent narrow light face within the original doorway/shop recess and at most one ray-visible original stone aperture; every original face is an opaque BSP occluder",
                "emission_color":"#FFC982","maximum_alpha":round(float(rgba[:,:,3].max()/255),6),
                "visible_emission_fraction":round(lit/solid,6),"features":visible}
        records.append(record)
        evidence.append({"id":entry["id"],"matched_original_faces":matched,**depth_check,
                         "bright_fraction":record["visible_emission_fraction"],"features":visible})
        print("EMISSION",entry["id"],record["visible_feature_count"],depth_check["nearest_surface_agreement"],flush=True)
    after={path:hashlib.sha256((ROOT/path).read_bytes()).hexdigest() for path in before}
    assert before==after
    night={"schema_version":1,"era":1,"source_manifest":"资源/精制河湾/manifest.json",
           "source_manifest_sha256":before[manifest_path.relative_to(ROOT).as_posix()],"entries":records,
           "alpha_contract":"Straight-alpha #FFC982, doorway peak 0.56 (taberna 0.46), at most one ray-visible recess peak 0.30; multiply once by runtime night_strength and heard reveal, preserve local sprite depth. No halo outside original silhouette. A genuinely fully occluded angle may be empty.",
           "occlusion_contract":"Same rotated original geometry, exact retained SVG viewport, opaque non-emissive BSP occluders, final base-alpha clipping"}
    if role:
        replacement={entry["id"]:entry for entry in records}
        night["entries"]=[replacement.get(entry["id"],entry) for entry in retained_night["entries"]]
        assert retained_entries==[entry for entry in night["entries"] if entry["id"] not in selected]
        assert all(hashlib.sha256((ROOT/path).read_bytes()).hexdigest()==value for path,value in retained_hashes.items())
    (folder/"manifest.json").write_text(json.dumps(night,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    proof=ROOT/("验证记录/round210_文化馆四向" if role else "验证记录/round209_古典夜光资产");proof.mkdir(parents=True,exist_ok=True)
    (proof/("emission_generation.json" if role else "generation.json")).write_text(json.dumps({"passed":True,"building_entries":len(buildings),"building_files":len(before)-1,
        "original_hashes":before,"after_hashes":after,"emission_entries":evidence,
        "retained_night_entries":len(retained_entries),"retained_night_hashes":retained_hashes,
        "command":"python tools/build_refined_valley_art.py --emission-only"+(" --emission-role "+role if role else ""),
        "scope":"Exact original aperture match, full BSP occlusion and independent nearest-triangle checks at bright texels. Original main manifest and 256 building files remain unchanged."},ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    _night_sheet(buildings,records,proof)
    print("EMISSION_ONLY",len(buildings),"masks / 256 building files + main manifest unchanged during emission bake / PASS",flush=True)


def _night_sheet(buildings,records,proof):
    sheet=Image.new("RGB",(1440,math.ceil(len(buildings)/4)*245+50),"#4D626E");draw=ImageDraw.Draw(sheet)
    draw.text((20,15),"CLASSICAL NIGHT / original four facades / sparse doorway and one visible original recess",fill="#F4E3BF")
    for index,(base,mask) in enumerate(zip(buildings,records)):
        x=(index%4)*360;y=index//4*245+50
        original=np.asarray(Image.open(ROOT/base["texture"]).convert("RGBA"),dtype=float)/255
        emission=np.asarray(Image.open(ROOT/mask["emission_texture"]).convert("RGBA"),dtype=float)/255
        rgb=np.clip(original[:,:,:3]*np.array([.48,.61,.73])+emission[:,:,:3]*emission[:,:,3:4],0,1)
        image=Image.fromarray(np.rint(np.concatenate((rgb,original[:,:,3:4]),axis=-1)*255).astype(np.uint8))
        scale=28*math.sqrt(2)*base["plot_span"]/max(base["model_bounds"]["size"][0],base["model_bounds"]["size"][2])/base["pixels_per_world"]*4.5
        image=image.resize((round(image.width*scale),round(image.height*scale)),Image.Resampling.LANCZOS)
        sheet.paste(image,(x+180-image.width//2,y+24),image)
        draw.text((x+18,y+188),base["id"].replace("refined_",""),fill="#F4E3BF")
        draw.text((x+18,y+208),f'{mask["visible_feature_count"]} visible / {mask["visible_emission_fraction"]:.3%} sparse mask',fill="#D4D1B5")
    sheet.save(proof/"四向夜光接触表.png")


if __name__=="__main__": main()
