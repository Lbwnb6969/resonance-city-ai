// RVA 0x7509c0 | Placemaker.Ui.PinnedUi$$Setup
// PDB: PinnedUi_Setup_mB7B4D2FB7333B116A1C63C525C540021B686A284
// Body: [[107509c0, 10750ae0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared

void __cdecl
PinnedUi_Setup_mB7B4D2FB7333B116A1C63C525C540021B686A284
          (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  char cVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  String_t *pSVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;

  if (DAT_1151ec00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m54DFDBBF0B2B2E4988F00A10994F4C781965E30B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_U3CSetupU3Eb__0_mED5D26B719CC82D2901F7CE6180460BC8C137B9E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_t42AD91D1134A29F85BBC5C1A0AB9A07F6ABFD388_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ec00 = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass3_0_t42AD91D1134A29F85BBC5C1A0AB9A07F6ABFD388_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  cVar2 = '\x01';
  if (param_1->___pinned_5 == false) {
    cVar2 = param_1->___hovered_6;
  }
  if (param_1->___state_4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_4,cVar2 != '\0',(MethodInfo *)0x0);
    pSVar4 = (String_t *)
             Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                        Component_GetComponentInChildren_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m54DFDBBF0B2B2E4988F00A10994F4C781965E30B_RuntimeMethod_var
                       );
    if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
      pBVar3->___name_0 = pSVar4;
      pUVar1 = param_1->___state_4;
      pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar5,(Il2CppObject *)pBVar3,
                 (int)
                 U3CU3Ec__DisplayClass3_0_U3CSetupU3Eb__0_mED5D26B719CC82D2901F7CE6180460BC8C137B9E_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar5,
                   (MethodInfo *)0x0);
        pUVar1 = param_1->___state_4;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
