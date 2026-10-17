// RVA 0x87a8d0 | Placemaker.Life.BirdFlock$$OnDrawGizmos
// PDB: BirdFlock_OnDrawGizmos_m51997269F7A92937E519DFD93AFD880C9737BAEF
// Body: [[1087a8d0, 1087a956] [1087a95a, 1087ad60]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e520 Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
// 10a3e7d0 Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B

void __cdecl
BirdFlock_OnDrawGizmos_m51997269F7A92937E519DFD93AFD880C9737BAEF
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar1;
  int iVar2;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar3;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  bool bVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar15;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar16;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar17;
  uint uVar18;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar19;
  MethodInfo *pMVar20;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_170;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_12c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_120;
  undefined1 local_114 [24];
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 local_bc;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_74;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  int local_18;
  undefined8 local_14;
  int local_c;
  float local_8;

  if (DAT_1151f5c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC5C87EB162C43A4BC22E218C3A2D95DB961F5420_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5c9 = '\x01';
  }
  if (param_1->___birds_17 != (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) {
    local_18 = param_1->___birds_17->____size_2;
    uVar18 = 0;
    if (0 < local_18) {
      local_c = 0x10;
      do {
        pLVar1 = param_1->___birds_17;
        if (pLVar1 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ad5c;
        if ((uint)pLVar1->____size_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        iVar2 = *(int *)(pLVar1->____items_1 + local_c);
        if (iVar2 == 0) goto LAB_1087ad5c;
        pOVar3 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(iVar2 + 0x7c);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           (pOVar3,(MethodInfo *)0x0);
        if (bVar14) {
          if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar2 + 0xc) ==
              (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ad5c;
          pVVar15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_120,
                               *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                                (iVar2 + 0xc),(MethodInfo *)0x0);
          local_14._0_4_ = pVVar15->___x_2;
          local_14._4_4_ = pVVar15->___y_3;
          local_8 = pVVar15->___z_4;
          if (pOVar3 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_1087ad5c;
          pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar3,
                               (MethodInfo *)0x0);
          if (pTVar16 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_1087ad5c;
          pVVar15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_12c,pTVar16,(MethodInfo *)0x0);
          local_24._0_4_ = pVVar15->___x_2;
          local_24._4_4_ = pVVar15->___y_3;
          local_1c = pVVar15->___z_4;
          if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar2 + 0xc) ==
              (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ad5c;
          pVVar15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_114 + 4),
                               *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                                (iVar2 + 0xc),(MethodInfo *)0x0);
          local_5c._0_4_ = pVVar15->___x_2;
          local_5c._4_4_ = pVVar15->___y_3;
          local_60 = pVVar15->___z_4;
          local_68._0_4_ = pVVar15->___x_2;
          local_68._4_4_ = pVVar15->___y_3;
          local_fc = (local_1c - local_60) * __real_3efae148;
          VVar6.___z_4 = local_8;
          VVar6.___x_2 = (float)(undefined4)local_14;
          VVar6.___y_3 = (float)local_14._4_4_;
          VVar10.___y_3 = (local_24._4_4_ - (float)local_5c._4_4_) * __real_3efae148;
          VVar10.___x_2 = ((float)local_24 - (float)(undefined4)local_5c) * __real_3efae148;
          VVar10.___z_4 = local_fc;
          local_50 = local_5c;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar6,VVar10,(MethodInfo *)0x0);
        }
        local_74 = *(undefined8 *)(iVar2 + 0x4c);
        local_9c = *(float *)(iVar2 + 0x54);
        local_a4 = *(undefined8 *)(iVar2 + 0x4c);
        local_80 = *(undefined8 *)(iVar2 + 0x40);
        local_a8 = *(float *)(iVar2 + 0x48);
        local_b0 = *(undefined8 *)(iVar2 + 0x40);
        local_30 = (float)local_80 - (float)local_74 * __real_3f000000;
        local_8c._4_4_ = (float)((ulonglong)local_74 >> 0x20);
        local_98._4_4_ = (float)((ulonglong)local_80 >> 0x20);
        fStack_2c = local_98._4_4_ - local_8c._4_4_ * __real_3f000000;
        local_28 = local_a8 - local_9c * __real_3f000000;
        local_14 = *(undefined8 *)(iVar2 + 0x40);
        local_bc = *(undefined8 *)(iVar2 + 0x58);
        local_ec = *(undefined8 *)(iVar2 + 0x58);
        local_e4 = *(float *)(iVar2 + 0x60);
        local_c8 = *(undefined8 *)(iVar2 + 0x40);
        local_f8 = *(undefined8 *)(iVar2 + 0x40);
        local_f0 = *(float *)(iVar2 + 0x48);
        local_3c = (float)local_bc * __real_3f000000 + (float)local_c8;
        local_d4._4_4_ = (float)((ulonglong)local_bc >> 0x20);
        local_e0._4_4_ = (float)((ulonglong)local_c8 >> 0x20);
        fStack_38 = local_d4._4_4_ * __real_3f000000 + local_e0._4_4_;
        local_34 = local_e4 * __real_3f000000 + local_f0;
        local_e0 = local_c8;
        local_d4 = local_bc;
        local_98 = local_80;
        local_8c = local_74;
        local_8 = local_a8;
        if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        goto LAB_1087ad5c;
        local_44 = *(undefined8 *)(iVar2 + 100);
        pGVar4 = param_1->___master_4->___grid_5;
        fVar5 = *(float *)(iVar2 + 0x6c);
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        pMVar20 = (MethodInfo *)local_44;
        fVar11.___z_2 = fVar5;
        fVar11.___x_0 = (float)(undefined4)local_44;
        fVar11.___y_1 = (float)local_44._4_4_;
        fVar19 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                           (fVar11,(MethodInfo *)0x0);
        iVar7.___z_2 = 0;
        iVar7.___x_0 = (int)fVar19.___x_0;
        iVar7.___y_1 = (int)fVar19.___y_1;
        fVar19 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar7,pMVar20);
        if (pGVar4 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)
        goto LAB_1087ad5c;
        GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                  (&local_170,pGVar4,fVar19,(MethodInfo *)0x0);
        fVar5 = local_8;
        VVar8.___y_3 = fStack_2c;
        VVar8.___x_2 = local_30;
        VVar8.___z_4 = local_28;
        VVar12.___z_4 = local_8;
        VVar12.___x_2 = (float)(undefined4)local_14;
        VVar12.___y_3 = (float)local_14._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar8,VVar12,(MethodInfo *)0x0);
        VVar9.___z_4 = fVar5;
        VVar9.___x_2 = (float)(undefined4)local_14;
        VVar9.___y_3 = (float)local_14._4_4_;
        VVar13.___y_3 = fStack_38;
        VVar13.___x_2 = local_3c;
        VVar13.___z_4 = local_34;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar9,VVar13,(MethodInfo *)0x0);
        uVar18 = uVar18 + 1;
        local_c = local_c + 4;
      } while ((int)uVar18 < local_18);
    }
    pCVar17 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
                        ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)local_114,
                         (MethodInfo *)0x0);
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar17,(MethodInfo *)0x0);
    Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B
              (param_1->___orbitPos_33,0.5,(MethodInfo *)0x0);
    return;
  }
LAB_1087ad5c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
