// RVA 0xa03a70 | Placemaker.SaveSystem$$StartMaybeSaveSaves
// PDB: SaveSystem_StartMaybeSaveSaves_m967F8E2D0C8A923AD5443103F43C0E26C5545481
// Body: [[10a03a70, 10a03aa7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05

void __cdecl
SaveSystem_StartMaybeSaveSaves_m967F8E2D0C8A923AD5443103F43C0E26C5545481
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  int iVar1;

  if (4 < param_1->___state_7) {
    param_1->___index_31 = 0;
    if (param_1->___metaSaveContainer_9 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
    param_1->___count_32 = iVar1;
    param_1->___state_7 = 5;
  }
  return;
}
