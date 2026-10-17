// RVA 0xe13b80 | Placemaker.GridGenerator$$HexToPlane
// PDB: GridGenerator_HexToPlane_mDF3D8BEE6C8B0BC097E3C6EDFF28642465DD13A1
// Body: [[10e13b80, 10e13bfe]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040de70 HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
GridGenerator_HexToPlane_mDF3D8BEE6C8B0BC097E3C6EDFF28642465DD13A1
          (float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;

  if (DAT_11522655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522655 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1 = HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C(param_1,(MethodInfo *)0x0);
  param_1.___y_1 = fVar1.___y_1;
  fVar1.___y_1 = param_1.___y_1 * __real_3df925fe;
  fVar1.___x_0 = param_1.___x_0 * __real_3df925fe;
  return fVar1;
}
