extends RefCounted
## Six loop passages share the real transport; no new voice or saved state.
const NAMES=["落笔","对答","室内乐","回望","留白","归来"]
const CHAMBER=["air","terrace","wood_weave","wood_sylvan"]
static func passage(clock:float)->int:return posmod(floori(maxf(0.,clock)/24.),6)
static func _voice(score:Dictionary,cycle:int)->String:
 for offset in range(4):
  var track:String=CHAMBER[posmod(cycle+offset,4)]
  if float(score.get("targets",{}).get(track,-60.))> -38. and track!=str(score.get("lead_track","")):return track
 return ""
static func view(clock:float,score:Dictionary={})->Dictionary:
 var p:=passage(clock)
 return {"passage":p,"name":NAMES[p],"chamber":_voice(score,floori(maxf(0.,clock)/24.)),"period":144.,"periodic_rest":not allows_periodic(clock)}
static func _shade(track:String,lead:String,p:int,chamber:String)->float:
 if track==lead:return 0.
 if p not in [2,4]:return 0.
 if track=="foundation":return -1.5 if p==2 else -2.
 if track==chamber:return 0. if p==2 else -2.5
 return -5. if p==2 else -8.
static func gain(track:String,score:Dictionary,clock:float)->float:
 if float(score.get("targets",{}).get(track,-60.))<=-55.:return 0.
 var cycle:=floori(maxf(0.,clock)/24.);var p:=posmod(cycle,6);var lead:=str(score.get("lead_track",""))
 var ramp:=smoothstep(0.,1.5,fposmod(maxf(0.,clock),24.))
 return lerpf(_shade(track,lead,posmod(p-1,6),_voice(score,cycle-1)),_shade(track,lead,p,_voice(score,cycle)),ramp)
static func allows_periodic(clock:float)->bool:
 # Leave the last phrase of the quiet passage for melody and natural sound.
 return not (passage(clock)==4 and fposmod(maxf(0.,clock),24.)>=21.)
