// RVA 0x881150 | Placemaker.Life.ButterflyFlock$$OnReset
// PDB: ButterflyFlock_OnReset_m8496535586D73602C055977C0AE5665D7849CF9B
// Body: [[10881150, 108811b2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
ButterflyFlock_OnReset_m8496535586D73602C055977C0AE5665D7849CF9B
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *param_1,MethodInfo *param_2)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;

  if (param_1->___activeButterflies_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___activeButterflies_9,(MethodInfo *)0x0);
    while( true ) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
      if ((((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___activeButterflies_9
            == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
          (pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___activeButterflies_9,(MethodInfo *)0x0),
          pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
         (pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (pTVar2,iVar1,(MethodInfo *)0x0),
         pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
      Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                (pTVar2,param_1->___disabledButterflies_10,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
