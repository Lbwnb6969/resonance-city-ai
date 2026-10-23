shader_type spatial;
render_mode cull_disabled, diffuse_burley;
// Scalar .28/.17 dual-sine ripple from creation_water.gdshader. That shader
// belongs to the documented Tiny Glade-informed water adaptation; these small
// fountain amplitudes and music response are original Godot adaptations.
// The extracted Foundation fountain has no imported animation.
uniform vec4 water_color : source_color = vec4(0.38,0.58,0.55,1.0);
uniform vec2 fountain_at = vec2(0.0);
uniform float music_pulse : hint_range(0.0,1.0) = 0.0;
uniform float choir_pulse=0.0;
uniform float spring_pulse=0.0;
uniform float water_base_y=0.0;
varying vec3 world_at;

float ripple(vec2 at) {
	return sin(at.y*1.05+TIME*0.28)+sin(at.x*1.73-at.y*0.31-TIME*0.17);
}
void vertex() {
	world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	// Both recovered basin surfaces stay seated; the added central jet above
	// the upper basin gently rises with the actual choir's three-second bar.
	vec3 lifted=world_at;
	lifted.y+=max(0.,world_at.y-water_base_y)*.065*(choir_pulse+spring_pulse);
	VERTEX=(inverse(MODEL_MATRIX)*vec4(lifted,1.)).xyz;
	VERTEX.y += ripple(world_at.xz)*0.0012;
}
void fragment() {
	vec2 at = world_at.xz;
	float ring = sin(length(at-fountain_at)*34.0-TIME*2.1);
	ALBEDO = water_color.rgb*(1.0+ripple(at)*0.022)+vec3(0.025,0.033,0.028)*music_pulse*(0.5+0.5*ring);
	EMISSION = water_color.rgb*music_pulse*0.018;
	ROUGHNESS = 0.55;
	SPECULAR = 0.28;
}
