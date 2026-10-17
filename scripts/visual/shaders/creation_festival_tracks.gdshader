shader_type spatial;
render_mode blend_add,depth_draw_never,cull_disabled,unshaded;
#include "res://scripts/visual/shaders/creation_festival_wave.gdshaderinc"
void fragment(){
	float glow=festival_wave(UV.x);
	ALBEDO=vec3(1.0,.70,.20);
	EMISSION=vec3(1.0,.68,.16)*glow*2.1;
	ALPHA=glow*.75;
}
