shader_type spatial;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
uniform vec4 brick_color : source_color = vec4(0.64,0.32,0.22,1.0);
varying vec3 world_at;
varying vec3 world_normal;
void vertex() {
	world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	world_normal=safe_normalize(MODEL_NORMAL_MATRIX*NORMAL);
}
void fragment() {
	float along=abs(world_normal.z)>abs(world_normal.x)?world_at.x:world_at.z;
	float row=floor(world_at.y/.14);
	vec2 tile=vec2(along/.34+mod(row,2.0)*.5,world_at.y/.14);
	vec2 edge=min(fract(tile),1.0-fract(tile));
	float mortar=1.0-smoothstep(.025,.055,min(edge.x,edge.y));
	float grain=fract(sin(dot(floor(tile),vec2(17.13,93.17)))*43758.5);
	ALBEDO=mix(brick_color.rgb*(.90+grain*.17),vec3(.68,.56,.43),mortar*.65);
	ROUGHNESS=.92;
}
