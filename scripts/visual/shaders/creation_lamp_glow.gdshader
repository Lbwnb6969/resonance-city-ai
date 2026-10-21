shader_type spatial;
render_mode unshaded, blend_add, depth_draw_never, cull_disabled;
uniform float strength=0.0;
uniform float ground_pool=0.0;
uniform float music_clock=0.0;
varying float choir_scope;
void vertex() {
	choir_scope=INSTANCE_CUSTOM.r;
	if(ground_pool<.5)MODELVIEW_MATRIX=VIEW_MATRIX*mat4(INV_VIEW_MATRIX[0],INV_VIEW_MATRIX[1],INV_VIEW_MATRIX[2],MODEL_MATRIX[3]);
}
void fragment() {
	float radius=length(UV*2.0-1.0);
	float glow=pow(max(0.0,1.0-radius),2.2);
	ALBEDO=vec3(1.0,.64,.26);
	float pulse=pow(.5+.5*cos(6.28318530718*music_clock/3.),2.);
	ALPHA=glow*(strength+choir_scope*(.06+.26*pulse))*mix(.50,.14,ground_pool);
}
