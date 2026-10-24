shader_type spatial;
render_mode unshaded,cull_disabled,shadows_disabled,depth_draw_never;
uniform float strength=0.;
uniform float elapsed=0.;
uniform int season=0;
varying float seed;
void vertex(){
	seed=INSTANCE_CUSTOM.r;
	MODELVIEW_MATRIX=VIEW_MATRIX*mat4(INV_VIEW_MATRIX[0],INV_VIEW_MATRIX[1],INV_VIEW_MATRIX[2],MODEL_MATRIX[3]);
	float t=fract(elapsed*.2+seed);
	if(season==1){VERTEX.y+=t*.5;VERTEX.x+=sin(t*7.+seed*6.)*.04;}
	else if(season==3){VERTEX.x+=sin(elapsed*1.3+seed*9.)*.08;VERTEX.y+=.12+sin(elapsed+seed*7.)*.08;}
	else{VERTEX.y+=(1.-t)*1.2;VERTEX.x+=sin(t*6.+seed*7.)*.25;}
}
void fragment(){
	vec2 at=(UV-.5)*vec2(season==1?.6:1.,1.);
	float d=length(at);if(d>.5)discard;
	vec3 tint=season==0?vec3(1.,.73,.78):season==1?vec3(.98,.91,.77):season==2?vec3(.96,.64,.20):vec3(1.,.68,.25);
	ALBEDO=tint;EMISSION=tint*(season==3?.7:.05);
	ALPHA=strength*(1.-smoothstep(.08,.48,d))*(season==1?.45:.85);
}
