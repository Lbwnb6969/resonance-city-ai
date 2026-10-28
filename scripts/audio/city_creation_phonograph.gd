extends RefCounted
## Reuses the twelve existing voices. Saved mixes contain bank identities only.
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Emergence=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const STEMS:=["foundation","wood","air","terrace","concert","wood_deep","wood_weave","wood_market","wood_sylvan","renaissance_fugue","clockwork_waltz","modern_symphony"]
var active:=false
var mix:Dictionary={}
var _resume:Dictionary={}
var _fade:=0.

static func valid(value:Variant)->bool:
	if not value is Dictionary or value.get("version")!=1 or not value.get("tracks") is Dictionary:return false
	if value.tracks.size()!=STEMS.size():return false
	for field:String in ["position","theme_pan","concert_pan"]:
		if not _number(value.get(field)):return false
	if value.position<0. or value.position>=24. or absf(float(value.theme_pan))>.65 or absf(float(value.concert_pan))>.65:return false
	if not value.get("mode") is float and not value.get("mode") is int:return false
	if float(value.mode)!=floorf(float(value.mode)) or value.mode< -1 or value.mode>=Palette.NAMES.size():return false
	for stem:String in STEMS:
		var row:Variant=value.tracks.get(stem)
		if not row is Dictionary or row.get("bank") not in ["original","variations","harmony"] or not row.get("key") is String:return false
		if not _number(row.get("db")) or row.db< -80. or row.db>0.:return false
		var parts:PackedStringArray=str(row.key).split("/")
		if row.bank=="original":
			if row.key!=stem:return false
		elif row.bank=="harmony":
			if preload("res://scripts/audio/city_creation_score_sample_routing.gd").valid_key(str(row.key),stem):continue
			if preload("res://scripts/audio/city_creation_chamber_legato.gd").valid_key(str(row.key)) and stem in Emergence.LEADS+["concert"]:continue
			if parts.size()==2 and parts[0].is_valid_int() and int(parts[0])>=0 and int(parts[0])<Palette.NAMES.size() and parts[1] in ["chamber_counter_pastoral","chamber_counter_renaissance","chamber_counter_clockwork","chamber_counter_modern_eco"] and stem in Emergence.LEADS+["concert"]:continue
			if parts.size()==2 and parts[0].is_valid_int() and int(parts[0])>=0 and int(parts[0])<Palette.NAMES.size() and parts[1]=="nocturne" and stem in Emergence.LEADS+["concert"]:continue
			if parts.size()!=2 or not parts[0].is_valid_int() or int(parts[0])<0 or int(parts[0])>=Palette.NAMES.size() or parts[1]!=stem or stem not in ["foundation","air","terrace","concert"]:return false
		else:
			if parts.size()==3:
				if not parts[0].is_valid_int() or int(parts[0])<1 or int(parts[0])>=Palette.NAMES.size():return false
			elif parts.size()!=2:return false
			if parts[parts.size()-2]!=stem or parts[parts.size()-1] not in ["0","1","2"] or stem not in Emergence.LEADS+["concert"]:return false
	return true

static func _number(v:Variant)->bool:return (v is float or v is int) and is_finite(float(v))
static func _banks(music:Node)->Dictionary:
	return {"original":music._original_streams,"variations":music._variation_streams,"harmony":music._harmony_streams}

static func capture(music:Node)->Dictionary:
	if music._loading or music.phonograph.active or music._players.size()!=12:return {}
	var tracks:Dictionary={};var banks:=_banks(music)
	for stem:String in STEMS:
		var player:AudioStreamPlayer=music._players[stem]
		var found:Dictionary={}
		for bank:String in banks:
			for key:String in banks[bank]:
				if banks[bank][key]==player.stream:
					found={"bank":bank,"key":key,"db":clampf(player.volume_db,-80.,0.)};break
			if not found.is_empty():break
		if found.is_empty():return {}
		tracks[stem]=found
	var pans:Dictionary=music.spatial.report()
	return {"version":1,"tracks":tracks,"position":fposmod(float(music._players.concert.get_playback_position()),24.),"mode":music.harmony_mode(),"theme_pan":pans.theme_pan,"concert_pan":pans.concert_pan}

