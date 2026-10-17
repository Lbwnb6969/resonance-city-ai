shader_type spatial;
render_mode diffuse_burley, specular_disabled, cull_back;

uniform vec4 albedo_color : source_color = vec4(1.0);
uniform sampler2D wall_texture : source_color, filter_linear_mipmap, repeat_enable;
uniform bool use_wall_texture = false;
uniform vec2 uv_scale = vec2(1.0);
uniform vec2 uv_offset = vec2(0.0);
uniform float world_base_y = 0.0;
uniform float story_height = 1.7;
uniform float roughness = 0.93;
uniform float micro_normal_strength = 0.022;

varying vec3 world_at;
varying vec3 wall_normal;
varying vec4 wall_color;

vec3 wall_srgb_to_linear(vec3 value) {
	return mix(value / 12.92, pow((value + 0.055) / 1.055, vec3(2.4)), step(vec3(0.04045), value));
}

float wall_hash(vec2 at) {
	return fract(sin(dot(at,vec2(127.1,311.7))) * 43758.5453);
}

float wall_noise(vec2 at) {
	vec2 cell = floor(at);
	vec2 blend = fract(at);
	blend = blend * blend * (3.0 - 2.0 * blend);
	return mix(mix(wall_hash(cell),wall_hash(cell+vec2(1.0,0.0)),blend.x),
		mix(wall_hash(cell+vec2(0.0,1.0)),wall_hash(cell+vec2(1.0)),blend.x),blend.y);
}

float plaster_height(vec2 at, float fine_detail) {
	return wall_noise(at * 4.5) * 0.70 + wall_noise(at * 16.0) * 0.30 * fine_detail;
}

void vertex() {
	world_at = (MODEL_MATRIX * vec4(VERTEX,1.0)).xyz;
	wall_normal = normalize(MODEL_NORMAL_MATRIX * NORMAL);
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
	vec3 normal = normalize(wall_normal);
	vec3 tangent = vec3(normal.z,0.0,-normal.x);
	if (dot(tangent,tangent) < 0.0001) {
		tangent = vec3(1.0,0.0,0.0);
	}
	tangent = normalize(tangent);
	vec3 vertical = normalize(cross(normal,tangent));
	vec2 planar = vec2(dot(world_at,tangent),dot(world_at,vertical));
	float footprint = max(length(dFdx(planar)),length(dFdy(planar)));
	float fine_detail = 1.0-smoothstep(0.018,0.070,footprint);
	float detail = 1.0-smoothstep(0.09,0.28,footprint);
	float grain = plaster_height(planar,fine_detail);
	// Both slopes differentiate the same height field at the same frequency.
	float epsilon = 0.015;
	float slope_u = (plaster_height(planar+vec2(epsilon,0.0),fine_detail)-plaster_height(planar-vec2(epsilon,0.0),fine_detail))/(2.0*epsilon);
	float slope_v = (plaster_height(planar+vec2(0.0,epsilon),fine_detail)-plaster_height(planar-vec2(0.0,epsilon),fine_detail))/(2.0*epsilon);
	vec3 perturbed = normalize(normal-(tangent*slope_u+vertical*slope_v)*micro_normal_strength*detail);
	NORMAL = normalize((VIEW_MATRIX * vec4(perturbed,0.0)).xyz);
	base *= 1.0+(grain-0.5)*0.035*detail;

	// The datum belongs to the whole authored house, including raised houses.
	// Individual BoxMesh origins and joined-wall widths never enter the AO.
	float height = max(world_at.y-world_base_y,0.0);
	float facade = 1.0-smoothstep(0.30,0.85,abs(normal.y));
	float root_cavity = 1.0-0.16*(1.0-smoothstep(0.05,0.66,height))*facade;
	float story_y = mod(height,max(story_height,0.1));
	float eave_cavity = 1.0-0.10*smoothstep(max(story_height-0.27,0.0),story_height,story_y)*facade;
	float cavity = root_cavity*eave_cavity;
	ALBEDO = base*mix(vec3(0.91,0.95,1.0),vec3(1.0),cavity)*mix(0.96,1.0,cavity);
	AO = cavity;
	AO_LIGHT_AFFECT = 0.40;
	ROUGHNESS = roughness;
}

void light() {
	float facing = dot(NORMAL,LIGHT);
	float wrapped = max((facing+0.12)/1.12,0.0);
	vec3 temperature = mix(vec3(0.90,0.95,1.04),vec3(1.025,1.005,0.96),smoothstep(-0.12,0.85,facing));
	DIFFUSE_LIGHT += temperature*LIGHT_COLOR*ATTENUATION*wrapped/PI;
}
