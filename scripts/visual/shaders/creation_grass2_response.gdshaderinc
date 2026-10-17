// Direct scalar response from the recovered Tiny Glade shaders:
// grass2/card_splats/000.comp (push 342-360, wind 367) and
// deferred/grass_light_sun_sky/001.frag (wrapped sun 777).
// UV tip is byte/255: push clamps byte/85; wind uses byte/255 directly.
// City wind magnitude/direction
// are inputs because Godot uses metre clumps and its own continuous wind field.
float grass2_object_push(float height_weight,float tip_weight) {
	float compressed = 1.0-clamp(height_weight,0.0,1.0);
	float push_tip = clamp(tip_weight*255.0*0.011764707043766975,0.0,1.0);
	return 4.0*compressed*(1.0-compressed)*push_tip*push_tip;
}
float grass2_wind_displacement(float wind_amount,float tip_weight,float width_scale) {
	return -wind_amount*tip_weight*tip_weight*0.25*1.1144999265670776*width_scale;
}
float grass2_sun_wrap(float normal_dot_light) {
	return clamp((normal_dot_light+0.10000000149011612)*0.9090908765792847,0.0,1.0);
}
