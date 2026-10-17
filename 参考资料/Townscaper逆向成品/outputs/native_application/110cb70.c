// RVA 0x110cb70 | FuryStudios.FurySDK.Internal.NoopAsyncRequest$$.ctor
// PDB: NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420
// Body: [[1110cb70, 1110cb96]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1110b3a0 AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48

void __cdecl
NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420
          (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  *(undefined4 *)&param_1->field_0x8 = 0;
  AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
            ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,param_2,
             (MethodInfo *)0x0);
  return;
}
