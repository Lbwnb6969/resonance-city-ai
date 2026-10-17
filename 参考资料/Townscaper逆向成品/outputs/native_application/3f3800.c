// RVA 0x3f3800 | Placemaker.WaveFunctionCollapse$$IterateApplyModules
// PDB: WaveFunctionCollapse_IterateApplyModules_m5F698DD3AC6A37053DA3B99AE56FD3701BFE7DB8
// Body: [[103f3800, 103f38bb] [103f38bf, 103f3978]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

bool __cdecl
WaveFunctionCollapse_IterateApplyModules_m5F698DD3AC6A37053DA3B99AE56FD3701BFE7DB8
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  List_1_t9135BBA17EC44986E18786359559A3877CE31660 *pLVar1;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar2;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar3;
  bool bVar4;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar5;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar6;
  int iVar7;
  uint uVar8;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_28;
  uint local_c;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *local_8;

  if (DAT_1151c919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE71C2B070FD46A88A0B5805D7B43E0769A22F125_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m77E89752C3DA0F7404540C725413E34437C67664_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    DAT_1151c919 = '\x01';
  }
  if (param_1->___qubesToRebuild_18 != (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) {
    uVar8 = param_1->___qubesToRebuild_18->____size_2;
    if ((int)uVar8 < 1) {
      return false;
    }
    pWVar5 = param_1->___master_4;
    local_c = uVar8;
    if (pWVar5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      iVar7 = uVar8 * 4 + 0x10;
      do {
        bVar4 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                          (pWVar5,(MethodInfo *)0x0);
        if ((!bVar4) || ((int)uVar8 < 1)) {
          if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___qubesToRebuild_18 !=
              (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
            List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                       param_1->___qubesToRebuild_18,uVar8,local_c - uVar8,
                       List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var
                      );
            return true;
          }
          break;
        }
        iVar7 = iVar7 + -4;
        uVar8 = uVar8 - 1;
        pLVar1 = param_1->___qubesToRebuild_18;
        if (pLVar1 == (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) break;
        if ((uint)pLVar1->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pQVar2 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)(pLVar1->____items_1 + iVar7);
        if (pQVar2 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
        if (pQVar2->___awaitingRebuilding_14 != false) {
          pLVar3 = pQVar2->___possibleModules_18;
          pQVar2->___awaitingRebuilding_14 = false;
          if (pLVar3 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) break;
          if (pLVar3->____size_2 != 0) {
            if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) break;
            local_8 = param_1->___master_4->___moduleBuilder_16;
            pOVar6 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                               (&local_28,pLVar3,0,
                                List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                               );
            if (local_8 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) break;
            ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                      (local_8,pQVar2,*pOVar6,(MethodInfo *)0x0);
          }
        }
        pWVar5 = param_1->___master_4;
      } while (pWVar5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
