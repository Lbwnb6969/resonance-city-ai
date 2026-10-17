// RVA 0x10d3050 | FuryStudios.FurySDK.Settings.AchievementDatabase.<>c$$<OnAfterDeserialize>b__11_0
// PDB: U3CU3Ec_U3COnAfterDeserializeU3Eb__11_0_m003E94D4AC84A1B98CC72045712DF63DF5C914E8
// Body: [[110d3050, 110d3072]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f061e0 String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6

bool __cdecl
U3CU3Ec_U3COnAfterDeserializeU3Eb__11_0_m003E94D4AC84A1B98CC72045712DF63DF5C914E8
          (U3CU3Ec_t73EBF6D900EC09EBA889699ECF084561FEC6E8DC *param_1,
          AchievementInfo_t0278E27F39AF34E53737902E7A2904D564DA2E0B *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_2 != (AchievementInfo_t0278E27F39AF34E53737902E7A2904D564DA2E0B *)0x0) {
    bVar1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6
                      (param_2->___key_0,(MethodInfo *)0x0);
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
