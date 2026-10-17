// RVA 0x3f3000 | Placemaker.WaveFunctionCollapse$$Iterate1
// PDB: WaveFunctionCollapse_Iterate1_m0C5AA36B072C60019E049DC3FFE51CC3A209BE6C
// Body: [[103f3000, 103f3109] [103f310d, 103f3219] [103f322c, 103f3399] [103f33a0, 103f3655] [103f365c, 103f3756] [103f375d, 103f37f9]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 102f5590 SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 103f1e80 WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
// 103f4950 WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
// 103f52d0 WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1350 List_1_BinarySearch_m85B751E54852B49F54EC3BAEE70E72997EAE7791_gshared
// 105d1c80 List_1_Insert_m5F5BC42B80F57E1B8FA405688DC3D52919175528_gshared
// 105d1f60 List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10809850 Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 1092a850 List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3bfa0 Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294

bool __cdecl
WaveFunctionCollapse_Iterate1_m0C5AA36B072C60019E049DC3FFE51CC3A209BE6C
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  uint uVar1;
  LastRemovedStruct_t542E4169FAE1B649014DD3DBA024AA6C6D0CFB7F *pLVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 uVar8;
  undefined4 uVar7;
  undefined1 uVar10;
  List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *pLVar11;
  List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *pLVar12;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar13;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar14;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar15;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar16;
  float fVar17;
  float fVar18;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar19;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar20;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 RVar21;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 RVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar25;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar26;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar27;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar28;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar29;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar30;
  undefined8 uVar31;
  bool bVar32;
  ushort uVar33;
  Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA *pPVar34;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar35;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar36;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar37;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar39;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar40;
  int iVar41;
  byte bVar42;
  uint uVar43;
  MethodInfo *unaff_EDI;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar44;
  undefined4 uVar45;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_d8;
  undefined1 local_a8 [32];
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_88;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_78;
  float fStack_74;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_70;
  float fStack_6c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_68;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_64;
  undefined1 local_58 [16];
  undefined8 local_48;
  float local_40;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_3c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_38;
  undefined8 local_2c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  ushort uStack_1c;
  undefined2 uStack_1a;
  byte bStack_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_14;
  float fStack_10;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_c;
  float fStack_8;
  undefined2 uVar9;

  if (DAT_1151c91b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
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
    DAT_1151c91b = '\x01';
  }
  local_58._0_2_ = 0;
  local_58._2_2_ = 0;
  local_58._4_2_ = 0;
  local_58._6_2_ = 0;
  local_58._8_2_ = 0;
  local_58._10_2_ = 0;
  local_58._12_2_ = 0;
  local_58._14_2_ = 0;
  local_40 = 0.0;
  local_48 = 0;
  pLVar11 = param_1->___lastRemovals_16;
  local_24 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  bStack_18 = 0;
  uStack_17 = 0;
  uStack_16 = 0;
  if (pLVar11 != (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) {
    uVar43 = pLVar11->____size_2;
    if ((int)uVar43 < 1) {
      pLVar12 = param_1->___propagations_9;
      if (pLVar12 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
        uVar43 = pLVar12->____size_2;
        if ((int)uVar43 < 1) {
          pLVar12 = param_1->___toCollapse_11;
          if (pLVar12 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
            uVar43 = pLVar12->____size_2;
            if ((int)uVar43 < 1) {
              return false;
            }
            uVar1 = uVar43 - 1;
            if (uVar43 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pPVar34 = pLVar12->____items_1->m_Items + (uVar43 - 1);
            pQVar37 = pPVar34->___qube_0;
            VStack_38.___x_2 = *(float *)&pPVar34->___propagationIndex_1;
            VStack_38.___y_3 = (float)pPVar34->___existanceIndex_2;
            VStack_38.___z_4 = *(float *)&pPVar34->___sideVariationMask_3;
            local_3c = pQVar37;
            local_14 = pQVar37;
            fStack_10 = VStack_38.___x_2;
            pQStack_c = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)VStack_38.___y_3;
            fStack_8 = VStack_38.___z_4;
            if (pQVar37 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
              bVar32 = Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
                                 (pQVar37,(MethodInfo *)0x0);
              if (((!bVar32) &&
                  (pQStack_c ==
                   (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pQVar37->___existanceIndex_9))
                 && (uVar33 = SUB42(fStack_10,0), uVar33 == pQVar37->___lastPropagation_11)) {
                pLVar13 = pQVar37->___possibleModules_18;
                if (pLVar13 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                goto LAB_103f37f5;
                if (pLVar13->____size_2 == 1) {
                  pOVar36 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                      ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                        *)(local_a8 + 0x14),pLVar13,0,
                                       List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                      );
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pMVar16 = param_1->___master_4->___moduleBuilder_16,
                     pMVar16 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0)) {
                    uVar45 = (undefined4)
                             ((ulonglong)*(undefined8 *)&(pOVar36->___sides_0).___v4_8 >> 0x20);
                    OVar25.___orientedModule_1.___moduleIndex_0 = (short)uVar45;
                    OVar25.___orientedModule_1.___flags_1 = (char)((uint)uVar45 >> 0x10);
                    OVar25.___orientedModule_1._3_1_ = (char)((uint)uVar45 >> 0x18);
                    OVar25.___sides_0 = pOVar36->___sides_0;
                    OVar25.___cost_2 = pOVar36->___cost_2;
                    ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                              (pMVar16,pQVar37,OVar25,(MethodInfo *)0x0);
                    pQVar37->___awaitingRebuilding_14 = false;
                    if (param_1->___toCollapse_11 !=
                        (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                      List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                 param_1->___toCollapse_11,uVar1,
                                 List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                                );
                      uVar33 = uVar33 + 1;
                      pQVar37->___lastPropagation_11 = uVar33;
                      fStack_10 = (float)CONCAT22(fStack_10._2_2_,uVar33);
                      if (param_1->___decorUpdates_12 !=
                          (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                        KVar28.___key_0.___dateData_44._4_4_ = pQStack_c;
                        KVar28.___key_0.___dateData_44._0_4_ = fStack_10;
                        KVar28.___value_1 = (Il2CppObject *)fStack_8;
                        KVar28._12_4_ =
                             List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
                        List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                   param_1->___decorUpdates_12,KVar28,unaff_EDI);
                        return true;
                      }
                    }
                  }
                  goto LAB_103f37f5;
                }
                if (pLVar13->____size_2 != 0) {
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pGVar14 = param_1->___master_4->___graph_7,
                     pGVar14 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
                    pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                        ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)
                                         local_a8,pGVar14,pQVar37,SUB41(VStack_38.___z_4,0),
                                         (MethodInfo *)0x0);
                    local_14 = (pRVar35->___r0_0).___qube_0;
                    fStack_10 = *(float *)&(pRVar35->___r0_0).___indexInOther_1;
                    pQStack_c = (pRVar35->___r1_1).___qube_0;
                    fStack_8 = *(float *)&(pRVar35->___r1_1).___indexInOther_1;
                    local_3c = (pRVar35->___r2_2).___qube_0;
                    VStack_38.___x_2 = *(float *)&(pRVar35->___r2_2).___indexInOther_1;
                    VStack_38.___y_3 = (float)(pRVar35->___r3_3).___qube_0;
                    VStack_38.___z_4 = *(float *)&(pRVar35->___r3_3).___indexInOther_1;
                    local_68 = (pRVar35->___r4_4).___qube_0;
                    VStack_64.___x_2 = *(float *)&(pRVar35->___r4_4).___indexInOther_1;
                    VStack_64.___y_3 = (float)(pRVar35->___r5_5).___qube_0;
                    VStack_64.___z_4 = *(float *)&(pRVar35->___r5_5).___indexInOther_1;
                    if (pQVar37->___possibleModules_18 !=
                        (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                      uVar43 = pQVar37->___possibleModules_18->____size_2 - 1;
                      if ((int)uVar43 < 1) {
                        return true;
                      }
                      iVar41 = uVar43 * 0x1c;
                      while( true ) {
                        pLVar13 = pQVar37->___possibleModules_18;
                        local_2c = CONCAT44(pLVar13,(undefined4)local_2c);
                        if (pLVar13 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                        break;
                        if ((uint)pLVar13->____size_2 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                    ((MethodInfo *)0x0);
                        }
                        pOVar15 = pLVar13->____items_1;
                        OVar19._16_8_ =
                             *(undefined8 *)((int)&pOVar15->m_Items[0].___sides_0.___v4_8 + iVar41);
                        OVar19.___sides_0._0_16_ =
                             *(undefined1 (*) [16])
                              ((int)&pOVar15->m_Items[0].___sides_0.___v00_0 + iVar41);
                        OVar19.___cost_2 = *(float *)((int)&pOVar15->m_Items[0].___cost_2 + iVar41);
                        RVar21.___r0_0._4_4_ = fStack_10;
                        RVar21.___r0_0.___qube_0 = local_14;
                        RVar21.___r1_1.___qube_0 = pQStack_c;
                        RVar21.___r1_1._4_4_ = fStack_8;
                        RVar21.___r2_2.___qube_0 = local_3c;
                        RVar21.___r2_2._4_4_ = VStack_38.___x_2;
                        RVar21.___r3_3.___qube_0 =
                             (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)VStack_38.___y_3;
                        RVar21.___r3_3._4_4_ = VStack_38.___z_4;
                        RVar21.___r4_4.___qube_0 = local_68;
                        RVar21.___r4_4._4_4_ = VStack_64.___x_2;
                        RVar21.___r5_5.___qube_0 =
                             (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)VStack_64.___y_3;
                        RVar21.___r5_5._4_4_ = VStack_64.___z_4;
                        bVar32 = WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
                                           (param_1,pQVar37,OVar19,uVar43,RVar21,(MethodInfo *)0x0);
                        if (bVar32) {
                          WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
                                    (param_1,pQVar37,(MethodInfo *)0x0);
                          return true;
                        }
                        uVar43 = uVar43 - 1;
                        iVar41 = iVar41 + -0x1c;
                        if ((int)uVar43 < 1) {
                          return true;
                        }
                      }
                    }
                  }
                  goto LAB_103f37f5;
                }
              }
              if (param_1->___toCollapse_11 !=
                  (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           param_1->___toCollapse_11,uVar1,
                           List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                          );
                return true;
              }
            }
          }
        }
        else {
          if (uVar43 <= uVar43 - 1) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pPVar34 = pLVar12->____items_1->m_Items + (uVar43 - 1);
          local_14 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                      &((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&pPVar34->___qube_0)->
                       ___dateData_44;
          fStack_10 = *(float *)&pPVar34->___propagationIndex_1;
          pQStack_c = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pPVar34->___existanceIndex_2
          ;
          fStack_8 = *(float *)&pPVar34->___sideVariationMask_3;
          if ((pLVar12 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) &&
             (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar12,uVar43 - 1,
                         List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var
                        ), pQVar37 = local_14,
             local_14 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) {
            bVar32 = Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
                               (local_14,(MethodInfo *)0x0);
            if (bVar32) {
              return true;
            }
            if (pQStack_c !=
                (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pQVar37->___existanceIndex_9) {
              return true;
            }
            if ((pQVar37->___existanceIndex_9 & 1) != 0) {
              return true;
            }
            if (fStack_10._0_2_ != pQVar37->___lastPropagation_11) {
              return true;
            }
            if ((param_1->___master_4 !=
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
               (pGVar14 = param_1->___master_4->___graph_7,
               pGVar14 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
              pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                  ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)local_a8,
                                   pGVar14,pQVar37,SUB41(fStack_8,0),(MethodInfo *)0x0);
              uVar43 = 0;
              local_d8.___r0_0.___qube_0 = (pRVar35->___r0_0).___qube_0;
              local_d8.___r0_0.___indexInOther_1 = (pRVar35->___r0_0).___indexInOther_1;
              local_d8.___r0_0._5_3_ = *(undefined3 *)&(pRVar35->___r0_0).field_0x5;
              local_d8.___r1_1.___qube_0 = (pRVar35->___r1_1).___qube_0;
              local_d8.___r1_1.___indexInOther_1 = (pRVar35->___r1_1).___indexInOther_1;
              local_d8.___r1_1._5_3_ = *(undefined3 *)&(pRVar35->___r1_1).field_0x5;
              local_d8.___r2_2.___qube_0 = (pRVar35->___r2_2).___qube_0;
              local_d8.___r2_2.___indexInOther_1 = (pRVar35->___r2_2).___indexInOther_1;
              local_d8.___r2_2._5_3_ = *(undefined3 *)&(pRVar35->___r2_2).field_0x5;
              local_d8.___r3_3.___qube_0 = (pRVar35->___r3_3).___qube_0;
              local_d8.___r3_3.___indexInOther_1 = (pRVar35->___r3_3).___indexInOther_1;
              local_d8.___r3_3._5_3_ = *(undefined3 *)&(pRVar35->___r3_3).field_0x5;
              local_d8.___r4_4.___qube_0 = (pRVar35->___r4_4).___qube_0;
              local_d8.___r4_4.___indexInOther_1 = (pRVar35->___r4_4).___indexInOther_1;
              local_d8.___r4_4._5_3_ = *(undefined3 *)&(pRVar35->___r4_4).field_0x5;
              local_d8.___r5_5.___qube_0 = (pRVar35->___r5_5).___qube_0;
              local_d8.___r5_5.___indexInOther_1 = (pRVar35->___r5_5).___indexInOther_1;
              local_d8.___r5_5._5_3_ = *(undefined3 *)&(pRVar35->___r5_5).field_0x5;
              do {
                RVar44 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                   (&local_d8,uVar43,(MethodInfo *)0x0);
                pQVar37 = RVar44.___qube_0;
                if (RVar44.___indexInOther_1 != -1) {
                  if (pQVar37 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                  goto LAB_103f37f5;
                  bVar32 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                                     (pQVar37,(MethodInfo *)0x0);
                  if ((!bVar32) &&
                     (pQVar37->___lastPropagation_11 < local_14->___lastPropagation_11)) {
                    pQVar37->___lastPropagation_11 = local_14->___lastPropagation_11;
                    local_2c = CONCAT44(param_1->___propagations_9,(undefined4)local_2c);
                    uStack_1e = 0;
                    bStack_18 = 0;
                    uStack_17 = 0;
                    uStack_16 = 0;
                    uStack_1c = (ushort)pQVar37->___existanceIndex_9;
                    uStack_1a = (undefined2)(pQVar37->___existanceIndex_9 >> 0x10);
                    uStack_20 = fStack_10._0_2_;
                    local_24 = pQVar37;
                    bStack_18 = WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
                                          (param_1,pQVar37,(MethodInfo *)0x0);
                    bStack_18 = bStack_18 & ~(byte)(1 << ((int)RVar44.___indexInOther_1 & 0x1fU));
                    if (local_2c._4_4_ == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)
                    goto LAB_103f37f5;
                    KVar29.___key_0.___dateData_44._2_2_ = uStack_1e;
                    KVar29.___key_0.___dateData_44._0_2_ = uStack_20;
                    KVar29.___key_0.___dateData_44._6_2_ = uStack_1a;
                    KVar29.___key_0.___dateData_44._4_2_ = uStack_1c;
                    KVar29.___value_1._1_1_ = uStack_17;
                    KVar29.___value_1._0_1_ = bStack_18;
                    KVar29.___value_1._2_2_ = uStack_16;
                    KVar29._12_4_ =
                         List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
                    List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                              (local_2c._4_4_,KVar29,unaff_EDI);
                    pTVar38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         local_14,(MethodInfo *)0x0);
                    if (pTVar38 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_103f37f5;
                    pVVar39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&VStack_64,pTVar38,(MethodInfo *)0x0);
                    uVar4 = pVVar39->___x_2;
                    uVar7 = pVVar39->___y_3;
                    fVar17 = pVVar39->___z_4;
                    uStack_1c = (ushort)uVar4;
                    uStack_1a = (undefined2)((uint)uVar4 >> 0x10);
                    bStack_18 = (byte)uVar7;
                    uStack_17 = (undefined1)((uint)uVar7 >> 8);
                    uStack_16 = (undefined2)((uint)uVar7 >> 0x10);
                    pTVar38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pQVar37,(MethodInfo *)0x0);
                    if (pTVar38 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_103f37f5;
                    pVVar39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&VStack_38,pTVar38,(MethodInfo *)0x0);
                    local_2c._0_4_ = pVVar39->___x_2;
                    local_2c._4_4_ =
                         (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pVVar39->___y_3;
                    fVar18 = pVVar39->___z_4;
                    pCVar40 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
                                        (&local_88,(MethodInfo *)0x0);
                    local_78 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pCVar40->___r_0;
                    fStack_74 = pCVar40->___g_1;
                    pQStack_70 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pCVar40->___b_2;
                    fStack_6c = pCVar40->___a_3;
                    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                );
                    }
                    VVar23.___x_2._2_2_ = uStack_1a;
                    VVar23.___x_2._0_2_ = uStack_1c;
                    VVar23.___y_3._1_1_ = uStack_17;
                    VVar23.___y_3._0_1_ = bStack_18;
                    VVar23.___y_3._2_2_ = uStack_16;
                    VVar23.___z_4 = fVar17;
                    VVar24.___z_4 = fVar18;
                    VVar24.___x_2 = (float)(undefined4)local_2c;
                    VVar24.___y_3 = (float)local_2c._4_4_;
                    CVar26.___g_1 = fStack_74;
                    CVar26.___r_0 = (float)local_78;
                    CVar26.___b_2 = (float)pQStack_70;
                    CVar26.___a_3 = fStack_6c;
                    Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
                              (VVar23,VVar24,CVar26,(MethodInfo *)0x0);
                  }
                }
                bVar42 = (char)uVar43 + 1;
                uVar43 = (uint)bVar42;
              } while ((char)bVar42 < '\x06');
              fStack_8 = (float)CONCAT31(fStack_8._1_3_,local_14->___sideVariationMask_5);
              if (param_1->___toCollapse_11 !=
                  (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                KVar30.___key_0.___dateData_44._4_4_ = pQStack_c;
                KVar30.___key_0.___dateData_44._0_4_ = fStack_10;
                KVar30.___value_1 = (Il2CppObject *)fStack_8;
                KVar30._12_4_ =
                     List_1_BinarySearch_m73AEF26151ECF1B26993AB5AC1E24A39A11BEF85_RuntimeMethod_var
                ;
                uVar43 = List_1_BinarySearch_m85B751E54852B49F54EC3BAEE70E72997EAE7791_gshared
                                   ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                    param_1->___toCollapse_11,KVar30,unaff_EDI);
                if ((int)uVar43 < 0) {
                  uVar43 = ~uVar43;
                }
                if (param_1->___toCollapse_11 !=
                    (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
                  KVar27.___key_0.___dateData_44._4_4_ = fStack_10;
                  KVar27.___key_0.___dateData_44._0_4_ = local_14;
                  KVar27.___value_1 = (Il2CppObject *)pQStack_c;
                  KVar27._12_4_ = fStack_8;
                  List_1_Insert_m5F5BC42B80F57E1B8FA405688DC3D52919175528_gshared
                            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                             param_1->___toCollapse_11,uVar43,KVar27,
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
    else {
      if (uVar43 <= uVar43 - 1) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pLVar2 = pLVar11->____items_1->m_Items + (uVar43 - 1);
      uVar5 = pLVar2->___qube_0;
      uVar6 = pLVar2->___side_1;
      uVar8 = pLVar2->___sideIndex_2;
      uVar10 = pLVar2->field_0x7;
      uVar9 = CONCAT11(uVar10,uVar8);
      fVar17 = *(float *)&pLVar11->____items_1->m_Items[uVar43 - 1].___propagationIndex_3;
      uStack_20 = (undefined2)uVar5;
      uStack_1e = (undefined2)((uint)uVar5 >> 0x10);
      bStack_18 = SUB41(fVar17,0);
      uStack_17 = (undefined1)((uint)fVar17 >> 8);
      uStack_16 = (undefined2)((uint)fVar17 >> 0x10);
      uStack_1c = uVar6;
      uStack_1a = uVar9;
      if (pLVar11 != (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) {
        List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared
                  ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar11,uVar43 - 1,
                   List_1_RemoveAt_m4693B973FF22676227AD4DD51A55ACD335A446C9_RuntimeMethod_var);
        pQVar37 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)CONCAT22(uStack_1e,uStack_20);
        if (pQVar37 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
          bVar32 = Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
                             (pQVar37,(MethodInfo *)0x0);
          if ((bVar32) || (CONCAT11(uStack_17,bStack_18) != pQVar37->___lastPropagation_11)) {
            return true;
          }
          if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             && (pGVar14 = param_1->___master_4->___graph_7,
                pGVar14 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
            local_2c = CONCAT44((int)(char)(byte)uStack_1a,(undefined4)local_2c);
            pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)local_a8,
                                 pGVar14,pQVar37,~('\x01' << ((byte)uStack_1a & 0x1f)),
                                 (MethodInfo *)0x0);
            local_78 = (pRVar35->___r0_0).___qube_0;
            fStack_74 = *(float *)&(pRVar35->___r0_0).___indexInOther_1;
            pQStack_70 = (pRVar35->___r1_1).___qube_0;
            fStack_6c = *(float *)&(pRVar35->___r1_1).___indexInOther_1;
            local_14 = (pRVar35->___r2_2).___qube_0;
            fStack_10 = *(float *)&(pRVar35->___r2_2).___indexInOther_1;
            pQStack_c = (pRVar35->___r3_3).___qube_0;
            fStack_8 = *(float *)&(pRVar35->___r3_3).___indexInOther_1;
            local_3c = (pRVar35->___r4_4).___qube_0;
            VStack_38.___x_2 = *(float *)&(pRVar35->___r4_4).___indexInOther_1;
            VStack_38.___y_3 = (float)(pRVar35->___r5_5).___qube_0;
            VStack_38.___z_4 = *(float *)&(pRVar35->___r5_5).___indexInOther_1;
            if (pQVar37->___possibleModules_18 !=
                (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
              uVar43 = pQVar37->___possibleModules_18->____size_2 - 1;
              if ((int)uVar43 < 0) {
                return true;
              }
              iVar41 = uVar43 * 0x1c;
              while (pLVar13 = pQVar37->___possibleModules_18,
                    pLVar13 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                if ((uint)pLVar13->____size_2 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pOVar15 = pLVar13->____items_1;
                puVar3 = (undefined4 *)((int)&pOVar15->m_Items[0].___sides_0.___v00_0 + iVar41);
                local_58._0_4_ = *puVar3;
                local_58._4_4_ = puVar3[1];
                local_58._8_4_ = puVar3[2];
                local_58._12_4_ = puVar3[3];
                local_48 = *(undefined8 *)((int)&pOVar15->m_Items[0].___sides_0.___v4_8 + iVar41);
                local_40 = *(float *)((int)&pOVar15->m_Items[0].___cost_2 + iVar41);
                uVar33 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                   ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)
                                    local_58,(int)local_2c._4_4_,(MethodInfo *)0x0);
                uVar31 = local_48;
                pQVar37 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                          CONCAT22(uStack_1e,uStack_20);
                if (uStack_1c == uVar33) {
                  OVar20.___sides_0.___v10_2 = local_58._4_2_;
                  OVar20.___sides_0.___v11_3 = local_58._6_2_;
                  OVar20.___sides_0.___v00_0 = local_58._0_2_;
                  OVar20.___sides_0.___v01_1 = local_58._2_2_;
                  OVar20.___sides_0.___v20_4 = local_58._8_2_;
                  OVar20.___sides_0.___v21_5 = local_58._10_2_;
                  OVar20.___sides_0.___v30_6 = local_58._12_2_;
                  OVar20.___sides_0.___v31_7 = local_58._14_2_;
                  OVar20.___sides_0.___v4_8 = (undefined2)local_48;
                  OVar20.___sides_0.___v5_9 = local_48._2_2_;
                  OVar20.___orientedModule_1.___moduleIndex_0 = local_48._4_2_;
                  OVar20.___orientedModule_1.___flags_1 = local_48._6_1_;
                  OVar20.___orientedModule_1._3_1_ = local_48._7_1_;
                  OVar20.___cost_2 = local_40;
                  RVar22.___r0_0._4_4_ = fStack_74;
                  RVar22.___r0_0.___qube_0 = local_78;
                  RVar22.___r1_1.___qube_0 = pQStack_70;
                  RVar22.___r1_1._4_4_ = fStack_6c;
                  RVar22.___r2_2.___qube_0 = local_14;
                  RVar22.___r2_2._4_4_ = fStack_10;
                  RVar22.___r3_3.___qube_0 = pQStack_c;
                  RVar22.___r3_3._4_4_ = fStack_8;
                  RVar22.___r4_4.___qube_0 = local_3c;
                  RVar22.___r4_4._4_4_ = VStack_38.___x_2;
                  RVar22.___r5_5.___qube_0 =
                       (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)VStack_38.___y_3;
                  RVar22.___r5_5._4_4_ = VStack_38.___z_4;
                  local_48 = uVar31;
                  WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
                            (param_1,pQVar37,OVar20,uVar43,RVar22,(MethodInfo *)0x0);
                }
                iVar41 = iVar41 + -0x1c;
                uVar43 = uVar43 - 1;
                if ((int)uVar43 < 0) {
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_103f37f5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
