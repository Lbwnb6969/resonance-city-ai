// RVA 0x757eb0 | Placemaker.Props.PropMeshReference$$Update
// PDB: PropMeshReference_Update_m0A25B51D1435AA32D74C114F63EE76B20EC0A41C
// Body: [[10757eb0, 10757f66] [10757f6a, 10758175]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f8c0 Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f7a0 Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 107568c0 PropMeshAnimator_OnDone_mA5E995429D8B50040CBB2917552DD5B78DDC2697
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PropMeshReference_Update_m0A25B51D1435AA32D74C114F63EE76B20EC0A41C
          (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *param_1,MethodInfo *param_2)

{
  float fVar1;
  PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *pPVar2;
  List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *pLVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *pPVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar11;
  uint uVar12;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_c0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_b0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_90;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_84;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_78;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_54;
  float local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  undefined8 local_2c;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  float local_8;

  pPVar8 = param_1;
  if (DAT_1151ec32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF39A77403BBF8E0E7ACC6D7E961BD5BFF9318D79_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m56ACEB16EA36A08BAEE3A72FDEC0CFB35DBECBCE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151ec32 = '\x01';
  }
  local_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  if (local_8 < param_1->___time_6) {
    if (param_1->___items_4 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
      uVar12 = param_1->___items_4->____size_2 - 1;
      if ((int)uVar12 < 0) {
        return;
      }
      param_1 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)(uVar12 * 4 + 0x10);
      while (pLVar3 = pPVar8->___items_4,
            pLVar3 != (List_1_t50D95A50AAF957E0226D6EBB9C69FFD83FE727A8 *)0x0) {
        if ((uint)pLVar3->____size_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if ((((*(int *)(pLVar3->____items_1 + (int)&param_1->_padding_) == 0) ||
             (pCVar4 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                        (*(int *)(pLVar3->____items_1 + (int)&param_1->_padding_) + 8),
             pCVar4 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
            (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                (pCVar4,(MethodInfo *)0x0),
            pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                               (pTVar9,0,(MethodInfo *)0x0),
           pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
        pVVar10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                            (&local_78,pTVar9,(MethodInfo *)0x0);
        local_38._0_4_ = pVVar10->___x_2;
        local_38._4_4_ = pVVar10->___y_3;
        local_3c = pVVar10->___z_4;
        fVar1 = *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                ->static_fields + 0x10);
        local_44._0_4_ = pVVar10->___x_2;
        local_44._4_4_ = pVVar10->___y_3;
        local_48 = local_3c * fVar1;
        VVar6.___y_3 = (float)local_38._4_4_ * fVar1;
        VVar6.___x_2 = (float)(undefined4)local_38 * fVar1;
        VVar6.___z_4 = local_48;
        local_2c = local_38;
        Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                  (pTVar9,VVar6,(MethodInfo *)0x0);
        pQVar11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                            (&local_a0,(MethodInfo *)0x0);
        local_6c = pQVar11->___x_0;
        fStack_68 = pQVar11->___y_1;
        fStack_64 = pQVar11->___z_2;
        fStack_60 = pQVar11->___w_3;
        pQVar11 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
                            (&local_b0,pTVar9,(MethodInfo *)0x0);
        QVar5.___y_1 = fStack_68;
        QVar5.___x_0 = local_6c;
        QVar5.___z_2 = fStack_64;
        QVar5.___w_3 = fStack_60;
        pQVar11 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                            (&local_c0,QVar5,*pQVar11,
                             *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                             ->static_fields + 0xc),(MethodInfo *)0x0);
        Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
                  (pTVar9,*pQVar11,(MethodInfo *)0x0);
        pVVar10 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            (&local_84,(MethodInfo *)0x0);
        local_20._0_4_ = pVVar10->___x_2;
        local_20._4_4_ = pVVar10->___y_3;
        local_18 = pVVar10->___z_4;
        pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                            (&local_90,pTVar9,(MethodInfo *)0x0);
        local_14._0_4_ = pVVar10->___x_2;
        local_14._4_4_ = pVVar10->___y_3;
        local_c = pVVar10->___z_4;
        local_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                            (*(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                             ->static_fields + 0xc),(MethodInfo *)0x0);
        local_54 = (local_c - local_18) * local_8 + local_18;
        VVar7.___y_3 = (local_14._4_4_ - local_20._4_4_) * local_8 + local_20._4_4_;
        VVar7.___x_2 = ((float)local_14 - (float)local_20) * local_8 + (float)local_20;
        VVar7.___z_4 = local_54;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar9,VVar7,(MethodInfo *)0x0);
        param_1 = (PropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69 *)
                  &param_1[-1].___time_6;
        uVar12 = uVar12 - 1;
        if ((int)uVar12 < 0) {
          return;
        }
      }
    }
  }
  else if ((param_1->___worldMaster_5 !=
            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pPVar2 = param_1->___worldMaster_5->___propMeshAnimator_28,
          pPVar2 != (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *)0x0)) {
    PropMeshAnimator_OnDone_mA5E995429D8B50040CBB2917552DD5B78DDC2697
              (pPVar2,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
