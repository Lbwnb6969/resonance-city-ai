// RVA 0x3f83d0 | Placemaker.WorldMaster$$Load
// PDB: WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// Body: [[103f83d0, 103f8413]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 109fdd50 SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00

void __cdecl
WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;

  pSVar1 = param_1->___saveData_42;
  if (pSVar1 != param_2) {
    if (pSVar1 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00
              (pSVar1,param_2,(MethodInfo *)0x0);
  }
  param_1->___state_57 = '\x01';
  param_1->___anyChange_59 = false;
  param_1->___lastChangeTime_60 = -1.0;
  return;
}
