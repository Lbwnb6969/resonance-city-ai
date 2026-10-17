// RVA 0x10d1060 | FuryStudios.FurySDK.Platform$$Init
// PDB: Platform_Init_m85ECB857208F2B5F4F28821555A3D0170C3A4C3E
// Body: [[110d1060, 110d15a5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e500 IsInst
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103bcea0 Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
// 1043e540 ClassTypeReference_CreateInstance_TisRuntimeObject_m4978F730C671BC44CAE323583486B6AD171BDB8F_gshared
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a3d8a0 GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8
// 10a3d900 GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B
// 10a3ddc0 GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144
// 10a3ded0 GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
// 10a49920 Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9
// 10a8d040 Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
Platform_Init_m85ECB857208F2B5F4F28821555A3D0170C3A4C3E
          (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *param_1,bool param_2,
          MethodInfo *param_3)

{
  ushort uVar1;
  PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *pPVar2;
  ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *pCVar3;
  bool bVar4;
  String_t *pSVar5;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Il2CppObject *pIVar8;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar9;
  VirtualInvokeData *pVVar10;
  ushort uVar11;

  if (DAT_11523a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ClassTypeReference_CreateInstance_TisILocalisationService_t36B9FF3DB4B6B08127F53EE2E80AC129CA155DD1_mC42DC0058DB507ADDEA22FF55F1D15A6AE8D53A1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IPlatformPlayerPrefs_t3DE5D731EA9504184EF7D2FD2D2BA1E0D4AABC84_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisPlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84_m2AFD74DABD2ED815796FBC877C4EEB7A4F1F895F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7A7CF87A55EEC12ECF610DC70B74E00F33D5E028);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral88181CCE4D84357CEA9DAD8C9E5E5A78089A2045);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAC76977D63C67688F9C4E2C402019083DEB38F21);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB44BD192ADAA63CA5804EBA5229F9ADBAAB0EF4B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD693243BD1F1BBA92C4A56103F4511C4691F033A);
    DAT_11523a93 = '\x01';
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((*(int *)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields
       != 0) && (!param_2)) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteralAC76977D63C67688F9C4E2C402019083DEB38F21,
               (MethodInfo *)0x0);
    return;
  }
  pSVar5 = *(String_t **)
            ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields + 0x14);
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar4 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                    (pSVar5,(String_t *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                       (_stringLiteralB44BD192ADAA63CA5804EBA5229F9ADBAAB0EF4B,
                        *(Il2CppObject **)
                         ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                               ->static_fields + 0x10),(MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    pSVar5 = *(String_t **)
              ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                    static_fields + 0x10);
    if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
    }
    bVar4 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                      (pSVar5,(String_t *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)_stringLiteralD693243BD1F1BBA92C4A56103F4511C4691F033A,
                 (MethodInfo *)0x0);
      return;
    }
    *(undefined4 *)
     ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields +
     0x14) = *(undefined4 *)
              ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                    static_fields + 0x10);
  }
  if (param_2) {
    pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B
                       (_stringLiteral7A7CF87A55EEC12ECF610DC70B74E00F33D5E028,(MethodInfo *)0x0);
  }
  else {
    pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
             il2cpp_codegen_object_new
                       (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
    GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144
              ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pOVar6,
               _stringLiteral7A7CF87A55EEC12ECF610DC70B74E00F33D5E028,(MethodInfo *)0x0);
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(pOVar6,(MethodInfo *)0x0);
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_Messenger_mFFE6618CDE1627394BA292ABBAAF486AC3656976_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_Messenger_mFFE6618CDE1627394BA292ABBAAF486AC3656976_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar8 = *(Il2CppObject **)
            ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields + 8);
  if (pIVar8 == (Il2CppObject *)0x0) {
    if (((param_1 == (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) ||
        (param_1->___shared_5 ==
         (SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5 *)0x0)) ||
       (pPVar2 = param_1->___shared_5->___systemMessengerPrefab_4,
       pOVar6 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)) goto LAB_110d15a1;
    pTVar7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34
                       ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pOVar6,
                        (MethodInfo *)0x0);
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    pIVar8 = Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                       ((Il2CppObject *)pPVar2,pTVar7,
                        Object_Instantiate_TisPlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84_m2AFD74DABD2ED815796FBC877C4EEB7A4F1F895F_RuntimeMethod_var
                       );
  }
  if (`void___cdecl_Platform_set_Messenger_m902D8CCF970151C9FC4506773D04C920A4F3507E_inline(Il2CppObject*,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `void___cdecl_Platform_set_Messenger_m902D8CCF970151C9FC4506773D04C920A4F3507E_inline(Il2CppObject*,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  *(Il2CppObject **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields + 8)
       = pIVar8;
  if (`struct_Il2CppObject*___cdecl_Platform_get_Localisation_m223B5624900C6598F2205168432904EAB3E3A4BF_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_Localisation_m223B5624900C6598F2205168432904EAB3E3A4BF_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar8 = *(Il2CppObject **)
            ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pIVar8 == (Il2CppObject *)0x0) {
    if (((param_1 == (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) ||
        (param_1->___shared_5 ==
         (SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5 *)0x0)) ||
       (pCVar3 = param_1->___shared_5->___localisationServiceType_3,
       pCVar3 == (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *)0x0))
    goto LAB_110d15a1;
    pIVar8 = ClassTypeReference_CreateInstance_TisRuntimeObject_m4978F730C671BC44CAE323583486B6AD171BDB8F_gshared
                       (pCVar3,
                        ClassTypeReference_CreateInstance_TisILocalisationService_t36B9FF3DB4B6B08127F53EE2E80AC129CA155DD1_mC42DC0058DB507ADDEA22FF55F1D15A6AE8D53A1_RuntimeMethod_var
                       );
  }
  if (`void___cdecl_Platform_set_Localisation_mF141120C6BF313370CE35E817CEB3C1E398A3CB7_inline(Il2CppObject*,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `void___cdecl_Platform_set_Localisation_mF141120C6BF313370CE35E817CEB3C1E398A3CB7_inline(Il2CppObject*,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  *(Il2CppObject **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields + 4)
       = pIVar8;
  if (`struct_Il2CppObject*___cdecl_Platform_get_PlayerPrefs_m23FD15021E26390AC55989378A4ACA143892C4E1_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_PlayerPrefs_m23FD15021E26390AC55989378A4ACA143892C4E1_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar8 = *(Il2CppObject **)
            ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->
                  static_fields + 0xc);
  if (pIVar8 == (Il2CppObject *)0x0) {
    pIVar8 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295
                       (*(Type_t **)
                         ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                               ->static_fields + 0x18),(MethodInfo *)0x0);
    pIVar8 = IsInst(pIVar8,
                    IPlatformPlayerPrefs_t3DE5D731EA9504184EF7D2FD2D2BA1E0D4AABC84_il2cpp_TypeInfo_var
                   );
  }
  if (`void___cdecl_Platform_set_PlayerPrefs_mDBD6DAE8E8E1F7161163DA8196C9379EB1465CC7_inline(Il2CppObject*,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `void___cdecl_Platform_set_PlayerPrefs_mDBD6DAE8E8E1F7161163DA8196C9379EB1465CC7_inline(Il2CppObject*,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  *(Il2CppObject **)
   ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields + 0xc
   ) = pIVar8;
  if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if (*(int *)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields
      == 0) {
    if (pOVar6 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
      pCVar9 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8
                         ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)pOVar6,
                          *(Type_t **)
                           ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                                 ->static_fields + 0x14),(MethodInfo *)0x0);
      pIVar8 = IsInst((Il2CppObject *)pCVar9,
                      IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
      if (pIVar8 != (Il2CppObject *)0x0) {
        uVar11 = 0;
        uVar1 = ((pIVar8->field0_0x0).klass)->interface_offsets_count;
        if (uVar1 != 0) {
          do {
            if (((pIVar8->field0_0x0).klass)->interfaceOffsets[uVar11].interfaceType ==
                IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var) {
              pVVar10 = (VirtualInvokeData *)
                        &(&(pIVar8->field0_0x0).klass[1].byval_arg)
                         [((pIVar8->field0_0x0).klass)->interfaceOffsets[uVar11].offset].attrs;
              goto LAB_110d150a;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar1);
        }
        pVVar10 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar8,
                             IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var
                             ,3);
LAB_110d150a:
        (*pVVar10->methodPtr)(pIVar8,param_1,pVVar10->method);
        if (`void___cdecl_Platform_set_SDK_m1B390A744E4BADEEE9690F36832E7B664A4793B9_inline(Il2CppObject*,MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized == false) {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                    );
          `void___cdecl_Platform_set_SDK_m1B390A744E4BADEEE9690F36832E7B664A4793B9_inline(Il2CppObject*,MethodInfo_const*)'
          ::__l2::s_Il2CppMethodInitialized = true;
        }
        *(Il2CppObject **)
         Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields =
             pIVar8;
        goto LAB_110d1542;
      }
    }
LAB_110d15a1:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
LAB_110d1542:
  pSVar5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                     (_stringLiteral88181CCE4D84357CEA9DAD8C9E5E5A78089A2045,
                      *(Il2CppObject **)
                       ((int)Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var
                             ->static_fields + 0x14),(MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return;
}
