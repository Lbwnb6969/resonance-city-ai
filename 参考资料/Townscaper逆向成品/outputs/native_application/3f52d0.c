// RVA 0x3f52d0 | Placemaker.WaveFunctionCollapse$$RemovePossibleModule
// PDB: WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
// Body: [[103f52d0, 103f57c7]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a39cf0 Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3bfa0 Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
// 10a3c1f0 Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 11036980 List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared

bool __cdecl
WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,
          OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB param_3,int param_4,
          Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 param_5,MethodInfo *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar16;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar17;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar18;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar19;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar20;
  bool bVar21;
  ushort uVar22;
  ushort uVar23;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar24;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar25;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar27;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar28;
  uint uVar29;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar30;
  undefined4 uVar31;
  undefined1 local_a4 [28];
  undefined1 local_88 [16];
  float fStack_78;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_74;
  float fStack_70;
  undefined1 local_6c [16];
  undefined8 local_5c;
  float local_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  int local_44;
  undefined4 local_40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_3c;
  undefined4 local_30;
  float fStack_2c;
  float local_28;
  uint uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  byte local_5;

  pQVar20 = param_2;
  if (DAT_1151c91f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m4A8809913D91BA45635D1D6C23A2B052E2A1B7CA_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7A908DB5DF372BEB55E541705B69AE6389D25B40);
    DAT_1151c91f = '\x01';
  }
  local_5c = 0;
  local_54 = 0.0;
  local_14.___x_2 = 0.0;
  local_14.___y_3 = 0.0;
  local_14.___z_4 = 0.0;
  local_6c._0_2_ = 0;
  local_6c._2_2_ = 0;
  local_6c._4_2_ = 0;
  local_6c._6_2_ = 0;
  local_6c._8_2_ = 0;
  local_6c._10_2_ = 0;
  local_6c._12_2_ = 0;
  local_6c._14_2_ = 0;
  if ((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
     (pLVar7 = param_2->___possibleModules_18,
     pLVar7 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)) {
    local_44 = pLVar7->____size_2;
    if (local_44 == 1) {
      pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0);
      if (pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                            (&local_50,pTVar26,(MethodInfo *)0x0);
        local_14.___x_2 = pVVar27->___x_2;
        local_14.___y_3 = pVVar27->___y_3;
        local_14.___z_4 = pVVar27->___z_4;
        pVVar27 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            (&local_50,(MethodInfo *)0x0);
        uVar3 = pVVar27->___x_2;
        uVar6 = pVVar27->___y_3;
        local_3c.___z_4 = pVVar27->___z_4;
        local_3c.___x_2 = pVVar27->___x_2;
        local_3c.___y_3 = pVVar27->___y_3;
        local_20 = local_14.___x_2 - (float)uVar3 * __real_3e4ccccd;
        fStack_1c = local_14.___y_3 - (float)uVar6 * __real_3e4ccccd;
        fStack_18 = local_14.___z_4 - local_3c.___z_4 * __real_3e4ccccd;
        fStack_2c = (float)uVar3;
        local_28 = (float)uVar6;
        pVVar27 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            (&local_14,(MethodInfo *)0x0);
        local_3c.___x_2 = pVVar27->___x_2;
        local_3c.___y_3 = pVVar27->___y_3;
        local_50.___z_4 = pVVar27->___z_4;
        local_50.___x_2 = pVVar27->___x_2;
        local_50.___y_3 = pVVar27->___y_3;
        local_14.___y_3 = local_3c.___y_3 * __real_3ecccccd;
        local_14.___x_2 = local_3c.___x_2 * __real_3ecccccd;
        local_14.___z_4 = local_50.___z_4 * __real_3ecccccd;
        fStack_2c = local_3c.___x_2;
        local_28 = local_3c.___y_3;
        pCVar28 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                            ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(local_a4 + 0xc),
                             (MethodInfo *)0x0);
        local_88._12_4_ = pCVar28->___r_0;
        fStack_78 = pCVar28->___g_1;
        OStack_74 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)pCVar28->___b_2;
        fStack_70 = pCVar28->___a_3;
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        VVar13.___y_3 = fStack_1c;
        VVar13.___x_2 = local_20;
        VVar13.___z_4 = fStack_18;
        VVar15.___z_4 = local_14.___z_4;
        VVar15.___x_2 = local_14.___x_2;
        VVar15.___y_3 = local_14.___y_3;
        CVar18.___g_1 = fStack_78;
        CVar18.___r_0 = (float)local_88._12_4_;
        CVar18.___b_2 = (float)OStack_74;
        CVar18.___a_3 = fStack_70;
        Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121
                  (VVar13,VVar15,CVar18,(MethodInfo *)0x0);
        Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                  ((Il2CppObject *)_stringLiteral7A908DB5DF372BEB55E541705B69AE6389D25B40,
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
        return false;
      }
    }
    else {
      List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared
                (pLVar7,param_4,
                 List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_RuntimeMethod_var);
      param_2 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
      if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        local_5 = 0;
        do {
          uVar29 = (uint)local_5;
          uStack_24 = uVar29;
          RVar30 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                             (&param_5,uVar29,(MethodInfo *)0x0);
          local_30 = RVar30._4_4_;
          pQVar24 = RVar30.___qube_0;
          if (RVar30.___indexInOther_1 != -1) {
            if (pQVar24 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_103f57c3;
            bVar21 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                               (pQVar24,(MethodInfo *)0x0);
            if (!bVar21) {
              local_40 = CONCAT31(local_40._1_3_,pQVar24->___sideVariationMask_5);
              bVar21 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                                 (pQVar24->___sideVariationMask_5,(int)(char)local_30,
                                  (MethodInfo *)0x0);
              if ((bVar21) && (pQVar20->___lastPropagation_11 <= pQVar24->___lastPropagation_11)) {
                uVar22 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                   (&param_3.___sides_0,uVar29,(MethodInfo *)0x0);
                fStack_18 = (float)(uint)uVar22;
                if (pQVar20->___possibleModules_18 ==
                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f57c3;
                iVar8 = pQVar20->___possibleModules_18->____size_2;
                do {
                  iVar8 = iVar8 + -1;
                  if (iVar8 < 0) {
                    local_14.___z_4 = (float)(uint)pQVar20->___lastPropagation_11;
                    local_14._0_7_ = CONCAT16((char)local_30,CONCAT24(uVar22,pQVar24));
                    local_14.___y_3._3_1_ = 0;
                    if (param_1->___lastRemovals_16 ==
                        (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) goto LAB_103f57c3;
                    lVar19.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1._0_3_ =
                         (int3)((uint7)local_14._0_7_ >> 0x20);
                    lVar19.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)pQVar24;
                    lVar19.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1._3_1_ = 0;
                    lVar19.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = pQVar20->___lastPropagation_11;
                    lVar19.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = 0;
                    List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                              ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                               param_1->___lastRemovals_16,lVar19,
                               List_1_Add_m4A8809913D91BA45635D1D6C23A2B052E2A1B7CA_RuntimeMethod_var
                              );
                    pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pQVar20,(MethodInfo *)0x0);
                    if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_103f57c3;
                    pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&local_50,pTVar26,(MethodInfo *)0x0);
                    uVar1 = pVVar27->___x_2;
                    uVar4 = pVVar27->___y_3;
                    fVar9 = pVVar27->___z_4;
                    local_28 = (float)uVar1;
                    uStack_24 = uVar4;
                    pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pQVar24,(MethodInfo *)0x0);
                    if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_103f57c3;
                    pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&local_3c,pTVar26,(MethodInfo *)0x0);
                    uVar2 = pVVar27->___x_2;
                    uVar5 = pVVar27->___y_3;
                    fVar10 = pVVar27->___z_4;
                    fStack_1c = (float)uVar2;
                    fStack_18 = (float)uVar5;
                    pCVar28 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9
                                        ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
                                         (local_a4 + 0xc),(MethodInfo *)0x0);
                    local_88._12_4_ = pCVar28->___r_0;
                    fStack_78 = pCVar28->___g_1;
                    OStack_74 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                pCVar28->___b_2;
                    fStack_70 = pCVar28->___a_3;
                    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                );
                    }
                    VVar12.___y_3 = (float)uStack_24;
                    VVar12.___x_2 = local_28;
                    VVar12.___z_4 = fVar9;
                    VVar14.___y_3 = fStack_18;
                    VVar14.___x_2 = fStack_1c;
                    VVar14.___z_4 = fVar10;
                    CVar17.___g_1 = fStack_78;
                    CVar17.___r_0 = (float)local_88._12_4_;
                    CVar17.___b_2 = (float)OStack_74;
                    CVar17.___a_3 = fStack_70;
                    Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
                              (VVar12,VVar14,CVar17,(MethodInfo *)0x0);
                    param_2._3_1_ = true;
                    param_2 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x1000000;
                    goto LAB_103f55a7;
                  }
                  if (pQVar20->___possibleModules_18 ==
                      (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f57c3;
                  pOVar25 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                      ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                        *)local_88,pQVar20->___possibleModules_18,iVar8,
                                       List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                      );
                  local_6c._0_2_ = (pOVar25->___sides_0).___v00_0;
                  local_6c._2_2_ = (pOVar25->___sides_0).___v01_1;
                  local_6c._4_2_ = (pOVar25->___sides_0).___v10_2;
                  local_6c._6_2_ = (pOVar25->___sides_0).___v11_3;
                  local_6c._8_2_ = (pOVar25->___sides_0).___v20_4;
                  local_6c._10_2_ = (pOVar25->___sides_0).___v21_5;
                  local_6c._12_2_ = (pOVar25->___sides_0).___v30_6;
                  local_6c._14_2_ = (pOVar25->___sides_0).___v31_7;
                  local_5c = *(undefined8 *)&(pOVar25->___sides_0).___v4_8;
                  local_54 = pOVar25->___cost_2;
                  uVar23 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                     ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)
                                      local_6c,uStack_24,(MethodInfo *)0x0);
                  uVar22 = SUB42(fStack_18,0);
                } while (uVar23 != uVar22);
              }
            }
          }
