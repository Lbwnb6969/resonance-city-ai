extends RefCounted
## The optional woodland letter is a folded invitation until deliberately opened.
static func setup(owner:Node)->void:
 var column:Control=owner.paper.get_child(0);var seal:=Button.new();seal.name="FoldWoodlandLetter"
 seal.text="一封林间来信  ·  展开";seal.add_theme_font_size_override("font_size",12)
 column.add_child(seal);column.move_child(seal,0);owner.paper.set_meta("letter_folded",true)
 seal.pressed.connect(func()->void:
  owner.paper.set_meta("letter_folded",not owner.paper.get_meta("letter_folded"));apply(owner))
 apply(owner)
static func apply(owner:Node)->void:
 var folded:bool=owner.paper.get_meta("letter_folded",true);var column:Control=owner.paper.get_child(0)
 for child:Control in column.get_children():child.visible=child.name=="FoldWoodlandLetter" or not folded
 column.get_node("FoldWoodlandLetter").text="一封林间来信  ·  展开" if folded else "收好这封来信"
 owner.paper.custom_minimum_size=Vector2.ZERO
 owner.paper.add_theme_stylebox_override("panel",preload("res://scripts/ui/valley_ui_theme.gd").panel(6. if folded else 12.))
 owner.fit()
