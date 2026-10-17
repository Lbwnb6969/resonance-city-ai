// RVA 0x420eda | Recovered.function.called_by_420c40
// PDB: FUN_10420eda
// Body: [[10420eda, 10420f29]]
// Direct callees:
// 1003e420 Invoke
// 10420f41 FUN_10420f41

void FUN_10420eda(void)

{
  String_t *pSVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  int iVar6;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;
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
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x7c + unaff_ESI * 4) == 0xbf)) {
    unaff_ESI = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x5c) = unaff_ESI;
  }
  bVar3 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                    ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x48),
                     Enumerator_MoveNext_m1353A10EE0CB00180EDAF9389E548EEDD7BA887E_RuntimeMethod_var
                    );
  if (!bVar3) {
    *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0xdb;
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x5c) + 1;
    FUN_10420f41();
    return;
  }
  iVar5 = *(int *)(unaff_EBP + -0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x10) != 0)) &&
     (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)(unaff_EBP + -0x20) !=
      (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)0x0)) {
    pIVar4 = ControllerMap_ElementMapsWithAction_mEF5E5A6CE97879AADA9FD8488279ADDBF4634F41
                       (*(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D **)
                         (unaff_EBP + -0x20),*(int *)(*(int *)(iVar5 + 0x10) + 8),(MethodInfo *)0x0)
    ;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerable_1_t8BE6E1F258DEA8EDC30D58FB2205A944F35AB737_il2cpp_TypeInfo_var
                          ,pIVar4);
      *(Il2CppObject **)(unaff_EBP + -0x18) = pIVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      do {
        do {
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_1042117b;
          iVar5 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,pIVar4);
          if ((char)iVar5 == '\0') goto LAB_10420ea4;
          iVar6 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_1_tBDE3CDDEFEB1DD73A6387AC43023FE6600D80759_il2cpp_TypeInfo_var
                             ,pIVar4);
          *(int *)(unaff_EBP + -0x24) = iVar6;
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x10);
          if (iVar5 == 0) goto LAB_1042117b;
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 1) goto LAB_10420e59;
        } while (iVar5 != 0);
        pSVar1 = *(String_t **)(*(int *)(unaff_EBP + -0x1c) + 0xc);
        if ((iVar6 == 0) || (pSVar1 == (String_t *)0x0)) goto LAB_1042117b;
        bVar3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D
                          (pSVar1,*(String_t **)(iVar6 + 0x40),(MethodInfo *)0x0);
      } while (!bVar3);
      iVar6 = *(int *)(unaff_EBP + -0x24);
LAB_10420e59:
      pIVar2 = Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82_il2cpp_TypeInfo_var;
      if (iVar6 != 0) {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar6 + 0x48);
        pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new(pIVar2);
        *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)(unaff_EBP + -0x24) =
             pOVar7;
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar7,*(Il2CppObject **)(unaff_EBP + 8),
                   (int)
                   KeyboardAndMouseControlRemap_OnInputFieldClicked_m677D82E8FDE5D969533AA0FE0F84D946966E8071_RuntimeMethod_var
                   ,Action_1__ctor_mFE345106ED67467BC2B458C4494F844295479141_RuntimeMethod_var);
        ControlBindingKey_SetOnClickListener_mC8857BF99B8D262880AC4B52973F0DDBA7C3224B
                  (*(ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 **)
                    (unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x28),
                   *(Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 **)(unaff_EBP + -0x24),
                   (MethodInfo *)0x0);
LAB_10420ea4:
        *(undefined4 *)(unaff_EBP + -0x78 + unaff_ESI * 4) = 0xbf;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0x5c) + 1;
        FUN_10420eda();
        return;
      }
    }
  }
LAB_1042117b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
