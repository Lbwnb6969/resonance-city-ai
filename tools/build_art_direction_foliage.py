"""Editable, project-authored tree candidates for the playable art study.

Only this candidate directory is written. All trees share the Demo's retained
45 degree / 30 degree projection and a real trunk foot at world (0, 0, 0).
"""
from pathlib import Path
import hashlib
import itertools
import json
import math

import numpy as np
from PIL import Image, ImageDraw, ImageFont

import build_classical_svg as b
from demo_lighting import face_normal, masks, shade_hex


ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / '资源/美术候选/植被'
STYLES = {
    'clay': {'label': '陶土团簇', 'tree_ids': []},
    'garden': {'label': '清透园林', 'tree_ids': []},
    'paper': {'label': '纸上折面', 'tree_ids': []},
}
TRUNK = '#978674'
PREVIEW_INK = '#485C5A'


def ring_volume(out, rings, color, count=10, rotation=0):
    """A closed crown or trunk; ring tuples are (height, x_radius, z_radius)."""
    points = [[(rx * math.cos(rotation + i * math.tau / count), y,
                rz * math.sin(rotation + i * math.tau / count))
               for i in range(count)] for y, rx, rz in rings]
    b.face(out, list(reversed(points[0])), color)
    for lower, upper in zip(points, points[1:]):
        for i in range(count):
            j = (i + 1) % count
            b.face(out, [lower[i], lower[j], upper[j], upper[i]], color)
    b.face(out, points[-1], color)


def ellipsoid(out, center, radii, color, count=10, bands=5):
    cx, cy, cz = center
    rx, ry, rz = radii
    local = []
    rings = []
    for j in range(bands + 1):
        angle = -math.pi / 2 + j * math.pi / bands
        # Tiny end rings retain valid polygons without altering the silhouette.
        radius = max(.00001, math.cos(angle))
        rings.append((ry * math.sin(angle), rx * radius, rz * radius))
    ring_volume(local, rings, color, count, math.pi / count)
    for depth, vertices, tint in local:
        b.face(out, [(x + cx, y + cy, z + cz) for x, y, z in vertices], tint)


def trunk(out, top, radius=.034):
    ring_volume(out, [(0, radius, radius), (top, radius * .63, radius * .63)],
                TRUNK, 8, math.pi / 8)


def clay_cluster():
    out = []
    trunk(out, .68, .038)
    ellipsoid(out, (-.17, .67, 0), (.25, .27, .29), '#9AA17A')
    ellipsoid(out, (.17, .67, 0), (.25, .27, .29), '#9AA17A')
    ellipsoid(out, (0, .88, 0), (.30, .31, .30), '#AAB28A')
    return out


def clay_umbrella():
    out = []
    trunk(out, .79, .040)
    ellipsoid(out, (0, .92, 0), (.43, .27, .43), '#9DA37C', 12, 5)
    return out


def garden_spindle():
    out = []
    trunk(out, .52, .031)
    ring_volume(out, [(.42, .11, .11), (.56, .26, .26),
                     (.77, .34, .34), (1.02, .27, .27),
                     (1.20, .16, .16), (1.35, .00001, .00001)],
                '#92AFA4', 10, math.pi / 10)
    return out


def garden_layers():
    out = []
    trunk(out, 1.10, .031)
    # Gaps expose the single stem; this is a layered garden tree, not a recolour.
    ellipsoid(out, (0, .65, 0), (.39, .13, .39), '#91ACA0', 12, 4)
    ellipsoid(out, (0, .91, 0), (.29, .12, .29), '#A0BBAE', 12, 4)
    ellipsoid(out, (0, 1.13, 0), (.18, .105, .18), '#B0C8B8', 12, 4)
    return out


def paper_fir():
    out = []
    trunk(out, .65, .035)
    for y, radius, top, tint in [(.39, .40, .85, '#9BAB9C'),
                                  (.70, .31, 1.07, '#AEBDA9'),
                                  (.95, .21, 1.23, '#C0CCB8')]:
        ring_volume(out, [(y, radius, radius), (top, .00001, .00001)],
                    tint, 4, 0)
    return out


def paper_lantern():
    out = []
    trunk(out, .63, .029)
    # Eight large triangular planes read as a folded paper lantern at city scale.
    ring_volume(out, [(.42, .00001, .00001), (.79, .35, .35),
                     (1.25, .00001, .00001)], '#B3BEAB', 4, 0)
    return out


def coordinates(geometry):
    return np.asarray([p for _, vertices, _ in geometry for p in vertices])


