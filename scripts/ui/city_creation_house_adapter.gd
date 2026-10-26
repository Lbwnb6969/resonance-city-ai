extends RefCounted
## Public authoring controls remain addressable; only the current inspector renders.
static func label(demo:Node3D,parent:Control,field:String,node_name:String="")->void:
 var control:=Label.new();control.name=node_name if not node_name.is_empty() else field;parent.add_child(control);demo.set(field,control)
static func progress(demo:Node3D,parent:Control,field:String,node_name:String="")->void:
 var control:=ProgressBar.new();control.name=node_name if not node_name.is_empty() else field;control.show_percentage=false;parent.add_child(control);demo.set(field,control)
static func button(demo:Node3D,parent:Control,field:String,node_name:String,text:String,action:Callable)->void:
 var control:=Button.new();control.name=node_name;control.text=text;control.pressed.connect(action);parent.add_child(control);demo.set(field,control)
static func setup(demo:Node3D,root:Control)->void:
 demo.place_panel=PanelContainer.new();demo.place_panel.name="Place";root.add_child(demo.place_panel)
 var scroll:=ScrollContainer.new();scroll.name="PlaceScroll";demo.place_panel.add_child(scroll)
 var data:=Control.new();data.name="HouseAuthoringAdapter";scroll.add_child(data)
 demo.place_name=LineEdit.new();demo.place_name.placeholder_text="街坊名字";data.add_child(demo.place_name)
 demo.place_name.text_submitted.connect(func(value:String)->void:demo._after_edit(demo.state.set_house_name(demo.selected_house,value),"room");demo.place_name.release_focus())
 for field:String in ["place_description","household_info","concert_info","relay_info","matinee_info","bakery_info","workshop_info","cafe_info"]:
  label(demo,data,field,{"household_info":"HouseholdHarmony","relay_info":"ConcertRelayInfo","matinee_info":"MatineeInfo","bakery_info":"BakeryInfo","workshop_info":"WorkshopInfo","cafe_info":"CafeInfo"}.get(field,""))
 for field:String in ["concert_progress","bakery_progress","workshop_progress","cafe_progress"]:progress(demo,data,field,{"bakery_progress":"BakeryProgress","workshop_progress":"WorkshopProgress","cafe_progress":"CafeProgress"}.get(field,""))
 demo.house_style_picker=OptionButton.new();demo.house_style_picker.name="HouseStyle";demo.house_style_picker.focus_mode=Control.FOCUS_NONE;data.add_child(demo.house_style_picker)
 for text:String in demo.Copy.HOUSE_STYLE_LABELS:demo.house_style_picker.add_item(text)
 demo.house_style_picker.item_selected.connect(func(index:int)->void:demo._after_edit(demo.state.set_house_style(demo.selected_house,demo.State.HOUSE_STYLES[index]),"room"))
 demo.house_era_picker=OptionButton.new();demo.house_era_picker.name="HouseEra";demo.house_era_picker.add_item("时代风貌 · 跟随街坊");data.add_child(demo.house_era_picker)
 for text:String in demo.State.Eras.NAMES:demo.house_era_picker.add_item(text)
 demo.house_era_picker.item_selected.connect(func(index:int)->void:demo._after_edit(demo.state.set_house_era(demo.selected_house,"district" if index==0 else demo.State.Eras.IDS[index-1]),"room"))
 for role:String in demo.Copy.ROLE_BUTTON_LABELS:
  var control:=Button.new();control.text=demo.Copy.ROLE_BUTTON_LABELS[role];control.pressed.connect(func()->void:demo._after_edit(demo.state.set_house_role(demo.selected_house,role),"room"));data.add_child(control);demo.role_buttons[role]=control
 button(demo,data,"concert_button","InviteConcert","♫ 邀请街坊演出",demo._invite_concert)
 button(demo,data,"relay_button","ConcertRelay","从这里开始庆典接力",demo._toggle_relay)
 button(demo,data,"matinee_button","AutoMatinee","开启常驻巡演",demo._toggle_matinee)
 button(demo,data,"bakery_button","BakeryOpen","暂停烘焙",func()->void:demo._after_edit(demo.state.set_bakery_open(demo.selected_house,not bool(demo.life.bakery_status(demo.selected_house).open)),"terrace"))
 button(demo,data,"workshop_button","WorkshopOpen","暂停制作",func()->void:demo._after_edit(demo.state.set_workshop_open(demo.selected_house,not bool(demo.life.workshop_status(demo.selected_house).open)),"terrace"))
 demo.place_panel.hide()
