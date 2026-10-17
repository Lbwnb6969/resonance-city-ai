"""Three original street-house silhouettes, using the retained geometry/light baker."""
from pathlib import Path
import json
import build_classical_svg as b

ROOT = Path(__file__).resolve().parents[1]
b.RUNTIME = ROOT / '资源/街坊建筑变体'
b.PRODUCTION = ROOT / '资产/03_入库/街坊建筑变体'
EAVE_Y = .56
HALF_X, HALF_Z = .60, .56


def shell():
    out = []
    b.box(out, (0, .025, 0), (1.25, .05, 1.18), b.STONE)
    b.box(out, (0, .29, 0), (1.08, .50, 1.0))
    b.box(out, (0, .55, 0), (1.20, .045, 1.12), b.STONE)
    b.arch(out, -.23, .055, .504, .17, .31, '#BCA78F')
    b.arch(out, .23, .25, .504, .17, .22, '#AEC1C6')
    b.arch(out, -.15, .24, .544, .17, .23, '#AEC1C6', side=True)
    b.arch(out, .23, .24, .544, .17, .23, '#AEC1C6', side=True)
    return out


def terrace():
    out = shell()
    b.box(out, (0, .59, 0), (1.18, .055, 1.10), b.ROOF)
    # A raised, open terrace gives a horizontal silhouette rather than a low gable.
    for x in [-.56, .56]:
        b.box(out, (x, .65, 0), (.07, .11, 1.10), b.STONE)
    for z in [-.515, .515]:
        b.box(out, (0, .65, z), (1.10, .11, .07), b.STONE)
    return out


def gabled():
    out = shell()
    b.pediment(out, 1.20, 1.12, EAVE_Y, .30)
    # The high front triangle and small attic opening read at the city scale.
    b.arch(out, 0, .59, .562, .12, .15, '#A99E8E')
    return out


def hipped():
    out = shell()
    ridge_y, ridge_z = EAVE_Y+.39, .15
    a, c = HALF_X, HALF_Z
    b.face(out, [(-a,EAVE_Y,-c),(-a,EAVE_Y,c),(0,ridge_y,ridge_z),(0,ridge_y,-ridge_z)], b.ROOF[0])
    b.face(out, [(0,ridge_y,-ridge_z),(0,ridge_y,ridge_z),(a,EAVE_Y,c),(a,EAVE_Y,-c)], b.ROOF[1])
    b.face(out, [(-a,EAVE_Y,c),(a,EAVE_Y,c),(0,ridge_y,ridge_z)], b.ROOF[2])
    b.face(out, [(-a,EAVE_Y,-c),(0,ridge_y,-ridge_z),(a,EAVE_Y,-c)], b.ROOF[0])
    b.box(out, (.29, .79, -.22), (.12, .33, .12), b.STONE)
    return out


def main():
    entries = []
    for style, label, maker in [('terrace','平檐露台住宅',terrace),
                                ('gabled','双坡山墙住宅',gabled),
                                ('hipped','四坡烟囱住宅',hipped)]:
        ident = 'valley_house_'+style
        entry = b.build(ident, label, maker())
        entry.update(category='residential', era=1, variant=style,
                     plot_span=.80, texture=f'资源/街坊建筑变体/SVG/{ident}.svg',
                     source='tools/build_valley_building_variants.py; original project geometry',
                     roof_eave_y=EAVE_Y, roof_half_extents=[HALF_X,HALF_Z],
                     roof_style=style, availability='valley_runtime; human_art_review_pending')
        entries.append(entry)
    manifest = {'schema_version':1, 'entries':entries, 'human_art':'PENDING',
                'purpose':'Stable per-house silhouettes; real shared-wall eaves only'}
    for base in [b.RUNTIME,b.PRODUCTION]:
        (base/'manifest.json').write_text(json.dumps(manifest,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print('VALLEY_VARIANTS: terrace / gabled / hipped; retained physical cast/contact masks')


if __name__ == '__main__':
    main()
