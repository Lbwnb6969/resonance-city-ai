// RVA 0x2f84b0 | Placemaker.Ui.SimpleMessage$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SimpleMessage_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mAD11BC49C806BEAF4E58D892874C2859393B3758
// Body: [[102f84b0, 102f8534]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
SimpleMessage_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mAD11BC49C806BEAF4E58D892874C2859393B3758
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar2;

  if (DAT_1151c18b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c18b = '\x01';
  }
  pUVar1 = param_1->___openState_5;
  pCVar2 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                     );
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED(pUVar1,pCVar2,(MethodInfo *)0x0)
    ;
    pUVar1 = param_1->___openState_5;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
