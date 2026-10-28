#ifndef CREATION_WIND
#define CREATION_WIND
// One world-space breeze for lawn, foliage, flowers and pinned canvas.
const vec2 CREATION_WIND_DIRECTION=normalize(vec2(.82,.57));
float creation_wind_gust(vec2 at,float clock){
	return sin(dot(at,CREATION_WIND_DIRECTION)*.48-clock*1.15)*.68
		+sin(at.x*.73-at.y*.38-clock*1.73)*.32;
}
vec3 creation_wind_offset(vec2 at,float clock,float amplitude){
	vec2 drift=CREATION_WIND_DIRECTION*creation_wind_gust(at,clock)*amplitude;
	return vec3(drift.x,0.,drift.y);
}
#endif
