// RVA 0x9fc3a0 | Placemaker.Ui.SaveCard$$<Setup>b__12_2
// PDB: SaveCard_U3CSetupU3Eb__12_2_m1009D7546D4D2BC4C48CD113CB112FDD92A126FA
// Body: [[109fc3a0, 109fc43e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5e70 MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
// 103d5e90 MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
SaveCard_U3CSetupU3Eb__12_2_m1009D7546D4D2BC4C48CD113CB112FDD92A126FA
          (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  int iVar5;

  pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if ((param_1->___metaSave_9 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
     (bVar1 = MetaSave_get_shouldBeVisible_mFE7309D4ADC82785D27EB14CDFCE33C9589B350B
                        (param_1->___metaSave_9,(MethodInfo *)0x0),
     pGVar2 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar2,bVar1,(MethodInfo *)0x0);
    if (param_1->___metaSave_9 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      bVar1 = MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
                        (param_1->___metaSave_9,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (((pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
          (pTVar4 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar4,(MethodInfo *)0x0),
          pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
         (iVar5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                            (pTVar4,(MethodInfo *)0x0),
         pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar3,iVar5 + -1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
