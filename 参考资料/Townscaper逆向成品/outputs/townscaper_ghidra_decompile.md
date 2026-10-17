# Townscaper Ghidra decompilation

- Program: /GameAssembly.dll
- Image base: 10000000

## WorldMaster_GetSaveString (RVA 0x3f7a90)

- Address: `103f7a90`
- Function: `WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45`
- Body: `[[103f7a90, 103f7b2b]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A` at `10302ad0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52` at `109fdb90`
  - `Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA` at `10e77c40`

```c

String_t * __cdecl
WorldMaster_GetSaveString_mFFA10380F14E182DBD8BCD5E871B1F6EB441BD45
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar2;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar3;
  String_t *pSVar4;

  if (DAT_1151c947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c947 = '\x01';
  }
  if (param_1->___saveData_42 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
              (param_1->___saveData_42,(MethodInfo *)0x0);
    if (param_1->___graph_7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
                (param_1->___graph_7,param_1->___saveData_42,(MethodInfo *)0x0);
      pSVar1 = param_1->___saveData_42;
      if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
        pLVar2 = pSVar1->___corners_4;
        pLVar3 = pSVar1->___voxels_5;
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        pSVar4 = TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
                           (pLVar2,pLVar3,(MethodInfo *)0x0);
        param_1->___lastSaveString_38 = pSVar4;
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## WorldMaster_Load_String (RVA 0x3f8420)

- Address: `103f8420`
- Function: `WorldMaster_Load_mBC50875EF50A204BF126136BC784BFDF7E35469D`
- Body: `[[103f8420, 103f84c1]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3` at `10301d60`
  - `SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52` at `109fdb90`

```c

bool __cdecl
WorldMaster_Load_mBC50875EF50A204BF126136BC784BFDF7E35469D
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar2;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar3;
  bool bVar4;

  if (DAT_1151c949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    DAT_1151c949 = '\x01';
  }
  if (param_1->___saveData_42 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
              (param_1->___saveData_42,(MethodInfo *)0x0);
    pSVar1 = param_1->___saveData_42;
    if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
      pLVar2 = pSVar1->___voxels_5;
      pLVar3 = pSVar1->___corners_4;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      bVar4 = TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
                        (param_2,pLVar3,pLVar2,(MethodInfo *)0x0);
      if (!bVar4) {
        return false;
      }
      param_1->___state_57 = '\x01';
      param_1->___anyChange_59 = false;
      param_1->___lastChangeTime_60 = -1.0;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## WorldMaster_New (RVA 0x3f84d0)

- Address: `103f84d0`
- Function: `WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416`
- Body: `[[103f84d0, 103f85ac]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE` at `10660370`
  - `GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D` at `10e12470`
  - `SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52` at `109fdb90`
  - `List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared` at `10928710`

```c

void __cdecl
WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar2;
  int iVar3;
  int iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;

  pSVar1 = param_1->___saveData_42;
  if (DAT_1151c94a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    DAT_1151c94a = '\x01';
  }
  if (pSVar1 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52(pSVar1,(MethodInfo *)0x0);
    iVar3 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (0,0x28,(MethodInfo *)0x0);
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    iVar5 = GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D
                      (iVar3,(MethodInfo *)0x0);
    iVar3 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (-0xc,0xc,(MethodInfo *)0x0);
    iVar4 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                      (-0xc,0xc,(MethodInfo *)0x0);
    if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar1->___corners_4 !=
        (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
      lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = iVar4 + iVar5.___y_1;
      lVar2.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = iVar3 + iVar5.___x_0;
      lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = 0.0;
      List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar1->___corners_4,lVar2,
                 List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## SaveSystem_GetSaveFilePath (RVA 0xa01780)

- Address: `10a01780`
- Function: `SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E`
- Body: `[[10a01780, 10a01817]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6` at `10f04a30`
  - `il2cpp_value_box` at `10128ae0`

```c

String_t * __cdecl
SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Il2CppObject *pIVar1;
  String_t *pSVar2;
  uint local_8;

  if (DAT_115201a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
    DAT_115201a5 = '\x01';
  }
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  local_8 = (uint)*(ushort *)
                   ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                         static_fields + 6);
  pIVar1 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var,
                            &local_8);
  pSVar2 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                      (Il2CppObject *)_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,pIVar1,
                      (Il2CppObject *)param_2,(MethodInfo *)0x0);
  return pSVar2;
}


