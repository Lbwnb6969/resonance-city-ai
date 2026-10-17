shader_type spatial;
render_mode diffuse_burley, specular_disabled;
varying vec3 world_at;
#include "res://scripts/visual/shaders/creation_path_palette.gdshaderinc"
void vertex() { world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; }
void fragment() {
	ALBEDO = path_color(world_at.xz);
	ROUGHNESS = 1.0;
}
