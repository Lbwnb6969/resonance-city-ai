extends RefCounted
## Keep one house's four stages together during modal loading. Each stage
## resumes independently; published interactive edits use the original tasks.
static func advance(town:Node3D,house:Dictionary)->bool:
	var progress:Dictionary=town.get_meta("hidden_house_progress",{})
	var id:=str(house.id)
	var stage:int=int(progress.get(id,0))
	var began:=Time.get_ticks_usec()
	while float(Time.get_ticks_usec()-began)/1000.<12.:
		var done:=false
		match stage:
			0:done=town._house_budgeted(house,3.)
			1:done=town._merge_meshes(town.house_roots[id],false,3.)
			2:done=town._prepare_house_colors(town.house_roots[id],3.)
			3:
				town.resonance.build(town,house,town.house_roots[id]);done=true
		if not done:break
		stage+=1
		if stage==4:
			progress.erase(id);town.set_meta("hidden_house_progress",progress)
			return true
	progress[id]=stage;town.set_meta("hidden_house_progress",progress)
	return false
