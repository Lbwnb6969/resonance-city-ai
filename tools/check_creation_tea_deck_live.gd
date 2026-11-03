extends "res://tools/check_creation_layered_windows_live.gd"
const DeckFixture=preload("res://tests/test_city_creation_tea_deck.gd")
const Deck=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
var pcm_done:=false
func record_edit()->void:
	facts["edit_pcm"]=await Probe.record(OUT+"/deck_edit_Master.wav",3.2);pcm_done=true
func focus_deck()->void:
	demo.focus=Vector3(-28,.65,-19);demo.zoom=5.5;demo.pitch=.7;demo.yaw=.45;demo._update_camera()
func floor_physics()->void:
	await physics_frame
	var plan:Dictionary=Deck.find(demo.state,"h1");var space:PhysicsDirectSpaceState3D=demo.town.get_world_3d().direct_space_state
	var p:=Deck.at(plan,Vector2(.2,1.17));var hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(p.x,plan.top+.3,p.y),Vector3(p.x,plan.top-.15,p.y),1))
	check(not hit.is_empty() and hit.collider.get_meta("tea_deck",false) and absf(hit.position.y-plan.top)<.002,"actual Jolt slab supports the exact planned board height under its house identity")
	p=Deck.at(plan,Vector2(plan.wing*1.25,1.17));hit=space.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(p.x,plan.top+.3,p.y),Vector3(p.x,plan.top-.15,p.y),1))
	check(hit.is_empty(),"actual L-shaped collision leaves the water beside the side wing empty")
	var a:=Deck.at(plan,Vector2(.5,1.55));var b:=Deck.at(plan,Vector2(.5,1.18));hit=space.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(a.x,plan.top+.4,a.y),Vector3(b.x,plan.top+.4,b.y),1))
	check(not hit.is_empty() and hit.collider.get_meta("tea_deck",false),"actual glass railing has the same physical guard boundary as the route planner")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var city:RefCounted=DeckFixture.fixture();city.set_house_architecture("h1","pavilion");city.set_house_role("h1","garden_cafe");await show(city,Vector2(-28,-19),"悬挑亲水茶台");quiet();focus_deck();await settle()
	var original:Dictionary=demo.state.houses[0].duplicate(true);demo.spatial_popover.open_for_house("h1");var book:Node=Book.obtain(demo);book.for_house(demo.spatial_popover);await settle()
	var button:Button=book.buttons[Deck.ID];var scroll:ScrollContainer=book.grid.get_parent();scroll.ensure_control_visible(button);await settle();await ui_click(button);await settle();quiet();await key(KEY_ESCAPE);focus_deck();await settle()
	var expected:Dictionary=original.duplicate(true);expected.architecture=Deck.ID;check(demo.state.houses[0]==expected,"native explicit card preserves seed, original rooms, era, colors and manual purpose")
	var house:Node3D=demo.town.house_roots.h1;check(house.has_meta("tea_deck") and house.find_child("CantileverTeaDeck",true,false)!=null,"actual house publishes cantilever, landing and guard geometry")
	check(demo.town.cafes.roots.h1.get_meta("layout").seats.size()==2,"actual published furniture uses two supported compact seats")
	var rig:Dictionary=demo.town.resonance.rigs.h1;demo.town.resonance.update({"audible":true,"lead_id":"h1","beat_pulse":1.});check(rig.pivot.scale==Vector3.ONE,"maximum visual pulse preserves the real walking floor and guard alignment")
	await floor_physics()
	demo.set_process(false);demo.town.clear_preview()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("tea_deck_phase_"+str(phase))
	demo.set_process(true)
	demo._after_edit(demo.state.set_house_colors("h1",Color("eee2bf"),Color("d7c8a7")),"colors");await settle();quiet();var colored:=arrays()
	var cloth:Array=demo.town.house_roots.h1.find_children("TeaDeckCanvas*","MeshInstance3D",true,false)
	check(cloth.size()==8 and cloth.all(func(m):return m.material_override.get_meta("creation_fixed_color",false) and m.material_override.albedo_color in [Color("eee2bf"),Color("d7c8a7")]),"canvas remains a fixed cloth palette even when author colors match its RGB exactly")
	check(demo.state.save_city(OUT+"/deck.json").ok,"actual selected deck and matching author colors save atomically")
	var cold:=State.new();check(cold.load_city(OUT+"/deck.json").ok,"actual deck cold reads from disk");await show(cold,Vector2(-28,-19),"茶台冷读");quiet();focus_deck();await settle()
	check(arrays()==colored,"all actual GPU arrays and material colors cold-equal incremental publication")
	record_edit.call_deferred()
	demo._after_edit(demo.state.remove_water_at(Vector2(-28,-17.6)),"water");await settle();quiet();check(not demo.town.house_roots.h1.has_meta("tea_deck") and demo.state.houses[0].architecture==Deck.ID,"actual fill-water edit withdraws the mesh and collision while retaining author choice")
	await key(KEY_Z,true);await settle();quiet();check(demo.town.house_roots.h1.has_meta("tea_deck") and arrays()==colored,"native Undo restores exactly the original supported colored structure")
	await key(KEY_Y,true);await settle();quiet();check(not demo.town.house_roots.h1.has_meta("tea_deck"),"native Redo withdraws the real platform again")
	await key(KEY_Z,true);await settle();quiet()
	demo._after_edit(demo.state.rotate_house("h1",PI*.5),"room");await settle();quiet();check(demo.town.house_roots.h1.has_meta("tea_deck"),"rotated real house derives a new supported water-facing side")
	await floor_physics();var rotated:=arrays();var rotated_city:=State.new();check(rotated_city.restore(demo.state.snapshot()).ok,"rotated structural source cold restores");await show(rotated_city,Vector2(-28,-19),"旋转茶台冷读");quiet();focus_deck();await settle();check(arrays()==rotated,"rotated physical floor and guards cold-equal the incremental publication")
	check(await wait_for(func():return pcm_done,6000) and facts.edit_pcm.ok,"actual WASAPI Master remains non-silent and unclipped during construction edits")
	await resident_visit()
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TEA_DECK_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)
func resident_visit()->void:
	var city:RefCounted=DeckFixture.populated(OUT+"/journey");await show(city,Vector2(-28,-19),"临水茶聚");quiet();focus_deck();demo.life.set_process(false)
	var reached:=false;var max_guests:=0;var supported_steps:=0;var unsupported_steps:=0
	for ignored in range(5000):
		demo.life._process(.05);max_guests=maxi(max_guests,int(demo.life.cafe_status("h1").invited))
		for guest:Dictionary in demo.life.residents:
			var p:=Vector2(guest.node.position.x,guest.node.position.z)
			if not guest.has("cafe_visit") or demo.state.water_clearance(p)>.0:continue
			supported_steps+=1
			if Deck.floor_support(demo.state,p,.14).is_empty() or absf(guest.node.position.y-demo.state.street_height(p)-.1)>.01:unsupported_steps+=1
		if demo.life.cafe_status("h1").phase=="tea":reached=true;break
	check(reached and max_guests==2 and supported_steps>0 and unsupported_steps==0,"actual residents bake, purchase and walk over supported water-facing boards to exactly two real chairs")
	demo.town.update_cafes(demo.life.cafe.view());await settle();demo.life.set_process(false);demo.set_process(false);demo.town.clear_preview();await capture("real_two_resident_tea");demo.set_process(true)
	check(int(demo.state.life_progress.purchases)>=2 and int(demo.state.life_progress.tea_parties)==0,"actual tea screenshot precedes settlement and follows real finite stock purchases")
	facts["resident_walk"]={"max_guests":max_guests,"supported_wet_steps":supported_steps,"unsupported_steps":unsupported_steps,"status":demo.life.cafe_status("h1")}
