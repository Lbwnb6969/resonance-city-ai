// RVA 0x10cd730 | FuryStudios.FurySDK.ClassTypeReference$$.ctor
// PDB: ClassTypeReference__ctor_mF65F2006C872CC544C790613E4100A53EA4851F3
// Body: [[110cd730, 110cd7d0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e7c0 il2cpp_codegen_get_type
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 110cd890 ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D

void __cdecl
ClassTypeReference__ctor_mF65F2006C872CC544C790613E4100A53EA4851F3
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  bool bVar1;
  Type_t *pTVar2;

  if (DAT_11523a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ClassTypeReference__ctor_mF65F2006C872CC544C790613E4100A53EA4851F3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523a66 = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  bVar1 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                    (param_2,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = (Type_t *)0x0;
  }
  else {
    if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
    }
    pTVar2 = il2cpp_codegen_get_type
                       (Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var,
                        param_2,
                        ClassTypeReference__ctor_mF65F2006C872CC544C790613E4100A53EA4851F3_RuntimeMethod_var
                       );
  }
  if (param_1 != (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *)0x0) {
    ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D
              (param_1,pTVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
