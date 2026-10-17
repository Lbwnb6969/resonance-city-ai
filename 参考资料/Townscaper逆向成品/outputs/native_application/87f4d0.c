// RVA 0x87f4d0 | Placemaker.Life.BirdFlock$$UprootBird
// PDB: BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
// Body: [[1087f4d0, 1087f8b8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d3290 ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// 10660420 Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1087efe0 BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958

void __cdecl
BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,float param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar7;
  ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *pMVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  undefined4 uStack_64;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  if (param_2 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
    if (param_2->___stateNext_18 == '\x03') {
      pBVar7 = param_2->___landing_20;
      if (pBVar7 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087f8b4;
      local_34._0_4_ = (pBVar7->___normal_6).___x_2;
      local_34._4_4_ = (pBVar7->___normal_6).___y_3;
      local_2c = (pBVar7->___normal_6).___z_4;
      local_18 = param_2->___time_15;
      local_14 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      local_18 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                           (local_18,local_18 + __real_3e99999a,local_14,(MethodInfo *)0x0);
      pVVar9 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
                         (&local_70,(MethodInfo *)0x0);
      uVar1 = pVVar9->___x_2;
      uVar4 = pVVar9->___y_3;
      fVar12 = (pVVar9->___z_4 * __real_3f000000 + local_2c) * param_3;
      fVar13 = ((float)uVar1 * __real_3f000000 + (float)local_34) * param_3;
      fVar11 = ((float)uVar4 * __real_3f000000 + local_34._4_4_) * param_3;
      local_70.___x_2 = fVar13 * __real_3f000000;
      local_1c = fVar11 * __real_3f000000;
      local_24 = fVar12 * __real_3f000000;
      (param_2->___velocityNext_13).___x_2 = fVar13;
      (param_2->___velocityNext_13).___y_3 = fVar11;
      (param_2->___velocityPrev_12).___x_2 = fVar13;
      (param_2->___velocityPrev_12).___y_3 = fVar11;
      (param_2->___velocityNext_13).___z_4 = fVar12;
      (param_2->___velocityPrev_12).___z_4 = fVar12;
      local_70.___y_3 = 0.0;
      local_70.___z_4 = 0.0;
      uStack_64 = 0;
      uVar2 = (param_2->___pos_14).___x_2;
      uVar5 = (param_2->___pos_14).___y_3;
      local_50 = (param_2->___pos_14).___z_4;
      local_14 = (float)uVar2 - local_70.___x_2;
      local_20 = (float)uVar5 - local_1c;
      local_28 = local_50 - local_24;
      local_58._0_4_ = (param_2->___pos_14).___x_2;
      local_58._4_4_ = (param_2->___pos_14).___y_3;
      local_40._0_4_ = (param_2->___pos_14).___x_2;
      local_40._4_4_ = (param_2->___pos_14).___y_3;
      local_4c = local_58;
      local_38 = local_50;
      local_18 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           (__real_3f800000 - local_18,(MethodInfo *)0x0);
      local_50 = ((local_24 + local_38) - local_28) * local_18 + local_28;
      (param_2->___posMid_11).___x_2 =
           ((local_70.___x_2 + (float)local_58) - local_14) * local_18 + local_14;
      (param_2->___posMid_11).___y_3 =
           ((local_4c._4_4_ + local_1c) - local_20) * local_18 + local_20;
      (param_2->___posMid_11).___z_4 = local_50;
    }
    BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
              (param_1,param_2,(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0,
               (MethodInfo *)0x0);
    if (DAT_1151f5c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
      DAT_1151f5c3 = '\x01';
    }
    param_2->___stateNext_18 = '\0';
    local_24 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    local_28 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    param_2->___lastActionTime_19 = local_28 + local_24;
    if (param_2->___mf1_7 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (param_2->___mf1_7,param_1->___flapMesh_9,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pMVar8 = param_1->___master_4->___manySoundsManager_32,
         pMVar8 != (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0)) {
        ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
                  (pMVar8,8,param_2->___pos_14,0.0,1.0,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pMVar8 = param_1->___master_4->___manySoundsManager_32,
              pMVar8 != (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0)) {
          ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
                    (pMVar8,9,param_2->___pos_14,0.0,1.0,(MethodInfo *)0x0);
          if (param_1->___takeOffCount_27 == 0) {
            local_34._0_4_ = (param_1->___takeOffPos_28).___x_2;
            local_34._4_4_ = (param_1->___takeOffPos_28).___y_3;
            local_2c = (param_1->___takeOffPos_28).___z_4;
            pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                 (MethodInfo *)0x0);
            if (pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_1087f8b4;
            pVVar9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                               (&local_70,pTVar10,(MethodInfo *)0x0);
            uVar3 = pVVar9->___x_2;
            uVar6 = pVVar9->___y_3;
            fVar11 = pVVar9->___z_4;
            param_1->___takeOffCount_27 = param_1->___takeOffCount_27 + 1;
            (param_1->___takeOffPos_28).___x_2 = (float)local_34 + (float)uVar3;
            (param_1->___takeOffPos_28).___y_3 = local_34._4_4_ + (float)uVar6;
            (param_1->___takeOffPos_28).___z_4 = local_2c + fVar11;
          }
          return;
        }
      }
    }
  }
LAB_1087f8b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
