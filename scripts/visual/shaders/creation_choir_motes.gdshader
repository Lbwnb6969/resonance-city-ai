shader_type spatial;
render_mode unshaded, cull_disabled, shadows_disabled, depth_draw_never;
uniform float music_clock=0.0;
varying float sparkle;
void vertex(){
	MODELVIEW_MATRIX=VIEW_MATRIX*mat4(INV_VIEW_MATRIX[0],INV_VIEW_MATRIX[1],INV_VIEW_MATRIX[2],MODEL_MATRIX[3]);
	float seed=INSTANCE_CUSTOM.r;
	VERTEX.x+=sin(music_clock*.6+seed*30.)*.22;
	VERTEX.y+=sin(music_clock*.8+seed*23.)*.18;
	sparkle=(.24+.76*pow(.5+.5*cos(6.2831853*music_clock/3.-seed*6.2831853),3.))*INSTANCE_CUSTOM.a;
}
void fragment(){
	vec2 at=abs(UV-.5)*2.;float core=1.-smoothstep(.12,.85,length(at));
	float rays=(1.-smoothstep(.03,.15,min(at.x,at.y)))*(1.-smoothstep(.35,1.,max(at.x,at.y)));
	ALBEDO=vec3(1.,.86,.42);EMISSION=ALBEDO*.3;ALPHA=max(core,rays*.7)*sparkle;
}
