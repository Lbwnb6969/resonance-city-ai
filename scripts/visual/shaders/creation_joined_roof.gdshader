shader_type spatial;
render_mode diffuse_burley, specular_disabled;
uniform vec4 roof_color : source_color = vec4(0.73,0.44,0.33,1.0);
varying vec3 roof_normal;
varying vec3 roof_contour;
varying vec3 roof_downhill;

float tile_hash(vec2 p) {
	return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);
}

void vertex() {
	roof_normal = normalize(MODEL_NORMAL_MATRIX*NORMAL);
	vec3 contour=vec3(NORMAL.z,0.0,-NORMAL.x);
	if(dot(contour,contour)<0.0001){contour=vec3(1.0,0.0,0.0);}
	contour=normalize(contour);
	roof_contour=normalize((MODEL_MATRIX*vec4(contour,0.0)).xyz);
	roof_downhill=normalize((MODEL_MATRIX*vec4(cross(contour,NORMAL),0.0)).xyz);
}

float pulse_integral(float x,float width){
	return floor(x)*width+min(fract(x),width);
}
float filtered_joint(float at,float width,float footprint){
	float half_pixel=footprint*0.5;
	return clamp((pulse_integral(at+half_pixel,width)-pulse_integral(at-half_pixel,width))/footprint,0.0,1.0);
}

void fragment() {
	vec3 normal=normalize(roof_normal);
	vec3 contour=normalize(roof_contour);
	vec3 downhill=normalize(roof_downhill);
	vec2 tile=UV;
	// Take derivatives before the discontinuous stagger, then integrate seams
	// and barrel normals across the actual pixel footprint.
	vec2 footprint=max(fwidth(tile),vec2(0.0001));
	float detail=1.0-smoothstep(0.22,0.75,max(footprint.x,footprint.y));
	tile.x += mod(floor(tile.y),2.0)*0.5;
	vec2 cell = floor(tile);
	vec2 uv = fract(tile);
	// TG's 64-byte shingle records carry individual seed/scale/quaternion.
	// This shared surface adapts that stable per-tile variation without nodes.
	float seed = tile_hash(cell);
	float tilt = tile_hash(cell+vec2(19.3,47.1));
	float side_joint=filtered_joint(tile.x+0.035,0.07,footprint.x);
	float overlap=filtered_joint(tile.y,0.11,footprint.y);
	float barrel=(sin(PI*fract(tile.x+footprint.x*0.5))-sin(PI*fract(tile.x-footprint.x*0.5)))/(PI*footprint.x);
	float across=-barrel*0.19+(seed-0.5)*0.025;
	float along = 0.045+(tilt-0.5)*0.035;
	vec3 tile_normal = normalize(normal+(contour*across-downhill*along)*detail);
	NORMAL = normalize((VIEW_MATRIX*vec4(tile_normal,0.0)).xyz);

	vec3 scatter = mix(vec3(0.955,0.945,0.935),vec3(1.045,1.025,0.995),seed);
	vec3 base = roof_color.rgb*mix(vec3(1.0),scatter,detail);
	// Restrained green in a few shaded overlap seams; no invented eave bounds.
	float moss = smoothstep(0.84,0.98,tilt)*overlap*detail;
	base = mix(base,base*vec3(0.76,0.91,0.70),moss*0.28);
	float cavity = 1.0-detail*(overlap*0.14+side_joint*0.045);
	ALBEDO = base*cavity;
	AO = cavity;
	AO_LIGHT_AFFECT = 0.35;
	ROUGHNESS = 0.90;
}
