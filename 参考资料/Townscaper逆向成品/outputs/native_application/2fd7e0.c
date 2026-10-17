// RVA 0x2fd7e0 | Placemaker.StorageUtils$$LastSaveIsEmpty
// PDB: StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
// Body: [[102fd7e0, 102fd861]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f02d80 String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

bool __cdecl
StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,MethodInfo *param_2)

{
  String_t *pSVar1;
  bool bVar2;

  if (DAT_1151c1f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
    DAT_1151c1f6 = '\x01';
  }
  if (param_1->___settingsData_4 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) {
    pSVar1 = param_1->___settingsData_4->___lastSave_1;
    if (pSVar1 != (String_t *)0x0) {
      bVar2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (pSVar1,_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        if ((param_1->___settingsData_4 !=
             (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) &&
           (pSVar1 = param_1->___settingsData_4->___lastSave_1, pSVar1 != (String_t *)0x0)) {
          bVar2 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A
                            (pSVar1,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                             (MethodInfo *)0x0);
          return !bVar2;
        }
        goto LAB_102fd85d;
      }
    }
    return true;
  }
LAB_102fd85d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
