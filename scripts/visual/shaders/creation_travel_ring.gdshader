shader_type spatial;
render_mode unshaded, blend_mix, cull_disabled, depth_draw_never;
uniform float progress = 0.0;
uniform float strength = 0.0;
varying float ring_edge;
void vertex() {
	// Start at the arch mouth rather than hiding the whole pulse beneath its roof.
	float radius = mix(0.95, 1.70, progress);
	VERTEX.xz *= radius;
	ring_edge = UV.y;
}
void fragment() {
	ALBEDO = vec3(1.0, 0.80, 0.40);
	ALPHA = sin(ring_edge * 3.14159265) * strength * 0.52;
}
