extends Node
## Earned physical deliveries reuse the existing domino queue; load is quiet.
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
var demo:Node3D
var epoch:Array=[]
var seen:Dictionary={}
var salons:Array[String]=[]
var revision:=-1
var delivery_chains:=0
var window_pulse:=0.
func setup(owner:Node3D)->void:
	demo=owner;name="CapstoneVisual";demo.add_child(self)
func _process(_delta:float)->void:
	var city:RefCounted=demo.state;var next_epoch:=[city.get_instance_id(),city._wish_epoch]
	var baseline:=epoch!=next_epoch
	if baseline:epoch=next_epoch;seen.clear();revision=-1
	if revision!=city.revision:
		revision=city.revision
		for id:String in salons:
			if demo.town.resonance.rigs.has(id):demo.town.resonance.rigs[id].material.set_shader_parameter("salon_pulse",0.)
		salons=Families.salon_members(city)
	for event:Dictionary in city.get_meta("family_delivery_events",[]):
		var shop:=str(event.shop);var count:=int(event.count)
		if count<=int(seen.get(shop,0)):continue
		seen[shop]=count
		if baseline or demo.gallery.busy:continue
		var target:=str(event.target);var group:Dictionary=city.natural_clusters().get(target,{})
		demo.get_meta("juice_feedback").enqueue({"kind":"capstone","source":target,"members":group.get("members",[target]),"label":"百工冠冕 · 万家灯火"});delivery_chains+=1
	var clock:float=demo.music._playback_clock()
	window_pulse=maxf(0.,1.-fposmod(clock,.75)/.4) if not demo.music.muted and not demo.town.living_music.metronomes.courts.is_empty() else 0.
	for id:String in salons:
		if demo.town.resonance.rigs.has(id):demo.town.resonance.rigs[id].material.set_shader_parameter("salon_pulse",window_pulse)
