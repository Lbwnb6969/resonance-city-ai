// RVA 0xe1e1f0 | Recovered.function.called_by_e1e04f
// PDB: FUN_10e1e1f0
// Body: [[10e1e1f0, 10e1e2d5] [10e1e2f5, 10e1e2f9] [10e1e302, 10e1e311]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 10e1e2e4 FUN_10e1e2e4
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void FUN_10e1e1f0(void)

{
  Il2CppObject *pIVar1;
  Exception_t *pEVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar6;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x4c),
             Enumerator_Dispose_m58DEA16F051C468A0E0FDC14C5A2AA18967974BF_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x40 + unaff_ESI * 4) == 0xfe)) {
    unaff_ESI = unaff_ESI + -1;
  }
  if (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x2c) !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x2c),
               Dictionary_2_Clear_m9B5D39FF8E020BB44ACB60028E2D6E3F848BB8D4_RuntimeMethod_var);
    if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EDI + 0x28) !=
        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
      pEVar6 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                         ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                          (unaff_EBP + -0x7c),
                          *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EDI + 0x28),
                          List_1_GetEnumerator_mCF44D814677867402865EDB920194700F57957D0_RuntimeMethod_var
                         );
      iVar3 = pEVar6->___index_1;
      iVar4 = pEVar6->___version_2;
      pIVar1 = pEVar6->___current_3;
      *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x5c) = pEVar6->___list_0;
      *(int *)(unaff_EBP + -0x58) = iVar3;
      *(int *)(unaff_EBP + -0x54) = iVar4;
      *(Il2CppObject **)(unaff_EBP + -0x50) = pIVar1;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      while( true ) {
        bVar5 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                          ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                           (unaff_EBP + -0x5c),
                           Enumerator_MoveNext_m9F4BB491709407F032A17E25AAE60FAF4FBC9715_RuntimeMethod_var
                          );
        if (!bVar5) {
          *(undefined4 *)(unaff_EBP + -0x3c + unaff_ESI * 4) = 0x14e;
          pEVar2 = *(Exception_t **)(unaff_EBP + -0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                    ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                     (unaff_EBP + -0x5c),
                     Enumerator_Dispose_mF1D7B9D0E73DC003F6DC49C28BE6365793606FAC_RuntimeMethod_var)
          ;
          if (pEVar2 == (Exception_t *)0x0) {
            FUN_10e1e2e4();
            return;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar2,(MethodInfo *)0x0);
        }
        pIVar1 = *(Il2CppObject **)(unaff_EBP + -0x50);
        if ((pIVar1 == (Il2CppObject *)0x0) ||
           (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x2c) ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) break;
        Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                  (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x2c),
                   *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(pIVar1 + 1),pIVar1,
                   Dictionary_2_Add_m7C6B5B44FC91AD65F298CB4C5B825C8BB0DEEB28_RuntimeMethod_var);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
