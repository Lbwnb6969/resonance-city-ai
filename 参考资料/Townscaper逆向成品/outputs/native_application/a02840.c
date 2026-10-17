// RVA 0xa02840 | Placemaker.SaveSystem$$LoadSave
// PDB: SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C
// Body: [[10a02840, 10a02a98]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f83d0 WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a02b40 SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2

bool __cdecl
SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  bool bVar1;
  String_t *pSVar2;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar3;
  float fVar4;

  if (DAT_115201b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4FEC49A2578715294749EE7FE4725044FEF11BC4);
    DAT_115201b4 = '\x01';
  }
  pMVar3 = param_1->___currentMetaSave_14;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (DAT_115201b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_115201b0 = '\x01';
  }
  bVar1 = SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
                    (param_1,(MethodInfo *)0x0);
  if (!bVar1) {
    pMVar3 = param_1->___currentMetaSave_14;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pMVar3 = param_1->___currentMetaSave_14;
      if (pMVar3 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_10a02a94;
      if (pMVar3->___existsOnDisk_13 == false) {
        if (pMVar3->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
        goto LAB_10a02a94;
        SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
                  (pMVar3->___saveData_9,(MethodInfo *)0x0);
        SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                  (param_1,param_1->___currentMetaSave_14,0x40,(MethodInfo *)0x0);
      }
    }
  }
  pMVar3 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0;
  param_1->___currentMetaSave_14 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0;
  if (DAT_115201b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral974F818D07EB96036B86304952AF824A315663F3);
    pMVar3 = param_1->___currentMetaSave_14;
    DAT_115201b1 = '\x01';
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteral974F818D07EB96036B86304952AF824A315663F3,
               (MethodInfo *)0x0);
  }
  param_1->___currentMetaSave_14 = param_2;
  if ((param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
     (param_1->___settingsData_10 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
  {
    pSVar2 = param_2->___fileName_5;
    bVar1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                      (pSVar2,param_1->___settingsData_10->___lastSave_1,(MethodInfo *)0x0);
    if (bVar1) {
      if (param_1->___settingsData_10 ==
          (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) goto LAB_10a02a94;
      param_1->___settingsData_10->___lastSave_1 = pSVar2;
      if (param_1->___settingsChangeTime_11 <= param_1->___settingsSaveTime_12) {
        fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        param_1->___settingsStartChangeTime_13 = fVar4;
      }
      fVar4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      param_1->___settingsChangeTime_11 = fVar4;
    }
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (_stringLiteral4FEC49A2578715294749EE7FE4725044FEF11BC4,param_2->___path_4,
                        (MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    if (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                (param_1->___worldMaster_4,param_2->___saveData_9,(MethodInfo *)0x0);
      return true;
    }
  }
LAB_10a02a94:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
