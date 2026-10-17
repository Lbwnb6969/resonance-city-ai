shader_type spatial;
render_mode unshaded, blend_mix, cull_disabled, depth_draw_never;
// The editing guide reuses the musical ribbon mesh and arch, with a steadier
// visible core so an authored link remains legible over bright grass/water.
uniform vec3 from_at = vec3(0.0);
uniform vec3 to_at = vec3(0.0);
uniform vec4 tint : source_color = vec4(1.0, 0.72, 0.30, 1.0);
uniform float strength = 0.8;
varying vec2 ribbon_uv;
void vertex() {
	ribbon_uv=UV;
	vec3 direction=to_at-from_at;
	vec3 cross_axis=normalize(vec3(-direction.z,0.0,direction.x)+vec3(0.00001,0.0,0.0));
	vec3 center=mix(from_at,to_at,UV.x);
	center.y+=sin(UV.x*3.141593)*min(2.0,0.35+length(direction.xz)*0.13);
	VERTEX=center+cross_axis*((UV.y-0.5)*0.18);
}
void fragment() {
	float edge=1.0-abs(ribbon_uv.y*2.0-1.0);
	float ends=sin(ribbon_uv.x*3.141593);
	float flow=pow(max(0.0,sin(ribbon_uv.x*12.56637-TIME*1.8)),5.0);
	ALBEDO=tint.rgb;
	ALPHA=strength*tint.a*edge*ends*(0.48+flow*0.35);
}
