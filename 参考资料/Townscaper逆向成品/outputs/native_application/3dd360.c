// RVA 0x3dd360 | Os.Utils.NumberStrings$$Get
// PDB: NumberStrings_Get_mFA88B492DD28E72DB99E13269C503E1E27D464DA
// Body: [[103dd360, 103dd440]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
// 10d00a20 Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared

String_t * __cdecl
NumberStrings_Get_mFA88B492DD28E72DB99E13269C503E1E27D464DA(int param_1,MethodInfo *param_2)

{
  bool bVar1;
  String_t *local_8;

  if (DAT_1151c894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var)
    ;
    DAT_1151c894 = '\x01';
  }
  local_8 = (String_t *)0x0;
  if ((NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var);
  }
  if (*(Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B **)
       NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->static_fields !=
      (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                      (*(Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B **)
                        NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var
                        ->static_fields,
                       (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_1,
                       (Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E_RuntimeMethod_var
                      );
    if (!bVar1) {
      local_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&param_1,(MethodInfo *)0x0)
      ;
      if ((NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var);
      }
      if (*(Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 **)
           NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->
           static_fields == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)
      goto LAB_103dd43c;
      Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
                (*(Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 **)
                  NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->
                  static_fields,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_1,
                 (Il2CppObject *)local_8,
                 Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
    }
    return local_8;
  }
LAB_103dd43c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
