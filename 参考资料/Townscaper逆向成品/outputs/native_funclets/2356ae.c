// RVA 0x2356ae | Recovered.function.called_by_235020
// PDB: FUN_102356ae
// Body: [[102356ae, 10235853]]
// Direct callees:
// 1003e420 Invoke
// 1003fa10 List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10235881 FUN_10235881
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 107d0ba0 ReInput_get_mapping_m6A5EE8A93174AAA84C9C37C1CC3C340A485C19E3
// 108b6fb0 MappingHelper_ActionsInCategory_mC66639760FEC669B2B1CA03DE82C87649DD43464
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D

void FUN_102356ae(void)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  Exception_t *pEVar2;
  int iVar3;
  int iVar4;
  String_t *pSVar5;
  bool bVar6;
  MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *pMVar7;
  Il2CppObject *pIVar8;
  int iVar9;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar10;
  int unaff_EBP;
  Exception_t *unaff_ESI;
  int unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x54),
             Enumerator_Dispose_mBB19CDDD586BD985616DB9D667F6217775C975D6_RuntimeMethod_var);
  if (unaff_ESI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x7c + unaff_EDI * 4) == 0x1f8)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x68) = unaff_EDI;
  }
  pLVar1 = *(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)(*(int *)(unaff_EBP + 8) + 0x1c);
  if (pLVar1 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              (pLVar1,List_1_Clear_m321438F9FA03080E996556E1AEE2EF2B37704176_RuntimeMethod_var);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    }
    pMVar7 = ReInput_get_mapping_m6A5EE8A93174AAA84C9C37C1CC3C340A485C19E3((MethodInfo *)0x0);
    if (pMVar7 != (MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *)0x0) {
      pIVar8 = MappingHelper_ActionsInCategory_mC66639760FEC669B2B1CA03DE82C87649DD43464
                         (pMVar7,_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E,
                          (MethodInfo *)0x0);
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar8 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerable_1_t30B1CF132C29935077E288332B94617FF4337171_il2cpp_TypeInfo_var
                            ,pIVar8);
        *(Il2CppObject **)(unaff_EBP + -0x1c) = pIVar8;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (pIVar8 != (Il2CppObject *)0x0) {
          iVar9 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar8);
          if ((char)iVar9 == '\0') {
            *(undefined4 *)(unaff_EBP + -0x78 + unaff_EDI * 4) = 0x333;
            pEVar2 = *(Exception_t **)(unaff_EBP + -0x20);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(Il2CppObject **)(unaff_EBP + -0x1c) != (Il2CppObject *)0x0) {
              InterfaceFuncInvoker0<int>::Invoke
                        (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var
                         ,*(Il2CppObject **)(unaff_EBP + -0x1c));
            }
            if (pEVar2 == (Exception_t *)0x0) {
              FUN_10235a19();
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar2,(MethodInfo *)0x0);
          }
          iVar9 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var
                             ,*(Il2CppObject **)(unaff_EBP + -0x1c));
          *(int *)(unaff_EBP + -0x28) = iVar9;
          *(undefined1 *)(unaff_EBP + -0x11) = 0;
          *(undefined1 *)(unaff_EBP + -0x12) = 0;
          if ((ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var)
            ;
          }
          if (*(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
               ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->
               static_fields != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
            pEVar10 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                                ((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)
                                 (unaff_EBP + -100),
                                 *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
                                  ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var
                                  ->static_fields,
                                 List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var
                                );
            iVar3 = pEVar10->___index_1;
            iVar4 = pEVar10->___version_2;
            pSVar5 = pEVar10->___current_3;
            *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x44) =
                 pEVar10->___list_0;
            *(int *)(unaff_EBP + -0x40) = iVar3;
            *(int *)(unaff_EBP + -0x3c) = iVar4;
            *(String_t **)(unaff_EBP + -0x38) = pSVar5;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            do {
              bVar6 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                                ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                                 (unaff_EBP + -0x44),
                                 Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var
                                );
              if (!bVar6) goto LAB_1023583f;
              if ((iVar9 == 0) || (*(String_t **)(unaff_EBP + -0x38) == (String_t *)0x0))
              goto LAB_10235a35;
              bVar6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                                (*(String_t **)(unaff_EBP + -0x38),*(String_t **)(iVar9 + 0xc),
                                 (MethodInfo *)0x0);
            } while (!bVar6);
            *(undefined1 *)(unaff_EBP + -0x11) = 1;
LAB_1023583f:
            *(undefined4 *)(unaff_EBP + -0x78 + unaff_EDI * 4) = 0x269;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + 1;
            FUN_10235881();
            return;
          }
        }
      }
    }
  }
LAB_10235a35:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
