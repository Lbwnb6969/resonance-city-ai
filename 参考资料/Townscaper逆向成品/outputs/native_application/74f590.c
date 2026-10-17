// RVA 0x74f590 | Placemaker.Ui.PaletteMenu$$Update
// PDB: PaletteMenu_Update_mD25F822128D9A8A9BD88297FFD0CADAE9074A8E6
// Body: [[1074f590, 1074f871] [1074f880, 1074faf5] [1074faff, 1074fb3c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066efb0 Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 1074e6c0 PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
// 1074f430 PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PaletteMenu_Update_mD25F822128D9A8A9BD88297FFD0CADAE9074A8E6
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,MethodInfo *param_2)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  float local_30;
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  int local_8;

  if (DAT_1151ebe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAF30185BDC4E1A6471192007DCBA7E2AA1D1AC20_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151ebe5 = '\x01';
  }
  if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_1074fb38;
  pDVar1 = param_1->___master_4->___dim_10;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pDVar1,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pDVar1 = param_1->___master_4->___dim_10,
      pDVar1 == (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) ||
     (pUVar2 = pDVar1->___alphaState_5,
     pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_1074fb38;
  if (pUVar2->____target_1 == __real_3f800000) {
    return;
  }
  fVar13 = (param_1->___p0_17).___x_0;
  local_1c = (param_1->___p0_17).___y_1;
  if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t0_10 ==
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
     (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t0_10,
                          (MethodInfo *)0x0),
     pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1074fb38;
  pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                     (&local_50,pTVar8,(MethodInfo *)0x0);
  local_44._0_4_ = pVVar9->___x_2;
  local_44._4_4_ = pVVar9->___y_3;
  local_3c = pVVar9->___z_4;
  fVar13 = fVar13 - (float)(undefined4)local_44;
  local_38 = local_44;
  local_30 = local_3c;
  if (__real_2edbe6fe <=
      (local_1c - (float)local_44._4_4_) * (local_1c - (float)local_44._4_4_) + fVar13 * fVar13) {
LAB_1074f767:
    local_44 = local_38;
    local_3c = local_30;
    PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5(param_1,(MethodInfo *)0x0);
    PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
              (param_1,(MethodInfo *)0x0);
  }
  else {
    fVar13 = (param_1->___p1_18).___x_0;
    local_1c = (param_1->___p1_18).___y_1;
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t1_11 ==
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t1_11
                            ,(MethodInfo *)0x0),
       pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1074fb38;
    pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_50,pTVar8,(MethodInfo *)0x0);
    local_44._0_4_ = pVVar9->___x_2;
    local_44._4_4_ = pVVar9->___y_3;
    local_3c = pVVar9->___z_4;
    fVar13 = fVar13 - (float)(undefined4)local_44;
    local_38 = local_44;
    local_30 = local_3c;
    if (__real_2edbe6fe <=
        (local_1c - (float)local_44._4_4_) * (local_1c - (float)local_44._4_4_) + fVar13 * fVar13)
    goto LAB_1074f767;
  }
  if (param_1->___updating_25 != false) {
    fVar13 = 0.0;
    if (param_1->___snap_26 == false) {
      fVar13 = *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                               ->static_fields + 0xc);
    }
    fVar14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (param_1->___targetScroll_8,param_1->___currentScroll_9,fVar13,
                        (MethodInfo *)0x0);
    fVar13 = __real_3dcccccd;
    param_1->___currentScroll_9 = fVar14;
    param_1->___snap_26 = false;
    if ((float)((uint)(fVar14 - param_1->___targetScroll_8) & __xmm_7fffffff7fffffff7fffffff7fffffff
               ) < fVar13) {
      param_1->___currentScroll_9 = param_1->___targetScroll_8;
      param_1->___updating_25 = false;
    }
    local_20 = param_1->___dist_20;
    local_1c = (float)((uint)local_20 ^ __xmm_80000000800000008000000080000000);
    local_28 = (local_20 + local_1c) * __real_3f000000;
    if (param_1->___palettePickers_7 == (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
LAB_1074fb38:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    local_2c = (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)
               param_1->___palettePickers_7->____size_2;
    uVar11 = 0;
    local_c = 0xffffffff;
    if (0 < (int)local_2c) {
      local_8 = 0x10;
      do {
        pLVar3 = param_1->___palettePickers_7;
        if (pLVar3 == (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) goto LAB_1074fb38;
        if ((uint)pLVar3->____size_2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                  (pLVar3->____items_1 + local_8);
        local_14 = (float)(int)uVar11 * param_1->___pickerSize_21 - param_1->___currentScroll_9;
        local_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                             (local_14,local_1c,local_20,(MethodInfo *)0x0);
        local_18 = (local_14 - local_10) * param_1->___invLossyScale_23;
        local_24 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(local_18,(MethodInfo *)0x0);
        local_18 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                             (__real_3f800000 -
                              (float)((uint)local_18 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                              ___real_3bda740e,(MethodInfo *)0x0);
        local_18 = local_18 * local_18;
        local_24 = (__real_3f800000 - local_18) * __real_43160000 * local_24 * __real_3dcccccd *
                   param_1->___lossyScale_22 + local_10;
        if (local_14 < local_28) {
          if ((pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
             (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 (pCVar4,(MethodInfo *)0x0),
             pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_1074fb38;
          Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                    (pTVar8,uVar11,(MethodInfo *)0x0);
          local_c = uVar11;
        }
        if (pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1074fb38;
        pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           (pCVar4,(MethodInfo *)0x0);
        fVar13 = param_1->___dist_20 + local_24;
        fVar14 = (param_1->___p0_17).___x_0 + fVar13 * (param_1->___dir_19).___x_0;
        fVar13 = (param_1->___p0_17).___y_1 + fVar13 * (param_1->___dir_19).___y_1;
        local_38 = CONCAT44(fVar13,fVar14);
        local_30 = 0.0;
        if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1074fb38;
        VVar5.___y_3 = fVar13;
        VVar5.___x_2 = fVar14;
        VVar5.___z_4 = 0.0;
        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                  (pTVar8,VVar5,(MethodInfo *)0x0);
        local_24 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                             (0.8,1.0,local_18,(MethodInfo *)0x0);
        local_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                             (0.8,1.0,local_18,(MethodInfo *)0x0);
        pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           (pCVar4,(MethodInfo *)0x0);
        local_44 = CONCAT44(local_24,local_24);
        local_3c = local_18;
        if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1074fb38;
        VVar6.___y_3 = local_24;
        VVar6.___x_2 = local_24;
        VVar6.___z_4 = local_18;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar8,VVar6,(MethodInfo *)0x0);
        uVar11 = uVar11 + 1;
        local_8 = local_8 + 4;
      } while ((int)uVar11 < (int)local_2c);
    }
    puVar12 = (undefined1 *)((int)&local_2c[-1].____syncRoot_4 + 3);
    if ((int)local_c < (int)puVar12) {
      iVar10 = (int)puVar12 * 4 + 0x10;
      do {
        local_2c = param_1->___palettePickers_7;
        if (local_2c == (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) goto LAB_1074fb38;
        if ((undefined1 *)local_2c->____size_2 <= puVar12) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
              (local_2c->____items_1 + iVar10) ==
             (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
           (pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                 (local_2c->____items_1 + iVar10),(MethodInfo *)0x0),
           pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1074fb38;
        Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187
                  (pTVar8,(MethodInfo *)0x0);
        puVar12 = puVar12 + -1;
        iVar10 = iVar10 + -4;
      } while ((int)local_c < (int)puVar12);
    }
  }
  return;
}
