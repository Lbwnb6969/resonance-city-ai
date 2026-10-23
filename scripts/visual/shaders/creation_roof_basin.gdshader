shader_type spatial;
render_mode diffuse_burley;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
varying vec3 world_at;
void vertex(){world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;}
void fragment(){
	float wave=sin(world_at.x*8.0+TIME*.55)*cos(world_at.z*7.0-TIME*.4);
	float rim=pow(1.0-clamp(dot(safe_normalize(NORMAL),safe_normalize(VIEW)),0.0,1.0),3.0);
	ALBEDO=mix(vec3(.20,.40,.40),vec3(.69,.83,.79),rim*.8+wave*.025);
	ROUGHNESS=.17;SPECULAR=.72;METALLIC=.15;
}
