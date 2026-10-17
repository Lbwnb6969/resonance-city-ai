// Game.Tools.ApplyNetSystem::OnUpdate 0x06000BEE
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x4cb48
		// Header size: 12
		// Code size: 1606 (0x646)
		.maxstack 4
		.locals init (
			[0] valuetype Game.Tools.ApplyNetSystem/PatchTempReferencesJob,
			[1] valuetype Game.Tools.ApplyNetSystem/FixConnectedEdgesJob,
			[2] valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Triggers.TriggerAction>,
			[3] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[4] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[5] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[6] valuetype Game.Tools.ApplyNetSystem/PatchTempReferencesJob,
			[7] valuetype Game.Tools.ApplyNetSystem/FixConnectedEdgesJob,
			[8] valuetype Game.Tools.ApplyNetSystem/HandleTempEntitiesJob,
			[9] valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer
		)

		IL_0000: ldloca.s 6
		IL_0002: initobj Game.Tools.ApplyNetSystem/PatchTempReferencesJob
		IL_0008: ldloca.s 6
		IL_000a: ldarg.0
		IL_000b: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0010: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ApplyNetSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_0015: ldarg.0
		IL_0016: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_001b: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0020: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_EntityType
		IL_0025: ldloca.s 6
		IL_0027: ldarg.0
		IL_0028: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_002d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Temp_RO_ComponentTypeHandle
		IL_0032: ldarg.0
		IL_0033: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0038: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_003d: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempType
		IL_0042: ldloca.s 6
		IL_0044: ldarg.0
		IL_0045: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_004a: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Node_RO_ComponentTypeHandle
		IL_004f: ldarg.0
		IL_0050: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0055: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Node>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_005a: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_NodeType
		IL_005f: ldloca.s 6
		IL_0061: ldarg.0
		IL_0062: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0067: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Edge_RW_ComponentTypeHandle
		IL_006c: ldarg.0
		IL_006d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0072: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0077: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_EdgeType
		IL_007c: ldloca.s 6
		IL_007e: ldarg.0
		IL_007f: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0084: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Temp_RO_ComponentLookup
		IL_0089: ldarg.0
		IL_008a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_008f: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0094: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
		IL_0099: ldloca.s 6
		IL_009b: ldarg.0
		IL_009c: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_00a1: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Common_Owner_RW_ComponentLookup
		IL_00a6: ldarg.0
		IL_00a7: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00ac: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Common.Owner>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00b1: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
		IL_00b6: ldloca.s 6
		IL_00b8: ldarg.0
		IL_00b9: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_00be: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_SubNet_RW_BufferLookup
		IL_00c3: ldarg.0
		IL_00c4: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00c9: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.SubNet>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00ce: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
		IL_00d3: ldloca.s 6
		IL_00d5: ldarg.0
		IL_00d6: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_00db: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_ConnectedEdge_RW_BufferLookup
		IL_00e0: ldarg.0
		IL_00e1: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00e6: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00eb: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
		IL_00f0: ldloca.s 6
		IL_00f2: ldarg.0
		IL_00f3: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_00f8: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_ConnectedNode_RW_BufferLookup
		IL_00fd: ldarg.0
		IL_00fe: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0103: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.ConnectedNode>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0108: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Nodes
		IL_010d: ldloc.s 6
		IL_010f: stloc.0
		IL_0110: ldloca.s 7
		IL_0112: initobj Game.Tools.ApplyNetSystem/FixConnectedEdgesJob
		IL_0118: ldloca.s 7
		IL_011a: ldarg.0
		IL_011b: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0120: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Temp_RO_ComponentTypeHandle
		IL_0125: ldarg.0
		IL_0126: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_012b: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0130: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/FixConnectedEdgesJob::m_TempType
		IL_0135: ldloca.s 7
		IL_0137: ldarg.0
		IL_0138: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_013d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Node_RO_ComponentTypeHandle
		IL_0142: ldarg.0
		IL_0143: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0148: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Node>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_014d: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/FixConnectedEdgesJob::m_NodeType
		IL_0152: ldloca.s 7
		IL_0154: ldarg.0
		IL_0155: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_015a: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Edge_RO_ComponentLookup
		IL_015f: ldarg.0
		IL_0160: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0165: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_016a: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/FixConnectedEdgesJob::m_EdgeData
		IL_016f: ldloca.s 7
		IL_0171: ldarg.0
		IL_0172: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0177: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_ConnectedNode_RO_BufferLookup
		IL_017c: ldarg.0
		IL_017d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0182: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.ConnectedNode>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0187: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/FixConnectedEdgesJob::m_Nodes
		IL_018c: ldloca.s 7
		IL_018e: ldarg.0
		IL_018f: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0194: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_ConnectedEdge_RW_BufferLookup
		IL_0199: ldarg.0
		IL_019a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_019f: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_01a4: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/FixConnectedEdgesJob::m_Edges
		IL_01a9: ldloc.s 7
		IL_01ab: stloc.1
		IL_01ac: ldarg.0
		IL_01ad: ldfld class Game.Triggers.TriggerSystem Game.Tools.ApplyNetSystem::m_TriggerSystem
		IL_01b2: callvirt instance bool [Unity.Entities]Unity.Entities.ComponentSystemBase::get_Enabled()
		IL_01b7: brtrue.s IL_01c6

		IL_01b9: ldc.i4.3
		IL_01ba: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_01bf: newobj instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Triggers.TriggerAction>::.ctor(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_01c4: br.s IL_01d1

		IL_01c6: ldarg.0
		IL_01c7: ldfld class Game.Triggers.TriggerSystem Game.Tools.ApplyNetSystem::m_TriggerSystem
		IL_01cc: callvirt instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Triggers.TriggerAction> Game.Triggers.TriggerSystem::CreateActionBuffer()

		IL_01d1: stloc.2
		IL_01d2: ldloca.s 8
		IL_01d4: initobj Game.Tools.ApplyNetSystem/HandleTempEntitiesJob
		IL_01da: ldloca.s 8
		IL_01dc: ldarg.0
		IL_01dd: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_01e2: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ApplyNetSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_01e7: ldarg.0
		IL_01e8: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_01ed: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_01f2: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_EntityType
		IL_01f7: ldloca.s 8
		IL_01f9: ldarg.0
		IL_01fa: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_01ff: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Temp_RO_ComponentTypeHandle
		IL_0204: ldarg.0
		IL_0205: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_020a: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_020f: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TempType
		IL_0214: ldloca.s 8
		IL_0216: ldarg.0
		IL_0217: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_021c: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Node_RO_ComponentTypeHandle
		IL_0221: ldarg.0
		IL_0222: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0227: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Node>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_022c: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_NetNodeType
		IL_0231: ldloca.s 8
		IL_0233: ldarg.0
		IL_0234: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0239: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Edge_RO_ComponentTypeHandle
		IL_023e: ldarg.0
		IL_023f: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0244: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0249: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_NetEdgeType
		IL_024e: ldloca.s 8
		IL_0250: ldarg.0
		IL_0251: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0256: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Lane> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Lane_RO_ComponentTypeHandle
		IL_025b: ldarg.0
		IL_025c: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0261: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Lane>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0266: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Lane> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_NetLaneType
		IL_026b: ldloca.s 8
		IL_026d: ldarg.0
		IL_026e: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0273: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Edge_RO_ComponentLookup
		IL_0278: ldarg.0
		IL_0279: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_027e: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0283: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_NetEdgeData
		IL_0288: ldloca.s 8
		IL_028a: ldarg.0
		IL_028b: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0290: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.LandValue> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_LandValue_RO_ComponentLookup
		IL_0295: ldarg.0
		IL_0296: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_029b: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.LandValue>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02a0: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.LandValue> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_LandValueData
		IL_02a5: ldloca.s 8
		IL_02a7: ldarg.0
		IL_02a8: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_02ad: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Hidden_RO_ComponentLookup
		IL_02b2: ldarg.0
		IL_02b3: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02b8: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.Hidden>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02bd: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_HiddenData
		IL_02c2: ldloca.s 8
		IL_02c4: ldarg.0
		IL_02c5: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_02ca: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Common_Owner_RO_ComponentLookup
		IL_02cf: ldarg.0
		IL_02d0: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02d5: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Common.Owner>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02da: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_OwnerData
		IL_02df: ldloca.s 8
		IL_02e1: ldarg.0
		IL_02e2: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_02e7: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Native> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Common_Native_RO_ComponentLookup
		IL_02ec: ldarg.0
		IL_02ed: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02f2: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Common.Native>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02f7: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Native> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_NativeData
		IL_02fc: ldloca.s 8
		IL_02fe: ldarg.0
		IL_02ff: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0304: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Elevation> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Elevation_RO_ComponentLookup
		IL_0309: ldarg.0
		IL_030a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_030f: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Elevation>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0314: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Elevation> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ElevationData
		IL_0319: ldloca.s 8
		IL_031b: ldarg.0
		IL_031c: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0321: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Upgraded_RO_ComponentLookup
		IL_0326: ldarg.0
		IL_0327: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_032c: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Upgraded>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0331: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Upgraded> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_UpgradedData
		IL_0336: ldloca.s 8
		IL_0338: ldarg.0
		IL_0339: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_033e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.LocalConnect> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_LocalConnect_RO_ComponentLookup
		IL_0343: ldarg.0
		IL_0344: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0349: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.LocalConnect>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_034e: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.LocalConnect> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_LocalConnectData
		IL_0353: ldloca.s 8
		IL_0355: ldarg.0
		IL_0356: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_035b: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TramTrack> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_TramTrack_RO_ComponentLookup
		IL_0360: ldarg.0
		IL_0361: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0366: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.TramTrack>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_036b: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TramTrack> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TramTrackData
		IL_0370: ldloca.s 8
		IL_0372: ldarg.0
		IL_0373: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0378: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TrainTrack> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_TrainTrack_RO_ComponentLookup
		IL_037d: ldarg.0
		IL_037e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0383: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.TrainTrack>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0388: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TrainTrack> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TrainTrackData
		IL_038d: ldloca.s 8
		IL_038f: ldarg.0
		IL_0390: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0395: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Waterway> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Waterway_RO_ComponentLookup
		IL_039a: ldarg.0
		IL_039b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_03a0: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Waterway>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03a5: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Waterway> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_WaterwayData
		IL_03aa: ldloca.s 8
		IL_03ac: ldarg.0
		IL_03ad: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_03b2: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Road_RO_ComponentLookup
		IL_03b7: ldarg.0
		IL_03b8: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_03bd: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Road>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03c2: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_RoadData
		IL_03c7: ldloca.s 8
		IL_03c9: ldarg.0
		IL_03ca: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_03cf: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Curve> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Curve_RO_ComponentLookup
		IL_03d4: ldarg.0
		IL_03d5: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_03da: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Curve>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03df: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Curve> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CurveData
		IL_03e4: ldloca.s 8
		IL_03e6: ldarg.0
		IL_03e7: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_03ec: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Pollution> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Pollution_RO_ComponentLookup
		IL_03f1: ldarg.0
		IL_03f2: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_03f7: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Pollution>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03fc: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Pollution> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_PollutionData
		IL_0401: ldloca.s 8
		IL_0403: ldarg.0
		IL_0404: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0409: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TrafficLights> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_TrafficLights_RO_ComponentLookup
		IL_040e: ldarg.0
		IL_040f: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0414: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.TrafficLights>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0419: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.TrafficLights> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TrafficLightsData
		IL_041e: ldloca.s 8
		IL_0420: ldarg.0
		IL_0421: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0426: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Orphan> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Orphan_RO_ComponentLookup
		IL_042b: ldarg.0
		IL_042c: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0431: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Orphan>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0436: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Orphan> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_OrphanData
		IL_043b: ldloca.s 8
		IL_043d: ldarg.0
		IL_043e: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0443: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.EditorContainer> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_EditorContainer_RO_ComponentLookup
		IL_0448: ldarg.0
		IL_0449: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_044e: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.EditorContainer>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0453: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.EditorContainer> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_EditorContainerData
		IL_0458: ldloca.s 8
		IL_045a: ldarg.0
		IL_045b: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0460: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Aggregated> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Aggregated_RO_ComponentLookup
		IL_0465: ldarg.0
		IL_0466: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_046b: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Aggregated>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0470: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Aggregated> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_AggregatedData
		IL_0475: ldloca.s 8
		IL_0477: ldarg.0
		IL_0478: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_047d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Standalone> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Standalone_RO_ComponentLookup
		IL_0482: ldarg.0
		IL_0483: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0488: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Standalone>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_048d: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Standalone> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_StandaloneData
		IL_0492: ldloca.s 8
		IL_0494: ldarg.0
		IL_0495: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_049a: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Marker> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_Marker_RO_ComponentLookup
		IL_049f: ldarg.0
		IL_04a0: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_04a5: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Marker>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_04aa: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Marker> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_MarkerData
		IL_04af: ldloca.s 8
		IL_04b1: ldarg.0
		IL_04b2: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_04b7: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Temp_RO_ComponentLookup
		IL_04bc: ldarg.0
		IL_04bd: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_04c2: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_04c7: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TempData
		IL_04cc: ldloca.s 8
		IL_04ce: ldarg.0
		IL_04cf: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_04d4: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Recent> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Tools_Recent_RO_ComponentLookup
		IL_04d9: ldarg.0
		IL_04da: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_04df: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.Recent>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_04e4: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Recent> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_RecentData
		IL_04e9: ldloca.s 8
		IL_04eb: ldarg.0
		IL_04ec: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_04f1: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabRef> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Prefabs_PrefabRef_RO_ComponentLookup
		IL_04f6: ldarg.0
		IL_04f7: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_04fc: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.PrefabRef>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0501: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabRef> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_PrefabRefData
		IL_0506: ldloca.s 8
		IL_0508: ldarg.0
		IL_0509: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_050e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabData> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentLookup
		IL_0513: ldarg.0
		IL_0514: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0519: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_051e: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabData> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_PrefabData
		IL_0523: ldloca.s 8
		IL_0525: ldarg.0
		IL_0526: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_052b: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.NetCustomColorVariation> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_NetCustomColorVariation_RO_ComponentLookup
		IL_0530: ldarg.0
		IL_0531: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0536: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.NetCustomColorVariation>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_053b: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.NetCustomColorVariation> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CustomColorVariationData
		IL_0540: ldloca.s 8
		IL_0542: ldarg.0
		IL_0543: ldflda valuetype Game.Tools.ApplyNetSystem/TypeHandle Game.Tools.ApplyNetSystem::__TypeHandle
		IL_0548: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubReplacement> Game.Tools.ApplyNetSystem/TypeHandle::__Game_Net_SubReplacement_RO_BufferLookup
		IL_054d: ldarg.0
		IL_054e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0553: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.SubReplacement>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0558: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubReplacement> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SubReplacements
		IL_055d: ldloca.s 8
		IL_055f: ldarg.0
		IL_0560: ldfld class Game.Simulation.SimulationSystem Game.Tools.ApplyNetSystem::m_SimulationSystem
		IL_0565: callvirt instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_056a: stfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
		IL_056f: ldloca.s 8
		IL_0571: ldarg.0
		IL_0572: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Tools.ApplyNetSystem::m_EconomyParameterQuery
		IL_0577: call instance !!0 [Unity.Entities]Unity.Entities.EntityQuery::GetSingleton<valuetype Game.Prefabs.EconomyParameterData>()
		IL_057c: stfld valuetype Game.Prefabs.EconomyParameterData Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_EconomyParameterData
		IL_0581: ldloca.s 8
		IL_0583: ldarg.0
		IL_0584: ldfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem::m_ApplyCreatedTypes
		IL_0589: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ApplyCreatedTypes
		IL_058e: ldloca.s 8
		IL_0590: ldarg.0
		IL_0591: ldfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem::m_ApplyUpdatedTypes
		IL_0596: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ApplyUpdatedTypes
		IL_059b: ldloca.s 8
		IL_059d: ldarg.0
		IL_059e: ldfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem::m_ApplyDeletedTypes
		IL_05a3: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ApplyDeletedTypes
		IL_05a8: ldloca.s 8
		IL_05aa: ldarg.0
		IL_05ab: ldfld class Game.Tools.ToolOutputBarrier Game.Tools.ApplyNetSystem::m_ToolOutputBarrier
		IL_05b0: callvirt instance valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer Game.SafeCommandBufferSystem::CreateCommandBuffer()
		IL_05b5: stloc.s 9
		IL_05b7: ldloca.s 9
		IL_05b9: call instance valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter [Unity.Entities]Unity.Entities.EntityCommandBuffer::AsParallelWriter()
		IL_05be: stfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
		IL_05c3: ldloca.s 8
		IL_05c5: ldloca.s 2
		IL_05c7: call instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Triggers.TriggerAction>::AsParallelWriter()
		IL_05cc: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype Game.Triggers.TriggerAction> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_TriggerBuffer
		IL_05d1: ldloc.s 8
		IL_05d3: ldloc.0
		IL_05d4: ldarg.0
		IL_05d5: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Tools.ApplyNetSystem::m_TempQuery
		IL_05da: ldarg.0
		IL_05db: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_05e0: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::Schedule<valuetype Game.Tools.ApplyNetSystem/PatchTempReferencesJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_05e5: stloc.3
		IL_05e6: ldloc.1
		IL_05e7: ldarg.0
		IL_05e8: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Tools.ApplyNetSystem::m_TempQuery
		IL_05ed: ldloc.3
		IL_05ee: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Tools.ApplyNetSystem/FixConnectedEdgesJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_05f3: stloc.s 4
		IL_05f5: ldarg.0
		IL_05f6: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Tools.ApplyNetSystem::m_TempQuery
		IL_05fb: ldloc.3
		IL_05fc: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Tools.ApplyNetSystem/HandleTempEntitiesJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0601: stloc.s 5
		IL_0603: ldarg.0
		IL_0604: ldfld class Game.Triggers.TriggerSystem Game.Tools.ApplyNetSystem::m_TriggerSystem
		IL_0609: callvirt instance bool [Unity.Entities]Unity.Entities.ComponentSystemBase::get_Enabled()
		IL_060e: brfalse.s IL_061f

		IL_0610: ldarg.0
		IL_0611: ldfld class Game.Triggers.TriggerSystem Game.Tools.ApplyNetSystem::m_TriggerSystem
		IL_0616: ldloc.s 5
		IL_0618: callvirt instance void Game.Triggers.TriggerSystem::AddActionBufferWriter(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_061d: br.s IL_0629

		IL_061f: ldloca.s 2
		IL_0621: ldloc.s 5
		IL_0623: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Triggers.TriggerAction>::Dispose(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0628: pop

		IL_0629: ldarg.0
		IL_062a: ldloc.s 4
		IL_062c: ldloc.s 5
		IL_062e: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0633: call instance void [Unity.Entities]Unity.Entities.SystemBase::set_Dependency(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0638: ldarg.0
		IL_0639: ldfld class Game.Tools.ToolOutputBarrier Game.Tools.ApplyNetSystem::m_ToolOutputBarrier
		IL_063e: ldloc.s 5
		IL_0640: callvirt instance void [Unity.Entities]Unity.Entities.EntityCommandBufferSystem::AddJobHandleForProducer(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0645: ret
	} // end of method ApplyNetSystem::OnUpdate
