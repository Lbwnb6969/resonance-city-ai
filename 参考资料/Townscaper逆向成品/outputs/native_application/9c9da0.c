// RVA 0x9c9da0 | Placemaker.Ui.UiMaster.<>c__DisplayClass70_0$$<AddMenuStateState>b__0
// PDB: U3CU3Ec__DisplayClass70_0_U3CAddMenuStateStateU3Eb__0_mAC2C4BAD9B56F224BB7DCCEB678A408C28BEE510
// Body: [[109c9da0, 109c9e1d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10742280 Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared

void __cdecl
U3CU3Ec__DisplayClass70_0_U3CAddMenuStateStateU3Eb__0_mAC2C4BAD9B56F224BB7DCCEB678A408C28BEE510
          (U3CU3Ec__DisplayClass70_0_t527D4378151BCCA0802646BAE9A955621E27904D *param_1,
          float param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  Il2CppObject *pIVar2;
  Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 *pAVar3;
  Il2CppObject *pIVar4;

  if (DAT_1151ff62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_m06B382510D57D98EBD33FD76C7726CF86A28D4CB_RuntimeMethod_var)
    ;
    DAT_1151ff62 = '\x01';
  }
  pUVar1 = param_1->___U3CU3E4__this_0;
  if (pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pIVar2 = (Il2CppObject *)pUVar1->___menuState_30;
    if (param_2 < __real_3f800000) {
      pIVar4 = (Il2CppObject *)(~param_1->___menuState_1 & (uint)pIVar2);
    }
    else {
      pIVar4 = (Il2CppObject *)(param_1->___menuState_1 | (uint)pIVar2);
    }
    if (pIVar2 != pIVar4) {
      pUVar1->___menuState_30 = (int)pIVar4;
      if ((param_1->___U3CU3E4__this_0 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
         || (pAVar3 = (Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 *)
                      param_1->___U3CU3E4__this_0->___onMenuStateChange_31,
            pAVar3 == (Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 *)0x0)) goto LAB_109c9e19;
      Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared
                (pAVar3,(int)pIVar2,pIVar4,
                 Action_2_Invoke_m06B382510D57D98EBD33FD76C7726CF86A28D4CB_RuntimeMethod_var);
    }
    return;
  }
LAB_109c9e19:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
