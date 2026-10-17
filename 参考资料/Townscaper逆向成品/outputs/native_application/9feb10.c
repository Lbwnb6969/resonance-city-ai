// RVA 0x9feb10 | Placemaker.Ui.SaveMenu$$GamepadUpdate
// PDB: SaveMenu_GamepadUpdate_m8ABA18AD95225D15978098DB5198375B41C2929F
// Body: [[109feb10, 109fefe9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5d30 UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 10672c10 Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5
// 10672cf0 Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
// 1080ca70 RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 109fe390 SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10c6a920 RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
// 10f1a460 Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106
// 10f1a6e0 Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SaveMenu_GamepadUpdate_m8ABA18AD95225D15978098DB5198375B41C2929F
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar3;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar4;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar5;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar6;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar7;
  bool bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  int iVar10;
  int iVar11;
  BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *pBVar12;
  int iVar13;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  float fVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_24;
  int local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_18;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1152019c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral05D3B554AF6F7771D38B4B5B55BAA1D27679BD73);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD7B66E675B52355490EDEEAA35C2F067F69817CC);
    DAT_1152019c = '\x01';
  }
  if (param_1->___visibleState_28 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  goto LAB_109fefe5;
  bVar8 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                    (param_1->___visibleState_28,(MethodInfo *)0x0);
  if (!bVar8) {
    return;
  }
  if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
     (pSVar2 = pWVar1->___saveSystem_35,
     pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) goto LAB_109fefe5;
  local_10 = pSVar2->___validMetaSaveCount_33;
  if (param_1->___grid_26 == (GridLayoutGroup_tE25FFEE93AF1291734B4EB8DA986D23A500E7C28 *)0x0)
  goto LAB_109fefe5;
  local_c = param_1->___grid_26->___m_ConstraintCount_17;
  if ((param_1->___gamepadCard_22 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
     (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___gamepadCard_22,(MethodInfo *)0x0),
     pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_109fefe5;
  local_8 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                      (pTVar9,(MethodInfo *)0x0);
  iVar10 = local_8 / local_c;
  local_8 = local_8 % local_c;
  iVar11 = local_10 / local_c;
  local_10 = local_10 % local_c;
  local_1c = iVar11 + 1;
  if (local_10 == 0) {
    local_1c = iVar11;
    local_10 = local_c;
  }
  pBVar12 = param_1->___cardsListScrollRect_5;
  local_18.___y_1 = (float)pBVar12;
  if (pBVar12 == (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)
  goto LAB_109fefe5;
  fVar16 = __real_3f000000;
  if (1 < local_1c) {
    fVar16 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       ((float)(local_1c + -1),0.0,(float)iVar10,(MethodInfo *)0x0);
    pBVar12 = (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)local_18.___y_1;
  }
  (pBVar12->___normPosTarget_8).___y_1 = fVar16;
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar3 = param_1->___master_4->___player_43,
     pPVar3 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_109fefe5;
  bVar8 = Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106(pPVar3,(MethodInfo *)0x0);
  if ((!bVar8) &&
     (bVar8 = Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
                        (pPVar3,(MethodInfo *)0x0), !bVar8)) {
    return;
  }
  bVar8 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar3,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,(MethodInfo *)0x0
                    );
  if (bVar8) {
    if ((param_1->___gamepadCard_22 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
       (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
      UiMaster_LoadMetaSave_mCB9566F46D9425D1AD0463AF2601CD265BEBF4E4
                (param_1->___master_4,param_1->___gamepadCard_22->___metaSave_9,(MethodInfo *)0x0);
      return;
    }
    goto LAB_109fefe5;
  }
  bVar8 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar3,_stringLiteral05D3B554AF6F7771D38B4B5B55BAA1D27679BD73,(MethodInfo *)0x0
                    );
  if (bVar8) {
    param_1->___focusedCard_16 = param_1->___gamepadCard_22;
    SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(param_1,'\x02',(MethodInfo *)0x0);
    if (((param_1->___focusedCard_16 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
        && (pMVar7 = param_1->___focusedCard_16->___metaSave_9,
           pMVar7 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) &&
       (param_1->___focusedImage_8 != (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0)) {
      RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
                (param_1->___focusedImage_8,
                 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pMVar7->___texture_7,
                 (MethodInfo *)0x0);
      return;
    }
    goto LAB_109fefe5;
  }
  bVar8 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar3,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,(MethodInfo *)0x0
                    );
  if ((bVar8) ||
     (bVar8 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                        (pPVar3,_stringLiteralD7B66E675B52355490EDEEAA35C2F067F69817CC,
                         (MethodInfo *)0x0), bVar8)) {
    SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689(param_1,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pDVar4 = param_1->___master_4->___dim_10,
       pDVar4 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar4,0,(MethodInfo *)0x0);
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pSVar5 = param_1->___master_4->___sideMenu_8,
          pSVar5 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) &&
         (pUVar6 = pSVar5->___openState_8,
         pUVar6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (pUVar6,true,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_109fefe5;
  }
  fVar16 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar3,_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                      (MethodInfo *)0x0);
  local_18.___y_1 = fVar16;
  local_24.___y_1 =
       Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                 (pPVar3,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,(MethodInfo *)0x0);
  local_24.___x_0 = local_18.___y_1;
  fVar16 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
                     (&local_24,(MethodInfo *)0x0);
  if ((fVar16 <= ___real_3d23d70b) ||
     (bVar8 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                        (&param_1->___rapidGamepadButton_25,1.0,(MethodInfo *)0x0), !bVar8)) {
    return;
  }
  local_18 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5
                       (&local_24,(MethodInfo *)0x0);
  iVar11 = local_c;
  if (iVar10 == local_1c + -1) {
    iVar11 = local_10;
  }
  iVar13 = local_8;
  if (__real_3f000000 < (float)((uint)local_18.___x_0 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (0.0 < local_18.___x_0) {
      iVar13 = local_8 + 1;
      if (iVar11 <= iVar13) {
        if (__real_3f333333 < local_18.___x_0) goto LAB_109fee13;
LAB_109fee4d:
        iVar13 = iVar11 + -1;
      }
    }
    else {
      iVar13 = local_8 + -1;
      if (iVar13 < 0) {
        if (__real_3f333333 <
            (float)((uint)local_18.___x_0 ^ __xmm_80000000800000008000000080000000))
        goto LAB_109fee4d;
LAB_109fee13:
        iVar13 = 0;
      }
    }
  }
  iVar11 = local_1c;
  if (local_10 <= iVar13) {
    iVar11 = local_1c + -1;
  }
  if (__real_3f000000 < (float)((uint)local_18.___y_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (0.0 < local_18.___y_1) {
      iVar10 = iVar10 + 1;
      if (iVar11 <= iVar10) {
        if (__real_3f333333 < local_18.___y_1) goto LAB_109fee61;
        iVar10 = iVar11 + -1;
      }
    }
    else {
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) {
        if ((float)((uint)local_18.___y_1 ^ __xmm_80000000800000008000000080000000) <=
            __real_3f333333) {
LAB_109fee61:
          iVar10 = 0;
        }
        else {
          iVar10 = iVar11 + -1;
        }
      }
    }
  }
  if (((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___saveCardContainer_12 !=
       (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
     (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___saveCardContainer_12,iVar10 * local_c + iVar13,
                          (MethodInfo *)0x0),
     pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pSVar14 = (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar9,
                         Component_GetComponent_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m3D7164A278036DE3242A9E1E9F591045BF6DAA09_RuntimeMethod_var
                        );
    param_1->___gamepadCard_22 = pSVar14;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___gamepadCursor_23 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___gamepadCursor_23,(MethodInfo *)0x0);
      if ((((param_1->___gamepadCard_22 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0
            ) && (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       param_1->___gamepadCard_22,(MethodInfo *)0x0),
                 pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
          (pTVar15 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                               (pTVar15,(MethodInfo *)0x0),
          pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
         (pTVar15 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar15,(MethodInfo *)0x0),
         pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  (pTVar9,pTVar15,(MethodInfo *)0x0);
        if (param_1->___gamepadCard_22 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
        {
          pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___gamepadCard_22,(MethodInfo *)0x0);
          ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar9,4,1.0,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
LAB_109fefe5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
