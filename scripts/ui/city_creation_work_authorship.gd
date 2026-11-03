extends Node
## Session author intent and memories. Captures create new work files only.
const Metadata=preload("res://scripts/world/city_creation_work_metadata.gd")
const Chronicle=preload("res://scripts/world/city_creation_city_chronicle.gd")
const Form=preload("res://scripts/ui/city_creation_work_authorship_ui.gd")
var gallery
var ui
var context:Array=[]
var parent_id:=""
var source_title:=""
var chronicle:=Chronicle.new()
var static_revision:=-1
var facts:Dictionary={}
var timer:=0.
func setup(owner)->void:
	gallery=owner;name="WorkAuthorship";gallery.demo.add_child(self);gallery.demo.set_meta("work_authorship",self);ui=Form.new();ui.setup(self);ensure_context()
func _identity()->Array:return [gallery.demo.state.get_instance_id(),gallery.demo.state._wish_epoch]
func _tea()->bool:return Chronicle.full_tea(gallery.demo.life.cafe)
func _start(data:Dictionary)->void:
	context=_identity();var city=gallery.demo.state;static_revision=city.revision;facts=Chronicle.geometry(city);facts.first_tea=_tea();chronicle.start(data.get("chronicle",[]),facts,city._undo.size(),city._redo.size())
	ui.load_current(str(data.get("author_note","")),bool(data.get("gilded_seal",false)))
func ensure_context()->void:
	if context==_identity():return
	parent_id="";source_title="";_start(Metadata.defaults())
func opened(chosen:Dictionary)->void:
	parent_id=str(chosen.id) if Metadata.valid_id(str(chosen.id)) else "";source_title=str(chosen.title) if not parent_id.is_empty() else "";_start(Metadata.fields(chosen))
func observe(force:bool=false)->void:
	var demo=gallery.demo
	if demo.edit_pending() or demo._edit_ui_pending or (gallery.busy and not force) or demo.life.last_revision!=demo.state.revision:return
	ensure_context();var city=demo.state
	if static_revision!=city.revision:static_revision=city.revision;facts=Chronicle.geometry(city)
	facts.first_tea=_tea();chronicle.observe(facts,city._undo.size(),city._redo.size(),true,Time.get_unix_time_from_system());ui.refresh()
func capture()->Dictionary:
	ensure_context();observe(true)
	return {"parent_work_id":parent_id,"author_note":ui.note.text,"chronicle":chronicle.rows(),"gilded_seal":ui.seal.button_pressed}
func saved(id:String,reason:String,title:String)->void:
	chronicle.persisted()
	if reason=="manual":parent_id=id;source_title=title
	ui.refresh()
func _process(delta:float)->void:
	timer+=delta
	if timer<.25:return
	timer=0.;observe()
