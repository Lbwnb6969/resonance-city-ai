// RVA 0x3f4e50 | Placemaker.WaveFunctionCollapse$$QubeRemoved
// PDB: WaveFunctionCollapse_QubeRemoved_m7E669C478D18408105C68C8FC45337F5A545C790
// Body: [[103f4e50, 103f500a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3bb60 Debug_Break_m9F329399AFCF1871DD61583BD8EEB3F2E9B72C3A
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294

void __cdecl
WaveFunctionCollapse_QubeRemoved_m7E669C478D18408105C68C8FC45337F5A545C790
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,uchar param_3,MethodInfo *param_4)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar2;
  bool bVar3;
  byte bVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  int iVar6;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar7;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar8;
  byte bVar9;
  MethodInfo *unaff_EDI;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar10;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_74;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_44;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;

  if (DAT_1151c916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
    DAT_1151c916 = '\x01';
  }
  local_14 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    param_2->___awaitingRebuilding_14 = false;
    param_2->___awaitingGrass_15 = false;
    param_2->___lastPropagation_11 = 0;
    if (param_2->___possibleModules_18 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___possibleModules_18,
                 List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
      param_3 = param_3 & param_2->___sideVariationMask_5;
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar6 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                          (pTVar5,(MethodInfo *)0x0);
        if (iVar6 == 0) {
          param_3 = param_3 | 0xf;
        }
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pGVar1 = param_1->___master_4->___graph_7,
              pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
          pRVar7 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                             (&local_74,pGVar1,param_2,param_3,(MethodInfo *)0x0);
          bVar9 = 0;
          local_44.___r0_0.___qube_0 = (pRVar7->___r0_0).___qube_0;
          local_44.___r0_0.___indexInOther_1 = (pRVar7->___r0_0).___indexInOther_1;
          local_44.___r0_0._5_3_ = *(undefined3 *)&(pRVar7->___r0_0).field_0x5;
          local_44.___r1_1.___qube_0 = (pRVar7->___r1_1).___qube_0;
          local_44.___r1_1.___indexInOther_1 = (pRVar7->___r1_1).___indexInOther_1;
          local_44.___r1_1._5_3_ = *(undefined3 *)&(pRVar7->___r1_1).field_0x5;
          local_44.___r2_2.___qube_0 = (pRVar7->___r2_2).___qube_0;
          local_44.___r2_2.___indexInOther_1 = (pRVar7->___r2_2).___indexInOther_1;
          local_44.___r2_2._5_3_ = *(undefined3 *)&(pRVar7->___r2_2).field_0x5;
          local_44.___r3_3.___qube_0 = (pRVar7->___r3_3).___qube_0;
          local_44.___r3_3.___indexInOther_1 = (pRVar7->___r3_3).___indexInOther_1;
          local_44.___r3_3._5_3_ = *(undefined3 *)&(pRVar7->___r3_3).field_0x5;
          local_44.___r4_4.___qube_0 = (pRVar7->___r4_4).___qube_0;
          local_44.___r4_4.___indexInOther_1 = (pRVar7->___r4_4).___indexInOther_1;
          local_44.___r4_4._5_3_ = *(undefined3 *)&(pRVar7->___r4_4).field_0x5;
          local_44.___r5_5.___qube_0 = (pRVar7->___r5_5).___qube_0;
          local_44.___r5_5.___indexInOther_1 = (pRVar7->___r5_5).___indexInOther_1;
          local_44.___r5_5._5_3_ = *(undefined3 *)&(pRVar7->___r5_5).field_0x5;
          do {
            RVar10 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                               (&local_44,(uint)bVar9,(MethodInfo *)0x0);
            pQVar8 = RVar10.___qube_0;
            if (RVar10.___indexInOther_1 != 0xff) {
              if (pQVar8 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
              bVar3 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                                (pQVar8,(MethodInfo *)0x0);
              if (!bVar3) {
                pQVar8->___lastPropagation_11 = param_1->___propagationCounter_5;
                uStack_c = pQVar8->___existanceIndex_9;
                uStack_10 = (uint)param_1->___propagationCounter_5;
                bVar4 = ~('\x01' << (RVar10.___indexInOther_1 & 0x1fU));
                uStack_8 = (uint)bVar4;
                local_14 = pQVar8;
                if (param_1->___removeNeighbors_7 ==
                    (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) break;
                KVar2.___key_0.___dateData_44._4_4_ = uStack_c;
                KVar2.___key_0.___dateData_44._0_4_ = uStack_10;
                KVar2.___value_1._0_1_ = bVar4;
                KVar2.___value_1._1_3_ = 0;
                KVar2._12_4_ =
                List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
                List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           param_1->___removeNeighbors_7,KVar2,unaff_EDI);
              }
            }
            bVar9 = bVar9 + 1;
            if ('\x05' < (char)bVar9) {
              param_2->___sideVariationMask_5 = '\0';
              if (param_1->___doDebugBreak_20 != false) {
                if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
                }
                Debug_Break_m9F329399AFCF1871DD61583BD8EEB3F2E9B72C3A((MethodInfo *)0x0);
              }
              return;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
