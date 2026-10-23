shader_type spatial;
render_mode blend_mix, depth_draw_opaque, cull_disabled, specular_disabled;
uniform float night_glow = 0.0;
uniform float salon_pulse=0.0;
uniform float harmony = 0.0;
uniform float clock_sec = 0.0;
uniform float beat_pulse : hint_range(0.0, 1.0) = 0.0;
uniform float response : hint_range(0.0, 1.0) = 0.0;
uniform float lead : hint_range(0.0, 1.0) = 0.0;
uniform float afterglow : hint_range(0.0, 1.0) = 0.0;
uniform float finale_glow : hint_range(0.0, 1.0) = 0.0;
uniform float festival_ready : hint_range(0.0, 1.0) = 0.0;
uniform float house_phase = 0.0;
uniform float pluck_strength : hint_range(0.0, 1.0) = 0.0;
uniform float pluck_progress : hint_range(0.0, 1.0) = 0.0;
uniform float pluck_base_y = 0.0;
uniform float pluck_height = 1.7;
varying float part;
varying float window_height;
void vertex() {
	part = floor(COLOR.r * 8.0 + 0.5);
	window_height = clamp((VERTEX.y-pluck_base_y)/max(pluck_height,0.01),0.0,1.0);
	if (part > 1.5 && part < 2.5) {
		VERTEX.x += sin(clock_sec * 8.37758 + house_phase + UV.y * 1.6) * 0.055 * UV.y * response;
		VERTEX.z += cos(clock_sec * 8.37758 + house_phase) * 0.035 * UV.y * response;
	}
	if (part > 4.5 && part < 5.5) VERTEX.y += sin(clock_sec * 8.37758) * 0.065 * lead;
	if (part > 5.5) {
		float rise = fract(clock_sec * 0.17 + COLOR.g);
		VERTEX.y += rise * 0.65;
		VERTEX.x += sin(clock_sec * 0.6 + COLOR.g * 6.28318) * 0.10;
	}
}
void fragment() {
	float breath = 0.78 + beat_pulse * 0.22;
	float amount = response * breath;
	vec3 amber = mix(vec3(1.0, 0.62, 0.28), vec3(1.0, 0.82, 0.48), lead);
	vec3 color = amber;
	float opacity = amount * 0.74;
	if (part < 0.5) {
		opacity = amount * 0.66 + afterglow * 0.19;
	} else if (part < 1.5) {
		opacity = max(amount * 0.91, afterglow * 0.72);
	} else if (part < 2.5) {
		color = mix(vec3(0.39, 0.56, 0.47), vec3(0.93, 0.72, 0.39), lead * 0.7 + response * 0.3);
		opacity = max(opacity, festival_ready * 0.70);
	} else if (part < 3.5) {
		color = vec3(0.37, 0.50, 0.31);
		opacity = max(max(afterglow, festival_ready * 0.75),harmony*0.85);
	} else if (part < 4.5) {
		color = mix(vec3(0.93, 0.83, 0.57), vec3(0.80, 0.57, 0.43), COLOR.g);
		opacity = max(max(afterglow, festival_ready * 0.70),harmony);
	} else if (part < 5.5) {
		opacity = lead * (0.75 + beat_pulse * 0.25);
	} else {
		color = vec3(0.92, 0.88, 0.74);
		float radius = length((UV - vec2(0.5)) * 2.0);
		opacity = (1.0 - smoothstep(0.25, 1.0, radius)) * response * 0.15;
	}
	// The existing panes/door lanterns carry the pluck. A single upward band
	// crosses their real height; flags, smoke, notes and arcs stay untouched.
	float pluck_window = 0.0;
	if (part < 1.5) {
		float front = mix(-0.16,1.16,pluck_progress);
		float band = 1.0-smoothstep(0.08,0.27,abs(window_height-front));
		pluck_window = pluck_strength*band;
		opacity = max(opacity,pluck_window*0.94);
		color = mix(color,vec3(1.0,0.84,0.48),pluck_window*0.65);
	}
	if (part < 1.5) opacity = max(opacity,night_glow*(1.85+0.10*sin(clock_sec*1.1+house_phase)));
	if (part<1.5) { opacity=max(opacity,salon_pulse*.8);color=mix(color,vec3(1.,.82,.42),salon_pulse); }
	if (opacity < 0.015) discard;
	ALBEDO = color;
	EMISSION = amber * amount * ((part < 1.5 || (part > 4.5 && part < 5.5)) ? 0.32 : 0.0)+vec3(1.0,0.78,0.35)*pluck_window*0.48;
	if (part < 1.5 && night_glow>0.0) {
		ALBEDO *= 0.25;
		EMISSION += vec3(1.0,0.60,0.22)*night_glow*2.4;
	}
	if (part<1.5 && afterglow>0.0) {
		EMISSION+=vec3(1.0,0.73,0.27)*finale_glow*0.65;
		opacity=max(opacity,finale_glow*0.6);
	}
	if (part<1.5) EMISSION+=vec3(1.,.72,.28)*salon_pulse*.6;
	ROUGHNESS = 1.0;
	ALPHA = clamp(opacity, 0.0, 1.0);
}
