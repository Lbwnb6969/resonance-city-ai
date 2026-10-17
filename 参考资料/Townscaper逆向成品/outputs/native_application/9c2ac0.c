// RVA 0x9c2ac0 | Os.Utils.UnityFunctions.HirearchyEnumerator$$System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator
// PDB: HirearchyEnumerator_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m4B3DFCAA954215BAADFDAA01355235E7910CC4BE
// Body: [[109c2ac0, 109c2b0c]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

Il2CppObject * __cdecl
HirearchyEnumerator_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m4B3DFCAA954215BAADFDAA01355235E7910CC4BE
          (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  int local_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined8 local_c;

  if (DAT_1151ff65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C_il2cpp_TypeInfo_var
              );
    DAT_1151ff65 = '\x01';
  }
  local_1c = param_1->___siblingIndex_0;
  iStack_18 = param_1->___siblingCount_1;
  iStack_14 = param_1->___depth_2;
  uStack_10 = *(undefined4 *)&param_1->___includeInactive_3;
  local_c._0_4_ = param_1->___transform_4;
  local_c._4_4_ = param_1->___parent_5;
  pIVar1 = il2cpp_value_box(HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C_il2cpp_TypeInfo_var
                            ,&local_1c);
  return pIVar1;
}
