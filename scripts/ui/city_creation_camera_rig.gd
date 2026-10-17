extends RefCounted
## Perspective stroll is a view of the same editable city, never a new world.
var strolling := false
var saved: Dictionary = {}
var postcard_busy := false
var last_postcard := ""

static func orthographic_distance(zoom:float,pitch:float)->float:
	# At the lowest supported pitch the bottom viewport ray must still start
	# above the ground. A fixed zoom multiplier cuts the valley at the near plane.
	return maxf(maxf(42.,zoom*1.1),zoom*.5*cos(pitch)/sin(pitch)+12.)

func toggle(demo: Node3D) -> void:
	demo._cancel_draft()
	strolling = not strolling
	if strolling:
		saved = {"focus":demo.focus,"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom}
		demo.pitch = 0.22
		demo.focus.y = demo.state.street_height(Vector2(demo.focus.x,demo.focus.z)) + 1.2
		demo.camera.projection = Camera3D.PROJECTION_PERSPECTIVE
		demo.camera.fov = 48.0
		demo._message("街头漫步：WASD / 方向键行走，右键转头，F12 拍明信片，V 返回。")
	else:
		demo.focus = saved.focus
		demo.yaw = saved.yaw
		demo.pitch = saved.pitch
		demo.zoom = saved.zoom
		demo.camera.projection = Camera3D.PROJECTION_ORTHOGONAL
		demo._message("回到河湾创作视角。")
	demo._update_camera()

func update(demo: Node3D, delta: float) -> void:
	if not strolling: return
	if demo.gallery.panel.visible or demo.journal.panel.visible or demo.ledger.visible(): return
	if demo.get_viewport().gui_get_focus_owner() is LineEdit: return
	var axes := Vector2(
		float(Input.is_key_pressed(KEY_D) or Input.is_key_pressed(KEY_RIGHT))-float(Input.is_key_pressed(KEY_A) or Input.is_key_pressed(KEY_LEFT)),
		float(Input.is_key_pressed(KEY_S) or Input.is_key_pressed(KEY_DOWN))-float(Input.is_key_pressed(KEY_W) or Input.is_key_pressed(KEY_UP)))
	if axes.length_squared()==0.0: return
	var right := Vector3(cos(demo.yaw),0,-sin(demo.yaw))
	var back := Vector3(sin(demo.yaw),0,cos(demo.yaw))
	var step := (right*axes.x + back*axes.y).normalized()*minf(delta,0.05)*2.7
	var at: Vector3 = demo.focus + step
	at.y = float(demo.state.street_height(Vector2(at.x,at.z))) + 1.2
	var ray := PhysicsRayQueryParameters3D.create(demo.camera.global_position,at,1)
	if not demo.get_world_3d().direct_space_state.intersect_ray(ray).is_empty(): return
	demo.focus.x = at.x
	demo.focus.z = at.z
	demo.focus.y = lerpf(float(demo.focus.y),at.y,minf(delta*12.0,1.0))
	demo._update_camera()

func capture(demo: Node3D) -> void:
	if postcard_busy: return
	postcard_busy = true
	var visible_ui: bool = demo.ui_layer.visible
	demo.ui_layer.visible = false
	var layer := CanvasLayer.new()
	layer.layer = 100
	var frame := PostcardFrame.new()
	frame.city_title = demo.gallery.current_title if demo.gallery!=null else "河湾来信"
	frame.set_anchors_and_offsets_preset(Control.PRESET_TOP_LEFT)
	frame.mouse_filter = Control.MOUSE_FILTER_IGNORE
	layer.add_child(frame)
	demo.add_child(layer)
	frame.size = demo.get_viewport().get_visible_rect().size
	await RenderingServer.frame_post_draw
	var image: Image = demo.get_viewport().get_texture().get_image()
	var directory := "user://postcards"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(directory))
	var stamp := Time.get_datetime_string_from_system().replace(":","-")
	var path := directory+"/河湾_"+stamp+"_"+str(Time.get_ticks_msec())+".png"
	var result := image.save_png(path)
	layer.queue_free()
	demo.ui_layer.visible = visible_ui
	postcard_busy = false
	if result == OK:
		last_postcard = ProjectSettings.globalize_path(path)
		demo._message("明信片已保存："+last_postcard)
	else: demo._message("明信片保存失败："+error_string(result))

class PostcardFrame extends Control:
	var city_title := "河湾来信"
	func _draw() -> void:
		var paper := Color("eee6d3")
		draw_rect(Rect2(Vector2.ZERO,size),paper,false,24.0)
		draw_rect(Rect2(12,size.y-54,size.x-24,42),paper)
		var font := ThemeDB.fallback_font
		var text := "共鸣之城 · "+city_title+"    "+Time.get_date_string_from_system()
		draw_string(font,Vector2(36,size.y-26),text,HORIZONTAL_ALIGNMENT_LEFT,-1,18,Color("5e5b51"))
