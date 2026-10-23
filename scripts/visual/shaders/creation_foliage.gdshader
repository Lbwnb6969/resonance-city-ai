shader_type spatial;
render_mode specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
uniform vec2 touch_at=vec2(0.0);
uniform float touch_time=10.0;
uniform float season_gold=0.0;
uniform float micro_normal_strength=.045;
uniform float transmission_strength=.32;
varying float leaf_height;
varying vec3 leaf_world;
varying vec3 canopy_normal;
float leaf_hash(vec2 p){return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);}
float leaf_grain(vec2 p){
	vec2 i=floor(p),f=fract(p);f=f*f*(3.0-2.0*f);
	return mix(mix(leaf_hash(i),leaf_hash(i+vec2(1,0)),f.x),mix(leaf_hash(i+vec2(0,1)),leaf_hash(i+vec2(1,1)),f.x),f.y);
}
float leaf_paper(vec3 p,vec3 weights){return dot(vec3(leaf_grain(p.yz),leaf_grain(p.xz),leaf_grain(p.xy)),weights);}
vec3 leaf_micro_normal(vec3 world,vec3 n){
	vec3 weights=pow(abs(n),vec3(3));weights/=max(dot(weights,vec3(1)),.0001);
	vec3 p=world*23.0;
	float a=leaf_paper(p,weights);
	vec3 slope=vec3(leaf_paper(p+vec3(.15,0,0),weights)-a,leaf_paper(p+vec3(0,.15,0),weights)-a,leaf_paper(p+vec3(0,0,.15),weights)-a)/.15;
	return safe_normalize(n-(slope-n*dot(n,slope))*micro_normal_strength);
}
void vertex(){
	vec3 world=(MODEL_MATRIX*vec4(VERTEX,1)).xyz;
	float phase=world.x*.37+world.z*.29;
	float gust=sin(TIME*1.19+phase)+.35*sin(TIME*2.31+phase*1.7);
	float weight=COLOR.a*COLOR.a;
	float touched=exp(-touch_time*3.0)*sin(touch_time*13.0)*(1.0-smoothstep(0.,2.5,length(world.xz-touch_at)));
	VERTEX.x+=(touched*.10+gust*.047)*weight;
	VERTEX.z+=(touched*.06+sin(TIME*.93+phase+1.2)*.033)*weight;
	leaf_world=(MODEL_MATRIX*vec4(VERTEX,1)).xyz;
	canopy_normal=safe_normalize(MODEL_NORMAL_MATRIX*NORMAL);leaf_height=COLOR.a;
}
void fragment(){
	vec3 world_normal=leaf_micro_normal(leaf_world,safe_normalize(canopy_normal));
	NORMAL=safe_normalize((VIEW_MATRIX*vec4(world_normal,0)).xyz);
	float grain=leaf_grain(leaf_world.xz*18.0)*.04-.02;
	ALBEDO=mix(COLOR.rgb,COLOR.rgb*vec3(1.28,.91,.58),season_gold*.72)*(1.0+grain);
	float canopy_ao=mix(.66,1.0,smoothstep(.12,.92,leaf_height));
	AO=canopy_ao;ROUGHNESS=.96;SPECULAR=0.;
	float edge=pow(1.0-abs(dot(safe_normalize(NORMAL),safe_normalize(VIEW))),2.0);
	EMISSION=ALBEDO*.008;RIM=edge*.09;RIM_TINT=.9;
}
void light(){
	float ndl=dot(safe_normalize(NORMAL),safe_normalize(LIGHT));
	float wrapped=clamp((ndl+.36)/1.36,0.,1.);
	float edge=pow(1.0-abs(dot(safe_normalize(NORMAL),safe_normalize(VIEW))),2.0);
	float transmitted=pow(max(-ndl,0.),1.5)*transmission_strength*(.55+edge*.45);
	vec3 amber=mix(ALBEDO,vec3(.94,.66,.25),.42);
	DIFFUSE_LIGHT+=(ALBEDO*wrapped+amber*transmitted)*LIGHT_COLOR*ATTENUATION/3.14159265;
}
