shader_type spatial;
render_mode diffuse_burley, specular_disabled, cull_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
varying vec3 world_at;
varying flat vec4 edge_a;
varying flat vec4 edge_b;
varying flat vec4 edge_c;
#include "res://scripts/visual/shaders/creation_path_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_era_road.gdshaderinc"
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_meadow_contact.gdshaderinc"
#include "res://scripts/visual/shaders/creation_window_bounce.gdshaderinc"
void vertex() {
	world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	edge_a=vec4(UV,UV2);edge_b=CUSTOM0;edge_c=CUSTOM1;
}
float edge_distance(vec2 at,vec4 edge) {
	vec2 delta=edge.zw-edge.xy;
	float t=clamp(dot(at-edge.xy,delta)/max(dot(delta,delta),.00000001),0.,1.);
	return length(at-edge.xy-delta*t);
}
void fragment() {
	EMISSION=window_ground_bounce(world_at.xz);
	// Evaluate metric distance at the pixel. Interpolated endpoint distances
	// form green wedges on the long triangles around overlapping curved caps.
	float distance=min(edge_distance(world_at.xz,edge_a),min(edge_distance(world_at.xz,edge_b),edge_distance(world_at.xz,edge_c)));
	float across = clamp(distance/.16,0.0,1.0);
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
	vec3 normal = safe_normalize(mix(meadow_normal(world_at.xz),vec3(0.0,1.0,0.0),reveal));
	NORMAL = safe_normalize((VIEW_MATRIX*vec4(normal,0.0)).xyz);
	ROUGHNESS = 1.0;
}
