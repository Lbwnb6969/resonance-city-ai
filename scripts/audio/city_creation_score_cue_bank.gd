extends RefCounted
## One temporary short catalogue, rendered off-thread from the original ledger.
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
static func templates(owner:Node,mode:int)->Dictionary:
	var out:={};var prefix:=str(mode)+"/";var original:Dictionary=owner.get_meta("score_cue_originals",{})
	for key:String in owner._harmony_streams:
		if not key.begins_with(prefix):continue
		var wave:AudioStreamWAV=original.get(key,owner._harmony_streams[key])
		if wave.loop_mode!=AudioStreamWAV.LOOP_DISABLED:continue
		var body:=key.trim_prefix(prefix)
		if body.begins_with("stair_key_"):continue
		var parts:=body.split("_");var tail:=body.get_slice("/",body.get_slice_count("/")-1)
		if body.begins_with("chamber_sparkle_") or body.begins_with("travel_stepping_"):tail=parts[-2]
		elif not body.contains("/"):tail=parts[-1]
		if not tail.is_valid_int() or int(tail)<0 or int(tail)>7:continue
		var notes:Array=owner.audio_report.get("harmony_notes",{}).get(key,[])
		if notes.is_empty():continue
		out[key]={"bar":int(tail),"seconds":wave.get_length()-float(wave.get_meta("cue_preroll",0.)),"notes":notes.duplicate(true),"metadata":{}}
		for field:String in ["chamber_key","chamber_midi","chamber_timbre"]:
			if wave.has_meta(field):out[key].metadata[field]=wave.get_meta(field)
	return out
static func render(templates:Dictionary,harmony:Array,signature:String,synth:Node)->Dictionary:
	var out:={}
	for key:String in templates:
		var row:Dictionary=templates[key];var notes:Array=row.notes.duplicate(true);var chord:Array=harmony[row.bar]
		var samples:=PackedFloat32Array();samples.resize(roundi(float(row.seconds)*22050.))
		for note:Dictionary in notes:
			note.midi=Grid.snap_to_chord_tone(int(note.midi),chord)
			synth._add_harmony_note(samples,float(note.start),float(note.duration),int(note.midi),float(note.gain),str(note.timbre),false)
		var peak:=0.
		for value:float in samples:peak=maxf(peak,absf(value))
		var gain:=minf(1.,.18/maxf(.000001,peak))
		if gain<1.:
			for i in range(samples.size()):samples[i]*=gain
			for note:Dictionary in notes:note.gain*=gain
		var wave:AudioStreamWAV=synth._pcm_stream(samples,false)
		for field:String in row.metadata:wave.set_meta(field,row.metadata[field])
		if wave.has_meta("chamber_midi"):wave.set_meta("chamber_midi",int(notes[0].midi))
		wave.set_meta("master_cue_notes",notes);wave.set_meta("master_cue_key",key);wave.set_meta("master_score_signature",signature);wave.set_meta("master_cue_bar",int(row.bar))
		out[key]=wave
	Grid.prepare_short_bank({},out)
	return out
static func install(owner:Node,waves:Dictionary)->void:
	owner._harmony_streams=owner._harmony_streams.duplicate()
	var original:={}
	for key:String in waves:original[key]=owner._harmony_streams[key];owner._harmony_streams[key]=waves[key]
	owner.set_meta("score_cue_originals",original);owner._harmony_view=[]
static func retire(owner:Node)->void:
	var original:Dictionary=owner.get_meta("score_cue_originals",{});var replacements:={}
	for key:String in original:
		var wave:AudioStreamWAV=owner._harmony_streams.get(key)
		if wave!=null and wave.has_meta("master_score_signature"):replacements[wave.get_instance_id()]=original[key];owner._harmony_streams[key]=original[key]
	for key:String in owner._edit_streams:
		var id:int=owner._edit_streams[key].get_instance_id()
		if replacements.has(id):owner._edit_streams[key]=replacements[id]
	owner.remove_meta("score_cue_originals");owner._harmony_view=[]
