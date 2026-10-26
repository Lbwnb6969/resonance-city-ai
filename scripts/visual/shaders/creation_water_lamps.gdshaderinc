uniform int water_lamp_count=0;
uniform vec4 water_lamps[16];
vec3 waterfront_shimmer(vec2 at,float depth,vec3 eye) {
	vec3 result=vec3(0.0);
	for (int i=0;i<16;i++) {
		if (i>=water_lamp_count) { break; }
		vec3 lamp=water_lamps[i].xyz;
		vec2 direction=safe_normalize(eye.xz-lamp.xz);
		vec2 offset=at-lamp.xz;
		float along=dot(offset,direction);
		float across=dot(offset,vec2(-direction.y,direction.x));
		float stretch=clamp((lamp.y-world_at.y)*3.5,2.2,10.0);
		float shimmer=sin(along*15.0+TIME*2.1+sin(at.x*5.7-TIME)*1.2);
		float width=.16+max(along,0.0)*.055;
		float ribbon=exp(-across*across/(width*width));
		ribbon*=smoothstep(-.35,.08,along)*(1.0-smoothstep(.3*stretch,stretch,along));
		ribbon*=mix(.38,1.0,smoothstep(-.15,.85,shimmer));
		result+=vec3(.46,.26,.07)*ribbon*water_lamps[i].w*smoothstep(.04,.24,depth);
	}
	return result;
}
