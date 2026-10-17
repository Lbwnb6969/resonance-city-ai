// RVA 0x9fdf10 | Placemaker.Ui.SaveMenu$$Button_Focus_Delete_Full
// PDB: SaveMenu_Button_Focus_Delete_Full_m60B411783CA968BAAD41C6C0E9A06A3ACCE2E2B1
// Body: [[109fdf10, 109fe133]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066efb0 Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a010a0 SaveSystem_DeleteMetaSaveFromDisk_m1DB3D4B0837047F7FC222DD4727D44D574F95E5A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
SaveMenu_Button_Focus_Delete_Full_m60B411783CA968BAAD41C6C0E9A06A3ACCE2E2B1
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar4;
  int iVar5;
  bool bVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  int iVar8;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  bool local_5;

  if (DAT_115201a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_115201a1 = '\x01';
  }
  local_5 = false;
  pSVar9 = param_1->___focusedCard_16;
  pSVar1 = param_1->___gamepadCard_22;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar9,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,(MethodInfo *)0x0);
  if ((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
     (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___focusedCard_16,(MethodInfo *)0x0),
     pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    iVar8 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                      (pTVar7,(MethodInfo *)0x0);
    if ((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
       (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___focusedCard_16,(MethodInfo *)0x0),
       pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(pTVar7,(MethodInfo *)0x0)
      ;
      if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar2 = param_1->___master_4->___worldMaster_5,
           pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
          (param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0))
         && (pSVar3 = pWVar2->___saveSystem_35,
            pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
        SaveSystem_DeleteMetaSaveFromDisk_m1DB3D4B0837047F7FC222DD4727D44D574F95E5A
                  (pSVar3,param_1->___focusedCard_16->___metaSave_9,&local_5,(MethodInfo *)0x0);
        SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
                  (param_1,'\x01',(MethodInfo *)0x0);
        if (local_5 != false) {
          if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
             (pDVar4 = param_1->___master_4->___dim_10,
             pDVar4 == (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) goto LAB_109fe12f;
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar4,2,(MethodInfo *)0x0);
        }
        if (!bVar6) {
          return;
        }
        if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pWVar2 = param_1->___master_4->___worldMaster_5,
            pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
           (pSVar3 = pWVar2->___saveSystem_35,
           pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
          iVar5 = pSVar3->___validMetaSaveCount_33;
          if (iVar5 < 1) {
            return;
          }
          if (((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
               param_1->___saveCardContainer_12 !=
               (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
             (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                 ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                  param_1->___saveCardContainer_12,(iVar8 + 1 + iVar5) % iVar5,
                                  (MethodInfo *)0x0),
             pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
            pSVar9 = (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)
                     Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                                Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
                               );
            param_1->___gamepadCard_22 = pSVar9;
            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___gamepadCursor_23
                 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
               ((pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___gamepadCursor_23,(MethodInfo *)0x0),
                pSVar9 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0 &&
                (pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar9,
                                      (MethodInfo *)0x0),
                pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) {
              Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                        (pTVar7,pTVar10,(MethodInfo *)0x0);
              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                  param_1->___gamepadCursor_23 !=
                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    param_1->___gamepadCursor_23,(MethodInfo *)0x0);
                pVVar11 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                    (&local_14,(MethodInfo *)0x0);
                if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                            (pTVar7,*pVVar11,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_109fe12f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
