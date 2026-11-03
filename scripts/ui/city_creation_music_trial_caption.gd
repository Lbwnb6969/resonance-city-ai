extends RefCounted
const Safe=preload("res://scripts/ui/city_creation_life_capsules.gd")
static func lines(music:Node)->PackedStringArray:
	var node:Node=music.get_node_or_null("GameMusicPlayer")
	if node==null:
		return PackedStringArray(["自然底景 · 音乐留白","当前尚无已采用的背景曲目。可继续自由营造。 "]) if preload("res://scripts/audio/city_creation_free_music_route.gd").holds(music) else PackedStringArray()
	if node.sequence.breathing:return PackedStringArray(["隔离候选 · 技术通过 · 待听评","曲尾呼吸留白 · 自然声" if node.sequence.failed.is_empty() else "后续候选未准备好 · 保留自然声"])
	if not node.active:return PackedStringArray(["隔离候选 · 准备中，尚未接管播放"])
	var result:=PackedStringArray(["[b]隔离候选 · 技术通过 · 待听评[/b]",Safe.safe(str(node.prepared.manifest.get("name","当前候选"))),"当前为完整作品候选；稀疏背景方案尚待制作。"])
	if node.get_meta("background_intent_trial",false):result[2]="背景候选 · 旋律存在感与留白待听评。"
	if music.muted:result.append("已静音 · 保持当前播放与空间观察")
	if node.paused:result.append("已暂停 · 空间观察与播放同步冻结")
	for id:String in node.prepared.ids:
		var title:String={"core":"主曲","body":"温暖","motion":"流动","detail":"点缀"}[id]
		if id=="core":result.append(title+" · "+("已暂停" if node.paused else "已静音" if music.muted else "正在发声"));continue
		var packet:Dictionary=node.envelope_state if id=="body" else node.color_states.get("flow" if id=="motion" else "craft",{})
		if id=="motion" and float(packet.get("value",0.))==0. and (node.contour_state.get("candidate",false) or float(node.contour_state.get("value",0.))>0.):packet=node.contour_state
		var state:="手动对照" if node.manual_expression and id!="body" else "余韵" if packet.get("historical_tail",false) else "正在发声" if float(packet.get("value",0.))>0. else "观察中" if packet.get("candidate",false) else "开放基线"
		result.append(title+" · "+("已暂停" if node.paused else "已静音" if music.muted else state))
	if node.prepared.fallback:result.append("颜色层未采用 · 播放已校验完整原混音")
	return result
