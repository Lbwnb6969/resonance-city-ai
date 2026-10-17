uniform vec2 festival_origin=vec2(0.0);
uniform float festival_time=0.0;
uniform float festival_strength=0.0;
float festival_wave(float distance_m) {
	float behind=festival_time-distance_m/6.0;
	float pulse=pow(max(0.0,cos((distance_m-festival_time*6.0)*6.2831853/9.0)),24.0);
	return pulse*smoothstep(0.0,0.35,behind)*festival_strength*exp(-distance_m*0.002);
}
