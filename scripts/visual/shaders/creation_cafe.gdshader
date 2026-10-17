shader_type spatial;
render_mode diffuse_burley, specular_disabled;
uniform float conversation = 0.0;
uniform float musical_light = 0.0;
void vertex() {
	// Only leaves and real conversation bubbles carry an authored motion weight.
	VERTEX.x += sin(TIME*1.4+VERTEX.z*2.7)*COLOR.a*0.018;
	VERTEX.y += sin(TIME*2.1+INSTANCE_CUSTOM.x*6.283185)*INSTANCE_CUSTOM.y*0.025*conversation;
}
void fragment() {
	ALBEDO = COLOR.rgb;
	ROUGHNESS = 0.91;
	EMISSION = COLOR.rgb*musical_light*0.035;
}
