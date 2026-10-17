// RVA 0x3e81a0 | Placemaker.UniversalStopwatch$$KeepGoing
// PDB: UniversalStopwatch_KeepGoing_mF5B93F6F350F9B750DB0BDD793E59844EF73D7F1
// Body: [[103e81a0, 103e8208]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5

bool __cdecl
UniversalStopwatch_KeepGoing_mF5B93F6F350F9B750DB0BDD793E59844EF73D7F1(MethodInfo *param_1)

{
  long64 lVar1;

  if (DAT_1151c8c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c8c6 = '\x01';
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
    lVar1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                      (*(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                        UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
                        ->static_fields,(MethodInfo *)0x0);
    if (((int)((ulonglong)lVar1 >> 0x20) == 0 || lVar1 < 0) && ((lVar1 < 0 || ((uint)lVar1 < 8)))) {
      return true;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