def calibrate(geometry, target_width, target_height):
    """Choose plot_span and real vertical proportions for the runtime formula."""
    xyz = coordinates(geometry)
    projected = np.asarray([b.project(p) for p in xyz])
    max_axis = max(np.ptp(xyz[:, 0]), np.ptp(xyz[:, 2]))
    density = target_width / np.ptp(projected[:, 0])
    span = density * max_axis / (28 * math.sqrt(2))
    # Projected vertical height includes both crown height and x/z depth.
    # Solve using actual vertices, rather than treating texture crop as geometry.
    lo, hi = .05, 3.0
    for _ in range(32):
        factor = (lo + hi) / 2
        points = xyz.copy()
        points[:, 1] *= factor
        height = np.ptp(np.asarray([b.project(p) for p in points])[:, 1]) * density
        if height < target_height:
            lo = factor
        else:
            hi = factor
    factor = (lo + hi) / 2
    result = [(depth, [(x, y * factor, z) for x, y, z in vertices], color)
              for depth, vertices, color in geometry]
    return result, span


def build(identifier, label, style, geometry, target_width, target_height):
    geometry, plot_span = calibrate(geometry, target_width, target_height)
    xyz = coordinates(geometry)
    source_faces = [(np.asarray(vertices), face_normal(vertices))
                    for _, vertices, _ in geometry]
    shaded = [(depth, vertices, shade_hex(color, vertices))
              for depth, vertices, color in geometry]
    points = np.asarray([b.project(p) for p in xyz])
    left, top = points.min(axis=0) - .025
    width, height = points.max(axis=0) - (left, top) + .025
    ppu = 2048 / max(width, height)
    w, h = round(width * ppu), round(height * ppu)
    parts = [f'<svg xmlns="http://www.w3.org/2000/svg" width="{w}" height="{h}" '
             f'viewBox="{left:.6f} {top:.6f} {width:.6f} {height:.6f}">',
             f'<title>{label}</title>']
    ordered = b.painter_order(shaded)
    for color, items in itertools.groupby(ordered, key=lambda item: item[2]):
        contours = []
        for _, vertices, _ in items:
            projected = [b.project(p) for p in vertices]
            area = sum(a[0] * c[1] - c[0] * a[1]
                       for a, c in zip(projected, projected[1:] + projected[:1]))
            if area < 0:
                projected.reverse()
            contours.append('M' + ' L'.join(f'{x:.6f},{y:.6f}' for x, y in projected) + ' Z')
        parts.append(f'<path d="{" ".join(contours)}" fill="{color}" fill-rule="nonzero"/>')
    parts.append('</svg>')
    content = '\n'.join(parts) + '\n'
    svg = OUTPUT / 'SVG' / f'{identifier}.svg'
    svg.parent.mkdir(parents=True, exist_ok=True)
    svg.write_text(content, encoding='utf-8', newline='\n')
    bounds_size = np.ptp(xyz, axis=0)
    entry = {
        'id': identifier, 'display_name': label, 'category': 'tree', 'style': style,
        'texture': svg.relative_to(ROOT).as_posix(), 'origin': [-left * ppu, -top * ppu],
        'image_bounds': {'width': w, 'height': h, 'crop': [0, 0, w, h]},
        'pixels_per_world': ppu, 'plot_span': plot_span,
        'model_bounds': {'position': xyz.min(axis=0).tolist(), 'size': bounds_size.tolist()},
        'source': 'tools/build_art_direction_foliage.py; original project geometry',
        'license': 'Project-authored geometry', 'source_url': '',
        'availability': 'art_study_candidate; human_art_review_pending',
        'camera': {'azimuth': 45, 'elevation': 30, 'projection': 'orthogonal'},
        'texture_sha256': hashlib.sha256(content.encode('utf-8')).hexdigest(),
        'runtime_reference': {'half_width': 28, 'public_scale': 1,
                              'visible_size_px': (np.ptp(points, axis=0) *
                                                  28 * math.sqrt(2) * plot_span /
                                                  max(bounds_size[0], bounds_size[2])).tolist()},
    }
    # Both outputs intentionally use the candidate directory; no retained asset
    # or production source is overwritten by this review-only generator.
    masks(entry, source_faces, OUTPUT, OUTPUT)
    STYLES[style]['tree_ids'].append(identifier)
    return entry, ordered


