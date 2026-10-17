// RVA 0x9fbd50 | Placemaker.SaveCamera$$Save
// PDB: SaveCamera_Save_m239BE90E37FC7B9E928E24888920EA8AC32C13BD
// Body: [[109fbd50, 109fbd73]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 109fb1f0 SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18

void __cdecl
SaveCamera_Save_m239BE90E37FC7B9E928E24888920EA8AC32C13BD
          (SaveCamera_t7E86B5A1216D55E6BA708D6AA32DDA610977BD0E *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar1;

  pBVar1 = SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18
                     (param_1,param_2,(MethodInfo *)0x0);
  if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    param_2->___bigJpg_6 = pBVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
