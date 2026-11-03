extends RefCounted
const IDS := ["olive","cypress","shrub","golden_tree","pink_flower","white_flower","yellow_flower","weeping_willow"]
const NAMES := ["橄榄树","地中海柏","低矮灌木","金叶落叶树","粉色花丛","白色花丛","金黄花丛","亲水垂柳"]
static func flower(kind:String)->bool:return kind.ends_with("_flower")
static func clearance(kind:String,scale_value:float)->float:
	return scale_value*(.18 if flower(kind) else .42 if kind=="shrub" else .95 if kind=="weeping_willow" else .72)
