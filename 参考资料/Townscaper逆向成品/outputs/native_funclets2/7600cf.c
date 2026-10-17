// RVA 0x7600cf | Recovered.function.called_by_75fbf0
// PDB: FUN_107600cf
// Body: [[107600cf, 1076017e] [10760182, 10760238] [1076023c, 107602de] [10760306, 1076031a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1075ee30 PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
// 107602ed FUN_107602ed
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void FUN_107600cf(void)

{
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar1;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar2;
  Exception_t *pEVar3;
  bool bVar4;
  int iVar5;
  int unaff_EBP;
  int unaff_ESI;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *unaff_EDI;
  uint uVar6;
  int iVar7;

  *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x12),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x18) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x68 + unaff_ESI * 4) == 0x201)) {
    *(int *)(unaff_EBP + -0x1c) = unaff_ESI + -1;
  }
  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
            (unaff_EDI,
             ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
            );
  pPVar1 = *(PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 **)(unaff_EBP + 0xc);
  PropPlacer_RecursiveCheck_m369FB8E68D305EEAEF2C75302C73008196CDB3DA
            (*(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(unaff_EBP + 8),pPVar1,
             (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0,(MethodInfo *)0x0);
  uVar6 = (pPVar1->___anchorCount_16 - 1) +
          (uint)pPVar1->___moteveeCount_15 + (uint)pPVar1->___overlapCount_14 +
          (uint)pPVar1->___childCount_13 + (uint)pPVar1->___parentCount_12;
  while( true ) {
    iVar7 = *(int *)(unaff_EBP + 0xc);
    iVar5 = (uint)*(byte *)(iVar7 + 0x20) +
            (uint)*(byte *)(iVar7 + 0x23) + (uint)*(byte *)(iVar7 + 0x22) +
            (uint)*(byte *)(iVar7 + 0x21);
    iVar7 = *(int *)(unaff_EBP + 0xc);
    if ((int)uVar6 < iVar5) break;
    iVar7 = *(int *)(iVar7 + 0x1c);
    if (iVar7 == 0) goto LAB_10760306;
    if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 8) + 0x10 + uVar6 * 4);
    if (iVar7 == 0) goto LAB_10760306;
    if (DAT_1151ec3e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var)
      ;
      DAT_1151ec3e = '\x01';
    }
    if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(iVar7 + 0x1c) ==
        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10760306;
    bVar4 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                      (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(iVar7 + 0x1c),
                       *(Il2CppObject **)(unaff_EBP + 0xc),
                       List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
    if (bVar4) {
      *(char *)(iVar7 + 0x24) = *(char *)(iVar7 + 0x24) + -1;
    }
    uVar6 = uVar6 - 1;
  }
  if (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)(iVar7 + 0x1c) !=
      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
              (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)(iVar7 + 0x1c),iVar5,
               (uint)*(byte *)(iVar7 + 0x24),
               List_1_RemoveRange_mD7944535F498FB773DCD8556ADB20AC5EBE51713_RuntimeMethod_var);
    *(undefined1 *)(iVar7 + 0x24) = 0;
    uVar6 = (uint)*(byte *)(iVar7 + 0x21) + (uint)*(byte *)(iVar7 + 0x20) +
            (*(byte *)(iVar7 + 0x22) - 1);
    while( true ) {
      iVar5 = (uint)*(byte *)(iVar7 + 0x21) + (uint)*(byte *)(iVar7 + 0x20);
      iVar7 = *(int *)(unaff_EBP + 0xc);
      pLVar2 = *(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)(iVar7 + 0x1c);
      if ((int)uVar6 < iVar5) break;
      if (pLVar2 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_10760306;
      if ((uint)pLVar2->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      iVar7 = *(int *)((int)&pLVar2->____items_1->m_Items[0].___key_0.___dateData_44 + uVar6 * 4);
      if (iVar7 == 0) goto LAB_10760306;
      if (DAT_1151ec3c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var
                  );
        DAT_1151ec3c = '\x01';
      }
      if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(iVar7 + 0x1c) ==
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10760306;
      bVar4 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                        (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(iVar7 + 0x1c),
                         *(Il2CppObject **)(unaff_EBP + 0xc),
                         List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
      if (bVar4) {
        *(char *)(iVar7 + 0x22) = *(char *)(iVar7 + 0x22) + -1;
      }
      iVar7 = *(int *)(unaff_EBP + 0xc);
      uVar6 = uVar6 - 1;
    }
    if (pLVar2 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                (pLVar2,iVar5,(uint)*(byte *)(iVar7 + 0x22),
                 List_1_RemoveRange_mD7944535F498FB773DCD8556ADB20AC5EBE51713_RuntimeMethod_var);
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(iVar7 + 0x22) = 0;
      *(undefined4 *)(unaff_EBP + -100 + iVar5 * 4) = 0x2c8;
      pEVar3 = *(Exception_t **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x13)
                 ,(MethodInfo *)0x0);
      if (pEVar3 == (Exception_t *)0x0) {
        FUN_107602ed();
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar3,(MethodInfo *)0x0);
    }
  }
LAB_10760306:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
