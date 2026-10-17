// RVA 0x234ae0 | Placemaker.Ui.ControlBinding$$OnSetup
// PDB: ControlBinding_OnSetup_m3A34E1E481BBB11CC4F9244C3C50D97A2827258B
// Body: [[10234ae0, 10234bc4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 103e8900 UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
ControlBinding_OnSetup_m3A34E1E481BBB11CC4F9244C3C50D97A2827258B
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;

  if (DAT_1151b592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151b592 = '\x01';
  }
  param_1->___master_4 = param_2;
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
              (param_2,param_1->___openState_10,0x400,(MethodInfo *)0x0);
    pCVar2 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                       );
    if (param_1->___openState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                (param_1->___openState_10,pCVar2,(MethodInfo *)0x0);
      pUVar1 = param_1->___openState_10;
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                  (pUVar1,pTVar3,'\x03',1.1,1.0,(MethodInfo *)0x0);
        if (param_1->___openState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
           ) {
          UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
                    (param_1->___openState_10,
                     (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
                     (MethodInfo *)0x0);
          pUVar1 = param_1->___openState_10;
          if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
          }
          UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
