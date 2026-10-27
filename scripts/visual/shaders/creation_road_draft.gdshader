shader_type spatial;
render_mode blend_mix, depth_draw_opaque, cull_disabled, diffuse_burley, specular_disabled;
uniform sampler2D draft_field : filter_linear, repeat_disable;
uniform vec4 draft_world_rect=vec4(-48.,-48.,96.,96.);
uniform bool paved=false;
uniform float surface_pattern=0.0;
varying vec2 world_at;
#include "res://scripts/visual/shaders/creation_path_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_promenade_pattern.gdshaderinc"
#include "res://scripts/visual/shaders/creation_road_paving.gdshaderinc"
void vertex() { world_at=(MODEL_MATRIX*vec4(VERTEX,1.)).xz; }
void fragment() {
	float mask=texture(draft_field,(world_at-draft_world_rect.xy)/draft_world_rect.zw).r;
	ALBEDO=paving_sample(world_at,surface_pattern,paved ? promenade_color(world_at) : path_color(world_at)).rgb;
	ROUGHNESS=1.;
	ALPHA=smoothstep(.05,.90,mask);
}
