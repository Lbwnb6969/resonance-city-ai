// RVA 0x234080 | Placemaker.Ui.ControlBindingKey$$SetOnClickListener
// PDB: ControlBindingKey_SetOnClickListener_mC8857BF99B8D262880AC4B52973F0DDBA7C3224B
// Body: [[10234080, 10234140]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10670ad0 UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9
// 10670e30 UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D

void __cdecl
ControlBindingKey_SetOnClickListener_mC8857BF99B8D262880AC4B52973F0DDBA7C3224B
          (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *param_1,int param_2,
          Action_1_t69017E290BC714F08969E04E3C9CD1A5D0C99F82 *param_3,MethodInfo *param_4)

{
  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *pUVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_1151b5a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass7_0_U3CSetOnClickListenerU3Eb__0_m28434B451B3727F13531E08C9D343A8E93CA5106_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass7_0_tC94E2A232DDEB12FA60F4B12C1DD568B28C162D3_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
    DAT_1151b5a5 = '\x01';
  }
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass7_0_tC94E2A232DDEB12FA60F4B12C1DD568B28C162D3_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  if (pBVar2 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar2->___name_0 = (String_t *)param_3;
    pBVar2->___screenAspectRatio_1 = (float)param_1;
    param_1->___actionElementMapId_7 = param_2;
    if ((param_1->___baseButton_9 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) &&
       (pUVar1 = param_1->___baseButton_9->___onClick_4,
       pUVar1 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0)) {
      UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9
                ((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)pUVar1,
                 (MethodInfo *)0x0);
      if (param_1->___baseButton_9 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
        pUVar1 = param_1->___baseButton_9->___onClick_4;
        pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (
                           UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var
                           );
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar3,(Il2CppObject *)pBVar2,
                   (int)
                   U3CU3Ec__DisplayClass7_0_U3CSetOnClickListenerU3Eb__0_m28434B451B3727F13531E08C9D343A8E93CA5106_RuntimeMethod_var
                   ,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0) {
          UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D
                    (pUVar1,(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)pOVar3,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
