// RVA 0x10d3020 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry.<>c$$<FindFirstSelectable>b__23_0
// PDB: U3CU3Ec_U3CFindFirstSelectableU3Eb__23_0_m63D52FF81284BB470790E5CC08AE940D9CF8CE35
// Body: [[110d3020, 110d3044]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

bool __cdecl
U3CU3Ec_U3CFindFirstSelectableU3Eb__23_0_m63D52FF81284BB470790E5CC08AE940D9CF8CE35
          (U3CU3Ec_t2FB63575A6C494AFCE7F8866603A8059B1D36D15 *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,MethodInfo *param_3)

{
  undefined1 uVar1;

  if (param_2 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
    uVar1 = (**(code **)(param_2->_padding_ + 0xdc))
                      (param_2,*(undefined4 *)(param_2->_padding_ + 0xe0));
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
