// RVA 0x75ee30 | Placemaker.PropPlacer$$RecursiveCheck
// PDB: PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
// Body: [[1075ee30, 1075ef89] [1075ef93, 1075f141] [1075f148, 1075f1a1] [1075f1a5, 1075f1ef] [1075f1f6, 1075f23b] [1075f245, 1075f280] [1075f284, 1075f2c5] [1075f2c9, 1075f3de] [1075f3e5, 1075f442] [1075f446, 1075f48d] [1075f494, 1075f4d2] [1075f4d9, 1075f512] [1075f516, 1075f552] [1075f556, 1075f597]]
// Direct callees:
// 1003e330 Invoke
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103d3290 ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10758e50 PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
// 1075abb0 PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
// 1075ee30 PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
// 1075f5af FUN_1075f5af
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3de40 GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1103ecc0 List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared

bool __cdecl
PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_3,MethodInfo *param_4)

{
  char *pcVar1;
  List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *pLVar2;
  ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *pMVar3;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar10;
  Il2CppObject *pIVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  undefined1 *puVar14;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar15;
  undefined1 *puVar16;
  uint uVar17;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar18;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar19;
  int iVar20;
  undefined1 *puVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  pPVar4 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  ExceptionList = &pvStack_10;
  puVar14 = &stack0xffffffb0;
  if (DAT_1151ec45 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisIPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_mF38CC2C0655CC7A993DE1BBE102A7CF0C55E0B08_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m47A74E280C71A1FA7104E0D525D70C885FC56314_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_mD45E4878907BC0D4452787376614BC3C2441DC36_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD91E07BA7B2E41EBDBBE10106C6113D1A07F1F1B);
    DAT_1151ec45 = '\x01';
    puVar14 = local_14;
  }
  local_14 = puVar14;
  local_15 = 0;
  local_30 = 0;
  local_16 = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteralD91E07BA7B2E41EBDBBE10106C6113D1A07F1F1B);
  local_8 = 0;
  if (param_2 == (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) goto LAB_1075f5de;
  if ((param_2->___hideCount_9 == '\0') && (param_2->___motivations_10 != '\0')) {
    if ((param_2->___inDict_7 == false) &&
       (PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
                  (param_1,param_2,(MethodInfo *)0x0), param_2->___hideCount_9 != '\0'))
    goto LAB_1075eef7;
    if (param_2->___turnedOn_6 != false) {
LAB_1075f2e6:
      uVar8 = FUN_1075f5af();
      return (bool)uVar8;
    }
    param_2->___turnedOn_6 = true;
    pGVar10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                         (MethodInfo *)0x0);
    if (pGVar10 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar10,true,(MethodInfo *)0x0)
      ;
      local_2c = (undefined1 *)(uint)param_2->___childCount_13;
      local_20 = (undefined1 *)(uint)param_2->___parentCount_12;
      local_34 = (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)
                 (uint)param_2->___moteveeCount_15;
      local_28 = (uint)param_2->___overlapCount_14;
      local_24 = local_20 + (int)local_2c + local_28;
      puVar14 = local_2c + (int)local_20;
      local_1c = puVar14;
      if (param_2->___hasBeenTurnedOn_8 == false) {
        bVar9 = local_2c < &DAT_00000002;
        while (!bVar9) {
          pLVar2 = param_2->___relations_11;
          bVar9 = true;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          if ((undefined1 *)pLVar2->____size_2 <= local_20) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pGVar10 = *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)
                     (pLVar2->____items_1 + (int)local_20 * 4 + 0x10);
          puVar16 = local_20;
          while (puVar21 = puVar16, pGVar15 = pGVar10, puVar16 = puVar21 + 1,
                (int)puVar16 < (int)puVar14) {
            if ((((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_2->___relations_11 ==
                  (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                (pGVar10 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                     ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                      param_2->___relations_11,(int)puVar16,
                                      List_1_get_Item_m47A74E280C71A1FA7104E0D525D70C885FC56314_RuntimeMethod_var
                                     ),
                pGVar15 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
               (pGVar10 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
            goto LAB_1075f5de;
            puVar14 = local_1c;
            if (*(float *)(pGVar10 + 1) <= *(float *)(pGVar15 + 1) &&
                *(float *)(pGVar15 + 1) != *(float *)(pGVar10 + 1)) {
              if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_2->___relations_11 ==
                  (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_1075f5de;
              List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                        ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                         param_2->___relations_11,(int)puVar21,(Il2CppObject *)pGVar10,
                         List_1_set_Item_mD45E4878907BC0D4452787376614BC3C2441DC36_RuntimeMethod_var
                        );
              if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_2->___relations_11 ==
                  (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_1075f5de;
              List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                        ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                         param_2->___relations_11,(int)puVar16,(Il2CppObject *)pGVar15,
                         List_1_set_Item_mD45E4878907BC0D4452787376614BC3C2441DC36_RuntimeMethod_var
                        );
              bVar9 = false;
              puVar14 = local_1c;
              pGVar10 = pGVar15;
            }
          }
        }
        param_2->___hasBeenTurnedOn_8 = true;
        pIVar11 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                             Component_GetComponent_TisIPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_mF38CC2C0655CC7A993DE1BBE102A7CF0C55E0B08_RuntimeMethod_var
                            );
        if (pIVar11 != (Il2CppObject *)0x0) {
          InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                    (0,IPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_il2cpp_TypeInfo_var,
                     pIVar11,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                             param_1->___master_4);
        }
      }
      pIVar11 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           Component_GetComponent_TisIPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_mF38CC2C0655CC7A993DE1BBE102A7CF0C55E0B08_RuntimeMethod_var
                          );
      if (pIVar11 != (Il2CppObject *)0x0) {
        InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (1,IPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_il2cpp_TypeInfo_var,
                   pIVar11,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___master_4)
        ;
      }
      pGVar10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0);
      if (pGVar10 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        bVar9 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
                          (pGVar10,(MethodInfo *)0x0);
        if ((bVar9) && (iVar20 = param_2->___appearanceSound_5, iVar20 != 0)) {
          if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_1075f5de;
          pMVar3 = param_1->___master_4->___manySoundsManager_32;
          pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                               (MethodInfo *)0x0);
          if ((pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
             (pVVar13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_44,pTVar12,(MethodInfo *)0x0),
             pMVar3 == (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0))
          goto LAB_1075f5de;
          VVar5.___z_4._2_2_ = (short)((uint)pVVar13->___z_4 >> 0x10);
          VVar5._0_10_ = *(unkbyte10 *)pVVar13;
          ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
                    (pMVar3,iVar20,VVar5,0.4,1.0,(MethodInfo *)0x0);
        }
        for (uVar17 = 0; uVar7 = local_28, (int)uVar17 < (int)local_28; uVar17 = uVar17 + 1) {
          pLVar2 = param_2->___relations_11;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          if ((undefined1 *)pLVar2->____size_2 <= local_1c + uVar17) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pPVar19 = *(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                     (pLVar2->____items_1 + (int)(local_1c + uVar17) * 4 + 0x10);
          if (pPVar19 == (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0)
          goto LAB_1075f5de;
          uVar7 = uVar17;
          if (param_2->___priority_4 <= pPVar19->___priority_4) break;
          PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                    (param_1,pPVar19,true,(MethodInfo *)0x0);
        }
        local_28 = uVar7;
        pPVar18 = (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)(local_2c + -1);
        for (pPVar19 = pPVar18; -1 < (int)pPVar19;
            pPVar19 = (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)&pPVar19[-1].field_0x27)
        {
          pLVar2 = param_2->___relations_11;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          if ((undefined1 *)pLVar2->____size_2 <= local_20 + (int)pPVar19) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                    (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                              (pLVar2->____items_1 + (int)(local_20 + (int)pPVar19) * 4 + 0x10),
                     false,(MethodInfo *)0x0);
        }
        puVar14 = (undefined1 *)((int)&local_34[-1].____syncRoot_4 + 3);
        for (local_2c = puVar14; -1 < (int)local_2c; local_2c = local_2c + -1) {
          pLVar2 = param_2->___relations_11;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          if ((undefined1 *)pLVar2->____size_2 <= local_24 + (int)local_2c) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          if (*(int *)(pLVar2->____items_1 + (int)(local_24 + (int)local_2c) * 4 + 0x10) == 0)
          goto LAB_1075f5de;
          pcVar1 = (char *)(*(int *)(pLVar2->____items_1 +
                                    (int)(local_24 + (int)local_2c) * 4 + 0x10) + 0x18);
          *pcVar1 = *pcVar1 + '\x01';
        }
        for (iVar20 = 0; iVar20 < (int)local_28; iVar20 = iVar20 + 1) {
          local_34 = param_2->___relations_11;
          if (local_34 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0)
          goto LAB_1075f5de;
          local_2c = local_1c + iVar20;
          if ((undefined1 *)local_34->____size_2 <= local_2c) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                    (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                              (local_34->____items_1 + (int)local_2c * 4 + 0x10),param_2,
                     (MethodInfo *)0x0);
        }
        while (param_2 = pPVar18, -1 < (int)param_2) {
          pLVar2 = pPVar4->___relations_11;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          local_34 = (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)
                     (local_20 + (int)&param_2->_padding_);
          if ((List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)pLVar2->____size_2 <= local_34) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                    (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                              (pLVar2->____items_1 + (int)local_34 * 4 + 0x10),
                     (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,(MethodInfo *)0x0);
          pPVar18 = (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)&param_2[-1].field_0x27;
        }
        for (; -1 < (int)puVar14; puVar14 = puVar14 + -1) {
          pLVar2 = pPVar4->___relations_11;
          if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
          if ((undefined1 *)pLVar2->____size_2 <= local_24 + (int)puVar14) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                    (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                              (pLVar2->____items_1 + (int)(local_24 + (int)puVar14) * 4 + 0x10),
                     pPVar4,(MethodInfo *)0x0);
        }
        goto LAB_1075f2e6;
      }
    }
    goto LAB_1075f5de;
  }
  if (param_2->___turnedOn_6 != false) {
    iVar20 = param_2->___appearanceSound_5;
    param_2->___turnedOn_6 = false;
    if (iVar20 != 0) {
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      goto LAB_1075f5de;
      pMVar3 = param_1->___master_4->___manySoundsManager_32;
      pTVar12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0);
      if ((pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pVVar13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_44,pTVar12,(MethodInfo *)0x0),
         pMVar3 == (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0))
      goto LAB_1075f5de;
      VVar6.___z_4._2_2_ = (short)((uint)pVVar13->___z_4 >> 0x10);
      VVar6._0_10_ = *(unkbyte10 *)pVVar13;
      ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
                (pMVar3,iVar20,VVar6,0.4,1.0,(MethodInfo *)0x0);
    }
    pIVar11 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                         Component_GetComponent_TisIPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_mF38CC2C0655CC7A993DE1BBE102A7CF0C55E0B08_RuntimeMethod_var
                        );
    if (pIVar11 != (Il2CppObject *)0x0) {
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (2,IPropEnable_t31F2FBC77F4C4E3A6249FA3EF499742513584990_il2cpp_TypeInfo_var,pIVar11
                 ,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_1->___master_4);
    }
    local_2c = (undefined1 *)(uint)param_2->___parentCount_12;
    local_28 = (uint)param_2->___overlapCount_14;
    local_34 = (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)(uint)param_2->___moteveeCount_15
    ;
    local_20 = local_2c + param_2->___childCount_13 + local_28;
    puVar14 = local_2c + param_2->___childCount_13;
    for (uVar17 = 0; uVar7 = local_28, (int)uVar17 < (int)local_28; uVar17 = uVar17 + 1) {
      pLVar2 = param_2->___relations_11;
      if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)pLVar2->____size_2 <= puVar14 + uVar17) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pPVar4 = *(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                (pLVar2->____items_1 + (int)(puVar14 + uVar17) * 4 + 0x10);
      if (pPVar4 == (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) goto LAB_1075f5de;
      uVar7 = uVar17;
      if (param_2->___priority_4 <= pPVar4->___priority_4) break;
      PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                (param_1,pPVar4,false,(MethodInfo *)0x0);
    }
    local_28 = uVar7;
    puVar16 = puVar14 + -1;
    local_24 = puVar16;
    for (; (int)local_2c <= (int)puVar16; puVar16 = puVar16 + -1) {
      pLVar2 = param_2->___relations_11;
      if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)pLVar2->____size_2 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                          (pLVar2->____items_1 + (int)puVar16 * 4 + 0x10),true,(MethodInfo *)0x0);
    }
    puVar21 = (undefined1 *)((int)&local_34[-1].____syncRoot_4 + 3) + (int)local_20;
    for (puVar16 = puVar21; (int)local_20 <= (int)puVar16; puVar16 = puVar16 + -1) {
      local_34 = param_2->___relations_11;
      if (local_34 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)local_34->____size_2 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (*(int *)(local_34->____items_1 + (int)puVar16 * 4 + 0x10) == 0) goto LAB_1075f5de;
      pcVar1 = (char *)(*(int *)(local_34->____items_1 + (int)puVar16 * 4 + 0x10) + 0x18);
      *pcVar1 = *pcVar1 + -1;
    }
    for (puVar16 = puVar14 + (local_28 - 1); (int)puVar14 <= (int)puVar16; puVar16 = puVar16 + -1) {
      local_34 = param_2->___relations_11;
      if (local_34 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)local_34->____size_2 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                          (local_34->____items_1 + (int)puVar16 * 4 + 0x10),param_2,
                 (MethodInfo *)0x0);
    }
    for (; (int)local_2c <= (int)local_24; local_24 = local_24 + -1) {
      pLVar2 = param_2->___relations_11;
      if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)pLVar2->____size_2 <= local_24) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                          (pLVar2->____items_1 + (int)local_24 * 4 + 0x10),param_2,(MethodInfo *)0x0
                );
    }
    for (; (int)local_20 <= (int)puVar21; puVar21 = puVar21 + -1) {
      pLVar2 = param_2->___relations_11;
      if (pLVar2 == (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) goto LAB_1075f5de;
      if ((undefined1 *)pLVar2->____size_2 <= puVar21) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
                (param_1,*(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)
                          (pLVar2->____items_1 + (int)puVar21 * 4 + 0x10),param_2,(MethodInfo *)0x0)
      ;
    }
    if (param_2->___turnedOn_6 == false) {
      pGVar10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           (MethodInfo *)0x0);
      if (pGVar10 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar10,false,(MethodInfo *)0x0);
        uVar8 = FUN_1075f5af();
        return (bool)uVar8;
      }
LAB_1075f5de:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
  }
LAB_1075eef7:
  uVar8 = FUN_1075f5af();
  return (bool)uVar8;
}
