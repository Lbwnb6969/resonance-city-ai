// RVA 0x3e8000 | Os.Utils.UnityFunctions$$EnumerateHirearchy
// PDB: UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
// Body: [[103e8000, 103e8067]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 109c2e20 HirearchyEnumerator__ctor_m6682B902CA643ED51A754546B911F371D5633533

Il2CppObject * __cdecl
UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_1,bool param_2,
          MethodInfo *param_3)

{
  Il2CppObject *pIVar1;
  int local_34;
  int iStack_30;
  int iStack_2c;
  bool bStack_28;
  undefined3 uStack_27;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_24;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTStack_20;
  HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C local_1c;

  if (DAT_1151c8c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C_il2cpp_TypeInfo_var
              );
    DAT_1151c8c4 = '\x01';
  }
  local_1c.___siblingIndex_0 = 0;
  local_1c.___siblingCount_1 = 0;
  local_1c.___depth_2 = 0;
  local_1c.___includeInactive_3 = false;
  local_1c._13_3_ = 0;
  local_1c.___transform_4 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
  local_1c.___parent_5 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
  HirearchyEnumerator__ctor_m6682B902CA643ED51A754546B911F371D5633533
            (&local_1c,param_1,param_2,(MethodInfo *)0x0);
  local_34 = local_1c.___siblingIndex_0;
  iStack_30 = local_1c.___siblingCount_1;
  iStack_2c = local_1c.___depth_2;
  bStack_28 = local_1c.___includeInactive_3;
  uStack_27 = local_1c._13_3_;
  local_24 = local_1c.___transform_4;
  pTStack_20 = local_1c.___parent_5;
  pIVar1 = il2cpp_value_box(HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C_il2cpp_TypeInfo_var
                            ,&local_34);
  return pIVar1;
}
