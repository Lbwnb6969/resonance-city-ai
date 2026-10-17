// RVA 0x3d8a80 | Placemaker.ModuleBuilder$$Iterate
// PDB: ModuleBuilder_Iterate_m427B2A36E662B0568BF0BD55CB2C1E8E7E52B6F1
// Body: [[103d8a80, 103d8b12] [103d8b16, 103d8b77]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1075b980 PropPlacer_PlacePropsInQube_m9D0A0E191D75C58FBFA7DD82D5843DAF3EE36B99
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

bool __cdecl
ModuleBuilder_Iterate_m427B2A36E662B0568BF0BD55CB2C1E8E7E52B6F1
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,MethodInfo *param_2)

{
  uint uVar1;
  List_1_t9135BBA17EC44986E18786359559A3877CE31660 *pLVar2;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar3;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  if (DAT_1151c875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE71C2B070FD46A88A0B5805D7B43E0769A22F125_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m77E89752C3DA0F7404540C725413E34437C67664_RuntimeMethod_var)
    ;
    DAT_1151c875 = '\x01';
  }
  if (param_1->___qubesToGrass_7 != (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) {
    uVar1 = param_1->___qubesToGrass_7->____size_2;
    uVar6 = uVar1;
    if ((int)uVar1 < 1) {
      return false;
    }
    while (uVar5 = uVar6 - 1, -1 < (int)uVar5) {
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      goto LAB_103d8b73;
      bVar7 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                        (param_1->___master_4,(MethodInfo *)0x0);
      if (!bVar7) break;
      pLVar2 = param_1->___qubesToGrass_7;
      if (pLVar2 == (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) goto LAB_103d8b73;
      if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pQVar3 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                (pLVar2->____items_1 + uVar5 * 4 + 0x10);
      if (pQVar3 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_103d8b73;
      uVar6 = uVar5;
      if (pQVar3->___awaitingGrass_15 != false) {
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pPVar4 = param_1->___master_4->___propPlacer_19,
              pPVar4 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0))
        goto LAB_103d8b73;
        PropPlacer_PlacePropsInQube_m9D0A0E191D75C58FBFA7DD82D5843DAF3EE36B99
                  (pPVar4,pQVar3,(MethodInfo *)0x0);
        pQVar3->___awaitingGrass_15 = false;
      }
    }
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___qubesToGrass_7 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___qubesToGrass_7,
                 uVar6,uVar1 - uVar6,
                 List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var);
      return true;
    }
  }
LAB_103d8b73:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
