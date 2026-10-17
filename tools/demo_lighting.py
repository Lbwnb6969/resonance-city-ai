"""Offline geometry lighting shared by the Demo and its two review scenes.

Retained GLBs are read-only. Main sprites keep the original indexed silhouette;
ground masks have their own crops but share the exact model ground anchor.
"""
from pathlib import Path
import hashlib
import json
import math
import struct
from functools import lru_cache

import numpy as np
from PIL import Image, ImageDraw, ImageFilter

ROOT = Path(__file__).resolve().parents[1]


@lru_cache(maxsize=1)
def config():
    return json.loads((ROOT / '数据/spec_values.json').read_text(encoding='utf-8'))['lighting']


def project(points):
    p = np.asarray(points, dtype=np.float64)
    return np.stack(((p[..., 0]-p[..., 2])/math.sqrt(2),
                     (p[..., 0]+p[..., 2])/math.sqrt(2)*.5-p[..., 1]*math.sqrt(3)/2), axis=-1)


def ppu(entry):
    if 'pixels_per_world' in entry:
        return float(entry['pixels_per_world'])
    x, y, z = entry['model_bounds']['size']
    horizontal = (x+z)/math.sqrt(2)
    span = max(horizontal, y*math.sqrt(3)/2+horizontal*.5)*1.1
    return 2048*2048/(span*max(entry['image_bounds']['crop'][2:]))


def glb_faces(path):
    raw = path.read_bytes()
    magic, version, size = struct.unpack_from('<III', raw)
    assert magic == 0x46546C67 and version == 2 and size == len(raw)
    chunks = {}; at = 12
    while at < size:
        length, kind = struct.unpack_from('<II', raw, at)
        chunks[kind] = raw[at+8:at+8+length]; at += 8+length
    doc = json.loads(chunks[0x4E4F534A]); binary = chunks[0x004E4942]
    types = {5121:'u1', 5123:'<u2', 5125:'<u4', 5126:'<f4'}
    widths = {'SCALAR':1, 'VEC2':2, 'VEC3':3, 'VEC4':4}

    def accessor(index):
        a = doc['accessors'][index]; b = doc['bufferViews'][a['bufferView']]
        assert b.get('buffer', 0) == 0 and 'sparse' not in a
        dtype = np.dtype(types[a['componentType']]); width = widths[a['type']]
        return np.ndarray((a['count'], width), dtype=dtype, buffer=binary,
                          offset=b.get('byteOffset', 0)+a.get('byteOffset', 0),
                          strides=(b.get('byteStride', width*dtype.itemsize), dtype.itemsize)).copy()

    result = []
    def visit(index, parent):
        node = doc['nodes'][index]
        if 'matrix' in node:
            local = np.asarray(node['matrix']).reshape(4, 4).T
        else:
            x,y,z,w = node.get('rotation', [0,0,0,1])
            rotation = np.array([[1-2*(y*y+z*z),2*(x*y-z*w),2*(x*z+y*w)],
                                 [2*(x*y+z*w),1-2*(x*x+z*z),2*(y*z-x*w)],
                                 [2*(x*z-y*w),2*(y*z+x*w),1-2*(x*x+y*y)]])
            local = np.eye(4); local[:3,:3] = rotation @ np.diag(node.get('scale',[1,1,1]))
            local[:3,3] = node.get('translation',[0,0,0])
        transform = parent @ local
        if 'mesh' in node:
            for part in doc['meshes'][node['mesh']]['primitives']:
                assert part.get('mode', 4) == 4
                position = accessor(part['attributes']['POSITION'])
                points = np.c_[position, np.ones(len(position))] @ transform.T
                normal = accessor(part['attributes']['NORMAL']) @ np.linalg.inv(transform[:3,:3])
                indices = accessor(part['indices']).reshape(-1,3)
                for ids in indices:
                    n = normal[ids].mean(axis=0); n /= max(np.linalg.norm(n), 1e-12)
                    result.append((points[ids,:3], n))
        for child in node.get('children',[]):
            visit(child, transform)
    for index in doc['scenes'][doc.get('scene',0)]['nodes']:
        visit(index, np.eye(4))
    assert result
    return result


