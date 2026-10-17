// RVA 0x10d0d90 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$ShowConfirm
// PDB: PlatformSystemMessengerBase_ShowConfirm_m3205CFA5C751DE4D8DC4ECA78B7526DF1DE4F79B
// Body: [[110d0d90, 110d0e13]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10513710 Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared

void __cdecl
PlatformSystemMessengerBase_ShowConfirm_m3205CFA5C751DE4D8DC4ECA78B7526DF1DE4F79B
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          String_t *param_2,String_t *param_3,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_4,MethodInfo *param_5)

{
  Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *pQVar1;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar2;

  if (DAT_11523a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var)
    ;
    DAT_11523a9e = '\x01';
  }
  pQVar1 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___messages_5;
  pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9_il2cpp_TypeInfo_var);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar2[1]._padding_ = (int)param_3;
    pUVar2->___U3CU3E1__state_0 = 1;
    pUVar2->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
    pUVar2[1].___U3CU3E1__state_0 = (int)param_4;
    if (pQVar1 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
      Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
                (pQVar1,(uint)pUVar2,
                 Queue_1_Enqueue_mB197D8052B6E5FA67B1438B1D5CF664C5779245A_RuntimeMethod_var);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
