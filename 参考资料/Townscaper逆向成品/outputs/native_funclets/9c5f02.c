// RVA 0x9c5f02 | Recovered.function.called_by_9c5be0
// PDB: FUN_109c5f02
// Body: [[109c5f02, 109c5f7f] [109c5f87, 109c5fe9] [109c5ff1, 109c6022]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 102fd930 StorageUtils_MoveAllSaves_m4D02B375934973CB991DE85D494E8BAA932B881D
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8

undefined4 FUN_109c5f02(void)

{
  Il2CppObject *pIVar1;
  int iVar2;
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *unaff_EBX;
  int unaff_EBP;
  Il2CppObject *unaff_ESI;
  int unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_ESI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x18) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
  }
  if (unaff_EBX != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
    if (unaff_EBX->___settingsData_4 !=
        (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
      if (unaff_EBX->___settingsData_4->___version_0 == 0) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                  ((Il2CppObject *)_stringLiteral7549391F4BE511FC68ABE6390C5584C1FDF72601,
                   (MethodInfo *)0x0);
        pIVar1 = StorageUtils_MoveAllSaves_m4D02B375934973CB991DE85D494E8BAA932B881D
                           (unaff_EBX,(MethodInfo *)0x0);
        *(Il2CppObject **)(unaff_EDI + 0x24) = pIVar1;
        if (*(Il2CppObject **)(unaff_EDI + 0x24) == (Il2CppObject *)0x0) goto LAB_109c6016;
        iVar2 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,*(Il2CppObject **)(unaff_EDI + 0x24));
        if ((char)iVar2 != '\0') {
          *(undefined4 *)(unaff_EDI + 0xc) = 0;
          *(undefined4 *)(unaff_EDI + 8) = 3;
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return 1;
        }
        *(undefined4 *)(unaff_EDI + 0x24) = 0;
      }
      if ((unaff_EBX == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) ||
         (unaff_EBX->___settingsData_4 ==
          (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) goto LAB_109c6016;
      unaff_EBX->___settingsData_4->___version_0 = 1;
    }
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
    if (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)(unaff_EDI + 0x14) !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
                  (unaff_EDI + 0x14),(MethodInfo *)0x0);
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
LAB_109c6016:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
