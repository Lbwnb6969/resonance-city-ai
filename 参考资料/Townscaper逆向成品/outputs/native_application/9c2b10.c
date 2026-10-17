// RVA 0x9c2b10 | Os.Utils.UnityFunctions.HirearchyEnumerator$$System.Collections.IEnumerable.GetEnumerator
// PDB: HirearchyEnumerator_System_Collections_IEnumerable_GetEnumerator_mF2AE4AAC245E0C0D59B9E746FB0CE6EFF28F913D
// Body: [[109c2b10, 109c2b5c]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

Il2CppObject * __cdecl
HirearchyEnumerator_System_Collections_IEnumerable_GetEnumerator_mF2AE4AAC245E0C0D59B9E746FB0CE6EFF28F913D
          (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  int local_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined8 local_c;

  if (DAT_1151ff66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C_il2cpp_TypeInfo_var
              );
    DAT_1151ff66 = '\x01';
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
