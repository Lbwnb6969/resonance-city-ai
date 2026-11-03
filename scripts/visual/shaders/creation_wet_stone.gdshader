shader_type spatial;
render_mode diffuse_burley, specular_schlick_ggx, cull_disabled;
#include "res://scripts/visual/shaders/creation_tiled_field.gdshaderinc"
uniform sampler2DArray water_field : filter_linear, repeat_disable;
uniform vec4 water_world_rect = vec4(-48.0,-48.0,96.0,96.0);
uniform float water_level = -0.16;
uniform vec4 stone_color : source_color = vec4(1.0);
uniform sampler2D stone_texture : source_color, filter_linear_mipmap, repeat_enable;
uniform bool textured = false;
uniform bool vertex_tint = false;
uniform bool wet_enabled = true;
varying vec3 stone_at;
varying vec3 stone_normal;
varying vec4 stone_tint;
void vertex() {
	stone_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	stone_normal = normalize(MODEL_NORMAL_MATRIX*NORMAL);
	stone_tint = COLOR;
}
void fragment() {
	vec3 tint = stone_tint.rgb;
	if (!OUTPUT_IS_SRGB) { tint = mix(tint/12.92,pow((tint+.055)/1.055,vec3(2.4)),step(vec3(.04045),tint)); }
	vec3 base = stone_color.rgb*(vertex_tint ? tint : vec3(1.0));
	if (textured) {
		vec3 weights = abs(normalize(stone_normal));
		weights /= max(weights.x+weights.y+weights.z,.0001);
		vec3 at = stone_at*.72;
		base *= texture(stone_texture,at.zy).rgb*weights.x+texture(stone_texture,at.xz).rgb*weights.y+texture(stone_texture,at.xy).rgb*weights.z;
	}
	float distance = tiled_field_sample(water_field,(stone_at.xz-water_world_rect.xy)/water_world_rect.zw).r;
	// A stable 18–25cm capillary edge belongs only to actual nearby water.
	float edge = .215+.035*sin(stone_at.x*7.1+sin(stone_at.z*9.3));
	float wet = wet_enabled ? (1.0-smoothstep(.04,.20,distance))*(1.0-smoothstep(edge-.025,edge,stone_at.y-water_level)) : 0.0;
	ALBEDO = base*mix(1.0,.66,wet);
	ROUGHNESS = mix(textured ? .96 : .88,.48,wet);
	SPECULAR = .5;
}
