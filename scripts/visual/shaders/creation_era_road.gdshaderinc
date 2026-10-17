uniform sampler2DArray era_road_field : filter_linear,repeat_disable;
uniform bool era_road_enabled=false;
vec4 road_era_weights(vec2 at){
	if(!era_road_enabled || any(lessThan(at,vec2(-40.0))) || any(greaterThan(at,vec2(40.0))))return vec4(1.0,0.0,0.0,0.0);
	vec2 tile_at=clamp((at+40.0)/8.0,vec2(0.0),vec2(9.99999));
	vec2 tile=floor(tile_at);
	vec2 uv=(fract(tile_at)*16.0+1.0)/18.0;
	vec4 w=texture(era_road_field,vec3(uv,tile.y*10.0+tile.x));
	return w/max(dot(w,vec4(1.0)),.001);
}
vec3 era_road_color(vec2 at,vec3 original,float paving){
	vec4 w=road_era_weights(at);
	vec2 grid=vec2(at.x/.46+mod(floor(at.y/.29),2.0)*.5,at.y/.29);
	vec2 seam=min(fract(grid),1.0-fract(grid));
	float face=smoothstep(.015,.045,min(seam.x,seam.y));
	float grain=fract(sin(dot(floor(grid),vec2(73.1,153.7)))*35129.43);
	vec3 ren=mix(vec3(.48,.46,.38),mix(vec3(.69,.65,.54),vec3(.79,.74,.62),grain),face);
	vec3 clock=mix(vec3(.40,.42,.39),mix(vec3(.57,.60,.56),vec3(.68,.68,.60),grain),face);
	vec3 eco=mix(vec3(.50,.54,.50),mix(vec3(.73,.76,.69),vec3(.83,.83,.76),grain),face);
	vec3 mixed=original*w.x+ren*w.y+clock*w.z+eco*w.w;
	return mix(original,mixed,paving);
}
