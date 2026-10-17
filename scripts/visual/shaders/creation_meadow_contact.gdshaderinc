// Shared visual contact data. It never replaces authored clearance/collision.
#include "res://scripts/visual/shaders/creation_tiled_field.gdshaderinc"
uniform sampler2DArray ground_contact_field : filter_linear, repeat_disable;
uniform bool ground_contact_enabled = false;
uniform vec4 ground_contact_world_rect = vec4(-48.0,-48.0,96.0,96.0);
uniform float ground_contact_range = 1.2;
vec3 meadow_contact_color(vec2 at,vec3 grass) {
	if (!ground_contact_enabled) { return grass; }
	vec2 uv = (at-ground_contact_world_rect.xy)/ground_contact_world_rect.zw;
	vec3 field = tiled_field_sample(ground_contact_field,uv).rgb*ground_contact_range;
	float wall = 1.0-smoothstep(0.02,0.65,field.r);
	float road = 1.0-smoothstep(0.04,0.72,field.g);
	float root = 1.0-smoothstep(0.06,0.70,field.b);
	// Narrow warm earth against walking surfaces; cool moss at rooted walls.
	vec3 earth = mix(grass,vec3(0.24,0.20,0.135),0.40);
	vec3 moss = mix(grass,vec3(0.085,0.147,0.072),0.42);
	vec3 result = mix(grass,earth,road*0.55);
	result = mix(result,moss,wall*0.46);
	return mix(result,grass*vec3(0.81,0.88,0.76),root*0.38);
}
