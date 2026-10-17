// RVA 0x3f82e0 | Placemaker.WorldMaster$$KeepGoing
// PDB: WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// Body: [[103f82e0, 103f8387]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5

bool __cdecl
WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  long64 lVar1;

  if (DAT_1151c941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c941 = '\x01';
  }
  if ((UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var);
  }
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
