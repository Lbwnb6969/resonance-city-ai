// RVA 0x10d0e20 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$ShowOverlay
// PDB: PlatformSystemMessengerBase_ShowOverlay_m1C7D1EF9849425061BD3EA109D8FD7D896EF585B
// Body: [[110d0e20, 110d0ed7]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10513710 Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

void __cdecl
PlatformSystemMessengerBase_ShowOverlay_m1C7D1EF9849425061BD3EA109D8FD7D896EF585B
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          String_t *param_2,float param_3,MethodInfo *param_4)

{
  Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *pMVar1;
  Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *pQVar2;
  bool bVar3;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar4;

  if (DAT_11523a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var)
    ;
    DAT_11523a9d = '\x01';
  }
  if (param_1->___activeMessage_4 != (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) {
    bVar3 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                      (param_1->___activeMessage_4->___message_2,param_2,(MethodInfo *)0x0);
    if (bVar3) {
      pMVar1 = param_1->___activeMessage_4;
      if (pMVar1 == (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) goto LAB_110d0ed3;
      if (pMVar1->___type_0 == 0) {
        pMVar1->___duration_1 = param_3;
        return;
      }
    }
  }
  pQVar2 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___messages_5;
  pUVar4 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar4->___U3CU3E1__state_0 = 0;
    pUVar4->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
    pUVar4->___U3CU3E2__current_1 = (Il2CppObject *)param_3;
    if (pQVar2 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
      Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
                (pQVar2,(uint)pUVar4,
                 Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var);
      return;
    }
  }
LAB_110d0ed3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
