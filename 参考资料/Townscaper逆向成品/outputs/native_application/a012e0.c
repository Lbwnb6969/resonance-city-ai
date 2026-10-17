// RVA 0xa012e0 | Placemaker.SaveSystem$$DuplicateSave
// PDB: SaveSystem_DuplicateSave_m0D9572C9524AB820EEB7E14F129E8A3F6ABD6CFB
// Body: [[10a012e0, 10a01416]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 109fdc10 SaveData_CopyFrom_m4D97522F6F56F6AFEA8C5105ABA292BA1E44704B
// 10a01570 SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
// 10a03390 SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveSystem_DuplicateSave_m0D9572C9524AB820EEB7E14F129E8A3F6ABD6CFB
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;

  if (DAT_115201b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95);
    DAT_115201b5 = '\x01';
  }
  param_1->___count_32 = param_1->___count_32 + 1;
  pMVar1 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                     (param_1,0x10,_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95,
                      (MethodInfo *)0x0);
  if (((pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
      (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
     (pMVar1->___saveData_9 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
    SaveData_CopyFrom_m4D97522F6F56F6AFEA8C5105ABA292BA1E44704B
              (pMVar1->___saveData_9,param_2->___saveData_9,(MethodInfo *)0x0);
    fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    pMVar1->___lastSaveDataTime_12 = fVar6;
    if (pMVar1->___lastTextureLoadTime_11 <= fVar6) {
      if (pMVar1->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
      goto LAB_10a01412;
      ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                (pMVar1->___texture_7,pMVar1->___saveData_9->___bigJpg_6,(MethodInfo *)0x0);
      fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      pMVar1->___lastTextureLoadTime_11 = fVar6;
    }
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar3 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                        (pTVar2,(MethodInfo *)0x0);
      uVar4 = iVar3 + 1;
      if (DAT_115201ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                  );
        DAT_115201ba = '\x01';
      }
      uVar5 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar5 = uVar4;
      }
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar1,
                          (MethodInfo *)0x0);
      if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar2,uVar5,(MethodInfo *)0x0);
        if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)pMVar1->___onIndexChange_17
            != (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
          UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                    ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                     pMVar1->___onIndexChange_17,uVar5,
                     Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
          SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
                    (param_1,pMVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10a01412:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
