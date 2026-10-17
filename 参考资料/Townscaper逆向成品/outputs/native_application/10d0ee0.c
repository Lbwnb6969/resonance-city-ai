// RVA 0x10d0ee0 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$ShowPrompt
// PDB: PlatformSystemMessengerBase_ShowPrompt_m0CD5204ACEB7746281038DB5A4FB817514127F61
// Body: [[110d0ee0, 110d0ffa]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10513710 Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared

void __cdecl
PlatformSystemMessengerBase_ShowPrompt_m0CD5204ACEB7746281038DB5A4FB817514127F61
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          String_t *param_2,String_t *param_3,String_t *param_4,
          Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *param_5,MethodInfo *param_6)

{
  Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *pQVar1;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar2;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;

  if (DAT_11523a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass18_0_U3CShowPromptU3Eb__0_m1FD0BA406CEA372AF3C02015AE6BAB39CC2FAAB7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass18_0_U3CShowPromptU3Eb__1_mC19D7EA1EF9C6DFC82201F90A598A9ADEAD72109_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass18_0_t41F6E053D321CD0DE3840FF610B6006A45CD074A_il2cpp_TypeInfo_var
              );
    DAT_11523a9f = '\x01';
  }
  pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass18_0_t41F6E053D321CD0DE3840FF610B6006A45CD074A_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar2->___U3CU3E1__state_0 = (int)param_5;
    pQVar1 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___messages_5;
    pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
             il2cpp_codegen_object_new
                       (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              (pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
      pUVar3->___U3CU3E1__state_0 = 2;
      pUVar3->___U3CU3E4__this_2 =
           (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
      pUVar3[1]._padding_ = (int)param_3;
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)pUVar2,
                 (int)
                 U3CU3Ec__DisplayClass18_0_U3CShowPromptU3Eb__0_m1FD0BA406CEA372AF3C02015AE6BAB39CC2FAAB7_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pUVar3[1].___U3CU3E1__state_0 = (int)pOVar4;
      pUVar3[1]._padding_ = (int)param_4;
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)pUVar2,
                 (int)
                 U3CU3Ec__DisplayClass18_0_U3CShowPromptU3Eb__1_mC19D7EA1EF9C6DFC82201F90A598A9ADEAD72109_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pUVar3[1].___U3CU3E2__current_1 = (Il2CppObject *)pOVar4;
      if (pQVar1 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
        Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
                  (pQVar1,(uint)pUVar3,
                   Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
