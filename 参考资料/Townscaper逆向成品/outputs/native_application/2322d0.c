// RVA 0x2322d0 | Placemaker.ClickEffect$$ClickBig
// PDB: ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
// Body: [[102322d0, 102328a4]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1022dfd0 Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
// 1022e070 Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
// 10233560 ClickEffect_SetColor_m8675FDFBC4D050B03156CAA18C0E187DF0845826
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10660030 Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11143460 ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
// 111435d0 ShapeModule_set_position_mB8D508F24BBFFE138D64F78A8A70FDB20305C66B
// 11143630 ShapeModule_set_rotation_m5D3ADA2AB7B18F261FFB6A16055140920CA6CBE1
// 11143690 ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158

void __cdecl
ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,schar param_2,
          MethodInfo *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar13;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar16;
  int iVar17;
  float fVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_d0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  undefined4 uStack_94;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_90;
  undefined8 local_80;
  float local_78;
  undefined1 local_70 [12];
  float fStack_64;
  float local_60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5c;
  ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_40;
  float local_3c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  float local_14;

  if (DAT_1151b58c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m216C8B8C4FE3E41DEF9880282F3E87C21A251680_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE0FEBC84392DB02610B7365E95DD39AA73A49E08_RuntimeMethod_var)
    ;
    DAT_1151b58c = '\x01';
  }
  local_50.___m_ParticleSystem_0 = (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0;
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pHVar3 = param_1->___master_4->___hoverData_18,
      pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
     (pLVar16 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pHVar3->___floodVoxels_25,
     local_40 = pLVar16, pLVar16 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)) {
    local_3c = (float)pLVar16->____size_2;
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_60 = 0.0;
    pVVar12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_38,(MethodInfo *)0x0);
    local_5c.___x_2 = pVVar12->___x_2;
    local_5c.___y_3 = pVVar12->___y_3;
    local_5c.___z_4 = pVVar12->___z_4;
    pVVar12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_28,(MethodInfo *)0x0);
    local_38.___x_2 = pVVar12->___x_2;
    local_38.___y_3 = pVVar12->___y_3;
    local_38.___z_4 = pVVar12->___z_4;
    local_14 = 0.0;
    do {
      pQVar13 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                          (&local_d0,0.0,(float)(int)local_14,0.0,(MethodInfo *)0x0);
      iVar17 = 0;
      local_b0 = pQVar13->___x_0;
      fStack_ac = pQVar13->___y_1;
      fStack_a8 = pQVar13->___z_2;
      fStack_a4 = pQVar13->___w_3;
      local_28.___y_3 = 3.4028235e+38;
      local_28.___x_2 = __real_7f7fffff;
      local_28.___z_4 = __real_7f7fffff;
      local_4c.___y_3 = -3.4028235e+38;
      local_4c.___x_2 = __real_ff7fffff;
      local_4c.___z_4 = __real_ff7fffff;
      uVar1._0_4_ = __real_ff7fffff;
      fVar18 = __real_7f7fffff;
      uVar2 = local_28._0_8_;
      if (0 < (int)local_3c) {
        local_70._8_4_ = __real_7f7fffff;
        fStack_64 = 3.4028235e+38;
        do {
          local_70._0_8_ = local_4c._0_8_;
          pGVar14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                              (pLVar16,iVar17,
                               List_1_get_Item_mE0FEBC84392DB02610B7365E95DD39AA73A49E08_RuntimeMethod_var
                              );
          if ((pGVar14 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) ||
             (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar14,
                                   (MethodInfo *)0x0),
             pTVar15 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_102328a0;
          pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_e0,pTVar15,(MethodInfo *)0x0);
          QVar4.___y_1 = fStack_ac;
          QVar4.___x_0 = local_b0;
          QVar4.___z_2 = fStack_a8;
          QVar4.___w_3 = fStack_a4;
          pVVar12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                              (&local_f0,QVar4,*pVVar12,(MethodInfo *)0x0);
          local_80._0_4_ = pVVar12->___x_2;
          local_80._4_4_ = pVVar12->___y_3;
          uVar1._0_4_ = pVVar12->___z_4;
          VVar5.___z_4 = local_28.___z_4;
          VVar5.___x_2 = (float)local_70._8_4_;
          VVar5.___y_3 = fStack_64;
          pVVar12 = Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
                              (&local_a0,VVar5,*pVVar12,(MethodInfo *)0x0);
          local_70._8_4_ = pVVar12->___x_2;
          fStack_64 = pVVar12->___y_3;
          local_28.___z_4 = pVVar12->___z_4;
          VVar6.___z_4 = local_4c.___z_4;
          VVar6.___x_2 = (float)local_70._0_4_;
          VVar6.___y_3 = (float)local_70._4_4_;
          VVar7.___z_4 = (float)uVar1;
          VVar7.___x_2 = (float)(undefined4)local_80;
          VVar7.___y_3 = (float)local_80._4_4_;
          local_28._0_8_ = unique0x0000a400;
          pVVar12 = Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
                              (&local_90,VVar6,VVar7,(MethodInfo *)0x0);
          iVar17 = iVar17 + 1;
          uVar1._0_4_ = pVVar12->___x_2;
          uVar1._4_4_ = pVVar12->___y_3;
          local_4c.___z_4 = pVVar12->___z_4;
          pLVar16 = local_40;
          local_4c._0_8_ = uVar1;
        } while (iVar17 < (int)local_3c);
        fVar18 = local_28.___x_2;
        uVar2 = stack0xffffff98;
        local_70._0_8_ = uVar1;
      }
      if ((local_4c.___z_4 - local_28.___z_4) * ((float)uVar1 - fVar18) < __real_7f7fffff) {
        local_60 = (float)(int)local_14;
        local_5c.___z_4 = local_28.___z_4;
        local_5c._0_8_ = uVar2;
        local_38._0_8_ = local_4c._0_8_;
        local_38.___z_4 = local_4c.___z_4;
      }
      local_14 = (float)((int)local_14 + 0xf);
    } while ((int)local_14 < 0x2d);
    if ((String_t *)param_1->___particle_5 != (String_t *)0x0) {
      local_50.___m_ParticleSystem_0 =
           (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)
           SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                     ((String_t *)param_1->___particle_5,(MethodInfo *)0x0);
      pVVar12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          (&local_90,(MethodInfo *)0x0);
      local_4c.___x_2 = pVVar12->___x_2;
      local_4c.___y_3 = pVVar12->___y_3;
      local_78 = pVVar12->___z_4;
      local_80._0_4_ = pVVar12->___x_2;
      local_80._4_4_ = pVVar12->___y_3;
      local_40 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                 (local_5c.___x_2 - local_4c.___x_2 * __real_3e800000);
      local_14 = local_5c.___y_3 - local_4c.___y_3 * __real_3e800000;
      fStack_64 = local_5c.___z_4 - local_78 * __real_3e800000;
      local_4c.___z_4 = local_78;
      local_28._0_8_ = local_4c._0_8_;
      local_28.___z_4 = local_78;
      pVVar12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          (&local_90,(MethodInfo *)0x0);
      local_5c.___x_2 = pVVar12->___x_2;
      local_5c.___y_3 = pVVar12->___y_3;
      local_4c.___z_4 = pVVar12->___z_4;
      local_4c.___x_2 = pVVar12->___x_2;
      local_4c.___y_3 = pVVar12->___y_3;
      local_a0.___x_2 = local_5c.___x_2 * __real_3e800000 + local_38.___x_2;
      local_a0.___y_3 = 0.0;
      local_a0.___z_4 = 0.0;
      uStack_94 = 0;
      local_3c = local_5c.___y_3 * __real_3e800000 + local_38.___y_3;
      local_70._4_4_ = local_4c.___z_4 * __real_3e800000 + local_38.___z_4;
      local_28._0_8_ = local_5c._0_8_;
      local_28.___z_4 = local_4c.___z_4;
      pQVar13 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                          (&local_d0,0.0,
                           (float)((uint)local_60 ^ __xmm_80000000800000008000000080000000),0.0,
                           (MethodInfo *)0x0);
      local_38.___z_4 = fStack_64 + (float)local_70._4_4_;
      VVar8.___y_3 = local_3c + local_14;
      VVar8.___x_2 = (float)local_40 + local_a0.___x_2;
      VVar8.___z_4 = local_38.___z_4;
      pVVar12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                          (&local_90,*pQVar13,VVar8,(MethodInfo *)0x0);
      local_5c.___x_2 = pVVar12->___x_2;
      local_5c.___y_3 = pVVar12->___y_3;
      local_28.___z_4 = pVVar12->___z_4;
      local_28.___x_2 = pVVar12->___x_2;
      local_28.___y_3 = pVVar12->___y_3;
      local_38.___z_4 = local_28.___z_4 * __real_3f000000;
      VVar9.___y_3 = local_5c.___y_3 * __real_3f000000;
      VVar9.___x_2 = local_5c.___x_2 * __real_3f000000;
      VVar9.___z_4 = local_38.___z_4;
      local_38._0_8_ = local_5c._0_8_;
      ShapeModule_set_position_mB8D508F24BBFFE138D64F78A8A70FDB20305C66B
                (&local_50,VVar9,(MethodInfo *)0x0);
      local_38.___z_4 = (float)local_70._4_4_ - fStack_64;
      VVar10.___y_3 = local_3c - local_14;
      VVar10.___x_2 = local_a0.___x_2 - (float)local_40;
      VVar10.___z_4 = local_38.___z_4;
      ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158
                (&local_50,VVar10,(MethodInfo *)0x0);
      local_38.___z_4 = 0.0;
      VVar11.___y_3 = local_60;
      VVar11.___x_2 = (float)local_c0;
      VVar11.___z_4 = 0.0;
      ShapeModule_set_rotation_m5D3ADA2AB7B18F261FFB6A16055140920CA6CBE1
                (&local_50,VVar11,(MethodInfo *)0x0);
      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___particle_5 !=
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             param_1->___particle_5,(MethodInfo *)0x0);
        pVVar12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            (&local_90,(MethodInfo *)0x0);
        if (pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                    (pTVar15,*pVVar12,(MethodInfo *)0x0);
          ClickEffect_SetColor_m8675FDFBC4D050B03156CAA18C0E187DF0845826
                    (param_1,param_2,(MethodInfo *)0x0);
          if (param_1->___particle_5 !=
              (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0) {
            ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                      (param_1->___particle_5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_102328a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
