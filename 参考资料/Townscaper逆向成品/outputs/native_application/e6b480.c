// RVA 0xe6b480 | Placemaker.Graphs.Graph$$ApplyAction
// PDB: Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
// Body: [[10e6b480, 10e6b7a5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 102328b0 ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e67e60 int2_ToString_m2B5C06E9DADFCA468DA0E7F4731E140BEF55B5E9_inline
// 10e6ae80 Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// 10e73610 Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
// 10e73950 Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 param_2,bool param_3,MethodInfo *param_4)

{
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar1;
  float fVar2;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar6;
  undefined4 uVar7;
  bool bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  int iVar10;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  String_t *pSVar13;
  char cVar14;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_24;
  undefined8 local_18;
  uint local_10;
  uint local_c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_8;

  if (DAT_11522838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCEA79521370532468257169DB2A24DC09E10D089);
    DAT_11522838 = '\x01';
  }
  uVar7 = param_2._8_4_;
  iVar10 = param_2.___hexPos_0.___y_1;
  local_c = (uint)param_2._8_4_ >> 8;
  local_8 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  cVar14 = param_2.___outType_3;
  if (param_2.___inType_2 == '\x12') {
    iVar3.___y_1 = param_2.___hexPos_0.___y_1;
    iVar3.___x_0 = param_2.___hexPos_0.___x_0;
    pVVar11 = Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
                        (param_1,iVar3,param_2.___height_1,cVar14,param_3,(MethodInfo *)0x0);
    if (param_3) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar11,
                         (MethodInfo *)0x0);
      if (bVar8) {
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pCVar1 = param_1->___master_4->___clickEffect_14,
               pVVar11 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) &&
           (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar11,
                                (MethodInfo *)0x0),
           pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_24,pTVar9,(MethodInfo *)0x0);
          local_18._0_4_ = pVVar12->___x_2;
          local_18._4_4_ = pVVar12->___y_3;
          fVar2 = pVVar12->___z_4;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          fVar6.___z_2 = fVar2;
          fVar6.___x_0 = (float)(undefined4)local_18;
          fVar6.___y_1 = (float)local_18._4_4_;
          fVar15 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                             (fVar6,(MethodInfo *)0x0);
          if (pCVar1 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
            ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
                      (pCVar1,true,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar15,
                       param_2._8_4_ & 0xff,cVar14,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_10e6b7a1;
      }
    }
    return;
  }
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    iVar4.___y_1 = param_2.___hexPos_0.___y_1;
    iVar4.___x_0 = param_2.___hexPos_0.___x_0;
    bVar8 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___cornerDict_16,iVar4,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                      );
    if (!bVar8) {
      param_2.___height_1 = (undefined1)param_2.___hexPos_0.___x_0;
      param_2.___inType_2 = param_2.___hexPos_0.___x_0._1_1_;
      param_2.___outType_3 = param_2.___hexPos_0.___x_0._2_1_;
      param_2._11_1_ = param_2.___hexPos_0.___x_0._3_1_;
      param_2.___actionId_4 = iVar10;
      pSVar13 = int2_ToString_m2B5C06E9DADFCA468DA0E7F4731E140BEF55B5E9_inline
                          ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&param_2.___height_1,
                           (MethodInfo *)0x0);
      pSVar13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                          (_stringLiteralCEA79521370532468257169DB2A24DC09E10D089,pSVar13,
                           (MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      return;
    }
    if (local_8 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                          (MethodInfo *)0x0);
      local_10 = uVar7 & 0xff;
      iVar10 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                         (param_1,pTVar9,local_10,(MethodInfo *)0x0);
      if ((pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
         (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar9,iVar10,(MethodInfo *)0x0),
         pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        pVVar11 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar9,
                             Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                            );
        if (cVar14 != '\x12') {
          Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                    (param_1,pVVar11,cVar14,local_8,(MethodInfo *)0x0);
          return;
        }
        if (!param_3) {
LAB_10e6b63f:
          Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                    (param_1,pVVar11,(MethodInfo *)0x0);
          return;
        }
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pCVar1 = param_1->___master_4->___clickEffect_14,
               pVVar11 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) &&
           (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar11,
                                (MethodInfo *)0x0),
           pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___hexPos_0.___y_1,pTVar9,(MethodInfo *)0x0);
          local_18._0_4_ = pVVar12->___x_2;
          local_18._4_4_ = pVVar12->___y_3;
          param_2.___actionId_4 = (int)pVVar12->___z_4;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          fVar5.___z_2 = (float)param_2.___actionId_4;
          fVar5.___x_0 = (float)(undefined4)local_18;
          fVar5.___y_1 = (float)local_18._4_4_;
          fVar15 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                             (fVar5,(MethodInfo *)0x0);
          if (pCVar1 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
            ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
                      (pCVar1,false,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar15,
                       local_10,(schar)local_c,(MethodInfo *)0x0);
            goto LAB_10e6b63f;
          }
        }
      }
    }
  }
LAB_10e6b7a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
