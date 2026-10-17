// Tiny Glade original water_plane/001.frag:427-447 and 1489-1493.
// Preserve the directional radial wave scalar. Single event, elapsed clock,
// intensity envelope and its use as albedo are this game's adaptation.
float travel_water_wave(vec2 at, vec2 position, vec2 smoothed_position, float clock_sec) {
	vec2 delta = mix(position, smoothed_position, 0.5) - at;
	float distance_at = length(delta);
	float directed = distance_at + dot(delta, (smoothed_position - position) * 3.0);
	float falloff_distance = max(distance_at, directed);
	float square_distance = falloff_distance * falloff_distance;
	return sin(directed * 16.364999771118164 - clock_sec * 6.0) / (1.0 + square_distance * square_distance);
}
