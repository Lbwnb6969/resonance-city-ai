// RVA 0xe1b130 | Placemaker.GridGenerator$$MotivateBit
// PDB: GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
// Body: [[10e1b130, 10e1b24c] [10e1b250, 10e1b66a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e4fa0 WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021f6d0 Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e0e0 HexMath_RotateCW_m1F06BA512B68F481438AB91DD226B756CC7DA1B7
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10ae2bd0 UnityFunctions_GetNewObject_TisRuntimeObject_mF6287B466848CE5E7246924AF19C33B95A129F4B_gshared
// 10e13c00 GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
// 10e1b670 GridGenerator_MotivateCluster_mB7281C5C68EE24385493DEE78BC97E71A3EEAC47
// 10e1b980 GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 * __cdecl
GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar4;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  bool bVar8;
  List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *pLVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar11;
  String_t *pSVar12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar14;
  HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *pHVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar19;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar20;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_20;
  undefined4 local_14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_10;
  int local_c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_8;

  if (DAT_11522663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m34AE37553D78729D41753F107B3A7ACB1462F602_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m5BA033E8E40F99F85AF16687CF594A3CD856919D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mD21918071F49AEB9227104F223C05201BB0F3416_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m92C421DB981FD941732BF841E250A4509985C039_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m36CA1D15680963401408C8E959F3F59313A9D1E3_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityFunctions_GetNewObject_TisGridBit_t23465B0696352D0154A3D888F98761FDAED90C75_m97B0BD0ABB8A62780DC31A9885D101F5DA8F4F38_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7CBF75BDDD2B661CAE6698D7488B39D4CA1F9991);
    DAT_11522663 = '\x01';
  }
  local_8.___moduleIndex_0 = 0;
  local_8.___flags_1 = '\0';
  local_8._3_1_ = 0;
  local_c = 0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1b666;
  bVar8 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                    ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8
                     ,param_2,(Il2CppObject **)&local_8,
                     Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                    );
  if (!bVar8) {
    pLVar9 = param_1->___bits_7;
    uVar18 = 0;
    if (pLVar9 != (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0) {
      iVar17 = 0x10;
      do {
        if (pLVar9->____size_2 <= (int)uVar18) goto LAB_10e1b39f;
        if (pLVar9 == (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0) break;
        if ((uint)pLVar9->____size_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        OVar4 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                 (pLVar9->____items_1 + iVar17);
        if (OVar4 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) break;
        if (*(char *)((int)OVar4 + 0x14) == '\0') {
          local_8 = OVar4;
          if (((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 !=
               (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) &&
             (iVar7.___x_0 = *(int *)&((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                      ((int)OVar4 + 0xc))->field_0x0,
             iVar7.___y_1 = *(int *)&((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     ((int)OVar4 + 0xc))->field_0x4,
             Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                       ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                        param_1->___bitDict_8,iVar7,
                        Dictionary_2_Remove_m5BA033E8E40F99F85AF16687CF594A3CD856919D_RuntimeMethod_var
                       ), local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0))
          {
            if (*(char *)((int)local_8 + 0x18) != '\x05') goto LAB_10e1b34b;
            pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                                 (MethodInfo *)0x0);
            if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              iVar17 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 (pTVar10,(MethodInfo *)0x0);
              goto joined_r0x10e1b2da;
            }
          }
          break;
        }
        uVar18 = uVar18 + 1;
        iVar17 = iVar17 + 4;
        pLVar9 = param_1->___bits_7;
      } while (pLVar9 != (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0);
    }
    goto LAB_10e1b666;
  }
LAB_10e1b52a:
  if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
LAB_10e1b666:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  cVar3 = *(char *)((int)local_8 + 0x14);
  *(char *)((int)local_8 + 0x14) = cVar3 + '\x01';
  if (cVar3 == '\0') {
    GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
              (param_1,param_2,param_2,(MethodInfo *)0x0);
    if (((local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) ||
        (pGVar14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                              (MethodInfo *)0x0),
        pGVar14 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
       ((GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                   (pGVar14,false,(MethodInfo *)0x0),
        local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 ||
        (*(undefined1 *)((int)local_8 + 0x17) = 0,
        local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0))))
    goto LAB_10e1b666;
    if (*(char *)((int)local_8 + 0x18) != '\x05') {
      if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
      }
      local_14 = 1;
      local_10 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
      iVar20.___x_0 = 0x48;
      iVar20.___y_1 = -0x48;
      bVar16 = 0;
      do {
        iVar6.___y_1 = param_2.___y_1 + iVar20.___y_1;
        iVar6.___x_0 = param_2.___x_0 + iVar20.___x_0;
        pHVar15 = GridGenerator_MotivateCluster_mB7281C5C68EE24385493DEE78BC97E71A3EEAC47
                            (param_1,iVar6,param_2,(MethodInfo *)0x0);
        if (pHVar15 == (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)0x0)
        goto LAB_10e1b666;
        if (pHVar15->___done_4 == false) {
          if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
          goto LAB_10e1b666;
          if (bVar16 < *(byte *)((int)local_8 + 0x16)) {
            *(byte *)((int)local_8 + 0x16) = bVar16;
            if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
            goto LAB_10e1b666;
            if (2 < *(byte *)((int)local_8 + 0x18)) {
              *(undefined1 *)((int)local_8 + 0x18) = 2;
            }
          }
        }
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        }
        iVar20 = HexMath_RotateCW_m1F06BA512B68F481438AB91DD226B756CC7DA1B7
                           (iVar20,(MethodInfo *)0x0);
        bVar16 = bVar16 + 1;
      } while (bVar16 < 6);
    }
  }
  return (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)local_8;
joined_r0x10e1b2da:
  iVar17 = iVar17 + -1;
  if (iVar17 < 0) goto LAB_10e1b34b;
  if ((((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pWVar5 = param_1->___master_4->___worldMeshes_9,
       local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) ||
      (pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                            (MethodInfo *)0x0),
      pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
     ((pTVar10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (pTVar10,iVar17,(MethodInfo *)0x0),
      pTVar10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
      (pMVar11 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar10,
                            Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                           ), pWVar5 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0
      )))) goto LAB_10e1b666;
  WorldMeshes_ReturnMeshFilter_m6F4BBA8DEC2C496B7DB111215DCE0F5B1F2D534F
            (pWVar5,pMVar11,(MethodInfo *)0x0);
  goto joined_r0x10e1b2da;
LAB_10e1b34b:
  if ((((local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) ||
       (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)local_8 + 0x1c) ==
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) ||
      (List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                 (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)local_8 + 0x1c),
                  List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var),
      local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) ||
     ((*(undefined1 *)((int)local_8 + 0x15) = 0,
      local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 ||
      (*(undefined1 *)((int)local_8 + 0x16) = 0,
      local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0))))
  goto LAB_10e1b666;
  *(undefined1 *)((int)local_8 + 0x18) = 0;
LAB_10e1b39f:
  OVar4 = local_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)OVar4,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (param_1->___bits_7 == (List_1_t5A00B7A64847DB878CB4EDF91D8446FB9D071E19 *)0x0)
    goto LAB_10e1b666;
    local_c = param_1->___bits_7->____size_2;
    pSVar12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&local_c,(MethodInfo *)0x0);
    pSVar12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                        (_stringLiteral7CBF75BDDD2B661CAE6698D7488B39D4CA1F9991,pSVar12,
                         (MethodInfo *)0x0);
    local_8 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
              UnityFunctions_GetNewObject_TisRuntimeObject_mF6287B466848CE5E7246924AF19C33B95A129F4B_gshared
                        (pSVar12,param_1->___bitContainer_5,
                         UnityFunctions_GetNewObject_TisGridBit_t23465B0696352D0154A3D888F98761FDAED90C75_m97B0BD0ABB8A62780DC31A9885D101F5DA8F4F38_RuntimeMethod_var
                        );
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bits_7 ==
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e1b666;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___bits_7,local_8,
               List_1_Add_mD21918071F49AEB9227104F223C05201BB0F3416_RuntimeMethod_var);
  }
  if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) goto LAB_10e1b666;
  local_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_8,
                        (MethodInfo *)0x0);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  fVar19 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                     (param_2,(MethodInfo *)0x0);
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pfVar13 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                      (&local_20,fVar19,0.0,(MethodInfo *)0x0);
  uVar1 = pfVar13->___x_0;
  uVar2 = pfVar13->___y_1;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar1,
             (float)uVar2,pfVar13->___z_2,(MethodInfo *)0x0);
  if ((local_10 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
     (Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                (local_10,*extraout_EAX,(MethodInfo *)0x0),
     local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) goto LAB_10e1b666;
  *(int *)((int)local_8 + 0xc) = param_2.___x_0;
  *(int *)((int)local_8 + 0x10) = param_2.___y_1;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1b666;
  Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8,param_2
             ,(Il2CppObject *)local_8,
             Dictionary_2_Add_m34AE37553D78729D41753F107B3A7ACB1462F602_RuntimeMethod_var);
  goto LAB_10e1b52a;
}
