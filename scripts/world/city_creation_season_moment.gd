extends RefCounted
const IDS=["spring_breeze","sun_shower","autumn_gold","starlight_fireflies"]
const TITLES=["春晓花朝","夏夕茶席","秋暮金叶","冬夜提灯"]
const POEMS=["花瓣拂过初醒的屋檐","茶烟与细雨一道升起","一片金叶，落在弦声之间","把一盏暖灯带回河湾"]
const PHASES=[0,1,1,2]
const TRACKS=[["air","wood_sylvan"],["terrace","wood_weave"],["wood_deep","foundation"],["air","clockwork_waltz"]]
static func envelope(clock:float,start:float)->float:
	var time:=fposmod(maxf(0.,clock-start),48.)
	return smoothstep(0.,1.,time)*(1.-smoothstep(6.,8.,time))
static func gain(track:String,mode:String,phase:int,clock:float,start:float)->float:
	var index:int=IDS.find(mode)
	return .9*envelope(clock,start) if index>=0 and phase==PHASES[index] and track in TRACKS[index] else 0.
