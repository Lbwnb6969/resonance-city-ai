// RVA 0x10cdd20 | FuryStudios.FurySDK.ContainerID$$ToString
// PDB: ContainerID_ToString_mB9F28A803FBC60DBFACEAA221549FE07FAF6EF57
// Body: [[110cdd20, 110cdd66]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

String_t * __cdecl
ContainerID_ToString_mB9F28A803FBC60DBFACEAA221549FE07FAF6EF57
          (ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral083E38737769AA73028C46E6C00167BAA67875A0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
    DAT_11523a6e = '\x01';
  }
  pSVar1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                     (_stringLiteral083E38737769AA73028C46E6C00167BAA67875A0,param_1->___id_0,
                      _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D,(MethodInfo *)0x0);
  return pSVar1;
}
