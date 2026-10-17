// RVA 0x110df04 | Recovered.function.called_by_110dc00
// PDB: FUN_1110df04
// Body: [[1110df04, 1110dfd6]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10cc1110 Enumerator_MoveNext_m7F4DBCE35CB5976792E4DC1DD74B4D3FC53BEB56_gshared
// 10cf86d0 Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
// 1110e001 FUN_1110e001

void FUN_1110df04(void)

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
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x58),
             Enumerator_Dispose_m998C92179FD2E853E3BDAB3E5CBAA0DA2BABE635_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x38 + unaff_EDI * 4) == 0x89)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x24) = unaff_EDI;
  }
  pDVar1 = *(Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 **)
            (*(int *)(unaff_EBP + 8) + 0xc);
  if (pDVar1 != (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)0x0) {
    pEVar6 = Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
                       ((Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *)(unaff_EBP + -0xb4),
                        pDVar1,
                        Dictionary_2_GetEnumerator_m8B6AA635B44D503B18DA8CBE687DBB22DC31ADFC_RuntimeMethod_var
                       );
    iVar2 = pEVar6->___version_1;
    iVar3 = pEVar6->___index_2;
    uVar4 = *(undefined4 *)&pEVar6->___current_3;
    *(Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 **)(unaff_EBP + -0x70) =
         pEVar6->___dictionary_0;
    *(int *)(unaff_EBP + -0x6c) = iVar2;
    *(int *)(unaff_EBP + -0x68) = iVar3;
    *(undefined4 *)(unaff_EBP + -100) = uVar4;
    *(undefined8 *)(unaff_EBP + -0x60) = *(undefined8 *)&(pEVar6->___current_3).___value_1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    while( true ) {
      bVar5 = Enumerator_MoveNext_m7F4DBCE35CB5976792E4DC1DD74B4D3FC53BEB56_gshared
                        ((Enumerator_t9B8C2C10E1E51246E68D5BE63EF558CBBE73095B *)(unaff_EBP + -0x70)
                         ,
                         Enumerator_MoveNext_m442126BD754C1F26966D665F47F891C0F9575597_RuntimeMethod_var
                        );
      if (!bVar5) break;
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x60);
      (**(code **)(*unaff_ESI + 0x164))();
      (**(code **)(*unaff_ESI + 0x15c))();
    }
    *(undefined4 *)(unaff_EBP + -0x34 + unaff_EDI * 4) = 0xd4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    FUN_1110e001();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
