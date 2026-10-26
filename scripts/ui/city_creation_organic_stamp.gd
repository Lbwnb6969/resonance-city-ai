extends Node
## One roof seal, one undoable change. Later organic forms reuse this stamp.
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
var pop:RefCounted
var button:Button
var key:Variant=null
func setup(owner:RefCounted)->void:
	pop=owner;pop.demo.add_child(self)
	button=pop._seal(pop.ring.left.get_child(0),"leaf","微雕",cycle);button.name="OrganicCarvingStamp"
func cycle()->void:
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty():return
	var current:=int(house.get("corner_bevel",0));var next:=2 if current==0 else 1 if current==2 else 0
	if not Form.supported(pop.demo.state,house):next=0
	var result:=Form.set_corner(pop.demo.state,pop.target_house_id,next)
	pop.demo._after_edit(result,"room",true,pop.target_house_id);pop.refresh();key=null
func _process(_delta:float)->void:
	if not pop.card.visible:return
	var next:=[pop.target_house_id,pop.demo.state.revision]
	if key==next:return
	key=next
	var house:Dictionary=pop.demo.town._house_record(pop.target_house_id)
	if house.is_empty():return
	var value:=int(house.get("corner_bevel",0));var supported:=Form.supported(pop.demo.state,house)
	button.disabled=not supported and value==0;button.caption=("原貌" if value!=0 else "微雕") if not supported else "微雕" if value==0 else Form.LABELS[value]
	button.tooltip_text="轻点轮换：规整直墙 → 温润圆角 → 斜切导角" if supported else "此屋保留原型轮廓"+(" · 轻点收起微雕" if value!=0 else "");button.queue_redraw()
