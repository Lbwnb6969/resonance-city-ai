// RVA 0x3f50d0 | Placemaker.WaveFunctionCollapse$$RemovePossibleDecor
// PDB: WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
// Body: [[103f50d0, 103f52cd]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 11036980 List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared

void __cdecl
WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,
          OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB param_3,int param_4,
          Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 param_5,MethodInfo *param_6)

{
  int iVar1;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar2;
  uint7 uVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar8;
  byte bVar9;
  uint uVar10;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar11;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_58;
  undefined1 local_3c [16];
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  uint local_18;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar7;

  if (DAT_1151c920 == '\0') {
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
    DAT_1151c920 = '\x01';
  }
  local_2c = 0;
  local_24 = 0.0;
  local_20 = 0;
  local_18 = 0;
  local_3c._0_2_ = 0;
  local_3c._2_2_ = 0;
  local_3c._4_2_ = 0;
  local_3c._6_2_ = 0;
  local_3c._8_2_ = 0;
  local_3c._10_2_ = 0;
  local_3c._12_2_ = 0;
  local_3c._14_2_ = 0;
  if (((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
      (param_2->___possibleModules_18 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0))
     && (List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared
                   (param_2->___possibleModules_18,param_4,
                    List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_RuntimeMethod_var),
        param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    uVar10 = 0;
    do {
      local_10 = uVar10;
      uVar6 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                        (&param_3.___sides_0,uVar10,(MethodInfo *)0x0);
      RVar11._4_4_ = 0;
      RVar11.___qube_0 = local_14;
      local_8 = (uint)uVar6;
      if (uVar6 != 0) {
        RVar11 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                           (&param_5,uVar10,(MethodInfo *)0x0);
        pQVar7 = RVar11.___qube_0;
        cVar4 = RVar11.___indexInOther_1;
        if (cVar4 != -1) {
          local_14 = pQVar7;
          if (pQVar7 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
          bVar5 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                            (pQVar7,(MethodInfo *)0x0);
          RVar11._4_4_ = 0;
          RVar11.___qube_0 = local_14;
          if (!bVar5) {
            local_c = CONCAT31(local_c._1_3_,pQVar7->___decorSideVariationMask_6);
            bVar5 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                              (pQVar7->___decorSideVariationMask_6,(int)cVar4,(MethodInfo *)0x0);
            RVar11._4_4_ = 0;
            RVar11.___qube_0 = local_14;
            if (bVar5) {
              if (param_2->___possibleModules_18 ==
                  (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) break;
              iVar1 = param_2->___possibleModules_18->____size_2;
              do {
                iVar1 = iVar1 + -1;
                if (iVar1 < 1) {
                  local_18 = (uint)param_2->___lastPropagation_11;
                  local_20._0_6_ = CONCAT24((short)local_8,local_14);
                  uVar3 = CONCAT16(cVar4,(undefined6)local_20);
                  local_20 = (ulonglong)uVar3;
                  if (param_1->___lastDecorRemovals_17 ==
                      (List_1_tD74220FCA74EB315456406C4B64587ABE39EE0B8 *)0x0) goto LAB_103f52c9;
                  lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1._0_3_ = (int3)(uVar3 >> 0x20);
                  lVar2.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)local_14;
                  lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1._3_1_ = 0;
                  lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_2_ = param_2->___lastPropagation_11;
                  lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = 0;
                  List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                            ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                             param_1->___lastDecorRemovals_17,lVar2,
                             List_1_Add_m4A8809913D91BA45635D1D6C23A2B052E2A1B7CA_RuntimeMethod_var)
                  ;
                  RVar11._4_4_ = 0;
                  RVar11.___qube_0 = local_14;
                  break;
                }
                if (param_2->___possibleModules_18 ==
                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f52c9;
                pOVar8 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                   (&local_58,param_2->___possibleModules_18,iVar1,
                                    List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                   );
                local_3c._0_2_ = (pOVar8->___sides_0).___v00_0;
                local_3c._2_2_ = (pOVar8->___sides_0).___v01_1;
                local_3c._4_2_ = (pOVar8->___sides_0).___v10_2;
                local_3c._6_2_ = (pOVar8->___sides_0).___v11_3;
                local_3c._8_2_ = (pOVar8->___sides_0).___v20_4;
                local_3c._10_2_ = (pOVar8->___sides_0).___v21_5;
                local_3c._12_2_ = (pOVar8->___sides_0).___v30_6;
                local_3c._14_2_ = (pOVar8->___sides_0).___v31_7;
                local_2c = *(undefined8 *)&(pOVar8->___sides_0).___v4_8;
                local_24 = pOVar8->___cost_2;
                uVar6 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                  ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)local_3c
                                   ,local_10,(MethodInfo *)0x0);
                RVar11._4_4_ = 0;
                RVar11.___qube_0 = local_14;
              } while (uVar6 != (ushort)local_8);
            }
          }
        }
      }
      local_14 = RVar11.___qube_0;
      bVar9 = (char)uVar10 + 1;
      uVar10 = (uint)bVar9;
      if ('\x05' < (char)bVar9) {
        return;
      }
    } while( true );
  }
LAB_103f52c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
