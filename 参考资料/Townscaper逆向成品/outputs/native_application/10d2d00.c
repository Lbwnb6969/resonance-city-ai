// RVA 0x10d2d00 | FuryStudios.FurySDK.StatID$$ToString
// PDB: StatID_ToString_m5E6C2941FE7D997217183CD1F0F7DE2AFCB201F4
// Body: [[110d2d00, 110d2d46]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

String_t * __cdecl
StatID_ToString_m5E6C2941FE7D997217183CD1F0F7DE2AFCB201F4
          (StatID_t49358985665638845884309A782C9128E571E796 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral437321B30CEC919912ABAE2CD2D8380EA20D0D74);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
    DAT_11523ab0 = '\x01';
  }
  pSVar1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                     (_stringLiteral437321B30CEC919912ABAE2CD2D8380EA20D0D74,param_1->___id_0,
                      _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D,(MethodInfo *)0x0);
  return pSVar1;
}
