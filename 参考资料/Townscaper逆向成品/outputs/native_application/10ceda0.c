// RVA 0x10ceda0 | FuryStudios.FurySDK.Utils.DebugMenu$$Up
// PDB: DebugMenu_Up_m8A5F41B5377EA56993E97333A5D7C3286D1E0BE1
// Body: [[110ceda0, 110cee33] [110cee37, 110cee89] [110cee8d, 110ceec1] [110ceec5, 110ceeef]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 110ce970 DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452

void __cdecl
DebugMenu_Up_m8A5F41B5377EA56993E97333A5D7C3286D1E0BE1
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  int iVar1;
  List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *pLVar2;
  int *piVar3;
  char cVar4;
  uint uVar7;
  int iVar8;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar9;
  uint local_18;
  uint uVar5;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar6;

  if (DAT_11523a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m79E01CA0DE3BFAFA389517D7B9CC0F26D691B652_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var)
    ;
    DAT_11523a77 = '\x01';
  }
  VVar9 = DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
                    (param_1,(MethodInfo *)0x0);
  pMVar6 = VVar9.___Item2_1;
  uVar5 = VVar9.___Item1_0;
  if ((pMVar6 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) &&
     (pMVar6->___U3CChildEntriesU3Ek__BackingField_3 !=
      (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0)) {
    iVar1 = pMVar6->___U3CChildEntriesU3Ek__BackingField_3->____size_2;
    iVar8 = uVar5 - 1;
    if ((int)(uVar5 - iVar1) <= iVar8) {
      do {
        local_18 = VVar9.___Item1_0;
        pLVar2 = (VVar9.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
        uVar7 = (iVar1 + iVar8 % iVar1) % iVar1;
        if (pLVar2 == (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) goto LAB_110ceeeb;
        if ((uint)pLVar2->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        piVar3 = *(int **)(pLVar2->____items_1 + uVar7 * 4 + 0x10);
        if (piVar3 == (int *)0x0) goto LAB_110ceeeb;
        cVar4 = (**(code **)(*piVar3 + 0xdc))(piVar3,*(undefined4 *)(*piVar3 + 0xe0));
        VVar9.___Item2_1 = pMVar6;
        VVar9.___Item1_0 = local_18;
      } while ((cVar4 == '\0') &&
              (iVar8 = iVar8 + -1, uVar7 = local_18, (int)(uVar5 - iVar1) <= iVar8));
      VVar9.___Item1_0 = uVar7;
    }
    pLVar2 = (VVar9.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
    if (pLVar2 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) {
      if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      piVar3 = *(int **)(pLVar2->____items_1 + uVar5 * 4 + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xfc))(piVar3,*(undefined4 *)(*piVar3 + 0x100));
        pLVar2 = (VVar9.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
        if (pLVar2 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) {
          if ((uint)pLVar2->____size_2 <= (uint)VVar9.___Item1_0) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          piVar3 = *(int **)(pLVar2->____items_1 + VVar9.___Item1_0 * 4 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xf4))(piVar3,*(undefined4 *)(*piVar3 + 0xf8));
            return;
          }
        }
      }
    }
  }
LAB_110ceeeb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
