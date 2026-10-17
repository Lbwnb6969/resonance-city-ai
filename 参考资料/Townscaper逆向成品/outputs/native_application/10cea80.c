// RVA 0x10cea80 | FuryStudios.FurySDK.Utils.DebugMenu$$Left
// PDB: DebugMenu_Left_mECDD2D2B69E47940B44FD298DF9F0E84497271A9
// Body: [[110cea80, 110cead0] [110cead4, 110ceb0d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 110ce970 DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452

void __cdecl
DebugMenu_Left_mECDD2D2B69E47940B44FD298DF9F0E84497271A9
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *pLVar1;
  int *piVar2;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar3;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 VVar4;

  if (DAT_11523a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var)
    ;
    DAT_11523a7a = '\x01';
  }
  VVar4 = DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
                    (param_1,(MethodInfo *)0x0);
  pMVar3 = VVar4.___Item2_1;
  if (pMVar3 == param_1->___root_2) {
    return;
  }
  if ((pMVar3 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) &&
     (pLVar1 = pMVar3->___U3CChildEntriesU3Ek__BackingField_3,
     pLVar1 != (List_1_t5D64C8FC795A8577207851EF7EB4031102F46740 *)0x0)) {
    if ((uint)pLVar1->____size_2 <= (uint)VVar4.___Item1_0) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    piVar2 = *(int **)(pLVar1->____items_1 + VVar4.___Item1_0 * 4 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xfc))(piVar2,*(undefined4 *)(*piVar2 + 0x100));
      (**(code **)(pMVar3->_padding_ + 0xf4))(pMVar3,*(undefined4 *)(pMVar3->_padding_ + 0xf8));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
