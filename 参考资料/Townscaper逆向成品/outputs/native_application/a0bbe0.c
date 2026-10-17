// RVA 0xa0bbe0 | Placemaker.Ui.SideMenuNavigator$$SetTargetsToButton
// PDB: SideMenuNavigator_SetTargetsToButton_m5C834A93C291FA2044EF011191E607C54900A53F
// Body: [[10a0bbe0, 10a0be2a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662c90 Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

void __cdecl
SideMenuNavigator_SetTargetsToButton_m5C834A93C291FA2044EF011191E607C54900A53F
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,
          NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  float fVar6;
  bool bVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  int iVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar11;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_d4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_94;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_54;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_34;
  float local_24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_20;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;

  if (DAT_115201f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_115201f1 = '\x01';
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if ((((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___selectorTransform_6 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
      (pTVar8 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                          ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                           param_1->___selectorTransform_6,(MethodInfo *)0x0),
      param_2 != (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0)) &&
     (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0),
     pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    iVar10 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                       (pTVar9,(MethodInfo *)0x0);
    if (iVar10 == 0) {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
    }
    else {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a0be26;
      pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (pTVar9,0,(MethodInfo *)0x0);
    }
    pTVar14 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
    if ((pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar9 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pTVar14 = pTVar9;
    }
    if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pMVar11 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                          (&local_d4,pTVar8,(MethodInfo *)0x0);
      local_24 = pMVar11->___m00_0;
      VStack_20.___x_2 = pMVar11->___m10_1;
      VStack_20.___y_3 = pMVar11->___m20_2;
      VStack_20.___z_4 = pMVar11->___m30_3;
      local_14 = pMVar11->___m01_4;
      fStack_10 = pMVar11->___m11_5;
      fStack_c = pMVar11->___m21_6;
      fStack_8 = pMVar11->___m31_7;
      local_44 = pMVar11->___m02_8;
      fStack_40 = pMVar11->___m12_9;
      fStack_3c = pMVar11->___m22_10;
      fStack_38 = pMVar11->___m32_11;
      local_34.___m_XMin_0 = pMVar11->___m03_12;
      local_34.___m_YMin_1 = pMVar11->___m13_13;
      local_34.___m_Width_2 = pMVar11->___m23_14;
      local_34.___m_Height_3 = pMVar11->___m33_15;
      if (pTVar14 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pMVar11 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                            (&local_d4,pTVar14,(MethodInfo *)0x0);
        MVar4.___m10_1 = VStack_20.___x_2;
        MVar4.___m00_0 = local_24;
        MVar4.___m20_2 = VStack_20.___y_3;
        MVar4.___m30_3 = VStack_20.___z_4;
        MVar4.___m01_4 = local_14;
        MVar4.___m11_5 = fStack_10;
        MVar4.___m21_6 = fStack_c;
        MVar4.___m31_7 = fStack_8;
        MVar4.___m02_8 = local_44;
        MVar4.___m12_9 = fStack_40;
        MVar4.___m22_10 = fStack_3c;
        MVar4.___m32_11 = fStack_38;
        MVar4.___m03_12 = local_34.___m_XMin_0;
        MVar4.___m13_13 = local_34.___m_YMin_1;
        MVar4.___m23_14 = local_34.___m_Width_2;
        MVar4.___m33_15 = local_34.___m_Height_3;
        pMVar11 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                            (&local_d4,MVar4,*pMVar11,(MethodInfo *)0x0);
        local_94.___m00_0 = pMVar11->___m00_0;
        local_94.___m10_1 = pMVar11->___m10_1;
        local_94.___m20_2 = pMVar11->___m20_2;
        local_94.___m30_3 = pMVar11->___m30_3;
        local_94.___m01_4 = pMVar11->___m01_4;
        local_94.___m11_5 = pMVar11->___m11_5;
        local_94.___m21_6 = pMVar11->___m21_6;
        local_94.___m31_7 = pMVar11->___m31_7;
        local_94.___m02_8 = pMVar11->___m02_8;
        local_94.___m12_9 = pMVar11->___m12_9;
        local_94.___m22_10 = pMVar11->___m22_10;
        local_94.___m32_11 = pMVar11->___m32_11;
        local_94.___m03_12 = pMVar11->___m03_12;
        local_94.___m13_13 = pMVar11->___m13_13;
        local_94.___m23_14 = pMVar11->___m23_14;
        local_94.___m33_15 = pMVar11->___m33_15;
        pRVar12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                            (&local_34,
                             (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar14,
                             (MethodInfo *)0x0);
        pUVar3 = param_1->___targetArrowY_8;
        local_54.___m_XMin_0 = pRVar12->___m_XMin_0;
        local_54.___m_YMin_1 = pRVar12->___m_YMin_1;
        local_54.___m_Width_2 = pRVar12->___m_Width_2;
        local_54.___m_Height_3 = pRVar12->___m_Height_3;
        VVar15 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
                           (&local_54,(MethodInfo *)0x0);
        fVar6 = fStack_8;
        fStack_c = VVar15.___x_0;
        fStack_8 = 0.0;
        VVar5.___y_3 = fVar6;
        VVar5.___x_2 = fStack_c;
        VVar5.___z_4 = 0.0;
        pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                            (&VStack_20,&local_94,VVar5,(MethodInfo *)0x0);
        uVar1 = pVVar13->___x_2;
        uVar2 = pVVar13->___y_3;
        fStack_10 = (float)uVar1;
        fStack_c = (float)uVar2;
        if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                    (pUVar3,(float)uVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10a0be26:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
