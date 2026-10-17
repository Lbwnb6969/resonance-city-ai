// RVA 0x838cb0 | Placemaker.Graphs.Flow$$AddFlowTarget
// PDB: Flow_AddFlowTarget_mA92AC90CB2AD9628748E1DA445EE91AB978A8D8A
// Body: [[10838cb0, 10839834]]
// Direct callees:
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 1092cdc0 List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

void __cdecl
Flow_AddFlowTarget_mA92AC90CB2AD9628748E1DA445EE91AB978A8D8A
          (Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_2,MethodInfo *param_3)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar2;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar3;
  Il2CppClass *pIVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar6;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar7;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar8;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar9;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar10;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar11;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar12;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar17;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar19;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar20;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar21;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar22;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar23;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar24;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  bool bVar51;
  bool bVar52;
  int iVar53;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar54;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar55;
  undefined8 *extraout_EAX;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar56;
  int iVar57;
  MethodInfo *unaff_EDI;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar58;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar59;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar60;
  MethodInfo *pMVar61;
  MethodInfo *pMVar62;
  undefined1 local_138 [68];
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_f4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  int iStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_58;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_4c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_40;
  Il2CppClass *local_34;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  char *local_c;
  Il2CppObject *local_8;

  if (DAT_1151f40c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var)
    ;
    DAT_1151f40c = '\x01';
  }
  local_8 = (Il2CppObject *)0x0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  local_24 = CONCAT44(param_2.___x_0,(float)local_24);
  local_1c = param_2.___z_2;
  local_34 = (Il2CppClass *)(param_2.___y_1 - __real_3f000000);
  iVar53 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                     ((float)local_34,(MethodInfo *)0x0);
  if (iVar53 < -1) {
    return;
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar1 = param_1->___master_4->___graph_7,
     pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    if (pGVar1->___boundsHeight_27 + 1 < iVar53) {
      return;
    }
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    fVar50 = local_1c;
    fVar23.___y_1 = local_1c;
    fVar23.___x_0 = local_24._4_4_;
    pfVar54 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                        (&local_4c,fVar23,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pGVar1 = param_1->___master_4->___graph_7,
       pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      local_58.___y_3 = (float)(pGVar1->___bounds_28).___c1_1.___y_1;
      local_58.___z_4 = (float)(pGVar1->___bounds_28).___c1_1.___z_2;
      local_c = (char *)((pGVar1->___bounds_28).___c0_0.___x_0 + -0x120);
      iVar57 = (int)local_58.___z_4 + 0x120;
      local_18 = (float)((pGVar1->___bounds_28).___c0_0.___y_1 + -0x120);
      local_30._0_4_ = pfVar54->___x_0;
      local_30._4_4_ = pfVar54->___y_1;
      local_14 = (float)((pGVar1->___bounds_28).___c0_0.___z_2 + -0x120);
      local_10 = (float)((pGVar1->___bounds_28).___c1_1.___x_0 + 0x120);
      local_40.___z_2 = (float)((int)local_58.___y_3 + 0x120);
      local_28 = pfVar54->___z_2;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      if ((float)local_30 < (float)(int)local_c) {
        return;
      }
      if (local_30._4_4_ < (float)(int)local_18) {
        return;
      }
      if (local_28 < (float)(int)local_14) {
        return;
      }
      if ((float)(int)local_10 < (float)local_30) {
        return;
      }
      if ((float)(int)local_40.___z_2 < local_30._4_4_) {
        return;
      }
      if ((float)iVar57 < local_28) {
        return;
      }
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pGVar2 = param_1->___master_4->___grid_5,
         pGVar2 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) {
        fVar24.___y_1 = fVar50;
        fVar24.___x_0 = local_24._4_4_;
        pQVar55 = GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                            ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)local_138,pGVar2,
                             fVar24,(MethodInfo *)0x0);
        local_f4.___quadIndex_0 = pQVar55->___quadIndex_0;
        local_f4._1_3_ = *(undefined3 *)&pQVar55->field_0x1;
        local_f4.___v0_1.___x_0 = (pQVar55->___v0_1).___x_0;
        local_f4.___v0_1.___y_1 = (pQVar55->___v0_1).___y_1;
        local_f4.___v1_2.___x_0 = (pQVar55->___v1_2).___x_0;
        local_f4.___v1_2.___y_1 = (pQVar55->___v1_2).___y_1;
        local_f4.___v2_3.___x_0 = (pQVar55->___v2_3).___x_0;
        local_f4.___v2_3.___y_1 = (pQVar55->___v2_3).___y_1;
        local_f4.___v3_4.___x_0 = (pQVar55->___v3_4).___x_0;
        local_f4.___v3_4.___y_1 = (pQVar55->___v3_4).___y_1;
        local_f4.___p0_5.___x_0 = (pQVar55->___p0_5).___x_0;
        local_f4.___p0_5.___y_1 = (pQVar55->___p0_5).___y_1;
        local_f4.___p1_6.___x_0 = (pQVar55->___p1_6).___x_0;
        local_f4.___p1_6.___y_1 = (pQVar55->___p1_6).___y_1;
        local_f4.___p2_7.___x_0 = (pQVar55->___p2_7).___x_0;
        local_f4.___p2_7.___y_1 = (pQVar55->___p2_7).___y_1;
        local_f4.___p3_8.___x_0 = (pQVar55->___p3_8).___x_0;
        local_f4.___p3_8.___y_1 = (pQVar55->___p3_8).___y_1;
        bVar51 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0(&local_f4,(MethodInfo *)0x0)
        ;
        if (!bVar51) {
          return;
        }
        bVar51 = -1 < iVar53;
        local_30 = CONCAT44(local_f4.___p0_5.___x_0,(float)local_30);
        local_28 = local_f4.___p0_5.___y_1;
        iVar25.___y_1 = (int)local_f4.___p0_5.___y_1;
        iVar25.___x_0 = (int)local_f4.___p0_5.___x_0;
        iVar25.___z_2 = 0;
        pMVar62 = (MethodInfo *)local_f4.___p0_5.___x_0;
        VVar58 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar25,unaff_EDI);
        local_30 = CONCAT44(local_f4.___p1_6.___x_0,(float)local_30);
        local_28 = local_f4.___p1_6.___y_1;
        iVar18.___y_1 = (int)local_f4.___p1_6.___y_1;
        iVar18.___x_0 = (int)local_f4.___p1_6.___x_0;
        iVar18.___z_2 = 0;
        pMVar61 = (MethodInfo *)local_f4.___p1_6.___x_0;
        iVar59 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar18,pMVar62);
        local_80 = (float)iVar59.___y_1;
        local_28 = (float)iVar59.___x_0;
        local_4c.___y_1 = local_f4.___p2_7.___x_0;
        local_4c.___z_2 = local_f4.___p2_7.___y_1;
        iVar16.___y_1 = (int)local_f4.___p2_7.___y_1;
        iVar16.___x_0 = (int)local_f4.___p2_7.___x_0;
        iVar16.___z_2 = 0;
        pMVar62 = (MethodInfo *)local_f4.___p2_7.___x_0;
        iVar59 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar16,pMVar61);
        local_10 = (float)iVar59.___y_1;
        local_4c.___z_2 = (float)iVar59.___x_0;
        local_40.___y_1 = local_f4.___p3_8.___x_0;
        local_40.___z_2 = local_f4.___p3_8.___y_1;
        iVar14.___y_1 = (int)local_f4.___p3_8.___y_1;
        iVar14.___x_0 = (int)local_f4.___p3_8.___x_0;
        iVar14.___z_2 = 0;
        pMVar61 = (MethodInfo *)local_f4.___p3_8.___x_0;
        iVar59 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar14,pMVar62);
        local_18 = (float)iVar59.___y_1;
        local_14 = (float)iVar59.___x_0;
        iVar5.___y_1 = (int)local_1c;
        iVar5.___x_0 = (int)local_24._4_4_;
        iVar5.___z_2 = 0;
        VVar60 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar5,pMVar61);
        local_c = (char *)VVar60.___y_1;
        local_40.___z_2 = VVar60.___x_0;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          VVar60.___y_1 = (float)local_c;
          VVar60.___x_0 = local_40.___z_2;
        }
        local_c = (char *)VVar60.___y_1;
        local_40.___z_2 = VVar60.___x_0;
        VVar15.___y_1 = local_80;
        VVar15.___x_0 = local_28;
        VVar17.___y_1 = local_10;
        VVar17.___x_0 = local_4c.___z_2;
        VVar19.___y_1 = local_18;
        VVar19.___x_0 = local_14;
        VVar60 = ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                           (VVar58,VVar15,VVar17,VVar19,VVar60,(MethodInfo *)0x0);
        local_1c = VVar60.___y_1;
        local_24 = CONCAT44(VVar60.___x_0,(float)local_24);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_58,VVar60.___x_0,(float)local_34 - (float)iVar53,local_1c,
                   (MethodInfo *)0x0);
        local_30 = *extraout_EAX;
        local_40.___z_2 = *(float *)(extraout_EAX + 1);
        local_4c._0_8_ = *extraout_EAX;
        local_10 = __real_3f800000 - (float)local_30;
        local_14 = __real_3f800000 - local_4c.___y_1;
        local_18 = __real_3f800000 - local_40.___z_2;
        local_40._0_8_ = local_4c._0_8_;
        local_24 = local_30;
        local_1c = local_40.___z_2;
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pGVar1 = param_1->___master_4->___graph_7,
               pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
           (pDVar3 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                     pGVar1->___cornerDict_16,
           pDVar3 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
          iVar59.___y_1 = local_f4.___v0_1.___y_1;
          iVar59.___x_0 = local_f4.___v0_1.___x_0;
          bVar52 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             (pDVar3,iVar59,&local_8,
                              Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                             );
          fVar50 = fStack_70;
          if (bVar52) {
            if ((local_8 == (Il2CppObject *)0x0) ||
               (pIVar4 = local_8[4].field0_0x0.klass, pIVar4 == (Il2CppClass *)0x0))
            goto LAB_10839830;
            local_c = pIVar4->namespaze;
            if (iVar53 < (int)local_c && bVar51) {
              pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_138 + 0x14),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar4,iVar53
                                   ,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_7c = (pDVar56->___delta_0).___x_0;
              fStack_78 = (pDVar56->___delta_0).___y_1;
              fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
              uVar26 = (pDVar56->___delta_0).___x_0;
              uVar27 = (pDVar56->___delta_0).___y_1;
              DVar6.___delta_0.___y_1 = (float)uVar27;
              DVar6.___delta_0.___x_0 = (float)uVar26;
              uVar28 = (pDVar56->___smoothDelta_1).___x_0;
              DVar6.___smoothDelta_1.___x_0 = (float)uVar28;
              fStack_70 = local_24._4_4_ * (float)local_24 * local_1c;
              local_a0 = (pDVar56->___pos_2).___x_0;
              fStack_9c = (pDVar56->___pos_2).___y_1;
              fStack_98 = (pDVar56->___invYPos_3).___x_0;
              fStack_94 = (pDVar56->___invYPos_3).___y_1;
              local_90 = (pDVar56->___smoothPos_4).___x_0;
              fStack_8c = (pDVar56->___smoothPos_4).___y_1;
              iStack_88 = pDVar56->___frame_5;
              fStack_84 = pDVar56->___time_6;
              fVar50 = (pDVar56->___smoothDelta_1).___y_1;
              if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                if ((local_8 == (Il2CppObject *)0x0) ||
                   (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                DVar6.___smoothDelta_1.___y_1 = fStack_70;
                DVar6.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                DVar6.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                DVar6.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                DVar6.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                DVar6.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                DVar6.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                DVar6.___frame_5 = pDVar56->___frame_5;
                DVar6.___time_6 = pDVar56->___time_6;
                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                           local_8[4].field0_0x0.klass,iVar53,DVar6,
                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                          );
                fVar50 = fStack_70;
              }
            }
            fStack_70 = fVar50;
            iVar57 = iVar53 + 1;
            fVar50 = fStack_70;
            if (iVar57 < (int)local_c) {
              if ((local_8 == (Il2CppObject *)0x0) ||
                 (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
              pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_138 + 0x14),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                   local_8[4].field0_0x0.klass,iVar57,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_7c = (pDVar56->___delta_0).___x_0;
              fStack_78 = (pDVar56->___delta_0).___y_1;
              fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
              uVar29 = (pDVar56->___delta_0).___x_0;
              uVar30 = (pDVar56->___delta_0).___y_1;
              DVar7.___delta_0.___y_1 = (float)uVar30;
              DVar7.___delta_0.___x_0 = (float)uVar29;
              uVar31 = (pDVar56->___smoothDelta_1).___x_0;
              DVar7.___smoothDelta_1.___x_0 = (float)uVar31;
              fStack_70 = (float)local_24 * local_14 * local_1c;
              local_a0 = (pDVar56->___pos_2).___x_0;
              fStack_9c = (pDVar56->___pos_2).___y_1;
              fStack_98 = (pDVar56->___invYPos_3).___x_0;
              fStack_94 = (pDVar56->___invYPos_3).___y_1;
              local_90 = (pDVar56->___smoothPos_4).___x_0;
              fStack_8c = (pDVar56->___smoothPos_4).___y_1;
              iStack_88 = pDVar56->___frame_5;
              fStack_84 = pDVar56->___time_6;
              fVar50 = (pDVar56->___smoothDelta_1).___y_1;
              if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                if ((local_8 == (Il2CppObject *)0x0) ||
                   (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                DVar7.___smoothDelta_1.___y_1 = fStack_70;
                DVar7.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                DVar7.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                DVar7.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                DVar7.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                DVar7.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                DVar7.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                DVar7.___frame_5 = pDVar56->___frame_5;
                DVar7.___time_6 = pDVar56->___time_6;
                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                           local_8[4].field0_0x0.klass,iVar57,DVar7,
                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                          );
                fVar50 = fStack_70;
              }
            }
          }
          fStack_70 = fVar50;
          iVar57 = iVar53 + 1;
          if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) && (pGVar1 = param_1->___master_4->___graph_7,
                    pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
             (pDVar3 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       pGVar1->___cornerDict_16,
             pDVar3 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
            iVar20.___y_1 = local_f4.___v1_2.___y_1;
            iVar20.___x_0 = local_f4.___v1_2.___x_0;
            bVar52 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (pDVar3,iVar20,&local_8,
                                Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                               );
            fVar50 = fStack_70;
            if (bVar52) {
              if ((local_8 == (Il2CppObject *)0x0) ||
                 (local_34 = local_8[4].field0_0x0.klass, local_34 == (Il2CppClass *)0x0))
              goto LAB_10839830;
              local_c = local_34->namespaze;
              if (iVar53 < (int)local_c && bVar51) {
                pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_138 + 0x14),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)local_34,
                                     iVar53,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_7c = (pDVar56->___delta_0).___x_0;
                fStack_78 = (pDVar56->___delta_0).___y_1;
                fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                uVar32 = (pDVar56->___delta_0).___x_0;
                uVar33 = (pDVar56->___delta_0).___y_1;
                DVar8.___delta_0.___y_1 = (float)uVar33;
                DVar8.___delta_0.___x_0 = (float)uVar32;
                uVar34 = (pDVar56->___smoothDelta_1).___x_0;
                DVar8.___smoothDelta_1.___x_0 = (float)uVar34;
                fStack_70 = local_24._4_4_ * local_10 * local_1c;
                local_a0 = (pDVar56->___pos_2).___x_0;
                fStack_9c = (pDVar56->___pos_2).___y_1;
                fStack_98 = (pDVar56->___invYPos_3).___x_0;
                fStack_94 = (pDVar56->___invYPos_3).___y_1;
                local_90 = (pDVar56->___smoothPos_4).___x_0;
                fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                iStack_88 = pDVar56->___frame_5;
                fStack_84 = pDVar56->___time_6;
                fVar50 = (pDVar56->___smoothDelta_1).___y_1;
                if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                  if ((local_8 == (Il2CppObject *)0x0) ||
                     (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                  DVar8.___smoothDelta_1.___y_1 = fStack_70;
                  DVar8.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                  DVar8.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                  DVar8.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                  DVar8.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                  DVar8.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                  DVar8.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                  DVar8.___frame_5 = pDVar56->___frame_5;
                  DVar8.___time_6 = pDVar56->___time_6;
                  List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                            ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                             local_8[4].field0_0x0.klass,iVar53,DVar8,
                             List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                            );
                  fVar50 = fStack_70;
                }
              }
              fStack_70 = fVar50;
              fVar50 = fStack_70;
              if (iVar57 < (int)local_c) {
                if ((local_8 == (Il2CppObject *)0x0) ||
                   (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_138 + 0x14),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                     local_8[4].field0_0x0.klass,iVar57,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_7c = (pDVar56->___delta_0).___x_0;
                fStack_78 = (pDVar56->___delta_0).___y_1;
                fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                uVar35 = (pDVar56->___delta_0).___x_0;
                uVar36 = (pDVar56->___delta_0).___y_1;
                DVar9.___delta_0.___y_1 = (float)uVar36;
                DVar9.___delta_0.___x_0 = (float)uVar35;
                uVar37 = (pDVar56->___smoothDelta_1).___x_0;
                DVar9.___smoothDelta_1.___x_0 = (float)uVar37;
                fStack_70 = local_14 * local_10 * local_1c;
                local_a0 = (pDVar56->___pos_2).___x_0;
                fStack_9c = (pDVar56->___pos_2).___y_1;
                fStack_98 = (pDVar56->___invYPos_3).___x_0;
                fStack_94 = (pDVar56->___invYPos_3).___y_1;
                local_90 = (pDVar56->___smoothPos_4).___x_0;
                fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                iStack_88 = pDVar56->___frame_5;
                fStack_84 = pDVar56->___time_6;
                fVar50 = (pDVar56->___smoothDelta_1).___y_1;
                if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                  if ((local_8 == (Il2CppObject *)0x0) ||
                     (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                  DVar9.___smoothDelta_1.___y_1 = fStack_70;
                  DVar9.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                  DVar9.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                  DVar9.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                  DVar9.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                  DVar9.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                  DVar9.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                  DVar9.___frame_5 = pDVar56->___frame_5;
                  DVar9.___time_6 = pDVar56->___time_6;
                  List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                            ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                             local_8[4].field0_0x0.klass,iVar57,DVar9,
                             List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                            );
                  fVar50 = fStack_70;
                }
              }
            }
            fStack_70 = fVar50;
            if (((param_1->___master_4 !=
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                (pGVar1 = param_1->___master_4->___graph_7,
                pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
               (pDVar3 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                         pGVar1->___cornerDict_16,
               pDVar3 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
              iVar21.___y_1 = local_f4.___v2_3.___y_1;
              iVar21.___x_0 = local_f4.___v2_3.___x_0;
              bVar52 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                                 (pDVar3,iVar21,&local_8,
                                  Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                 );
              fVar50 = fStack_70;
              if (bVar52) {
                if ((local_8 == (Il2CppObject *)0x0) ||
                   (local_34 = local_8[4].field0_0x0.klass, local_34 == (Il2CppClass *)0x0))
                goto LAB_10839830;
                local_c = local_34->namespaze;
                if (iVar53 < (int)local_c && bVar51) {
                  pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                      ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                       (local_138 + 0x14),
                                       (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)local_34,
                                       iVar53,
                                       List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                      );
                  local_7c = (pDVar56->___delta_0).___x_0;
                  fStack_78 = (pDVar56->___delta_0).___y_1;
                  fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                  uVar38 = (pDVar56->___delta_0).___x_0;
                  uVar39 = (pDVar56->___delta_0).___y_1;
                  DVar10.___delta_0.___y_1 = (float)uVar39;
                  DVar10.___delta_0.___x_0 = (float)uVar38;
                  uVar40 = (pDVar56->___smoothDelta_1).___x_0;
                  DVar10.___smoothDelta_1.___x_0 = (float)uVar40;
                  fStack_70 = local_24._4_4_ * local_10 * local_18;
                  local_a0 = (pDVar56->___pos_2).___x_0;
                  fStack_9c = (pDVar56->___pos_2).___y_1;
                  fStack_98 = (pDVar56->___invYPos_3).___x_0;
                  fStack_94 = (pDVar56->___invYPos_3).___y_1;
                  local_90 = (pDVar56->___smoothPos_4).___x_0;
                  fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                  iStack_88 = pDVar56->___frame_5;
                  fStack_84 = pDVar56->___time_6;
                  fVar50 = (pDVar56->___smoothDelta_1).___y_1;
                  if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                    if ((local_8 == (Il2CppObject *)0x0) ||
                       (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                    DVar10.___smoothDelta_1.___y_1 = fStack_70;
                    DVar10.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                    DVar10.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                    DVar10.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                    DVar10.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                    DVar10.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                    DVar10.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                    DVar10.___frame_5 = pDVar56->___frame_5;
                    DVar10.___time_6 = pDVar56->___time_6;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                               local_8[4].field0_0x0.klass,iVar53,DVar10,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    fVar50 = fStack_70;
                  }
                }
                fStack_70 = fVar50;
                fVar50 = fStack_70;
                if (iVar57 < (int)local_c) {
                  if ((local_8 == (Il2CppObject *)0x0) ||
                     (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                  pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                      ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                       (local_138 + 0x14),
                                       (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                       local_8[4].field0_0x0.klass,iVar57,
                                       List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                      );
                  local_7c = (pDVar56->___delta_0).___x_0;
                  fStack_78 = (pDVar56->___delta_0).___y_1;
                  fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                  uVar41 = (pDVar56->___delta_0).___x_0;
                  uVar42 = (pDVar56->___delta_0).___y_1;
                  DVar11.___delta_0.___y_1 = (float)uVar42;
                  DVar11.___delta_0.___x_0 = (float)uVar41;
                  uVar43 = (pDVar56->___smoothDelta_1).___x_0;
                  DVar11.___smoothDelta_1.___x_0 = (float)uVar43;
                  fStack_70 = local_14 * local_10 * local_18;
                  local_a0 = (pDVar56->___pos_2).___x_0;
                  fStack_9c = (pDVar56->___pos_2).___y_1;
                  fStack_98 = (pDVar56->___invYPos_3).___x_0;
                  fStack_94 = (pDVar56->___invYPos_3).___y_1;
                  local_90 = (pDVar56->___smoothPos_4).___x_0;
                  fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                  iStack_88 = pDVar56->___frame_5;
                  fStack_84 = pDVar56->___time_6;
                  fVar50 = (pDVar56->___smoothDelta_1).___y_1;
                  if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                    if ((local_8 == (Il2CppObject *)0x0) ||
                       (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                    DVar11.___smoothDelta_1.___y_1 = fStack_70;
                    DVar11.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                    DVar11.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                    DVar11.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                    DVar11.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                    DVar11.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                    DVar11.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                    DVar11.___frame_5 = pDVar56->___frame_5;
                    DVar11.___time_6 = pDVar56->___time_6;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                               local_8[4].field0_0x0.klass,iVar57,DVar11,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    fVar50 = fStack_70;
                  }
                }
              }
              fStack_70 = fVar50;
              if (((param_1->___master_4 !=
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                  (pGVar1 = param_1->___master_4->___graph_7,
                  pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
                 (pDVar3 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                           pGVar1->___cornerDict_16,
                 pDVar3 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
                iVar22.___y_1 = local_f4.___v3_4.___y_1;
                iVar22.___x_0 = local_f4.___v3_4.___x_0;
                bVar52 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                                   (pDVar3,iVar22,&local_8,
                                    Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                   );
                if (!bVar52) {
                  return;
                }
                if ((local_8 != (Il2CppObject *)0x0) &&
                   (pIVar4 = local_8[4].field0_0x0.klass, pIVar4 != (Il2CppClass *)0x0)) {
                  local_c = pIVar4->namespaze;
                  fVar50 = fStack_70;
                  if (iVar53 < (int)local_c && bVar51) {
                    pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                         (local_138 + 0x14),
                                         (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar4,
                                         iVar53,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    local_7c = (pDVar56->___delta_0).___x_0;
                    fStack_78 = (pDVar56->___delta_0).___y_1;
                    fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                    uVar44 = (pDVar56->___delta_0).___x_0;
                    uVar45 = (pDVar56->___delta_0).___y_1;
                    DVar12.___delta_0.___y_1 = (float)uVar45;
                    DVar12.___delta_0.___x_0 = (float)uVar44;
                    uVar46 = (pDVar56->___smoothDelta_1).___x_0;
                    DVar12.___smoothDelta_1.___x_0 = (float)uVar46;
                    fStack_70 = local_24._4_4_ * (float)local_24 * local_18;
                    local_a0 = (pDVar56->___pos_2).___x_0;
                    fStack_9c = (pDVar56->___pos_2).___y_1;
                    fStack_98 = (pDVar56->___invYPos_3).___x_0;
                    fStack_94 = (pDVar56->___invYPos_3).___y_1;
                    local_90 = (pDVar56->___smoothPos_4).___x_0;
                    fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                    iStack_88 = pDVar56->___frame_5;
                    fStack_84 = pDVar56->___time_6;
                    fVar50 = (pDVar56->___smoothDelta_1).___y_1;
                    if (fStack_70 < (pDVar56->___smoothDelta_1).___y_1) {
                      if ((local_8 == (Il2CppObject *)0x0) ||
                         (local_8[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10839830;
                      DVar12.___smoothDelta_1.___y_1 = fStack_70;
                      DVar12.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                      DVar12.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                      DVar12.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                      DVar12.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                      DVar12.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                      DVar12.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                      DVar12.___frame_5 = pDVar56->___frame_5;
                      DVar12.___time_6 = pDVar56->___time_6;
                      List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                 local_8[4].field0_0x0.klass,iVar53,DVar12,
                                 List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                );
                      fVar50 = fStack_70;
                    }
                  }
                  fStack_70 = fVar50;
                  if ((int)local_c <= iVar57) {
                    return;
                  }
                  if ((local_8 != (Il2CppObject *)0x0) &&
                     (local_8[4].field0_0x0.klass != (Il2CppClass *)0x0)) {
                    pDVar56 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                         (local_138 + 0x14),
                                         (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                         local_8[4].field0_0x0.klass,iVar57,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    local_7c = (pDVar56->___delta_0).___x_0;
                    fStack_78 = (pDVar56->___delta_0).___y_1;
                    fStack_74 = (pDVar56->___smoothDelta_1).___x_0;
                    uVar47 = (pDVar56->___delta_0).___x_0;
                    uVar48 = (pDVar56->___delta_0).___y_1;
                    DVar13.___delta_0.___y_1 = (float)uVar48;
                    DVar13.___delta_0.___x_0 = (float)uVar47;
                    uVar49 = (pDVar56->___smoothDelta_1).___x_0;
                    DVar13.___smoothDelta_1.___x_0 = (float)uVar49;
                    fStack_70 = local_14 * (float)local_24 * local_18;
                    local_a0 = (pDVar56->___pos_2).___x_0;
                    fStack_9c = (pDVar56->___pos_2).___y_1;
                    fStack_98 = (pDVar56->___invYPos_3).___x_0;
                    fStack_94 = (pDVar56->___invYPos_3).___y_1;
                    local_90 = (pDVar56->___smoothPos_4).___x_0;
                    fStack_8c = (pDVar56->___smoothPos_4).___y_1;
                    iStack_88 = pDVar56->___frame_5;
                    fStack_84 = pDVar56->___time_6;
                    if ((pDVar56->___smoothDelta_1).___y_1 <= fStack_70) {
                      return;
                    }
                    if ((local_8 != (Il2CppObject *)0x0) &&
                       (local_8[4].field0_0x0.klass != (Il2CppClass *)0x0)) {
                      DVar13.___smoothDelta_1.___y_1 = fStack_70;
                      DVar13.___pos_2.___x_0 = (pDVar56->___pos_2).___x_0;
                      DVar13.___pos_2.___y_1 = (pDVar56->___pos_2).___y_1;
                      DVar13.___invYPos_3.___x_0 = (pDVar56->___invYPos_3).___x_0;
                      DVar13.___invYPos_3.___y_1 = (pDVar56->___invYPos_3).___y_1;
                      DVar13.___smoothPos_4.___x_0 = (pDVar56->___smoothPos_4).___x_0;
                      DVar13.___smoothPos_4.___y_1 = (pDVar56->___smoothPos_4).___y_1;
                      DVar13.___frame_5 = pDVar56->___frame_5;
                      DVar13.___time_6 = pDVar56->___time_6;
                      List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                 local_8[4].field0_0x0.klass,iVar57,DVar13,
                                 List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                );
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10839830:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
