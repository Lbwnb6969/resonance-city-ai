// RVA 0x412ec0 | Placemaker.HoverData$$<GamepadAddMove>g__Compare|39_0
// PDB: HoverData_U3CGamepadAddMoveU3Eg__CompareU7C39_0_m69E3628749A77BDB07B532DE9E46393F36E96AAD
// Body: [[10412ec0, 10413166]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1065c2c0 Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3bfa0 Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
// 10e6f930 Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5

void __cdecl
HoverData_U3CGamepadAddMoveU3Eg__CompareU7C39_0_m69E3628749A77BDB07B532DE9E46393F36E96AAD
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_3,
          U3CU3Ec__DisplayClass39_0_t7125F0DBD2AFD6902D9CDAC4A583DADB4EC0667F *param_4,
          MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  float fVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  bool bVar9;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar10;
  undefined8 *extraout_EAX;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar11;
  int iVar12;
  float fVar13;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_b4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_98;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_18;
  float local_c;
  float local_8;

  if (DAT_1151ca98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ca98 = '\x01';
  }
  local_18.___x_2 = 0.0;
  local_18.___y_3 = 0.0;
  local_18.___z_4 = 0.0;
  iVar12 = param_4->___minH_0;
  if (iVar12 <= param_4->___maxH_7) {
    do {
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pGVar3 = param_1->___master_4->___graph_7,
         pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      bVar9 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                        (pGVar3,param_2,iVar12,(MethodInfo *)0x0);
      if (bVar9) {
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        pfVar10 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_98,param_3,(float)iVar12,(MethodInfo *)0x0);
        uVar1 = pfVar10->___x_0;
        uVar2 = pfVar10->___y_1;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_a4,(float)uVar1,(float)uVar2,pfVar10->___z_2,(MethodInfo *)0x0);
        local_40 = *extraout_EAX;
        fVar4 = *(float *)(extraout_EAX + 1);
        local_4c._0_4_ = (param_4->___hitPos_2).___x_2;
        local_4c._4_4_ = (param_4->___hitPos_2).___y_3;
        local_18.___x_2 = (float)(undefined4)local_4c - (float)local_40;
        local_64._0_4_ = (param_4->___hitPos_2).___x_2;
        local_64._4_4_ = (param_4->___hitPos_2).___y_3;
        local_58._4_4_ = (float)((ulonglong)*extraout_EAX >> 0x20);
        local_18.___y_3 = (float)local_4c._4_4_ - local_58._4_4_;
        local_70 = *extraout_EAX;
        local_5c = (param_4->___hitPos_2).___z_4;
        local_74 = local_5c - fVar4;
        local_68 = fVar4;
        local_58 = *extraout_EAX;
        local_34 = local_4c;
        local_20 = local_40;
        local_18.___z_4 = local_74;
        local_8 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                            (&local_18,(MethodInfo *)0x0);
        if (local_8 <= __real_40800000) {
          local_18.___y_3 = local_18.___y_3 + local_18.___y_3;
          local_c = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                              (&local_18,(MethodInfo *)0x0);
          VVar8.___z_4 = fVar4;
          VVar8.___x_2 = (float)(undefined4)local_20;
          VVar8.___y_3 = (float)local_20._4_4_;
          fVar13 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8
                             (&param_4->___plane_3,VVar8,(MethodInfo *)0x0);
          local_8 = (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff) + local_c;
          local_28._0_4_ = (param_4->___hitPos_2).___x_2;
          local_28._4_4_ = (param_4->___hitPos_2).___y_3;
          local_c = (param_4->___hitPos_2).___z_4;
          pCVar11 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                              (&local_b4,(MethodInfo *)0x0);
          local_8c = pCVar11->___r_0;
          fStack_88 = pCVar11->___g_1;
          fStack_84 = pCVar11->___b_2;
          fStack_80 = pCVar11->___a_3;
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          VVar5.___z_4 = fVar4;
          VVar5.___x_2 = (float)(undefined4)local_20;
          VVar5.___y_3 = (float)local_20._4_4_;
          VVar6.___z_4 = local_c;
          VVar6.___x_2 = (float)(undefined4)local_28;
          VVar6.___y_3 = (float)local_28._4_4_;
          CVar7.___g_1 = fStack_88;
          CVar7.___r_0 = local_8c;
          CVar7.___b_2 = fStack_84;
          CVar7.___a_3 = fStack_80;
          Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
                    (VVar5,VVar6,CVar7,(MethodInfo *)0x0);
          if (local_8 < param_4->___lowestCost_4) {
            (param_4->___bestHexPos_6).___x_0 = param_2.___x_0;
            param_4->___lowestCost_4 = local_8;
            param_4->___bestHeight_5 = iVar12;
            (param_4->___bestHexPos_6).___y_1 = param_2.___y_1;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 <= param_4->___maxH_7);
  }
  return;
}
