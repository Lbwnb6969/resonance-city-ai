extends RefCounted
## Sounding waves use a prepared crossfade, independent of authored rests.
static func update(owner:Node)->void:
	if owner._variation_streams.is_empty():return
	var chamber=preload("res://scripts/audio/city_creation_chamber_roles.gd");chamber.prepare(owner)
	var now:=Time.get_ticks_usec();var clock:float=owner._playback_clock()
	var mode:=maxi(0,owner.harmony_mode());var bar:=posmod(floori(clock/3.),8)
	var seeded:bool=owner._biome_mode>=0
	var view:Array=[owner.harmony_mode(),bar,owner.concert_active]
	if view!=owner._harmony_view:
		owner._harmony_view=view;owner._edit_streams=owner._base_edit_streams.duplicate()
		if not owner.concert_active or seeded:
			for id:String in owner._harmony_streams:
				var prefix:String="%d/"%mode
				if not id.begins_with(prefix):continue
				var key:String=id.trim_prefix(prefix)
				if not key.contains("/"):owner._edit_streams[key]=owner._harmony_streams[id]
			for kind:String in ["room","terrace","road","erase","history","concert","arrival","bakery","craft","installed","tea"]:owner._edit_streams[kind]=owner._harmony_streams["%d/edit/%s/%d"%[mode,kind,bar]]
	var keys:Array=owner.HarmonicEmergence.LEADS+["foundation","air","terrace"]
	keys.append("concert")
	for key:String in keys:
		var id:="original"
		if key=="concert":
			if seeded:id="%d/concert"%mode
		elif not owner.concert_active or seeded:
			id="%s/%d"%[key,2 if owner.concert_active else int(owner.emergence.score.get("variant",0))] if key in owner.HarmonicEmergence.LEADS else "%d/%s"%[mode,key]
			if mode>0 and key in owner.HarmonicEmergence.LEADS:id="%d/"%mode+id
			var camera_mix=preload("res://scripts/audio/city_creation_camera_orchestration.gd")
			if not owner.concert_active and key==camera_mix.lead(owner.emergence.score) and camera_mix.nocturne(owner):id="%d/nocturne"%mode
		id=chamber.desired(owner,key,id)
		if owner._variation_active.get(key,"")==id:
			owner._variation_pending.erase(key);continue
		owner._variation_pending[key]={"id":id,"requested_clock":clock}
		var player:AudioStreamPlayer=owner._players[key]
		if not chamber.can_lead(owner,key,id):continue
		var target:AudioStream=owner._original_streams.get(key) if id=="original" else owner._variation_streams.get(id,owner._harmony_streams.get(id))
		if preload("res://scripts/audio/city_creation_stream_transition.gd").request(owner,key,id,target,clock):
			owner._variation_pending.erase(key);owner._variation_changed_usec=now
static func reverb(bus:int)->void:
	var effect:=AudioEffectReverb.new()
	effect.room_size=.36;effect.damping=.74;effect.wet=.13;effect.dry=.87;effect.hipass=.12
	AudioServer.add_bus_effect(bus,effect)
