// RVA 0xe125c0 | Placemaker.GridGenerator$$GetVertOrIterate
// PDB: GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
// Body: [[10e125c0, 10e12f05]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 100673c0 Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 10320540 Triplet_1__ctor_mFB91D05E4EDF5795AD17DFCC3A556094BF6133DE_gshared
// 10320580 Triplet_1_get_Item_m5DB336D3FAD0732ED56962C906736B98E522058C_gshared
// 10320670 Triplet_1_set_Item_m3F3ACCED5C18F05E69F5384EC3846A1F6474617A_gshared
// 103e2eb0 Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline
// 103ef580 Vert_AddQuad_mC116BD476DFEF5F3BB2DD0F5CBC80343CF75761B
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 10806af0 Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10957bb0 Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared
// 10e13470 GridGenerator_HexToPatchHexes_mB9BA2AEA3CF397B62EB12D81892932BECA961822
// 10e14000 GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C * __cdecl
GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
          (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_3,MethodInfo *param_4)

{
  float fVar1;
  MonitorData *pMVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar6;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar10;
  Il2CppObject *pIVar11;
  int iVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar21;
  int *piVar22;
  MethodInfo *unaff_EDI;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar23;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar24;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar25;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar26;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar27;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar28;
  float fVar29;
  int local_630 [106];
  char local_488;
  int local_480 [107];
  float local_2d4;
  uint local_2d0;
  String_t *local_2cc;
  uchar local_2c8 [424];
  Triplet_1_tC7913D26F008FB16B4239D118B85FC5E3A40A4B8 local_120;
  int3x3_t1164F7C264DD9B11A19FA20671EE3113194A242D local_fc;
  Triplet_1_t6B2E998372EB3F04FF58F2503C6068508B5CBB9B local_d8;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_cc;
  undefined1 local_88 [8];
  float local_80;
  float local_7c;
  float local_78;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_74;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_6c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_64;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_5c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_54;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_4c;
  SemaphoreImpl *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_34;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_28;
  Il2CppObject *local_20;
  uint local_1c;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *local_18;
  Il2CppObject *local_14;
  GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *local_10;
  int local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;

  if (DAT_11522677 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
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
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Triplet_1__ctor_mFB91D05E4EDF5795AD17DFCC3A556094BF6133DE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Triplet_1_get_Item_m28E71074507CB1EF5E7042E9C0E6E12078F6B3A8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Triplet_1_set_Item_m2843F76F1DB4D2A262F5E152DD69B0A6A2BBAB4F_RuntimeMethod_var
              );
    DAT_11522677 = '\x01';
  }
  local_fc.___c0_0.___x_0 = 0;
  local_fc.___c0_0.___y_1 = 0;
  local_fc.___c0_0.___z_2 = 0;
  local_fc.___c1_1.___x_0 = 0;
  local_fc.___c2_2.___z_2 = 0;
  local_fc.___c1_1.___y_1 = 0;
  local_fc.___c1_1.___z_2 = 0;
  local_fc.___c2_2.___x_0 = 0;
  local_fc.___c2_2.___y_1 = 0;
  local_1c = local_1c & 0xffffff00;
  memset((uchar *)__return_storage_ptr__,'\0',0x1b0);
  local_120.___v2_2.___z_2 = 0;
  local_10 = (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0;
  local_120.___v0_0.___x_0 = 0;
  local_120.___v0_0.___y_1 = 0;
  local_120.___v0_0.___z_2 = 0;
  local_120.___v1_1.___x_0 = 0;
  local_120.___v1_1.___y_1 = 0;
  local_120.___v1_1.___z_2 = 0;
  local_120.___v2_2.___x_0 = 0;
  local_120.___v2_2.___y_1 = 0;
  memset(&local_cc.___quadIndex_0,'\0',0x44);
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar16 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      (&local_34,param_2,(MethodInfo *)0x0);
  GridGenerator_HexToPatchHexes_mB9BA2AEA3CF397B62EB12D81892932BECA961822
            (param_1,*piVar16,&local_fc,(uchar *)&local_1c,(MethodInfo *)0x0);
  memset(local_2c8,'\0',0x1a8);
  local_2d0 = param_2.___x_0;
  local_2cc = (String_t *)param_2.___y_1;
  local_d8.___v2_2 = (Il2CppObject *)0x0;
  puVar20 = &local_2d0;
  pVVar21 = __return_storage_ptr__;
  for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
    (pVVar21->___hexPos_0).___x_0 = *puVar20;
    puVar20 = puVar20 + 1;
    pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar21->___hexPos_0).___y_1;
  }
  local_d8.___v0_0 = (Il2CppObject *)0x0;
  local_d8.___v1_1 = (Il2CppObject *)0x0;
  iVar5.___y_1 = local_fc.___c0_0.___y_1;
  iVar5.___x_0 = local_fc.___c0_0.___x_0;
  iVar5.___z_2 = local_fc.___c0_0.___z_2;
  iVar6.___y_1 = local_fc.___c1_1.___y_1;
  iVar6.___x_0 = local_fc.___c1_1.___x_0;
  iVar6.___z_2 = local_fc.___c1_1.___z_2;
  iVar7.___y_1 = local_fc.___c2_2.___y_1;
  iVar7.___x_0 = local_fc.___c2_2.___x_0;
  iVar7.___z_2 = local_fc.___c2_2.___z_2;
  Triplet_1__ctor_mFB91D05E4EDF5795AD17DFCC3A556094BF6133DE_gshared
            (&local_120,iVar5,iVar6,iVar7,
             Triplet_1__ctor_mFB91D05E4EDF5795AD17DFCC3A556094BF6133DE_RuntimeMethod_var);
  iVar18 = 0;
  do {
    bVar13 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                       ((uchar)local_1c,iVar18,(MethodInfo *)0x0);
    if (bVar13) {
      piVar16 = Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89
                          ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)local_88,&local_120,
                           iVar18,
                           Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89_RuntimeMethod_var
                          );
      local_34.___y_1 = piVar16->___x_0;
      local_34.___z_2 = piVar16->___y_1;
      iVar19 = piVar16->___z_2;
      local_18 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar8.___y_1 = local_34.___z_2;
      iVar8.___x_0 = local_34.___y_1;
      iVar8.___z_2 = iVar19;
      iVar24 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar8,(MethodInfo *)0x0);
      if (local_18 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
      goto LAB_10e12f01;
      bVar13 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         (local_18,iVar24,(Il2CppObject **)&local_10,
                          Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                         );
      if (!bVar13) {
        __return_storage_ptr__->___quadCount_8 = -1;
        goto LAB_10e12a17;
      }
      if (local_10 == (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) goto LAB_10e12f01;
      if ((local_10->___state_9 != '\x05') || (local_10->___patchDone_8 == false)) {
        if (param_3 == (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0) {
          __return_storage_ptr__->___quadCount_8 = -2;
LAB_10e12a17:
          pVVar21 = __return_storage_ptr__;
          puVar20 = &local_2d0;
          for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar20 = (pVVar21->___hexPos_0).___x_0;
            pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                      &(pVVar21->___hexPos_0).___y_1;
            puVar20 = puVar20 + 1;
          }
          puVar20 = &local_2d0;
          pVVar21 = __return_storage_ptr__;
          for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
            (pVVar21->___hexPos_0).___x_0 = *puVar20;
            puVar20 = puVar20 + 1;
            pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                      &(pVVar21->___hexPos_0).___y_1;
          }
          return __return_storage_ptr__;
        }
        while( true ) {
          bVar13 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared
                             (param_3,
                              Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var
                             );
          if (!bVar13) break;
          GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
                    (param_1,local_10,param_3,(MethodInfo *)0x0);
        }
        if (local_10 == (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) goto LAB_10e12f01;
        if ((local_10->___state_9 != '\x05') || (local_10->___patchDone_8 == false)) {
          __return_storage_ptr__->___quadCount_8 = -3;
          goto LAB_10e12a17;
        }
      }
      Triplet_1_set_Item_m3F3ACCED5C18F05E69F5384EC3846A1F6474617A_gshared
                (&local_d8,iVar18,(Il2CppObject *)local_10,
                 Triplet_1_set_Item_m2843F76F1DB4D2A262F5E152DD69B0A6A2BBAB4F_RuntimeMethod_var);
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 < 3);
  local_18 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0;
  do {
    pDVar23 = local_18;
    bVar13 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                       ((uchar)local_1c,(int)local_18,(MethodInfo *)0x0);
    if (bVar13) {
      local_20 = Triplet_1_get_Item_m5DB336D3FAD0732ED56962C906736B98E522058C_gshared
                           (&local_d8,(int)pDVar23,
                            Triplet_1_get_Item_m28E71074507CB1EF5E7042E9C0E6E12078F6B3A8_RuntimeMethod_var
                           );
      if ((local_20 == (Il2CppObject *)0x0) ||
         ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
LAB_10e12f01:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      local_14 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                           ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                            param_1->___patchDict_10,
                            *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&local_20[1].monitor,
                            Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                           );
      local_c = 0;
      if ((local_14 == (Il2CppObject *)0x0) || (local_14[2].monitor == (MonitorData *)0x0))
      goto LAB_10e12f01;
      local_44 = ((local_14[2].monitor)->semaphore).m_Semaphore;
      if (0 < (int)local_44) {
        do {
          iVar18 = 0;
LAB_10e129a0:
          pIVar11 = local_14;
          if (local_14[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          local_8 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_14[2].monitor,local_c + iVar18,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          if (pIVar11[3].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_10e12f01;
          BVar25 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                             ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                              pIVar11[3].field0_0x0.klass,(uint)local_8,
                              List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                             );
          pVVar21 = __return_storage_ptr__;
          puVar20 = &local_2d0;
          for (iVar19 = 0x6c; iVar12 = local_c, pIVar11 = local_14,
              BVar10.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2cc,
              BVar10.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_2d0, iVar19 != 0; iVar19 = iVar19 + -1
              ) {
            *puVar20 = (pVVar21->___hexPos_0).___x_0;
            pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                      &(pVVar21->___hexPos_0).___y_1;
            puVar20 = puVar20 + 1;
          }
          if (BVar25 != BVar10) goto LAB_10e129fe;
          if (local_14[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          bVar14 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                              local_14[2].monitor,local_c,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          if (pIVar11[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          local_5 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               pIVar11[2].monitor,iVar12 + 1,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          if (pIVar11[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          local_6 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               pIVar11[2].monitor,iVar12 + 2,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          if (pIVar11[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          local_7 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               pIVar11[2].monitor,iVar12 + 3,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          memset(&local_cc.___quadIndex_0,'\0',0x44);
          if (pIVar11[3].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_10e12f01;
          local_cc.___v0_1 =
               (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
               List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                          pIVar11[3].field0_0x0.klass,(uint)bVar14,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
          if (pIVar11[3].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_10e12f01;
          local_38 = (uint)local_5;
          local_cc.___v1_2 =
               (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
               List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                          pIVar11[3].field0_0x0.klass,local_38,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
          if (pIVar11[3].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_10e12f01;
          local_3c = (uint)local_6;
          local_cc.___v2_3 =
               (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
               List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                          pIVar11[3].field0_0x0.klass,local_3c,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
          if (pIVar11[3].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_10e12f01;
          local_40 = (uint)local_7;
          local_cc.___v3_4 =
               (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
               List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                          pIVar11[3].field0_0x0.klass,local_40,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
          pIVar11 = local_20;
          if (local_20[3].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          VVar26 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                              local_20[3].monitor,(uint)bVar14,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          local_4c = VVar26;
          local_cc.___p0_5 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar26;
          if (pIVar11[3].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          VVar26 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pIVar11[3].monitor
                              ,local_38,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          local_54 = VVar26;
          local_cc.___p1_6 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar26;
          if (pIVar11[3].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          VVar26 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pIVar11[3].monitor
                              ,local_3c,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          local_5c = VVar26;
          local_cc.___p2_7 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar26;
          if (pIVar11[3].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          VVar26 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pIVar11[3].monitor
                              ,local_40,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          local_cc.___p3_8.___x_0 = local_64.___x_0;
          local_64.___y_1 = VVar26.___y_1;
          local_cc.___p3_8.___y_1 = local_64.___y_1;
          pVVar21 = __return_storage_ptr__;
          piVar22 = local_630;
          local_64 = VVar26;
          for (iVar19 = 0x6c; iVar19 != 0; iVar19 = iVar19 + -1) {
            *piVar22 = (pVVar21->___hexPos_0).___x_0;
            pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                      &(pVVar21->___hexPos_0).___y_1;
            piVar22 = piVar22 + 1;
          }
          local_cc.___quadIndex_0 = (uchar)((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2);
          if (local_488 == '\0') {
            fVar27 = Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
                               (&local_cc,iVar18,(MethodInfo *)0x0);
            (__return_storage_ptr__->___planePos_1).___x_0 = local_6c.___x_0;
            local_6c.___y_1 = fVar27.___y_1;
            (__return_storage_ptr__->___planePos_1).___y_1 = local_6c.___y_1;
            local_6c = fVar27;
          }
          iVar19 = local_c;
          pIVar11 = local_14;
          if (local_14[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          uVar17 = iVar18 + 1U & 0x80000003;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
          }
          bVar14 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                              local_14[2].monitor,uVar17 + local_c,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          if (pIVar11[2].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          uVar17 = iVar18 + 3U & 0x80000003;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
          }
          bVar15 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar11[2].monitor
                              ,uVar17 + iVar19,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          pIVar11 = local_20;
          if (local_20[3].monitor == (MonitorData *)0x0) goto LAB_10e12f01;
          local_28 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                local_20[3].monitor,(uint)local_8,
                                List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                               );
          pMVar2 = pIVar11[3].monitor;
          if (pMVar2 == (MonitorData *)0x0) goto LAB_10e12f01;
          join_0x00000008_0x00000000_ =
               List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                         ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pMVar2,(uint)bVar14,
                          List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                         );
          pMVar2 = pIVar11[3].monitor;
          if (pMVar2 == (MonitorData *)0x0) goto LAB_10e12f01;
          local_74 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pMVar2,
                                (uint)bVar15,
                                List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                               );
          QVar4.___v0_1.___x_0 = local_cc.___v0_1.___x_0;
          QVar4.___quadIndex_0 = local_cc.___quadIndex_0;
          QVar4._1_3_ = local_cc._1_3_;
          QVar4.___v0_1.___y_1 = local_cc.___v0_1.___y_1;
          QVar4.___v1_2.___x_0 = local_cc.___v1_2.___x_0;
          QVar4.___v1_2.___y_1 = local_cc.___v1_2.___y_1;
          QVar4.___v2_3.___x_0 = local_cc.___v2_3.___x_0;
          QVar4.___v2_3.___y_1 = local_cc.___v2_3.___y_1;
          QVar4.___v3_4.___x_0 = local_cc.___v3_4.___x_0;
          QVar4.___v3_4.___y_1 = local_cc.___v3_4.___y_1;
          QVar4.___p0_5.___x_0 = local_cc.___p0_5.___x_0;
          QVar4.___p0_5.___y_1 = local_cc.___p0_5.___y_1;
          QVar4.___p1_6.___x_0 = local_cc.___p1_6.___x_0;
          QVar4.___p1_6.___y_1 = local_cc.___p1_6.___y_1;
          QVar4.___p2_7.___x_0 = local_cc.___p2_7.___x_0;
          QVar4.___p2_7.___y_1 = local_cc.___p2_7.___y_1;
          QVar4.___p3_8.___x_0 = local_cc.___p3_8.___x_0;
          QVar4.___p3_8.___y_1 = local_cc.___p3_8.___y_1;
          pVVar21 = __return_storage_ptr__;
          Vert_AddQuad_mC116BD476DFEF5F3BB2DD0F5CBC80343CF75761B
                    (__return_storage_ptr__,QVar4,(MethodInfo *)0x0);
          fVar1 = __return_storage_ptr__->___angle_9;
          local_7c = local_74.___x_0 - local_28.___x_0;
          local_78 = local_74.___y_1 - local_28.___y_1;
          iVar3.___y_1 = (int)local_78;
          iVar3.___x_0 = (int)local_7c;
          iVar3.___z_2 = 0;
          VVar26 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                             (iVar3,(MethodInfo *)pVVar21);
          local_34.___z_2 = (int)(local_80 - local_28.___y_1);
          local_34.___y_1 = (int)((float)local_88._4_4_ - local_28.___x_0);
          iVar9.___y_1 = local_34.___z_2;
          iVar9.___x_0 = local_34.___y_1;
          iVar9.___z_2 = 0;
          VVar28 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar9,unaff_EDI);
          fVar29 = Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline
                             (VVar26,VVar28,(MethodInfo *)0x0);
          __return_storage_ptr__->___angle_9 = fVar29 + fVar1;
          pVVar21 = __return_storage_ptr__;
          piVar22 = local_480;
          for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
            *piVar22 = (pVVar21->___hexPos_0).___x_0;
            pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                      &(pVVar21->___hexPos_0).___y_1;
            piVar22 = piVar22 + 1;
          }
          if (___real_43af0000 < local_2d4) {
            pVVar21 = __return_storage_ptr__;
            piVar22 = local_480;
            for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
              *piVar22 = (pVVar21->___hexPos_0).___x_0;
              pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                        &(pVVar21->___hexPos_0).___y_1;
              piVar22 = piVar22 + 1;
            }
            piVar22 = local_480;
            pVVar21 = __return_storage_ptr__;
            for (iVar18 = 0x6c; iVar18 != 0; iVar18 = iVar18 + -1) {
              (pVVar21->___hexPos_0).___x_0 = *piVar22;
              piVar22 = piVar22 + 1;
              pVVar21 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)
                        &(pVVar21->___hexPos_0).___y_1;
            }
            return __return_storage_ptr__;
          }
LAB_10e12ed3:
          local_c = local_c + 4;
          pDVar23 = local_18;
          if ((int)local_44 <= local_c) break;
        } while( true );
      }
    }
    local_18 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
               ((int)&pDVar23->_padding_ + 1);
    if (2 < (int)local_18) {
      return __return_storage_ptr__;
    }
  } while( true );
LAB_10e129fe:
  iVar18 = iVar18 + 1;
  if (3 < iVar18) goto LAB_10e12ed3;
  goto LAB_10e129a0;
}
