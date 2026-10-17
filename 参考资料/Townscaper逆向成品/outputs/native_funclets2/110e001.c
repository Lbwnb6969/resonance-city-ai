// RVA 0x110e001 | Recovered.function.called_by_110df04
// PDB: FUN_1110e001
// Body: [[1110e001, 1110e0d1]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10cc2750 Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared
// 10cf86d0 Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
// 1110e0fc FUN_1110e0fc

void FUN_1110e001(void)

{
  Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *pEVar6;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;

  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x70),
             Enumerator_Dispose_mE2B5F21791CF76ABC3BCFA182EAB8B16F6E2473B_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x38 + unaff_EDI * 4) == 0xd4)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x24) = unaff_EDI;
  }
  pDVar1 = *(Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 **)
            (*(int *)(unaff_EBP + 8) + 0x10);
  if (pDVar1 != (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)0x0) {
    pEVar6 = Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
                       ((Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *)(unaff_EBP + -0xb4),
                        pDVar1,
                        Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var
                       );
    iVar2 = pEVar6->___version_1;
    iVar3 = pEVar6->___index_2;
    uVar4 = *(undefined4 *)&pEVar6->___current_3;
    *(Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 **)(unaff_EBP + -0x88) =
         pEVar6->___dictionary_0;
    *(int *)(unaff_EBP + -0x84) = iVar2;
    *(int *)(unaff_EBP + -0x80) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x7c) = uVar4;
    *(undefined8 *)(unaff_EBP + -0x78) = *(undefined8 *)&(pEVar6->___current_3).___value_1;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    while( true ) {
      bVar5 = Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared
                        ((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(unaff_EBP + -0x88)
                         ,
                         Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var
                        );
      if (!bVar5) break;
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x78);
      (**(code **)(*unaff_ESI + 0x164))();
      (**(code **)(*unaff_ESI + 0x164))();
    }
    *(undefined4 *)(unaff_EBP + -0x34 + unaff_EDI * 4) = 0x11f;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    FUN_1110e0fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
