extends SceneTree
const Stamp=preload("res://scripts/ui/city_creation_prototype_stamp.gd")
const Moment=preload("res://scripts/world/city_creation_season_moment.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var signatures:Dictionary={}
	for id:String in Stamp.Choice.NEO+Stamp.Choice.ALPINE+Stamp.Choice.CLOCKWORK+Stamp.Choice.RENAISSANCE:
		check(Stamp.PROFILES.has(id),"actual stable recipe has silhouette "+id)
		var outline:Array=Stamp.PROFILES[id];var valid:=true
		for p:Array in outline:valid=valid and absf(p[0])<=1. and absf(p[1])<=1.
		check(valid and outline.size()>=4,"stamp outline stays within usable glyph "+id)
		signatures[JSON.stringify(outline)]=id
	check(signatures.size()==18,"eighteen shapes remain distinguishable before internal details")
	for index in range(4):
		var mode:String=Moment.IDS[index];var track:String=Moment.TRACKS[index][0];var phase:int=Moment.PHASES[index]
		check(Moment.gain(track,mode,phase,102.,100.)>.8,"actual voice receives moment envelope "+mode)
		check(Moment.gain(track,mode,(phase+1)%3,102.,100.)==0.,"wrong light has no moment boost "+mode)
		check(Moment.gain("not_a_voice",mode,phase,102.,100.)==0. and Moment.gain(track,mode,phase,110.,100.)==0.,"unrelated voice and quiet interval unchanged "+mode)
		var city:=State.new();city.initialize();var original:Dictionary=city.snapshot();check(city.set_microclimate(mode).ok,"public weather transaction "+mode)
		var saved:Dictionary=city.snapshot();var cold:=State.new();check(cold.restore(saved).ok and cold.snapshot()==saved,"weather still round trips "+mode)
		check(city.undo().ok and city.snapshot().get("microclimate","")==original.get("microclimate","") and city.redo().ok and city.microclimate==mode,"weather still undoes/redoes "+mode)
	print("SEASON_STAMPS ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)
