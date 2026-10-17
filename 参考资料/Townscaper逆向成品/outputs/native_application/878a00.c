// RVA 0x878a00 | BindingRow$$SetButton
// PDB: BindingRow_SetButton_m08D3BD7C711391D0DA78B7FDAC5F72AD7C8E7ED6
// Body: [[10878a00, 10878aeb]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10670ad0 UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9
// 10670e30 UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D

void __cdecl
BindingRow_SetButton_m08D3BD7C711391D0DA78B7FDAC5F72AD7C8E7ED6
          (BindingRow_t56D7B2F34271796B77D8360E8DF57BA956DC0BA7 *param_1,String_t *param_2,
          Action_3_t8C989E8B6758A78BA011EE84316DF870E598D4AE *param_3,int param_4,int param_5,
          bool param_6,MethodInfo *param_7)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;
  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *pUVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;

  if (DAT_1151f5bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass7_0_U3CSetButtonU3Eb__0_m9F97E369CCF37843842FBA066DC9ACAF6C6A887B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass7_0_t198EAFA435D901C843E023DE0AF013B8E31CCB54_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
    DAT_1151f5bc = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass7_0_t198EAFA435D901C843E023DE0AF013B8E31CCB54_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar3->___screenAspectRatio_1 = (float)param_4;
    (pBVar3->___referenceResolution_2).___x_0 = (float)param_5;
    pBVar3->___name_0 = (String_t *)param_3;
    *(bool *)&(pBVar3->___referenceResolution_2).___y_1 = param_6;
    pTVar1 = param_1->___buttonText_5;
    if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
      (**(code **)(pTVar1->_padding_ + 0x2cc))
                (pTVar1,param_2,*(undefined4 *)(pTVar1->_padding_ + 0x2d0));
      if ((param_1->___baseButton_6 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
         && (pUVar2 = param_1->___baseButton_6->___onClick_4,
            pUVar2 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0)) {
        UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9
                  ((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)pUVar2,
                   (MethodInfo *)0x0);
        if (param_1->___baseButton_6 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
        {
          pUVar2 = param_1->___baseButton_6->___onClick_4;
          pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (
                             UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar4,(Il2CppObject *)pBVar3,
                     (int)
                     U3CU3Ec__DisplayClass7_0_U3CSetButtonU3Eb__0_m9F97E369CCF37843842FBA066DC9ACAF6C6A887B_RuntimeMethod_var
                     ,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0) {
            UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D
                      (pUVar2,(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)pOVar4,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
