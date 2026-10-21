extends Control
var turn:=0.
func _ready()->void:
	custom_minimum_size=Vector2(52,52);mouse_filter=Control.MOUSE_FILTER_IGNORE
func _process(delta:float)->void:
	if not is_visible_in_tree():return
	turn=fposmod(turn+delta*.9,TAU);queue_redraw()
func _draw()->void:
	var at:=Vector2(26,26)
	draw_circle(at,24,Color("324a47"),true)
	for radius:float in [12.,16.,20.]:draw_arc(at,radius,0.,TAU,48,Color("6c8173"),.8,true)
	draw_circle(at,7,Color("cfb371"),true);draw_circle(at,2,Color("eee4c8"),true)
	draw_line(at+Vector2.from_angle(turn)*9.,at+Vector2.from_angle(turn)*21.,Color("d9cb9b"),1.,true)
	draw_polyline(PackedVector2Array([Vector2(48,4),Vector2(42,10),Vector2(37,32)]),Color("e5c880"),2.,true)
