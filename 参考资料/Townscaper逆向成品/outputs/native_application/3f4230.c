// RVA 0x3f4230 | Placemaker.WaveFunctionCollapse$$LastRemoved
// PDB: WaveFunctionCollapse_LastRemoved_mB6EAAFB492314AA7FF5B0C5C9B1F4520604B4605
// Body: [[103f4230, 103f4326] [103f432d, 103f446a]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 103f4230 WaveFunctionCollapse_LastRemoved_mB6EAAFB492314AA7FF5B0C5C9B1F4520604B4605
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
// 11036980 List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared

void __cdecl
WaveFunctionCollapse_LastRemoved_mB6EAAFB492314AA7FF5B0C5C9B1F4520604B4605
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,ushort param_3,schar param_4,
          MethodInfo *param_5)

{
  undefined4 *puVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar3;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar4;
  int iVar5;
  ushort uVar6;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar7;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_b4 [48];
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_84;
  undefined1 local_54 [16];
  undefined8 local_44;
  float local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined4 local_20;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;

  if (DAT_1151c923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    DAT_1151c923 = '\x01';
  }
  local_38._0_2_ = 0;
  local_38._2_2_ = 0;
  local_38._4_2_ = 0;
  local_38._6_2_ = 0;
  local_38._8_2_ = 0;
  local_38._10_2_ = 0;
  local_38._12_2_ = 0;
  local_38._14_2_ = 0;
  local_20 = 0;
  local_28 = 0;
  local_44 = 0;
  local_3c = 0.0;
  local_54._0_2_ = 0;
  local_54._2_2_ = 0;
  local_54._4_2_ = 0;
  local_54._6_2_ = 0;
  local_54._8_2_ = 0;
  local_54._10_2_ = 0;
  local_54._12_2_ = 0;
  local_54._14_2_ = 0;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar2 = param_1->___master_4->___graph_7,
     pGVar2 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    pRVar7 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                       ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)local_b4,pGVar2,
                        param_2,0xff,(MethodInfo *)0x0);
    local_84.___r0_0.___qube_0 = (pRVar7->___r0_0).___qube_0;
    local_84.___r0_0.___indexInOther_1 = (pRVar7->___r0_0).___indexInOther_1;
    local_84.___r0_0._5_3_ = *(undefined3 *)&(pRVar7->___r0_0).field_0x5;
    local_84.___r1_1.___qube_0 = (pRVar7->___r1_1).___qube_0;
    local_84.___r1_1.___indexInOther_1 = (pRVar7->___r1_1).___indexInOther_1;
    local_84.___r1_1._5_3_ = *(undefined3 *)&(pRVar7->___r1_1).field_0x5;
    local_84.___r2_2.___qube_0 = (pRVar7->___r2_2).___qube_0;
    local_84.___r2_2.___indexInOther_1 = (pRVar7->___r2_2).___indexInOther_1;
    local_84.___r2_2._5_3_ = *(undefined3 *)&(pRVar7->___r2_2).field_0x5;
    local_84.___r3_3.___qube_0 = (pRVar7->___r3_3).___qube_0;
    local_84.___r3_3.___indexInOther_1 = (pRVar7->___r3_3).___indexInOther_1;
    local_84.___r3_3._5_3_ = *(undefined3 *)&(pRVar7->___r3_3).field_0x5;
    local_84.___r4_4.___qube_0 = (pRVar7->___r4_4).___qube_0;
    local_84.___r4_4.___indexInOther_1 = (pRVar7->___r4_4).___indexInOther_1;
    local_84.___r4_4._5_3_ = *(undefined3 *)&(pRVar7->___r4_4).field_0x5;
    local_84.___r5_5.___qube_0 = (pRVar7->___r5_5).___qube_0;
    local_84.___r5_5.___indexInOther_1 = (pRVar7->___r5_5).___indexInOther_1;
    local_84.___r5_5._5_3_ = *(undefined3 *)&(pRVar7->___r5_5).field_0x5;
    if ((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
       (param_2->___possibleModules_18 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0))
    {
      uVar10 = param_2->___possibleModules_18->____size_2 - 1;
      if (-1 < (int)uVar10) {
        local_c = uVar10 * 0x1c;
        do {
          pLVar3 = param_2->___possibleModules_18;
          local_8 = uVar10;
          if (pLVar3 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f4466;
          if ((uint)pLVar3->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pOVar4 = pLVar3->____items_1;
          puVar1 = (undefined4 *)((int)&pOVar4->m_Items[0].___sides_0.___v00_0 + local_c);
          local_38._0_4_ = *puVar1;
          local_38._4_4_ = puVar1[1];
          local_38._8_4_ = puVar1[2];
          local_38._12_4_ = puVar1[3];
          local_28 = *(undefined8 *)((int)&pOVar4->m_Items[0].___sides_0.___v4_8 + local_c);
          local_20 = *(undefined4 *)((int)&pOVar4->m_Items[0].___cost_2 + local_c);
          uVar6 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                            ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)local_38,
                             (int)param_4,(MethodInfo *)0x0);
          if (param_3 == uVar6) {
            if (param_2->___possibleModules_18 ==
                (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f4466;
            List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_gshared
                      (param_2->___possibleModules_18,uVar10,
                       List_1_RemoveAt_m094AC30A841A8A9CC55084513C1222405935F5A1_RuntimeMethod_var);
            uVar11 = 0;
            do {
              local_10 = uVar11;
              local_1c = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                   (&local_84,uVar11,(MethodInfo *)0x0);
              if (local_1c.___indexInOther_1 != -1) {
                uVar6 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                  ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)local_38
                                   ,uVar11,(MethodInfo *)0x0);
                local_14 = (uint)uVar6;
                if (param_2->___possibleModules_18 ==
                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f4466;
                iVar5 = param_2->___possibleModules_18->____size_2;
                do {
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 0) {
                    WaveFunctionCollapse_LastRemoved_mB6EAAFB492314AA7FF5B0C5C9B1F4520604B4605
                              (param_1,local_1c.___qube_0,(ushort)local_14,
                               local_1c.___indexInOther_1,(MethodInfo *)0x0);
                    break;
                  }
                  if (param_2->___possibleModules_18 ==
                      (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f4466;
                  pOVar8 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                     ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                       *)(local_b4 + 0x14),param_2->___possibleModules_18,local_8,
                                      List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                     );
                  local_54._0_2_ = (pOVar8->___sides_0).___v00_0;
                  local_54._2_2_ = (pOVar8->___sides_0).___v01_1;
                  local_54._4_2_ = (pOVar8->___sides_0).___v10_2;
                  local_54._6_2_ = (pOVar8->___sides_0).___v11_3;
                  local_54._8_2_ = (pOVar8->___sides_0).___v20_4;
                  local_54._10_2_ = (pOVar8->___sides_0).___v21_5;
                  local_54._12_2_ = (pOVar8->___sides_0).___v30_6;
                  local_54._14_2_ = (pOVar8->___sides_0).___v31_7;
                  local_44 = *(undefined8 *)&(pOVar8->___sides_0).___v4_8;
                  local_3c = pOVar8->___cost_2;
                  uVar6 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                    ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)
                                     local_54,local_10,(MethodInfo *)0x0);
                } while (uVar6 != (ushort)local_14);
              }
              bVar9 = (char)uVar11 + 1;
              uVar11 = (uint)bVar9;
              uVar10 = local_8;
            } while ((char)bVar9 < '\x06');
          }
          uVar10 = uVar10 - 1;
          local_c = local_c + -0x1c;
        } while (-1 < (int)uVar10);
      }
      return;
    }
  }
LAB_103f4466:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
