shader_type spatial;
render_mode unshaded, blend_add, cull_disabled, depth_draw_never, shadows_disabled;
uniform int mode=0;
uniform float music_clock=0.0;
uniform float strength=0.0;
uniform float age=0.0;
varying vec2 local_at;
varying vec2 world_at;
void vertex(){local_at=VERTEX.xz;world_at=(MODEL_MATRIX*vec4(VERTEX,1.)).xz;}
void fragment(){
	if(abs(world_at.x)>40. || abs(world_at.y)>40.)discard;
	float distance_at=length(local_at);
	float alpha=0.;
	if(mode==0){
		float edge=smoothstep(.8,1.7,distance_at)*(1.-smoothstep(2.,2.8,distance_at));
		alpha=edge*strength*(.045+.02*cos(6.2831853*music_clock/3.));
	}else{
		float progress=clamp(age/2.4,0.,1.);
		float ring=1.-smoothstep(.10,.42,abs(distance_at-15.*progress));
		alpha=ring*sin(3.14159265*progress)*.34;
	}
	ALBEDO=vec3(1.,.78,.28);ALPHA=alpha;
}
