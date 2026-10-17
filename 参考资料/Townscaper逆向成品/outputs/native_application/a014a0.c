// RVA 0xa014a0 | Placemaker.SaveSystem$$GetDateTimeLong
// PDB: SaveSystem_GetDateTimeLong_mA5DDC54761FFA0BC891F8DB0875F06DCEA0927FA
// Body: [[10a014a0, 10a014dd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106ea990 DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204
// 10906710 Int64_Parse_m324C1AE318F496D87AAED8CB5D9E6E6EA6FE4A45

long64 __cdecl
SaveSystem_GetDateTimeLong_mA5DDC54761FFA0BC891F8DB0875F06DCEA0927FA
          (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  long64 lVar2;

  if (DAT_115201b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral37ED41C0F774F2E2A7BBC7FEAB93A84085A01530);
    DAT_115201b6 = '\x01';
  }
  pSVar1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204
                     (&param_1,_stringLiteral37ED41C0F774F2E2A7BBC7FEAB93A84085A01530,
                      (MethodInfo *)0x0);
  lVar2 = Int64_Parse_m324C1AE318F496D87AAED8CB5D9E6E6EA6FE4A45(pSVar1,(MethodInfo *)0x0);
  return lVar2;
}
