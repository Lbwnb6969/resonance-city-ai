// RVA 0x10d1e80 | FuryStudios.FurySDK.RichPresenceID$$ToString
// PDB: RichPresenceID_ToString_mBE507592A6D6107217B66172F7616FDA32ADAFC1
// Body: [[110d1e80, 110d1ec6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

String_t * __cdecl
RichPresenceID_ToString_mBE507592A6D6107217B66172F7616FDA32ADAFC1
          (RichPresenceID_t8C87FE2686D772BD5D4036D9D7A4536A4B699F87 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral20672834B844E8E4BCA0F4DE3FB41197F98BD00F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
    DAT_11523aa8 = '\x01';
  }
  pSVar1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                     (_stringLiteral20672834B844E8E4BCA0F4DE3FB41197F98BD00F,param_1->___id_0,
                      _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D,(MethodInfo *)0x0);
  return pSVar1;
}
