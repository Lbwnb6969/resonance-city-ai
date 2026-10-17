shader_type spatial;
render_mode diffuse_burley, specular_disabled;
uniform vec4 roof_color : source_color = vec4(0.73,0.44,0.33,1.0);
varying vec3 world_at;
varying vec3 roof_normal;

float tile_hash(vec2 p) {
	return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);
}

void vertex() {
	world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
	roof_normal = normalize(MODEL_NORMAL_MATRIX*NORMAL);
}

void fragment() {
	// Shared mesh normals are smoothed around hipped ridges. Projection needs
	// the geometric plane, otherwise the tile grid bends into triangular moire.
	vec3 normal = normalize(cross(dFdx(world_at),dFdy(world_at)));
	if (dot(normal,roof_normal)<0.0) { normal=-normal; }
	// Use the actual roof plane: rows follow a contour, courses run downhill.
	// This also rotates the barrel normals on X-facing and hipped roof faces.
	vec3 contour = vec3(normal.z,0.0,-normal.x);
	if (dot(contour,contour)<0.0001) {
		contour = vec3(1.0,0.0,0.0);
	}
	contour = normalize(contour);
	vec3 downhill = normalize(cross(contour,normal));
	// Our 22 x 28 cm projected shingle scale, not TG's recovered row spacing.
	vec2 tile = vec2(dot(world_at,contour)/0.22,dot(world_at,downhill)/0.28);
	float detail = 1.0-smoothstep(0.35,1.05,max(fwidth(tile.x),fwidth(tile.y)));
	tile.x += mod(floor(tile.y),2.0)*0.5;
	vec2 cell = floor(tile);
	vec2 uv = fract(tile);
	// TG's 64-byte shingle records carry individual seed/scale/quaternion.
	// This shared surface adapts that stable per-tile variation without nodes.
	float seed = tile_hash(cell);
	float tilt = tile_hash(cell+vec2(19.3,47.1));
	float aa_x = max(fwidth(tile.x),0.005);
	float aa_y = max(fwidth(tile.y),0.005);
	float side_joint = 1.0-smoothstep(aa_x,0.07+aa_x,min(uv.x,1.0-uv.x));
	float overlap = 1.0-smoothstep(aa_y,0.11+aa_y,uv.y);
	float across = -cos(uv.x*PI)*0.19+(seed-0.5)*0.025;
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
