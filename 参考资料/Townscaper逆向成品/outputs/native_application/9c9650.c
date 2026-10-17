// RVA 0x9c9650 | Placemaker.Ui.UpdateState.<>c__DisplayClass30_0$$<SubscribeTick>b__1
// PDB: U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__1_mDDB89C15A969DB1EAAF588931B018BB7E3AC6495
// Body: [[109c9650, 109c9698]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11134ba0 CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A
// 11134bd0 CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835

void __cdecl
U3CU3Ec__DisplayClass30_0_U3CSubscribeTickU3Eb__1_mDDB89C15A969DB1EAAF588931B018BB7E3AC6495
          (U3CU3Ec__DisplayClass30_0_t79A3B23E607F92F0D47DDAFAE181886665BB3A1F *param_1,
          float param_2,MethodInfo *param_3)

{
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar1;
  bool bVar2;

  bVar2 = param_2 == __real_3f800000;
  pCVar1 = param_1->___canvasGroup_2;
  if (pCVar1 != (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)0x0) {
    CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835
              (pCVar1,bVar2,(MethodInfo *)0x0);
    CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A
              (pCVar1,bVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
