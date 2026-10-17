// RVA 0xe13c00 | Placemaker.GridGenerator$$HexToPlane
// PDB: GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
// Body: [[10e13c00, 10e13c98]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040de70 HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
          (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;

  if (DAT_11522656 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522656 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1.___y_1 = (float)param_1.___y_1;
  fVar1.___x_0 = (float)param_1.___x_0;
  fVar1 = HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C(fVar1,(MethodInfo *)0x0);
  param_1.___y_1 = (int)fVar1.___y_1;
  fVar2.___y_1 = (float)param_1.___y_1 * __real_3df925fe;
  fVar2.___x_0 = (float)param_1.___x_0 * __real_3df925fe;
  return fVar2;
}
