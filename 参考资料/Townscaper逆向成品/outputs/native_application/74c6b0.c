// RVA 0x74c6b0 | Placemaker.Ui.OrbitalCamera$$PinchZoom
// PDB: OrbitalCamera_PinchZoom_mF29B3FEAE0ECC6A3BF36AE52EBD98C8C4A5F3D57
// Body: [[1074c6b0, 1074c706]]
// Direct callees:
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B

void __cdecl
OrbitalCamera_PinchZoom_mF29B3FEAE0ECC6A3BF36AE52EBD98C8C4A5F3D57
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;

  fVar1 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (param_1->___distMin_31,param_1->___distMax_32,
                     param_1->___nonDollyDist_29 * param_2,(MethodInfo *)0x0);
  param_1->___zoomTarget_8 = fVar1;
  param_1->___zoomCurrent_9 = fVar1;
  return;
}
