shader_type spatial;
render_mode diffuse_burley, specular_disabled;
#include "res://scripts/visual/shaders/creation_wind.gdshaderinc"
uniform float wind_time_override=-1.;
uniform float conversation = 0.0;
uniform float musical_light = 0.0;
void vertex() {
	// Only leaves and real conversation bubbles carry an authored motion weight.
	vec3 world=(MODEL_MATRIX*vec4(VERTEX,1.)).xyz;
	float clock=wind_time_override<0.?TIME:wind_time_override;
	VERTEX+=inverse(mat3(MODEL_MATRIX))*creation_wind_offset(world.xz,clock,.018)*COLOR.a;
	VERTEX.y += sin(TIME*2.1+INSTANCE_CUSTOM.x*6.283185)*INSTANCE_CUSTOM.y*0.025*conversation;
}
void fragment() {
	ALBEDO = COLOR.rgb;
	ROUGHNESS = 0.91;
	EMISSION = COLOR.rgb*musical_light*0.035;
}
