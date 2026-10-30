extends RefCounted
## Content identities are separate from style, tier and player preferences.
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const CONTENTS:={
	"baseline":{"path":Master.PATH,"document_id":"pastoral_master2_complete","name":"原田园基础谱"},
	"pastoral_ab1":{"path":"res://数据/母曲/田园晨风_arrangement_ab1.json","document_id":"pastoral_arrangement_ab1","name":"田园续接编配候选一"},
	"pastoral_background_ab2":{"path":"res://数据/母曲/田园晨风_arrangement_ab1.json","document_id":"pastoral_background_ab2","name":"田园背景柔音候选二","render_profile":"background_flute_v1"}
}
static func read(id:String)->Dictionary:
	return Master.read(str(CONTENTS[id].path)) if CONTENTS.has(id) else {}
static func section(id:String,index:int,mode:int)->Dictionary:
	if not CONTENTS.has(id):return {"ok":false,"message":"母曲内容版本不存在"}
	return Master.section(index,mode,str(CONTENTS[id].path))
