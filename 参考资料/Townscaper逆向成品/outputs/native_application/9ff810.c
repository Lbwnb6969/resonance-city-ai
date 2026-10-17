// RVA 0x9ff810 | Placemaker.Ui.SaveMenu$$MenuInit
// PDB: SaveMenu_MenuInit_m67FF72B50BC98E9FB3ECC6CB0FDCDACEAB0AB0A6
// Body: [[109ff810, 109ffa49]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f280 Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a014e0 SaveSystem_GetMetaSaveCount_m4580E94FD55DA93B69ED4992130007D740E75FC8
// 10a02080 SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3de70 GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

bool __cdecl
SaveMenu_MenuInit_m67FF72B50BC98E9FB3ECC6CB0FDCDACEAB0AB0A6
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_2,MethodInfo *param_3)

{
  uchar uVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  bool bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar6;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  int iVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1152019b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m4E44470B1F01A33BC4FA9DA78364728959535A43_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1152019b = '\x01';
  }
  uVar1 = param_1->___menuInitState_35;
  switch(uVar1) {
  case '\0':
    param_1->___menuInitState_35 = uVar1 + '\x01';
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___focusCanvasGroup_9 !=
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
       (pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___focusCanvasGroup_9,(MethodInfo *)0x0),
       pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      Component_GetComponentsInChildren_TisRuntimeObject_mDA299B32A10B9FC9BF05FC2829E86C75EFD096B5_gshared
                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___focusButtons_20,
                 Component_GetComponentsInChildren_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m4E44470B1F01A33BC4FA9DA78364728959535A43_RuntimeMethod_var
                );
      pSVar7 = param_1->___gamepadCard_22;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar7,
                         (MethodInfo *)0x0);
      if (bVar4) {
        if ((param_1->___gamepadCard_22 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0
            ) || (pGVar6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                      param_1->___gamepadCard_22,(MethodInfo *)0x0),
                 pGVar6 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) break;
        bVar4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                          (pGVar6,(MethodInfo *)0x0);
        if (bVar4) {
          return true;
        }
      }
      if (((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___saveCardContainer_12
           != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
         (pTVar5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                              param_1->___saveCardContainer_12,0,(MethodInfo *)0x0),
         pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pSVar7 = (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar5,
                            Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
                           );
        param_1->___gamepadCard_22 = pSVar7;
        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___gamepadCursor_23 !=
            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
          pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___gamepadCursor_23,(MethodInfo *)0x0);
          if ((param_1->___gamepadCard_22 !=
               (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
             (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___gamepadCard_22,(MethodInfo *)0x0),
             pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
            Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                      (pTVar5,pTVar8,(MethodInfo *)0x0);
            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___gamepadCursor_23
                != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___gamepadCursor_23,(MethodInfo *)0x0);
              pVVar9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                 (&local_10,(MethodInfo *)0x0);
              if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                          (pTVar5,*pVVar9,(MethodInfo *)0x0);
                return true;
              }
            }
          }
        }
      }
    }
    break;
  case '\x01':
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar2 = param_1->___master_4->___worldMaster_5,
        pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pSVar3 = pWVar2->___saveSystem_35,
       pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      bVar4 = SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
                        (pSVar3,param_2,(MethodInfo *)0x0);
      if (bVar4) {
        return true;
      }
      param_1->___index_41 = 0;
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar2 = param_1->___master_4->___worldMaster_5,
          pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pSVar3 = pWVar2->___saveSystem_35,
         pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
        iVar10 = SaveSystem_GetMetaSaveCount_m4580E94FD55DA93B69ED4992130007D740E75FC8
                           (pSVar3,(MethodInfo *)0x0);
        param_1->___count_42 = iVar10;
        param_1->___menuInitState_35 = param_1->___menuInitState_35 + '\x01';
        return true;
      }
    }
    break;
  case '\x02':
    param_1->___menuInitState_35 = uVar1 + '\x01';
    return true;
  case '\x03':
    return false;
  default:
    return true;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
