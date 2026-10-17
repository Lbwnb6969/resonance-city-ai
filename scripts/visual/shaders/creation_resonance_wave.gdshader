shader_type spatial;
render_mode unshaded, blend_mix, cull_disabled, depth_draw_never;
uniform vec3 center_at = vec3(0.0);
uniform float clock_sec = 0.0;
uniform float strength = 0.0;
varying float edge;
void vertex() {
	float progress = fract(clock_sec / 3.0);
	float radius = 0.8 + progress * 2.7;
	VERTEX = center_at + vec3(VERTEX.x * radius, 0.035, VERTEX.z * radius);
	edge = UV.y;
}
void fragment() {
	float progress = fract(clock_sec / 3.0);
	ALBEDO = vec3(0.93, 0.81, 0.48);
	ALPHA = sin(edge * 3.141593) * sin(progress * 3.141593) * strength * 0.16;
}
