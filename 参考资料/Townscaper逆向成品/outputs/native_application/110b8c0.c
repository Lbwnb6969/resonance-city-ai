// RVA 0x110b8c0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$Init
// PDB: BasePlatformSDK_Init_mB9BAAA832A8646D9A0D8EFFE9C3144B92409EFCA
// Body: [[1110b8c0, 1110b917]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared

void __cdecl
BasePlatformSDK_Init_mB9BAAA832A8646D9A0D8EFFE9C3144B92409EFCA
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,
          PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *param_2,MethodInfo *param_3)

{
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar1;

  if (DAT_11523e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m423FEBBE6A6FDD3E76A328C31942857107C98A19_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tB40A10B1BAD56696A1AA39CDE45B29C8C3221888_il2cpp_TypeInfo_var);
    DAT_11523e88 = '\x01';
  }
  param_1->___U3CSettingsU3Ek__BackingField_5 = param_2;
  pDVar1 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tB40A10B1BAD56696A1AA39CDE45B29C8C3221888_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar1,Dictionary_2__ctor_m423FEBBE6A6FDD3E76A328C31942857107C98A19_RuntimeMethod_var);
  param_1->___storageContainers_6 = (Dictionary_2_tB40A10B1BAD56696A1AA39CDE45B29C8C3221888 *)pDVar1
  ;
  return;
}
