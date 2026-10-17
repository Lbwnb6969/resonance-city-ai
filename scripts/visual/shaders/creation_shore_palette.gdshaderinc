#include "res://scripts/visual/shaders/creation_tiled_field.gdshaderinc"
#include "res://scripts/visual/shaders/creation_valley_river.gdshaderinc"
uniform bool scenery_river = false;
uniform sampler2DArray water_field : filter_linear, repeat_disable;
uniform vec4 water_world_rect = vec4(-48.0,-48.0,96.0,96.0);
uniform vec4 bank_soil : source_color = vec4(0.55,0.56,0.40,1.0);
uniform sampler2D bank_sand : source_color, filter_linear_mipmap, repeat_enable;
uniform bool bank_sand_enabled = false;
uniform vec4 bank_sand_tint : source_color = vec4(0.60,0.57,0.46,1.0);
float shore_distance(vec2 at) {
	if (scenery_river) { return abs(at.x-valley_river_x(at.y,water_world_rect.y+water_world_rect.w))-2.3; }
	return tiled_field_sample(water_field,(at-water_world_rect.xy)/water_world_rect.zw).r;
}
vec3 shore_ground(vec2 at,vec3 grass) {
	float distance = shore_distance(at);
	float drift = meadow_noise(at*0.85)*0.12;
	float wet = 1.0-smoothstep(0.02,0.35+drift,distance);
	vec3 old_bank = mix(grass,bank_soil.rgb,wet*0.24);
	float pixel_coverage = clamp(fwidth(distance),0.0,.10);
	// Far land takes the original path. Dimensions below are our metre-scale
	// shore art direction, not Foundation layer-mask units or vertical depth.
	if (!bank_sand_enabled || distance>1.12) { return old_bank; }
	vec4 sand = texture(bank_sand,at*0.34);
	vec3 mean_sample = OUTPUT_IS_SRGB ? vec3(.451,.384,.290) : vec3(.171,.122,.068);
	vec3 dry_sand = bank_sand_tint.rgb*mix(vec3(1.0),sand.rgb/mean_sample,.50);
	float wet_line = 1.0-smoothstep(-.10,.24+drift*.35,distance);
	vec3 shore = dry_sand*mix(1.0,.69,wet_line);
	float edge = 1.0-smoothstep(.12,.94+drift,distance);
	// Foundation terrain.fragment: max(height+mask)-blendSmooth, then
	// positive normalized weights. Recovered texture alpha is layer height.
	float sand_height = (sand.a-.5)*.16;
	float grass_height = (meadow_noise(at*2.4)-.5)*.04;
	// Townscaper Sandbank uses screen derivatives to soften its edge. We use
	// them only for pixel coverage; the actual shore width remains metric.
	float softness = .18+pixel_coverage;
	float offset = max(edge+sand_height,1.0-edge+grass_height)-softness;
	float sw = max(edge+sand_height-offset,0.0);
	float gw = max(1.0-edge+grass_height-offset,0.0);
	return (shore*sw+old_bank*gw)/(sw+gw);
}
