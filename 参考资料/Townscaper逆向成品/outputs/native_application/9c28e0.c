// RVA 0x9c28e0 | Os.Utils.UnityFunctions.HirearchyEnumerator$$MoveNext
// PDB: HirearchyEnumerator_MoveNext_m8CE2F312BB9F04271B6C7765572BB379DB6C1790
// Body: [[109c28e0, 109c2a5e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3de70 GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE

bool __cdecl
HirearchyEnumerator_MoveNext_m8CE2F312BB9F04271B6C7765572BB379DB6C1790
          (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *param_1,
          MethodInfo *param_2)

{
  bool bVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  int iVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;

  if (param_1->___depth_2 == -2) {
    param_1->___depth_2 = 0;
    if (param_1->___includeInactive_3 != false) {
      return true;
    }
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___transform_4 ==
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___transform_4,(MethodInfo *)0x0),
       pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_109c2a5a;
    bVar1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
  }
  if (param_1->___transform_4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  goto LAB_109c2a5a;
  iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                    (param_1->___transform_4,(MethodInfo *)0x0);
  if (0 < iVar3) {
    pTVar4 = param_1->___transform_4;
    param_1->___depth_2 = param_1->___depth_2 + 1;
    param_1->___parent_5 = pTVar4;
    if (pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_109c2a5a;
    pTVar4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                       (pTVar4,0,(MethodInfo *)0x0);
    param_1->___transform_4 = pTVar4;
    param_1->___siblingIndex_0 = 0;
    param_1->___siblingCount_1 = iVar3;
    if (param_1->___includeInactive_3 != false) {
      return true;
    }
    if ((pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar4,
                            (MethodInfo *)0x0),
       pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_109c2a5a;
    bVar1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
  }
  while( true ) {
    while( true ) {
      param_1->___siblingIndex_0 = param_1->___siblingIndex_0 + 1;
      if (param_1->___siblingIndex_0 < param_1->___siblingCount_1) break;
      iVar3 = param_1->___depth_2 + -1;
      param_1->___depth_2 = iVar3;
      if (iVar3 < 1) {
        return false;
      }
      pTVar4 = param_1->___parent_5;
      param_1->___transform_4 = pTVar4;
      if (pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_109c2a5a;
      iVar3 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                        (pTVar4,(MethodInfo *)0x0);
      param_1->___siblingIndex_0 = iVar3;
      if (param_1->___transform_4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
      goto LAB_109c2a5a;
      pTVar4 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                         (param_1->___transform_4,(MethodInfo *)0x0);
      param_1->___parent_5 = pTVar4;
      if (pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_109c2a5a;
      iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar4,(MethodInfo *)0x0);
      param_1->___siblingCount_1 = iVar3;
    }
    if (param_1->___parent_5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    pTVar4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                       (param_1->___parent_5,param_1->___siblingIndex_0,(MethodInfo *)0x0);
    param_1->___transform_4 = pTVar4;
    if (param_1->___includeInactive_3 != false) {
      return true;
    }
    if ((pTVar4 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar4,
                            (MethodInfo *)0x0),
       pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) break;
    bVar1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
  }
LAB_109c2a5a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
