// RVA 0x417f85 | Recovered.function.called_by_417d40
// PDB: FUN_10417f85
// Body: [[10417f85, 10418068]]
// Direct callees:
// 1003e420 Invoke
// 1041808a FUN_1041808a
// 10d17890 Controller_get_Buttons_m7B6D460CFBF60F19C3D33A310E0D8429CC4D1A95
// 10f27820 Button_get_justPressed_m9E0ECF17D88285083DCAE4A004DB1EE685C14AB5

undefined1 FUN_10417f85(void)

{
  Exception_t *pEVar1;
  bool bVar2;
  undefined1 uVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  Button_tFA57BAA842997B73DB23CE202F2108E0E53841CC *pBVar6;
  Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  Il2CppObject *unaff_EDI;

  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x18) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
  }
  if (unaff_ESI != 0) {
    iVar5 = *(int *)(unaff_EBP + -0x4c + unaff_ESI * 4);
    if (iVar5 == 0xa5) {
      pEVar1 = *(Exception_t **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(Il2CppObject **)(unaff_EBP + 8) != (Il2CppObject *)0x0) {
        InterfaceFuncInvoker0<int>::Invoke
                  (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                   *(Il2CppObject **)(unaff_EBP + 8));
      }
      if (pEVar1 == (Exception_t *)0x0) {
        if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x4c + unaff_ESI * 4) == 0xa5)) {
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return *(undefined1 *)(unaff_EBP + -0x11);
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar1,(MethodInfo *)0x0);
    }
    if (iVar5 == 0x57) {
      unaff_ESI = unaff_ESI + -1;
      *(int *)(unaff_EBP + -0x34) = unaff_ESI;
    }
  }
  pIVar4 = Controller_get_Buttons_m7B6D460CFBF60F19C3D33A310E0D8429CC4D1A95
                     (unaff_EBX,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)
             InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IEnumerable_1_t8E35C574BEAF32A237EFE7796451DFFB6F999F15_il2cpp_TypeInfo_var,
                        pIVar4);
    *(Il2CppObject **)(unaff_EBP + -0x24) = pIVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    while (pIVar4 != (Il2CppObject *)0x0) {
      iVar5 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,pIVar4);
      if ((char)iVar5 == '\0') {
        *(undefined4 *)(unaff_EBP + -0x48 + unaff_ESI * 4) = 0x8f;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
        uVar3 = FUN_1041808a();
        return uVar3;
      }
      pBVar6 = (Button_tFA57BAA842997B73DB23CE202F2108E0E53841CC *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerator_1_t96E678BD4A58B8F3B9916485417D05DE876E6E3C_il2cpp_TypeInfo_var
                          ,pIVar4);
      if (pBVar6 == (Button_tFA57BAA842997B73DB23CE202F2108E0E53841CC *)0x0) break;
      bVar2 = Button_get_justPressed_m9E0ECF17D88285083DCAE4A004DB1EE685C14AB5
                        (pBVar6,(MethodInfo *)0x0);
      if (bVar2) {
        *(undefined4 *)(unaff_EBP + -0x48 + unaff_ESI * 4) = 0xa5;
        *(undefined1 *)(unaff_EBP + -0x11) = 1;
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar3 = FUN_1041808a();
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
