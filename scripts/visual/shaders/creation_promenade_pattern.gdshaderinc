float stone_hash(vec2 p) { return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453); }
vec3 promenade_color(vec2 at) {
	float row=floor(at.y/.34);
	vec2 grid=vec2(at.x/.56+mod(row,2.0)*.5,at.y/.34);
	vec2 cell=fract(grid);
	vec2 edge=min(cell,1.0-cell)*vec2(.56,.34);
	float joint=min(edge.x,edge.y);
	float aa=max(fwidth(joint),.0005);
	float face=smoothstep(.009-aa,.016+aa,joint);
	float variation=stone_hash(floor(grid));
	vec3 stone=mix(vec3(.57,.55,.47),vec3(.72,.68,.56),variation);
	float grain=stone_hash(floor(at*150.0));
	stone*=.97+.045*grain;
	return mix(vec3(.40,.40,.35),stone,face);
}