def face_normal(vertices):
    v = np.asarray(vertices, dtype=np.float64)
    normal = np.zeros(3)
    for index in range(1,len(v)-1):
        normal += np.cross(v[index]-v[0], v[index+1]-v[0])
    normal /= max(np.linalg.norm(normal),1e-12)
    if normal @ [.612372, .5, .612372] < 0:
        normal = -normal
    return normal


def face_weights(normal):
    c = config(); angle = math.radians(c['sun_west_south_degrees'])
    light = np.array([-math.cos(angle),0,math.sin(angle)])
    vertical = np.clip(1-np.asarray(normal)[...,1],0,1)
    alignment = np.clip((np.asarray(normal) @ light+math.cos(angle)) /
                        (math.sin(angle)+math.cos(angle)),0,1)
    return vertical, alignment


def to_oklab(rgb):
    s = np.asarray(rgb)/255
    linear = np.where(s <= .04045,s/12.92,((s+.055)/1.055)**2.4)
    lms = linear @ np.array([[.4122214708,.2119034982,.0883024619],
                             [.5363325363,.6806995451,.2817188376],
                             [.0514459929,.1073969566,.6299787005]])
    return np.cbrt(lms) @ np.array([[.2104542553,1.9779984951,.0259040371],
                                   [.7936177850,-2.4285922050,.7827717662],
                                   [-.0040720468,.4505937099,-.8086757660]])


def from_oklab(lab):
    lms = np.asarray(lab) @ np.array([[1,1,1],
                                    [.3963377774,-.1055613458,-.0894841775],
                                    [.2158037573,-.0638541728,-1.2914855480]])
    linear = lms**3 @ np.array([[4.0767416621,-1.2684380046,-.0041960863],
                                [-3.3077115913,2.6097574011,-.7034186147],
                                [.2309699292,-.3413193965,1.7076147010]])
    # Chroma of this restrained palette remains inside sRGB; measure clipping in QA.
    srgb = np.where(linear <= .0031308,12.92*linear,
                    1.055*np.maximum(linear,0)**(1/2.4)-.055)
    return np.clip(np.rint(srgb*255),0,255).astype(np.uint8)


def shade_rgb(base, vertical, alignment):
    c = config(); result = to_oklab(base).copy()
    light = c['light_face_reduction']; dark = c['dark_face_reduction']
    result[...,0] -= np.asarray(vertical)*(dark-(dark-light)*np.asarray(alignment))
    cold = to_oklab(np.array(tuple(bytes.fromhex(c['cold_tint'][1:]))))
    warm = to_oklab(np.array(tuple(bytes.fromhex(c['warm_tint'][1:]))))
    amount = np.asarray(vertical)*((1-np.asarray(alignment))*c['cold_mix']+np.asarray(alignment)*c['warm_mix'])
    denominator = (1-np.asarray(alignment))*c['cold_mix']+np.asarray(alignment)*c['warm_mix']
    for channel in (1,2):
        target = ((1-np.asarray(alignment))*c['cold_mix']*cold[channel]+
                   np.asarray(alignment)*c['warm_mix']*warm[channel])/np.maximum(denominator,1e-8)
        result[...,channel] += amount*(target-result[...,channel])
    return from_oklab(result)


def shade_hex(color, vertices, base_map=None):
    base = (base_map or {}).get(color,color)
    rgb = np.array(tuple(bytes.fromhex(base[1:])))
    return '#'+shade_rgb(rgb,*face_weights(face_normal(vertices))).tobytes().hex().upper()


