extends RefCounted
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func frame(r,house:Dictionary,palette:Array)->Material:
	if r.state.house_era(house)=="clockwork":return Wall.component(r,Color("b3975e"),Wall.Kind.METAL)
	return Wall.component(r,palette[2],Wall.Kind.TIMBER)
static func roof(r,house:Dictionary,palette:Array)->Material:
	var era:String=r.state.house_era(house)
	if era not in ["clockwork","modern_eco"]:return Wall.component(r,palette[1],Wall.Kind.TERRACOTTA)
	return Wall.component(r,palette[1],Wall.Kind.SLATE)
