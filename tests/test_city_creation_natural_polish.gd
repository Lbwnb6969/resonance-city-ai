extends SceneTree
const Fold=preload("res://scripts/visual/city_creation_meadow_fold.gd")
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
const Env=preload("res://scripts/visual/city_creation_environment.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
 checks+=1
 if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
 for index in range(7):
  var center:=Fold._center(Vector3.ZERO,Vector3.RIGHT,.25,.15,1.,index)
  var prior:=Fold._center(Vector3.ZERO,Vector3.RIGHT,.25,.15,.95,index)
  check(center.x>prior.x and center.y<prior.y,"actual terminal leaf tangent points outward and downward "+str(index))
  check(center.y>.1 and center.length()<.42,"actual flexible leaf stays above soil and inside mask footprint "+str(index))
 var parent:=Node3D.new();root.add_child(parent);var env:=Env.new();env.setup(parent)
 for phase in range(3):
  env.apply(phase);env.set_view(.12)
  check(env.environment.fog_enabled and env.environment.fog_depth_begin>=22. and env.environment.fog_light_color.get_luminance()<.8,"low-view phase has distant bounded sky haze "+str(phase))
  env.set_view(.8);check(not env.environment.fog_enabled,"normal creation view remains clear "+str(phase))
 var actor:=Visual.person(0);root.add_child(actor);Visual.identify(actor,"resident");Visual.hand(actor,"cup",1.)
 var mesh:ArrayMesh=actor.get_child(0).get_child(0).mesh;var arrays:Array=mesh.surface_get_arrays(0);var shapes:Array=mesh.surface_get_blend_shape_arrays(0)
 var bounds:Dictionary={}
 for tag in [5,6,8]:
  var lo:=Vector3(INF,INF,INF);var hi:=-lo
  for i in range(arrays[Mesh.ARRAY_VERTEX].size()):
   if roundi(arrays[Mesh.ARRAY_TEX_UV2][i].x)==tag:
    var p:Vector3=shapes[4][Mesh.ARRAY_VERTEX][i];lo=lo.min(p);hi=hi.max(p)
  bounds[str(tag)]={"min":lo,"max":hi}
 var mouth:=Vector3(0,.38,0)+Basis(Vector3.RIGHT,.13)*(Vector3(.04,.44,.077)-Vector3(0,.38,0))-Vector3.UP*.08
 var nearest:=INF
 for i in range(arrays[Mesh.ARRAY_VERTEX].size()):
  if roundi(arrays[Mesh.ARRAY_TEX_UV2][i].x)==8 and arrays[Mesh.ARRAY_COLOR][i].b>.7:
   nearest=minf(nearest,Vector3(shapes[4][Mesh.ARRAY_VERTEX][i]).distance_to(mouth))
 check(nearest<.025 and bounds["8"].max.y<.37,"actual cream cup rim meets lower face within2.5cm and stays below eye line")
 print("M50_POLISH ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"sip_bounds":bounds}))
 parent.free();actor.free();quit(0 if failures.is_empty() else 1)
