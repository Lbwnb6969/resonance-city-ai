// RVA 0x10cfd20 | FuryStudios.FurySDK.Utils.DebugMenu.MenuEntry$$get_Label
// PDB: MenuEntry_get_Label_m9BEEAF599EEDA986CA1EC5E3B3D9A270E7C4F5B0
// Body: [[110cfd20, 110cfd62]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

String_t * __cdecl
MenuEntry_get_Label_m9BEEAF599EEDA986CA1EC5E3B3D9A270E7C4F5B0
          (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;

  if (DAT_11523ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585);
    DAT_11523ab9 = '\x01';
  }
  if (param_1->___U3CIsSelectedU3Ek__BackingField_1 != false) {
    pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (param_1->___U3CNameU3Ek__BackingField_0,
                        _stringLiteral5702BC82BA508CABFC1503DE3E28635583FE8585,(MethodInfo *)0x0);
    return pSVar1;
  }
  return param_1->___U3CNameU3Ek__BackingField_0;
}
