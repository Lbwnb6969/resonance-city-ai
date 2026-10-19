extends RefCounted
## A camera-sized score, sampled at phrase boundaries. Geometry is prepared
## by update_city; daily service changes only update the existing catalog.
const ERA_TRACKS:={"pastoral":"wood","renaissance":"renaissance_fugue","clockwork":"clockwork_waltz","modern_eco":"modern_symphony"}
const STYLE_TRACKS:={"warm":"wood","deep":"wood_deep","weave":"wood_weave","market":"wood_market","sylvan":"wood_sylvan"}
const LEADS:=["wood","wood_deep","wood_weave","wood_market","wood_sylvan","renaissance_fugue","clockwork_waltz","modern_symphony"]
const TIMBRES:={"wood":"wood","wood_deep":"air","wood_weave":"pluck","wood_market":"accordion","wood_sylvan":"flute","renaissance_fugue":"harpsichord","clockwork_waltz":"piano","modern_symphony":"felt_piano"}
var score:Dictionary={}
var phrase:=-1
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
var mode:=0
var last_cycle:=-1

static func evaluate(houses:Dictionary,acoustic:RefCounted,rings:Array,absolute_phrase:int,night:bool)->Dictionary:
	var weights:Dictionary={};var representatives:Dictionary={};var nearest:Dictionary={}
	var total:=0.;var height:=0.;var quality:=0.;var water:=0.;var upper:=0.;var rooms:=0.;var shapes:Array=[];var districts:Dictionary={}
	for id:String in houses:
		var w:float=acoustic.focus_weight(id)
		if w<=0.:continue
		var row:Dictionary=houses[id];var era:=str(row.get("era_theme","pastoral"))
		var track:String=STYLE_TRACKS.get(str(row.get("style","warm")),"wood") if era=="pastoral" else ERA_TRACKS.get(era,"wood")
		weights[track]=float(weights.get(track,0.))+w
		if w>float(nearest.get(track,0.)):
			nearest[track]=w;representatives[track]=id
		total+=w;quality+=float(row.get("level_tier",1))*w
		if float(row.get("base_y",0.))>=1.2 or int(row.get("towers",0))>0:height+=w
		if float(row.get("water_distance",INF))<4.5:water+=w
		upper+=int(row.get("upper_rooms",0))*w;rooms+=int(row.get("rooms",1))*w
		shapes.append([id,row.get("max_level",0),row.get("base_y",0.),row.get("level_tier",1),era])
		districts[str(row.get("district_id",""))]=era
	var ranked:Array=weights.keys()
	ranked.sort_custom(func(a:String,b:String)->bool:return a<b if is_equal_approx(weights[a],weights[b]) else weights[a]>weights[b])
	var lead:String="" if ranked.is_empty() else ranked[0]
	var second:String="" if ranked.size()<2 else ranked[1]
	var targets:Dictionary={"foundation":-12.,"air":-60.,"terrace":-60.,"concert":-60.}
	for track:String in LEADS:targets[track]=-60.
	var ring_count:=0
	for ring:Dictionary in rings:
		if acoustic.point_weight(ring.center)>0.:ring_count+=1
	var average:float=quality/maxf(.001,total);var elevation:float=height/maxf(.001,total)
	var silhouette:float=upper/maxf(1.,rooms)
	if not lead.is_empty():
		targets[lead]=-10.5
		if not second.is_empty():targets[second]=-10.5+linear_to_db(minf(.45,float(weights[second])/float(weights[lead])))
		targets.air=lerpf(-24.,-13.5,clampf(elevation*.7+silhouette*.6,0.,1.))
		targets.terrace=lerpf(-27.,-22.,clampf((average-1.)/4.+water/maxf(.001,total)*.25,0.,1.))
	shapes.sort_custom(func(a:Array,b:Array)->bool:return str(a[0])<str(b[0]))
	var dna:=hash([shapes,ring_count])
	var richness:float=clampf((average-1.)*.23+silhouette*.45+minf(2.,ring_count)*.15+elevation*.2,0.,1.)
	var variant:=0 if richness<.25 else (1 if richness<.65 else 2)
	# Phrase-local alternation is deterministic; a new camera, frame rate or
	# dictionary insertion order cannot consume a random number from the score.
	# Each four-phrase passage includes a lighter turn. Advance that turn on
	# every 24-second cycle; rich passages also choose a cycle-specific fill.
	var cycle:=int(absolute_phrase/8)
	var turn:=posmod(absolute_phrase+cycle+posmod(dna,4),4)
	if variant>0 and turn==0:variant-=1
	elif variant==1 and richness>.4 and turn==2 and posmod(hash([dna,cycle]),3)==0:variant=2
	var preferred:=3 if night else (1 if elevation>=.5 else (2 if lead=="renaissance_fugue" or water/maxf(.001,total)>.65 else 0))
	return {"targets":targets,"lead_track":lead,"secondary_track":second,"source_id":str(representatives.get(lead,"")),"weights":weights,"source_ids":representatives,"variant":variant,"preferred_mode":preferred,"dna":dna,"visible_houses":shapes.size(),"average_tier":average,"elevation":elevation,"silhouette":silhouette,"rings":ring_count,"districts":districts.size(),"richness":richness}

func advance(houses:Dictionary,acoustic:RefCounted,rings:Array,absolute_phrase:int,night:bool,minimum_variant:int=0)->Dictionary:
	if phrase==absolute_phrase:return score
	phrase=absolute_phrase
	score=evaluate(houses,acoustic,rings,absolute_phrase,night)
	score.variant=maxi(int(score.variant),clampi(minimum_variant,0,2));score.regional_variant=minimum_variant
	var cycle:=int(absolute_phrase/8)
	if last_cycle>=0 and cycle!=last_cycle:mode=Palette.next_mode(mode,int(score.preferred_mode),int(score.dna),cycle)
	last_cycle=cycle;score.harmony_mode=mode;score.harmony_name=Palette.NAMES[mode]
	return score

func reset()->void:score.clear();phrase=-1;mode=0;last_cycle=-1
