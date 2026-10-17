shader_type spatial;
varying vec2 water_at;
void vertex() {
	water_at=VERTEX.xz;
	VERTEX.y+=sin(length(VERTEX.xz)*15.0-TIME*2.2)*.005;
}
void fragment() {
	float ripple=sin(length(water_at)*19.0-TIME*2.2)*.5+.5;
	ALBEDO=mix(vec3(.28,.55,.49),vec3(.65,.80,.66),ripple*.24);
	ROUGHNESS=.22;
	SPECULAR=.65;
}
