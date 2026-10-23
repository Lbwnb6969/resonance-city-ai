shader_type spatial;
render_mode diffuse_burley, specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
varying vec3 world_at;
varying vec3 terrain_normal;
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_meadow_contact.gdshaderinc"
uniform sampler2D cliff_surface : source_color, filter_linear_mipmap, repeat_enable;
uniform bool cliff_surface_enabled = false;
uniform float cliff_uv_scale = 0.34;
uniform bool cliff_shore_toe_enabled = true;
uniform bool cliff_height_blend_enabled = true;
vec4 exposed_stone(vec3 at, vec3 normal) {
	// TG rocky_terrain/001.frag's dominant triplanar weights; Foundation's
	// recovered Cliff A supplies RGB and layer height in alpha.
	// World Y on both side projections keeps the
	// original fissures upright and continuous across terrain chunks.
	vec3 weights = abs(normal);
	if (cliff_surface_enabled) {
		vec4 x_face = texture(cliff_surface,vec2(at.z,-at.y)*cliff_uv_scale);
		vec4 top = texture(cliff_surface,at.xz*cliff_uv_scale);
		vec4 z_face = texture(cliff_surface,vec2(at.x,-at.y)*cliff_uv_scale);
		// Recovered TG adds sampled luminance to axis weights, then keeps
		// the positive weights within .2 of the strongest projection.
		vec3 luminance = vec3(.2126,.7152,.0722);
		weights += vec3(dot(x_face.rgb,luminance),dot(top.rgb,luminance),dot(z_face.rgb,luminance));
		weights = max(weights-vec3(max(weights.x,max(weights.y,weights.z))-.2),vec3(0.0));
		weights /= max(dot(weights,vec3(1.0)),.001);
		vec4 stone = x_face*weights.x+top*weights.y+z_face*weights.z;
		stone.rgb *= vec3(1.30,1.32,1.36);
		return stone;
	}
	// Original authored surface retained for the bounded actual-GL A/B.
	weights = max(weights-vec3(max(weights.x,max(weights.y,weights.z))-.2),vec3(0.0));
	weights /= max(dot(weights,vec3(1.0)),.001);
	vec3 broad = vec3(meadow_noise(at.zy*2.4+3.1),meadow_noise(at.xz*2.4+3.1),meadow_noise(at.xy*2.4+3.1));
	vec3 grain = vec3(meadow_noise(at.zy*13.0),meadow_noise(at.xz*13.0),meadow_noise(at.xy*13.0));
	float face = dot(weights,broad)*.76+dot(weights,grain)*.24;
	float strata = smoothstep(.87,.99,sin(at.y*18.0+at.x*.75+at.z*.4+face*2.0)*.5+.5);
	return vec4(mix(vec3(.405,.43,.405),vec3(.56,.55,.49),face)*(1.0-strata*.075),.5);
}
float stone_cover(float mask, float height) {
	if (!cliff_height_blend_enabled) { return mask; }
	// Foundation terrain.fragment: max(mask+height)-blendSmooth, positive
	// normalized layer weights. Only the slope transition receives height;
	// flat grass and fully exposed stone retain their original endpoints.
	// .65/.42/.72 are our art-direction values, not recovered uniforms.
	float transition = 4.0*mask*(1.0-mask);
	float stone_score = mask+(height-.5)*.65*transition;
	float grass_score = 1.0-mask;
	float offset = max(stone_score,grass_score)-.42;
	float sw = max(stone_score-offset,0.0);
	float gw = max(grass_score-offset,0.0);
	return mix(mask,sw/(sw+gw),transition*.72);
}
#include "res://scripts/visual/shaders/creation_window_bounce.gdshaderinc"
void vertex() {
	world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	terrain_normal = safe_normalize(mat3(MODEL_MATRIX)*NORMAL);
}
void fragment() {
	EMISSION=window_ground_bounce(world_at.xz);
	vec3 metric_normal = safe_normalize(terrain_normal);
	vec3 relief_normal = safe_normalize(metric_normal+meadow_normal(world_at.xz)-vec3(0.0,1.0,0.0));
	NORMAL = safe_normalize((VIEW_MATRIX*vec4(relief_normal,0.0)).xyz);
	vec3 grass = meadow_contact_color(world_at.xz,shore_ground(world_at.xz,meadow_color(world_at.xz,grass_low.rgb,grass_high.rgb)));
	float bank = (1.0-smoothstep(-0.08,-0.015,world_at.y))*(1.0-smoothstep(0.25,0.6,shore_distance(world_at.xz)));
	// TG terrain_derivative's metric rock threshold, applied to real normals.
	float slope = length(metric_normal.xz)/max(metric_normal.y,0.001);
	float rock = smoothstep(0.75,1.25,slope);
	vec3 soil = mix(grass,bank_soil.rgb*0.72,bank*0.50);
	vec4 stone = vec4(soil,.5);
	if (rock>.005) { stone=exposed_stone(world_at,metric_normal); }
	vec3 ground_surface = mix(soil,stone.rgb,stone_cover(rock,stone.a)*.92);
	if (cliff_shore_toe_enabled && bank_sand_enabled) {
		// Recovered rocky-terrain displacement fades at the water mask. Here
		// the shared metre-distance field blends steep rock back into the same
		// authored wet sand used by the exposed bank ribbon.
		float shore = 1.0-smoothstep(0.16,1.12,shore_distance(world_at.xz));
		float toe_height = 1.0-smoothstep(-0.10,0.34,world_at.y);
		float rocky_toe = rock*shore*toe_height;
		vec3 wet_sand = shore_ground(world_at.xz,grass);
		ground_surface = mix(ground_surface,wet_sand,rocky_toe*.92);
	}
	ALBEDO = ground_surface;
	ROUGHNESS = 1.0;
}
