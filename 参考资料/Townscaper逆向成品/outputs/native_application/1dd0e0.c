// RVA 0x1dd0e0 | Placemaker.Ui.SaveCard.<>c__DisplayClass12_0$$<Setup>b__0
// PDB: U3CU3Ec__DisplayClass12_0_U3CSetupU3Eb__0_mD873A7965EF81D4FF6C82EF17B238B9496CA34ED
// Body: [[101dd0e0, 101dd17e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104c53c0 DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
// 104c5410 DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec__DisplayClass12_0_U3CSetupU3Eb__0_mD873A7965EF81D4FF6C82EF17B238B9496CA34ED
          (U3CU3Ec__DisplayClass12_0_t3103A2E2398306E57FFD8B224D4E033DD3D30584 *param_1,
          float param_2,MethodInfo *param_3)

{
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar1;
  float fVar2;

  pDVar1 = param_1->___settings0_0;
  fVar2 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.3,param_2,(MethodInfo *)0x0);
  if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
    DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
              (pDVar1,fVar2,(MethodInfo *)0x0);
    pDVar1 = param_1->___settings1_1;
    fVar2 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.5,param_2,(MethodInfo *)0x0);
    if (pDVar1 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
      DistanceFieldSettings_set_fill_mDDC01D75567CBAB18C73055C4F52AA3BA8A3BE82
                (pDVar1,fVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
