extends RefCounted
## Correlate recorded Master PCM with the actual adoption clocks, not a guessed rest.
static func capture(c,duration:float=52.)->Dictionary:
	var demo=c.demo;var tree:SceneTree=demo.get_tree();var city:RefCounted=c.State.new();city.initialize_empty()
	for i in range(5):
		var built:Dictionary=city.add_house(Vector2(-22+i*3.,-10));assert(built.ok)
		for level in range(1,4):assert(city.add_cell(built.house_id,0,0,level).ok)
	await c.show(city,Vector2(-16,-10),"continuity");demo.zoom=28.;demo._update_camera();await c.settle()
	var recorder:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
	var started:float=demo.music._playback_clock();var ids:Dictionary=demo.music._variation_active.duplicate();var swaps:Array=[];var forced_dips:=0;var deferred:=0
	while demo.music._playback_clock()-started<duration:
		await tree.process_frame
		for key:String in demo.music._variation_active:
			if ids.get(key,"")!=demo.music._variation_active[key]:
				var row:Dictionary=demo.music._players[key].get_meta("last_smooth_swap",{}).duplicate()
				row.track=key;row.recording_time=float(row.clock)-started;swaps.append(row);ids[key]=demo.music._variation_active[key]
		var lead:String=demo.music.emergence.score.get("lead_track","")
		if demo.music._variation_pending.has(lead):
			deferred+=1
			if demo.music._players[lead].volume_db<=-45. and demo.music.target_gain_db(lead,false)>-30.:forced_dips+=1
	recorder.set_recording_active(false);var wav:AudioStreamWAV=recorder.get_recording()
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
	c.check(wav!=null and wav.save_to_wav(c.OUT+"/continuity_Master.wav")==OK,"real continuous52second recording")
	c.check(swaps.size()>0 and deferred>0 and forced_dips==0,"real pending variations preserve sounding lead")
	c.check(swaps.all(func(row):return (float(row.db)<=-45. or row.get("method")=="premixed" and float(row.get("boundary",-1.))>=float(row.clock))),"actual adoption clocks satisfy shared swap rule")
	var result:={"start_clock":started,"seconds":wav.get_length(),"swaps":swaps,"deferred_frames":deferred,"forced_gain_dip_frames":forced_dips,"wav":"continuity_Master.wav"}
	FileAccess.open(c.OUT+"/continuity_events.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));return result
