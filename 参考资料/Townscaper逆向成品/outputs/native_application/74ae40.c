// RVA 0x74ae40 | Placemaker.Ui.OrbitalCamera$$Load
// PDB: OrbitalCamera_Load_m6941DD91E894D8A57A83250B0481EDB5F5B1ACDE
// Body: [[1074ae40, 1074af0d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
OrbitalCamera_Load_m6941DD91E894D8A57A83250B0481EDB5F5B1ACDE
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  float fVar1;

  param_1->___snap_26 = true;
  if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    fVar1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                      ((float)(param_2->___cam_2).___z_2 * ___real_3b808081,(MethodInfo *)0x0);
    param_1->___zoomTarget_8 = fVar1;
    param_1->___zoomCurrent_9 = fVar1;
    fVar1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                      ((float)(param_2->___cam_2).___x_0 * ___real_3b808081,(MethodInfo *)0x0);
    param_1->___rotationX_11 = fVar1;
    fVar1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                      ((float)(param_2->___cam_2).___y_1 * ___real_3b808081,(MethodInfo *)0x0);
    param_1->___panHexTargetX_15 = 0.5;
    param_1->___rotationY_10 = fVar1;
    param_1->___panHexCurrentX_12 = 0.5;
    param_1->___panHexTargetY_16 = 0.5;
    param_1->___panHexCurrentY_13 = 0.5;
    param_1->___panHeightTarget_17 = 0.5;
    param_1->___panHeightCurrent_14 = 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
