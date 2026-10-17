extends RefCounted
## Authored district and real phrase determine one immediately playable note.
const ScalePCM = preload("res://scripts/audio/city_creation_theme_pcm.gd")
const RATE := 22050
const DURATION := 0.64
const CHORDS := [[50,57,62],[47,54,59],[45,52,57],[50,57,64],[50,57,62],[47,54,62],[45,52,59],[50,57,64]]
const TIMBRES := {"warm":"pluck","deep":"harp","weave":"marimba","market":"accordion","sylvan":"flute"}

static func plan(city: RefCounted, hid: String, clock_sec: float) -> Dictionary:
	for house: Dictionary in city.houses:
		if str(house.id)!=hid: continue
		var maximum := 0
		for cell: Dictionary in house.cells: maximum=maxi(maximum,int(cell.level))
		var district: Dictionary = city.district_for_house(hid)
		var style := str(district.get("style","warm"))
		var bar := posmod(int(floor(clock_sec/3.0)),8)
		var variant := posmod(hash(hid),2)
		var midi := pitch(bar,mini(maximum,2),variant)
		var timbre := str(TIMBRES[style])
		return {"house_id":hid,"style":style,"max_level":maximum,"midi":midi,"timbre":timbre,
			"position":Vector2(float(house.origin[0]),float(house.origin[1])),"bar":bar,"band":mini(maximum,2),
			"stream_key":stream_key(timbre,midi)}
	return {}

static func pitch(bar: int, band: int, variant: int) -> int:
	var root := int(CHORDS[posmod(bar,8)][0])+12
	# Root/third, fifth/sixth, then the upper octave's root/fifth harmonic.
	var interval: int = int([[0,4],[7,9],[12,19]][clampi(band,0,2)][posmod(variant,2)])
	return ScalePCM.quantize(root+interval)

static func stream_key(timbre: String, midi: int) -> String:
	return "house_pluck_%s_%d" % [timbre,midi]

static func render(add_note: Callable, make_stream: Callable) -> Dictionary:
	var streams: Dictionary = {}
	var peaks: Dictionary = {}
	var notes: Dictionary = {}
	var maximum := 0.0
	for style: String in TIMBRES:
		var timbre := str(TIMBRES[style])
		for bar in range(8):
			for band in range(3):
				for variant in range(2):
					var midi := pitch(bar,band,variant)
					var key := stream_key(timbre,midi)
					if streams.has(key): continue
					var samples := PackedFloat32Array()
					samples.resize(int(RATE*DURATION))
					add_note.call(samples,0.0,0.55,midi,0.10,timbre,false)
					var peak := 0.0
					for sample: float in samples: peak=maxf(peak,absf(sample))
					streams[key]=make_stream.call(samples,false)
					peaks[key]=peak
					notes[key]={"midi":midi,"timbre":timbre,"duration":DURATION,"gain":0.10}
					maximum=maxf(maximum,peak)
	return {"streams":streams,"peaks":peaks,"notes":notes,"maximum":maximum,"bytes":streams.size()*int(RATE*DURATION)*2}
