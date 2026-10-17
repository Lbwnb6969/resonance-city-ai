// RVA 0x835690 | Os.Utils.Extensions$$KeepGoing
// PDB: Extensions_KeepGoing_mC2BE0860D15E7E59839B37B6DB1ACF028BD73DE7
// Body: [[10835690, 108356c6]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5

/* WARNING: Removing unreachable block (ram,0x108356b4) */

bool __cdecl
Extensions_KeepGoing_mC2BE0860D15E7E59839B37B6DB1ACF028BD73DE7
          (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *param_1,int param_2,
          MethodInfo *param_3)

{
  long64 lVar1;

  if (param_1 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  lVar1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                    (param_1,(MethodInfo *)0x0);
  if (param_2 <= lVar1) {
    return false;
  }
  return true;
}
