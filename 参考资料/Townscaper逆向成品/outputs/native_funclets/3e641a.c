// RVA 0x3e641a | Recovered.function.called_by_3e6000
// PDB: FUN_103e641a
// Body: [[103e641a, 103e67de] [103e67fe, 103e6820]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 103e5740 UiMaster_ControllerSetup_m4EB7EEEF59FE2ED4D744FA2153CCA2643FE3137B
// 103e67ed FUN_103e67ed
// 1043f240 Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
// 1065f360 QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
// 106675f0 Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 107ce4e0 ReInput_add_ControllerConnectedEvent_m897977458C3E20BC62664916339A97430E6E0C25
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void FUN_103e641a(void)

{
  ushort uVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar4;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar5;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar6;
  int *piVar7;
  Il2CppObject *pIVar8;
  Exception_t *pEVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  Il2CppClass *pIVar13;
  bool bVar14;
  ushort uVar15;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar16;
  int iVar17;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar18;
  Delegate_t *pDVar19;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar20;
  VirtualInvokeData *pVVar21;
  undefined4 *puVar22;
  Delegate_t *pDVar23;
  int unaff_EBP;
  int unaff_ESI;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar24;
  int unaff_EDI;
  float fVar25;

  *(int *)(unaff_EBP + -0x14) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x5c),
             Enumerator_Dispose_mF5B76F934BB21BB5541D6435B960A2DD70145649_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x18) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x40 + unaff_EDI * 4) == 0x129)) {
    *(int *)(unaff_EBP + -0x14) = unaff_EDI + -1;
  }
  if (*(char *)(unaff_ESI + 0x69) != '\0') {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined1 *)(unaff_ESI + 0x69) = 1;
  pRVar16 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                      ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(unaff_EBP + -0x4c),
                       (MethodInfo *)0x0);
  fVar25 = pRVar16->___m_YMin_1;
  fVar10 = pRVar16->___m_Width_2;
  fVar11 = pRVar16->___m_Height_3;
  *(float *)(unaff_ESI + 0x74) = pRVar16->___m_XMin_0;
  *(float *)(unaff_ESI + 0x78) = fVar25;
  *(float *)(unaff_ESI + 0x7c) = fVar10;
  *(float *)(unaff_ESI + 0x80) = fVar11;
  iVar17 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863((MethodInfo *)0x0);
  *(int *)(unaff_ESI + 0x90) = iVar17;
  fVar25 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  *(float *)(unaff_EBP + -0x24) = fVar25;
  *(undefined4 *)(unaff_ESI + 0x8c) = *(undefined4 *)(unaff_EBP + -0x24);
  iVar17 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  *(int *)(unaff_ESI + 0x84) = iVar17;
  iVar17 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  *(int *)(unaff_ESI + 0x88) = iVar17;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  pDVar23 = *(Delegate_t **)
             ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                   static_fields + 0xc);
  pOVar18 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            il2cpp_codegen_object_new
                      (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar18,*(Il2CppObject **)(unaff_EBP + 8),
             (int)
             UiMaster_U3CMaybeSetupU3Eb__58_0_m18E9A417F9B38CED66AD53E99F26F73DC422A00D_RuntimeMethod_var
             ,(MethodInfo *)0x0);
  pDVar19 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                      (pDVar23,(Delegate_t *)pOVar18,(MethodInfo *)0x0);
  pDVar23 = (Delegate_t *)0x0;
  if (pDVar19 != (Delegate_t *)0x0) {
    if ((Il2CppClass *)pDVar19->_padding_ ==
        Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
      pDVar23 = pDVar19;
    }
    if (pDVar23 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)pDVar19,
                 Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    }
  }
  pUVar2 = *(UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 **)(unaff_EBP + 8);
  *(Delegate_t **)
   ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields + 0xc
   ) = pDVar23;
  UiMaster_ControllerSetup_m4EB7EEEF59FE2ED4D744FA2153CCA2643FE3137B(pUVar2,(MethodInfo *)0x0);
  pOVar18 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            il2cpp_codegen_object_new
                      (Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar18,(Il2CppObject *)pUVar2,
             (int)
             UiMaster_OnControllerConnected_m6E875C3F36936378360CFA16263813159C140CF5_RuntimeMethod_var
             ,Action_1__ctor_m1E9751809636AB39A3798E047C0FDBDD48C9BADA_RuntimeMethod_var);
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  ReInput_add_ControllerConnectedEvent_m897977458C3E20BC62664916339A97430E6E0C25
            ((Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A *)pOVar18,(MethodInfo *)0x0);
  if (DAT_1151c8b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c8b6 = '\x01';
  }
  if (pUVar2->___worldMaster_5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
  goto LAB_103e67fe;
  pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar3,
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    if (((pUVar2->___worldMaster_5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        || (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
           pSVar3 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
       (pSVar4 = pSVar3->___settingsData_10,
       pSVar4 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) goto LAB_103e67fe;
    if (pSVar4->___antiAliasing_4 != false) goto LAB_103e6608;
LAB_103e664a:
    iVar17 = 1;
  }
  else {
LAB_103e6608:
    fVar25 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar25;
    if (__real_43b40000 < *(float *)(unaff_EBP + -0x24)) goto LAB_103e664a;
    fVar25 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar25;
    iVar17 = (uint)(*(float *)(unaff_EBP + -0x24) <= __real_43340000) * 2 + 2;
  }
  QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
            (iVar17,(MethodInfo *)0x0);
  if (pUVar2->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
    pUVar5 = pUVar2->___dim_10->___alphaState_5;
    *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(unaff_EBP + -0x24) = pUVar5;
    if (pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      pAVar6 = pUVar5->___onTargetChange_4;
      pOVar18 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar18,*(Il2CppObject **)(unaff_EBP + 8),
                 (int)
                 UiMaster_U3CMaybeSetupU3Eb__58_1_m8F7F33A0B76F0385C34BF6AB43B14D3D5132CF66_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      pDVar19 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                          ((Delegate_t *)pAVar6,(Delegate_t *)pOVar18,(MethodInfo *)0x0);
      pDVar23 = (Delegate_t *)0x0;
      if (pDVar19 != (Delegate_t *)0x0) {
        if ((Il2CppClass *)pDVar19->_padding_ ==
            Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
          pDVar23 = pDVar19;
        }
        if (pDVar23 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pDVar19,
                     Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        }
      }
      pCVar24 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + 8);
      *(Delegate_t **)(*(int *)(unaff_EBP + -0x24) + 0x18) = pDVar23;
      Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
                (pCVar24,true,
                 *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)&pCVar24[8].field_0x4,
                 Component_GetComponentsInChildren_TisIUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_mC62D308C44A29F37D431D1C89AD5B212637BF057_RuntimeMethod_var
                );
      if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)&pCVar24[8].field_0x4 !=
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
        pEVar20 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                            ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                             (unaff_EBP + -0x4c),
                             *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
                              &pCVar24[8].field_0x4,
                             List_1_GetEnumerator_m52F1BBD1E85F7192E45EFBBB260E310AF0BD960E_RuntimeMethod_var
                            );
        iVar17 = pEVar20->___index_1;
        iVar12 = pEVar20->___version_2;
        pIVar8 = pEVar20->___current_3;
        *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x5c) =
             pEVar20->___list_0;
        *(int *)(unaff_EBP + -0x58) = iVar17;
        *(int *)(unaff_EBP + -0x54) = iVar12;
        *(Il2CppObject **)(unaff_EBP + -0x50) = pIVar8;
        *(undefined4 *)(unaff_EBP + -4) = 2;
LAB_103e6705:
        do {
          bVar14 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                             ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                              (unaff_EBP + -0x5c),
                              Enumerator_MoveNext_m63B4B1C7DEF2FDFB6BCD57E39E46E766E21FC50A_RuntimeMethod_var
                             );
          if (!bVar14) {
            *(undefined4 *)(unaff_EBP + -0x3c + *(int *)(unaff_EBP + -0x14) * 4) = 0x1eb;
            pEVar9 = *(Exception_t **)(unaff_EBP + -0x18);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                      ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                       (unaff_EBP + -0x5c),
                       Enumerator_Dispose_mF5B76F934BB21BB5541D6435B960A2DD70145649_RuntimeMethod_var
                      );
            if (pEVar9 == (Exception_t *)0x0) {
              FUN_103e67ed();
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar9,(MethodInfo *)0x0);
          }
          piVar7 = *(int **)(unaff_EBP + -0x50);
          *(int **)(unaff_EBP + -0x20) = piVar7;
          pIVar13 = IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var;
          if (piVar7 == (int *)0x0) break;
          iVar17 = *piVar7;
          uVar15 = 0;
          *(int *)(unaff_EBP + -0x1c) = iVar17;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          uVar1 = *(ushort *)(iVar17 + 0xb2);
          *(uint *)(unaff_EBP + -0x28) = (uint)uVar1;
          if (uVar1 != 0) {
            do {
              pCVar24 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + 8);
              if (*(Il2CppClass **)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x58) + (uint)uVar15 * 8)
                  == pIVar13) {
                puVar22 = (undefined4 *)
                          (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x58) + 4 +
                                   (uint)uVar15 * 8) * 8 + 0xc4 + *(int *)(unaff_EBP + -0x1c));
                (*(code *)*puVar22)(*(undefined4 *)(unaff_EBP + -0x20),pCVar24,puVar22[1]);
                goto LAB_103e6705;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (ushort)*(undefined4 *)(unaff_EBP + -0x28));
          }
          pIVar8 = *(Il2CppObject **)(unaff_EBP + -0x20);
          pVVar21 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar8,pIVar13,1);
          (*pVVar21->methodPtr)(pIVar8,pCVar24,pVVar21->method);
        } while( true );
      }
    }
  }
LAB_103e67fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