```

## SaveSystem_LoadSave (RVA 0xa02840)

- Address: `10a02840`
- Function: `SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C`
- Body: `[[10a02840, 10a02a98]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B` at `10f02470`
  - `Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90` at `10a4ab20`
  - `String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2` at `10f0a070`
  - `WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E` at `103f83d0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8` at `10a3cbf0`
  - `SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597` at `10a00fa0`
  - `Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485` at `10a3c6b0`
  - `Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54` at `10a4a920`
  - `SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3` at `10a02b40`
  - `SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52` at `109fdb90`
  - `Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258` at `1066da00`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`

```c

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


```

## GridGenerator_HexToPlane_int2 (RVA 0xe13c00)

- Address: `10e13c00`
- Function: `GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45`
- Body: `[[10e13c00, 10e13c98]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C` at `1040de70`

```c

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
          (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;

  if (DAT_11522656 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522656 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1.___y_1 = (float)param_1.___y_1;
  fVar1.___x_0 = (float)param_1.___x_0;
  fVar1 = HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C(fVar1,(MethodInfo *)0x0);
  param_1.___y_1 = (int)fVar1.___y_1;
  fVar2.___y_1 = (float)param_1.___y_1 * __real_3df925fe;
  fVar2.___x_0 = (float)param_1.___x_0 * __real_3df925fe;
  return fVar2;
}


```

## Graph_AddVoxel (RVA 0xe6ae80)

- Address: `10e6ae80`
- Function: `Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5`
- Body: `[[10e6ae80, 10e6b477]]`
- Called functions:
  - `il2cpp_runtime_class_init` at `101280f0`
  - `String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66` at `10f04bc0`
  - `Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F` at `10a3aa80`
  - `List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared` at `1102ffd0`
  - `Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893` at `10e6bd70`
  - `Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC` at `1066ff00`
  - `Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC` at `10e6b990`
  - `ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938` at `108363d0`
  - `Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E` at `1066efe0`
  - `Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636` at `10674190`
  - `Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared` at `1043f140`
  - `Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F` at `10e6bec0`
  - `HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2` at `1040e020`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1` at `10836300`
  - `Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676` at `10e6eee0`
  - `Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05` at `1066f450`
  - `Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199` at `10a3c770`
  - `HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D` at `1040d9e0`
  - `Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE` at `10e6d2c0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45` at `10e13c00`
  - `Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC` at `1066f040`
  - `Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C` at `1066e3c0`
  - `il2cpp_value_box` at `10128ae0`
  - `Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91` at `106700e0`

```c

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,uchar param_3,schar param_4,
          bool param_5,MethodInfo *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar7;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar10;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar11;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar12;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar13;
  undefined1 auVar14 [12];
  int iVar15;
  int iVar16;
  bool bVar17;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar18;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar19;
  uint uVar20;
  int iVar21;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar23;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  Il2CppObject *pIVar26;
  Il2CppObject *pIVar27;
  String_t *pSVar28;
  undefined8 uVar29;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar30;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F local_58;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_40;
  undefined4 local_34;
  float fStack_30;
  int local_2c;
  undefined8 local_28;
  int local_20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_18;
  undefined8 local_14;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1152283a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m4C779AD722E9B2D6B392FE2BB91ED99C563A9E89_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAB556B5DB49112FDA7C63D30EEBF6823E5720C3C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1152283a = '\x01';
  }
  iVar21 = param_2.___y_1;
  iVar11.___y_1 = param_2.___y_1;
  iVar11.___x_0 = param_2.___x_0;
  OVar18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
           Graph_GetOrCreateCorner_m6C8F0359621DA3A1F5E189E663A9B54485D9183F
                     (param_1,iVar11,(MethodInfo *)0x0);
  local_1c = OVar18;
  if (OVar18 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
    pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                         (MethodInfo *)0x0);
    local_14 = (ulonglong)CONCAT14(param_3,(undefined4)local_14);
    uVar20 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                       (param_1,pTVar19,(uint)param_3,(MethodInfo *)0x0);
    iVar5 = param_2.___y_1;
    local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)~uVar20;
    if (-1 < (int)uVar20) {
      local_20 = param_2.___x_0;
      param_2.___y_1._0_2_ = (undefined2)iVar21;
      param_2.___y_1._2_1_ = SUB41(iVar21,2);
      param_2.___y_1._3_1_ = SUB41(iVar21,3);
      local_1c.___moduleIndex_0 = (undefined2)param_2.___y_1;
      local_1c.___flags_1 = param_2.___y_1._2_1_;
      local_1c._3_1_ = param_2.___y_1._3_1_;
      param_2.___y_1 = iVar5;
      pIVar26 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                                 &local_20);
      param_2.___y_1 = CONCAT13(param_3,(undefined3)param_2.___y_1);
      pIVar27 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                                 (void *)((int)&param_2.___y_1 + 3));
      pSVar28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                          (_stringLiteralAB556B5DB49112FDA7C63D30EEBF6823E5720C3C,pIVar26,pIVar27,
                           (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                ((Il2CppObject *)pSVar28,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)OVar18,
                 (MethodInfo *)0x0);
      return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
    }
    if (param_1->___voxelPool_11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (param_1->___voxelPool_11,(MethodInfo *)0x0);
      if (iVar21 < 1) {
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                             (MethodInfo *)0x0);
        pVVar22 = Graph_GetNewVoxel_m0B09771C46996923D1D5FB695A23F7A9ED146893
                            (param_1,pTVar19,(MethodInfo *)0x0);
        local_c = pVVar22;
      }
      else {
        pTVar19 = param_1->___voxelPool_11;
        if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar19,(MethodInfo *)0x0);
        pTVar19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar19,iVar21 + -1,(MethodInfo *)0x0);
        if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        pVVar22 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar19,
                             Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                            );
        local_c = pVVar22;
        if (pVVar22 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) goto LAB_10e6b473;
        local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                             (MethodInfo *)0x0);
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                             (MethodInfo *)0x0);
        if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6b473;
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  (local_8,pTVar19,(MethodInfo *)0x0);
      }
      if (pVVar22 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
        pVVar22->___height_5 = param_3;
        pVVar22->___type_4 = param_4;
        pVVar22->___cost_6 =
             param_2.___y_1 * 0x4822a3e9 + -0x2de2f6bb +
             param_2.___x_0 * 0x4c7f6dd1 + local_14._4_4_ * -0x553c3da3;
        pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                             (MethodInfo *)0x0);
        if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                    (pTVar19,(int)local_18,(MethodInfo *)0x0);
          pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar22,
                               (MethodInfo *)0x0);
          local_34 = 0;
          local_2c = 0;
          fStack_30 = (float)pVVar22->___height_5 + __real_3f000000;
          if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            auVar14._4_8_ = 0;
            auVar14._0_4_ = fStack_30;
            Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                      (pTVar19,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)(auVar14 << 0x20),
                       (MethodInfo *)0x0);
            pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)OVar18,
                                 (MethodInfo *)0x0);
            if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 (pTVar19,(MethodInfo *)0x0);
              if (iVar21 != 1) {
                param_2.___y_1 = *(int *)((int)OVar18 + 0x18);
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                    param_2.___y_1,(MethodInfo *)0x0);
                if (bVar17) {
                  Graph_IntegrateVoxel_m9BE5C2638CC130B86187A084C4758C910D77F676
                            (param_1,pVVar22,
                             (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)OVar18,
                             (MethodInfo *)0x0);
                }
