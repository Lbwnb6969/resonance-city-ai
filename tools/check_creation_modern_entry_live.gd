extends "res://tools/check_creation_entry_height_live.gd"
const ModernFixture=preload("res://tools/fixtures/city_creation_modern_entry_fixture.gd")
func output_directory()->String:return "res://验证记录/M84/modern_entry_20261030/live"
func build_fixture(kind:String)->Dictionary:return ModernFixture.build(kind)
func installed_sill(entry:Dictionary)->float:
	var house:Dictionary=demo.state.houses[demo.state._house_index(entry.house_id)];var base:float=house.base_y
	var door:Dictionary=demo.state.house_entrances(entry.house_id).filter(func(e):return e.cell_id==entry.cell_id and e.at.is_equal_approx(entry.at))[0]
	# The modern sill is the actual room plinth; no exterior stone steps exist.
	var at:Vector2=door.wall_at-demo.state.Frontage.Frame.normal(door)*.12;var best:=-INF
	for node:MeshInstance3D in demo.town.house_roots[entry.house_id].find_children("*","MeshInstance3D",true,false):best=maxf(best,mesh_height(node,at,base+.145,base+.155))
	return best