LAB_103f55a7:
          local_5 = local_5 + 1;
        } while ((char)local_5 < '\x06');
        if (local_44 != 2) {
          return param_2._3_1_;
        }
        if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          pMVar11 = param_1->___master_4->___moduleBuilder_16;
          if ((pQVar20->___possibleModules_18 !=
               (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) &&
             (pOVar25 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                  ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *)
                                   local_a4,pQVar20->___possibleModules_18,0,
                                   List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                  ),
             pMVar11 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0)) {
            uVar31 = (undefined4)((ulonglong)*(undefined8 *)&(pOVar25->___sides_0).___v4_8 >> 0x20);
            OVar16.___orientedModule_1.___moduleIndex_0 = (short)uVar31;
            OVar16.___orientedModule_1.___flags_1 = (char)((uint)uVar31 >> 0x10);
            OVar16.___orientedModule_1._3_1_ = (char)((uint)uVar31 >> 0x18);
            OVar16.___sides_0 = pOVar25->___sides_0;
            OVar16.___cost_2 = pOVar25->___cost_2;
            ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                      (pMVar11,pQVar20,OVar16,(MethodInfo *)0x0);
            pQVar20->___awaitingRebuilding_14 = false;
            return param_2._3_1_;
          }
        }
      }
    }
  }
LAB_103f57c3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
