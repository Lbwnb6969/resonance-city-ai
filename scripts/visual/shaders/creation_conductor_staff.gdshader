shader_type spatial;
render_mode unshaded, cull_disabled, shadows_disabled;
uniform float music_clock=0.;
varying vec3 world_at;
void vertex(){world_at=(MODEL_MATRIX*vec4(VERTEX,1.)).xyz;}
void fragment(){
	float wave=.5+.5*sin(world_at.x*.65+world_at.z*.48-music_clock*6.2831853/3.);
	vec3 gold=mix(vec3(.73,.37,.08),vec3(1.,.87,.54),wave);
	ALBEDO=gold;EMISSION=gold*(.2+wave*.5);
}
