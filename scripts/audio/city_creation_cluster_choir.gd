extends RefCounted
## Derived membership only: no districts, IDs or player history are rewritten.
const REACH:=5.4
static func derive(houses:Array)->Dictionary:
	var rows:Dictionary={};var bins:Dictionary={}
	for house:Dictionary in houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1])
		rows[id]=at
		var key:=Vector2i(floori(at.x/REACH),floori(at.y/REACH))
		if not bins.has(key):bins[key]=[]
		bins[key].append(id)
	var seen:Dictionary={};var result:Dictionary={};var ids:Array=rows.keys();ids.sort()
	for first:String in ids:
		if seen.has(first):continue
		var pending:Array[String]=[first];var members:Array[String]=[];seen[first]=true
		while not pending.is_empty():
			var id:String=pending.pop_back();members.append(id)
			var at:Vector2=rows[id];var key:=Vector2i(floori(at.x/REACH),floori(at.y/REACH))
			for z:int in range(-1,2):
				for x:int in range(-1,2):
					for other:String in bins.get(key+Vector2i(x,z),[]):
						if not seen.has(other) and at.distance_squared_to(rows[other])<=REACH*REACH:
							seen[other]=true;pending.append(other)
		members.sort()
		for id:String in members:result[id]={"id":"choir/"+members[0],"size":members.size(),"members":members}
	return result
