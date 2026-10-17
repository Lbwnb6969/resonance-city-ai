// Visual continuation only: the editable river retains its original equation.
float valley_river_x(float z, float inner_z) {
	float outside = max(abs(z)-inner_z,0.0);
	return 3.0+sin(z*.17)*.52+sign(z)*8.0*sin(outside*.038)*smoothstep(0.0,18.0,outside);
}
