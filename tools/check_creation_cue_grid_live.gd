extends SceneTree
## Actual mixer/sample evidence: left channel is the shared clock, right cues.
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
var out:="res://验证记录/M45/grid"
func _initialize()->void:run.call_deferred()
func pulse(seconds:float,clock:bool)->AudioStreamWAV:
	var wave:=AudioStreamWAV.new();wave.mix_rate=22050;wave.format=AudioStreamWAV.FORMAT_16_BITS;wave.stereo=true
	var data:=PackedByteArray();data.resize(roundi(seconds*22050)*4)
	for i in range(data.size()/4):
		var age:=i-roundi(round(float(i)/(22050.*Grid.GRID))*22050.*Grid.GRID) if clock else i
		if age>=0 and age<96:data.encode_s16(i*4+(0 if clock else 2),roundi(9000.*sin(PI*age/96.)))
	wave.data=data
	if clock:wave.loop_mode=AudioStreamWAV.LOOP_FORWARD;wave.loop_end=data.size()/4
	return wave
func run()->void:
	var qoa:bool="--qoa" in OS.get_cmdline_user_args()
	if qoa:out+="_qoa"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var owner:=Music.new();root.add_child(owner);owner.set_process(false)
	var transport:=AudioStreamPlayer.new();owner.add_child(transport);transport.stream=pulse(24.,true);owner._players.concert=transport
	if qoa:transport.stream=preload("res://tools/bake_creation_portable_bank.gd").encode(transport.stream)
	for i in range(4):var player:=AudioStreamPlayer.new();owner.add_child(player);owner._effects.append(player)
	var theme:=AudioStreamPlayer.new();owner.add_child(theme)
	owner.spatial.setup(owner,[theme],transport,owner._effects)
	transport.bus="Master"
	var record:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,record);record.set_recording_active(true)
	transport.play();var wave:=pulse(.06,false)
	Grid.prepare_short_bank({"wave":wave},{})
	if qoa:wave=preload("res://tools/bake_creation_portable_bank.gd").encode(wave)
	for i in range(18):
		await create_timer(.207+fposmod(i*.071,.19)).timeout
		Grid.play(owner,owner._effects[0],wave,Vector2.INF,1.,false);owner._effects[0].bus="Master"
	await create_timer(.5).timeout
	record.set_recording_active(false);var recorded:=record.get_recording();recorded.save_to_wav(out+"/mixer_clock_left_cues_right.wav")
	var pcm:=recorded.data;var left:Array[int]=[];var right:Array[int]=[];var previous_l:=false;var previous_r:=false
	for i in range(pcm.size()/4):
		var l:=absi(pcm.decode_s16(i*4))>200;var r:=absi(pcm.decode_s16(i*4+2))>50
		if l and not previous_l:left.append(i)
		if r and not previous_r:right.append(i)
		previous_l=l;previous_r=r
	var offsets:Array=[];var worst:=0.
	for cue:int in right:
		var closest:=1000000
		for beat:int in left:
			if absi(cue-beat)<absi(closest):closest=cue-beat
		offsets.append(closest);worst=maxf(worst,absf(float(closest)))
	var result:={"ok":right.size()==18 and worst<=4,"cues":right.size(),"reference_pulses":left.size(),"worst_samples":worst,"rate":recorded.mix_rate,"offsets_samples":offsets,"clock_bias":owner.get_meta("cue_clock_bias",0.),"events":owner.get_meta("cue_grid_events",[])}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"))
	print("CUE_GRID_MIXER ",JSON.stringify(result))
	AudioServer.remove_bus_effect(0,AudioServer.get_bus_effect_count(0)-1)
	owner.queue_free();await process_frame;quit(0 if result.ok else 1)
