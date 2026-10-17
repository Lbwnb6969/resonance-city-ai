// RVA 0x10d07f0 | FuryStudios.FurySDK.Settings.PlatformSettings$$.ctor
// PDB: PlatformSettings__ctor_mE7172F6DE9CA48D29896550CD831DEFA8A35993D
// Body: [[110d07f0, 110d0aea]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
PlatformSettings__ctor_mE7172F6DE9CA48D29896550CD831DEFA8A35993D
          (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5 *pSVar2;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar3;
  StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *pSVar4;
  NintendoSwitchPlatformSettings_t7D16F172EDE4528612B2925A630F22F5176BDDB9 *pNVar5;
  Playstation4PlatformSettings_t5602922B36E7EE61C1DAFEB90788250C4128C8A1 *pPVar6;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar7;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar8;
  GameCorePlatformSettings_t4AF5C45F4C380E771B30587D9EAD61A862085449 *pGVar9;

  if (DAT_11523a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameCorePlatformSettings_t4AF5C45F4C380E771B30587D9EAD61A862085449_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GogPlatformSettings_tE56152948AD9788D126B109CDDB401A3EB5E48E0_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NintendoSwitchPlatformSettings_t7D16F172EDE4528612B2925A630F22F5176BDDB9_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformPlayerPrefsSettings_t661CAFD3FFCC8373EBCC2F41ED6EEDB091EE12C5_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Playstation4PlatformSettings_t5602922B36E7EE61C1DAFEB90788250C4128C8A1_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SteamPlatformSettings_t2785A47E713BF24CB5DC5AC2C69FE052AB1F2165_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       iOSPlatformSettings_t0EFA770640619CA9DE206BC4CF3ED20386F29ADD_il2cpp_TypeInfo_var
              );
    DAT_11523a9b = '\x01';
  }
  pSVar2 = (SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5 *)
           il2cpp_codegen_object_new
                     (
                     SharedPlatformSettings_tED4579B8787675A837703B59934E68C9FCAD7AB5_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pSVar2,
             (MethodInfo *)0x0);
  param_1->___shared_5 = pSVar2;
  pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     PlatformPlayerPrefsSettings_t661CAFD3FFCC8373EBCC2F41ED6EEDB091EE12C5_il2cpp_TypeInfo_var
                     );
  if (DAT_11523a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral4BA0E432CFF19DD7E7CD2B11CA135499BC4F5A17);
    DAT_11523a9a = '\x01';
  }
  pUVar3->___U3CU3E1__state_0 = (int)_stringLiteral4BA0E432CFF19DD7E7CD2B11CA135499BC4F5A17;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar3,(MethodInfo *)0x0);
  param_1->___playerPrefs_6 =
       (PlatformPlayerPrefsSettings_t661CAFD3FFCC8373EBCC2F41ED6EEDB091EE12C5 *)pUVar3;
  pSVar4 = (StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *)
           il2cpp_codegen_object_new
                     (
                     StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916_il2cpp_TypeInfo_var
                     );
  pSVar4->___storageRoot_0 = 2;
  pSVar4->___storageContainerBehaviour_4 = 2;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pSVar4,
             (MethodInfo *)0x0);
  param_1->___standalone_7 = pSVar4;
  pNVar5 = (NintendoSwitchPlatformSettings_t7D16F172EDE4528612B2925A630F22F5176BDDB9 *)
           il2cpp_codegen_object_new
                     (
                     NintendoSwitchPlatformSettings_t7D16F172EDE4528612B2925A630F22F5176BDDB9_il2cpp_TypeInfo_var
                     );
  if (DAT_11523a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C);
    DAT_11523a88 = '\x01';
  }
  pNVar5->___mountName_1 = _stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C;
  pNVar5->___writeFrequencyLimit_2 = true;
  pNVar5->___writeFrequencyBudget_3 = 0x20;
  pNVar5->___writeAmountLimit_4 = true;
  pNVar5->___writeAmountBudget_5 = 0x10;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pNVar5,
             (MethodInfo *)0x0);
  param_1->___nintendoSwitch_8 = pNVar5;
  pPVar6 = (Playstation4PlatformSettings_t5602922B36E7EE61C1DAFEB90788250C4128C8A1 *)
           il2cpp_codegen_object_new
                     (
                     Playstation4PlatformSettings_t5602922B36E7EE61C1DAFEB90788250C4128C8A1_il2cpp_TypeInfo_var
                     );
  if (DAT_11523aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m21E52E3842510BF66A2B70D340A9BA75FA8F71DB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mF989415B366B5405CD7CBC6A63902D59A43EAFB5_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tAA1BDCC49F0B1C59FDB00375D6115EF7816CB9B7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Playstation4AgeRestriction_t5192FDA692295AC43AACF6D90213F59FAFFFC645_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral40399FE230644CCC6BBC12804247F6C4FD261552);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
    DAT_11523aa1 = '\x01';
  }
  pPVar6->___defaultSaveIconPath_0 = _stringLiteral40399FE230644CCC6BBC12804247F6C4FD261552;
  pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAA1BDCC49F0B1C59FDB00375D6115EF7816CB9B7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar7,List_1__ctor_mF989415B366B5405CD7CBC6A63902D59A43EAFB5_RuntimeMethod_var);
  OVar8 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
          il2cpp_codegen_object_new
                    (
                    Playstation4AgeRestriction_t5192FDA692295AC43AACF6D90213F59FAFFFC645_il2cpp_TypeInfo_var
                    );
  pSVar1 = _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)OVar8,(MethodInfo *)0x0
            );
  *(String_t **)((int)OVar8 + 8) = pSVar1;
  *(undefined4 *)((int)OVar8 + 0xc) = 10;
  if (pLVar7 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar7,OVar8,
               List_1_Add_m21E52E3842510BF66A2B70D340A9BA75FA8F71DB_RuntimeMethod_var);
    pPVar6->___ageRestrictions_3 = (List_1_tAA1BDCC49F0B1C59FDB00375D6115EF7816CB9B7 *)pLVar7;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pPVar6,
               (MethodInfo *)0x0);
    param_1->___playstation4_9 = pPVar6;
    pGVar9 = (GameCorePlatformSettings_t4AF5C45F4C380E771B30587D9EAD61A862085449 *)
             il2cpp_codegen_object_new
                       (
                       GameCorePlatformSettings_t4AF5C45F4C380E771B30587D9EAD61A862085449_il2cpp_TypeInfo_var
                       );
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pGVar9,
               (MethodInfo *)0x0);
    param_1->___gameCore_10 = pGVar9;
    pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
             il2cpp_codegen_object_new
                       (
                       SteamPlatformSettings_t2785A47E713BF24CB5DC5AC2C69FE052AB1F2165_il2cpp_TypeInfo_var
                       );
    *(undefined1 *)&pUVar3->___U3CU3E2__current_1 = 1;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              (pUVar3,(MethodInfo *)0x0);
    param_1->___steam_11 = (SteamPlatformSettings_t2785A47E713BF24CB5DC5AC2C69FE052AB1F2165 *)pUVar3
    ;
    pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
             il2cpp_codegen_object_new
                       (
                       GogPlatformSettings_tE56152948AD9788D126B109CDDB401A3EB5E48E0_il2cpp_TypeInfo_var
                       );
    if (DAT_11523a80 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
      DAT_11523a80 = '\x01';
    }
    pUVar3->___U3CU3E1__state_0 = (int)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    pUVar3->___U3CU3E2__current_1 =
         (Il2CppObject *)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    pUVar3->___U3CU3E4__this_2 =
         (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)
         _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              (pUVar3,(MethodInfo *)0x0);
    param_1->___gog_12 = (GogPlatformSettings_tE56152948AD9788D126B109CDDB401A3EB5E48E0 *)pUVar3;
    pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
             il2cpp_codegen_object_new
                       (
                       iOSPlatformSettings_t0EFA770640619CA9DE206BC4CF3ED20386F29ADD_il2cpp_TypeInfo_var
                       );
    if (DAT_11523ab3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
      DAT_11523ab3 = '\x01';
    }
    pUVar3->___U3CU3E1__state_0 = (int)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              (pUVar3,(MethodInfo *)0x0);
    param_1->___ios_13 = (iOSPlatformSettings_t0EFA770640619CA9DE206BC4CF3ED20386F29ADD *)pUVar3;
    ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
              ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
