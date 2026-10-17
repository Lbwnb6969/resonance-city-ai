// RVA 0xa01c4a | Compiler-generated.ExceptionTail
// PDB: FUN_10a01c4a
// Body: [[10a01c4a, 10a01ccc] [10a01d01, 10a01d14] [10a0201c, 10a02037]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a02c50 SaveSystem_MaybeUpdateOldSettings_mE08CC07E54258028C6F390337DC2051C327E1CB3
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10f080c0 String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618

void FUN_10a01c4a(void)

{
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar1;
  String_t *pSVar2;
  Exception_t *pEVar3;
  Il2CppObject *unaff_EBX;
  int unaff_EBP;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *unaff_ESI;
  int unaff_EDI;

  if (unaff_EBX != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EBX
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x1c) != (Exception_t *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x1c),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x60 + unaff_EDI * 4) == 0x10a)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x44) = unaff_EDI;
  }
  pSVar1 = unaff_ESI->___settingsData_10;
  if (pSVar1 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
    unaff_ESI->___bootState_6 = 2;
    unaff_ESI->___byteRequest_35 = (Il2CppObject *)0x0;
    pEVar3 = (Exception_t *)0x0;
  }
  else {
    if (pSVar1->___lastSave_1 == (String_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar2 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618
                       (pSVar1->___lastSave_1,L'/',L'\\',(MethodInfo *)0x0);
    pSVar1->___lastSave_1 = pSVar2;
    SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
              (unaff_ESI,(MethodInfo *)0x0);
    SaveSystem_MaybeUpdateOldSettings_mE08CC07E54258028C6F390337DC2051C327E1CB3
              (unaff_ESI,(MethodInfo *)0x0);
    pEVar3 = *(Exception_t **)(unaff_EBP + -0x1c);
    unaff_ESI->___bootState_6 = 3;
    unaff_ESI->___byteRequest_35 = (Il2CppObject *)0x0;
  }
  *(undefined4 *)(unaff_EBP + -0x5c + unaff_EDI * 4) = 0x305;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (pEVar3 == (Exception_t *)0x0) {
    FUN_10a0200b();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,(MethodInfo *)0x0);
}
