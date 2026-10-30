extends SceneTree
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Harmony=preload("res://scripts/audio/city_creation_score_harmony.gd")
const Construction=preload("res://scripts/audio/city_creation_construction_walk.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class Owner extends Node:
	var _pluck_city:RefCounted
	var mode:=0
	var _clock:=0.
	var _players:Dictionary={}
	var concert_active:=false
	var phonograph:Dictionary={"active":false}
	func harmony_mode()->int:return mode
	func _playback_clock()->float:return _clock
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var owner:=Owner.new();var city:=State.new();city.initialize_free();city.add_house(Vector2(-20,-20));owner._pluck_city=city
	var reference:=AudioStreamWAV.new();reference.format=AudioStreamWAV.FORMAT_16_BITS;reference.mix_rate=22050;reference.data=PackedByteArray([0,0,0,0]);owner._players={"concert":{"stream":reference}}
	var snapshot:=city.snapshot();var hid:=str(city.houses[0].id)
	for mode in range(10):
		owner.mode=mode
		for p in range(6):
			var data:=Master.section(p,mode);owner.set_meta("authored_score",{"city":city.get_instance_id(),"revision":city.revision,"signature":data.signature,"document":data.document,"harmony":data.harmony})
			var notes_ok:=true;var boundary_ok:=true;var arpeggio_ok:=true;var voices_ok:=true
			for bar in range(8):
				owner._clock=bar*3.+.01
				var chord:Array=data.harmony[bar];var base:=Harmony.Pitch.plan(city,hid,owner._clock,mode);var result:=Construction.replan(owner,{"house_id":hid})
				notes_ok=notes_ok and chord.any(func(n):return posmod(int(n)-int(result.midi),12)==0) and result.stream_key==Harmony.Pitch.stream_key(result.timbre,result.midi) and result.harmony_signature==data.signature
				boundary_ok=boundary_ok and Harmony.current(owner,bar*3.-.0001).bar==bar and Harmony.current(owner,bar*3.).bar==bar
				if bar>0:boundary_ok=boundary_ok and Harmony.current(owner,bar*3.-.188).bar==bar-1
				var pitches:Array=[]
				for step in range(6):
					var walk:=Construction.plan(owner,base,step);pitches.append(walk.midi)
					arpeggio_ok=arpeggio_ok and chord.any(func(n):return posmod(int(n)-int(walk.midi),12)==0) and walk.harmony_signature==data.signature
				for i in range(1,6):arpeggio_ok=arpeggio_ok and pitches[i]>pitches[i-1]
				voices_ok=voices_ok and data.events.filter(func(e):return e.role!="lead" and int(e.beat/4.)==bar).all(func(e):return chord.any(func(n):return posmod(int(n)-int(e.midi),12)==0))
			check(notes_ok,"executed house notes / PCM keys share written harmony "+str([mode,p]))
			check(boundary_ok,"exact bar and negative / wrap boundary "+str([mode,p]))
			check(arpeggio_ok,"all six construction steps retain ascending chord tones "+str([mode,p]))
			check(voices_ok,"three rendered support roles use the same actual chord "+str([mode,p]))
	var data:=Master.section(0,4);owner.mode=4;owner.set_meta("authored_score",{"city":city.get_instance_id(),"revision":city.revision,"signature":data.signature,"document":data.document,"harmony":data.harmony})
	check(data.harmony[1].map(func(n):return posmod(int(n),12))==[4,7,11,2],"regression: mapped Em7 second bar, not old A7")
	var base:=Harmony.Pitch.plan(city,hid,3.01,4);var adapted:=Harmony.pluck(owner,base,3.01)
	check(adapted!=base and not base.has("harmony_signature"),"read-only retune changes a real conflicting note without mutating queued plan")
	var other:=Owner.new();other._pluck_city=city;other.mode=4
	check(Harmony.pluck(other,base,3.01)==base,"another owner in the same city never inherits preview harmony")
	city.add_house(Vector2(-16,-20));check(Harmony.current(owner,3.01).signature.is_empty(),"edit immediately invalidates old harmony before audio apply")
	owner._pluck_city=State.new();owner._pluck_city.initialize_free();check(Harmony.current(owner,3.01).signature.is_empty(),"cross-city owner rejects stale harmony")
	owner._pluck_city=city;owner.set_meta("authored_score",{"city":city.get_instance_id(),"revision":city.revision,"document":data.document,"signature":"old_schema1"})
	check(Harmony.pluck(owner,base,3.01)==base,"old imported schema1 keeps original harmony routing")
	owner.remove_meta("authored_score");check(Harmony.pluck(owner,base,3.01)==base,"discard restores original plan exactly")
	check(snapshot.houses.size()==1 and city.snapshot().houses.size()==2,"only explicit public author edit changed source city")
	var music:=preload("res://scripts/audio/city_creation_music.gd").new();music._pluck_city=city;music._biome_mode=4
	var meta:={"signature":data.signature,"document":data.document,"city":city.get_instance_id(),"revision":city.revision,"harmony":data.harmony};music.set_meta("authored_score",meta)
	preload("res://scripts/audio/city_creation_authored_score.gd").discard(music,meta)
	check(music._biome_mode==Harmony.Palette.for_city(city),"explicit preview discard restores actual city mode")
	music._biome_mode=9;music.set_meta("authored_score",meta);preload("res://scripts/audio/city_creation_authored_score.gd").discard(music,meta)
	check(music._biome_mode==9,"discard never overrides a newer authoritative mode")
	music.free()
	owner.free();other.free();print("SCORE_HARMONY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
