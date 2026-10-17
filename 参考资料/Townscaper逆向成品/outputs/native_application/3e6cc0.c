// RVA 0x3e6cc0 | Placemaker.Ui.UiMaster$$<MaybeSetup>b__58_1
// PDB: UiMaster_U3CMaybeSetupU3Eb__58_1_m8F7F33A0B76F0385C34BF6AB43B14D3D5132CF66
// Body: [[103e6cc0, 103e6d10]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UiMaster_U3CMaybeSetupU3Eb__58_1_m8F7F33A0B76F0385C34BF6AB43B14D3D5132CF66
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_2 <= ___real_00000000) {
    return;
  }
  if (param_1->___loadGameMusic_26 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
    MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
              (param_1->___loadGameMusic_26,1.0,(MethodInfo *)0x0);
    if (param_1->___newGameMusic_25 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
      MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
                (param_1->___newGameMusic_25,1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
