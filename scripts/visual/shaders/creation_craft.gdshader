shader_type spatial;
render_mode diffuse_burley, specular_disabled;
uniform float music_clock = 0.0;

void vertex() {
	// Alpha is authored as a motion weight. Static carved timber stays fixed.
	float wind = sin(TIME * 1.7 + INSTANCE_CUSTOM.x * 6.283185) * 0.065;
	// The envelope is exactly the house's window wave. All active chimes use
	// the existing 80 BPM PCM transport; mute/out-of-view returns to the wind.
	float choir = sin(music_clock * 6.283185 / 0.75) * (0.025 + 0.16 * INSTANCE_CUSTOM.y);
	float sway = mix(wind, choir, INSTANCE_CUSTOM.z);
	VERTEX.x += sway * max(0.0, -VERTEX.y) * COLOR.a;
}

void fragment() {
	ALBEDO = COLOR.rgb;
	ROUGHNESS = 0.88;
}
