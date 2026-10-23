// Consumes the existing house-distance channel. No per-house lights or new field.
uniform float window_light_phase=0.0;
uniform float window_bounce_strength=1.0;
vec3 window_ground_bounce(vec2 at){
	if (!ground_contact_enabled || window_light_phase<.01){return vec3(0.0);}
	vec2 uv=(at-ground_contact_world_rect.xy)/ground_contact_world_rect.zw;
	float distance=tiled_field_sample(ground_contact_field,uv).r*ground_contact_range;
	float halo=(1.0-smoothstep(.08,1.16,distance))*smoothstep(0.0,.04,distance);
	// Broad warm pockets break the continuous perimeter into soft window pools.
	float pockets=.7+.3*pow(sin(at.x*2.4+at.y*.6)*sin(at.y*2.4-at.x*.6),2.0);
	return vec3(.55,.22,.055)*pow(halo,1.5)*pockets*window_light_phase*window_bounce_strength;
}
