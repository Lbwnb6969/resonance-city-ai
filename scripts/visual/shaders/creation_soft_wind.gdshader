shader_type spatial;
render_mode cull_disabled,specular_disabled;
#include "res://scripts/visual/shaders/creation_wind.gdshaderinc"
uniform vec4 tint:source_color=vec4(1.);
uniform bool cloth=false;
uniform float wind_time_override=-1.;
varying float motion_weight;
void vertex(){
	vec3 world=(MODEL_MATRIX*vec4(VERTEX,1.)).xyz;
	float clock=wind_time_override<0.?TIME:wind_time_override;
	motion_weight=COLOR.a*COLOR.a;
	vec3 drift=creation_wind_offset(world.xz,clock,cloth?.018:.022);
	if(cloth){drift.y=creation_wind_gust(world.xz,clock)*.025;}
	VERTEX+=inverse(mat3(MODEL_MATRIX))*drift*motion_weight;
}
void fragment(){
	ALBEDO=tint.rgb;
	ROUGHNESS=.96;
	AO=mix(.86,1.,motion_weight);
}
