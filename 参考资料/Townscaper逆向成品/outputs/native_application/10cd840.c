// RVA 0x10cd840 | FuryStudios.FurySDK.ClassTypeReference$$op_Implicit
// PDB: ClassTypeReference_op_Implicit_m1DCBEC9939385B8B1C1494F3CD0CC67F12CBF17D
// Body: [[110cd840, 110cd888]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110cd890 ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D

ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD * __cdecl
ClassTypeReference_op_Implicit_m1DCBEC9939385B8B1C1494F3CD0CC67F12CBF17D
          (Type_t *param_1,MethodInfo *param_2)

{
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar1;

  if (DAT_11523a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD_il2cpp_TypeInfo_var
              );
    DAT_11523a6a = '\x01';
  }
  pUVar1 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar1,(MethodInfo *)0x0);
  ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D
            ((ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *)pUVar1,param_1,
             (MethodInfo *)0x0);
  return (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *)pUVar1;
}
