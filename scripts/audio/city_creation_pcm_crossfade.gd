extends RefCounted
## Mono signed-16 PCM: copy unchanged spans, calculate only the fade window.
static func loop_part(source:PackedByteArray,first_frame:int,frames:int)->PackedByteArray:
	var result:=PackedByteArray();var begin:=posmod(first_frame,source.size()/2)*2;var remaining:=frames*2
	while remaining>0:
		var count:=mini(remaining,source.size()-begin)
		result.append_array(source.slice(begin,begin+count));remaining-=count;begin=0
	return result
static func render(old:PackedByteArray,target:PackedByteArray,intro:int,old_offset:int,target_origin:int,fade_frames:int)->PackedByteArray:
	var frames:=target.size()/2
	var result:=loop_part(old,old_offset,intro)
	result.append_array(loop_part(target,target_origin,frames))
	for local in range(mini(fade_frames,frames)):
		var weight:=smoothstep(0.,1.,float(local)/fade_frames)
		var before:=old.decode_s16(posmod(intro+local+old_offset,old.size()/2)*2)/32768.
		var after:=target.decode_s16(posmod(local+target_origin,frames)*2)/32768.
		result.encode_s16((intro+local)*2,clampi(roundi(lerpf(before,after,weight)*32768.),-32768,32767))
	return result
