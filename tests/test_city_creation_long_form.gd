extends SceneTree
const Form=preload("res://scripts/audio/city_creation_long_form.gd")
var failures:Array=[]
var checks:=0
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:
 var score:={"targets":{"wood":-12.,"air":-23.,"terrace":-25.,"foundation":-16.,"concert":-60.},"lead_track":"wood"}
 for t:float in [0.,24.,48.,50.,96.,100.,118.,144.,168.]:
  check(Form.gain("wood",score,t)==0. and Form.gain("concert",score,t)==0.,"preserve actual lead and never awaken unavailable voice "+str(t))
 check(Form.gain("terrace",score,52.)< -4.9 and Form.gain("air",score,52.)==0.,"chamber passage retains an available complementary voice instead of waking an absent one")
 check(Form.gain("terrace",score,100.)==-8. and Form.gain("foundation",score,100.)==-2.,"quiet passage opens actual accompaniment space without silence")
 var finite:=true;var smooth:=true;var last:float=Form.gain("air",score,0.)
 for tick in range(14401):
  var next:float=Form.gain("air",score,tick*.01);finite=finite and is_finite(next) and next<=0.;smooth=smooth and absf(next-last)<.09;last=next
 check(finite and smooth,"full144second form has finite attenuation and smooth boundaries")
 check(not Form.allows_periodic(118.) and Form.allows_periodic(116.) and Form.allows_periodic(120.),"only periodic short ornaments leave a three-second quiet cadence")
 check(Form.view(144.).passage==Form.view(0.).passage and Form.view(100.).name=="留白","transport-derived form cycles without random or persistent state")
 print("LONG_FORM ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
