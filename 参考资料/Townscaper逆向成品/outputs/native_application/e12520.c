// RVA 0xe12520 | Placemaker.GridGenerator$$GetVertCost
// PDB: GridGenerator_GetVertCost_mE9A723C2E72FFECBD94C3E5F35A58C6E9FCB9676
// Body: [[10e12520, 10e125ba]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040de70 HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C

float __cdecl
GridGenerator_GetVertCost_mE9A723C2E72FFECBD94C3E5F35A58C6E9FCB9676
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;

  if (DAT_1152265b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1152265b = '\x01';
  }
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
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
  fVar1 = HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C(param_2,(MethodInfo *)0x0);
  return fVar1.___y_1 * __real_3df925fe;
}
