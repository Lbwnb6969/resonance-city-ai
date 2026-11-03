extends RefCounted
## Display order is independent of the public tool IDs and keyboard routing.
const FREE:=[0,2,6,5,8]
const CLASSIC:=[0,2,4,5,8]
const FREE_NAMES:={0:"筑屋",2:"修路",6:"水岸",5:"林木",8:"地形"}
const CLASSIC_NAMES:={0:"筑屋",2:"修路",4:"烟火",5:"林水",8:"地形"}
static func primary(city:RefCounted)->Array:return FREE if city.CreationPolicy.is_free(city) else CLASSIC
static func sync(dock:RefCounted)->void:
	var free:bool=dock.demo.state.CreationPolicy.is_free(dock.demo.state)
	var order:Array=FREE if free else CLASSIC
	var names:Dictionary=FREE_NAMES if free else CLASSIC_NAMES
	if dock._layout_free!=free:
		dock._layout_free=free;dock.active_tool=-1
		for slot:int in range(order.size()):
			var button:Button=dock.demo.tool_buttons[order[slot]]
			button.get_parent().move_child(button,slot)
	for index:int in range(dock.demo.tool_buttons.size()):
		var button:Button=dock.demo.tool_buttons[index]
		button.visible=index in order
		button.caption=str(names.get(index,dock.demo.TOOL_NAMES[index]))
		button.tooltip_text=button.caption+" · 原快捷键 "+str(index+1)
		if dock.demo.intuitive_guidance!=null:button.disabled=not dock.demo.intuitive_guidance.tool_available(index)
		button.modulate.a=.28 if button.disabled else 1.
		button.active=dock.demo.tool==index or (index==0 and dock.demo.tool in [1,3]) or (not free and index==5 and dock.demo.tool==6)
		button.queue_redraw()
static func anchor(dock:RefCounted)->int:
	var tool:int=dock.active_tool
	if tool in [1,3,4]:return 0 if dock._layout_free or tool!=4 else 4
	if tool==6 and not dock._layout_free:return 5
	return 4 if tool==7 else tool
