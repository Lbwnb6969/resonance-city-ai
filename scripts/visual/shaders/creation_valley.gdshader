shader_type spatial;
render_mode diffuse_burley, specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
varying vec3 world_at;
varying vec3 terrain_normal;
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
void vertex() {
	world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	terrain_normal=safe_normalize(MODEL_NORMAL_MATRIX*NORMAL);
}
void fragment() {
	vec3 grass=shore_ground(world_at.xz,meadow_color(world_at.xz,grass_low.rgb,grass_high.rgb));
	float slope=1.0-clamp(terrain_normal.y,0.0,1.0);
	vec3 stone=mix(vec3(.39,.45,.38),vec3(.57,.58,.46),meadow_noise(world_at.xz*.08));
	vec3 terrain=mix(grass,stone,smoothstep(.28,.72,slope)*.78);
	float haze=smoothstep(66.0,170.0,length(world_at.xz))*.58;
	ALBEDO=mix(terrain,vec3(.60,.70,.65),haze);
	ROUGHNESS=1.0;
}
