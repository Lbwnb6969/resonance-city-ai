// RVA 0xa00a60 | Placemaker.Ui.SaveMenu$$<Button_Focus_Duplicate>g__Duplicate|66_0
// PDB: SaveMenu_U3CButton_Focus_DuplicateU3Eg__DuplicateU7C66_0_m0DECAAFFB416E4FC8B679C4631E45A9B4BB9EE45
// Body: [[10a00a60, 10a00bd8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 109fdc10 SaveData_CopyFrom_m4D97522F6F56F6AFEA8C5105ABA292BA1E44704B
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a01570 SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
// 10a03390 SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveMenu_U3CButton_Focus_DuplicateU3Eg__DuplicateU7C66_0_m0DECAAFFB416E4FC8B679C4631E45A9B4BB9EE45
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar3;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;

  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pWVar1 = param_1->___master_4->___worldMaster_5;
    if ((pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)) {
      pSVar2 = pWVar1->___saveSystem_35;
      pMVar3 = param_1->___focusedCard_16->___metaSave_9;
      if (pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
        if (DAT_115201b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95);
          DAT_115201b5 = '\x01';
        }
        pSVar2->___count_32 = pSVar2->___count_32 + 1;
        pMVar4 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                           (pSVar2,0x10,_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95,
                            (MethodInfo *)0x0);
        if (((pMVar4 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
            (pMVar3 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
           (pMVar4->___saveData_9 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
          SaveData_CopyFrom_m4D97522F6F56F6AFEA8C5105ABA292BA1E44704B
                    (pMVar4->___saveData_9,pMVar3->___saveData_9,(MethodInfo *)0x0);
          fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0)
          ;
          pMVar4->___lastSaveDataTime_12 = fVar9;
          if (pMVar4->___lastTextureLoadTime_11 <= fVar9) {
            if (pMVar4->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
            goto LAB_10a00bd4;
            ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                      (pMVar4->___texture_7,pMVar4->___saveData_9->___bigJpg_6,(MethodInfo *)0x0);
            fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                              ((MethodInfo *)0x0);
            pMVar4->___lastTextureLoadTime_11 = fVar9;
          }
          pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar3,
                              (MethodInfo *)0x0);
          if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            iVar6 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                              (pTVar5,(MethodInfo *)0x0);
            uVar7 = iVar6 + 1;
            if (DAT_115201ba == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        ((uint *)&
                                 Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                        );
              DAT_115201ba = '\x01';
            }
            uVar8 = ~uVar7;
            if (-1 < (int)uVar7) {
              uVar8 = uVar7;
            }
            pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar4,
                                (MethodInfo *)0x0);
            if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                        (pTVar5,uVar8,(MethodInfo *)0x0);
              if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                  pMVar4->___onIndexChange_17 !=
                  (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
                UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                          ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                           pMVar4->___onIndexChange_17,uVar8,
                           Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                          );
                SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
                          (pSVar2,pMVar4,false,(MethodInfo *)0x0);
                SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
                          (param_1,'\x01',(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_10a00bd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
