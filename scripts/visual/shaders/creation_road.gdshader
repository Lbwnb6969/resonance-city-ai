shader_type spatial;
render_mode diffuse_burley, specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
varying vec3 world_at;
varying vec2 bridge_paving;
varying float surface_pattern;
#include "res://scripts/visual/shaders/creation_path_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_era_road.gdshaderinc"
#include "res://scripts/visual/shaders/creation_promenade_pattern.gdshaderinc"
#include "res://scripts/visual/shaders/creation_road_paving.gdshaderinc"
vec3 bridge_timber(vec2 at) {
	float board=floor(at.x/.35);
	float joint=min(fract(at.x/.35),1.0-fract(at.x/.35))*.35;
	float aa=max(fwidth(joint),.0005);
	float face=smoothstep(.003-aa,.009+aa,joint);
	float variation=path_hash(vec2(board,17.0));
	vec3 wood=mix(vec3(.56,.46,.32),vec3(.66,.56,.40),variation);
	float footprint=max(length(dFdx(at)),length(dFdy(at)));
	float detail=1.0-smoothstep(.012,.045,footprint);
	float grain=path_noise(vec2(at.x*35.0,at.y*1.8));
	wood*=1.0+(grain-.5)*.11*detail;
	return mix(wood*.70,wood,face);
}
#include "res://scripts/visual/shaders/creation_meadow_contact.gdshaderinc"
#include "res://scripts/visual/shaders/creation_window_bounce.gdshaderinc"
void vertex() { world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; bridge_paving = COLOR.rg; surface_pattern=COLOR.b; }
void fragment() {
	EMISSION=window_ground_bounce(world_at.xz);
	NORMAL = safe_normalize(NORMAL);
	vec4 paving=paving_sample(world_at.xz,surface_pattern,path_color(world_at.xz));
	NORMAL=paving_normal(NORMAL,VERTEX,paving.a*(1.0-bridge_paving.x)*(1.0-bridge_paving.y));
	vec3 surface=mix(paving.rgb,bridge_timber(UV),bridge_paving.x);
	surface=mix(surface,promenade_color(world_at.xz),bridge_paving.y);
	ALBEDO = era_road_color(world_at.xz,surface,surface_pattern>.125 ? 0.0 : 1.0);
	ROUGHNESS = 1.0;
}
