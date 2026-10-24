extends RefCounted
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Alpine=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var checks:Dictionary={}
var facts:Dictionary={}
var demo
var tree:SceneTree
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center()
	var move:=InputEventMouseMotion.new();move.position=at;move.global_position=at;tree.root.push_input(move);await tree.process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed
		tree.root.push_input(event);await tree.process_frame
	await Live.settle(demo)
func shot(out:String,name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(out+"/"+name+".png")
func run(owner,out:String)->Dictionary:
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	demo.ui_layer.show();demo.set_process(true);demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
	demo.journal.close_panel();demo.spatial_popover.close()
	var city:RefCounted=Modern.earned_city();demo._after_edit(demo.state.restore(city.snapshot()),"history");await Live.settle(demo)
	demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await Live.settle(demo)
	var j=demo.journal;var scroll:ScrollContainer=j.cards.get_parent();var initial:Dictionary=demo.state.snapshot()
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;j.offer_era_choice("modern_eco");await tree.create_timer(.3).timeout;await Live.settle(demo)
		scroll.scroll_vertical=0;await Live.settle(demo)
		var clip:=scroll.get_global_rect();var screen:=Rect2(Vector2.ZERO,Vector2(size));var buttons:Array=[]
		for id:String in demo.state.ScoreModifiers.PAIRS[2]:buttons.append(j.score_buttons[id])
		checks["current_goal_and_all_three_choices_no_scroll_%d"%size.x]=scroll.scroll_vertical==0 and screen.encloses(j.next_button.get_global_rect()) and screen.encloses(j.next_label.get_global_rect()) and buttons.all(func(b):return b.is_visible_in_tree() and clip.encloses(b.get_global_rect()))
		checks["all_available_era_headers_no_scroll_%d"%size.x]=j.score_cards.values().all(func(row):return not row.is_visible_in_tree() or clip.encloses(row.get_child(0).get_global_rect()))
		checks["two_columns_%d"%size.x]=is_equal_approx(buttons[0].global_position.y,buttons[1].global_position.y) and buttons[0].get_global_rect().end.x<buttons[1].global_position.x and buttons[2].global_position.y>buttons[0].global_position.y
		facts[str(size.x)]={"scroll":clip,"next":j.next_button.get_global_rect(),"choices":buttons.map(func(b):return b.get_global_rect())}
		await shot(out,"compact_choices_%d"%size.x)
		await click(j.score_buttons.lasting_resonance)
		checks["native_choice_%d"%size.x]="lasting_resonance" in demo.state.era_modifiers and not j.score_cards.modern_eco.get_child(1).visible
		demo._history(false);await Live.settle(demo)
		checks["native_choice_undo_%d"%size.x]=not "lasting_resonance" in demo.state.era_modifiers and not j.score_buttons.lasting_resonance.disabled
		# Pure presentation fixture: test a completed chapter without awarding
		# a memory, changing any saved city field or manufacturing production.
		demo.set_process(false);var rows:Array=j.rows.duplicate(true);var completed:=0
		for i in range(j.rows.size()):
			if not j.rows[i].earned:completed=i;break
		j.rows[completed].earned=true;j.compact.layout(j)
		var record:Dictionary=j.compact.chapters[completed]
		checks["completed_one_gold_line_%d"%size.x]=record.card.get_children().filter(func(c):return c.visible).size()==1 and record.title.get_theme_color("font_color")==preload("res://scripts/ui/valley_ui_theme.gd").GOLD
		await Live.settle(demo);scroll.ensure_control_visible(record.title);await Live.settle(demo)
		checks["completed_header_reachable_%d"%size.x]=scroll.get_global_rect().encloses(record.title.get_global_rect())
		await click(record.title)
		checks["completed_reopens_%d"%size.x]=record.card.get_children().filter(func(c):return c.visible).size()>1
		j.rows=rows;j.compact.layout(j);demo.set_process(true);j.close_panel();await Live.settle(demo)
	var a:Dictionary=demo.state.snapshot();a.erase("revision");var b:=initial.duplicate(true);b.erase("revision")
	checks.presentation_preserves_city=a==b
	var data:=Alpine.build();demo._after_edit(demo.state.restore(data.city.snapshot()),"history");await Live.settle(demo)
	demo.select_tool(0);var id:String=data.flat[0];var house:Dictionary=demo.town._house_record(id)
	demo.focus=Vector3(house.origin[0],1.,house.origin[1]);demo.zoom=25.;demo.pitch=.8;demo._update_camera()
	var pop=demo.spatial_popover;pop.open_for_house(id)
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		tree.root.size=size;await tree.create_timer(.3).timeout;await Live.settle(demo)
		var expected:String=preload("res://scripts/world/city_creation_architecture_choice.gd").label(preload("res://scripts/world/city_creation_architecture_choice.gd").ALPINE[preload("res://scripts/world/city_creation_alpine_plan.gd").kind_for(house)])
		var font:Font=pop.architecture_button.get_theme_default_font()
		checks["automatic_actual_caption_%d"%size.x]=pop.architecture_button.caption==expected and expected!="随形生长" and not house.has("architecture")
		checks["caption_and_islands_fit_%d"%size.x]=font.get_string_size(expected,HORIZONTAL_ALIGNMENT_LEFT,-1,10).x<=pop.architecture_button.size.x and pop.ring.placement_ok and pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.house_rect))
		await shot(out,"prototype_caption_%d"%size.x)
	pop.close();var audio:Dictionary=await Probe.record(out+"/compact_master.wav",3.2);checks.audible_unclipped=audio.ok
	var report:={"ok":checks.values().all(func(v):return v),"checks":checks,"facts":facts,"audio":audio}
	FileAccess.open(out+"/compact.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("COMPACT_JOURNAL ",JSON.stringify(report));return report
