extends Node3D
const Plan=preload("res://scripts/world/city_creation_musical_archway_plan.gd")
const Instruments=preload("res://scripts/visual/city_creation_archway_instruments.gd")
const Echo=preload("res://scripts/audio/city_creation_archway_echo.gd")
const Travel=preload("res://scripts/world/city_creation_travel.gd")
var demo
var epoch:Array=[]
var sites:Dictionary={}
var layers:Array[Node3D]=[]
var echo:=Echo.new()
var sky_sensor:=Travel.new()
var previous:Dictionary={}
var timer:=0.
var water_due:Dictionary={}
func setup(owner)->void:
	demo=owner;echo.demo=owner;name="MusicalArchways";demo.add_child(self);demo.set_meta("musical_archways",self)
func crossing(actor:String,kind:String,id:String,_at:Vector2)->void:
	if kind=="bridge" and sites.has(id):echo.trigger(sites[id],actor,"walk")
func _process(delta:float)->void:
	if demo.music._loading or demo.music._players.concert.stream==null or demo.edit_pending() or demo.gallery.busy or demo.life.last_revision!=demo.state.revision:echo.clear();return
	var key:=[demo.state.get_instance_id(),demo.state.revision,demo.life.get_instance_id()]
	if epoch!=key:epoch=key;rebuild()
	echo.tick(sites);timer+=delta
	if timer<.10:return
	timer=0.
	for resident:Dictionary in demo.life.residents:
		var id:="resident/"+str(resident.home_id);var at:=Vector2(resident.node.position.x,resident.node.position.z)
		var from:Vector2=previous.get(id,at);previous[id]=at
		if from.distance_to(at)>2.:continue
		for event:Dictionary in sky_sensor.observe(id,from,at,demo.life.time):
			if sites.has(event.id):echo.trigger(sites[event.id],id,"underpass_walk")
	var clock:=Echo.Grid.transport_clock(demo.music)
	for row:Dictionary in sites.values():
		# Only an actual stream has directional flow; ponds are still water.
		if not row.wet or clock<float(water_due.get(row.id,0.)):continue
		var flowing:bool=absf(row.at.x-demo.state.river_x(row.at.y))<demo.state.RIVER_HALF_WIDTH
		for water:Dictionary in demo.state.waters:
			if water.kind=="channel" and demo.state._water_stroke_distance(row.at,water.points)<float(water.width)*.5:flowing=true;break
		if flowing:echo.trigger(row,"water/"+str(row.owner),"stream")
		water_due[row.id]=clock+9.
func rebuild()->void:
	echo.clear();sites.clear();water_due.clear();previous.clear();sky_sensor=Travel.new()
	for node:Node3D in layers:remove_child(node);node.queue_free()
	layers.clear()
	for row:Dictionary in Plan.derive(demo.state,demo.life.travel):
		sites[row.id]=row;layers.append(Instruments.build(self,demo.town,row))
		if row.kind=="skybridge":sky_sensor._add_site(row.id,"skybridge",row.owner,"",row.at,row.axis,row.half_width)
func report()->Dictionary:
	return {"sites":sites.values(),"events":echo.events.duplicate(true),"pending":echo.pending.duplicate(true),"geometry":layers.size()}
