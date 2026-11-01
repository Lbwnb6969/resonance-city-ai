extends RefCounted
## Explicit full v3 audition, using the existing 144-second pooled transport.
const Score=preload("res://scripts/audio/city_creation_internal_score.gd")
static func prepare(content_id:String,selection:Dictionary={})->Dictionary:
	var sections:Array=[];var events:Array=[];var first:Dictionary={}
	for index in range(6):
		var data:=Score.select(index,selection,content_id)
		if not data.ok:return data
		if index==0:first=data
		if data.master_signature!=first.master_signature or data.dsp_signature!=first.dsp_signature:return Score.fail("母曲来源已改变，请重新准备")
		sections.append({"signature":data.signature,"harmony":data.harmony,"orchestration":data.orchestration,"declared_silence":data.declared_silence})
		for original:Dictionary in data.events:
			var note:=original.duplicate(true);note.start+=index*24.;note.section=index;events.append(note)
	var result:=first.duplicate(true)
	result.merge({"duration":144.,"sections":sections,"events":events,"signature":JSON.stringify(["internal_performance1",first.master_signature,first.dsp_signature,sections],"",true,true).sha256_text()},true)
	result.document.bars=48
	return result
