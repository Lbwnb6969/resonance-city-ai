// World-metric continuous paving. Pixel footprints average the fine joints;
// no extra geometry, material instances or per-stone draw calls are created.
vec4 paving_sample(vec2 at,float pattern,vec3 fallback){
	int kind=int(round(pattern*4.0));
	if(kind==0){return vec4(fallback,0.0);}
	float footprint=max(length(dFdx(at)),length(dFdy(at)));
	float detail=1.0-smoothstep(.025,.10,footprint);
	if(kind==4){
		float fine=path_noise(at*58.0);
		vec3 gravel=mix(vec3(.58,.55,.46),vec3(.74,.71,.60),path_noise(at*8.0));
		return vec4(gravel*(1.0+(fine-.5)*.20*detail),fine*.0015*detail);
	}
	vec2 scale=kind==2 ? vec2(.34,.16) : vec2(.26,.21);
	float row=floor(at.y/scale.y);
	vec2 grid=vec2(at.x/scale.x+mod(row,2.0)*.5,at.y/scale.y);
	vec2 cell=fract(grid);vec2 edge=min(cell,1.0-cell)*scale;
	float joint=min(edge.x,edge.y);
	vec2 id=floor(grid);
	if(kind==1){
		vec2 p=at/vec2(.26,.23),base=floor(p),f=fract(p);
		float first=100.0,second=100.0;
		for(int y=-1;y<=1;y++){
			for(int x=-1;x<=1;x++){
				vec2 offset=vec2(float(x),float(y));
				vec2 seed=base+offset;
				vec2 center=.2+.6*vec2(path_hash(seed+17.0),path_hash(seed+41.0));
				float distance=length(offset+center-f);
				if(distance<first){second=first;first=distance;id=seed;}
				else{second=min(second,distance);}
			}
		}
		joint=min((second-first)*.10,(.66-first)*.15);
	}else if(kind==3){
		float band=floor(at.y/.72);
		vec2 fan=vec2((fract(at.x/1.2+mod(band,2.0)*.5)-.5)*1.2,mod(at.y,.72)+.24);
		float radial=length(fan)/.15;
		float angle=atan(fan.x,fan.y);
		float segment=angle*(4.0+floor(radial))*1.9;
		joint=min(min(fract(radial),1.0-fract(radial))*.15,min(fract(segment),1.0-fract(segment))*.18);
		id=vec2(floor(radial)+band*11.0,floor(segment));
	}
	float aa=max(fwidth(joint),.0008);
	float face=smoothstep(.003-aa,.010+aa,joint);
	float seed=path_hash(id);
	vec3 low=kind==2 ? vec3(.56,.29,.19) : kind==3 ? vec3(.46,.50,.48) : vec3(.51,.49,.43);
	vec3 high=kind==2 ? vec3(.76,.48,.32) : kind==3 ? vec3(.70,.72,.65) : vec3(.73,.69,.58);
	vec3 stone=mix(low,high,seed);
	vec3 mortar=kind==2 ? vec3(.43,.39,.30) : vec3(.35,.37,.32);
	return vec4(mix(mix(low,high,.5)*.94,mix(mortar,stone,face),detail),face*.003*detail);
}
vec3 paving_normal(vec3 normal,vec3 position,float height){
	vec3 px=dFdx(position),py=dFdy(position);
	vec3 rx=cross(py,normal),ry=cross(normal,px);
	float determinant=dot(px,rx);
	if(abs(determinant)<1e-10){return normal;}
	return normalize(normal-(rx*dFdx(height)+ry*dFdy(height))/determinant);
}
