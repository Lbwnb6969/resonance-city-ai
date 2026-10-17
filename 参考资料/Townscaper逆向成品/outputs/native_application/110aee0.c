// RVA 0x110aee0 | FuryStudios.FurySDK.Internal.AsyncRequestScheduler$$Schedule
// PDB: AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// Body: [[1110aee0, 1110af3b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10456330 CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
// 10513710 Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared

void __cdecl
AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_1,
          Il2CppObject *param_2,MethodInfo *param_3)

{
  if (DAT_11523e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Enqueue_mDE98C1ED1792407446B9C66E0645AFFACA62CCF0_RuntimeMethod_var)
    ;
    DAT_11523e7c = '\x01';
  }
  if ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___requestQueue_0 !=
      (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
    Queue_1_Enqueue_m107E173BF8C3C568A0533F5A5BDF660D554EA8C7_gshared
              ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___requestQueue_0,
               (uint)param_2,
               Queue_1_Enqueue_mDE98C1ED1792407446B9C66E0645AFFACA62CCF0_RuntimeMethod_var);
    if ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
        param_1->___OnRequestScheduled_1 !=
        (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)0x0) {
      CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
                ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
                 param_1->___OnRequestScheduled_1,
                 (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)param_2,
                 (MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
