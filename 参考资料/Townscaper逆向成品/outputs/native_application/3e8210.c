// RVA 0x3e8210 | Placemaker.UniversalStopwatch$$StartCounting
// PDB: UniversalStopwatch_StartCounting_m685E81C083D1E12F108DE4F70C59622979D24E94
// Body: [[103e8210, 103e82af]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0

bool __cdecl
UniversalStopwatch_StartCounting_m685E81C083D1E12F108DE4F70C59622979D24E94(MethodInfo *param_1)

{
  int iVar1;

  if (DAT_1151c8c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c8c5 = '\x01';
  }
  iVar1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
  if (iVar1 == *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
                             ->static_fields + 4)) {
    return false;
  }
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
  if (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
       static_fields != (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
              (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                static_fields,(MethodInfo *)0x0);
    *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                  static_fields + 4) = iVar1;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
