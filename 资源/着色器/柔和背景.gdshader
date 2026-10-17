shader_type canvas_item;
uniform vec4 top_color : source_color;
uniform vec4 bottom_color : source_color;
void fragment() {
	vec4 tint = COLOR;
	vec3 atmosphere = mix(top_color.rgb, bottom_color.rgb, smoothstep(0.0, 1.0, UV.y));
	COLOR = vec4(atmosphere, 1.0) * tint;
}
