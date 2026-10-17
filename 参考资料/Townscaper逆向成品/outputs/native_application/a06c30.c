// RVA 0xa06c30 | Placemaker.ScreenshotCamera$$OnStart
// PDB: ScreenshotCamera_OnStart_m3CA452BB22985F8917D0615B2548185527C52F3B
// Body: [[10a06c30, 10a06cc9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a42c10 Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared

void __cdecl
ScreenshotCamera_OnStart_m3CA452BB22985F8917D0615B2548185527C52F3B
          (ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *param_1,MethodInfo *param_2)

{
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar1;

  if (DAT_115201c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7439D14D2B7CFAEAFC1BD4E7FEE7908664FCEFDE);
    DAT_115201c9 = '\x01';
  }
  pMVar1 = param_1->___vignetteMaterial_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  pMVar1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
           Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                     ((Il2CppObject *)pMVar1,
                      Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var
                     );
  param_1->___vignetteMaterial_8 = pMVar1;
  pMVar1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
           Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                     ((Il2CppObject *)param_1->___flipVertically_10,
                      Object_Instantiate_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mC07ADBDB716BC6D4CF6F992C909CC51B6AE2EA84_RuntimeMethod_var
                     );
  param_1->___flipVertically_10 = pMVar1;
  if (pMVar1 != (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)0x0) {
    Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18
              (pMVar1,_stringLiteral7439D14D2B7CFAEAFC1BD4E7FEE7908664FCEFDE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
