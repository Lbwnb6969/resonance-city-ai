shader_type spatial;
#include "res://scripts/visual/shaders/creation_festival_wave.gdshaderinc"
render_mode cull_disabled, diffuse_burley, specular_schlick_ggx;
uniform vec4 water_deep : source_color = vec4(0.38,0.61,0.56,1.0);
uniform vec4 water_shallow : source_color = vec4(0.46,0.63,0.52,1.0);
uniform vec4 sky_reflection_day : source_color = vec4(0.72,0.86,0.92,1.0);
uniform vec4 sky_reflection_evening : source_color = vec4(0.96,0.72,0.52,1.0);
uniform float evening : hint_range(0.0,1.0) = 0.0;
uniform float night : hint_range(0.0,1.0) = 0.0;
uniform vec2 travel_ripple_at = vec2(0.0);
uniform float travel_ripple_time = 0.0;
uniform float travel_ripple_strength = 0.0;
varying vec3 world_at;
#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_shore_palette.gdshaderinc"
#include "res://scripts/visual/shaders/creation_travel_ripple.gdshaderinc"

void vertex() { world_at = (MODEL_MATRIX*vec4(VERTEX,1.0)).xyz; }

void fragment() {
	vec2 at = world_at.xz;
	// This is horizontal distance into water, not vertical bathymetry.
	float depth = max(0.0,-shore_distance(at));
	float grain = meadow_noise(at*2.1)*0.06+meadow_noise(at*0.45)*0.03;
	float water_cover = smoothstep(0.01,0.13+grain,depth);
	float wave_a = sin(at.x*2.4+at.y*1.6+TIME*0.85);
	float wave_b = cos(at.x*1.7-at.y*2.9-TIME*0.65);
	vec3 wave_normal = normalize(vec3((wave_a+wave_b)*0.018*water_cover,1.0,(wave_a-wave_b)*0.018*water_cover));
	NORMAL = normalize((VIEW_MATRIX*vec4(wave_normal,0.0)).xyz);

	// Preserve the shared meadow/Foundation wet-sand contact palette.
	vec3 ground = shore_ground(at,meadow_color(at,grass_low.rgb,grass_high.rgb));
	vec3 bed = mix(bank_soil.rgb*0.64,water_shallow.rgb,smoothstep(0.03,0.27+grain,depth));
	float caustic = smoothstep(0.65,0.94,sin(at.x*6.5+TIME*0.7)*cos(at.y*6.5-TIME*0.6)*0.5+0.5);
	float shallows = smoothstep(0.03,0.14,depth)*(1.0-smoothstep(0.22,0.55,depth));
	bed += vec3(0.016,0.021,0.015)*caustic*shallows*(1.0-night*0.8);
	vec3 water = mix(bed,water_deep.rgb,smoothstep(0.18,0.60+grain,depth));
	float ripples = sin(at.y*1.05+TIME*0.28)+sin(at.x*1.73-at.y*0.31-TIME*0.17);
	water *= 1.0+ripples*0.018;

	// Placemaker/Water: frac triangle wave, -time*.4, 1.4 band bias,
	// threshold 1.1 and fwidth(2*q+b). Metre mapping/opacity are ours.
	float shore_band = clamp(1.0-depth/0.28,0.0,1.0);
	float q = depth*7.5-TIME*0.4+grain*2.2;
	float b = 1.4*(shore_band-0.28);
	float triangle = 2.0*abs(fract(q)-0.5);
	float coverage = clamp((triangle+b-1.1)/max(fwidth(2.0*q+b),0.025),0.0,1.0);
	float foam = coverage*smoothstep(0.01,0.05,depth)*(1.0-smoothstep(0.08,0.28,depth));
	vec3 foam_color = mix(vec3(0.83,0.88,0.79),vec3(0.87,0.78,0.65),evening*0.5);
	water = mix(water,foam_color,foam*0.22*(1.0-night*0.65));

	// A quiet analytic sky tint; no screen texture or extra reflection pass.
	float fresnel = pow(1.0-clamp(dot(NORMAL,VIEW),0.0,1.0),5.0);
	vec3 sky = mix(sky_reflection_day.rgb,sky_reflection_evening.rgb,evening);
	sky = mix(sky,vec3(0.14,0.22,0.34),night);
	water = mix(water,sky,(0.025+fresnel*0.18)*smoothstep(0.05,0.25,depth));
	float crest = sin(at.y*3.2+sin(at.x*1.1+TIME*0.20)*1.2-TIME*0.32);
	float light = smoothstep(0.965,1.0,crest)*smoothstep(0.68,0.88,meadow_noise(at*0.57+vec2(TIME*0.012,0.0)));
	water += mix(vec3(0.017,0.021,0.017),vec3(0.025,0.017,0.009),evening)*light*smoothstep(0.25,0.7,depth)*(1.0-night*0.7);
	if (travel_ripple_strength > 0.0) {
		float travel_wave = travel_water_wave(at,travel_ripple_at,travel_ripple_at,travel_ripple_time);
		water += vec3(0.11,0.14,0.12)*travel_wave*travel_ripple_strength*smoothstep(0.10,0.35,depth);
	}
	ALBEDO = mix(ground,water,water_cover);
	float festival=festival_wave(distance(at,festival_origin))*water_cover;
	ALBEDO=mix(ALBEDO,vec3(.95,.77,.35),festival*.56);
	EMISSION=vec3(.58,.34,.08)*festival;
	ROUGHNESS = mix(1.0,0.64,smoothstep(0.24,0.8,depth));
	SPECULAR = mix(0.0,0.16,smoothstep(0.12,0.6,depth));
}
