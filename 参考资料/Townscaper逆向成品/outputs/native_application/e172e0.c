// RVA 0xe172e0 | Placemaker.GridGenerator$$IterateFocus
// PDB: GridGenerator_IterateFocus_m59B2EC815F89CDB4FC2748E9C3B3CE9A879214A6
// Body: [[10e172e0, 10e17516] [10e1751d, 10e176ce] [10e176d8, 10e176f4] [10e176fb, 10e177d7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 103dcef0 MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
// 1040f470 HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
// 10e1b130 GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
// 10e1f970 GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
GridGenerator_IterateFocus_m59B2EC815F89CDB4FC2748E9C3B3CE9A879214A6
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,MethodInfo *param_2)

{
  uchar *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar8;
  List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *pLVar9;
  uint uVar10;
  GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *pGVar11;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar12;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar13;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar14;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar17;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar18;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar19;
  bool bVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar21;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar22;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar23;
  Il2CppObject *pIVar24;
  int iVar25;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar26;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar27;
  int iVar28;
  undefined8 uVar29;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar30;
  HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B local_80;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_14;
  uint local_8;

  if (DAT_1152266d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m92C421DB981FD941732BF841E250A4509985C039_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m36CA1D15680963401408C8E959F3F59313A9D1E3_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    DAT_1152266d = '\x01';
  }
  memset((uchar *)&local_80,'\0',0x2c);
  if (param_1->___focusUpdated_15 == false) {
    return false;
  }
  param_1->___focusUpdated_15 = false;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar8 = param_1->___master_4->___graph_7,
     pGVar8 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    local_3c = (pGVar8->___genBounds_30).___c0_0.___x_0;
    iStack_38.___x_0 = (pGVar8->___genBounds_30).___c0_0.___y_1;
    iStack_38.___y_1 = (pGVar8->___genBounds_30).___c0_0.___z_2;
    iStack_38.___z_2 = (pGVar8->___genBounds_30).___c1_1.___x_0;
    local_14.___y_1 = (pGVar8->___genBounds_30).___c1_1.___y_1;
    local_14.___z_2 = (pGVar8->___genBounds_30).___c1_1.___z_2;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    iVar13.___c0_0.___y_1 = iStack_38.___x_0;
    iVar13.___c0_0.___x_0 = local_3c;
    iVar13.___c0_0.___z_2 = iStack_38.___y_1;
    iVar13.___c1_1.___x_0 = iStack_38.___z_2;
    iVar13.___c1_1.___y_1 = local_14.___y_1;
    iVar13.___c1_1.___z_2 = local_14.___z_2;
    piVar21 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                        (&local_14,iVar13,(MethodInfo *)0x0);
    uVar2 = piVar21->___x_0;
    uVar5 = piVar21->___y_1;
    uVar3 = piVar21->___x_0;
    uVar6 = piVar21->___y_1;
    local_20.___z_2 = (int)(float)piVar21->___z_2;
    fVar14.___y_1 = (float)(int)uVar5;
    fVar14.___x_0 = (float)(int)uVar2;
    fVar14.___z_2 = (float)local_20.___z_2;
    local_20.___x_0 = uVar3;
    local_20.___y_1 = uVar6;
    piVar21 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                        (&local_20,param_1,fVar14,(MethodInfo *)0x0);
    local_14.___y_1 = piVar21->___x_0;
    local_14.___z_2 = piVar21->___y_1;
    iVar28 = piVar21->___z_2;
    if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    }
    iVar15.___z_2 = iVar28;
    iVar15.___x_0 = local_14.___y_1;
    iVar15.___y_1 = local_14.___z_2;
    iVar30 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar15,(MethodInfo *)0x0);
    param_1->___hexOrigo_21 = iVar30;
    if (param_1->___bits_7 != (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0) {
      iVar28 = param_1->___bits_7->____size_2;
      if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
      }
      pDVar22 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                          (iVar28,
                           ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var
                          );
      if (param_1->___bits_7 != (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0) {
        OVar27 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                 (param_1->___bits_7->____size_2 + -1);
        if (-1 < (int)OVar27) {
          local_8 = (int)OVar27 * 4 + 0x10;
          do {
            uVar10 = local_8;
            pLVar9 = param_1->___bits_7;
            if (pLVar9 == (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0)
            goto LAB_10e177d3;
            if ((uint)pLVar9->____size_2 <= (uint)OVar27) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            if (*(int *)(pLVar9->____items_1 + local_8) == 0) goto LAB_10e177d3;
            if (*(char *)(*(int *)(pLVar9->____items_1 + local_8) + 0x14) != '\0') {
              if (pDVar22 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_10e177d3;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar22,OVar27,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            }
            local_8 = uVar10 - 4;
            OVar27 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar27 + -1);
          } while (-1 < (int)OVar27);
        }
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pGVar8 = param_1->___master_4->___graph_7,
              pGVar8 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
          local_8 = 1;
          uVar4 = (pGVar8->___genBounds_30).___c1_1.___y_1;
          uVar7 = (pGVar8->___genBounds_30).___c1_1.___z_2;
          iStack_50 = (pGVar8->___genBounds_30).___c0_0.___y_1 + -0x54;
          iStack_4c = (pGVar8->___genBounds_30).___c0_0.___z_2 + -0x54;
          local_54 = (pGVar8->___genBounds_30).___c0_0.___x_0 + -0x54;
          iStack_48 = (pGVar8->___genBounds_30).___c1_1.___x_0 + 0x54;
          _local_44 = CONCAT44(uVar7 + 0x54,uVar4 + 0x54);
          do {
            iVar28 = (param_1->___hexOrigo_21).___x_0;
            iVar25 = (param_1->___hexOrigo_21).___y_1;
            iVar30 = HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F
                               (&local_80,(MethodInfo *)0x0);
            local_14.___y_1 = 0;
            local_14.___z_2 = 0;
            iVar28 = iVar28 + iVar30.___x_0 * 0x48;
            iVar25 = iVar25 + iVar30.___y_1 * 0x48;
            if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
            }
            iVar30.___y_1 = iVar25;
            iVar30.___x_0 = iVar28;
            piVar21 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                (&local_2c,iVar30,(MethodInfo *)0x0);
            uVar29._0_4_ = piVar21->___x_0;
            uVar29._4_4_ = piVar21->___y_1;
            local_14.___z_2 = piVar21->___z_2;
            local_20.___y_1 = (undefined4)uVar29;
            local_20.___z_2 = uVar29._4_4_;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
              uVar29 = CONCAT44(local_20.___z_2,local_20.___y_1);
            }
            iVar12.___c0_0.___y_1 = iStack_50;
            iVar12.___c0_0.___x_0 = local_54;
            iVar12.___c0_0.___z_2 = iStack_4c;
            iVar12.___c1_1.___x_0 = iStack_48;
            iVar12.___c1_1.___y_1 = (int)_local_44;
            iVar12.___c1_1.___z_2 = (int)((ulonglong)_local_44 >> 0x20);
            iVar16.___z_2 = local_14.___z_2;
            iVar16.___x_0 = (int)uVar29;
            iVar16.___y_1 = (int)((ulonglong)uVar29 >> 0x20);
            bVar20 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                               (iVar12,iVar16,(MethodInfo *)0x0);
            if (bVar20) {
              local_8 = local_80.____layerIndex_2 + 1;
              iVar17.___y_1 = iVar25;
              iVar17.___x_0 = iVar28;
              GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
                        (param_1,iVar17,(MethodInfo *)0x0);
            }
            HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
                      (&iStack_38,&local_80,(MethodInfo *)0x0);
          } while (local_80.____layerIndex_2 <= local_8);
          if (pDVar22 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
            pEVar26 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                      ((int)&pDVar22->___entries_1[-1].m_Items[0].___value_3 + 3);
            if (-1 < (int)pEVar26) {
              local_8 = (int)pEVar26 * 4 + 0x10;
              do {
                pLVar9 = param_1->___bits_7;
                if (pDVar22->___entries_1 <= pEVar26) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                if (pLVar9 == (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0)
                goto LAB_10e177d3;
                uVar10 = *(uint *)((int)pDVar22->___buckets_0->m_Items + (local_8 - 0x10));
                local_14.___z_2 = uVar10;
                if ((uint)pLVar9->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pGVar11 = *(GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 **)
                           (pLVar9->____items_1 + uVar10 * 4 + 0x10);
                if (pGVar11 == (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0)
                goto LAB_10e177d3;
                puVar1 = &pGVar11->___motivations_5;
                *puVar1 = *puVar1 + 0xff;
                if (*puVar1 == '\0') {
                  pGVar23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pGVar11,(MethodInfo *)0x0);
                  if (pGVar23 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                  goto LAB_10e177d3;
                  GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                            (pGVar23,false,(MethodInfo *)0x0);
                  if (pGVar11->___state_9 < 4) {
                    GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
                              (param_1,pGVar11,(MethodInfo *)0x0);
                  }
                  iVar28 = (pGVar11->___hexPos_4).___x_0;
                  iVar25 = (pGVar11->___hexPos_4).___y_1;
                  local_14.___z_2 = iVar28;
                  if (DAT_11522668 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              ((uint *)&
                                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                              );
                    DAT_11522668 = '\x01';
                    iVar28 = local_14.___z_2;
                  }
                  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      param_1->___patchDict_10 ==
                      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
                  goto LAB_10e177d3;
                  iVar18.___y_1 = iVar25;
                  iVar18.___x_0 = iVar28;
                  pIVar24 = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                       param_1->___patchDict_10,iVar18,
                                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                                      );
                  if (pIVar24 == (Il2CppObject *)0x0) goto LAB_10e177d3;
                  iVar19.___y_1 = iVar25;
                  iVar19.___x_0 = local_14.___z_2;
                  MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
                            ((MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *)
                             &pIVar24[3].monitor,iVar19,(MethodInfo *)0x0);
                }
                local_8 = local_8 - 4;
                pEVar26 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                          ((int)&pEVar26[-1].m_Items[0].___value_3 + 3);
              } while (-1 < (int)pEVar26);
            }
            DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                      (pDVar22,
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                      );
            param_1->___bitProcessIndex_13 = 0;
            return true;
          }
        }
      }
    }
  }
LAB_10e177d3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
