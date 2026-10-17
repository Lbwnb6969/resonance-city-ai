// RVA 0x837b70 | Placemaker.FastCoroutines$$KeepGoing
// PDB: FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD
// Body: [[10837b70, 10837bef]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5

/* WARNING: Removing unreachable block (ram,0x10837bdd) */

bool __cdecl FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD(MethodInfo *param_1)

{
  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *pSVar1;
  long64 lVar2;

  if (DAT_1151f3d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    DAT_1151f3d1 = '\x01';
  }
  if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
  }
  pSVar1 = *(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
            ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pSVar1 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  lVar2 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                    (pSVar1,(MethodInfo *)0x0);
  if (*(int *)((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                    static_fields + 8) <= lVar2) {
    return false;
  }
  return true;
}
