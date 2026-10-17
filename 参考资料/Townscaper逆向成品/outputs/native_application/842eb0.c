// RVA 0x842eb0 | Placemaker.Ui.GenericMenuNavigator$$UpdateControls
// PDB: GenericMenuNavigator_UpdateControls_m74B7C2586361C2C4857B9155F755D9228898DC02
// Body: [[10842eb0, 108430fa] [10843101, 108431f0]]
// Direct callees:
// 1003e330 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103dcf10 NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
// 103dcf90 NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 1080ca70 RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
// 10842cc0 GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
GenericMenuNavigator_UpdateControls_m74B7C2586361C2C4857B9155F755D9228898DC02
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar4;
  bool bVar5;
  uint uVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Il2CppObject *pIVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar16;

  if (DAT_1151f449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&INavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    DAT_1151f449 = '\x01';
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_108431ec;
  bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,(MethodInfo *)0x0
                    );
  if (bVar5) {
    pIVar8 = param_1->___navigableMenu_5;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pAVar16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)&DAT_00000001;
LAB_108431d5:
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (0,INavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_il2cpp_TypeInfo_var,
                 pIVar8,pAVar16);
      return;
    }
    goto LAB_108431ec;
  }
  bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,(MethodInfo *)0x0
                    );
  if (bVar5) {
    pIVar8 = param_1->___navigableMenu_5;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pAVar16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
      goto LAB_108431d5;
    }
    goto LAB_108431ec;
  }
  if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pIVar2 = param_1->___master_4->___inputModeManager_19,
      pIVar2 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
     (pUVar3 = pIVar2->___gamepadState_6,
     pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_108431ec;
  bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                    (pUVar3,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  fVar13 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar1,_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                      (MethodInfo *)0x0);
  fVar14 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                     (pPVar1,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                      (MethodInfo *)0x0);
  fVar12 = fVar13;
  if (param_1->___mode_12 == 1) {
    fVar12 = fVar14;
    fVar14 = fVar13;
  }
  fVar13 = (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar11 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar15 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(fVar12,(MethodInfo *)0x0);
  fVar14 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(fVar14,(MethodInfo *)0x0);
  if ((fVar11 <= __real_3dcccccd) || (fVar11 <= fVar13)) {
    if ((fVar13 <= __real_3dcccccd) || (fVar13 <= fVar11)) {
      bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                        (pPVar1,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,
                         (MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      if (param_1->___selectedButton_8 !=
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
        NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
                  (param_1->___selectedButton_8,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar5 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                        (&param_1->___rapidX_9,1.0,(MethodInfo *)0x0);
      iVar9 = 0;
      if (bVar5) {
        iVar9 = (int)fVar15;
      }
      if (param_1->___selectedButton_8 !=
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
        NavigableButton_OnHorizontal_mF0C65CE5CCD98D00625D5A111CD8FBAD354CBB87
                  (param_1->___selectedButton_8,iVar9,fVar12,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_108431ec;
  }
  bVar5 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                    (&param_1->___rapidY_10,1.0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if (DAT_1151f44c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC6E3BE334F9069B54AF6841F840740F75D621E2_RuntimeMethod_var)
    ;
    DAT_1151f44c = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___navigableButtons_7 ==
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_108431ec;
  uVar6 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                    ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     param_1->___navigableButtons_7,(Il2CppObject *)param_1->___selectedButton_8,
                     List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
  pLVar4 = param_1->___navigableButtons_7;
  uVar10 = (int)fVar14 + uVar6;
  if (pLVar4 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_108431ec;
  iVar9 = pLVar4->____size_2;
  if ((int)uVar10 < 0) {
LAB_108430d5:
    uVar10 = uVar10 + iVar9;
    (param_1->___rapidY_10).___t_2 = (param_1->___rapidY_10).___t_2 - __real_3f800000;
  }
  else if (iVar9 <= (int)uVar10) {
    iVar9 = -iVar9;
    goto LAB_108430d5;
  }
  if (uVar10 == uVar6) {
    return;
  }
  if ((uint)pLVar4->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
            (param_1,*(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                      (pLVar4->____items_1 + uVar10 * 4 + 0x10),(MethodInfo *)0x0);
  if (param_1->___selectedButton_8 !=
      (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
    pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___selectedButton_8,(MethodInfo *)0x0);
    ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar7,4,1.0,(MethodInfo *)0x0);
    return;
  }
LAB_108431ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
