extends RefCounted
## Main-thread assembly state. Geometry and picking publish only after DONE.
enum Stage { ROUND_BODY, ROUND_FINISH, CELL_BASE, CELL_WALL, CELL_ROOF, CELL_ORGANIC, ERA_ROOF, DOMES, CONSERVATORY, SIGNATURE, SMOKE, BEND, DONE }
const LABELS := ["round_body","round_finish","cell_base","cell_wall","cell_roof","cell_organic","era_roof","domes","conservatory","signature","smoke","bend","done"]
const DIRECTIONS := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
class Cell extends RefCounted:
	var cell:Dictionary
	var p:Vector3
	var level:int
	var y:float
	var x:int
	var z:int
	var terrace:bool
	var retreats:Dictionary
	var core:Rect2
	var cuts:Array
	var node:Node3D
	var organic:Dictionary={}
	var body:StaticBody3D
var house:Dictionary
var root:Node3D
var hinge:Dictionary={}
var balcony:Variant=null
var hidden:=false
var stage:int=Stage.CELL_BASE
var cell_index:=0
var wall_index:=0
var current:Cell
var palette:Array
var era:String
var style:String
var domes:Array
var dome_cells:Dictionary
var canopy:Dictionary
var flower_plan:Dictionary
var arcade_faces:Array
var arcades:Array=[]
var walls:Material
var trim:Material
var cells:Array
var passages:Array
var tower_ids:Dictionary
var tower_info:Array=[]
var doors:Dictionary
var primary:Dictionary
var clockwork_roofs:Array=[]
var clockwork_index:=0
var clockwork_records:Array=[]
var modern_parts:Dictionary={}
var modern_index:=0
var modern_records:Array=[]
var palace:Dictionary={}
var role_prop_added:=false
var joined:bool
var stats:Dictionary={"units":0,"cpu_ms":0.,"peak_ms":0.,"part_peaks":{}}
