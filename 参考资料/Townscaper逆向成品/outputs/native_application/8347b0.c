// RVA 0x8347b0 | ExampleDebugMenu$$OnGUI
// PDB: ExampleDebugMenu_OnGUI_mC9A65E2295491AAA154053DC1FAD218D4E2AEB86
// Body: [[108347b0, 108348a9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 1102fb70 GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F
// 1102fdf0 GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E
// 110ce580 DebugMenu_Draw_m836C68C45D6A313101A6ECE9B079C566CCE38E35

void __cdecl
ExampleDebugMenu_OnGUI_mC9A65E2295491AAA154053DC1FAD218D4E2AEB86
          (ExampleDebugMenu_tB62BE34AE5F1DD2D6B60E8E7896134AAF6658992 *param_1,MethodInfo *param_2)

{
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar1;
  bool bVar2;
  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *pGVar3;

  if (DAT_1151f3aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f3aa = '\x01';
  }
  if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
  }
  pGVar3 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F((MethodInfo *)0x0);
  pGVar1 = param_1->___skin_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pGVar1,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = param_1->___skin_4;
    if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    }
    GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(pGVar1,(MethodInfo *)0x0);
  }
  if (param_1->___menu_5 != (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *)0x0) {
    DebugMenu_Draw_m836C68C45D6A313101A6ECE9B079C566CCE38E35(param_1->___menu_5,(MethodInfo *)0x0);
    if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    }
    GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(pGVar3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
