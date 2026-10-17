shader_type spatial;
render_mode unshaded, blend_add, depth_draw_never, cull_disabled;
uniform float strength=0.0;
uniform float ground_pool=0.0;
void fragment() {
	float radius=length(UV*2.0-1.0);
	float glow=pow(max(0.0,1.0-radius),2.2);
	ALBEDO=vec3(1.0,.64,.26);
	ALPHA=glow*strength*mix(.50,.14,ground_pool);
}
