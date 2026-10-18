shader_type spatial;
render_mode blend_mix, depth_draw_opaque, cull_disabled, diffuse_burley;
// Original Godot glazing. TG's window-glass Gbuffer/reflection pipeline is
// reference only: this transparent greenhouse does not import that renderer.
uniform float evening : hint_range(0.0,1.0) = 0.0;
uniform float response : hint_range(0.0,1.0) = 0.0;
uniform float warmth : hint_range(0.0,1.0) = 0.0;
uniform float night_energy = 1.0;
uniform float night_opacity = 0.0;
void fragment() {
	float rim = pow(1.0-clamp(abs(dot(normalize(NORMAL),normalize(VIEW))),0.0,1.0),3.0);
	vec3 daylight = mix(vec3(0.53,0.66,0.59),vec3(0.92,0.85,0.62),rim*0.67);
	ALBEDO = mix(daylight,vec3(0.43,0.57,0.39),evening*0.35);
	ALPHA = 0.19+rim*0.18+evening*night_opacity;
	ROUGHNESS = 0.19;
	SPECULAR = 0.66;
	EMISSION = mix(vec3(0.28,0.37,0.16),vec3(.65,.38,.16),warmth)*(evening*mix(.24,.60,warmth)+response*0.085)*night_energy;
}
