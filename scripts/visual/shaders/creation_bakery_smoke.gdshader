shader_type spatial;
render_mode blend_mix, depth_draw_never, diffuse_burley, specular_disabled;
varying float puff_age;

float smoke_hash(vec2 p) { return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453); }

void vertex() {
	vec3 chimney = MODEL_MATRIX[3].xyz;
	float seed = smoke_hash(chimney.xz);
	puff_age = fract(TIME*0.28+COLOR.r+seed);
	float size = mix(0.065,0.28,smoothstep(0.0,0.85,puff_age));
	// TG's recovered smoke has .05 horizontal noise and cyclic motion.
	// Lifetime, world rise and puff geometry here are our miniature adaptation.
	float drift = puff_age*puff_age;
	VERTEX *= size;
	VERTEX += vec3(drift*0.42+sin(TIME*0.7+seed*6.28+puff_age*3.0)*0.05,
		puff_age*1.65,drift*0.18+cos(TIME*0.6+seed*6.28+puff_age*4.0)*0.05);
}

void fragment() {
	// Our first opaque noise version read as sparks. Soft alpha puffs retain
	// the recovered height-fade idea, without claiming its opaque pipeline.
	float coverage = smoothstep(0.0,0.09,puff_age)*(1.0-smoothstep(0.35,1.0,puff_age));
	ALBEDO = vec3(0.78,0.785,0.74);
	ALPHA = coverage*0.27*pow(max(dot(normalize(NORMAL),normalize(VIEW)),0.0),1.5);
	ROUGHNESS = 1.0;
}