static func reconstruct(city:RefCounted,view:Dictionary)->Dictionary:
	var catalog:=Catalog.prepare(city);var acoustic:=Acoustic.new()
	var focus:Array=view.get("focus",[-3.,0.,0.])
	acoustic.set_view(Vector2(focus[0],focus[2]),float(view.get("zoom",25.)))
	acoustic.evaluate(catalog.houses,[])
	var score:=Emergence.evaluate(catalog.houses,acoustic,catalog.canon,0,int(view.get("light_phase",0))==2)
	var mode:=Palette.for_city(city)
	if mode<0:mode=int(score.preferred_mode)
	var tracks:Dictionary=preload("res://scripts/audio/city_creation_chamber_roles.gd").reconstruction(city,view,catalog,acoustic,score,mode)
	return {"version":1,"tracks":tracks,"position":0.,"mode":mode,"theme_pan":0.,"concert_pan":0.}

func begin(music:Node,value:Dictionary)->Dictionary:
	if music._loading or not valid(value):return {"ok":false,"message":"这份留声机曲目尚未准备好"}
	var banks:=_banks(music)
	for stem:String in STEMS:
		var row:Dictionary=value.tracks[stem]
		if row.bank=="harmony" and str(row.key).begins_with("chamber_legato/"):preload("res://scripts/audio/city_creation_chamber_legato.gd").materialize(music,str(row.key))
		if not banks[row.bank].has(row.key):return {"ok":false,"message":"请先准备本地音乐声部库"}
	if active:stop(music)
	_resume={"players":{},"pan":music.spatial.report(),"filters":[]}
	for stem:String in STEMS:
		var player:AudioStreamPlayer=music._players[stem]
		_resume.players[stem]={"stream":player.stream,"position":player.get_playback_position(),"playing":player.playing,"db":player.volume_db}
	for i in range(2):
		var bus:=AudioServer.get_bus_index(music.spatial._names[i])
		_resume.filters.append(AudioServer.is_bus_effect_enabled(bus,1))
		AudioServer.set_bus_effect_enabled(bus,1,false)
	music.clear_travel();music.reply.clear();music.attention.clear();music.canon.clear()
	for player:AudioStreamPlayer in music._effects:player.stop()
	for stem:String in STEMS:
		var row:Dictionary=value.tracks[stem];var player:AudioStreamPlayer=music._players[stem]
		player.volume_db=-80.;player.stream=banks[row.bank][row.key];player.play(float(value.position))
	music.spatial._theme.pan=float(value.theme_pan);music.spatial._concert.pan=float(value.concert_pan)
	mix=value.duplicate(true);active=true;_fade=0.
	return {"ok":true,"message":"留声机正在播放"}

func tick(music:Node,delta:float)->void:
	_fade=minf(1.,_fade+delta*5.)
	for stem:String in STEMS:music._players[stem].volume_db=-80. if music.muted else maxf(-80.,float(mix.tracks[stem].db)+linear_to_db(maxf(.00001,_fade)))

func stop(music:Node)->void:
	if not active:return
	for stem:String in STEMS:
		var row:Dictionary=_resume.players[stem];var player:AudioStreamPlayer=music._players[stem]
		player.stream=row.stream;player.volume_db=-80. if music.muted else row.db
		if row.playing:player.play(float(row.position))
		else:player.stop()
	music.spatial._theme.pan=float(_resume.pan.theme_pan);music.spatial._concert.pan=float(_resume.pan.concert_pan)
	for i in range(2):AudioServer.set_bus_effect_enabled(AudioServer.get_bus_index(music.spatial._names[i]),1,bool(_resume.filters[i]))
	_resume.clear();mix.clear();active=false
