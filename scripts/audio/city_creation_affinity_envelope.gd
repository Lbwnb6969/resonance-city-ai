extends RefCounted
## Candidate observation and continuous mix are separate from current facts.
const OBSERVE:=6.
const TAIL:=6.
var value:=0.
var _candidate:=""
var _established:Array=[]
var _since:=0.
var _latched:=false
var _missing_since:=-1.
var _city:=0
var _last_clock:=-1.
func step(facts:Dictionary,clock:float,delta:float)->Dictionary:
	if _city!=facts.city or clock<_last_clock:
		_city=facts.city;value=0.;_candidate="";_established=[];_latched=false;_missing_since=-1.;_since=clock
	_last_clock=clock
	var ids:Array=facts.source_ids.duplicate();ids.sort()
	var same:bool=ids==_established
	var desired:bool=float(facts.enclosure)>=(.35 if _latched and same else .55) and not ids.is_empty()
	var candidate:String=JSON.stringify(ids) if desired else ""
	if candidate!=_candidate:_candidate=candidate;_since=clock
	var recover:bool=same and _missing_since>=0. and clock-_missing_since<TAIL and value>0.
	if desired and (clock-_since>=OBSERVE or same and _latched or recover):
		_latched=true;_missing_since=-1.;_established=ids.duplicate()
	else:
		_latched=false
		if _missing_since<0.:_missing_since=clock
	var target:float=facts.enclosure if _latched else 0.
	value=lerpf(value,target,1.-exp(-maxf(0.,delta)/(3.2 if target>value else 1.5)))
	if _missing_since>=0. and clock-_missing_since>=TAIL:value=0.
	return {"value":value,"target":target,"candidate":desired,"observed_seconds":clock-_since,"current_source_ids":ids,"historical_tail":value>0. and not _latched,"historical_source_ids":_established.duplicate() if value>0. and not _latched else [],"tail_deadline":_missing_since+TAIL if _missing_since>=0. else -1.,"facts":facts}
