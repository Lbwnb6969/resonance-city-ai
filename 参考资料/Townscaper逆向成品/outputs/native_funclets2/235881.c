// RVA 0x235881 | Recovered.function.called_by_2356ae
// PDB: FUN_10235881
// Body: [[10235881, 10235a0a] [10235a35, 10235a39] [10235a42, 10235a4f]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10234ed0 ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
// 10235a19 FUN_10235a19
// 10626950 ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
// 10db04c0 InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
// 10db0560 InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void FUN_10235881(void)

{
  Exception_t *pEVar1;
  int iVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar6;
  String_t *pSVar7;
  int iVar8;
  int unaff_EBP;
  InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *unaff_ESI;
  int unaff_EDI;

  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x44),
             Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x20) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x20),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x7c + unaff_EDI * 4) == 0x269)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x68) = unaff_EDI;
  }
  pIVar4 = *(Il2CppObject **)(unaff_EBP + -0x1c);
  if (*(char *)(unaff_EBP + -0x11) != '\0') {
    if (unaff_ESI == (InputAction_tD22CF065BFD88C292C239741BE6F8E37F5AE7ADE *)0x0)
    goto LAB_10235a35;
    pSVar7 = unaff_ESI->____descriptiveName_3;
    if (unaff_ESI->____type_2 == 0) {
      iVar5 = *(int *)(unaff_EBP + -0x18);
      *(int *)(unaff_EBP + -0x18) = iVar5 + 1;
      ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
                (*(ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA **)(unaff_EBP + 8),
                 unaff_ESI,0,pSVar7,1,iVar5,(MethodInfo *)0x0);
      pSVar7 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                         (unaff_ESI,(MethodInfo *)0x0);
      bVar3 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                        (pSVar7,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (unaff_ESI->____descriptiveName_3,
                            _stringLiteral5F321914A9DA6EFAF07CD59F27BBB0ADEEE026D4,(MethodInfo *)0x0
                           );
      }
      else {
        pSVar7 = InputAction_get_positiveDescriptiveName_mA742606F52F1DD385F661621EC5CB23B2D03A92D
                           (unaff_ESI,(MethodInfo *)0x0);
      }
      iVar5 = *(int *)(unaff_EBP + -0x18);
      *(int *)(unaff_EBP + -0x18) = iVar5 + 1;
      ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
                (*(ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA **)(unaff_EBP + 8),
                 unaff_ESI,1,pSVar7,0,iVar5,(MethodInfo *)0x0);
      pSVar7 = InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
                         (unaff_ESI,(MethodInfo *)0x0);
      bVar3 = ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997
                        (pSVar7,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (unaff_ESI->____descriptiveName_3,
                            _stringLiteralC270919EEAE3793C4DE2CDD18B665AB0B04693D4,(MethodInfo *)0x0
                           );
      }
      else {
        pSVar7 = InputAction_get_negativeDescriptiveName_mEE74C324DFD2047C5F8A7E31C226F5C99B276F39
                           (unaff_ESI,(MethodInfo *)0x0);
      }
      iVar5 = *(int *)(unaff_EBP + -0x18);
      iVar8 = iVar5 + 1;
      *(int *)(unaff_EBP + -0x18) = iVar8;
      *(int *)(unaff_EBP + -0x24) = iVar8;
      ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
                (*(ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA **)(unaff_EBP + 8),
                 unaff_ESI,2,pSVar7,0,iVar5,(MethodInfo *)0x0);
      pIVar4 = *(Il2CppObject **)(unaff_EBP + -0x1c);
    }
    else {
      pIVar4 = *(Il2CppObject **)(unaff_EBP + -0x1c);
      if (unaff_ESI->____type_2 == 1) {
        iVar5 = *(int *)(unaff_EBP + -0x18);
        iVar8 = iVar5 + 1;
        *(int *)(unaff_EBP + -0x18) = iVar8;
        *(int *)(unaff_EBP + -0x24) = iVar8;
        ControlBinding_SetRow_m8D3BCD1A109CACE46DF2C9D3AFC6BE156EFA8A53
                  (*(ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA **)(unaff_EBP + 8),
                   unaff_ESI,1,pSVar7,2,iVar5,(MethodInfo *)0x0);
        pIVar4 = *(Il2CppObject **)(unaff_EBP + -0x1c);
      }
    }
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    iVar5 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       pIVar4);
    if ((char)iVar5 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x78 + unaff_EDI * 4) = 0x333;
      pEVar1 = *(Exception_t **)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(Il2CppObject **)(unaff_EBP + -0x1c) != (Il2CppObject *)0x0) {
        InterfaceFuncInvoker0<int>::Invoke
                  (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                   *(Il2CppObject **)(unaff_EBP + -0x1c));
      }
      if (pEVar1 == (Exception_t *)0x0) {
        FUN_10235a19();
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar1,(MethodInfo *)0x0);
    }
    iVar5 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_1_t6134A20D2499DC6D27A5860ECCB41D08D19C9FAD_il2cpp_TypeInfo_var
                       ,*(Il2CppObject **)(unaff_EBP + -0x1c));
    *(int *)(unaff_EBP + -0x28) = iVar5;
    *(undefined1 *)(unaff_EBP + -0x11) = 0;
    *(undefined1 *)(unaff_EBP + -0x12) = 0;
    if ((ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var);
    }
    if (*(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
         ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var->static_fields
        != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
      pEVar6 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                         ((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(unaff_EBP + -100)
                          ,*(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
                            ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA_il2cpp_TypeInfo_var
                            ->static_fields,
                          List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var
                         );
      iVar8 = pEVar6->___index_1;
      iVar2 = pEVar6->___version_2;
      pSVar7 = pEVar6->___current_3;
      *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x44) = pEVar6->___list_0;
      *(int *)(unaff_EBP + -0x40) = iVar8;
      *(int *)(unaff_EBP + -0x3c) = iVar2;
      *(String_t **)(unaff_EBP + -0x38) = pSVar7;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      do {
        bVar3 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                          ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                           (unaff_EBP + -0x44),
                           Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var
                          );
        if (!bVar3) goto LAB_1023583f;
        if ((iVar5 == 0) || (*(String_t **)(unaff_EBP + -0x38) == (String_t *)0x0))
        goto LAB_10235a35;
        bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (*(String_t **)(unaff_EBP + -0x38),*(String_t **)(iVar5 + 0xc),
                           (MethodInfo *)0x0);
      } while (!bVar3);
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
LAB_1023583f:
      *(undefined4 *)(unaff_EBP + -0x78 + unaff_EDI * 4) = 0x269;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + 1;
      FUN_10235881();
      return;
    }
  }
LAB_10235a35:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
