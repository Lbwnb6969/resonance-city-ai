extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const Tactile=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd")
const Family=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const BRIEFS:={
 "warm_hearth_ballad":"活水延至六米，首炉金音唤醒水面。",
 "sylvan_luthier_guild":"两树成琴社，良木初成即制木饰。",
 "twilight_tea_pavilion":"茶聚余韵更长，归客携金音。",
 "stone_step_carillon":"缓坡石阶成琴键，台地轻快穿行。",
 "lantern_bridge_echo":"活水延至六米，夕桥泛起金波。",
 "courtyard_canon_spring":"清泉随律跃动，围院工坊轻快开工。",
 "hearth_neighbors":"邻里茶访沿路可至四十米。",
 "garden_salons":"茶座添野花，花下更常相聚。",
 "woodland_workbench":"良木圈延至十米，远树滋养工坊。",
 "illuminated_atelier":"一次送来织锦与彩绘玻璃。",
 "brass_orchard":"受赠八音盒的屋檐传响邻舍。",
 "cloud_gallery":"现代高屋可隔九米相接空廊。",
 "arcade_market":"穿过底层连拱，重拾三十秒茶韵。",
 "polyphonic_academy":"送画不限距离，仍需路网可达。",
 "hydraulic_guild":"临水工坊每三炉多做一份赠礼。",
 "tram_promenade":"总站走廊延至轨旁八米。",
 "lasting_resonance":"水畔也算花园，茶叙演出余韵更长。",
 "craft_federation":"琴坊书院钟坊相邻，结成百工街。"
}
static func make(draft:Node,id:String)->Button:
 var journey:Dictionary=draft.demo.state.harmony_journey
 var card:Dictionary=draft.Journey.cards()[id];var tier:=1 if not draft.legacy_era.is_empty() else Rarity.tier(journey,id);var key:=Tactile.rarity_key(tier)
 var box:=PanelContainer.new();box.name="Leaf_"+id;box.size_flags_horizontal=Control.SIZE_EXPAND_FILL;box.custom_minimum_size=Vector2(210,238)
 box.add_theme_stylebox_override("panel",Tactile.card_frame_style(key));draft.leaves.add_child(box)
 var column:=VBoxContainer.new();column.add_theme_constant_override("separation",12);box.add_child(column)
 var seal:=Label.new();seal.name="FamilySeal";seal.text=Family.card_badge(id,Family.owned(draft.demo.state));seal.add_theme_color_override("font_color",UI.GOLD);column.add_child(seal)
 var rarity:=Label.new();rarity.name="Rarity";rarity.text="旧城已得传承" if not draft.legacy_era.is_empty() else str(Tactile.RARITY_PALETTE[key].title);rarity.add_theme_color_override("font_color",Tactile.RARITY_PALETTE[key].accent);rarity.add_theme_font_size_override("font_size",12);column.add_child(rarity)
 var heading:=Label.new();heading.name="LeafTitle";heading.text=str(card.name).trim_suffix("章程").right(4);heading.add_theme_font_size_override("font_size",22);column.add_child(heading)
 var detail:=Label.new();detail.name="LeafBrief";detail.text=BRIEFS[id];detail.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;detail.add_theme_font_size_override("font_size",14);detail.size_flags_vertical=Control.SIZE_EXPAND_FILL;detail.add_theme_color_override("font_color",UI.MUTED);column.add_child(detail)
 if id=="lantern_bridge_echo":detail.text+="\n二阶：栈桥小灯与柔和回答。"
 elif id=="arcade_market":detail.text+="\n二阶：爱奥尼柱廊细藤与交织回答。"
 var button:=Button.new();button.name="Choose_"+id;button.text="融入河湾" if id not in journey.traditions else "再读 · 研习%d"%(int(journey.ranks[id])+1);button.custom_minimum_size.y=34
 button.tooltip_text=str(card.name)+"\n"+str(card.text)+"\n"+Rarity.NAMES[tier]+("：共鸣收益增加25%" if tier==3 else "：共鸣收益增加12%" if tier==2 else "")+"\n重读共鸣收益每次增加2%，至多50%；选择可撤销。"
 if not draft.legacy_era.is_empty():button.text="收录旧城传承";button.tooltip_text=str(card.name)+"\n"+str(card.text)+"\n这是旧城已赚取的时代选择，不消耗共鸣手札，不额外授予稀有度收益。可撤销。"
 elif id in draft.demo.state.era_modifiers and id not in journey.traditions:button.text="研习此页";button.tooltip_text+="\n本城已有此章程，研习不会重复叠加章程效果。"
 box.tooltip_text=button.tooltip_text;detail.tooltip_text=button.tooltip_text;heading.tooltip_text=button.tooltip_text
 button.pressed.connect(draft.choose.bind(id));column.add_child(button)
 for control:Control in [box,button]:
  control.mouse_entered.connect(func()->void:box.add_theme_stylebox_override("panel",Tactile.card_frame_style(key,true)))
  control.mouse_exited.connect(func()->void:box.add_theme_stylebox_override("panel",Tactile.card_frame_style(key)))
 return button
static func footer(journey:Dictionary)->String:
 if 3 in journey.get("draft_rarities",{}).values():return "虹彩已在本卷 · 选择可撤销"
 var drought:=int(journey.receipts.get("prismatic_drought",0))
 return "下一卷必有虹彩 · 选择可撤销" if drought>=2 else "已连空%d卷 · 三卷内必有虹彩"%drought

