// RVA 0xa0bf20 | Placemaker.Ui.SideMenuNavigator$$UpdateControls
// PDB: SideMenuNavigator_UpdateControls_m2E7E274E1F403706922E5FE5930F28F966DFEBD2
// Body: [[10a0bf20, 10a0c13b] [10a0c142, 10a0c255]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103dcf10 NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
// 103dcf90 NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1080ca70 RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
// 1083e560 GamepadScreenCursor_Pan_mF2C5DE331F9947924DE87DFA26163E03D14942D4
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a0bad0 SideMenuNavigator_SelectButton_mB674C8C38FFE5C191F17C04A32C4C05A6967CE25
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
// 10f1f2e0 Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
SideMenuNavigator_UpdateControls_m2E7E274E1F403706922E5FE5930F28F966DFEBD2
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar2;
  GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *pGVar3;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar4;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar5;
  bool bVar6;
  uint uVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  if (DAT_115201f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01C3B3B54A3BF9FABDBA9CA165AD98275295AD12);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    DAT_115201f0 = '\x01';
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_10a0c251;
  bVar6 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,(MethodInfo *)0x0
                    );
  if (bVar6) {
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pSVar4 = param_1->___master_4->___sideMenu_8,
        pSVar4 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) &&
       (pUVar5 = pSVar4->___openState_8,
       pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pUVar5,false,(MethodInfo *)0x0);
      return;
    }
    goto LAB_10a0c251;
  }
  fVar13 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar1,_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                      (MethodInfo *)0x0);
  fVar14 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar1,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                      (MethodInfo *)0x0);
  if (((fVar13 == 0.0) && (fVar14 == 0.0)) && (param_1->___isPanning_14 != false)) {
    param_1->___isPanning_14 = false;
  }
  bVar6 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                    (pPVar1,_stringLiteral01C3B3B54A3BF9FABDBA9CA165AD98275295AD12,(MethodInfo *)0x0
                    );
  if ((bVar6) || (param_1->___isPanning_14 != false)) {
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pGVar3 = param_1->___master_4->___gamepadScreenCursor_18,
       pGVar3 != (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0)) {
      GamepadScreenCursor_Pan_mF2C5DE331F9947924DE87DFA26163E03D14942D4(pGVar3,(MethodInfo *)0x0);
      param_1->___isPanning_14 = true;
      return;
    }
    goto LAB_10a0c251;
  }
  fVar11 = (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar12 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar15 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(fVar13,(MethodInfo *)0x0);
  fVar14 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(fVar14,(MethodInfo *)0x0);
  if ((fVar12 <= __real_3dcccccd) || (fVar12 <= fVar11)) {
    if ((fVar11 <= __real_3dcccccd) || (fVar11 <= fVar12)) {
      bVar6 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                        (pPVar1,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,
                         (MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      if (param_1->___selectedButton_5 !=
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
        NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
                  (param_1->___selectedButton_5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar6 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                        (&param_1->___rapidX_13,1.0,(MethodInfo *)0x0);
      iVar9 = 0;
      if (bVar6) {
        iVar9 = (int)fVar15;
      }
      if (param_1->___selectedButton_5 !=
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
        NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
                  (param_1->___selectedButton_5,iVar9,fVar13,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_10a0c251;
  }
  bVar6 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                    (&param_1->___rapidY_12,1.0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  if (DAT_115201f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC6E3BE334F9069B54AF6841F840740F75D621E2_RuntimeMethod_var)
    ;
    DAT_115201f3 = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___navigableButtons_7 ==
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10a0c251;
  uVar7 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                    ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     param_1->___navigableButtons_7,(Il2CppObject *)param_1->___selectedButton_5,
                     List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
  pLVar2 = param_1->___navigableButtons_7;
  uVar10 = (int)fVar14 + uVar7;
  if (pLVar2 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_10a0c251;
  iVar9 = pLVar2->____size_2;
  if ((int)uVar10 < 0) {
LAB_10a0c11a:
    uVar10 = uVar10 + iVar9;
    (param_1->___rapidY_12).___t_2 = (param_1->___rapidY_12).___t_2 - __real_3f800000;
  }
  else if (iVar9 <= (int)uVar10) {
    iVar9 = -iVar9;
    goto LAB_10a0c11a;
  }
  if (uVar10 != uVar7) {
    if ((uint)pLVar2->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    SideMenuNavigator_SelectButton_mB674C8C38FFE5C191F17C04A32C4C05A6967CE25
              (param_1,*(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                        (pLVar2->____items_1 + uVar10 * 4 + 0x10),(MethodInfo *)0x0);
    if (param_1->___selectedButton_5 ==
        (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
LAB_10a0c251:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___selectedButton_5,(MethodInfo *)0x0);
    ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar8,4,1.0,(MethodInfo *)0x0);
  }
  return;
}