LAB_10e6b3e0:
                iVar21 = pVVar22->___height_5 + 1;
                if (param_1->___boundsHeight_27 < iVar21) {
                  param_1->___boundsHeight_27 = iVar21;
                  param_1->___boundsUpdated_41 = true;
                }
                return pVVar22;
              }
              if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
              }
              iVar12.___y_1 = param_2.___y_1;
              iVar12.___x_0 = param_2.___x_0;
              piVar23 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                  ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_40,
                                   iVar12,(MethodInfo *)0x0);
              local_28._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
              local_28._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
              local_14._0_4_ = piVar23->___x_0;
              local_14._4_4_ = piVar23->___y_1;
              local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)piVar23->___z_2;
              uVar29._0_4_ = piVar23->___x_0;
              uVar29._4_4_ = piVar23->___y_1;
              local_58.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
              local_58.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
              local_58.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
              local_58.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
              fStack_30 = (float)(undefined4)uVar29;
              local_2c = uVar29._4_4_;
              local_8 = local_18;
              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
                uVar29 = CONCAT44(local_2c,fStack_30);
              }
              iVar7.___c0_0.___y_1 = local_58.___c1_1.___x_0;
              iVar7.___c0_0.___x_0 = local_58.___c0_0.___z_2;
              iVar7.___c0_0.___z_2 = local_58.___c1_1.___y_1;
              iVar7.___c1_1.___x_0 = local_58.___c1_1.___z_2;
              iVar7.___c1_1.___y_1 = (int)local_28;
              iVar7.___c1_1.___z_2 = (int)((ulonglong)local_28 >> 0x20);
              iVar9.___z_2 = (int)local_18;
              iVar9.___x_0 = (int)uVar29;
              iVar9.___y_1 = (int)((ulonglong)uVar29 >> 0x20);
              bVar17 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                 (iVar7,iVar9,(MethodInfo *)0x0);
              if (!bVar17) {
                if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___corners_6 ==
                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10e6b473;
                pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___corners_6,(MethodInfo *)0x0);
                if (pTVar19 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                goto LAB_10e6b473;
                iVar21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                   (pTVar19,(MethodInfo *)0x0);
                if (iVar21 == 1) {
                  local_58.___c0_0.___x_0 = (undefined4)local_14;
                  local_58.___c0_0.___y_1 = local_14._4_4_;
                  local_58.___c1_1.___x_0 = (int)local_14;
                  local_58.___c1_1.___y_1 = (int)(local_14 >> 0x20);
                  local_58.___c0_0.___z_2 = (int)local_8;
                  local_58.___c1_1.___z_2 = (int)local_8;
                  (param_1->___bounds_28).___c0_0.___x_0 = local_58.___c1_1.___x_0;
                  (param_1->___bounds_28).___c0_0.___y_1 = local_58.___c1_1.___y_1;
                  (param_1->___bounds_28).___c0_0.___z_2 = (int)local_8;
                  (param_1->___bounds_28).___c1_1.___x_0 = local_58.___c1_1.___x_0;
                  (param_1->___bounds_28).___c1_1.___y_1 = local_58.___c1_1.___y_1;
                  (param_1->___bounds_28).___c1_1.___z_2 = (int)local_8;
                }
                else {
                  local_58.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
                  local_58.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
                  local_58.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
                  local_58.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
                  uVar1 = (param_1->___bounds_28).___c1_1.___y_1;
                  uVar3 = (param_1->___bounds_28).___c1_1.___z_2;
                  fStack_30 = (float)uVar1;
                  local_2c = uVar3;
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  iVar8.___c0_0.___y_1 = local_58.___c1_1.___x_0;
                  iVar8.___c0_0.___x_0 = local_58.___c0_0.___z_2;
                  iVar8.___c0_0.___z_2 = local_58.___c1_1.___y_1;
                  iVar8.___c1_1.___x_0 = local_58.___c1_1.___z_2;
                  iVar8.___c1_1.___y_1 = (int)fStack_30;
                  iVar8.___c1_1.___z_2 = local_2c;
                  iVar10.___z_2 = (int)local_8;
                  iVar10.___x_0 = (undefined4)local_14;
                  iVar10.___y_1 = local_14._4_4_;
                  piVar24 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                                      (&local_58,iVar8,iVar10,(MethodInfo *)0x0);
                  iVar21 = (piVar24->___c0_0).___y_1;
                  iVar5 = (piVar24->___c0_0).___z_2;
                  iVar6 = (piVar24->___c1_1).___x_0;
                  iVar15 = (piVar24->___c1_1).___y_1;
                  iVar16 = (piVar24->___c1_1).___z_2;
                  (param_1->___bounds_28).___c0_0.___x_0 = (piVar24->___c0_0).___x_0;
                  (param_1->___bounds_28).___c0_0.___y_1 = iVar21;
                  (param_1->___bounds_28).___c0_0.___z_2 = iVar5;
                  (param_1->___bounds_28).___c1_1.___x_0 = iVar6;
                  (param_1->___bounds_28).___c1_1.___y_1 = iVar15;
                  (param_1->___bounds_28).___c1_1.___z_2 = iVar16;
                }
                param_1->___boundsUpdated_41 = true;
              }
              if (*(List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 **)((int)OVar18 + 0x14) !=
                  (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) {
                if ((*(List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 **)((int)OVar18 + 0x14))->
                    ____size_2 == 0) {
                  local_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        OVar18,(MethodInfo *)0x0);
                  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                              );
                  }
                  iVar13.___y_1 = param_2.___y_1;
                  iVar13.___x_0 = param_2.___x_0;
                  fVar30 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                                     (iVar13,(MethodInfo *)0x0);
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&local_40,fVar30,0.0,(MethodInfo *)0x0);
                  uVar2 = pfVar25->___x_0;
                  uVar4 = pfVar25->___y_1;
                  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (float)uVar2,(float)uVar4,pfVar25->___z_2,(MethodInfo *)0x0);
                  if (local_18 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10e6b473;
                  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                            (local_18,*extraout_EAX,(MethodInfo *)0x0);
                  pVVar22 = local_c;
                  OVar18 = local_1c;
                }
                if (param_5) {
                  if (param_1->___cornerIntegrationQueue_19 ==
                      (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)0x0) goto LAB_10e6b473;
                  if (param_1->___cornerIntegrationQueue_19->____size_2 == 0) {
                    bVar17 = Graph_IntegrateCorner_m5CFA54D487073860589A818EC49AE96AD15BABBE
                                       (param_1,(Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                                                OVar18,(MethodInfo *)0x0);
                    if (bVar17) goto LAB_10e6b3e0;
                  }
                }
                if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                    param_1->___cornerIntegrationQueue_19 !=
                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerIntegrationQueue_19,OVar18,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                  goto LAB_10e6b3e0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10e6b473:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## Graph_ApplyAction (RVA 0xe6b480)

- Address: `10e6b480`
- Function: `Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700`
- Body: `[[10e6b480, 10e6b7a5]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B` at `10f02470`
  - `Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F` at `10a3aa80`
  - `Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341` at `1066f960`
  - `HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3` at `1040e150`
  - `Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B` at `10e73950`
  - `Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC` at `10e6b990`
  - `Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5` at `10e6ae80`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared` at `1043f140`
  - `Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared` at `10224ac0`
  - `ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE` at `102328b0`
  - `Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C` at `1066e3c0`
  - `int2_ToString_m2B5C06E9DADFCA468DA0E7F4731E140BEF55B5E9_inline` at `10e67e60`
  - `Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485` at `10a3c6b0`
  - `Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924` at `10e73610`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`

```c

void __cdecl
Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 param_2,bool param_3,MethodInfo *param_4)

{
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar1;
  float fVar2;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar6;
  undefined4 uVar7;
  bool bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  int iVar10;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  String_t *pSVar13;
  char cVar14;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_24;
  undefined8 local_18;
  uint local_10;
  uint local_c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_8;

  if (DAT_11522838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCEA79521370532468257169DB2A24DC09E10D089);
    DAT_11522838 = '\x01';
  }
  uVar7 = param_2._8_4_;
  iVar10 = param_2.___hexPos_0.___y_1;
  local_c = (uint)param_2._8_4_ >> 8;
  local_8 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  cVar14 = param_2.___outType_3;
  if (param_2.___inType_2 == '\x12') {
    iVar3.___y_1 = param_2.___hexPos_0.___y_1;
    iVar3.___x_0 = param_2.___hexPos_0.___x_0;
    pVVar11 = Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
                        (param_1,iVar3,param_2.___height_1,cVar14,param_3,(MethodInfo *)0x0);
    if (param_3) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar11,
                         (MethodInfo *)0x0);
      if (bVar8) {
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pCVar1 = param_1->___master_4->___clickEffect_14,
               pVVar11 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) &&
           (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar11,
                                (MethodInfo *)0x0),
           pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_24,pTVar9,(MethodInfo *)0x0);
          local_18._0_4_ = pVVar12->___x_2;
          local_18._4_4_ = pVVar12->___y_3;
          fVar2 = pVVar12->___z_4;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          fVar6.___z_2 = fVar2;
          fVar6.___x_0 = (float)(undefined4)local_18;
          fVar6.___y_1 = (float)local_18._4_4_;
          fVar15 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                             (fVar6,(MethodInfo *)0x0);
          if (pCVar1 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
            ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
                      (pCVar1,true,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar15,
                       param_2._8_4_ & 0xff,cVar14,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_10e6b7a1;
      }
    }
    return;
  }
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    iVar4.___y_1 = param_2.___hexPos_0.___y_1;
    iVar4.___x_0 = param_2.___hexPos_0.___x_0;
    bVar8 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___cornerDict_16,iVar4,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                      );
    if (!bVar8) {
      param_2.___height_1 = (undefined1)param_2.___hexPos_0.___x_0;
      param_2.___inType_2 = param_2.___hexPos_0.___x_0._1_1_;
      param_2.___outType_3 = param_2.___hexPos_0.___x_0._2_1_;
      param_2._11_1_ = param_2.___hexPos_0.___x_0._3_1_;
      param_2.___actionId_4 = iVar10;
      pSVar13 = int2_ToString_m2B5C06E9DADFCA468DA0E7F4731E140BEF55B5E9_inline
                          ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&param_2.___height_1,
                           (MethodInfo *)0x0);
      pSVar13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                          (_stringLiteralCEA79521370532468257169DB2A24DC09E10D089,pSVar13,
                           (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      return;
    }
    if (local_8 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                          (MethodInfo *)0x0);
      local_10 = uVar7 & 0xff;
      iVar10 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                         (param_1,pTVar9,local_10,(MethodInfo *)0x0);
      if ((pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
         (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar9,iVar10,(MethodInfo *)0x0),
         pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pVVar11 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar9,
                             Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                            );
        if (cVar14 != '\x12') {
          Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                    (param_1,pVVar11,cVar14,local_8,(MethodInfo *)0x0);
          return;
        }
        if (!param_3) {
LAB_10e6b63f:
          Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                    (param_1,pVVar11,(MethodInfo *)0x0);
          return;
        }
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pCVar1 = param_1->___master_4->___clickEffect_14,
               pVVar11 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) &&
           (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar11,
                                (MethodInfo *)0x0),
           pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___hexPos_0.___y_1,pTVar9,(MethodInfo *)0x0);
          local_18._0_4_ = pVVar12->___x_2;
          local_18._4_4_ = pVVar12->___y_3;
          param_2.___actionId_4 = (int)pVVar12->___z_4;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          fVar5.___z_2 = (float)param_2.___actionId_4;
          fVar5.___x_0 = (float)(undefined4)local_18;
          fVar5.___y_1 = (float)local_18._4_4_;
          fVar15 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                             (fVar5,(MethodInfo *)0x0);
          if (pCVar1 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
            ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
                      (pCVar1,false,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar15,
                       local_10,(schar)local_c,(MethodInfo *)0x0);
            goto LAB_10e6b63f;
          }
        }
      }
    }
  }
LAB_10e6b7a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## Graph_PaintVoxel (RVA 0xe73610)

- Address: `10e73610`
- Function: `Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924`
- Body: `[[10e73610, 10e7372a] [10e7372e, 10e738e9]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54` at `10a4a920`
  - `Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared` at `1043f140`
  - `Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F` at `10a3aa80`
  - `Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C` at `1066e3c0`
  - `ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929` at `10aa2e60`
  - `Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349` at `10e738f0`
  - `Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B` at `1066e440`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`

```c

void __cdecl
Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,schar param_3,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_4,MethodInfo *param_5)

{
  uchar uVar1;
  int iVar2;
  List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *pLVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar5;
  bool bVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar8;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar9;
  int local_10;
  uint local_c;

  if (DAT_1152283d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1152283d = '\x01';
  }
  if (param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
    if (param_2->___height_5 != '\0') {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                         (MethodInfo *)0x0);
      if (!bVar6) {
        pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                            (MethodInfo *)0x0);
        if ((pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar7 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                               (pTVar7,(MethodInfo *)0x0),
           pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e738e5;
        param_4 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                             Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                            );
      }
      param_2->___type_4 = param_3;
      local_c = 0;
      if ((param_4 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
         (param_4->___squares_5 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0))
      goto LAB_10e738e5;
      iVar2 = param_4->___squares_5->____size_2;
      if (0 < iVar2) {
        local_10 = 0x10;
        do {
          pLVar3 = param_4->___squares_5;
          if (pLVar3 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) goto LAB_10e738e5;
          if ((uint)pLVar3->____size_2 <= local_c) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                    (pLVar3->____items_1 + local_10);
          if (((pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
              (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (pCVar4,(MethodInfo *)0x0),
              pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                 (pTVar7,param_2->___height_5 + 1,(MethodInfo *)0x0),
             pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e738e5;
          pQVar8 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                              Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                             );
          pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (pCVar4,(MethodInfo *)0x0);
          if ((pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
             (pTVar7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                 (pTVar7,(uint)param_2->___height_5,(MethodInfo *)0x0),
             pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e738e5;
          pQVar9 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                              Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                             );
          uVar1 = param_2->___type_4;
          pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar4[3].field_0x8;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                             (MethodInfo *)0x0);
          if (bVar6) {
            if ((pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
               (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) goto LAB_10e738e5;
            (pQVar9->___cornerValues_13).___v4_4 = uVar1;
            (pQVar8->___cornerValues_13).___v0_0 = uVar1;
          }
          else {
            pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(pCVar4 + 4);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                              (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                               (MethodInfo *)0x0);
            if (bVar6) {
              if ((pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
                 (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
              goto LAB_10e738e5;
              (pQVar9->___cornerValues_13).___v5_5 = uVar1;
              (pQVar8->___cornerValues_13).___v1_1 = uVar1;
            }
            else {
              pOVar5 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)&pCVar4[4].field_0x4;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                (pOVar5,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_4,
                                 (MethodInfo *)0x0);
              if (pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
              goto LAB_10e738e5;
              if (bVar6) {
                if (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                goto LAB_10e738e5;
                (pQVar9->___cornerValues_13).___v6_6 = uVar1;
                (pQVar8->___cornerValues_13).___v2_2 = uVar1;
              }
              else {
                if (pQVar9 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                goto LAB_10e738e5;
                (pQVar9->___cornerValues_13).___v7_7 = uVar1;
                (pQVar8->___cornerValues_13).___v3_3 = uVar1;
              }
            }
          }
          Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                    (param_1,pQVar8,(MethodInfo *)0x0);
          Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                    (param_1,pQVar9,(MethodInfo *)0x0);
          local_c = local_c + 1;
          local_10 = local_10 + 4;
        } while ((int)local_c < iVar2);
      }
    }
    return;
  }
LAB_10e738e5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## Graph_Save (RVA 0xe77c40)

- Address: `10e77c40`
- Function: `Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA`
- Body: `[[10e77c40, 10e77f91]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B` at `10f02470`
  - `il2cpp_value_box` at `10128ae0`
  - `List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared` at `10928710`
  - `List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared` at `105d1420`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8` at `10a3cbf0`
  - `List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared` at `1103ef20`
  - `Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared` at `1043f140`
  - `Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C` at `1066e3c0`
  - `Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05` at `1066f450`
  - `ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E` at `10836080`
  - `String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6` at `10f04a30`

```c

void __cdecl
Graph_Save_m07C6707CB3FA81485C1705D028ABA557CE1711EA
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  ulonglong uVar1;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar2;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar3;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  String_t *pSVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  int iVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  int iVar13;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar14;
  undefined8 uVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_3c;
  undefined8 local_30;
  ulonglong local_24;
  undefined4 local_1c;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSStack_18;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  int local_8;

  if (DAT_11522840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01A6A7DF2E7F9CD18B5A2D05E9CEF496EC94D9D0);
    DAT_11522840 = '\x01';
  }
  pSVar14 = param_2;
  local_24 = 0;
  local_1c = 0;
  if ((param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) &&
     ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___voxels_5 !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___voxels_5,
               List_1_Clear_m3A42793E42914F1251A2F05F7818CC40E397D76E_RuntimeMethod_var);
    if (pSVar14->___corners_4 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pSVar14->___corners_4,
                 List_1_Clear_m3849B6EE17AA2EB6BD3221159E97746E36B4E8DF_RuntimeMethod_var);
      if (param_1->___corners_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iStack_10 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                              (param_1->___corners_6,(MethodInfo *)0x0);
        if (0 < iStack_10) {
          local_c = 0;
          do {
            if ((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                ) || (pTVar10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                          (param_1->___corners_6,local_c,(MethodInfo *)0x0),
                     pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e77f8d;
            iVar11 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar10,(MethodInfo *)0x0);
            if (iVar11 != 0) {
              pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar10,
                                  Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                 );
              if (pIVar6 == (Il2CppObject *)0x0) goto LAB_10e77f8d;
              local_24 = *(ulonglong *)&pIVar6[1].monitor;
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4 ==
                  (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10e77f8d;
              lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = (short)iVar11;
              lVar4._0_8_ = *(undefined8 *)&pIVar6[1].monitor;
              lVar4.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)iVar11 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4,
                         lVar4,
                         List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
              iVar13 = 0;
              pSVar14 = param_2;
              if (0 < iVar11) {
                do {
                  pTVar12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                      (pTVar10,iVar13,(MethodInfo *)0x0);
                  if (pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10e77f8d;
                  pIVar6 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar12
                                      ,
                                      Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                                     );
                  if (pIVar6 == (Il2CppObject *)0x0) goto LAB_10e77f8d;
                  local_8 = CONCAT22(local_8._2_2_,
                                     *(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 *)
                                      &pIVar6[1].monitor);
                  if (param_2->___voxels_5 ==
                      (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) goto LAB_10e77f8d;
                  List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                            (param_2->___voxels_5,
                             *(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 *)&pIVar6[1].monitor,
                             List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var)
                  ;
                  iVar13 = iVar13 + 1;
                  pSVar14 = param_2;
                } while (iVar13 < iVar11);
              }
            }
            local_c = local_c + 1;
            if (iStack_10 <= local_c) {
              return;
            }
          } while( true );
        }
        iVar11 = (param_1->___bounds_28).___c0_0.___x_0;
        iStack_3c.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
        iStack_3c.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
        iStack_3c.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
        uVar15._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
        uVar15._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
        local_14 = (undefined4)uVar15;
        iStack_10 = uVar15._4_4_;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          uVar15 = CONCAT44(iStack_10,local_14);
        }
        iVar2.___c0_0.___y_1 = iStack_3c.___x_0;
        iVar2.___c0_0.___x_0 = iVar11;
        iVar2.___c0_0.___z_2 = iStack_3c.___y_1;
        iVar2.___c1_1.___x_0 = iStack_3c.___z_2;
        iVar2.___c1_1.___y_1 = (int)uVar15;
        iVar2.___c1_1.___z_2._0_2_ = (short)((ulonglong)uVar15 >> 0x20);
        iVar2.___c1_1.___z_2._2_2_ = (short)((ulonglong)uVar15 >> 0x30);
        piVar5 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                           (&iStack_3c,iVar2,(MethodInfo *)0x0);
        uVar1._0_4_ = piVar5->___x_0;
        uVar1._4_4_ = piVar5->___y_1;
        iVar11 = piVar5->___z_2;
        local_30 = uVar1;
        local_24 = uVar1;
        pSStack_18 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)(undefined4)uVar1;
        local_14 = uVar1._4_4_;
        if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4 !=
            (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) {
          lVar3.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = 0.0;
          lVar3.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)uVar1;
          lVar3.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = uVar1._4_4_;
          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pSVar14->___corners_4,lVar3
                     ,List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
          if (`struct_String_t*___cdecl_int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline(int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921*,MethodInfo_const*)'
              ::__l2::s_Il2CppMethodInitialized == false) {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&_stringLiteral0245A598901314C98F3EE8F1FABA26B281081D8E);
            `struct_String_t*___cdecl_int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline(int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921*,MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized = true;
          }
          param_2 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)(undefined4)uVar1;
          pIVar6 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&param_2);
          local_c = local_30._4_4_;
          pIVar7 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&local_c);
          local_8 = iVar11;
          pIVar8 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                    ,&local_8);
          pSVar9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                             (_stringLiteral0245A598901314C98F3EE8F1FABA26B281081D8E,pIVar6,pIVar7,
                              pIVar8,(MethodInfo *)0x0);
          pSVar9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (_stringLiteral01A6A7DF2E7F9CD18B5A2D05E9CEF496EC94D9D0,pSVar9,
                              (MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10e77f8d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```
