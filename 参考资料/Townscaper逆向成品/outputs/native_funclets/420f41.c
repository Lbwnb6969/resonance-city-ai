// RVA 0x420f41 | Recovered.function.called_by_420c40
// PDB: FUN_10420f41
// Body: [[10420f41, 104210d5]]
// Direct callees:
// 1003e070 Invoke
// 1003e420 Invoke
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 104210f7 FUN_104210f7
// 10e96700 ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
// 10f044a0 String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
// 110aa6e0 ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6

void FUN_10420f41(void)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  int iVar2;
  bool bVar3;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar4;
  Il2CppObject *pIVar5;
  int iVar6;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar7;
  String_t *pSVar8;
  int unaff_EBP;
  int unaff_ESI;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x48),
             Enumerator_Dispose_mCC070A6CF25532BF99D3FC625D7FB52024B786B3_RuntimeMethod_var);
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x7c + unaff_ESI * 4) == 0xdb)) {
    unaff_ESI = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x5c) = unaff_ESI;
  }
  pLVar1 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(*(int *)(unaff_EBP + 8) + 0x34);
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar4 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x58),
                        pLVar1,
                        List_1_GetEnumerator_m90FE9FBDA698E3663ACF7048B85927BAE7232C2A_RuntimeMethod_var
                       );
    iVar6 = pEVar4->___index_1;
    iVar2 = pEVar4->___version_2;
    pIVar5 = pEVar4->___current_3;
    *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x48) = pEVar4->___list_0;
    *(int *)(unaff_EBP + -0x44) = iVar6;
    *(int *)(unaff_EBP + -0x40) = iVar2;
    *(Il2CppObject **)(unaff_EBP + -0x3c) = pIVar5;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    bVar3 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                      ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x48),
                       Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                      );
    if (!bVar3) {
      *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0x195;
      FUN_1042114d();
      return;
    }
    iVar6 = *(int *)(unaff_EBP + -0x3c);
    *(int *)(unaff_EBP + 8) = iVar6;
    if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x10) != 0)) &&
        (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)(unaff_EBP + -0x20) !=
         (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) &&
       (pIVar5 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                           (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)
                             (unaff_EBP + -0x20),*(int *)(*(int *)(iVar6 + 0x10) + 8),
                            (MethodInfo *)0x0), pIVar5 != (Il2CppObject *)0x0)) {
      pIVar5 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var
                          ,pIVar5);
      *(Il2CppObject **)(unaff_EBP + -0x18) = pIVar5;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      do {
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_1042117b;
        iVar6 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,pIVar5);
        if ((char)iVar6 == '\0') goto LAB_104210c1;
        pAVar7 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                            ,pIVar5);
        iVar6 = *(int *)(unaff_EBP + 8);
        *(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 **)(unaff_EBP + -0x28) = pAVar7
        ;
        if (*(int *)(iVar6 + 0x10) == 0) goto LAB_1042117b;
        if (*(int *)(*(int *)(iVar6 + 0x10) + 0x10) == 1) {
          *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar6 + 0x1c);
          if (pAVar7 != (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0)
          goto LAB_104210a0;
          goto LAB_1042117b;
        }
        if ((pAVar7 == (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) ||
           (*(String_t **)(iVar6 + 0xc) == (String_t *)0x0)) goto LAB_1042117b;
        bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (*(String_t **)(iVar6 + 0xc),pAVar7->___OhAdHiaYRHUAwesgRmFbimEcbLQE_14,
                           (MethodInfo *)0x0);
      } while (!bVar3);
      pAVar7 = *(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 **)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1c);
LAB_104210a0:
      pSVar8 = ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6
                         (pAVar7,(MethodInfo *)0x0);
      if (*(Il2CppObject **)(unaff_EBP + 8) != (Il2CppObject *)0x0) {
        VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke
                  (0x42,*(Il2CppObject **)(unaff_EBP + 8),(Il2CppObject *)pSVar8);
LAB_104210c1:
        *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0x179;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x5c) + 1;
        FUN_104210f7();
        return;
      }
    }
  }
LAB_1042117b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
