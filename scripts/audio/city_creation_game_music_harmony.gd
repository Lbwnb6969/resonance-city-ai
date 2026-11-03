extends RefCounted
## Per-second measured triad candidates, independent of the legacy 24s grid.
static func node(music:Node)->Node:
	var active:Node=music.get_node_or_null("GameMusicPlayer")
	return active if active!=null and active.active and not active.retired and not active.cancelled and active.valid_context() else null
static func position(music:Node)->float:
	var active:=node(music)
	if active==null:return -1.
	return float(active.prepared.manifest.frames)/44100. if active.sequence.breathing else active.player.get_playback_position()
static func valid(data:Dictionary,manifest:Dictionary)->bool:
	var h:Variant=data.get("harmony")
	if not h is Dictionary or h.get("schema")!="measured_triad_timeline_v1" or h.get("step_seconds")!=1. or not h.get("segments") is Array:return false
	if data.get("source_id")!=manifest.source_id or data.get("source_master_sha256")!=manifest.full_mix.sha256 or data.get("frames")!=manifest.frames or data.get("sample_rate")!=44100:return false
	var duration:=float(manifest.frames)/44100.;var segments:Array=h.segments
	if segments.size()!=ceili(duration):return false
	for i in range(segments.size()):
		var row:Variant=segments[i]
		if not row is Dictionary or row.get("start")!=i or not row.get("end") is float and not row.get("end") is int:return false
		if absf(float(row.end)-minf(i+1.,duration))>.000001 or not row.get("pitch_classes") is Array:return false
		var pcs:Array=row.pitch_classes
		if not pcs.is_empty() and pcs.size()!=3:return false
		var seen:Array=[]
		for pc:Variant in pcs:
			if not (pc is float or pc is int) or pc!=int(pc) or pc<0 or pc>=12 or seen.has(int(pc)):return false
			seen.append(int(pc))
		if not pcs.is_empty():
			for field:String in ["fit_score","separation_margin","top_three_energy_fraction"]:
				var value:Variant=row.get(field,0.)
				if not (value is float or value is int) or not is_finite(float(value)):return false
		if not pcs.is_empty() and (float(row.get("fit_score",0.))<.85 or float(row.get("separation_margin",0.))<.06 or float(row.get("top_three_energy_fraction",0.))<.55):return false
	return true
static func current(music:Node,clock:float=-1.)->Dictionary:
	var active:=node(music)
	if active==null:return {}
	var at:=position(music) if clock<0. else clock;var timeline:Dictionary=active.prepared.get("timeline",{});var pcs:Array=[];var second:=floori(maxf(0.,at))
	if not active.sequence.breathing and not active.paused and not timeline.is_empty():
		var segments:Array=timeline.harmony.segments
		if second<segments.size() and at<float(segments[second].end):
			for pc:Variant in segments[second].pitch_classes:pcs.append(int(pc))
	return {"chord":pcs.map(func(pc):return 60+pc),"pitch_classes":pcs,"unpitched":pcs.is_empty(),"timeline_second":second,"position":at,"bar":-1,"mode":-1,"signature":active.prepared.signature}
static func snap(midi:int,pcs:Array)->int:
	for distance in range(7):
		for candidate:int in [midi-distance,midi+distance]:
			if posmod(candidate,12) in pcs:return candidate
	return midi
