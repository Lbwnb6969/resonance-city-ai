shader_type spatial;
render_mode diffuse_burley, specular_disabled, cull_disabled;
varying vec3 world_at;
#include "res://scripts/visual/shaders/creation_path_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_era_road.gdshaderinc"
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
void vertex() { world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; }
void fragment() {
	float across = clamp(UV.x,0.0,1.0);
	float drift = (path_noise(world_at.xz*17.0)-0.5)*0.32*sin(across*3.14159265);
	float reveal = smoothstep(0.0,1.0,clamp(across+drift,0.0,1.0));
	// Bridge decks keep their own material right to the parapet. The same
	// analytic water-derived visual field is shared with the natural shore.
	float dry_land = smoothstep(0.08,0.60,shore_distance(world_at.xz));
	reveal = mix(1.0,reveal,dry_land);
	vec3 grass = shore_ground(world_at.xz,meadow_color(world_at.xz,grass_low.rgb,grass_high.rgb));
	vec3 soil = path_color(world_at.xz)*vec3(0.91,0.94,0.91);
	vec3 path = era_road_color(world_at.xz,mix(soil,path_color(world_at.xz),smoothstep(0.18,0.85,across)),1.0);
	ALBEDO = mix(grass,path,reveal);
	vec3 normal = normalize(mix(meadow_normal(world_at.xz),vec3(0.0,1.0,0.0),reveal));
	NORMAL = normalize((VIEW_MATRIX*vec4(normal,0.0)).xyz);
	ROUGHNESS = 1.0;
}
