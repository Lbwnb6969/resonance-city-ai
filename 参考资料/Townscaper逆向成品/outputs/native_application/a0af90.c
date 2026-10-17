// RVA 0xa0af90 | Placemaker.ShadowBaker$$Save
// PDB: ShadowBaker_Save_m4859C55C673AB732B58F5B90BDC5A3E38A26A5AD
// Body: [[10a0af90, 10a0afcb]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
ShadowBaker_Save_m4859C55C673AB732B58F5B90BDC5A3E38A26A5AD
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    (param_2->___sun_3).___h_0 = (uchar)(int)((param_1->___target_21).___y_1 * __real_437f0000);
    (param_2->___sun_3).___r_1 = (uchar)(int)((param_1->___target_21).___x_0 * __real_437f0000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
