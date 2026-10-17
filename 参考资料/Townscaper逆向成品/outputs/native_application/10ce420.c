// RVA 0x10ce420 | FuryStudios.FurySDK.Utils.DebugMenu$$Down
// PDB: DebugMenu_Down_m570B789858D3409C06985681DEC0A4DC54F9489E
// Body: [[110ce420, 110ce4b3] [110ce4b7, 110ce50f] [110ce516, 110ce547] [110ce54b, 110ce575]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 110ce970 DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452

void __cdecl
DebugMenu_Down_m570B789858D3409C06985681DEC0A4DC54F9489E
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  int iVar1;
  List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *pLVar2;
  int *piVar3;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar4;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar5;
  char cVar6;
  uint uVar8;
  int iVar9;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar10;
  uint local_8;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar7;

  if (DAT_11523a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m79E01CA0DE3BFAFA389517D7B9CC0F26D691B652_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var)
    ;
    DAT_11523a78 = '\x01';
  }
  VVar10 = DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
                     (param_1,(MethodInfo *)0x0);
  pMVar7 = VVar10.___Item2_1;
  local_8 = VVar10.___Item1_0;
  if ((pMVar7 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) &&
     (pMVar7->___U3CChildEntriesU3Ek__BackingField_3 !=
      (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0)) {
    iVar1 = pMVar7->___U3CChildEntriesU3Ek__BackingField_3->____size_2;
    iVar9 = local_8 + 1;
    VVar4 = VVar10;
    if (iVar9 < (int)(local_8 + iVar1)) {
      do {
        local_8 = VVar4.___Item1_0;
        VVar5.___Item2_1 = pMVar7;
        VVar5.___Item1_0 = local_8;
        pLVar2 = (VVar4.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
        uVar8 = (iVar1 + iVar9 % iVar1) % iVar1;
        if (pLVar2 == (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) goto LAB_110ce571;
        if ((uint)pLVar2->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        piVar3 = *(int **)(pLVar2->____items_1 + uVar8 * 4 + 0x10);
        if (piVar3 == (int *)0x0) goto LAB_110ce571;
        cVar6 = (**(code **)(*piVar3 + 0xdc))(piVar3,*(undefined4 *)(*piVar3 + 0xe0));
        if (cVar6 != '\0') {
          VVar10.___Item2_1 = pMVar7;
          VVar10.___Item1_0 = uVar8;
          break;
        }
        VVar10.___Item2_1 = pMVar7;
        VVar10.___Item1_0 = local_8;
        iVar9 = iVar9 + 1;
        VVar4 = VVar5;
      } while (iVar9 < (int)(local_8 + iVar1));
    }
    pLVar2 = (VVar10.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
    if (pLVar2 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) {
      if ((uint)pLVar2->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      piVar3 = *(int **)(pLVar2->____items_1 + local_8 * 4 + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xfc))(piVar3,*(undefined4 *)(*piVar3 + 0x100));
        pLVar2 = (VVar10.___Item2_1)->___U3CChildEntriesU3Ek__BackingField_3;
        if (pLVar2 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0) {
          if ((uint)pLVar2->____size_2 <= (uint)VVar10.___Item1_0) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          piVar3 = *(int **)(pLVar2->____items_1 + VVar10.___Item1_0 * 4 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xf4))(piVar3,*(undefined4 *)(*piVar3 + 0xf8));
            return;
          }
        }
      }
    }
  }
LAB_110ce571:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