def relight_indexed(entry, palette, faces):
    source = np.array(Image.open(ROOT/entry['texture']).convert('RGBA'))
    indexed = np.array(Image.open(ROOT/entry['indexed_master']).convert('RGBA'))
    assert source.shape == indexed.shape
    height,width = source.shape[:2]
    depth = np.full((height,width),-np.inf,dtype=np.float32)
    weights = np.zeros((height,width,2),dtype=np.float32)
    anchor = np.asarray(entry['model_bounds']['position'],dtype=float)
    anchor[[0,2]] += np.asarray(entry['model_bounds']['size'])[[0,2]]/2
    for vertices,normal in faces:
        triangle = project(vertices-anchor)*ppu(entry)+np.asarray(entry['origin'])
        lo = np.maximum(np.floor(triangle.min(axis=0)).astype(int),0)
        hi = np.minimum(np.ceil(triangle.max(axis=0)).astype(int),[width,height])
        if np.any(hi <= lo): continue
        xx = np.arange(lo[0],hi[0])[None,:]+.5; yy=np.arange(lo[1],hi[1])[:,None]+.5
        (ax,ay),(bx,by),(cx,cy) = triangle
        denominator = (by-cy)*(ax-cx)+(cx-bx)*(ay-cy)
        if abs(denominator)<1e-8: continue
        a=((by-cy)*(xx-cx)+(cx-bx)*(yy-cy))/denominator
        b=((cy-ay)*(xx-cx)+(ax-cx)*(yy-cy))/denominator; z=1-a-b
        distance = np.asarray(vertices) @ [.612372,.5,.612372]
        value=a*distance[0]+b*distance[1]+z*distance[2]
        region=depth[lo[1]:hi[1],lo[0]:hi[0]]
        mask=(a>=-1e-7)&(b>=-1e-7)&(z>=-1e-7)&(value>=region-1e-6)
        region[mask]=value[mask]
        weights[lo[1]:hi[1],lo[0]:hi[0]][mask]=face_weights(normal)
    visible=source[...,3]>0
    # GPU nearest-neighbor crops can leave a one-pixel boundary unclassified.
    missing=visible & ~np.isfinite(depth)
    coverage=1-float(np.count_nonzero(missing))/max(np.count_nonzero(visible),1)
    assert coverage > .985,(entry['id'],coverage)
    if np.any(missing):
        for channel in (0,1):
            encoded=Image.fromarray(np.rint(weights[...,channel]*255).astype(np.uint8))
            expanded=np.asarray(encoded.filter(ImageFilter.MaxFilter(3)),dtype=float)/255
            weights[...,channel][missing]=expanded[missing]
    slots=np.clip(np.rint((indexed[...,0].astype(float)-8)/10),0,23).astype(np.int32)
    base=np.asarray([tuple(bytes.fromhex(c[1:])) for c in palette],dtype=np.uint8)[slots]
    source[...,:3]=shade_rgb(base,weights[...,0],weights[...,1])
    source[~visible,:3]=0
    return Image.fromarray(source), {'normal_coverage':coverage,'visible_pixels':int(np.count_nonzero(visible))}


def hull(points):
    points=sorted(set(tuple(p) for p in np.asarray(points)))
    def cross(a,b,c): return (b[0]-a[0])*(c[1]-a[1])-(b[1]-a[1])*(c[0]-a[0])
    lower=[]; upper=[]
    for p in points:
        while len(lower)>=2 and cross(lower[-2],lower[-1],p)<=0: lower.pop()
        lower.append(p)
    for p in reversed(points):
        while len(upper)>=2 and cross(upper[-2],upper[-1],p)<=0: upper.pop()
        upper.append(p)
    return lower[:-1]+upper[:-1]


