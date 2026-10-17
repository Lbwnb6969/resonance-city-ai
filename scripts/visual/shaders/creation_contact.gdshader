shader_type spatial;
render_mode unshaded, blend_mix, depth_draw_never, cull_disabled;
void fragment() {
	vec2 distance_from_edge = abs(UV*2.0-1.0);
	float edge = max(distance_from_edge.x,distance_from_edge.y);
	ALBEDO = vec3(0.23,0.29,0.23);
	ALPHA = (1.0-smoothstep(0.50,1.0,edge))*0.13;
}
