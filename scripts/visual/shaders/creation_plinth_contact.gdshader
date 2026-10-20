shader_type spatial;
render_mode blend_mix, depth_prepass_alpha, cull_back, diffuse_burley, specular_disabled;

float grain_hash(vec2 p) { return fract(sin(dot(p, vec2(127.1, 311.7))) * 43758.5453); }
void fragment() {
	vec2 tile = UV * 32.0;
	vec2 id = floor(tile);
	vec2 local = fract(tile);
	float grain = grain_hash(id);
	float edge = smoothstep(0.025, 0.16, min(min(local.x, local.y), min(1.0-local.x, 1.0-local.y)));
	vec3 stone = mix(vec3(0.43, 0.41, 0.33), vec3(0.67, 0.62, 0.49), grain);
	ALBEDO = stone * mix(0.86, 1.0, edge);
	ROUGHNESS = 1.0;
	ALPHA = smoothstep(0.0, 1.0, COLOR.a) * mix(0.72, 0.94, edge);
}
