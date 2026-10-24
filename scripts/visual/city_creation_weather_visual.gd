extends Node3D
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
const Weather=preload("res://scripts/world/city_creation_microclimate.gd")
const ShaderSource=preload("res://scripts/visual/shaders/creation_microclimate.gdshader")
var demo
var particles:MultiMeshInstance3D
var material:ShaderMaterial
var _mode:="unbound"
var _renderer:=0
var _center:=Vector2.INF
var _material_key:Variant=null
var _revision:=-1
var moment:Node3D

func setup(owner)->void:
	demo=owner;name="RiverWeather";demo.add_child(self)
	particles=MultiMeshInstance3D.new();particles.name="SeasonalParticles";particles.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	material=ShaderMaterial.new();material.shader=ShaderSource;particles.material_override=material;add_child(particles)
	moment=preload("res://scripts/visual/city_creation_season_moment.gd").new();add_child(moment);moment.setup(demo)

func update()->void:
	var mode:=str(demo.state.microclimate);var renderer:int=demo.town.get_instance_id()
	if demo.edit_pending():return
	var key:Array=[renderer,demo.town.ground_material,demo.town.water_material,demo.town.path_edge.material,demo.town.meadow.materials.values(),demo.town.foliage._materials.values()]
	if mode!=_mode or renderer!=_renderer:
		_mode=mode;_renderer=renderer;_center=Vector2.INF
		var index:=Weather.IDS.find(mode)
		if index>=0:demo._set_light_phase(Weather.LIGHTS[index])
	if key!=_material_key or str(material.get_meta("mode",""))!=mode:
		_material_key=key;_apply_materials();material.set_meta("mode",mode)
	var at:=Vector2(demo.focus.x,demo.focus.z)
	if _center==Vector2.INF or _center.distance_squared_to(at)>36. or _revision!=demo.state.revision:
		_center=at.snapped(Vector2.ONE*4.);_revision=demo.state.revision;_prepare()
	particles.visible=mode in Weather.IDS
	material.set_shader_parameter("music_clock",demo.music._playback_clock())
	moment.update(mode)

func _prepare()->void:
	var multi:=MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.use_custom_data=true
	var quad:=QuadMesh.new();quad.size=Vector2(.08,.13);multi.mesh=quad
	SafeInstances.initialize(multi,192)
	var rng:=RandomNumberGenerator.new();rng.seed=hash([_center,1949])
	var bounds:=AABB(Vector3(_center.x-19.,-5.,_center.y-19.),Vector3(38.,25.,38.))
	for i:int in range(192):
		var p:=_center+Vector2(rng.randf_range(-18.,18.),rng.randf_range(-18.,18.))
		var y:float=demo.state.ground_height(p)+rng.randf_range(.8,3.5)
		var basis:=Basis(Vector3.UP,rng.randf()*TAU)
		SafeInstances.append(multi,Transform3D(basis,Vector3(p.x,y,p.y)),Color.WHITE,Color(rng.randf(),0,0,1))
	multi.custom_aabb=bounds;particles.multimesh=multi

func _apply_materials()->void:
	var index:=Weather.IDS.find(_mode);material.set_shader_parameter("weather",maxi(0,index))
	var gold:=1. if _mode=="autumn_gold" else 0.
	var materials:Array=[demo.town.ground_material,demo.town.water_material,demo.town.path_edge.material]
	for entry:Material in demo.town.meadow.materials.values():materials.append(entry)
	for entry:Material in materials:
		if entry is ShaderMaterial:entry.set_shader_parameter("season_gold",gold)
	for entry:Material in demo.town.foliage._materials.values():
		if entry is ShaderMaterial:entry.set_shader_parameter("season_gold",gold)
	if demo.town.water_material!=null:demo.town.water_material.set_shader_parameter("season_rain",1. if _mode=="sun_shower" else 0.)
