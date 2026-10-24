extends "res://tools/check_creation_music_experience_live.gd"
## Actual audio, state, geometry and PNG evidence. Ratings belong to independent critics.
func _initialize()->void:
	OUT="res://验证记录/M41/live";super._initialize()
func finish(personal:PackedByteArray,ids:Array)->void:
	if not ("--bell-only" in OS.get_cmdline_user_args() or "--mill-only" in OS.get_cmdline_user_args() or "--cafe-only" in OS.get_cmdline_user_args()):
		facts.continuity=await preload("res://tools/fixtures/city_creation_critic_continuity.gd").capture(self)
		facts.visuals=await preload("res://tools/fixtures/city_creation_critic_visuals.gd").capture(self,"--full-angles" in OS.get_cmdline_user_args())
		var close_dir:String=OUT+"/microcosm";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(close_dir))
		facts.citizens=await preload("res://tools/fixtures/city_creation_citizen_visual_live.gd").capture(demo,close_dir);check(facts.citizens.ok,"actual close living citizens")
		var manifest:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"ratings":"Independent critics only; unsampled dimensions remain unassessed","performance_policy":"experience_no_fixed_threshold"}
		FileAccess.open(OUT+"/critic_manifest.json",FileAccess.WRITE).store_string(JSON.stringify(manifest,"\t",true,true))
	await super.finish(personal,ids)
