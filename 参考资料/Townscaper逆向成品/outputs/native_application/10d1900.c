// RVA 0x10d1900 | FuryStudios.FurySDK.Settings.Playstation4PlatformSettings$$.ctor
// PDB: Playstation4PlatformSettings__ctor_mC381E3680CA988D5E4B6EA5207BBBE9AC1F897EA
// Body: [[110d1900, 110d19cd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
Playstation4PlatformSettings__ctor_mC381E3680CA988D5E4B6EA5207BBBE9AC1F897EA
          (Playstation4PlatformSettings_t5602922B36E7EE61C1DAFEB90788250C4128C8A1 *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar3;

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
  param_1->___defaultSaveIconPath_0 = _stringLiteral40399FE230644CCC6BBC12804247F6C4FD261552;
  pLVar2 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tAA1BDCC49F0B1C59FDB00375D6115EF7816CB9B7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar2,List_1__ctor_mF989415B366B5405CD7CBC6A63902D59A43EAFB5_RuntimeMethod_var);
  OVar3 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
          il2cpp_codegen_object_new
                    (
                    Playstation4AgeRestriction_t5192FDA692295AC43AACF6D90213F59FAFFFC645_il2cpp_TypeInfo_var
                    );
  pSVar1 = _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)OVar3,(MethodInfo *)0x0
            );
  *(String_t **)((int)OVar3 + 8) = pSVar1;
  *(undefined4 *)((int)OVar3 + 0xc) = 10;
  if (pLVar2 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar2,OVar3,
               List_1_Add_m21E52E3842510BF66A2B70D340A9BA75FA8F71DB_RuntimeMethod_var);
    param_1->___ageRestrictions_3 = (List_1_tAA1BDCC49F0B1C59FDB00375D6115EF7816CB9B7 *)pLVar2;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
