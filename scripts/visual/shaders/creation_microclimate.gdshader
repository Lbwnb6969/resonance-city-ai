shader_type spatial;
render_mode unshaded, cull_disabled, shadows_disabled;
uniform int weather=0;
uniform float music_clock=0.0;
varying float seed;
void vertex(){
	MODELVIEW_MATRIX=VIEW_MATRIX*mat4(INV_VIEW_MATRIX[0],INV_VIEW_MATRIX[1],INV_VIEW_MATRIX[2],MODEL_MATRIX[3]);
	seed=INSTANCE_CUSTOM.r;
	float cycle=fract(TIME*(weather==1?.42:.08)+seed);
	if(weather==3){
		VERTEX.x+=sin(TIME*.7+seed*43.)*.3;
		VERTEX.z+=cos(TIME*.6+seed*31.)*.3;
		VERTEX.y+=sin(TIME*.9+seed*19.)*.2;
	}else{
		if(weather==1)VERTEX.y*=2.5;
		VERTEX.y+=3.5-cycle*5.0;
		VERTEX.x+=sin(TIME+seed*23.)*(weather==1?.05:.4);
	}
}
void fragment(){
	float radius=length((UV-.5)*vec2(weather==1?4.:1.,1.));
	if(radius>.5)discard;
	vec3 tint=weather==0?mix(vec3(.98,.76,.82),vec3(1.,.96,.83),seed):weather==1?vec3(.75,.86,.90):weather==2?mix(vec3(.70,.35,.12),vec3(.96,.72,.25),seed):vec3(.73,1.,.36);
	float pulse=weather==3?.3+.7*pow(.5+.5*cos(6.2831853*music_clock/.75-seed*3.),2.):.65;
	ALBEDO=tint;EMISSION=tint*(weather==3?pulse*.7:.03);ALPHA=pulse*(1.0-smoothstep(.3,.5,radius));
}
