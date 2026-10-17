shader_type spatial;
render_mode diffuse_burley, specular_disabled;

void vertex() {
	// Alpha is authored as a motion weight. Static carved timber stays fixed.
	float sway = sin(TIME * 1.7 + INSTANCE_CUSTOM.x * 6.283185);
	VERTEX.x += sway * max(0.0, -VERTEX.y) * 0.065 * COLOR.a;
}

void fragment() {
	ALBEDO = COLOR.rgb;
	ROUGHNESS = 0.88;
}
