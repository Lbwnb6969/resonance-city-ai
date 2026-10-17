uniform vec4 road_low : source_color = vec4(0.62,0.56,0.44,1.0);
uniform vec4 road_high : source_color = vec4(0.72,0.66,0.53,1.0);
float path_hash(vec2 p) { return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453); }
float path_noise(vec2 p) {
	vec2 f = fract(p); vec2 at = floor(p); f = f*f*(3.0-2.0*f);
	return mix(mix(path_hash(at),path_hash(at+vec2(1.0,0.0)),f.x),mix(path_hash(at+vec2(0.0,1.0)),path_hash(at+vec2(1.0)),f.x),f.y);
}
vec3 path_color(vec2 at) {
	float grain = path_noise(at*2.2)*0.72+path_noise(at*12.0)*0.28;
	return mix(road_low.rgb,road_high.rgb,grain);
}
