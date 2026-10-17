// RVA 0x420050 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnEnable
// PDB: KeyboardAndMouseControlRemap_OnEnable_m7A032F128AABE866DF4416BB1B65C6669586FF66
// Body: [[10420050, 104203d1]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 107d18d0 ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10b30850 Options_set_isElementAllowedCallback_mC561D3B880A61BDECC2549B20C8476153AB8C071
// 10b30980 Options_set_timeout_mB1E9153230CD80C10DC7368569C8C4D18FF74B26
// 10db68d0 InputMapper_add_ConflictFoundEvent_mB8C4D5AD89D0F9DE353672F524CFA5F942CA2B19
// 10db6a60 InputMapper_add_InputMappedEvent_mE20346CC0473E1CDD4621CDB2F3BAEA7E8115EB7
// 10db6c00 InputMapper_add_StoppedEvent_mBF45E8DF95E58ECBCB82E22AC5809A2D8A5A5BB7
// 10db7100 InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44

void __cdecl
KeyboardAndMouseControlRemap_OnEnable_m7A032F128AABE866DF4416BB1B65C6669586FF66
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *pOVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;

  if (DAT_1151cb0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m930D5687987A10360296603212E07F2B421BFAD5_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mD8593DB6B2310453952707542C55E919B737F1AA_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnInputMapped_m2BEBB42576D37B70E359325706A7F2B80EA1E4E3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnIsElementAllowed_m78029C0D590962615A534924639962261FE0F324_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnStopped_mF7D3A3FC097FC99C5D54826D7E4AB290468B8048_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Predicate_1__ctor_m626F3F1E9A5D996602C00B7AA992D4090B677B05_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    DAT_1151cb0f = '\x01';
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (`bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    `bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (*(char *)((int)ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->
                     static_fields + 0x1c) != '\0') {
    pUVar1 = param_1->___master_4;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar1,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        if (param_1->___master_4->___player_43 ==
            (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) {
          return;
        }
        if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
        }
        pIVar4 = ReInput_get_userDataStore_m85E83BFADA168D3B9A540B3C6ACAC4583DEB780D
                           ((MethodInfo *)0x0);
        if (pIVar4 != (Il2CppObject *)0x0) {
          InterfaceFuncInvoker0<int>::Invoke
                    (5,IUserDataStore_tB5636525C5CAE151DD0907DA295F34387A65DEE2_il2cpp_TypeInfo_var,
                     pIVar4);
        }
        param_1->___buttonMapState_16 = false;
        if ((param_1->___inputMapper_11 !=
             (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
           (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                               (param_1->___inputMapper_11,(MethodInfo *)0x0),
           pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
          Options_set_timeout_mB1E9153230CD80C10DC7368569C8C4D18FF74B26
                    (pOVar5,0.0,(MethodInfo *)0x0);
          if ((param_1->___inputMapper_11 !=
               (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
             (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                 (param_1->___inputMapper_11,(MethodInfo *)0x0),
             pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
            pOVar5->___RLkchipDEbIPOmgapUMFSTlyRTk_11 = true;
            if ((param_1->___inputMapper_11 !=
                 (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
               (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                   (param_1->___inputMapper_11,(MethodInfo *)0x0),
               pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
              pOVar5->___lSyABECnMyNaLrgzdRBsOFCJkeP_12 = true;
              if ((param_1->___inputMapper_11 !=
                   (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
                 (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                     (param_1->___inputMapper_11,(MethodInfo *)0x0),
                 pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
                pOVar5->___QHRBAXJnkFvKxcRLToZXXTSekNl_3 = false;
                if (param_1->___inputMapper_11 !=
                    (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
                  pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                     (param_1->___inputMapper_11,(MethodInfo *)0x0);
                  pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                           il2cpp_codegen_object_new
                                     (
                                     Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00_il2cpp_TypeInfo_var
                                     );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            (pOVar6,(Il2CppObject *)param_1,
                             (int)
                             KeyboardAndMouseControlRemap_OnIsElementAllowed_m78029C0D590962615A534924639962261FE0F324_RuntimeMethod_var
                             ,
                             Predicate_1__ctor_m626F3F1E9A5D996602C00B7AA992D4090B677B05_RuntimeMethod_var
                            );
                  if (pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0) {
                    Options_set_isElementAllowedCallback_mC561D3B880A61BDECC2549B20C8476153AB8C071
                              (pOVar5,(Predicate_1_t7354879274B8E5AA7CC4EB72C117B04DA9258D00 *)
                                      pOVar6,(MethodInfo *)0x0);
                    if ((param_1->___inputMapper_11 !=
                         (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
                       (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                           (param_1->___inputMapper_11,(MethodInfo *)0x0),
                       pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
                      pOVar5->___dzSKczxVUGmPLGemzBrimbiwBIm_13 = false;
                      if ((param_1->___inputMapper_11 !=
                           (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) &&
                         (pOVar5 = InputMapper_get_options_m9997687D643A67C139C8B6F2E848027922513E44
                                             (param_1->___inputMapper_11,(MethodInfo *)0x0),
                         pOVar5 != (Options_t7F9F8B0DFD8E72E64B2FF901DE82613CDB7371F1 *)0x0)) {
                        pOVar5->___qBqlBkKFWuJVQTAJOboXaAilZPO_14 = true;
                        pIVar2 = param_1->___inputMapper_11;
                        pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                 il2cpp_codegen_object_new
                                           (
                                           Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629_il2cpp_TypeInfo_var
                                           );
                        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                  (pOVar6,(Il2CppObject *)param_1,
                                   (int)
                                   KeyboardAndMouseControlRemap_OnInputMapped_m2BEBB42576D37B70E359325706A7F2B80EA1E4E3_RuntimeMethod_var
                                   ,
                                   Action_1__ctor_mD8593DB6B2310453952707542C55E919B737F1AA_RuntimeMethod_var
                                  );
                        if (pIVar2 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
                        {
                          InputMapper_add_InputMappedEvent_mE20346CC0473E1CDD4621CDB2F3BAEA7E8115EB7
                                    (pIVar2,(Action_1_tDC63530029BF48655B990A0739FE8E5E2C194629 *)
                                            pOVar6,(MethodInfo *)0x0);
                          pIVar2 = param_1->___inputMapper_11;
                          pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                   il2cpp_codegen_object_new
                                             (
                                             Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603_il2cpp_TypeInfo_var
                                             );
                          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                    (pOVar6,(Il2CppObject *)param_1,
                                     (int)
                                     KeyboardAndMouseControlRemap_OnStopped_mF7D3A3FC097FC99C5D54826D7E4AB290468B8048_RuntimeMethod_var
                                     ,
                                     Action_1__ctor_m930D5687987A10360296603212E07F2B421BFAD5_RuntimeMethod_var
                                    );
                          if (pIVar2 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0
                             ) {
                            InputMapper_add_StoppedEvent_mBF45E8DF95E58ECBCB82E22AC5809A2D8A5A5BB7
                                      (pIVar2,(Action_1_tF1FF1B97143680997846E86EEDCE3E480ADA8603 *)
                                              pOVar6,(MethodInfo *)0x0);
                            pIVar2 = param_1->___inputMapper_11;
                            pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *
                                     )il2cpp_codegen_object_new
                                                (
                                                Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                                                );
                            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                      (pOVar6,(Il2CppObject *)param_1,
                                       (int)
                                       KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530_RuntimeMethod_var
                                       ,
                                       Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var
                                      );
                            if (pIVar2 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)
                                          0x0) {
                              InputMapper_add_ConflictFoundEvent_mB8C4D5AD89D0F9DE353672F524CFA5F942CA2B19
                                        (pIVar2,(Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C
                                                 *)pOVar6,(MethodInfo *)0x0);
                              param_1->___hasSetup_20 = false;
                              return;
                            }
                          }
                        }
                      }
                    }
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
  }
  return;
}
