// RVA 0xe11020 | Placemaker.GridGenerator$$GetQuad
// PDB: GridGenerator_GetQuad_m8FB62B267BA13583D1FDE8F488885920DD5CE3EC
// Body: [[10e11020, 10e1122e] [10e11235, 10e11263] [10e1126a, 10e11292] [10e11299, 10e112c4] [10e112cb, 10e112f9] [10e11303, 10e1131e] [10e11325, 10e1135a] [10e11361, 10e1137c] [10e11383, 10e113b5] [10e113bc, 10e113d7] [10e113de, 10e11413] [10e1141a, 10e11435] [10e11439, 10e11692]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040f9e0 HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02

Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB * __cdecl
GridGenerator_GetQuad_m8FB62B267BA13583D1FDE8F488885920DD5CE3EC
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_3,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLVar5;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLVar6;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *pLVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar21;
  byte bVar22;
  undefined3 uVar23;
  int iVar24;
  byte bVar25;
  bool bVar26;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar32;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar33;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar34;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_50;
  int local_44;
  float fStack_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  Il2CppObject *local_10;
  HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *local_c;
  byte local_6;
  byte local_5;

  if (DAT_11522672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    DAT_11522672 = '\x01';
  }
  local_c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0;
  local_10 = (Il2CppObject *)0x0;
  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar27 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      (&local_50,param_2,(MethodInfo *)0x0);
  uVar1 = piVar27->___x_0;
  uVar3 = piVar27->___y_1;
  uVar2 = piVar27->___x_0;
  uVar4 = piVar27->___y_1;
  local_3c = (float)piVar27->___z_2;
  fVar21.___y_1 = (float)(int)uVar3;
  fVar21.___x_0 = (float)(int)uVar1;
  fVar21.___z_2 = local_3c;
  local_44 = uVar2;
  fStack_40 = (float)uVar4;
  piVar27 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                      (&local_50,param_1,fVar21,(MethodInfo *)0x0);
  iVar32 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(*piVar27,(MethodInfo *)0x0);
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
LAB_10e1168e:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  bVar26 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                     ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      param_1->___patchDict_10,iVar32,(Il2CppObject **)&local_c,
                      Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                     );
  if (bVar26) {
    if (local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) goto LAB_10e1168e;
    bVar26 = HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676(local_c,(MethodInfo *)0x0);
    if (bVar26) {
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1168e;
      bVar26 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          param_1->___bitDict_8,iVar32,&local_10,
                          Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                         );
      if (bVar26) {
        if (local_10 == (Il2CppObject *)0x0) goto LAB_10e1168e;
        if (*(char *)&local_10[3].field0_0x0 == '\x05') {
          if ((local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) ||
             (local_c->___quads_2 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0))
          goto LAB_10e1168e;
          local_3c = (float)local_c->___quads_2->____size_2;
          local_14 = 0;
          if (0 < (int)local_3c) {
            uVar29 = 2;
            do {
              if ((local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) ||
                 (pLVar5 = local_c->___quads_2,
                 pLVar5 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0))
              goto LAB_10e1168e;
              if ((uint)pLVar5->____size_2 <= local_14) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if ((local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) ||
                 (pLVar6 = local_c->___quads_2,
                 pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0))
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29 - 1) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              param_2.___y_1._3_1_ = pLVar6->____items_1->m_Items[uVar29 - 1];
              if ((local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) ||
                 (pLVar6 = local_c->___quads_2,
                 pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0))
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_5 = pLVar6->____items_1->m_Items[uVar29];
              if ((local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) ||
                 (pLVar6 = local_c->___quads_2,
                 pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0))
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29 + 1) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_6 = pLVar6->____items_1->m_Items[uVar29 + 1];
              if (local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0)
              goto LAB_10e1168e;
              pLVar6 = local_c->___quads_2;
              pLVar7 = local_c->___verts_3;
              if (pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= local_14) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pLVar7 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0)
              goto LAB_10e1168e;
              uVar30 = (uint)pLVar6->____items_1->m_Items[local_14];
              if ((uint)pLVar7->____size_2 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_30 = pLVar7->____items_1->m_Items[uVar30].___x_0;
              local_1c = pLVar7->____items_1->m_Items[uVar30].___y_1;
              if (local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0)
              goto LAB_10e1168e;
              pLVar6 = local_c->___quads_2;
              pLVar7 = local_c->___verts_3;
              if (pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29 - 1) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pLVar7 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0)
              goto LAB_10e1168e;
              uVar30 = (uint)pLVar6->____items_1->m_Items[uVar29 - 1];
              if ((uint)pLVar7->____size_2 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_38 = pLVar7->____items_1->m_Items[uVar30].___x_0;
              local_18 = pLVar7->____items_1->m_Items[uVar30].___y_1;
              if (local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0)
              goto LAB_10e1168e;
              pLVar6 = local_c->___quads_2;
              pLVar7 = local_c->___verts_3;
              if (pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pLVar7 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0)
              goto LAB_10e1168e;
              uVar30 = (uint)pLVar6->____items_1->m_Items[uVar29];
              if ((uint)pLVar7->____size_2 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_20 = pLVar7->____items_1->m_Items[uVar30].___x_0;
              local_24 = pLVar7->____items_1->m_Items[uVar30].___y_1;
              if (local_c == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0)
              goto LAB_10e1168e;
              pLVar6 = local_c->___quads_2;
              pLVar7 = local_c->___verts_3;
              if (pLVar6 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
              goto LAB_10e1168e;
              if ((uint)pLVar6->____size_2 <= uVar29 + 1) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pLVar7 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0)
              goto LAB_10e1168e;
              uVar30 = (uint)pLVar6->____items_1->m_Items[uVar29 + 1];
              if ((uint)pLVar7->____size_2 <= uVar30) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_34 = 0;
              local_28 = pLVar7->____items_1->m_Items[uVar30].___x_0;
              local_2c = pLVar7->____items_1->m_Items[uVar30].___y_1;
              iVar24 = local_38;
              bVar25 = pLVar5->____items_1->m_Items[local_14];
              do {
                bVar22 = bVar25;
                iVar31 = iVar24;
                iVar28 = local_18;
                iVar24 = local_20;
                local_18 = local_24;
                iVar11 = local_28;
                iVar8 = local_30;
                bVar25 = param_2.___y_1._3_1_;
                if ((((local_30 == param_3.___x_0) && (local_1c == param_3.___y_1)) &&
                    (iVar31 == param_4.___x_0)) && (iVar28 == param_4.___y_1)) {
                  *(undefined4 *)__return_storage_ptr__ = 0;
                  (__return_storage_ptr__->___p0_5).___x_0 = 0.0;
                  (__return_storage_ptr__->___p0_5).___y_1 = 0.0;
                  (__return_storage_ptr__->___p1_6).___x_0 = 0.0;
                  (__return_storage_ptr__->___p1_6).___y_1 = 0.0;
                  (__return_storage_ptr__->___p2_7).___x_0 = 0.0;
                  (__return_storage_ptr__->___p2_7).___y_1 = 0.0;
                  (__return_storage_ptr__->___p3_8).___x_0 = 0.0;
                  (__return_storage_ptr__->___p3_8).___y_1 = 0.0;
                  (__return_storage_ptr__->___v1_2).___y_1 = iVar28;
                  (__return_storage_ptr__->___v0_1).___x_0 = local_30;
                  (__return_storage_ptr__->___v2_3).___x_0 = local_20;
                  (__return_storage_ptr__->___v0_1).___y_1 = local_1c;
                  (__return_storage_ptr__->___v3_4).___x_0 = local_28;
                  (__return_storage_ptr__->___v1_2).___x_0 = iVar31;
                  (__return_storage_ptr__->___v2_3).___y_1 = local_24;
                  (__return_storage_ptr__->___v3_4).___y_1 = local_2c;
                  local_18 = iVar28;
                  if ((local_10 != (Il2CppObject *)0x0) &&
                     (local_10[3].monitor != (MonitorData *)0x0)) {
                    VVar33 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                       ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                        local_10[3].monitor,(uint)bVar22,
                                        List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                       );
                    fVar10 = fStack_40;
                    fStack_40 = VVar33.___x_0;
                    local_3c = VVar33.___y_1;
                    (__return_storage_ptr__->___p0_5).___x_0 = fVar10;
                    (__return_storage_ptr__->___p0_5).___y_1 = local_3c;
                    if ((local_10 != (Il2CppObject *)0x0) &&
                       (local_10[3].monitor != (MonitorData *)0x0)) {
                      VVar33 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                         ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                          local_10[3].monitor,(uint)param_2.___y_1._3_1_,
                                          List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                         );
                      (__return_storage_ptr__->___p1_6).___x_0 = (float)param_2.___x_0;
                      param_2.___y_1 = (int)VVar33.___y_1;
                      (__return_storage_ptr__->___p1_6).___y_1 = (float)param_2.___y_1;
                      if ((local_10 != (Il2CppObject *)0x0) &&
                         (local_10[3].monitor != (MonitorData *)0x0)) {
                        VVar34 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                           ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                            local_10[3].monitor,(uint)local_5,
                                            List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                           );
                        param_2.___x_0 = (int)VVar33.___x_0;
                        (__return_storage_ptr__->___p2_7).___x_0 = (float)param_2.___x_0;
                        param_2.___y_1 = (int)VVar34.___y_1;
                        (__return_storage_ptr__->___p2_7).___y_1 = (float)param_2.___y_1;
                        if ((local_10 != (Il2CppObject *)0x0) &&
                           (local_10[3].monitor != (MonitorData *)0x0)) {
                          VVar33 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                              local_10[3].monitor,(uint)local_6,
                                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                             );
                          (__return_storage_ptr__->___p3_8).___x_0 = VVar33.___x_0;
                          (__return_storage_ptr__->___p3_8).___y_1 = VVar33.___y_1;
                          uVar23 = *(undefined3 *)&__return_storage_ptr__->field_0x1;
                          iVar24 = (__return_storage_ptr__->___v0_1).___x_0;
                          iVar8 = (__return_storage_ptr__->___v0_1).___y_1;
                          iVar11 = (__return_storage_ptr__->___v1_2).___x_0;
                          fVar10 = (__return_storage_ptr__->___p3_8).___y_1;
                          iVar28 = (__return_storage_ptr__->___v1_2).___y_1;
                          iVar31 = (__return_storage_ptr__->___v2_3).___x_0;
                          iVar9 = (__return_storage_ptr__->___v2_3).___y_1;
                          iVar12 = (__return_storage_ptr__->___v3_4).___x_0;
                          iVar13 = (__return_storage_ptr__->___v3_4).___y_1;
                          fVar14 = (__return_storage_ptr__->___p0_5).___x_0;
                          fVar15 = (__return_storage_ptr__->___p0_5).___y_1;
                          fVar16 = (__return_storage_ptr__->___p1_6).___x_0;
                          fVar17 = (__return_storage_ptr__->___p1_6).___y_1;
                          fVar18 = (__return_storage_ptr__->___p2_7).___x_0;
                          fVar19 = (__return_storage_ptr__->___p2_7).___y_1;
                          fVar20 = (__return_storage_ptr__->___p3_8).___x_0;
                          __return_storage_ptr__->___quadIndex_0 =
                               __return_storage_ptr__->___quadIndex_0;
                          *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar23;
                          (__return_storage_ptr__->___v0_1).___x_0 = iVar24;
                          (__return_storage_ptr__->___v0_1).___y_1 = iVar8;
                          (__return_storage_ptr__->___v1_2).___x_0 = iVar11;
                          (__return_storage_ptr__->___v1_2).___y_1 = iVar28;
                          (__return_storage_ptr__->___v2_3).___x_0 = iVar31;
                          (__return_storage_ptr__->___v2_3).___y_1 = iVar9;
                          (__return_storage_ptr__->___v3_4).___x_0 = iVar12;
                          (__return_storage_ptr__->___v3_4).___y_1 = iVar13;
                          (__return_storage_ptr__->___p0_5).___x_0 = fVar14;
                          (__return_storage_ptr__->___p0_5).___y_1 = fVar15;
                          (__return_storage_ptr__->___p1_6).___x_0 = fVar16;
                          (__return_storage_ptr__->___p1_6).___y_1 = fVar17;
                          (__return_storage_ptr__->___p2_7).___x_0 = fVar18;
                          (__return_storage_ptr__->___p2_7).___y_1 = fVar19;
                          (__return_storage_ptr__->___p3_8).___x_0 = fVar20;
                          (__return_storage_ptr__->___p3_8).___y_1 = fVar10;
                          return __return_storage_ptr__;
                        }
                      }
                    }
                  }
                  goto LAB_10e1168e;
                }
                param_2.___y_1._3_1_ = local_5;
                local_5 = local_6;
                iVar9 = local_1c;
                local_20 = local_28;
                local_28 = local_30;
                local_34 = local_34 + 1;
                local_24 = local_2c;
                local_2c = local_1c;
                local_30 = iVar31;
                local_1c = iVar28;
                local_6 = bVar22;
              } while (local_34 < 4);
              uVar29 = uVar29 + 4;
              local_14 = local_14 + 4;
            } while ((int)local_14 < (int)local_3c);
          }
        }
      }
    }
  }
  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
  return __return_storage_ptr__;
}
