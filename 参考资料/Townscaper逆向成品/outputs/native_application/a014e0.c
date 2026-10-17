// RVA 0xa014e0 | Placemaker.SaveSystem$$GetMetaSaveCount
// PDB: SaveSystem_GetMetaSaveCount_m4580E94FD55DA93B69ED4992130007D740E75FC8
// Body: [[10a014e0, 10a01501]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

int __cdecl
SaveSystem_GetMetaSaveCount_m4580E94FD55DA93B69ED4992130007D740E75FC8
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  int iVar1;

  if (param_1->___metaSaveContainer_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
