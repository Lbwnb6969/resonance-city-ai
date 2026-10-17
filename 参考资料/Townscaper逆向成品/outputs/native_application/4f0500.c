// RVA 0x4f0500 | Placemaker.Ui.LanguageButtons$$ChangeLanguage
// PDB: LanguageButtons_ChangeLanguage_m88B740F692655126F57C349F42E4A5BBD223410C
// Body: [[104f0500, 104f05f7] [104f05fb, 104f0616]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104f0a30 LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66
// 104feb10 LocalizationManager_InitializeIfNeeded_mE361882422740D7A08CD539142AD5C5C79327765
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
LanguageButtons_ChangeLanguage_m88B740F692655126F57C349F42E4A5BBD223410C
          (LanguageButtons_t9A4ECA21F7C2216092FC318A31A8492996DE2564 *param_1,bool param_2,
          MethodInfo *param_3)

{
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (DAT_1151d21c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
              );
    DAT_1151d21c = '\x01';
  }
  pLVar1 = param_1->___languages_5;
  if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var);
  }
  if (DAT_1151d282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
              );
    DAT_1151d282 = '\x01';
  }
  if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var);
  }
  LocalizationManager_InitializeIfNeeded_mE361882422740D7A08CD539142AD5C5C79327765
            ((MethodInfo *)0x0);
  if (pLVar1 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
    iVar3 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pLVar1,
                       *(Il2CppObject **)
                        LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
                        ->static_fields,
                       List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
    pLVar1 = param_1->___languages_5;
    if (pLVar1 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
      uVar2 = pLVar1->____size_2;
      uVar4 = (int)((param_2 ^ 1) * 2 + -1 + uVar2 + iVar3) % (int)uVar2;
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      LanguageButtons_SetLanguage_m07CB1C84470821D24475BEA3C49BB2646008FB66
                (param_1,pLVar1->____items_1->m_Items[uVar4],(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
