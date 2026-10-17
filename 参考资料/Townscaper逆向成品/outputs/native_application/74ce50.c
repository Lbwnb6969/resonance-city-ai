// RVA 0x74ce50 | Placemaker.Ui.OrbitalCamera$$Save
// PDB: OrbitalCamera_Save_m89E9CE9FAA59C017955E9B12BBAFE8E64E473AB0
// Body: [[1074ce50, 1074cf58]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87

void __cdecl
OrbitalCamera_Save_m89E9CE9FAA59C017955E9B12BBAFE8E64E473AB0
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  float fVar1;
  uchar local_8;

  if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    fVar1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                      (param_1->___zoomTarget_8 * __real_437f0000,0.0,255.0,(MethodInfo *)0x0);
    local_8 = (uchar)(int)ROUND(fVar1);
    (param_2->___cam_2).___z_2 = local_8;
    fVar1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                      (param_1->___rotationX_11 * __real_437f0000,0.0,255.0,(MethodInfo *)0x0);
    local_8 = (uchar)(int)ROUND(fVar1);
    (param_2->___cam_2).___x_0 = local_8;
    fVar1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                      (param_1->___rotationY_10 * __real_437f0000,0.0,255.0,(MethodInfo *)0x0);
    local_8 = (uchar)(int)ROUND(fVar1);
    (param_2->___cam_2).___y_1 = local_8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
