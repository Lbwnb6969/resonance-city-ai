shader_type spatial;
render_mode cull_disabled,specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
#include "res://scripts/visual/shaders/creation_wind.gdshaderinc"
uniform float wind_time_override=-1.;
varying float pin;
void vertex(){
 vec3 world=(MODEL_MATRIX*vec4(VERTEX,1.)).xyz;
 float clock=wind_time_override<0.?TIME:wind_time_override;
 pin=COLOR.a;
 vec3 drift=creation_wind_offset(world.xz,clock,.018);
 drift.y=creation_wind_gust(world.xz,clock)*.025;
 VERTEX+=inverse(mat3(MODEL_MATRIX))*drift*pin*pin;
}
void fragment(){
 ALBEDO=COLOR.rgb;
 float detail=1.-smoothstep(8.,30.,length(VERTEX));
 vec2 weave=vec2(sin(UV.x*260.),sin(UV.y*260.));
 NORMAL=safe_normalize(NORMAL+vec3(weave*.012*detail,0.));
 ROUGHNESS=.96;
 AO=mix(.82,1.,smoothstep(0.,.30,pin));
}
