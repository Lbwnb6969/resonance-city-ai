// UV meridians run continuously across a ridge; their vertical sign reverses.
// Tile overlaps shed down the actual roof while the authored UV chart stays continuous.
vec3 roof_layer_downhill(vec3 meridian) {
	return meridian.y > 0.0 ? -meridian : meridian;
}