def preview(built):
    """A readable geometry contact sheet; actual Godot screenshots judge style."""
    image = Image.new('RGB', (960, 330), '#ECEBE2')
    draw = ImageDraw.Draw(image)
    font_path = Path('C:/Windows/Fonts/msyh.ttc')
    font = ImageFont.truetype(str(font_path), 18)
    small = ImageFont.truetype(str(font_path), 13)
    draw.text((25, 12), '同一相机 · 6 个树冠轮廓（下方小树为 1×城市尺寸）', font=font, fill=PREVIEW_INK)
    for index, (entry, ordered) in enumerate(built):
        center_x = 80 + index * 160
        size = entry['model_bounds']['size']
        density = 28 * math.sqrt(2) * entry['plot_span'] / max(size[0], size[2])
        for zoom, foot_y in [(4, 207), (1, 276)]:
            for _, vertices, color in ordered:
                points = [(center_x + x * density * zoom, foot_y + y * density * zoom)
                          for x, y in (b.project(p) for p in vertices)]
                draw.polygon(points, fill=color)
            draw.line((center_x - 4, foot_y, center_x + 4, foot_y), fill='#ABABA0')
        label = entry['display_name']
        draw.text((center_x - draw.textlength(label, font=small) / 2, 294),
                  label, font=small, fill=PREVIEW_INK)
    image.save(OUTPUT / '树冠轮廓对照.png')


def validate(entries):
    for entry in entries:
        width, height = entry['runtime_reference']['visible_size_px']
        assert 22 <= width <= 29 and 31 <= height <= 37, (entry['id'], width, height)
        assert np.allclose(entry['lighting']['ground_anchor_world'], [0, 0, 0]), entry['id']
        assert entry['model_bounds']['position'][1] == 0, entry['id']
        assert len(entry['lighting']['contact_footprint']) >= 3, entry['id']
        for kind in ('texture', 'shadow', 'contact'):
            path = entry[kind if kind == 'texture' else kind + '_texture']
            assert hashlib.sha256((ROOT / path).read_bytes()).hexdigest() == entry[kind + '_sha256']
        for kind in ('shadow', 'contact'):
            with Image.open(ROOT / entry[kind + '_texture']) as image:
                minimum, maximum = image.getchannel('A').getextrema()
                # The real two-pixel trunk contact is feathered and need not
                # become opaque; the unblurred cast silhouette must be opaque.
                assert minimum == 0 and maximum > 0, entry['id']
                if kind == 'shadow':
                    assert maximum == 255, entry['id']
    assert {entry['style'] for entry in entries} == {'clay', 'garden', 'paper'}
    assert all(len(style['tree_ids']) == 2 for style in STYLES.values())


def main():
    built = []
    for style, name, label, maker, width, height in [
            ('clay', 'cluster', '陶土 · 团簇榆', clay_cluster, 26, 34),
            ('clay', 'umbrella', '陶土 · 伞冠桂', clay_umbrella, 27, 33),
            ('garden', 'spindle', '园林 · 清透柏', garden_spindle, 24, 36),
            ('garden', 'layers', '园林 · 层叶松', garden_layers, 27, 35),
            ('paper', 'fir', '纸上 · 折纸杉', paper_fir, 24, 35),
            ('paper', 'lantern', '纸上 · 折面桦', paper_lantern, 23, 34)]:
        built.append(build(f'art_tree_{style}_{name}', label, style, maker(), width, height))
    entries = [entry for entry, _ in built]
    validate(entries)
    manifest = {
        'schema_version': 1, 'styles': STYLES, 'entries': entries, 'human_art': 'PENDING',
        'purpose': 'Playable art study; editable geometry and physical ground masks',
        'runtime_scale': '28*sqrt(2)*plot_span/max(model_bounds.size[x,z])/pixels_per_world * public_scale',
        'anchor': 'Real trunk foot (0,0,0); texture and shadow/contact use the same foot',
        'verification': {'entries': 6, 'ground_anchors': 'PASS', 'sha256': 'PASS',
                         'visible_width_px': [22, 29], 'visible_height_px': [31, 37],
                         'physical_masks': 'PASS', 'human_art': 'PENDING'},
    }
    (OUTPUT / 'manifest.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + '\n',
                                        encoding='utf-8', newline='\n')
    preview(built)
    print('ART_FOLIAGE built 6 editable trees; anchors, 1x sizes, physical masks and hashes PASS')
    for entry in entries:
        width, height = entry['runtime_reference']['visible_size_px']
        print(f"{entry['id']}: {width:.1f}x{height:.1f}px; plot_span={entry['plot_span']:.6f}")


if __name__ == '__main__':
    main()
