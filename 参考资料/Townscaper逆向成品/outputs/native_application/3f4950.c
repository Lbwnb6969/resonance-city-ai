// RVA 0x3f4950 | Placemaker.WaveFunctionCollapse$$MaybeQueueQubeForRebuilding
// PDB: WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
// Body: [[103f4950, 103f4a15]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar1;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar2;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar3;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar4;
  undefined4 uVar5;

  if (DAT_1151c91e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    DAT_1151c91e = '\x01';
  }
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    if (param_2->___voxelCount_4 == '\0') {
      return false;
    }
    pLVar1 = param_2->___possibleModules_18;
    if (pLVar1 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
      if (pLVar1->____size_2 == 1) {
        if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          pMVar2 = param_1->___master_4->___moduleBuilder_16;
          pOVar3 = pLVar1->____items_1;
          if (pMVar2 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) {
            uVar5 = (undefined4)
                    ((ulonglong)*(undefined8 *)&pOVar3->m_Items[0].___sides_0.___v4_8 >> 0x20);
            OVar4.___orientedModule_1.___moduleIndex_0 = (short)uVar5;
            OVar4.___orientedModule_1.___flags_1 = (char)((uint)uVar5 >> 0x10);
            OVar4.___orientedModule_1._3_1_ = (char)((uint)uVar5 >> 0x18);
            OVar4.___sides_0 = pOVar3->m_Items[0].___sides_0;
            OVar4.___cost_2 = pOVar3->m_Items[0].___cost_2;
            ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                      (pMVar2,param_2,OVar4,(MethodInfo *)0x0);
            param_2->___awaitingRebuilding_14 = false;
            return false;
          }
        }
      }
      else {
        if (param_2->___awaitingRebuilding_14 != false) {
          return false;
        }
        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___qubesToRebuild_18 !=
            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                     param_1->___qubesToRebuild_18,
                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                     List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
          param_2->___awaitingRebuilding_14 = true;
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
