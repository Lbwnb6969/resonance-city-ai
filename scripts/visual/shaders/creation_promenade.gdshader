shader_type spatial;
render_mode diffuse_burley, specular_disabled;
varying vec3 world_at;
#include "res://scripts/visual/shaders/creation_era_road.gdshaderinc"
void vertex() { world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; }
float stone_hash(vec2 p) { return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453); }
void fragment() {
	vec2 at=world_at.xz;
	float row=floor(at.y/.34);
	vec2 grid=vec2(at.x/.56+mod(row,2.0)*.5,at.y/.34);
	vec2 cell=fract(grid);
	vec2 edge=min(cell,1.0-cell)*vec2(.56,.34);
	float joint=min(edge.x,edge.y);
	float aa=max(fwidth(joint),.0005);
	float face=smoothstep(.009-aa,.016+aa,joint);
	float variation=stone_hash(floor(grid));
	vec3 stone=mix(vec3(.57,.55,.47),vec3(.72,.68,.56),variation);
	float grain=stone_hash(floor(at*150.0));
	stone*=.97+.045*grain;
	ALBEDO=era_road_color(at,mix(vec3(.40,.40,.35),stone,face),1.0);
	ROUGHNESS=.93;
}
