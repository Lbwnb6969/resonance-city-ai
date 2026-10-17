// RVA 0x418170 | Placemaker.Ui.InputModeManager$$<Update>g__ShouldChange|8_1
// PDB: InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_1_m048DBBB93AC63B43AA29C74D4C7D2D8E7F1BA3AF
// Body: [[10418170, 104182c0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 10a35ce0 Application_get_isFocused_m89D48E3D4C9F2880F4CE05EE70CA0A3689C676F8
// 1113ee10 Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
// 1113efb0 Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
// 1113f1f0 Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
InputModeManager_U3CUpdateU3Eg__ShouldChangeU7C8_1_m048DBBB93AC63B43AA29C74D4C7D2D8E7F1BA3AF
          (MethodInfo *param_1)

{
  bool bVar1;
  int iVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  undefined8 local_20;
  undefined8 local_14;
  float local_8;

  if (DAT_1151cabb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
    DAT_1151cabb = '\x01';
  }
  bVar1 = Application_get_isFocused_m89D48E3D4C9F2880F4CE05EE70CA0A3689C676F8((MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
    if (0 < iVar2) {
      return true;
    }
    pVVar3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E
                       (&local_2c,(MethodInfo *)0x0);
    local_20._0_4_ = pVVar3->___x_2;
    local_20._4_4_ = pVVar3->___y_3;
    if ((0.0 <= (float)(undefined4)local_20) && (0.0 <= (float)local_20._4_4_)) {
      local_14 = local_20;
      iVar2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
      if ((float)local_14 <= (float)iVar2) {
        iVar2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
        if (local_14._4_4_ <= (float)iVar2) {
          local_8 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                              (_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7,
                               (MethodInfo *)0x0);
          if (local_8 != ___real_00000000) {
            return true;
          }
          local_8 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326
                              (_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0,
                               (MethodInfo *)0x0);
          if (local_8 != ___real_00000000) {
            return true;
          }
          bVar1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                            (0,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
          bVar1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                            (1,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
          bVar1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022
                            (2,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
          return false;
        }
      }
    }
  }
  return false;
}
