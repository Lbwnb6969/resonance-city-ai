extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Growth=preload("res://scripts/world/city_creation_growth.gd")
class CountingRenderer extends Renderer:
	var preparations:=0
	func _derive_frontage_signature(house:Dictionary)->Array:
		preparations+=1
		return super._derive_frontage_signature(house)
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize();var town:=CountingRenderer.new();root.add_child(town);town.setup(city)
	var house:Dictionary=town._house_record("h2");var view:Array=town._frontage_signature(house);var prepared:=town.preparations
	var stock:Dictionary={"h2":city.bakery_status("h2")}
	town.update_bakery_supply(stock);town.update_bakery_supply(stock)
	check(town.preparations==prepared and is_same(view,town._frontage_signature(house)),"real repeated bread display reuses the prepared full frontage and clearance decisions")
	var bread:Node3D=town.bread_roots.h2;var id:=bread.get_instance_id()
	check(city.produce_bread("h2",1),"actual production completes using the public stock ledger")
	town.update_bakery_supply({"h2":city.bakery_status("h2")})
	check(int(town.bread_roots.h2.get_meta("stock"))==1 and town.bread_roots.h2.get_instance_id()!=id and town.preparations==prepared,"actual counter count still changes immediately without rederiving unchanged facade clearance")
	city.building_quality.h2={"level_tier":3};var only:Array[String]=["h2"];town.quality_visual.progress(town,only)
	check(town.preparations==prepared,"quality decoration refresh retains the same geometry view")
	city.building_quality.clear()
	var previous:=var_to_bytes(view);var role:Dictionary=city.set_house_role("h2","workshop");check(role.ok,"actual bakery-to-workshop role edit commits")
	house=town._house_record("h2");var changed:Array=town._frontage_signature(house)
	check(town.preparations>prepared and changed==town._derive_frontage_signature(house) and changed!=view and previous==var_to_bytes(view),"role edit derives new bench clearance while leaving prior immutable frontage intact")
	check(city.undo().ok,"ordinary role undo succeeds")
	house=town._house_record("h2");check(town._frontage_signature(house)==view,"undo restores the original door and counter-clearance values")
	var palette:Dictionary=city.set_house_palette("h2",1);check(palette.ok,"actual palette edit commits")
	town.retain_geometry_views();prepared=town.preparations
	check(town._frontage_signature(town._house_record("h2"))==view and town.preparations==prepared,"palette-only publication retains the prepared facade without recomputation")
	var other:=State.new();other.initialize();check(other.set_house_role("h2","workshop").ok,"second real city has different workshop geometry")
	other.revision=city.revision;town.state=other
	check(town._frontage_signature(town._house_record("h2"))!=view,"same revision on another city cannot reuse the previous counter view")
	town.state=city
	var initial:Dictionary=city.growth_geometry_summary();var rows:Array=Growth.report(city)
	var bridge:Array[Vector2]=[Vector2(-1,-10),Vector2(8,-10)]
	check(city.add_road(bridge).ok,"real bridge adds a structural journal goal")
	var geometry:Dictionary=city.growth_geometry_summary()
	check(geometry.bridges==1 and geometry==Growth.geometry_summary(city) and geometry!=initial,"actual bridge revision refreshes the complete cached structural journal summary")
	var before_rows:Array=Growth.report(city)
	check(city.produce_bread("h2",1) and city.record_concert_completion("h4")==60.,"real production and performance complete without construction revisions")
	var live_rows:Array=Growth.report(city)
	check(is_same(geometry,city.growth_geometry_summary()) and live_rows[0].goals[1].value==before_rows[0].goals[1].value+1 and live_rows[0].goals[2].done,"journal reuses structural data while production and concert ledger progress remain immediate")
	var earned:Array=city.refresh_growth(live_rows)
	check(earned==["dawn"] and Growth.report(city)[0].earned and is_same(geometry,city.growth_geometry_summary()),"chapter reward and retained finish are earned immediately without replacing the structural summary")
	var clone:=State.new();var restored:Dictionary=clone.restore(city.snapshot());check(restored.ok,"actual growth snapshot restores: "+str(restored))
	check(Growth.report(clone)==Growth.report(city),"restored city presents identical live goals rewards and first-house guidance")
	var before:=var_to_bytes(city.snapshot());Growth.report(city);town._frontage_signature(town._house_record("h2"))
	check(var_to_bytes(city.snapshot())==before,"derived display refresh never changes stored authoring or life data")
	town.queue_free();await process_frame;print("UI_GEOMETRY_VIEWS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
