// RVA 0x3e82c0 | Placemaker.UniversalStopwatch$$.cctor
// PDB: UniversalStopwatch__cctor_mC6D80FDDD1EFB250FEB5789D846943AD7533F630
// Body: [[103e82c0, 103e831b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0

void __cdecl
UniversalStopwatch__cctor_mC6D80FDDD1EFB250FEB5789D846943AD7533F630(MethodInfo *param_1)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;

  if (DAT_1151c8c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var
              );
    DAT_1151c8c7 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  *(BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 **)
   UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->static_fields =
       pBVar1;
  *(undefined4 *)
   ((int)UniversalStopwatch_tC4FB3740C0B3687082F8B69CE8DE8496717E2A5C_il2cpp_TypeInfo_var->
         static_fields + 4) = 0;
  return;
}
