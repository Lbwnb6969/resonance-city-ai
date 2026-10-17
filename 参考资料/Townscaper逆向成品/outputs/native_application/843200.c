// RVA 0x843200 | Placemaker.Ui.GenericMenuNavigator$$UpdateScroll
// PDB: GenericMenuNavigator_UpdateScroll_m1A9865B43A1AE63AD23D09ECC77FA8EC59131A9E
// Body: [[10843200, 1084357e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662c90 Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
GenericMenuNavigator_UpdateScroll_m1A9865B43A1AE63AD23D09ECC77FA8EC59131A9E
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *pNVar3;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  int iVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar11;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  float fVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_d4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_94;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_54;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_44;
  float local_34;
  undefined8 uStack_30;
  float fStack_28;
  float local_24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_20;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;

  if (DAT_1151f448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151f448 = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___navigableButtons_7 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    iVar8 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                       param_1->___navigableButtons_7,(Il2CppObject *)param_1->___selectedButton_8,
                       List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    if ((param_1->___navigableButtons_7 != (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0)
       && (param_1->___scrollRect_6 !=
           (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)) {
      (param_1->___scrollRect_6->___normPosTarget_8).___y_1 =
           __real_3f800000 -
           (float)iVar8 / ((float)param_1->___navigableButtons_7->____size_2 - __real_3f800000);
      pNVar3 = param_1->___selectedButton_8;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar3,
                         (MethodInfo *)0x0);
      if (!bVar7) {
        return;
      }
      if (param_1->___selectorTransform_11 !=
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pTVar9 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                           (param_1->___selectorTransform_11,(MethodInfo *)0x0);
        if ((param_1->___selectedButton_8 !=
             (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) &&
           (pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___selectedButton_8,(MethodInfo *)0x0),
           pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          iVar8 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pTVar10,(MethodInfo *)0x0);
          pNVar3 = param_1->___selectedButton_8;
          if (iVar8 == 0) {
            if (pNVar3 == (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0)
            goto LAB_1084357a;
            pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pNVar3,
                                 (MethodInfo *)0x0);
          }
          else {
            if ((pNVar3 == (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) ||
               (pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pNVar3,
                                     (MethodInfo *)0x0),
               pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_1084357a;
            pTVar10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (pTVar10,0,(MethodInfo *)0x0);
          }
          pTVar14 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
          if ((pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
             (*(Il2CppClass **)pTVar10 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
            pTVar14 = pTVar10;
          }
          if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pMVar11 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                                (&local_d4,pTVar9,(MethodInfo *)0x0);
            local_24 = pMVar11->___m00_0;
            VStack_20.___x_2 = pMVar11->___m10_1;
            VStack_20.___y_3 = pMVar11->___m20_2;
            VStack_20.___z_4 = pMVar11->___m30_3;
            local_34 = pMVar11->___m01_4;
            uStack_30._0_4_ = pMVar11->___m11_5;
            uStack_30._4_4_ = pMVar11->___m21_6;
            fStack_28 = pMVar11->___m31_7;
            local_14 = pMVar11->___m02_8;
            fStack_10 = pMVar11->___m12_9;
            fStack_c = pMVar11->___m22_10;
            fStack_8 = pMVar11->___m32_11;
            local_44.___m_XMin_0 = pMVar11->___m03_12;
            local_44.___m_YMin_1 = pMVar11->___m13_13;
            local_44.___m_Width_2 = pMVar11->___m23_14;
            local_44.___m_Height_3 = pMVar11->___m33_15;
            if (pTVar14 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pMVar11 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                                  (&local_d4,pTVar14,(MethodInfo *)0x0);
              MVar4.___m10_1 = VStack_20.___x_2;
              MVar4.___m00_0 = local_24;
              MVar4.___m20_2 = VStack_20.___y_3;
              MVar4.___m30_3 = VStack_20.___z_4;
              MVar4.___m01_4 = local_34;
              MVar4.___m11_5 = (float)uStack_30;
              MVar4.___m21_6 = uStack_30._4_4_;
              MVar4.___m31_7 = fStack_28;
              MVar4.___m02_8 = local_14;
              MVar4.___m12_9 = fStack_10;
              MVar4.___m22_10 = fStack_c;
              MVar4.___m32_11 = fStack_8;
              MVar4.___m03_12 = local_44.___m_XMin_0;
              MVar4.___m13_13 = local_44.___m_YMin_1;
              MVar4.___m23_14 = local_44.___m_Width_2;
              MVar4.___m33_15 = local_44.___m_Height_3;
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
                                  (&local_44,
                                   (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                   pTVar14,(MethodInfo *)0x0);
              local_54.___m_XMin_0 = pRVar12->___m_XMin_0;
              local_54.___m_YMin_1 = pRVar12->___m_YMin_1;
              local_54.___m_Width_2 = pRVar12->___m_Width_2;
              local_54.___m_Height_3 = pRVar12->___m_Height_3;
              VVar15 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
                                 (&local_54,(MethodInfo *)0x0);
              fVar16 = fStack_c;
              fStack_c = VVar15.___x_0;
              fStack_8 = VVar15.___y_1;
              VStack_20.___z_4 = 0.0;
              VVar5.___y_3 = fStack_8;
              VVar5.___x_2 = fVar16;
              VVar5.___z_4 = 0.0;
              pVVar13 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                  (&VStack_20,&local_94,VVar5,(MethodInfo *)0x0);
              uStack_30._0_4_ = pVVar13->___x_2;
              uStack_30._4_4_ = pVVar13->___y_3;
              fStack_28 = pVVar13->___z_4;
              if (param_1->___selectorTransform_11 !=
                  (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar13 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                    (&VStack_20,param_1->___selectorTransform_11,(MethodInfo *)0x0);
                uVar1 = pVVar13->___x_2;
                uVar2 = pVVar13->___y_3;
                fStack_8 = pVVar13->___z_4;
                fStack_10 = (float)uVar1;
                fStack_c = (float)uVar2;
                fVar16 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                   (*(float *)((int)
                                                  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                                  ->static_fields + 0xc),(MethodInfo *)0x0);
                VStack_20.___x_2 = (fStack_10 - (float)uStack_30) * fVar16 + (float)uStack_30;
                VStack_20.___y_3 = (fStack_c - uStack_30._4_4_) * fVar16 + uStack_30._4_4_;
                VStack_20.___z_4 = (fStack_8 - fStack_28) * fVar16 + fStack_28;
                if (param_1->___selectorTransform_11 !=
                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar6.___y_3 = VStack_20.___y_3;
                  VVar6.___x_2 = VStack_20.___x_2;
                  VVar6.___z_4 = VStack_20.___z_4;
                  Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                            (param_1->___selectorTransform_11,VVar6,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1084357a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
