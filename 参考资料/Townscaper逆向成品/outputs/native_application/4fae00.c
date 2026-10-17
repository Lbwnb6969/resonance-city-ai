// RVA 0x4fae00 | Placemaker.Ui.LoadingUi$$Update
// PDB: LoadingUi_Update_mAA54A1DC99B06CD4D458C9693EF7C3604B20E3D5
// Body: [[104fae00, 104faf08] [104faf12, 104fb4c7] [104fb4cf, 104fb545]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196230 _libm_sse2_exp_precise
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 10a39900 Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f30 AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
LoadingUi_Update_mAA54A1DC99B06CD4D458C9693EF7C3604B20E3D5
          (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar4;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Il2CppObject *pIVar7;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_60;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_50;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *local_28;
  float local_24;
  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *local_20;
  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *local_1c;
  uint local_18;
  int local_14;

  if (DAT_1151d27a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var)
    ;
    DAT_1151d27a = '\x01';
  }
  local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)param_1->___timer_12;
  fVar14 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  param_1->___timer_12 = fVar14 * __real_40c00000 + (float)local_1c;
  local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)
             Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0)
  ;
  dVar13 = (double)((float)((uint)local_1c ^ __xmm_80000000800000008000000080000000) *
                   __real_41000000);
  _libm_sse2_exp_precise();
  local_1c = param_1->___targetColors_10;
  local_24 = (float)dVar13;
  if (local_1c == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) goto LAB_104fb541;
  iVar10 = local_1c->____size_2;
  local_14 = iVar10;
  if (param_1->___timer_12 <= __real_3f800000) goto LAB_104fb438;
  param_1->___timer_12 = param_1->___timer_12 - __real_3f800000;
  switch(param_1->___state_16) {
  case 0:
  case 1:
    iVar9 = param_1->___counter_11;
    local_18 = iVar9 % iVar10;
    if ((uint)local_1c->____size_2 <= local_18) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pCVar8 = local_1c->____items_1->m_Items + local_18;
    local_38 = pCVar8->___r_0;
    local_50.___r_0 = pCVar8->___g_1;
    local_60.___m_Left_0 = pCVar8->___b_2;
    fVar14 = pCVar8->___a_3;
    local_60.___m_Right_1 = local_60.___m_Left_0;
    local_60.___m_Top_2 = local_60.___m_Left_0;
    local_60.___m_Bottom_3 = local_60.___m_Left_0;
    local_50.___g_1 = local_50.___r_0;
    local_50.___b_2 = local_50.___r_0;
    local_50.___a_3 = local_50.___r_0;
    fStack_34 = local_50.___r_0;
    fStack_30 = local_60.___m_Left_0;
    fStack_2c = fVar14;
    if (iVar9 < iVar10) {
      iVar10 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                         (0,3,(MethodInfo *)0x0);
      param_1->___pitcher_17 = param_1->___pitcher_17 + 1;
      fVar12 = local_60.___m_Left_0;
      if (iVar10 == 0) {
        local_38 = __real_3f0ccccd;
        fStack_34 = 0.0;
        fStack_30 = 0.0;
        fStack_2c = 0.0;
      }
      else if (iVar10 == 1) {
        local_50.___r_0 = __real_3f0ccccd;
        local_50.___g_1 = 0.0;
        local_50.___b_2 = 0.0;
        local_50.___a_3 = 0.0;
      }
      else {
        local_60.___m_Left_0 = __real_3f0ccccd;
        local_60.___m_Right_1 = 0.0;
        local_60.___m_Top_2 = 0.0;
        local_60.___m_Bottom_3 = 0.0;
        fVar12 = local_60.___m_Left_0;
      }
    }
    else if (iVar9 < iVar10 * 2) {
      param_1->___pitcher_17 = param_1->___pitcher_17 + 1;
      fVar12 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      fVar11 = __real_3f0ccccd;
      if (fVar12 < __real_3f000000) {
        if (local_38 == __real_3f0ccccd) goto LAB_104fb012;
        fVar12 = __real_3f0ccccd;
        if ((local_50.___r_0 != __real_3f0ccccd) &&
           (fVar12 = local_60.___m_Left_0, local_60.___m_Left_0 == __real_3f0ccccd))
        goto LAB_104fb03c;
      }
      else {
        fVar12 = __real_3f0ccccd;
        if (local_38 != __real_3f0ccccd) {
          if (local_50.___r_0 == __real_3f0ccccd) goto LAB_104fb03c;
          fVar12 = local_60.___m_Left_0;
          if (local_60.___m_Left_0 == __real_3f0ccccd) goto LAB_104fb012;
        }
      }
    }
    else {
      iVar10 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                         (0,3,(MethodInfo *)0x0);
      fVar12 = local_38;
      if ((iVar10 != 0) && (fVar12 = local_50.___r_0, iVar10 != 1)) {
        fVar12 = local_60.___m_Left_0;
      }
      iVar9 = param_1->___pitcher_17;
      if (((fVar12 == __real_3f0ccccd) && (2 < iVar9)) || (0x19 < iVar9)) {
        iVar9 = iVar9 + -3;
        fVar11 = __real_3e19999a;
      }
      else {
        iVar9 = iVar9 + 3;
        fVar11 = __real_3f0ccccd;
      }
      param_1->___pitcher_17 = iVar9;
      if (iVar10 == 0) {
LAB_104fb03c:
        fVar12 = local_60.___m_Left_0;
        local_38 = fVar11;
      }
      else {
        fVar12 = fVar11;
        if (iVar10 == 1) {
LAB_104fb012:
          fVar12 = local_60.___m_Left_0;
          local_50.___r_0 = fVar11;
        }
      }
    }
    local_60.___m_Left_0 = fVar12;
    local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)param_1->___audioJuiceSource_8;
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
LAB_104fb541:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    local_20 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)
               ((float)param_1->___pitcher_17 * __real_3d4ccccd + __real_3e99999a);
    AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
              (param_1->___audioSource_7,(float)local_20,(MethodInfo *)0x0);
    if (local_1c == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) goto LAB_104fb541;
    AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
              ((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)local_1c,(float)local_20,
               (MethodInfo *)0x0);
    local_20 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)param_1->___audioJuiceSource_8;
    fVar12 = (float)(int)local_18 / ((float)local_14 - __real_3f800000);
    local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)
               ((fVar12 + fVar12) - __real_3f800000);
    if ((param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
       || (AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
                     (param_1->___audioSource_7,(float)local_1c,(MethodInfo *)0x0),
          local_20 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0)) goto LAB_104fb541;
    AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
              ((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)local_20,(float)local_1c,
               (MethodInfo *)0x0);
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
              (param_1->___audioSource_7,
               __real_3f800000 - (float)(param_1->___pitcher_17 + -1) * __real_3c23d70a,
               (MethodInfo *)0x0);
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___audioSource_7,(MethodInfo *)0x0);
    if (param_1->___audioJuiceSource_8 ==
        (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) goto LAB_104fb541;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___audioJuiceSource_8,(MethodInfo *)0x0);
    fStack_34 = local_50.___r_0;
    fStack_30 = local_60.___m_Left_0;
    fStack_2c = fVar14;
    if (param_1->___targetColors_10 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0)
    goto LAB_104fb541;
    KVar4.___key_0.___dateData_44._4_4_ = local_50.___r_0;
    KVar4.___key_0.___dateData_44._0_4_ = local_38;
    KVar4.___value_1 = (Il2CppObject *)local_60.___m_Left_0;
    KVar4._12_4_ = fVar14;
    List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___targetColors_10,
               local_18,KVar4,
               List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var);
    iVar10 = local_14;
    if ((param_1->___state_16 == 1) &&
       ((param_1->___first_13 == false || (local_14 * 2 <= param_1->___counter_11)))) {
      param_1->___state_16 = 2;
    }
    break;
  case 2:
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
              (param_1->___audioSource_7,0.5,(MethodInfo *)0x0);
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___audioSource_7,(MethodInfo *)0x0);
    iVar10 = 0;
    if (0 < local_14) {
      do {
        local_20 = param_1->___targetColors_10;
        local_60.___m_Left_0 = 0.0;
        local_60.___m_Right_1 = 0.0;
        local_60.___m_Top_2 = 0.0;
        local_60.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_60,0.6,0.6,0.6,1.0,(MethodInfo *)0x0);
        if (local_20 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) goto LAB_104fb541;
        KVar5.___key_0.___dateData_44._4_4_ = local_60.___m_Right_1;
        KVar5.___key_0.___dateData_44._0_4_ = local_60.___m_Left_0;
        KVar5.___value_1 = (Il2CppObject *)local_60.___m_Top_2;
        KVar5._12_4_ = local_60.___m_Bottom_3;
        List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_20,iVar10,KVar5,
                   List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var);
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_14);
    }
    fVar14 = __real_40c00000;
    fVar12 = param_1->___timer_12 - __real_40c00000;
    param_1->___timer_12 = fVar12;
    iVar10 = local_14;
    if (param_1->___first_13 != false) {
      param_1->___first_13 = false;
      param_1->___timer_12 = fVar12 - fVar14;
    }
    goto LAB_104fb432;
  case 3:
    iVar9 = 8;
    local_20 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)param_1->___audioJuiceSource_8;
    if (10 < param_1->___pitcher_17) {
      iVar9 = -8;
    }
    iVar9 = iVar9 + param_1->___pitcher_17;
    param_1->___pitcher_17 = iVar9;
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)
               ((float)iVar9 * __real_3d4ccccd + __real_3e99999a);
    AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
              (param_1->___audioSource_7,(float)local_1c,(MethodInfo *)0x0);
    if (local_20 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) goto LAB_104fb541;
    AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
              ((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)local_20,(float)local_1c,
               (MethodInfo *)0x0);
    local_20 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)param_1->___audioJuiceSource_8;
    if ((param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
       || (AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
                     (param_1->___audioSource_7,0.5,(MethodInfo *)0x0),
          local_20 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0)) goto LAB_104fb541;
    AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
              ((AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)local_20,0.5,
               (MethodInfo *)0x0);
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
              (param_1->___audioSource_7,
               __real_3f800000 - (float)(param_1->___pitcher_17 + -1) * __real_3c23d70a,
               (MethodInfo *)0x0);
    if (param_1->___audioSource_7 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_104fb541;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___audioSource_7,(MethodInfo *)0x0);
    if (param_1->___audioJuiceSource_8 ==
        (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) goto LAB_104fb541;
    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
              (param_1->___audioJuiceSource_8,(MethodInfo *)0x0);
    if (param_1->___openState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104fb541;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
LAB_104fb432:
    param_1->___state_16 = param_1->___state_16 + 1;
  }
  param_1->___counter_11 = param_1->___counter_11 + 1;
LAB_104fb438:
  local_1c = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0;
  if (0 < iVar10) {
    local_18 = 0;
    do {
      if (param_1->___logoContainer_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
      goto LAB_104fb541;
      local_28 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)((int)&local_1c->_padding_ + 1)
      ;
      pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___logoContainer_6,(int)local_28,(MethodInfo *)0x0);
      if ((pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pIVar7 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                              Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var
                             ), pIVar7 == (Il2CppObject *)0x0)) goto LAB_104fb541;
      pIVar1 = (pIVar7->field0_0x0).klass;
      uVar2._0_2_ = pIVar1[1].interfaces_count;
      uVar2._2_2_ = pIVar1[1].interface_offsets_count;
      pCVar8 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
               (**(code **)&pIVar1[1].nested_type_count)(&local_60,pIVar7,uVar2);
      local_20 = param_1->___targetColors_10;
      if (local_20 == (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)0x0) goto LAB_104fb541;
      if ((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)local_20->____size_2 <= local_1c) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pCVar8 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
                         (&local_50,
                          *(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
                           ((int)&local_20->____items_1->m_Items[0].___r_0 + local_18),*pCVar8,
                          local_24,(MethodInfo *)0x0);
      pIVar1 = (pIVar7->field0_0x0).klass;
      uVar3._0_1_ = pIVar1[1].naturalAligment;
      uVar3._1_1_ = pIVar1[1].packingSize;
      uVar3._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
      (**(code **)&pIVar1[1].typeHierarchyDepth)
                (pIVar7,pCVar8->___r_0,pCVar8->___g_1,pCVar8->___b_2,pCVar8->___a_3,uVar3);
      local_1c = local_28;
      local_18 = local_18 + 0x10;
    } while ((int)local_28 < local_14);
  }
  return;
}
