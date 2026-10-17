// RVA 0x4210f7 | Recovered.function.called_by_420f41
// PDB: FUN_104210f7
// Body: [[104210f7, 1042113b]]
// Direct callees:
// 1003e420 Invoke
// 1042114d FUN_1042114d

void FUN_104210f7(void)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int iVar3;
  ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *pAVar4;
  String_t *pSVar5;
  int unaff_EBP;
  int unaff_ESI;
  Il2CppObject *unaff_EDI;

  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x7c + unaff_ESI * 4) == 0x179)) {
    unaff_ESI = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x5c) = unaff_ESI;
  }
  bVar1 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                    ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x48),
                     Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                    );
  if (!bVar1) {
    *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0x195;
    FUN_1042114d();
    return;
  }
  iVar3 = *(int *)(unaff_EBP + -0x3c);
  *(int *)(unaff_EBP + 8) = iVar3;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) &&
      (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)(unaff_EBP + -0x20) !=
       (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) &&
     (pIVar2 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                         (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)
                           (unaff_EBP + -0x20),*(int *)(*(int *)(iVar3 + 0x10) + 8),
                          (MethodInfo *)0x0), pIVar2 != (Il2CppObject *)0x0)) {
    pIVar2 = (Il2CppObject *)
             InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var,
                        pIVar2);
    *(Il2CppObject **)(unaff_EBP + -0x18) = pIVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    do {
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_1042117b;
      iVar3 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,pIVar2);
      if ((char)iVar3 == '\0') goto LAB_104210c1;
      pAVar4 = (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                          ,pIVar2);
      iVar3 = *(int *)(unaff_EBP + 8);
      *(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 **)(unaff_EBP + -0x28) = pAVar4;
      if (*(int *)(iVar3 + 0x10) == 0) goto LAB_1042117b;
      if (*(int *)(*(int *)(iVar3 + 0x10) + 0x10) == 1) {
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar3 + 0x1c);
        if (pAVar4 != (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0)
        goto LAB_104210a0;
        goto LAB_1042117b;
      }
      if ((pAVar4 == (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) ||
         (*(String_t **)(iVar3 + 0xc) == (String_t *)0x0)) goto LAB_1042117b;
      bVar1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                        (*(String_t **)(iVar3 + 0xc),pAVar4->___OhAdHiaYRHUAwesgRmFbimEcbLQE_14,
                         (MethodInfo *)0x0);
    } while (!bVar1);
    pAVar4 = *(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 **)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1c);
LAB_104210a0:
    pSVar5 = ActionElementMap_get_elementIdentifierName_mB12B33305EB177C9C7ADC9234467076B770FDFA6
                       (pAVar4,(MethodInfo *)0x0);
    if (*(Il2CppObject **)(unaff_EBP + 8) != (Il2CppObject *)0x0) {
      VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke
                (0x42,*(Il2CppObject **)(unaff_EBP + 8),(Il2CppObject *)pSVar5);
LAB_104210c1:
      *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0x179;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x5c) + 1;
      FUN_104210f7();
      return;
    }
  }
LAB_1042117b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
