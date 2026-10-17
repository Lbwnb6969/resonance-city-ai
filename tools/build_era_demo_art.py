"""Original era I/II ordinary buildings, using the established SVG/light baker."""
from pathlib import Path
import json
import math
import build_classical_svg as b

ROOT = Path(__file__).resolve().parents[1]
b.RUNTIME = ROOT / '资源/时代城市'
b.PRODUCTION = ROOT / '资产/03_入库/时代城市'


def dwelling(era):
    out = []
    b.box(out, (0, .025, 0), (1.25, .05, 1.18), b.STONE)
    if era == 1:
        # Open Roman courtyard, with a low tiled roof on each wing.
        for x in [-.43, .43]:
            b.box(out, (x, .28, 0), (.31, .5, .94))
            b.pediment(out, .38, 1.04, .54, .13, cx=x)
        b.box(out, (0, .28, -.38), (.74, .5, .21))
        b.pediment(out, .8, .27, .54, .10, cz=-.38)
        for x in [-.43, .43]:
            b.arch(out, x, .05, .471, .13, .26, '#BCA78F')
        b.box(out, (0, .07, .03), (.38, .03, .37), b.STONE)
    else:
        b.box(out, (0, .47, 0), (.94, .88, .94))
        b.pediment(out, 1.08, 1.08, .91, .40,
                   colors=['#AEBCC7', '#8896AA', '#C5CBD2'])
        for x in [-.45, 0, .45]:
            b.box(out, (x, .48, .476), (.042, .85, .016), ['#B89B82']*3)
        for y in [.08, .45, .85]:
            b.box(out, (0, y, .478), (.94, .035, .016), ['#B89B82']*3)
        b.arch(out, 0, .05, .489, .18, .33, '#BCA78F')
        for x in [-.28, .28]:
            b.arch(out, x, .55, .489, .15, .22, '#AEC1C6')
        b.box(out, (.30, 1.04, -.20), (.14, .34, .14), b.STONE)
    return out


def market(era):
    out = []
    b.box(out, (0, .035, 0), (1.40, .07, 1.14), b.STONE)
    b.box(out, (0, .33, -.24), (1.10, .52, .45))
    if era == 1:
        for x in [-.51, -.17, .17, .51]:
            b.column(out, x, .39, .07, .53, .042)
        b.box(out, (0, .63, .14), (1.26, .08, .84), b.STONE)
        b.pediment(out, 1.34, .93, .67, .17)
    else:
        b.pediment(out, 1.22, .66, .61, .29,
                   colors=['#AEBCC7', '#8896AA', '#C5CBD2'], cz=-.20)
        for x in [-.40, .40]:
            b.box(out, (x, .29, .38), (.035, .45, .035), ['#B89B82']*3)
        b.face(out, [(-.56,.54,.04),(.56,.54,.04),(.56,.42,.62),(-.56,.42,.62)], '#B8C4B5')
    b.box(out, (0, .19, .36), (.93, .20, .24), b.STONE)
    for x in [-.30, 0, .30]:
        b.box(out, (x, .315, .37), (.15, .05, .14), ['#D3B898']*3)
    return out


def workshop(era):
    out = []
    b.box(out, (0, .035, 0), (1.22, .07, 1.18), b.STONE)
    b.box(out, (-.18, .29, -.08), (.70, .50, .82), b.STONE)
    b.pediment(out, .82, .94, .54, .21 if era == 1 else .35, cx=-.18, cz=-.08)
    b.box(out, (.14, .69, -.21), (.18, .60, .19), b.STONE)
    b.arch(out, -.18, .07, .338, .27, .33, '#A6A19B')
    if era == 1:
        # Clay kiln: faceted dome and a separate pot firing chamber.
        for i in range(12):
            a, c = i*math.tau/12, (i+1)*math.tau/12
            b.face(out, [(.35+.25*math.cos(a),.07,.20+.25*math.sin(a)),
                         (.35+.25*math.cos(c),.07,.20+.25*math.sin(c)),
                         (.35+.12*math.cos(c),.48,.20+.12*math.sin(c)),
                         (.35+.12*math.cos(a),.48,.20+.12*math.sin(a))], '#C7AC95')
    else:
        # Waterwheel lies in the visible z plane; spokes distinguish the mill.
        b.circle_front(out, .25, .34, .50, .28, '#B89B82')
        b.circle_front(out, .25, .34, .504, .20, '#C9B7A3')
        for i in range(8):
            a = i*math.tau/8
            b.face(out, [(.25,.34,.51),(.25+.24*math.cos(a),.34+.24*math.sin(a),.51),
                         (.25+.24*math.cos(a+.13),.34+.24*math.sin(a+.13),.51)], '#A98E77')
        b.circle_front(out, .25, .34, .514, .045, '#917D6D')
    return out


def main():
    entries = []
    makers = {'residential': dwelling, 'commercial': market, 'industrial': workshop}
    labels = {1: ['庭院住宅', '石柱市场', '陶窑工坊'], 2: ['木骨住宅', '行会市场', '水车磨坊']}
    for era in [1, 2]:
        for index, (kind, maker) in enumerate(makers.items()):
            ident = f'era{era}_{kind}_01'
            entry = b.build(ident, labels[era][index], maker(era))
            entry.update(category=kind, era=era, plot_span=.90,
                         texture=f'资源/时代城市/SVG/{ident}.svg',
                         source='tools/build_era_demo_art.py; original project geometry',
                         availability='era_demo_runtime; human_art_review_pending')
            entries.append(entry)
    manifest = {'schema_version': 1, 'entries': entries, 'human_art': 'PENDING',
                'purpose': 'Era I/II ordinary buildings, no landmark impersonation'}
    for base in [b.RUNTIME, b.PRODUCTION]:
        (base/'manifest.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print('ERA_ART: 6 original buildings with existing left-upper light/contact/cast masks')


if __name__ == '__main__':
    main()
