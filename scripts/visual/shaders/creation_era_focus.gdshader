shader_type canvas_item;
render_mode unshaded;
uniform sampler2D screen_texture : hint_screen_texture, filter_linear;
uniform float softness = 0.0;
void fragment() {
	vec2 step_uv=SCREEN_PIXEL_SIZE*1.4;
	vec3 original=texture(screen_texture,SCREEN_UV).rgb;
	vec3 soft=(original*4.0+texture(screen_texture,SCREEN_UV+vec2(step_uv.x,0.0)).rgb+texture(screen_texture,SCREEN_UV-vec2(step_uv.x,0.0)).rgb+texture(screen_texture,SCREEN_UV+vec2(0.0,step_uv.y)).rgb+texture(screen_texture,SCREEN_UV-vec2(0.0,step_uv.y)).rgb)/8.0;
	COLOR=vec4(mix(original,soft,softness)+vec3(.022,.012,0.0)*softness,1.0);
}
