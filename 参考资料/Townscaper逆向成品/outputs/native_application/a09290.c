// RVA 0xa09290 | Placemaker.Ui.ShadingButtons$$SubscribeButton
// PDB: ShadingButtons_SubscribeButton_m6B46AD3F7344464717328DCE915FAB975B23E16D
// Body: [[10a09290, 10a0939f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
ShadingButtons_SubscribeButton_m6B46AD3F7344464717328DCE915FAB975B23E16D
          (ShadingButtons_t2ED81F76F9E0A03D3A7A629AC27B30AF05EE4DB0 *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,
          UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_3,MethodInfo *param_4)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  String_t *pSVar3;
  Il2CppObject *pIVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;

  if (DAT_115201dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass14_0_U3CSubscribeButtonU3Eb__0_m752DF14C39E37A53E2075CE8E2A0B1378836DD85_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass14_0_tB0823D825AF37C5A033E593E41AD15F05DF5C061_il2cpp_TypeInfo_var
              );
    DAT_115201dd = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass14_0_tB0823D825AF37C5A033E593E41AD15F05DF5C061_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (param_2 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pSVar3 = (String_t *)
               Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (pTVar2,0,(MethodInfo *)0x0);
      if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
        pBVar1->___name_0 = pSVar3;
        pBVar1->___screenAspectRatio_1 = 0.8;
        (pBVar1->___referenceResolution_2).___x_0 = 0.8;
        (pBVar1->___referenceResolution_2).___y_1 = 0.7;
        pBVar1[1]._padding_ = 0x3f8ccccd;
        pBVar1[1]._padding_ = 0x3f8ccccd;
        pBVar1[1].___name_0 = (String_t *)0x3f8ccccd;
        if (pSVar3 != (String_t *)0x0) {
          pIVar4 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar3,
                              Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
                             );
          pBVar1[1].___screenAspectRatio_1 = (float)pIVar4;
          pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar5,(Il2CppObject *)pBVar1,
                     (int)
                     U3CU3Ec__DisplayClass14_0_U3CSubscribeButtonU3Eb__0_m752DF14C39E37A53E2075CE8E2A0B1378836DD85_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (param_3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                      (param_3,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar5,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
