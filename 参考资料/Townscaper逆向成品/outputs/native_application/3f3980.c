// RVA 0x3f3980 | Placemaker.WaveFunctionCollapse$$IterateDecor
// PDB: WaveFunctionCollapse_IterateDecor_mDE248883BA48839F73C397E808CF3E734808A631
// Body: [[103f3980, 103f3c15] [103f3c22, 103f3d54] [103f3d5b, 103f3f80] [103f3f87, 103f4069] [103f4070, 103f4118] [103f411f, 103f4202]]
// Direct callees:
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 102f5590 SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
// 103d5ec0 ModuleBuilder_ApplyDecor_m2484BCF6216A5BA6B700EB399EF6F2E833EE7C5F
// 103d9630 ModuleLibrary_GetDecorOverlap_mC97CC29D9D3B604A85705E34C1A0B5EA91C0E9F8
// 103f12c0 WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
// 103f50d0 WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1350 List_1_BinarySearch_m85B751E54852B49F54EC3BAEE70E72997EAE7791_gshared
// 105d1c80 List_1_Insert_m5F5BC42B80F57E1B8FA405688DC3D52919175528_gshared
// 105d1f60 List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 1092a850 List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294

bool __cdecl
WaveFunctionCollapse_IterateDecor_mDE248883BA48839F73C397E808CF3E734808A631
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  undefined4 *puVar1;
  LastRemovedStruct_t542E4169FAE1B649014DD3DBA024AA6C6D0CFB7F *pLVar2;
  undefined4 uVar3;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined8 uVar4;
  undefined1 uVar8;
  List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *pLVar9;
  List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *pLVar10;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar11;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar12;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar13;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar14;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar15;
  float fVar16;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar17;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar18;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar19;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 RVar20;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 RVar21;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar22;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar23;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar24;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar25;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar26;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar27;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar28;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar29;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar30;
  bool bVar31;
  byte bVar32;
  ushort uVar33;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar34;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar35;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar36;
  Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA *pPVar37;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar38;
  uint uVar39;
  MethodInfo *unaff_EDI;
  int iVar40;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar41;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar42;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_120;
  undefined1 local_f0 [48];
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_c0;
  undefined4 uStack_bc;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_78;
  undefined4 uStack_74;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_70;
  undefined4 uStack_6c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_68;
  undefined4 uStack_64;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  float local_40;
  undefined1 local_3c [12];
  int iStack_30;
  int local_2c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  ushort uStack_20;
  undefined2 uStack_1e;
  byte bStack_1c;
  undefined1 uStack_1b;
  undefined2 uStack_1a;
  float local_18;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_14;
  int iStack_10;
  Il2CppObject *pIStack_c;
  int iStack_8;
  undefined2 uVar7;

  pWVar28 = param_1;
  if (DAT_1151c91c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_BinarySearch_m73AEF26151ECF1B26993AB5AC1E24A39A11BEF85_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_mD4855E8A0328B86B7D88C279EB078BA489FDCA98_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m4693B973FF22676227AD4DD51A55ACD335A446C9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mDBFFC2F10BE878B4B2BD1C8A7ED360E021270E56_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mF964698424AC2C8C2C9CBBC0589AFAF723BCEF0F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5E6AE49A253142418262384B43F7C4D8AAB97FAB_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mCBAADEB33A9E0DBFDF92FD8D2EDFD85BA2CCF3B4_RuntimeMethod_var)
    ;
    DAT_1151c91c = '\x01';
  }
  local_28 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  bStack_1c = 0;
  uStack_1b = 0;
  uStack_1a = 0;
  local_40 = 0.0;
  local_58._0_2_ = 0;
  local_58._2_2_ = 0;
  local_58._4_2_ = 0;
  local_58._6_2_ = 0;
  local_58._8_2_ = 0;
  local_58._10_2_ = 0;
  local_58._12_2_ = 0;
  local_58._14_2_ = 0;
  pLVar9 = param_1->___decorUpdates_12;
  local_48 = 0;
  if (pLVar9 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
    uVar39 = pLVar9->____size_2;
    if ((int)uVar39 < 1) {
      pLVar10 = param_1->___lastDecorRemovals_17;
      if (pLVar10 != (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) {
        uVar39 = pLVar10->____size_2;
        if ((int)uVar39 < 1) {
          pLVar9 = param_1->___decorPropagations_13;
          if (pLVar9 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
            uVar39 = pLVar9->____size_2;
            if ((int)uVar39 < 1) {
              pLVar11 = (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)
                        param_1->___decorToCollapse_14;
              if (pLVar11 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
                if (pLVar11->____size_2 < 1) {
                  pLVar11 = (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)
                            param_1->___decorToBuild_15;
                  if (pLVar11 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
                    if (pLVar11->____size_2 < 1) {
                      return false;
                    }
                    iVar40 = pLVar11->____size_2 + -1;
                    pAVar34 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                        ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)
                                         local_3c,pLVar11,iVar40,
                                         List_1_get_Item_m5E6AE49A253142418262384B43F7C4D8AAB97FAB_RuntimeMethod_var
                                        );
                    local_14 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                               (pAVar34->___hexPos_0).___x_0;
                    iStack_10 = (pAVar34->___hexPos_0).___y_1;
                    pIStack_c = *(Il2CppObject **)&pAVar34->___height_1;
                    iStack_8 = pAVar34->___actionId_4;
                    if ((param_1->___decorToBuild_15 !=
                         (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) &&
                       (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                   param_1->___decorToBuild_15,iVar40,
                                   List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                                  ),
                       local_14 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) {
                      if (pIStack_c != (Il2CppObject *)local_14->___existanceIndex_9) {
                        return true;
                      }
                      if ((ushort)iStack_10 != local_14->___lastPropagation_11) {
                        return true;
                      }
                      if ((param_1->___master_4 !=
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                         (pMVar12 = param_1->___master_4->___moduleBuilder_16,
                         pMVar12 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0))
                      {
                        ModuleBuilder_ApplyDecor_m2484BCF6216A5BA6B700EB399EF6F2E833EE7C5F
                                  (pMVar12,local_14,(MethodInfo *)0x0);
                        return true;
                      }
                    }
                  }
                }
                else {
                  iVar40 = pLVar11->____size_2 + -1;
                  pAVar34 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                      ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_3c,
                                       pLVar11,iVar40,
                                       List_1_get_Item_m5E6AE49A253142418262384B43F7C4D8AAB97FAB_RuntimeMethod_var
                                      );
                  local_14 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                             (pAVar34->___hexPos_0).___x_0;
                  iStack_10 = (pAVar34->___hexPos_0).___y_1;
                  pIStack_c = *(Il2CppObject **)&pAVar34->___height_1;
                  iStack_8 = pAVar34->___actionId_4;
                  if ((param_1->___decorToCollapse_14 !=
                       (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) &&
                     (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                 param_1->___decorToCollapse_14,iVar40,
                                 List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                                ), local_14 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0
                     )) {
                    if (pIStack_c != (Il2CppObject *)local_14->___existanceIndex_9) {
                      return true;
                    }
                    if ((ushort)iStack_10 != local_14->___lastPropagation_11) {
                      return true;
                    }
                    if (local_14->___possibleModules_18 !=
                        (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                      if (local_14->___possibleModules_18->____size_2 == 1) {
                        return true;
                      }
                      if ((param_1->___master_4 !=
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                         (pGVar13 = param_1->___master_4->___graph_7,
                         pGVar13 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
                        pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                            ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)
                                             local_f0,pGVar13,local_14,(uchar)iStack_8,
                                             (MethodInfo *)0x0);
                        local_2c = 0x1c;
                        uVar39 = 1;
                        local_c0 = (pRVar35->___r0_0).___qube_0;
                        uStack_bc = *(undefined4 *)&(pRVar35->___r0_0).___indexInOther_1;
                        pQStack_b8 = (pRVar35->___r1_1).___qube_0;
                        uStack_b4 = *(undefined4 *)&(pRVar35->___r1_1).___indexInOther_1;
                        local_68 = (pRVar35->___r2_2).___qube_0;
                        uStack_64 = *(undefined4 *)&(pRVar35->___r2_2).___indexInOther_1;
                        pQStack_60 = (pRVar35->___r3_3).___qube_0;
                        uStack_5c = *(undefined4 *)&(pRVar35->___r3_3).___indexInOther_1;
                        local_78 = (pRVar35->___r4_4).___qube_0;
                        uStack_74 = *(undefined4 *)&(pRVar35->___r4_4).___indexInOther_1;
                        pQStack_70 = (pRVar35->___r5_5).___qube_0;
                        uStack_6c = *(undefined4 *)&(pRVar35->___r5_5).___indexInOther_1;
                        while (pLVar14 = local_14->___possibleModules_18,
                              pLVar14 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                          if (pLVar14->____size_2 <= (int)uVar39) {
                            return true;
                          }
                          if ((uint)pLVar14->____size_2 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                      ((MethodInfo *)0x0);
                          }
                          puVar1 = (undefined4 *)
                                   ((int)&pLVar14->____items_1->m_Items[0].___sides_0.___v00_0 +
                                   local_2c);
                          local_94 = *puVar1;
                          uStack_90 = puVar1[1];
                          uStack_8c = puVar1[2];
                          uStack_88 = puVar1[3];
                          uVar4 = *(undefined8 *)
                                   ((int)&pLVar14->____items_1->m_Items[0].___sides_0.___v4_8 +
                                   local_2c);
                          local_84 = uVar4;
                          if (pLVar14 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                          break;
                          iVar40 = pLVar14->____size_2 + -1;
                          if ((int)uVar39 < iVar40) {
                            local_84._4_4_ = SUB84((ulonglong)uVar4 >> 0x20,0);
                            OVar30 = local_84._4_4_;
                            do {
                              if (local_14->___possibleModules_18 ==
                                  (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                              goto LAB_103f41fe;
                              pOVar36 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                  ((
                                                  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)(local_f0 + 0x14),
                                                  local_14->___possibleModules_18,iVar40,
                                                  List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                  );
                              local_3c._0_4_ = *(undefined4 *)&pOVar36->___sides_0;
                              local_3c._4_2_ = (pOVar36->___sides_0).___v10_2;
                              local_3c._6_2_ = (pOVar36->___sides_0).___v11_3;
                              local_3c._8_4_ = *(undefined4 *)&(pOVar36->___sides_0).___v20_4;
                              iStack_30._0_2_ = (pOVar36->___sides_0).___v30_6;
                              iStack_30._2_2_ = (pOVar36->___sides_0).___v31_7;
                              local_18 = pOVar36->___cost_2;
                              uVar4 = *(undefined8 *)&(pOVar36->___sides_0).___v4_8;
                              uStack_20 = (ushort)uVar4;
                              uStack_1e = (undefined2)((ulonglong)uVar4 >> 0x10);
                              bStack_1c = (byte)((ulonglong)uVar4 >> 0x20);
                              uStack_1b = (undefined1)((ulonglong)uVar4 >> 0x28);
                              uStack_1a = (undefined2)((ulonglong)uVar4 >> 0x30);
                              if (param_1->___master_4 ==
                                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                              goto LAB_103f41fe;
                              local_b0._0_2_ = (pOVar36->___sides_0).___v00_0;
                              local_b0._2_2_ = (pOVar36->___sides_0).___v01_1;
                              uStack_ac._0_2_ = (pOVar36->___sides_0).___v10_2;
                              uStack_ac._2_2_ = (pOVar36->___sides_0).___v11_3;
                              uStack_a8._0_2_ = (pOVar36->___sides_0).___v20_4;
                              uStack_a8._2_2_ = (pOVar36->___sides_0).___v21_5;
                              uStack_a4._0_2_ = (pOVar36->___sides_0).___v30_6;
                              uStack_a4._2_2_ = (pOVar36->___sides_0).___v31_7;
                              pMVar15 = param_1->___master_4->___moduleLibrary_8;
                              uVar4 = *(undefined8 *)&(pOVar36->___sides_0).___v4_8;
                              local_a0 = uVar4;
                              if (pMVar15 ==
                                  (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)
                              goto LAB_103f41fe;
                              local_a0._4_4_ = SUB84((ulonglong)uVar4 >> 0x20,0);
                              OVar29 = local_a0._4_4_;
                              bVar31 = ModuleLibrary_GetDecorOverlap_mC97CC29D9D3B604A85705E34C1A0B5EA91C0E9F8
                                                 (pMVar15,OVar30,OVar29,(MethodInfo *)0x0);
                              if (bVar31) {
                                OVar18.___sides_0.___v5_9 = uStack_1e;
                                OVar18.___sides_0.___v4_8 = uStack_20;
                                OVar18.___orientedModule_1.___moduleIndex_0._0_1_ = bStack_1c;
                                OVar18.___orientedModule_1.___moduleIndex_0._1_1_ = uStack_1b;
                                OVar18.___orientedModule_1._2_2_ = uStack_1a;
                                OVar18.___sides_0.___v10_2 = local_3c._4_2_;
                                OVar18.___sides_0.___v11_3 = local_3c._6_2_;
                                OVar18.___sides_0.___v00_0 = local_3c._0_2_;
                                OVar18.___sides_0.___v01_1 = local_3c._2_2_;
                                OVar18.___sides_0.___v20_4 = local_3c._8_2_;
                                OVar18.___sides_0.___v21_5 = local_3c._10_2_;
                                OVar18.___sides_0.___v30_6 = (undefined2)iStack_30;
                                OVar18.___sides_0.___v31_7 = iStack_30._2_2_;
                                OVar18.___cost_2 = local_18;
                                RVar20.___r0_0._4_4_ = uStack_bc;
                                RVar20.___r0_0.___qube_0 = local_c0;
                                RVar20.___r1_1.___qube_0 = pQStack_b8;
                                RVar20.___r1_1._4_4_ = uStack_b4;
                                RVar20.___r2_2.___qube_0 = local_68;
                                RVar20.___r2_2._4_4_ = uStack_64;
                                RVar20.___r3_3.___qube_0 = pQStack_60;
                                RVar20.___r3_3._4_4_ = uStack_5c;
                                RVar20.___r4_4.___qube_0 = local_78;
                                RVar20.___r4_4._4_4_ = uStack_74;
                                RVar20.___r5_5.___qube_0 = pQStack_70;
                                RVar20.___r5_5._4_4_ = uStack_6c;
                                WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
                                          (param_1,local_14,OVar18,iVar40,RVar20,(MethodInfo *)0x0);
                              }
                              iVar40 = iVar40 + -1;
                            } while ((int)uVar39 < iVar40);
                          }
                          uVar39 = uVar39 + 1;
                          local_2c = local_2c + 0x1c;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar39 <= uVar39 - 1) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              pPVar37 = pLVar9->____items_1->m_Items + (uVar39 - 1);
              local_14 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                          &((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)
                           &pPVar37->___qube_0)->___dateData_44;
              iStack_10 = *(int *)&pPVar37->___propagationIndex_1;
              pIStack_c = (Il2CppObject *)pPVar37->___existanceIndex_2;
              iStack_8 = *(int *)&pPVar37->___sideVariationMask_3;
              if ((pLVar9 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) &&
                 (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar9,uVar39 - 1,
                             List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                            ), pQVar41 = local_14,
                 local_14 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) {
                if (pIStack_c != (Il2CppObject *)local_14->___existanceIndex_9) {
                  return true;
                }
                if ((ushort)iStack_10 != local_14->___lastPropagation_11) {
                  return true;
                }
                if (local_14->___possibleModules_18 !=
                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                  if (local_14->___possibleModules_18->____size_2 < 2) {
                    return true;
                  }
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pGVar13 = param_1->___master_4->___graph_7,
                     pGVar13 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
                    pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                        ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)
                                         local_f0,pGVar13,local_14,(uchar)iStack_8,(MethodInfo *)0x0
                                        );
                    local_120.___r0_0.___qube_0 = (pRVar35->___r0_0).___qube_0;
                    local_120.___r0_0.___indexInOther_1 = (pRVar35->___r0_0).___indexInOther_1;
                    local_120.___r0_0._5_3_ = *(undefined3 *)&(pRVar35->___r0_0).field_0x5;
                    local_120.___r1_1.___qube_0 = (pRVar35->___r1_1).___qube_0;
                    local_120.___r1_1.___indexInOther_1 = (pRVar35->___r1_1).___indexInOther_1;
                    local_120.___r1_1._5_3_ = *(undefined3 *)&(pRVar35->___r1_1).field_0x5;
                    local_120.___r2_2.___qube_0 = (pRVar35->___r2_2).___qube_0;
                    local_120.___r2_2.___indexInOther_1 = (pRVar35->___r2_2).___indexInOther_1;
                    local_120.___r2_2._5_3_ = *(undefined3 *)&(pRVar35->___r2_2).field_0x5;
                    local_120.___r3_3.___qube_0 = (pRVar35->___r3_3).___qube_0;
                    local_120.___r3_3.___indexInOther_1 = (pRVar35->___r3_3).___indexInOther_1;
                    local_120.___r3_3._5_3_ = *(undefined3 *)&(pRVar35->___r3_3).field_0x5;
                    local_120.___r4_4.___qube_0 = (pRVar35->___r4_4).___qube_0;
                    local_120.___r4_4.___indexInOther_1 = (pRVar35->___r4_4).___indexInOther_1;
                    local_120.___r4_4._5_3_ = *(undefined3 *)&(pRVar35->___r4_4).field_0x5;
                    local_120.___r5_5.___qube_0 = (pRVar35->___r5_5).___qube_0;
                    local_120.___r5_5.___indexInOther_1 = (pRVar35->___r5_5).___indexInOther_1;
                    local_120.___r5_5._5_3_ = *(undefined3 *)&(pRVar35->___r5_5).field_0x5;
                    bVar32 = 0;
                    param_1 = (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0;
                    do {
                      bVar31 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                                         ((uchar)iStack_8,(uint)bVar32,(MethodInfo *)0x0);
                      if (bVar31) {
                        RVar42 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                           (&local_120,(uint)bVar32,(MethodInfo *)0x0);
                        local_18 = RVar42._4_4_;
                        pQVar38 = RVar42.___qube_0;
                        if (RVar42.___indexInOther_1 != -1) {
                          if (pQVar38 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                          goto LAB_103f41fe;
                          bVar31 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                                             (pQVar38,(MethodInfo *)0x0);
                          if ((!bVar31) &&
                             (pQVar38->___lastPropagation_11 < pQVar41->___lastPropagation_11)) {
                            uStack_22 = 0;
                            bStack_1c = 0;
                            uStack_1b = 0;
                            uStack_1a = 0;
                            uStack_20 = (ushort)pQVar38->___existanceIndex_9;
                            uStack_1e = (undefined2)(pQVar38->___existanceIndex_9 >> 0x10);
                            uStack_24 = (ushort)iStack_10;
                            local_28 = pQVar38;
                            bStack_1c = WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
                                                  (pWVar28,pQVar38,(MethodInfo *)0x0);
                            bStack_1c = bStack_1c & ~(byte)(1 << ((int)SUB41(local_18,0) & 0x1fU));
                            pQVar38->___lastPropagation_11 = pQVar41->___lastPropagation_11;
                            if (pWVar28->___decorPropagations_13 ==
                                (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0)
                            goto LAB_103f41fe;
                            KVar23.___key_0.___dateData_44._2_2_ = uStack_22;
                            KVar23.___key_0.___dateData_44._0_2_ = uStack_24;
                            KVar23.___key_0.___dateData_44._6_2_ = uStack_1e;
                            KVar23.___key_0.___dateData_44._4_2_ = uStack_20;
                            KVar23.___value_1._1_1_ = uStack_1b;
                            KVar23.___value_1._0_1_ = bStack_1c;
                            KVar23.___value_1._2_2_ = uStack_1a;
                            KVar23._12_4_ =
                                 List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var
                            ;
                            List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                       pWVar28->___decorPropagations_13,KVar23,unaff_EDI);
                            if (pWVar28->___decorToBuild_15 ==
                                (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0)
                            goto LAB_103f41fe;
                            KVar24.___key_0.___dateData_44._2_2_ = uStack_22;
                            KVar24.___key_0.___dateData_44._0_2_ = uStack_24;
                            KVar24.___key_0.___dateData_44._6_2_ = uStack_1e;
                            KVar24.___key_0.___dateData_44._4_2_ = uStack_20;
                            KVar24.___value_1._1_1_ = uStack_1b;
                            KVar24.___value_1._0_1_ = bStack_1c;
                            KVar24.___value_1._2_2_ = uStack_1a;
                            KVar24._12_4_ =
                                 List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var
                            ;
                            List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                       pWVar28->___decorToBuild_15,KVar24,unaff_EDI);
                          }
                        }
                      }
                      bVar32 = param_1._3_1_ + 1;
                      param_1 = (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)
                                ((uint)bVar32 << 0x18);
                    } while ((char)bVar32 < '\x06');
                    iStack_8 = CONCAT31(iStack_8._1_3_,pQVar41->___decorSideVariationMask_6);
                    if (pWVar28->___decorToCollapse_14 !=
                        (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                      KVar25.___key_0.___dateData_44._4_4_ = pIStack_c;
                      KVar25.___key_0.___dateData_44._0_4_ = iStack_10;
                      KVar25.___value_1 = (Il2CppObject *)iStack_8;
                      KVar25._12_4_ =
                           List_1_BinarySearch_m73AEF26151ECF1B26993AB5AC1E24A39A11BEF85_RuntimeMethod_var
                      ;
                      uVar39 = List_1_BinarySearch_m85B751E54852B49F54EC3BAEE70E72997EAE7791_gshared
                                         ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                          pWVar28->___decorToCollapse_14,KVar25,unaff_EDI);
                      if ((int)uVar39 < 0) {
                        uVar39 = ~uVar39;
                      }
                      if (pWVar28->___decorToCollapse_14 !=
                          (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                        KVar22.___key_0.___dateData_44._4_4_ = iStack_10;
                        KVar22.___key_0.___dateData_44._0_4_ = local_14;
                        KVar22.___value_1 = pIStack_c;
                        KVar22._12_4_ = iStack_8;
                        List_1_Insert_m5F5BC42B80F57E1B8FA405688DC3D52919175528_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                   pWVar28->___decorToCollapse_14,uVar39,KVar22,
                                   List_1_Insert_mD4855E8A0328B86B7D88C279EB078BA489FDCA98_RuntimeMethod_var
                                  );
                        return true;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar39 <= uVar39 - 1) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pLVar2 = pLVar10->____items_1->m_Items + (uVar39 - 1);
          uVar3 = pLVar2->___qube_0;
          uVar5 = pLVar2->___side_1;
          uVar6 = pLVar2->___sideIndex_2;
          uVar8 = pLVar2->field_0x7;
          uVar7 = CONCAT11(uVar8,uVar6);
          fVar16 = *(float *)&pLVar10->____items_1->m_Items[uVar39 - 1].___propagationIndex_3;
          uStack_24 = (undefined2)uVar3;
          uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
          bStack_1c = SUB41(fVar16,0);
          uStack_1b = (undefined1)((uint)fVar16 >> 8);
          uStack_1a = (undefined2)((uint)fVar16 >> 0x10);
          uStack_20 = uVar5;
          uStack_1e = uVar7;
          if (pLVar10 != (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) {
            List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared
                      ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar10,uVar39 - 1,
                       List_1_RemoveAt_m4693B973FF22676227AD4DD51A55ACD335A446C9_RuntimeMethod_var);
            pQVar41 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                      CONCAT22(uStack_22,uStack_24);
            if (pQVar41 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
              if (CONCAT11(uStack_1b,bStack_1c) != pQVar41->___lastPropagation_11) {
                return true;
              }
              if (param_1->___master_4 !=
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
                pGVar13 = param_1->___master_4->___graph_7;
                local_18 = (float)(int)(char)uStack_1e;
                if (pGVar13 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
                  pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                      ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)
                                       local_f0,pGVar13,pQVar41,
                                       pQVar41->___decorSideVariationMask_6 &
                                       ~(byte)(1 << ((uint)local_18 & 0x1f)),(MethodInfo *)0x0);
                  local_3c._0_4_ = (pRVar35->___r0_0).___qube_0;
                  local_3c._4_4_ = *(undefined4 *)&(pRVar35->___r0_0).___indexInOther_1;
                  local_3c._8_4_ = (pRVar35->___r1_1).___qube_0;
                  iStack_30 = *(int *)&(pRVar35->___r1_1).___indexInOther_1;
                  local_78 = (pRVar35->___r2_2).___qube_0;
                  uStack_74 = *(undefined4 *)&(pRVar35->___r2_2).___indexInOther_1;
                  pQStack_70 = (pRVar35->___r3_3).___qube_0;
                  uStack_6c = *(undefined4 *)&(pRVar35->___r3_3).___indexInOther_1;
                  local_68 = (pRVar35->___r4_4).___qube_0;
                  uStack_64 = *(undefined4 *)&(pRVar35->___r4_4).___indexInOther_1;
                  pQStack_60 = (pRVar35->___r5_5).___qube_0;
                  uStack_5c = *(undefined4 *)&(pRVar35->___r5_5).___indexInOther_1;
                  if (pQVar41->___possibleModules_18 !=
                      (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                    uVar39 = pQVar41->___possibleModules_18->____size_2 - 1;
                    if ((int)uVar39 < 1) {
                      return true;
                    }
                    iVar40 = uVar39 * 0x1c;
                    while (pLVar14 = pQVar41->___possibleModules_18,
                          pLVar14 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                      if ((uint)pLVar14->____size_2 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      pOVar17 = pLVar14->____items_1;
                      puVar1 = (undefined4 *)
                               ((int)&pOVar17->m_Items[0].___sides_0.___v00_0 + iVar40);
                      local_58._0_4_ = *puVar1;
                      local_58._4_4_ = puVar1[1];
                      local_58._8_4_ = puVar1[2];
                      local_58._12_4_ = puVar1[3];
                      local_48 = *(undefined8 *)
                                  ((int)&pOVar17->m_Items[0].___sides_0.___v4_8 + iVar40);
                      local_40 = *(float *)((int)&pOVar17->m_Items[0].___cost_2 + iVar40);
                      uVar33 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                         ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)
                                          local_58,(int)local_18,(MethodInfo *)0x0);
                      uVar4 = local_48;
                      pQVar41 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                                CONCAT22(uStack_22,uStack_24);
                      if (uStack_20 == uVar33) {
                        OVar19.___sides_0.___v10_2 = local_58._4_2_;
                        OVar19.___sides_0.___v11_3 = local_58._6_2_;
                        OVar19.___sides_0.___v00_0 = local_58._0_2_;
                        OVar19.___sides_0.___v01_1 = local_58._2_2_;
                        OVar19.___sides_0.___v20_4 = local_58._8_2_;
                        OVar19.___sides_0.___v21_5 = local_58._10_2_;
                        OVar19.___sides_0.___v30_6 = local_58._12_2_;
                        OVar19.___sides_0.___v31_7 = local_58._14_2_;
                        OVar19.___sides_0.___v4_8 = (undefined2)local_48;
                        OVar19.___sides_0.___v5_9 = local_48._2_2_;
                        OVar19.___orientedModule_1.___moduleIndex_0 = local_48._4_2_;
                        OVar19.___orientedModule_1.___flags_1 = local_48._6_1_;
                        OVar19.___orientedModule_1._3_1_ = local_48._7_1_;
                        OVar19.___cost_2 = local_40;
                        RVar21.___r0_0._4_4_ = local_3c._4_4_;
                        RVar21.___r0_0.___qube_0 =
                             (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_3c._0_4_;
                        RVar21.___r1_1.___qube_0 =
                             (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_3c._8_4_;
                        RVar21.___r1_1._4_4_ = iStack_30;
                        RVar21.___r2_2.___qube_0 = local_78;
                        RVar21.___r2_2._4_4_ = uStack_74;
                        RVar21.___r3_3.___qube_0 = pQStack_70;
                        RVar21.___r3_3._4_4_ = uStack_6c;
                        RVar21.___r4_4.___qube_0 = local_68;
                        RVar21.___r4_4._4_4_ = uStack_64;
                        RVar21.___r5_5.___qube_0 = pQStack_60;
                        RVar21.___r5_5._4_4_ = uStack_5c;
                        local_48 = uVar4;
                        WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
                                  (param_1,pQVar41,OVar19,uVar39,RVar21,(MethodInfo *)0x0);
                      }
                      uVar39 = uVar39 - 1;
                      iVar40 = iVar40 + -0x1c;
                      if ((int)uVar39 < 1) {
                        return true;
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
    else {
      if (uVar39 <= uVar39 - 1) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pPVar37 = pLVar9->____items_1->m_Items + (uVar39 - 1);
      local_14 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                  &((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&pPVar37->___qube_0)->
                   ___dateData_44;
      iStack_10 = *(int *)&pPVar37->___propagationIndex_1;
      pIStack_c = (Il2CppObject *)pPVar37->___existanceIndex_2;
      iStack_8 = *(int *)&pPVar37->___sideVariationMask_3;
      if ((pLVar9 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) &&
         (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar9,uVar39 - 1,
                     List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var),
         pQVar41 = local_14, local_14 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) {
        if ((ushort)iStack_10 != local_14->___lastPropagation_11) {
          return true;
        }
        if (pIStack_c != (Il2CppObject *)local_14->___existanceIndex_9) {
          return true;
        }
        local_14->___lastPropagation_11 = local_14->___lastPropagation_11 + 1;
        iStack_10 = CONCAT22(iStack_10._2_2_,(ushort)iStack_10 + 1);
        if (param_1->___decorToBuild_15 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0)
        {
          KVar26.___key_0.___dateData_44._4_4_ = pIStack_c;
          KVar26.___key_0.___dateData_44._0_4_ = iStack_10;
          KVar26.___value_1 = (Il2CppObject *)iStack_8;
          KVar26._12_4_ = List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
          List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___decorToBuild_15
                     ,KVar26,unaff_EDI);
          if (pQVar41->___possibleModules_18 !=
              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
            if (pQVar41->___possibleModules_18->____size_2 == 1) {
              bVar32 = pQVar41->___decorSideVariationMask_6;
              bStack_1c = WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
                                    (param_1,pQVar41,(MethodInfo *)0x0);
              uVar39 = pQVar41->___existanceIndex_9;
              bStack_1c = bStack_1c | bVar32;
              uStack_20 = (ushort)uVar39;
              uStack_1e = (undefined2)(uVar39 >> 0x10);
              local_28 = pQVar41;
              uStack_24 = (ushort)iStack_10;
              if (param_1->___decorPropagations_13 ==
                  (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) goto LAB_103f41fe;
              KVar27.___key_0.___dateData_44._2_2_ = uStack_22;
              KVar27.___key_0.___dateData_44._0_2_ = (ushort)iStack_10;
              KVar27.___value_1._1_1_ = uStack_1b;
              KVar27.___value_1._0_1_ = bStack_1c;
              KVar27.___value_1._2_2_ = uStack_1a;
              KVar27.___key_0.___dateData_44._4_4_ = uVar39;
              KVar27._12_4_ = List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var
              ;
              List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                         param_1->___decorPropagations_13,KVar27,unaff_EDI);
            }
            return true;
          }
        }
      }
    }
  }
LAB_103f41fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
