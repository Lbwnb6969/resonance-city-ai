extends RefCounted
## Complete-song candidates only. Statistical texture fit is not a listening approval.
const Bundle=preload("res://scripts/audio/city_creation_game_music_bundle.gd")
const BREATH_SECONDS:=3.
var owner:Node
var rows:Array=[]
var history:Array=[]
var recent:Array=[]
var enabled:=false
var breathing:=false
var remaining:=0.
var worker:Thread
var ready:Dictionary={}
var next_row:Dictionary={}
var failed:=""
var last_second:=-1
var transitions:Array=[]
var ended_usec:=0
var breath_clock:=0.
func configure(host:Node,catalog:Array)->void:
	owner=host;rows=[]
	for row:Dictionary in catalog:
		if row.get("kind")!="music" or FileAccess.get_sha256(row.manifest)!=row.manifest_sha256:continue
		var manifest:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(row.manifest));var d:Dictionary=manifest.get("descriptors",{})
		var body:Dictionary=d.get("body",{}).get("features",{});var motion:Dictionary=d.get("motion",{}).get("features",{});var detail:Dictionary=d.get("detail",{}).get("features",{})
		rows.append(row.merged({"fit":[float(body.get("low_band_fraction",0.)),clampf(float(motion.get("positive_envelope_change",0.)),0.,1.),1.-float(detail.get("active_fraction",1.))]}))
	enabled=not rows.is_empty()
func observe()->void:
	if not enabled:return
	var second:=floori(owner.clock)
	if second==last_second:return
	last_second=second;var facts:Dictionary=owner.spatial_facts
	history.append([float(facts.get("enclosure",0.)),float(facts.get("flow",0.)),float(facts.get("craft",0.))])
	if history.size()>30:history.pop_front()
func average()->Array:
	var result:Array=[0.,0.,0.]
	for sample:Array in history:
		for i in range(3):result[i]+=float(sample[i])/history.size()
	return result
func select_next()->Dictionary:
	if owner.music._pluck_city.creative_settings.music.mode=="fixed":
		for row:Dictionary in rows:
			if row.source_id==owner.prepared.manifest.source_id:return row
	var candidates:Array=rows.filter(func(row):return row.source_id!=owner.prepared.manifest.source_id and not recent.has(row.source_id))
	if candidates.is_empty():candidates=rows.filter(func(row):return row.source_id!=owner.prepared.manifest.source_id)
	if candidates.is_empty():return rows[0]
	var mean:=average();var best:Dictionary={};var score:=INF
	for row:Dictionary in candidates:
		var distance:=0.
		for i in range(3):distance+=pow(float(row.fit[i])-float(mean[i]),2.)
		if distance<score:best=row;score=distance
	return best
func prepare_next()->void:
	if worker!=null or not ready.is_empty() or not failed.is_empty():return
	next_row=select_next();var path:String=next_row.manifest;var signature:String=next_row.manifest_sha256
	worker=Thread.new();worker.start(func():return Bundle.read(path) if FileAccess.get_sha256(path)==signature else {"ok":false,"reason":"candidate_signature_changed"})
func finish()->bool:
	if not enabled:return false
	breathing=true;remaining=BREATH_SECONDS;breath_clock=0.;ended_usec=Time.get_ticks_usec();prepare_next();return true
func step(delta:float)->void:
	if not enabled:return
	if worker!=null and not worker.is_alive():
		ready=worker.wait_to_finish();worker=null
		if not ready.get("ok",false):failed=str(ready.get("reason","candidate_unavailable"));ready={}
	if owner.paused:return
	if not breathing:return
	remaining=maxf(0.,remaining-delta)
	breath_clock+=delta
	if remaining>0. or ready.is_empty():return
	if not owner.valid_context():return
	transitions.append({"from":owner.prepared.manifest.source_id,"to":next_row.source_id,"breath_seconds":breath_clock,"wall_seconds":float(Time.get_ticks_usec()-ended_usec)/1000000.,"mean_affinity":average()})
	if transitions.size()>8:transitions.pop_front()
	recent.append(owner.prepared.manifest.source_id)
	if recent.size()>2:recent.pop_front()
	var packet:=ready;var path:String=next_row.manifest;ready={};next_row={};history=[];last_second=-1;breathing=false
	owner.switch_packet(packet,path)
func close()->void:
	enabled=false
	if worker!=null:worker.wait_to_finish();worker=null
	ready={};rows=[]
