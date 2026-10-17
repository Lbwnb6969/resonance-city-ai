// RVA 0x3d3290 | Placemaker.Audio.ManySoundsManager$$PlaySound
// PDB: ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// Body: [[103d3290, 103d3602]]
// Direct callees:
// 1003e660 Invoke
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 10a383a0 Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
          (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *param_1,int param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,float param_4,float param_5,
          MethodInfo *param_6)

{
  int iVar1;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  bool bVar4;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar5;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  Il2CppObject *pIVar8;
  String_t *pSVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  Il2CppObject *local_8;

  if (DAT_1151c857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m6C021EFD7AB03E0BD7FC4AA8664DD1BD8B20DB54_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9453A90CC454BD1383CA231CA2736BE938120068);
    DAT_1151c857 = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  iVar1 = param_1->___counter_7;
  param_1->___counter_7 = iVar1 + 1;
  if (iVar1 < 0x33) {
    pOVar5 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar5,(MethodInfo *)0x0);
    if (bVar4) {
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
LAB_103d35fe:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      if (param_1->___master_4->___isDimmed_55 == false) {
        pCVar6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
        if (pCVar6 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) goto LAB_103d35fe;
        VVar3.___y_3 = param_3.___y_3;
        VVar3.___x_2 = param_3.___x_2;
        VVar3.___z_4._0_2_ = SUB42(param_3.___z_4,0);
        VVar3.___z_4._2_2_ = (short)((uint)param_3.___z_4 >> 0x10);
        pVVar7 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
                           (&local_2c,pCVar6,VVar3,(MethodInfo *)0x0);
        local_14._0_4_ = pVVar7->___x_2;
        local_14._4_4_ = pVVar7->___y_3;
        local_18 = pVVar7->___z_4;
        if (((0.0 <= local_18) && (__real_80000000 <= (float)local_14)) &&
           ((float)local_14 <= __real_3f800000)) {
          local_20._0_4_ = pVVar7->___x_2;
          local_20._4_4_ = pVVar7->___y_3;
          if ((__real_80000000 <= (float)local_20._4_4_) &&
             ((float)local_20._4_4_ <= __real_3f800000)) {
            if ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)param_1->___soundDict_6 !=
                (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
              bVar4 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                                ((Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                                 param_1->___soundDict_6,
                                 (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2,
                                 &local_8,
                                 Dictionary_2_TryGetValue_m6C021EFD7AB03E0BD7FC4AA8664DD1BD8B20DB54_RuntimeMethod_var
                                );
              if (bVar4) {
                fVar12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
                if (local_8 != (Il2CppObject *)0x0) {
                  if (fVar12 < (float)local_8[8].field0_0x0) {
                    return;
                  }
                  fVar12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                     ((MethodInfo *)0x0);
                  if (((param_1->___master_4 !=
                        (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                      (pCVar2 = param_1->___master_4->___clickEffect_14,
                      pCVar2 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) &&
                     (local_8 != (Il2CppObject *)0x0)) {
                    if (fVar12 < pCVar2->___lastClick_17 + (float)local_8[3].field0_0x0) {
                      return;
                    }
                    fVar11 = local_14._4_4_ - __real_3f000000;
                    fVar12 = (float)local_14 - __real_3f000000;
                    param_1->___counter_7 = param_1->___counter_7 + 4;
                    fVar11 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
                    fVar12 = (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
                    fVar12 = __real_3f800000 - (fVar12 + fVar12) * (fVar11 + fVar11);
                    fVar12 = fVar12 * fVar12 * param_5;
                    local_8[6].field0_0x0 = (Il2CppClass *)(local_8[6].field0_0x0 + fVar12);
                    if ((local_8 != (Il2CppObject *)0x0) &&
                       (local_8[7].field0_0x0 =
                             (Il2CppClass *)((float)local_14 * fVar12 + local_8[7].field0_0x0),
                       local_8 != (Il2CppObject *)0x0)) {
                      local_20 = *(undefined8 *)&local_8[4].monitor;
                      local_2c._0_8_ = *(undefined8 *)&local_8[4].monitor;
                      local_2c.___z_4 = param_3.___z_4 * fVar12 + (float)local_8[5].monitor;
                      local_14._4_4_ = (float)((ulonglong)local_20 >> 0x20);
                      *(ulonglong *)&local_8[4].monitor =
                           CONCAT44(param_3.___y_3 * fVar12 + local_14._4_4_,
                                    param_3.___x_2 * fVar12 + (float)local_20);
                      local_8[5].monitor = (MonitorData *)local_2c.___z_4;
                      local_14 = local_20;
                      if (local_8 != (Il2CppObject *)0x0) {
                        local_8[7].monitor = (MonitorData *)(param_4 + (float)local_8[7].monitor);
                        return;
                      }
                    }
                  }
                }
              }
              else {
                pIVar8 = il2cpp_value_box(SoundType_t0A2F7E65D41FC30B1EFCFE5555D6EDFDFB024E92_il2cpp_TypeInfo_var
                                          ,&param_2);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  pSVar9 = (String_t *)VirtFuncInvoker0<int>::Invoke(3,pIVar8);
                  piVar10 = il2cpp_object_unbox(pIVar8);
                  param_2 = *piVar10;
                  pSVar9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                     (_stringLiteral9453A90CC454BD1383CA231CA2736BE938120068,pSVar9,
                                      (MethodInfo *)0x0);
                  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
                  }
                  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                            ((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto LAB_103d35fe;
          }
        }
      }
    }
  }
  return;
}
