shader_type spatial;
render_mode unshaded, blend_mix, cull_disabled, depth_draw_never;
uniform vec3 from_at = vec3(0.0);
uniform vec3 to_at = vec3(0.0);
uniform float strength = 0.0;
uniform float clock_sec = 0.0;
varying vec2 ribbon_uv;
void vertex() {
	ribbon_uv = UV;
	float t = UV.x;
	vec3 direction = to_at - from_at;
	float distance_xz = length(direction.xz);
	vec3 cross_axis = normalize(vec3(-direction.z, 0.0, direction.x) + vec3(0.00001, 0.0, 0.0));
	vec3 center = mix(from_at, to_at, t);
	center.y += sin(t * 3.141593) * min(2.0, 0.35 + distance_xz * 0.13);
	VERTEX = center + cross_axis * ((UV.y - 0.5) * 0.12);
}
void fragment() {
	float edge = 1.0 - abs(ribbon_uv.y * 2.0 - 1.0);
	float ends = sin(ribbon_uv.x * 3.141593);
	float flow = pow(max(0.0, sin(ribbon_uv.x * 18.84956 - clock_sec * 3.0)), 7.0);
	ALBEDO = vec3(1.0, 0.83, 0.50);
	ALPHA = strength * edge * ends * (0.12 + flow * 0.45);
}
