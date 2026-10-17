// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::Update 0x06000BFC
		.method private hidebysig 
			instance void Update (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype Game.Tools.Temp temp
			) cil managed 
		{
			// Method begins at RVA 0x4e398
			// Header size: 12
			// Code size: 489 (0x1e9)
			.maxstack 5
			.locals init (
				[0] valuetype Game.Net.Upgraded,
				[1] valuetype Game.Tools.Recent,
				[2] valuetype Game.Tools.Recent,
				[3] valuetype Game.Tools.Recent,
				[4] valuetype Game.Net.Upgraded,
				[5] valuetype Game.Common.Deleted
			)

			IL_0000: ldarg.0
			IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_HiddenData
			IL_0006: ldarg.3
			IL_0007: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_000c: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0011: brfalse.s IL_0025

			IL_0013: ldarg.0
			IL_0014: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0019: ldarg.1
			IL_001a: ldarg.3
			IL_001b: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0020: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Hidden>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)

			IL_0025: ldarg.3
			IL_0026: ldfld int32 Game.Tools.Temp::m_Cost
			IL_002b: brfalse IL_012a

			IL_0030: ldloca.s 3
			IL_0032: initobj Game.Tools.Recent
			IL_0038: ldloca.s 3
			IL_003a: ldarg.0
			IL_003b: ldfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
			IL_0040: stfld uint32 Game.Tools.Recent::m_ModificationFrame
			IL_0045: ldloca.s 3
			IL_0047: ldarg.3
			IL_0048: ldfld int32 Game.Tools.Temp::m_Cost
			IL_004d: stfld int32 Game.Tools.Recent::m_ModificationCost
			IL_0052: ldloc.3
			IL_0053: stloc.1
			IL_0054: ldarg.0
			IL_0055: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Recent> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_RecentData
			IL_005a: ldarg.3
			IL_005b: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0060: ldloca.s 2
			IL_0062: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Recent>::TryGetComponent(valuetype [Unity.Entities]Unity.Entities.Entity, !0&)
			IL_0067: brfalse IL_010e

			IL_006c: ldloca.s 1
			IL_006e: ldflda int32 Game.Tools.Recent::m_ModificationCost
			IL_0073: dup
			IL_0074: ldind.i4
			IL_0075: ldloc.2
			IL_0076: ldfld int32 Game.Tools.Recent::m_ModificationCost
			IL_007b: add
			IL_007c: stind.i4
			IL_007d: ldloca.s 1
			IL_007f: ldflda int32 Game.Tools.Recent::m_ModificationCost
			IL_0084: dup
			IL_0085: ldind.i4
			IL_0086: ldloc.2
			IL_0087: ldarg.0
			IL_0088: ldfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
			IL_008d: ldarg.0
			IL_008e: ldfld valuetype Game.Prefabs.EconomyParameterData Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_EconomyParameterData
			IL_0093: call int32 Game.Net.NetUtils::GetRefundAmount(valuetype Game.Tools.Recent, uint32, valuetype Game.Prefabs.EconomyParameterData)
			IL_0098: add
			IL_0099: stind.i4
			IL_009a: ldloca.s 2
			IL_009c: ldarg.0
			IL_009d: ldfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
			IL_00a2: stfld uint32 Game.Tools.Recent::m_ModificationFrame
			IL_00a7: ldloca.s 1
			IL_00a9: ldflda int32 Game.Tools.Recent::m_ModificationCost
			IL_00ae: dup
			IL_00af: ldind.i4
			IL_00b0: ldloc.2
			IL_00b1: ldarg.0
			IL_00b2: ldfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
			IL_00b7: ldarg.0
			IL_00b8: ldfld valuetype Game.Prefabs.EconomyParameterData Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_EconomyParameterData
			IL_00bd: call int32 Game.Net.NetUtils::GetRefundAmount(valuetype Game.Tools.Recent, uint32, valuetype Game.Prefabs.EconomyParameterData)
			IL_00c2: sub
			IL_00c3: stind.i4
			IL_00c4: ldloca.s 1
			IL_00c6: ldloc.1
			IL_00c7: ldfld int32 Game.Tools.Recent::m_ModificationCost
			IL_00cc: ldarg.3
			IL_00cd: ldfld int32 Game.Tools.Temp::m_Value
			IL_00d2: call int32 [Unity.Mathematics]Unity.Mathematics.math::min(int32, int32)
			IL_00d7: stfld int32 Game.Tools.Recent::m_ModificationCost
			IL_00dc: ldloc.1
			IL_00dd: ldfld int32 Game.Tools.Recent::m_ModificationCost
			IL_00e2: ldc.i4.0
			IL_00e3: ble.s IL_00fa

			IL_00e5: ldarg.0
			IL_00e6: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_00eb: ldarg.1
			IL_00ec: ldarg.3
			IL_00ed: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_00f2: ldloc.1
			IL_00f3: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::SetComponent<valuetype Game.Tools.Recent>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_00f8: br.s IL_012a

			IL_00fa: ldarg.0
			IL_00fb: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0100: ldarg.1
			IL_0101: ldarg.3
			IL_0102: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0107: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Recent>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_010c: br.s IL_012a

			IL_010e: ldloc.1
			IL_010f: ldfld int32 Game.Tools.Recent::m_ModificationCost
			IL_0114: ldc.i4.0
			IL_0115: ble.s IL_012a

			IL_0117: ldarg.0
			IL_0118: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_011d: ldarg.1
			IL_011e: ldarg.3
			IL_011f: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0124: ldloc.1
			IL_0125: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Tools.Recent>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)

			IL_012a: ldarg.0
			IL_012b: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_UpgradedData
			IL_0130: ldarg.2
			IL_0131: ldloca.s 0
			IL_0133: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded>::TryGetComponent(valuetype [Unity.Entities]Unity.Entities.Entity, !0&)
			IL_0138: brfalse.s IL_014d

			IL_013a: ldloc.0
			IL_013b: ldfld valuetype Game.Prefabs.CompositionFlags Game.Net.Upgraded::m_Flags
			IL_0140: ldfld valuetype Game.Prefabs.CompositionFlags/Side Game.Prefabs.CompositionFlags::m_Left
			IL_0145: ldc.i4 536870912
			IL_014a: and
			IL_014b: brtrue.s IL_0160

			IL_014d: ldloc.0
			IL_014e: ldfld valuetype Game.Prefabs.CompositionFlags Game.Net.Upgraded::m_Flags
			IL_0153: ldfld valuetype Game.Prefabs.CompositionFlags/Side Game.Prefabs.CompositionFlags::m_Right
			IL_0158: ldc.i4 536870912
			IL_015d: and
			IL_015e: brfalse.s IL_01b9

			IL_0160: ldarg.0
			IL_0161: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_UpgradedData
			IL_0166: ldarg.3
			IL_0167: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_016c: ldloca.s 4
			IL_016e: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded>::TryGetComponent(valuetype [Unity.Entities]Unity.Entities.Entity, !0&)
			IL_0173: brfalse.s IL_019d

			IL_0175: ldloc.s 4
			IL_0177: ldfld valuetype Game.Prefabs.CompositionFlags Game.Net.Upgraded::m_Flags
			IL_017c: ldfld valuetype Game.Prefabs.CompositionFlags/Side Game.Prefabs.CompositionFlags::m_Left
			IL_0181: ldc.i4 536870912
			IL_0186: and
			IL_0187: brfalse.s IL_019d

			IL_0189: ldloc.s 4
			IL_018b: ldfld valuetype Game.Prefabs.CompositionFlags Game.Net.Upgraded::m_Flags
			IL_0190: ldfld valuetype Game.Prefabs.CompositionFlags/Side Game.Prefabs.CompositionFlags::m_Right
			IL_0195: ldc.i4 536870912
			IL_019a: and
			IL_019b: brtrue.s IL_01b9

			IL_019d: ldarg.0
			IL_019e: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype Game.Triggers.TriggerAction> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TriggerBuffer
			IL_01a3: ldc.i4.s 91
			IL_01a5: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
			IL_01aa: ldc.r4 0.0
			IL_01af: newobj instance void Game.Triggers.TriggerAction::.ctor(valuetype Game.Triggers.TriggerType, valuetype [Unity.Entities]Unity.Entities.Entity, float32)
			IL_01b4: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype Game.Triggers.TriggerAction>::Enqueue(!0)

			IL_01b9: ldarg.0
			IL_01ba: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_01bf: ldarg.1
			IL_01c0: ldarg.3
			IL_01c1: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_01c6: ldarg.0
			IL_01c7: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ApplyUpdatedTypes
			IL_01cc: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent(int32, valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet&)
			IL_01d1: ldarg.0
			IL_01d2: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_01d7: ldarg.1
			IL_01d8: ldarg.2
			IL_01d9: ldloca.s 5
			IL_01db: initobj Game.Common.Deleted
			IL_01e1: ldloc.s 5
			IL_01e3: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_01e8: ret
		} // end of method HandleTempEntitiesJob::Update
