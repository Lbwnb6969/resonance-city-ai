extends Node
## Aggregate simultaneous life rewards without delaying edits or errors.
const KINDS={"♫ 共鸣品质":"品质","☕":"茶叙","♫ 邻屋收到":"送装","手记添了一章":"收藏","这片街坊留下了永久回响":"风物诗"}
var demo:Node3D
var pending:Dictionary={}
var originals:Array[String]=[]
var records:Array[Dictionary]=[]
var age:=0.
var quiet:=0.
var epoch:=0
static func submit(owner:Node3D,text:String)->bool:
 var kind:=""
 for prefix:String in KINDS:
  if text.begins_with(prefix):kind=KINDS[prefix];break
 if not owner.has_meta("reward_whisper"):
  if kind.is_empty():return false
  var node=load("res://scripts/ui/city_creation_reward_whisper.gd").new();node.demo=owner;node.epoch=owner.state.get_instance_id();owner.add_child(node);owner.set_meta("reward_whisper",node)
 var whisper:Node=owner.get_meta("reward_whisper")
 if kind.is_empty():whisper.quiet=4.;return false
 whisper.pending[kind]=int(whisper.pending.get(kind,0))+1;whisper.originals.append(text);return true
func _process(delta:float)->void:
 if epoch!=demo.state.get_instance_id():epoch=demo.state.get_instance_id();pending.clear();originals.clear();age=0.
 quiet=maxf(0.,quiet-delta)
 if pending.is_empty():return
 age+=delta
 if age<.4 or quiet>0. or demo.gallery.busy:return
 if not demo.ui_layer.visible or demo.gallery.panel.visible or demo.journal.scrollbook.visible or demo.guide.visible():return
 if demo.has_meta("inspiration_draft") and demo.get_meta("inspiration_draft").paper.visible:return
 if demo.has_meta("era_ceremony") and not demo.get_meta("era_ceremony").active.is_empty():return
 var parts:Array[String]=[]
 for kind:String in pending:parts.append(kind+(" ×%d"%int(pending[kind]) if int(pending[kind])>1 else ""))
 var text:="河湾添了回响 · "+" · ".join(parts)
 records.append({"kinds":pending.duplicate(),"details":originals.duplicate(),"caption":text})
 if records.size()>64:records.pop_front()
 demo.toast.text=text;demo.toast.tooltip_text="\n".join(originals);demo.toast.visible=true;demo.toast_time=4.
 pending.clear();originals.clear();age=0.
