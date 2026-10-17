// Game.Common.PrepareCleanUpSystem::OnCreate 0x060062D3
	.method family hidebysig virtual 
		instance void OnCreate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x341954
		// Header size: 12
		// Code size: 224 (0xe0)
		.maxstack 10
		.locals init (
			[0] class [Unity.Entities]Unity.Entities.EntityQueryDesc
		)

		IL_0000: ldarg.0
		IL_0001: call instance void Game.GameSystemBase::OnCreate()
		IL_0006: ldarg.0
		IL_0007: ldarg.0
		IL_0008: call instance class [Unity.Entities]Unity.Entities.World [Unity.Entities]Unity.Entities.ComponentSystemBase::get_World()
		IL_000d: callvirt instance !!0 [Unity.Entities]Unity.Entities.World::GetOrCreateSystemManaged<class Game.Common.CleanUpSystem>()
		IL_0012: stfld class Game.Common.CleanUpSystem Game.Common.PrepareCleanUpSystem::m_CleanUpSystem
		IL_0017: ldarg.0
		IL_0018: ldarg.0
		IL_0019: ldc.i4.1
		IL_001a: newarr [Unity.Entities]Unity.Entities.EntityQueryDesc
		IL_001f: dup
		IL_0020: ldc.i4.0
		IL_0021: newobj instance void [Unity.Entities]Unity.Entities.EntityQueryDesc::.ctor()
		IL_0026: stloc.0
		IL_0027: ldloc.0
		IL_0028: ldc.i4.2
		IL_0029: newarr [Unity.Entities]Unity.Entities.ComponentType
		IL_002e: dup
		IL_002f: ldc.i4.0
		IL_0030: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Deleted>()
		IL_0035: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_003a: dup
		IL_003b: ldc.i4.1
		IL_003c: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Event>()
		IL_0041: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_0046: stfld valuetype [Unity.Entities]Unity.Entities.ComponentType[] [Unity.Entities]Unity.Entities.EntityQueryDesc::Any
		IL_004b: ldloc.0
		IL_004c: stelem.ref
		IL_004d: call instance valuetype [Unity.Entities]Unity.Entities.EntityQuery [Unity.Entities]Unity.Entities.ComponentSystemBase::GetEntityQuery(class [Unity.Entities]Unity.Entities.EntityQueryDesc[])
		IL_0052: stfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Common.PrepareCleanUpSystem::m_DeletedQuery
		IL_0057: ldarg.0
		IL_0058: ldarg.0
		IL_0059: ldc.i4.1
		IL_005a: newarr [Unity.Entities]Unity.Entities.EntityQueryDesc
		IL_005f: dup
		IL_0060: ldc.i4.0
		IL_0061: newobj instance void [Unity.Entities]Unity.Entities.EntityQueryDesc::.ctor()
		IL_0066: stloc.0
		IL_0067: ldloc.0
		IL_0068: ldc.i4.6
		IL_0069: newarr [Unity.Entities]Unity.Entities.ComponentType
		IL_006e: dup
		IL_006f: ldc.i4.0
		IL_0070: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Created>()
		IL_0075: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_007a: dup
		IL_007b: ldc.i4.1
		IL_007c: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Updated>()
		IL_0081: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_0086: dup
		IL_0087: ldc.i4.2
		IL_0088: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Applied>()
		IL_008d: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_0092: dup
		IL_0093: ldc.i4.3
		IL_0094: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.EffectsUpdated>()
		IL_0099: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_009e: dup
		IL_009f: ldc.i4.4
		IL_00a0: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.BatchesUpdated>()
		IL_00a5: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_00aa: dup
		IL_00ab: ldc.i4.5
		IL_00ac: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.PathfindUpdated>()
		IL_00b1: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_00b6: stfld valuetype [Unity.Entities]Unity.Entities.ComponentType[] [Unity.Entities]Unity.Entities.EntityQueryDesc::Any
		IL_00bb: ldloc.0
		IL_00bc: ldc.i4.1
		IL_00bd: newarr [Unity.Entities]Unity.Entities.ComponentType
		IL_00c2: dup
		IL_00c3: ldc.i4.0
		IL_00c4: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadOnly<valuetype Game.Common.Deleted>()
		IL_00c9: stelem [Unity.Entities]Unity.Entities.ComponentType
		IL_00ce: stfld valuetype [Unity.Entities]Unity.Entities.ComponentType[] [Unity.Entities]Unity.Entities.EntityQueryDesc::None
		IL_00d3: ldloc.0
		IL_00d4: stelem.ref
		IL_00d5: call instance valuetype [Unity.Entities]Unity.Entities.EntityQuery [Unity.Entities]Unity.Entities.ComponentSystemBase::GetEntityQuery(class [Unity.Entities]Unity.Entities.EntityQueryDesc[])
		IL_00da: stfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Common.PrepareCleanUpSystem::m_UpdatedQuery
		IL_00df: ret
	} // end of method PrepareCleanUpSystem::OnCreate
