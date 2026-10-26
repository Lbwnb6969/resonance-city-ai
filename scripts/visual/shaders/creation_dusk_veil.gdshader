shader_type spatial;
render_mode unshaded,blend_add,cull_disabled,depth_draw_never,shadows_disabled,fog_disabled;
uniform float strength=0.0;
varying vec3 world_at;
void vertex(){world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;}
void fragment(){
	vec2 p=UV*2.0-1.0;
	float edge=pow(max(0.0,1.0-dot(p,p)),2.0);
	float rays=.65+.35*sin(world_at.x*2.1+world_at.y*.85);
	ALBEDO=vec3(1.0,.64,.28);
	ALPHA=edge*rays*strength*.055;
}
