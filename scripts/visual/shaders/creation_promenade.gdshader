shader_type spatial;
render_mode diffuse_burley, specular_disabled;
varying vec3 world_at;
#include "res://scripts/visual/shaders/creation_era_road.gdshaderinc"
#include "res://scripts/visual/shaders/creation_promenade_pattern.gdshaderinc"
void vertex() { world_at=(MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; }
void fragment() {
	ALBEDO=era_road_color(world_at.xz,promenade_color(world_at.xz),1.0);
	ROUGHNESS=.93;
}
