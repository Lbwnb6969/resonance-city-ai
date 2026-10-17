// RVA 0x9c2a60 | Os.Utils.UnityFunctions.HirearchyEnumerator$$Reset
// PDB: HirearchyEnumerator_Reset_m5A71FBF48EF47B94AB2F91286B0C866C6F8BF6AA
// Body: [[109c2a60, 109c2abc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
HirearchyEnumerator_Reset_m5A71FBF48EF47B94AB2F91286B0C866C6F8BF6AA
          (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *param_1,
          MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < param_1->___depth_2) {
    do {
      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___parent_5 ==
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_109c2ab8;
      pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___parent_5,(MethodInfo *)0x0);
      iVar2 = iVar2 + 1;
      param_1->___transform_4 = pTVar1;
    } while (iVar2 < param_1->___depth_2);
  }
  param_1->___parent_5 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
  param_1->___depth_2 = 0;
  if (param_1->___transform_4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___transform_4,(MethodInfo *)0x0);
    param_1->___siblingCount_1 = iVar2;
    param_1->___siblingIndex_0 = 0;
    return;
  }
LAB_109c2ab8:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
