shader_type spatial;
render_mode diffuse_burley, specular_schlick_ggx, cull_back;
#include "res://scripts/visual/shaders/creation_safe_math.gdshaderinc"

uniform vec4 albedo_color : source_color = vec4(1.0);
uniform sampler2D wall_texture : source_color, filter_linear_mipmap, repeat_enable;
uniform bool use_wall_texture = false;
uniform vec2 uv_scale = vec2(1.0);
uniform vec2 uv_offset = vec2(0.0);
uniform float world_base_y = 0.0;
uniform float story_height = 1.7;
uniform float roughness = 0.93;
uniform float metallic = 0.0;
uniform float specular = 0.5;
uniform float micro_normal_strength = 0.022;
uniform int surface_kind = 0;
uniform vec2 component_bounds = vec2(0.0,1.7);

varying vec3 world_at;
varying vec3 wall_normal;
varying vec4 wall_color;

vec3 wall_srgb_to_linear(vec3 value) {
	return mix(value / 12.92, pow((value + 0.055) / 1.055, vec3(2.4)), step(vec3(0.04045), value));
}

float wall_hash(vec2 at) {
	return fract(sin(dot(at,vec2(127.1,311.7))) * 43758.5453);
}

// Value and analytic derivatives share the same smooth paper height field.
vec3 paper_noise(vec2 at) {
	vec2 cell = floor(at), f = fract(at);
	vec2 u = f*f*(3.0-2.0*f), du = 6.0*f*(1.0-f);
	float a = wall_hash(cell), b = wall_hash(cell+vec2(1.0,0.0));
	float c = wall_hash(cell+vec2(0.0,1.0)), d = wall_hash(cell+vec2(1.0));
	return vec3(mix(mix(a,b,u.x),mix(c,d,u.x),u.y),
		du.x*mix(b-a,d-c,u.y), du.y*mix(c-a,d-b,u.x));
}
vec3 paper(vec2 at, float fine) {
	vec3 coarse = paper_noise(at*4.5), small = paper_noise(at*16.0);
	return vec3(coarse.x*.70+small.x*.30*fine,
		coarse.yz*3.15+small.yz*4.8*fine);
}

void vertex() {
	world_at = (MODEL_MATRIX * vec4(VERTEX,1.0)).xyz;
	wall_normal = safe_normalize(MODEL_NORMAL_MATRIX * NORMAL);
	wall_color = COLOR;
}

void fragment() {
	// Batcher stores authored sRGB colors byte-exact for the palette cache.
	// Compatibility works in sRGB; Forward+/Mobile require this explicit decode.
	vec3 tint = OUTPUT_IS_SRGB ? wall_color.rgb : wall_srgb_to_linear(wall_color.rgb);
	vec3 base = albedo_color.rgb * tint;
	if (use_wall_texture) {
		// Preserve source stone UVs; world projection would stretch arch walls.
		base *= texture(wall_texture,UV * uv_scale + uv_offset).rgb;
	}
	vec3 normal = safe_normalize(wall_normal);
	// Blend all three world projections; poles, bevels and octagonal seams
	// retain the same grain size without UV stretching or tangent singularities.
	vec3 weights = pow(abs(normal),vec3(4.0));
	weights /= max(weights.x+weights.y+weights.z,0.0001);
	float footprint = max(length(dFdx(world_at)),length(dFdy(world_at)));
	float fine = 1.0-smoothstep(0.018,0.070,footprint);
	float detail = 1.0-smoothstep(0.09,0.28,footprint);
	vec3 x = paper(world_at.yz,fine), y = paper(world_at.xz,fine), z = paper(world_at.xy,fine);
	if (surface_kind == 5) {
		// Vertical joinery: long fibres on the side, end grain on horizontal cuts.
		x=paper_noise(vec2(world_at.y*1.2,world_at.z*36.0));x.yz*=vec2(1.2,36.0);
		y=paper_noise(world_at.xz*18.0);y.yz*=18.0;
		z=paper_noise(vec2(world_at.x*36.0,world_at.y*1.2));z.yz*=vec2(36.0,1.2);
		x=mix(vec3(.5,0.,0.),x,fine);y=mix(vec3(.5,0.,0.),y,fine);z=mix(vec3(.5,0.,0.),z,fine);
	}
	float grain = dot(vec3(x.x,y.x,z.x),weights);
	vec3 gradient = vec3(0.0,x.yz)*weights.x + vec3(y.y,0.0,y.z)*weights.y + vec3(z.yz,0.0)*weights.z;
	gradient -= normal*dot(gradient,normal);
	vec3 perturbed = safe_normalize(normal-gradient*micro_normal_strength*detail);
	NORMAL = safe_normalize((VIEW_MATRIX * vec4(perturbed,0.0)).xyz);
	float pigment = surface_kind == 2 ? 0.065 : (surface_kind == 3 ? 0.05 : 0.035);
	if (surface_kind == 5) { pigment=.14; }
	if (surface_kind == 6) { pigment=.045; }
	base *= 1.0+(grain-0.5)*pigment*detail;
	base *= mix(vec3(1.0),vec3(1.012,1.0,0.975),grain*0.35*detail);

	// The datum belongs to the whole authored house, including raised houses.
	// Individual BoxMesh origins and joined-wall widths never enter the AO.
	float height = max(world_at.y-world_base_y,0.0);
	float facade = 1.0-smoothstep(0.30,0.85,abs(normal.y));
	float root_cavity = 1.0-0.16*(1.0-smoothstep(0.05,0.66,height))*facade;
	float story_y = mod(height,max(story_height,0.1));
	float eave_cavity = 1.0-0.10*smoothstep(max(story_height-0.27,0.0),story_height,story_y)*facade;
	float cavity = root_cavity*eave_cavity;
	if (surface_kind > 0) {
		float span = max(component_bounds.y-component_bounds.x,0.02);
		float bottom = max(world_at.y-component_bounds.x,0.0);
		float top = max(component_bounds.y-world_at.y,0.0);
		float contact = 1.0-smoothstep(0.0,min(span*0.3,0.22),bottom);
		float lip = 1.0-smoothstep(0.0,min(span*0.22,0.12),top);
		// Darken the underside and joining rim, keeping sunlit roof crowns clean.
		float underside = 1.0-smoothstep(-0.7,0.15,normal.y);
		cavity *= 1.0-0.15*contact*(0.35+0.65*facade);
		cavity *= 1.0-0.09*lip*facade-0.12*underside;
	}
	ALBEDO = base*mix(vec3(0.91,0.95,1.0),vec3(1.0),cavity)*mix(0.96,1.0,cavity);
	AO = cavity;
	AO_LIGHT_AFFECT = 0.40;
	ROUGHNESS = clamp(roughness+(grain-.5)*detail*(surface_kind==5 ? .10 : (surface_kind==6 ? .06 : 0.)),0.04,1.0);
	METALLIC = metallic;
	SPECULAR = specular;
}
