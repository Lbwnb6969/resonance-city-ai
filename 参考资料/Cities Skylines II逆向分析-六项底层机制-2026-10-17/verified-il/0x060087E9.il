// Game.Prefabs.PrefabID::.ctor 0x060087E9
	.method public hidebysig specialname rtspecialname 
		instance void .ctor (
			class Game.Prefabs.PrefabBase prefab,
			[opt] valuetype [Colossal.Core]Colossal.Hash128 overrideHash
		) cil managed 
	{
		.param [2] = nullref
		// Method begins at RVA 0x4fcb6c
		// Header size: 12
		// Code size: 133 (0x85)
		.maxstack 2
		.locals init (
			[0] string
		)

		IL_0000: ldarg.0
		IL_0001: ldarg.1
		IL_0002: callvirt instance class [mscorlib]System.Type [mscorlib]System.Object::GetType()
		IL_0007: callvirt instance string [mscorlib]System.Reflection.MemberInfo::get_Name()
		IL_000c: stfld string Game.Prefabs.PrefabID::m_Type
		IL_0011: ldarg.0
		IL_0012: ldarg.1
		IL_0013: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
		IL_0018: stfld string Game.Prefabs.PrefabID::m_Name
		IL_001d: ldarg.0
		IL_001e: ldflda valuetype [Colossal.Core]Colossal.Hash128 Game.Prefabs.PrefabID::m_Hash
		IL_0023: initobj [Colossal.Core]Colossal.Hash128
		IL_0029: ldarga.s overrideHash
		IL_002b: call instance bool [Colossal.Core]Colossal.Hash128::get_isValid()
		IL_0030: brfalse.s IL_003a

		IL_0032: ldarg.0
		IL_0033: ldarg.2
		IL_0034: stfld valuetype [Colossal.Core]Colossal.Hash128 Game.Prefabs.PrefabID::m_Hash
		IL_0039: ret

		IL_003a: ldarg.1
		IL_003b: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
		IL_0040: ldnull
		IL_0041: call bool [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::op_Inequality(class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData, class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.IAssetData)
		IL_0046: brfalse.s IL_0084

		IL_0048: ldarg.1
		IL_0049: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
		IL_004e: callvirt instance valuetype [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.SourceMeta [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::GetMeta()
		IL_0053: ldfld string [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.SourceMeta::platformID
		IL_0058: stloc.0
		IL_0059: ldloc.0
		IL_005a: call bool [mscorlib]System.String::IsNullOrEmpty(string)
		IL_005f: brtrue.s IL_006e

		IL_0061: ldarg.0
		IL_0062: ldflda valuetype [Colossal.Core]Colossal.Hash128 Game.Prefabs.PrefabID::m_Hash
		IL_0067: ldloc.0
		IL_0068: call instance void [Colossal.Core]Colossal.Hash128::Calculate(string)
		IL_006d: ret

		IL_006e: ldarg.0
		IL_006f: ldarg.1
		IL_0070: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
		IL_0075: callvirt instance valuetype [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.Identifier [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::get_id()
		IL_007a: ldfld valuetype [Colossal.Core]Colossal.Hash128 [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.Identifier::guid
		IL_007f: stfld valuetype [Colossal.Core]Colossal.Hash128 Game.Prefabs.PrefabID::m_Hash

		IL_0084: ret
	} // end of method PrefabID::.ctor
