// RVA 0x2ffa40 | Placemaker.Ui.SunButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SunButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m1A3874AE18263948E765C839D74B618587A0BC1D
// Body: [[102ffa40, 102ffbd6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 10448ac0 GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B

void __cdecl
SunButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m1A3874AE18263948E765C839D74B618587A0BC1D
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  Il2CppObject *pIVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;

  if (DAT_1151c1ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mDD1D8A90B2FE184091A94E1C700DACAC6E8209FB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m9E0DFBE7A10C99640E973551972C9CA1798AC75D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass23_0_t78CAB84E3D664D538DBF8A1ECB2EE82DC7CE0630_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c1ff = '\x01';
  }
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass23_0_t78CAB84E3D664D538DBF8A1ECB2EE82DC7CE0630_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  if (pBVar2 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar2->___name_0 = (String_t *)param_1;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___circle0_10 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___circle0_10,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        pIVar4 = GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
                           (pGVar3,
                            GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var
                           );
        pBVar2->___screenAspectRatio_1 = (float)pIVar4;
        pUVar1 = param_1->___handle0scale_19;
        pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar5,(Il2CppObject *)pBVar2,
                   (int)
                   U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mDD1D8A90B2FE184091A94E1C700DACAC6E8209FB_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar5,
                     (MethodInfo *)0x0);
          if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___circle1_11 !=
              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
            pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___circle1_11,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
              pIVar4 = GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
                                 (pGVar3,
                                  GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var
                                 );
              (pBVar2->___referenceResolution_2).___x_0 = (float)pIVar4;
              pUVar1 = param_1->___handle1scale_20;
              pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       il2cpp_codegen_object_new
                                 (
                                 Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                 );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar5,(Il2CppObject *)pBVar2,
                         (int)
                         U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m9E0DFBE7A10C99640E973551972C9CA1798AC75D_RuntimeMethod_var
                         ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                        );
              if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                          (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar5,
                           (MethodInfo *)0x0);
                pUVar1 = param_1->___handle0scale_19;
                if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var)
                  ;
                }
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (pUVar1,(MethodInfo *)0x0);
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (param_1->___handle1scale_20,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
