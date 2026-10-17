// RVA 0x3dcf90 | Placemaker.Ui.NavigableButton$$OnSubmit
// PDB: NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
// Body: [[103dcf90, 103dd000]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10873f30 BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28

/* WARNING: Removing unreachable block (ram,0x103dcfda) */

void __cdecl
NavigableButton_OnSubmit_mD79DCDA693D0F0C82AE4605C63EAAA7A6408F0BE
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_1,MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;

  if (DAT_1151c890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m752D4E53C6F4BFB337F007FBBE5050F0A5190A78_RuntimeMethod_var
              );
    DAT_1151c890 = '\x01';
  }
  pOVar1 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                      Component_TryGetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m752D4E53C6F4BFB337F007FBBE5050F0A5190A78_RuntimeMethod_var
                     );
  if (((char)pOVar1 == '\0') &&
     ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onSubmit_5 !=
      (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               param_1->___onSubmit_5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