def masks(entry, faces, runtime, production):
    c=config(); vertices=[np.asarray(v,dtype=float) for v,_ in faces]
    all_vertices=np.concatenate(vertices)
    origin=np.asarray(entry['model_bounds']['position'],dtype=float)
    origin[[0,2]]+=np.asarray(entry['model_bounds']['size'])[[0,2]]/2
    if entry['category']=='historical_building_candidate': origin=np.zeros(3)
    relative=[v-origin for v in vertices]
    angle=math.radians(c['sun_west_south_degrees'])
    shift=np.array([math.cos(angle),0,-math.sin(angle)])/math.tan(math.radians(c['sun_height_degrees']))
    projected=[]
    for polygon in relative:
        ground=polygon.copy(); ground+=ground[:,1,None]*shift; ground[:,1]=0
        projected.append(project(ground))
    # Actual bottom vertices define contact, not the rectangular PNG bounds.
    base=all_vertices[all_vertices[:,1]<=all_vertices[:,1].min()+.02*entry['model_bounds']['size'][1]+.001]
    base=(base-origin).copy(); base[:,1]=0
    footprint=hull(project(base)); assert len(footprint)>=3,entry['id']
    max_axis=max(entry['model_bounds']['size'][0],entry['model_bounds']['size'][2])
    default_world_pixels=config()['default_half_width']*math.sqrt(2)*float(entry.get('plot_span',c['default_plot_coverage']))/max_axis
    if entry['id'].startswith(('classical_','historic_')):
        layout=json.loads((ROOT/'资源/古典建筑候选/layout.json').read_text(encoding='utf8'))
        placement=next(p for p in layout['placements'] if p['id']==entry['id'])
        default_world_pixels=layout['half_width']*math.sqrt(2)*placement['span']/max_axis
    contact_radius=c['contact_expand_px']/default_world_pixels
    feather=c['contact_feather_px']/default_world_pixels
    shadow_extent=np.ptp(np.concatenate(projected),axis=0).max()
    contact_extent=np.ptp(np.asarray(footprint),axis=0).max()+2*(contact_radius+3*feather)
    pixels_per_world=min(ppu(entry),c['mask_long_edge']/max(shadow_extent,contact_extent))
    tint=tuple(bytes.fromhex(c['shadow_color'][1:]))
    for kind,polygons,pad in [('shadow',projected,2/pixels_per_world),('contact',[np.asarray(footprint)],contact_radius+3*feather)]:
        points=np.concatenate(polygons)
        lo=np.floor((points.min(axis=0)-pad)*pixels_per_world)
        hi=np.ceil((points.max(axis=0)+pad)*pixels_per_world)
        image=Image.new('L',tuple((hi-lo).astype(int))); draw=ImageDraw.Draw(image)
        for polygon in polygons:
            coords=[tuple(p*pixels_per_world-lo) for p in polygon]
            draw.polygon(coords,fill=255)
            if kind=='contact':
                radius=contact_radius*pixels_per_world
                draw.line(coords+[coords[0]],fill=255,width=max(1,round(2*radius)))
                for x,y in coords: draw.ellipse((x-radius,y-radius,x+radius,y+radius),fill=255)
        if kind=='contact': image=image.filter(ImageFilter.GaussianBlur(float(feather*pixels_per_world)))
        rgba=np.zeros((image.height,image.width,4),dtype=np.uint8)
        rgba[...,:3]=tint; rgba[...,3]=np.asarray(image); rgba[rgba[...,3]==0,:3]=0
        name=f"阴影/{entry['id']}_{kind}.png"
        for folder in (runtime,production):
            (folder/'阴影').mkdir(parents=True,exist_ok=True)
            Image.fromarray(rgba).save(folder/name)
        entry[f'{kind}_texture']=(runtime/name).relative_to(ROOT).as_posix()
        entry[f'{kind}_origin']=(-lo).tolist()
        entry[f'{kind}_pixels_per_world']=pixels_per_world
        entry[f'{kind}_sha256']=hashlib.sha256((runtime/name).read_bytes()).hexdigest()
    entry['pixels_per_world']=ppu(entry)
    direction=project(np.array([shift[0],0,shift[2]]))
    entry['lighting']={'sun_screen_shadow_degrees':math.degrees(math.atan2(direction[1],direction[0])),
                       'ground_anchor_world':origin.tolist(),'projection':'actual_geometry_to_ground',
                       'contact_footprint':footprint,'contact_reference_world_pixels':default_world_pixels,
                       'stage':'UI-006'}
    return entry
