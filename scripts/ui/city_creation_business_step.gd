extends RefCounted
## One actionable reason from the published simulation, never a new economy.
const Civic=preload("res://scripts/world/city_creation_civic_supply.gd")
const Ledger=preload("res://scripts/ui/city_creation_ledger.gd")
const NAMES={"bakery":"面包坊","workshop":"制琴坊","atelier":"书院","clockmaker":"钟表铺","garden_cafe":"茶座"}
static func row(text:String,action:String="",tool:int=-1,target:String="",command:String="")->Dictionary:
 return {"text":text,"action":action,"tool":tool,"target":target,"command":command}
static func describe(demo,id:String)->Dictionary:
 var city:RefCounted=demo.state;var life:Node3D=demo.life;var at:int=city._house_index(id)
 if at<0:return row("")
 var h:Dictionary=city.houses[at];var role:=str(h.role)
 if role not in NAMES:return row("")
 if not life.house_connected(id):return row("门前尚未接路，先接通店家与居所。","到门前接路",2,id)
 var status:Dictionary=life.cafe_status(id) if role=="garden_cafe" else life.bakery_status(id) if role=="bakery" else life.workshop_status(id)
 if role!="garden_cafe" and not status.open:return row("制作已暂停；库存仍然保留。","恢复开工",-1,id,"open")
 if role=="garden_cafe":
  if status.phase in ["closed","no_space"]:return row("桌椅缺少空地，整理门侧的花下空位。","定位茶座",0,id)
  if status.phase in ["waiting","waitsecond"]:
   var qualified:=0
   for r:Dictionary in life.residents:
    if city.has_cafe_credit(str(r.home_id)) and life.house_connected(str(r.home_id)) and not life._route(str(life.connected_houses[r.home_id]),str(life.connected_houses[id])).is_empty():qualified+=1
   if qualified<2:
    var bakery:=""
    for shop:Dictionary in city.houses:
     if shop.role=="bakery":bakery=str(shop.id);break
    if bakery.is_empty():return row("茶客需先买面包；选一栋房安排为面包坊，再接通小路。","安排面包坊",4,id,"bakery_role")
    return row("还差%d位买过面包且能步行到达的茶客。"%maxi(0,2-qualified),"查看面包坊",0,bakery)
  return row(Ledger.cafe_activity(status),"看看茶客",-1,id)
 var phase:=str(status.worker_phase)
 if phase=="unassigned":
  var occupied:Dictionary={}
  for w:Dictionary in life.bakery.workers+life.workshop.workers:occupied[str(w.home_id)]=true
  for home:Dictionary in city.houses:
   if home.role=="residential" and not occupied.has(str(home.id)):
    return row("尚无能沿路到达的空闲住户，先连通这处居所。","连通居所",2,str(home.id))
  return row("现有住户已分配工作，添一处居所并接路。","添居所",0,id)
 if phase=="paused":return row("通勤或配送路线中断，接回小路后继续。","定位断路",2,str(status.get("target_id",id)) if not str(status.get("target_id","")).is_empty() else id)
 if not Civic.ready(city,h):
  if role in ["bakery","workshop","garden_cafe"]:return row("日常照常进行；门侧添山水或树木可点亮首秀。","到门侧种树",5,id)
  if role=="clockmaker":return row("日常照常进行；加一层房间可点亮钟表首秀。","定位加建",0,id,"extend")
 return row(Ledger.business_activity(role,status),"看看街坊",-1,str(status.get("worker_home_id",id)) if phase=="resting" else id)
static func act(demo,id:String)->void:
 var step:=describe(demo,id)
 if step.action.is_empty():return
 if demo.ledger.visible():demo.ledger.close_panel()
 if step.command=="open":
  var h:Dictionary=demo.state.houses[demo.state._house_index(id)]
  var result:Dictionary=demo.state.set_bakery_open(id,true) if h.role=="bakery" else demo.state.set_workshop_open(id,true)
  demo._after_edit(result,"room",true,id);return
 var target:String=step.target;var index:int=demo.state._house_index(target)
 if index>=0:
  var h:Dictionary=demo.state.houses[index];demo.focus=Vector3(h.origin[0],float(h.get("base_y",0.)),h.origin[1]);demo.zoom=minf(demo.zoom,16.);demo._update_camera()
 if step.tool>=0:demo.select_tool(step.tool)
 if step.command=="bakery_role":
  var palette:Node=demo.get_meta("role_palette");palette.show_for(false);palette.choose("bakery")
 if step.command=="extend":demo.selected_house_id=id;demo.house_module_mode=true
 demo._message(step.text)
static func inspector(pop:RefCounted)->Button:
 var stack:=VBoxContainer.new();pop.ring.bottom.add_child(stack);pop.status.reparent(stack)
 var button:=Button.new();button.name="FirstBusinessStep";button.custom_minimum_size.y=28;stack.add_child(button)
 button.pressed.connect(func()->void:act(pop.demo,pop.target_house_id));return button
