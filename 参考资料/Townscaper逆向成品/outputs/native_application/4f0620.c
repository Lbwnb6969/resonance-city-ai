// RVA 0x4f0620 | Placemaker.Ui.LanguageButtons$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: LanguageButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mEF418FC203AD1766B6E645ABDEB942175A8C01D3
// Body: [[104f0620, 104f07db] [104f07df, 104f089e] [104f08a5, 104f0a27]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 104fcda0 LocalizationManager_GetAllLanguages_m9DA6F7C9D20EBEA2294CAAE9D23A52D1C62CB557
// 104fe6f0 LocalizationManager_GetTranslation_mD21D2E65CEC0BAC843CE5292B8DBD139DCCD28E1
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d21d0 List_1_Sort_m42CAA2F2C4D038952F9E1F3EEEDDAECE8E045358_gshared
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 110301d0 List_1_Add_mF21FCE34343D965AE52941CB544C5FB1A22FA234_gshared

void __cdecl
LanguageButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mEF418FC203AD1766B6E645ABDEB942175A8C01D3
          (LanguageButtons_t9A4ECA21F7C2216092FC318A31A8492996DE2564 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  int iVar1;
  BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 *pBVar2;
  Delegate_t *pDVar3;
  float fVar4;
  RangePositionInfo_tB46C25982A33E1DF36005E89A4A1EA3D397DB8BB RVar5;
  String_t *pSVar6;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar7;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar8;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar9;
  DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *pDVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *pIVar16;
  uint uVar17;
  int local_10;

  if (DAT_1151d21b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m8DCA9587DDA0D57D25FDB8F8CB18122E75B1CDE3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisStandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3_m8518E97FC3ADDF45091EE4A24A5873071BBF555D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mF2BF605A57E202D5D8E2B43AD4C4F57C5D97AC75_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Sort_m98A8D8B6E958AA3DC66865F9C8DC31D3782E86C4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m32497F1BC25568C613F6EBBF2A4CBC86D64C904B_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mDE343056090E2CDDF5F1E65F25F87547A87CBBC0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m2BDE6345D9911E06F3EEC01227BA47D35CF1B3E0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC55F6AA22317C17DDA5978E971EEDDBD83E37AD5_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m22BFF4DE7A7897F4819C9069E5A1F2CA2221FD2D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mEC6628BA60D0282C2C59B4BB8CC29A503FBBB3BB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mEF61BF8129D71A450828583AE1A02D4AD831A070_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_t38BC4FC546AE22FDBE61EC02CDEE324CD34B775B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral33F4CAEA0264E784241A2A0BB358C83CCB9F74C0);
    DAT_1151d21b = '\x01';
  }
  pBVar7 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass6_0_t38BC4FC546AE22FDBE61EC02CDEE324CD34B775B_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar7,(MethodInfo *)0x0);
  if (pBVar7 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar7->___name_0 = (String_t *)param_1;
    (pBVar7->___referenceResolution_2).___y_1 = (float)param_2;
    if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
         has_cctor != '\0') &&
       (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var);
    }
    pLVar8 = LocalizationManager_GetAllLanguages_m9DA6F7C9D20EBEA2294CAAE9D23A52D1C62CB557
                       (true,(MethodInfo *)0x0);
    param_1->___languages_5 = pLVar8;
    pSVar6 = _stringLiteral33F4CAEA0264E784241A2A0BB358C83CCB9F74C0;
    if (pLVar8 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) goto LAB_104f0a1c;
    iVar1 = pLVar8->____size_2;
    pLVar9 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
             il2cpp_codegen_object_new
                       (List_1_tC55F6AA22317C17DDA5978E971EEDDBD83E37AD5_il2cpp_TypeInfo_var);
    List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
              (pLVar9,iVar1,List_1__ctor_m32497F1BC25568C613F6EBBF2A4CBC86D64C904B_RuntimeMethod_var
              );
    if (param_1->___languages_5 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0)
    goto LAB_104f0a1c;
    uVar17 = param_1->___languages_5->____size_2 - 1;
    if (-1 < (int)uVar17) {
      local_10 = uVar17 * 4 + 0x10;
      do {
        pLVar8 = param_1->___languages_5;
        if (pLVar8 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) goto LAB_104f0a1c;
        if ((uint)pLVar8->____size_2 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pBVar2 = *(BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 **)
                  ((int)pLVar8->____items_1->m_Items + local_10 + -0x10);
        if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
             has_cctor != '\0') &&
           (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (
                    LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
                    );
        }
        pDVar10 = (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *)
                  LocalizationManager_GetTranslation_mD21D2E65CEC0BAC843CE5292B8DBD139DCCD28E1
                            (pSVar6,true,0,true,false,
                             (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0,
                             (String_t *)pBVar2,(MethodInfo *)0x0);
        if (pLVar9 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_104f0a1c;
        RVar5.___rangeCounters_1 = pDVar10;
        RVar5.___curpos_0 = pBVar2;
        List_1_Add_mF21FCE34343D965AE52941CB544C5FB1A22FA234_gshared
                  ((List_1_t13B1332790E09F181E14718B9800D8D500D6508A *)pLVar9,RVar5,
                   List_1_Add_mF2BF605A57E202D5D8E2B43AD4C4F57C5D97AC75_RuntimeMethod_var);
        local_10 = local_10 + -4;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    if (pLVar9 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_104f0a1c;
    List_1_Sort_m42CAA2F2C4D038952F9E1F3EEEDDAECE8E045358_gshared
              (pLVar9,List_1_Sort_m98A8D8B6E958AA3DC66865F9C8DC31D3782E86C4_RuntimeMethod_var);
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___languages_5 ==
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_104f0a1c;
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___languages_5,
               List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
    local_10 = 0x10;
    uVar17 = 0;
    while( true ) {
      if (pLVar9->____size_2 <= (int)uVar17) break;
      if ((uint)pLVar9->____size_2 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___languages_5 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_104f0a1c;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___languages_5,
                 *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                  ((int)&((KeyValuePair_2U5BU5D_t7A55D2FEB3F9BBFE7CC9322E7E8F00A4D1C77D4D *)
                         (pLVar9->____items_1->m_Items + -1))->_padding_ + local_10),
                 List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
      uVar17 = uVar17 + 1;
      local_10 = local_10 + 8;
    }
    pIVar11 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         Component_GetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m8DCA9587DDA0D57D25FDB8F8CB18122E75B1CDE3_RuntimeMethod_var
                        );
    if (param_1->___leftArrow_6 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
    goto LAB_104f0a1c;
    pIVar12 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___leftArrow_6,
                         Component_GetComponent_TisStandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3_m8518E97FC3ADDF45091EE4A24A5873071BBF555D_RuntimeMethod_var
                        );
    (pBVar7->___referenceResolution_2).___x_0 = (float)pIVar12;
    if (param_1->___rightArrow_7 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
    goto LAB_104f0a1c;
    pIVar12 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___rightArrow_7,
                         Component_GetComponent_TisStandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3_m8518E97FC3ADDF45091EE4A24A5873071BBF555D_RuntimeMethod_var
                        );
    pBVar7->___screenAspectRatio_1 = (float)pIVar12;
    if (pIVar11 == (Il2CppObject *)0x0) goto LAB_104f0a1c;
    pDVar3 = (Delegate_t *)pIVar11[3].monitor;
    pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar13,(Il2CppObject *)pBVar7,
               (int)
               U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m22BFF4DE7A7897F4819C9069E5A1F2CA2221FD2D_RuntimeMethod_var
               ,Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
    pIVar14 = (Il2CppClass *)
              Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                        (pDVar3,(Delegate_t *)pOVar13,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)0x0;
    if (pIVar14 != (Il2CppClass *)0x0) {
      if ((Il2CppClass *)pIVar14->image ==
          Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var) {
        pIVar15 = pIVar14;
      }
      pIVar16 = Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var;
      if (pIVar15 == (Il2CppClass *)0x0) goto LAB_104f0a21;
    }
    pIVar14 = pIVar11[2].field0_0x0.klass;
    pIVar11[3].monitor = (MonitorData *)pIVar15;
    pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar13,(Il2CppObject *)pBVar7,
               (int)
               U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mEC6628BA60D0282C2C59B4BB8CC29A503FBBB3BB_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pIVar14 = (Il2CppClass *)
              Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                        ((Delegate_t *)pIVar14,(Delegate_t *)pOVar13,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)0x0;
    if (pIVar14 != (Il2CppClass *)0x0) {
      if ((Il2CppClass *)pIVar14->image ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pIVar15 = pIVar14;
      }
      pIVar16 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
      if (pIVar15 == (Il2CppClass *)0x0) goto LAB_104f0a21;
    }
    pIVar11[2].field0_0x0.klass = pIVar15;
    fVar4 = (pBVar7->___referenceResolution_2).___y_1;
    if (fVar4 != 0.0) {
      pDVar3 = *(Delegate_t **)((int)fVar4 + 0xa8);
      pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar13,(Il2CppObject *)pBVar7,
                 (int)
                 U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mEF61BF8129D71A450828583AE1A02D4AD831A070_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pIVar14 = (Il2CppClass *)
                Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                          (pDVar3,(Delegate_t *)pOVar13,(MethodInfo *)0x0);
      pIVar15 = (Il2CppClass *)0x0;
      if (pIVar14 != (Il2CppClass *)0x0) {
        if ((Il2CppClass *)pIVar14->image ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pIVar15 = pIVar14;
        }
        pIVar16 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
        if (pIVar15 == (Il2CppClass *)0x0) {
LAB_104f0a21:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException((Il2CppObject *)pIVar14,pIVar16);
        }
      }
      *(Il2CppClass **)((int)fVar4 + 0xa8) = pIVar15;
      return;
    }
  }
LAB_104f0a1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
