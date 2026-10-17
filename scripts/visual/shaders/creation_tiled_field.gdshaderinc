#ifndef CREATION_TILED_FIELD_INCLUDED
#define CREATION_TILED_FIELD_INCLUDED
// CityCreationTiledField: 512 pixels, 8x8 layers, 64+2 padded pixels per layer.
vec4 tiled_field_sample(sampler2DArray field,vec2 world_uv){
	vec2 pixel=clamp(world_uv*512.0,vec2(0.0),vec2(511.99997));
	vec2 tile=floor(pixel/64.0);
	vec2 uv=(pixel-tile*64.0+1.0)/66.0;
	return texture(field,vec3(uv,tile.y*8.0+tile.x));
}
#endif
