// RVA 0x4fab70 | Placemaker.Ui.LoadingUi$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: LoadingUi_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m6690C3C8F9098A12865863752420BCBC88462283
// Body: [[104fab70, 104fac3b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e69d0 UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
LoadingUi_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m6690C3C8F9098A12865863752420BCBC88462283
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar4;

  if (DAT_1151d279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151d279 = '\x01';
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
    if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
                (param_2,param_1->___openState_5,1,(MethodInfo *)0x0);
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
      if ((pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
         (*(Il2CppClass **)pTVar3 ==
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
        pRVar4 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar3;
      }
      UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
                (pRVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
