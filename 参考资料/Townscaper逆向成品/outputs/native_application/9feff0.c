// RVA 0x9feff0 | Placemaker.Ui.SaveMenu$$KeepGoing
// PDB: SaveMenu_KeepGoing_mAB16680F3B141D31C4071236CC8F341CD2BA71BF
// Body: [[109feff0, 109ff022]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5

bool __cdecl
SaveMenu_KeepGoing_mAB16680F3B141D31C4071236CC8F341CD2BA71BF
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  long64 lVar1;

  if (param_1->___stopwatch_38 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  lVar1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                    (param_1->___stopwatch_38,(MethodInfo *)0x0);
  if (((int)((ulonglong)lVar1 >> 0x20) == 0 || lVar1 < 0) && ((lVar1 < 0 || ((uint)lVar1 < 4)))) {
    return true;
  }
  return false;
}
