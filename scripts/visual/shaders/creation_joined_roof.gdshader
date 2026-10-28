shader_type spatial;
render_mode diffuse_burley, specular_disabled;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"
#include "res://scripts/visual/shaders/creation_roof_layer_direction.gdshaderinc"
uniform vec4 roof_color : source_color = vec4(0.73,0.44,0.33,1.0);
varying vec3 roof_normal;
varying vec3 roof_at;

float tile_hash(vec2 p) {
	return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);
}

void vertex() {
	roof_normal = safe_normalize(MODEL_NORMAL_MATRIX*NORMAL);
	roof_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz;
}

float pulse_integral(float x,float width){
	return floor(x)*width+min(fract(x),width);
}
float filtered_joint(float at,float width,float footprint){
	float half_pixel=footprint*0.5;
	return clamp((pulse_integral(at+half_pixel,width)-pulse_integral(at-half_pixel,width))/footprint,0.0,1.0);
}

void fragment() {
	vec3 normal=safe_normalize(roof_normal);
	vec3 contour=vec3(normal.z,0.0,-normal.x);
	if(dot(contour,contour)<0.0001){contour=vec3(1.0,0.0,0.0);}
	contour=safe_normalize(contour);
	vec3 downhill=safe_normalize(cross(contour,normal));
	// Reconstruct the actual chart axes before staggering the tile coordinates.
	// Dividing by the signed Jacobian first keeps tiny screen derivatives from
	// shrinking under safe_normalize and preserves mirrored/rotated charts.
	vec3 px=dFdx(roof_at), py=dFdy(roof_at);
	vec2 ux=dFdx(UV), uy=dFdy(UV);
	float determinant=ux.x*uy.y-ux.y*uy.x;
	if(abs(determinant)>0.0000000001){
		vec3 u=(px*uy.y-py*ux.y)/determinant;
		vec3 v=(py*ux.x-px*uy.x)/determinant;
		contour=safe_normalize(u-normal*dot(normal,u));
		downhill=safe_normalize(v-normal*dot(normal,v)-contour*dot(contour,v));
	}
	downhill=roof_layer_downhill(downhill);
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
	vec3 tile_normal = safe_normalize(normal+(contour*across-downhill*along)*detail);
	NORMAL = safe_normalize((VIEW_MATRIX*vec4(tile_normal,0.0)).xyz);

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
