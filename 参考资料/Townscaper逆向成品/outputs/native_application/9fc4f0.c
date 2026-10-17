// RVA 0x9fc4f0 | Placemaker.Ui.SaveCard$$get_index
// PDB: SaveCard_get_index_m199101F71339834A2456F40F689D88B2866CB123
// Body: [[109fc4f0, 109fc518]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

int __cdecl
SaveCard_get_index_m199101F71339834A2456F40F689D88B2866CB123
          (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  int iVar2;

  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                      (pTVar1,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
