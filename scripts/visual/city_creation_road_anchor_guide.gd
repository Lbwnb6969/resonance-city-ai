extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo
var root:Node3D
var lines:ImmediateMesh
var dots:MultiMesh
var hint:Label
var compass:Dictionary={}
func setup(owner)->void:
	demo=owner;root=Node3D.new();root.name="RoadAnchorGuide";demo.add_child(root)
	var material:=StandardMaterial3D.new();material.albedo_color=Color("e0bd65");material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	var line_material:StandardMaterial3D=material.duplicate();line_material.albedo_color=Color.WHITE;line_material.vertex_color_use_as_albedo=true;line_material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
	var node:=MeshInstance3D.new();lines=ImmediateMesh.new();node.mesh=lines;node.material_override=line_material;root.add_child(node);node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	var sphere:=SphereMesh.new();sphere.radius=.095;sphere.height=.12;sphere.radial_segments=10;sphere.rings=4
	dots=MultiMesh.new();dots.transform_format=MultiMesh.TRANSFORM_3D;dots.mesh=sphere;dots.instance_count=3;dots.visible_instance_count=0
	var balls:=MultiMeshInstance3D.new();balls.multimesh=dots;balls.material_override=material;balls.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;root.add_child(balls)
	hint=Label.new();hint.name="RoadAnchorHint";hint.theme=UI.make_theme();hint.mouse_filter=Control.MOUSE_FILTER_IGNORE;hint.add_theme_font_size_override("font_size",13)
	var paper:=UI.badge(Color(UI.PAPER,.94));paper.content_margin_left=9;paper.content_margin_right=9;paper.content_margin_top=5;paper.content_margin_bottom=5
	hint.add_theme_stylebox_override("normal",paper);hint.add_theme_color_override("font_color",UI.INK);demo.ui_layer.add_child(hint);clear()
func clear()->void:
	root.hide();hint.hide();dots.visible_instance_count=0;lines.clear_surfaces();compass.clear()
func point(at:Vector2)->Vector3:return Vector3(at.x,demo.state.street_height(at)+.10,at.y)
func draw(anchors:Array[Vector2],tail:Vector2,text:String)->void:
	root.visible=demo.ui_layer.visible;hint.visible=root.visible;hint.text=(str(compass.get("label",""))+"\n" if not str(compass.get("label","")).is_empty() else "")+text
	var screen:Vector2=demo.camera.unproject_position(point(tail))+Vector2(16,-35)
	hint.position=Vector2(clampf(screen.x,8.,demo.get_viewport().size.x-hint.get_minimum_size().x-8.),clampf(screen.y,90.,demo.get_viewport().size.y-150.))
	if dots.instance_count<anchors.size()+1:dots.instance_count=anchors.size()+1
	dots.visible_instance_count=anchors.size()+1
	for i in range(anchors.size()):dots.set_instance_transform(i,Transform3D(Basis.IDENTITY,point(anchors[i])))
	dots.set_instance_transform(anchors.size(),Transform3D(Basis.IDENTITY.scaled(Vector3.ONE*.75),point(tail)))
	lines.clear_surfaces()
	if anchors.is_empty():return
	var begun:=false
	var chain:Array[Vector2]=anchors.duplicate();chain.append(tail)
	for i in range(1,chain.size()):
		var a:=chain[i-1];var b:=chain[i];var length:=a.distance_to(b)
		for step in range(ceili(length/.42)):
			if not begun:lines.surface_begin(Mesh.PRIMITIVE_LINES);lines.surface_set_color(Color("e0bd65"));begun=true
			var low:=float(step)*.42;var high:=minf(length,low+.22)
			lines.surface_add_vertex(point(a.lerp(b,low/length)));lines.surface_add_vertex(point(a.lerp(b,high/length)))
	var arcs:Array=compass.get("arcs",[])
	if not arcs.is_empty():
		if not begun:lines.surface_begin(Mesh.PRIMITIVE_LINES);begun=true
		preload("res://scripts/visual/city_creation_road_angle_compass.gd").append(lines,self,arcs)
	if not compass.get("closure",{}).is_empty():
		if not begun:lines.surface_begin(Mesh.PRIMITIVE_LINES);begun=true
		preload("res://scripts/visual/city_creation_road_angle_compass.gd").closure(lines,self,compass.closure.at)
	if begun:lines.surface_end()
