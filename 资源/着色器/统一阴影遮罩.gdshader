shader_type canvas_item;
render_mode unshaded;
uniform vec4 shadow_color : source_color = vec4(0.29,0.35,0.47,1.0);
uniform float layer_alpha = 0.22;
void fragment() {
 COLOR = vec4(shadow_color.rgb, texture(TEXTURE,UV).r*layer_alpha);
}
