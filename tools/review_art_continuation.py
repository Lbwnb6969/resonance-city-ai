"""Catalogue received art proposals and current material-chain blockers, without applying patches."""
from pathlib import Path
import argparse
import hashlib
import json
import re

ROOT=Path(__file__).resolve().parents[1]
SOURCES=['文档/来源/20261030_Gemini_美术质感光影_'+s+'.txt' for s in ['续稿','配套补丁']]
DEST='数据/美术候选/Gemini质感光影续稿_v1.json'


def sha(raw):return hashlib.sha256(raw).hexdigest()


def analyze():
    raw=[(ROOT/p).read_bytes() for p in SOURCES]
    text,patch=[r.decode('utf-8-sig') for r in raw]
    snippets={
        'environment':patch[patch.index('extends RefCounted'):patch.index('补丁 2：')].rstrip(),
        'wall_material_source':patch[patch.index('extends RefCounted',patch.index('补丁 2：')):patch.index('(其余 apply')].rstrip(),
        'window_glass_helper':patch[patch.index('func _window_glass_material'):].rstrip(),
        'folded_grass_rounded':text[text.index('    static func _rounded'):text.index('3.  预期视觉与性能变化')].rstrip(),
    }
    proposals=[]
    for line in text.splitlines():
        if line.startswith('| **'):
            cells=[s.strip() for s in line.split('|')[1:-1]]
            if len(cells)!=6:raise ValueError('Unexpected parameter table row')
            proposals.append(dict(zip(['module','file','parameter','claimed_old','proposed_start','claimed_effect'],cells)))
    targets=['scripts/visual/city_creation_environment.gd','scripts/visual/city_creation_wall_material.gd',
             'scripts/visual/city_creation_renderer.gd','scripts/visual/city_creation_mesh_batcher.gd',
             'scripts/visual/city_creation_house_colors.gd','scripts/visual/city_creation_meadow.gd',
             'scripts/visual/city_creation_meadow_fold.gd','scripts/visual/shaders/creation_wall.gdshader',
             'scripts/visual/shaders/creation_foliage.gdshader','scripts/visual/shaders/creation_water.gdshader',
             'scripts/visual/shaders/creation_lawn.gdshader','scripts/visual/shaders/creation_joined_roof.gdshader',
             'scripts/visual/shaders/creation_promenade.gdshader']
    target_raw={p:(ROOT/p).read_bytes() for p in targets}
    current={p:r.decode('utf-8-sig') for p,r in target_raw.items()}
    sources=[dict(path=p,bytes=len(r),sha256=sha(r)) for p,r in zip(SOURCES,raw)]
    candidate=dict(kind='art_continuation_review_catalog',draft_format=1,runtime_ready=False,
        sources=sources,review='文档/59_美术质感光影续稿审阅与施工映射.md',
        received_scope='P2 expected-visual continuation, P3, parameter table and three companion patches; earlier art manuscript not received',
        source_snippets=snippets,source_parameter_rows=proposals,
        disposition={'environment':'A/B starting parameters; no measured visual result',
                     'wall_material_source':'Blocked until shader, physical material fields, routing, cache/profile and recoloring all agree',
                     'window_glass_helper':'Rejected as direct patch: routes glass through slate wall shader',
                     'folded_grass_rounded':'Geometry experiment only; topology, normals, AABB, mask and LOD evidence required'},
        unresolved=['earlier main manuscript and referenced full shaders/facade patch',
                    'renderer-version and actual viewport capability evidence',
                    'fixed-scene day/dusk/night and low-angle A/B',
                    'resource production specifications and actual frame/geometry measurements'])
    fold=current['scripts/visual/city_creation_meadow_fold.gd']
    # Count emitted triangles from these exact loop structures, not a viewport estimate.
    count_trace=all(s in fold for s in ['for i in range(7):','for j in range(8):','[a,b,a+8,b,b+8,a+8]','[56+j,56+(j+1)%8,64,j,65,(j+1)%8]','for leaf in range(3):'])
    report=dict(sources=sources,parameter_rows=len(proposals),snippet_keys=list(snippets),
        snapshot_target_hashes={p:sha(r) for p,r in target_raw.items()},
        current_wall_custom_light=True if 'void light()' in current['scripts/visual/shaders/creation_wall.gdshader'] else False,
        current_wall_writes_specular_light='SPECULAR_LIGHT' in current['scripts/visual/shaders/creation_wall.gdshader'],
        glass_patch_marks_slate_wall='WallMaterial.Kind.SLATE' in snippets['window_glass_helper'],
        glass_patch_defines_call_site='_window_glass_material(' in snippets['environment']+snippets['wall_material_source'],
        current_renderer_has_new_glass_helper='func _window_glass_material' in current['scripts/visual/city_creation_renderer.gd'],
        current_foliage_multiplies_albedo_in_custom_light='ALBEDO*wrapped' in current['scripts/visual/shaders/creation_foliage.gdshader'],
        water_depth_is_horizontal='horizontal distance into water' in current['scripts/visual/shaders/creation_water.gdshader'],
        current_water_uses_screen_texture='hint_screen_texture' in current['scripts/visual/shaders/creation_water.gdshader'],
        triangle_count_source_trace_matches=count_trace,
        triangle_counts=dict(old_per_leaf=7*8*2+8*2,old_seven_leaves=7*(7*8*2+8*2),base=3*4,
                             proposed_emitted_per_leaf=4*4,proposed_tip_degenerate_per_leaf=2,
                             proposed_seven_leaves_with_base=7*4*4+3*4,
                             proposed_seven_leaves_without_degenerate_with_base=7*(4*4-2)+3*4),
        runtime_files_modified=False,godot_run=False,visual_results_verified=False,performance_gain_measured=False)
    report['catalogue_ok']=len(proposals)==15 and len(snippets)==4 and count_trace
    return candidate,report


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--write-candidate',action='store_true');ap.add_argument('--report',type=Path,required=True)
    args=ap.parse_args();candidate,report=analyze();target=ROOT/DEST
    if args.write_candidate:
        target.parent.mkdir(parents=True,exist_ok=True)
        with target.open('x',encoding='utf-8',newline='\n') as f:
            json.dump(candidate,f,ensure_ascii=False,indent=2);f.write('\n')
    elif json.loads(target.read_text(encoding='utf-8'))!=candidate:
        report['catalogue_ok']=False;report['candidate_mismatch']=True
    args.report.parent.mkdir(parents=True,exist_ok=True)
    args.report.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(report,ensure_ascii=False))
    raise SystemExit(0 if report['catalogue_ok'] else 1)


if __name__=='__main__':main()
