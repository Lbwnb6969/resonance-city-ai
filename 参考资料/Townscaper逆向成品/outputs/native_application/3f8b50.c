// RVA 0x3f8b50 | Placemaker.WorldMaster$$StartCounting
// PDB: WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// Body: [[103f8b50, 103f8c23]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0

void __cdecl
WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  int iVar1;

  if (DAT_1151c942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c942 = '\x01';
  }
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
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
  if (iVar1 != *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
                             ->static_fields + 4)) {
    if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
         != '\0') &&
       (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
    }
    if (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
         UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
         static_fields == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
              (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                static_fields,(MethodInfo *)0x0);
    *(int *)((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
                  static_fields + 4) = iVar1;
  }
  return;
}
