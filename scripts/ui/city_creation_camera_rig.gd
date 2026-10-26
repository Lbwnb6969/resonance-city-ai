extends RefCounted
## Perspective stroll is a view of the same editable city, never a new world.
var strolling := false
var saved: Dictionary = {}
var postcard_busy := false
var last_postcard := ""
var aura:=preload("res://scripts/visual/city_creation_stroll_glow.gd").new()
var postcard_directory := "user://postcards"
func collection_view(demo:Node3D)->Dictionary:
	# A street-level look can tilt beyond the authored overview camera range.
	# Collections reopen the creative view kept when entering the stroll.
	var at:Vector3=saved.focus if strolling and not saved.is_empty() else demo.focus
	return {"focus":[at.x,at.y,at.z],"yaw":saved.yaw if strolling and not saved.is_empty() else demo.yaw,"pitch":saved.pitch if strolling and not saved.is_empty() else demo.pitch,"zoom":saved.zoom if strolling and not saved.is_empty() else demo.zoom,"evening":demo.evening,"light_phase":demo.light_phase}

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
		demo._message("街头漫步：WASD 行走 · 右键转头 · 点工坊/奇观听独奏 · F12 拍照 · V 返回")
	else:
		demo.focus = saved.focus
		demo.yaw = saved.yaw
		demo.pitch = saved.pitch
		demo.zoom = saved.zoom
		demo.camera.projection = Camera3D.PROJECTION_ORTHOGONAL
		demo._message("回到河湾创作视角。")
	demo._update_camera()
	if demo.tactile_dock!=null:demo.tactile_dock.refresh()

func update(demo: Node3D, delta: float) -> void:
	aura.update(demo,strolling)
	if not strolling: return
	if demo.gallery.panel.visible or demo.journal.panel.visible or demo.ledger.visible() or demo.guide.visible(): return
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
	var image:Image=await preload("res://scripts/ui/city_creation_postcard_stamp.gd").scene_frame(demo)
	image = await preload("res://scripts/ui/city_creation_postcard_stamp.gd").compose(demo,image,demo.state,demo.gallery.current_title)
	var directory := postcard_directory
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(directory))
	var stamp := Time.get_datetime_string_from_system().replace(":","-")
	var path := directory+"/河湾_"+stamp+"_"+str(Time.get_ticks_msec())+".png"
	var result := image.save_png(path)
	postcard_busy = false
	if result == OK:
		last_postcard = ProjectSettings.globalize_path(path)
		demo._message(demo.Copy.POSTCARD_SAVED_TOAST)
	else: demo._message("明信片保存失败："+error_string(result))
