shader_type spatial;
render_mode cull_disabled, depth_draw_opaque, diffuse_burley, specular_disabled;
uniform float detail = 1.0;
uniform float meadow_time_override = -1.0;
uniform sampler2D road_draft_field : filter_linear, repeat_disable;
uniform bool road_draft_enabled = false;
uniform vec4 road_draft_world_rect = vec4(-48.,-48.,96.,96.);
varying vec3 world_at;
varying vec3 blade_world_normal;
varying float tip;
varying float gust;
varying vec3 clump_tint;
varying vec2 clump_world_at;
varying float species;
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_meadow_contact.gdshaderinc"
#include "res://scripts/visual/shaders/creation_grass2_response.gdshaderinc"
void vertex() {
	world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	tip = clamp(UV.y,0.0,1.0);
	clump_tint = COLOR.rgb;
	clump_world_at = (MODEL_MATRIX*vec4(0.0,0.0,0.0,1.0)).xz;
	species = clamp(INSTANCE_CUSTOM.a,0.0,1.0);
	float edge_height = clamp(INSTANCE_CUSTOM.b,0.0,1.0);
	if (road_draft_enabled) {
		vec2 draft_uv=(world_at.xz-road_draft_world_rect.xy)/road_draft_world_rect.zw;
		edge_height*=1.0-smoothstep(.08,.85,texture(road_draft_field,draft_uv).r);
	}
	// Derived meadow retreats from the same shore as the exposed sand. The
	// authored plants, CPU clumps and terrain stay intact and undo unchanged.
	if (bank_sand_enabled) { edge_height *= smoothstep(.22,.85,shore_distance(world_at.xz)); }
	vec2 wind = normalize(vec2(0.82,0.57));
	float wind_time = meadow_time_override < 0.0 ? TIME : meadow_time_override;
	gust = sin(dot(world_at.xz,wind)*0.48-wind_time*1.15)*0.68
		+ sin(world_at.x*0.73-world_at.z*0.38-wind_time*1.73)*0.32;
	vec3 push = vec3(INSTANCE_CUSTOM.r,0.0,INSTANCE_CUSTOM.g);
	mat3 world_to_local = inverse(mat3(MODEL_MATRIX));
	vec3 local_push = world_to_local*push;
	VERTEX.y *= detail*edge_height*mix(1.0,1.20,species);
	VERTEX.z *= mix(1.0,0.46,species);
	// Mask's .18 parameter reserves 7.56 cm, not 18 cm. Contract the whole
	// footprint at the edge, including its wind, rather than clipping grass roots.
	// Contract the cupped clump beside obstacles, including wind and push,
	// inside the existing .0756m reserved root clearance.
	VERTEX.xz *= sqrt(detail)*mix(0.20,1.0,edge_height);
	VERTEX.xz += local_push.xz*grass2_object_push(edge_height,tip)*0.045*detail;
	// Convert the shared world breeze into each rotated clump's local frame.
	vec3 local_wind = world_to_local*vec3(wind.x,0.0,wind.y);
	VERTEX.xz += local_wind.xz*grass2_wind_displacement(gust*0.09,tip,1.0)*detail*edge_height;
	blade_world_normal = normalize(MODEL_NORMAL_MATRIX*NORMAL);
}
void fragment() {
	float leaf = smoothstep(0.12,0.92,tip)*detail;
	vec3 turf_normal = meadow_normal(world_at.xz);
	vec3 soft_normal = normalize(mix(turf_normal,normalize(blade_world_normal),leaf*0.20)
		+ vec3(0.82,0.0,0.57)*gust*leaf*0.035);
	NORMAL = normalize((VIEW_MATRIX*vec4(soft_normal,0.0)).xyz);
	vec3 ground = meadow_contact_color(world_at.xz,shore_ground(world_at.xz,meadow_color(clump_world_at,grass_low.rgb,grass_high.rgb)));
	vec3 ground_linear=OUTPUT_IS_SRGB ? meadow_srgb_to_linear(ground) : ground;
	// TG's seed tint belongs to the whole clump. Our quarter-strength mapping
	// keeps it stable; wind moves geometry/normals instead of adding green.
	float seed=meadow_hash(clump_world_at*0.71);
	vec3 seed_tint=mix(vec3(1.0),mix(vec3(0.92,0.96,0.90),vec3(1.08,1.03,0.94),seed),0.25);
	vec3 root_tone=ground_linear*vec3(0.80,0.86,0.78);
	vec3 tip_lift=vec3(0.05,0.06,0.01);
	// The authored lift is an sRGB color, not .05 units of linear radiance.
	if (OUTPUT_IS_SRGB) { tip_lift=meadow_srgb_to_linear(tip_lift); }
	vec3 sun_tip_tone=ground_linear*vec3(1.18,1.25,0.92)+tip_lift;
	vec3 blade=mix(root_tone,sun_tip_tone,smoothstep(0.08,0.92,tip))*seed_tint;
	blade*=mix(vec3(1.0),vec3(0.985,1.0,0.985),species);
	// Keep a shared ground base through the broad outer leaves; only the
	// upper blade owns the full warm highlight instead of a bright rosette.
	float reveal = smoothstep(0.04,0.94,tip)*detail*0.78;
	vec3 albedo=mix(ground_linear,blade,reveal);
	ALBEDO=OUTPUT_IS_SRGB ? meadow_linear_to_srgb(albedo) : albedo;
	AO = mix(0.93,1.0,smoothstep(0.0,0.55,tip)*detail);
	AO_LIGHT_AFFECT = 0.30;
	ROUGHNESS = mix(0.94,0.74,tip*detail);
	BACKLIGHT = vec3(0.24,0.28,0.09)*leaf;
}
void light() {
	float ndotl = dot(NORMAL,LIGHT);
	float wrapped = grass2_sun_wrap(ndotl);
	float back_sun = clamp(dot(-VIEW,LIGHT)*0.5+0.5,0.0,1.0);
	float transmission = pow(tip,1.35)*detail*(0.35+0.65*back_sun);
	// Godot multiplies final diffuse by ALBEDO; LIGHT_COLOR already includes PI.
	DIFFUSE_LIGHT += (vec3(wrapped)+vec3(0.24,0.28,0.09)*transmission)*LIGHT_COLOR*ATTENUATION/PI;
}
