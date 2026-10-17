// RVA 0x10ccee0 | FuryStudios.FurySDK.AchievementID$$ToString
// PDB: AchievementID_ToString_mBB9D00D7EF2945775A3EF55F7DA627935C76A26E
// Body: [[110ccee0, 110ccf26]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

String_t * __cdecl
AchievementID_ToString_mBB9D00D7EF2945775A3EF55F7DA627935C76A26E
          (AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1722EA36F0A83AFA9F94ED9628EB1DD474C83797);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
    DAT_11523a60 = '\x01';
  }
  pSVar1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                     (_stringLiteral1722EA36F0A83AFA9F94ED9628EB1DD474C83797,param_1->___id_0,
                      _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D,(MethodInfo *)0x0);
  return pSVar1;
}
