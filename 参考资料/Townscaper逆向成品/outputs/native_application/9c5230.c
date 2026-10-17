// RVA 0x9c5230 | TextFps.<FpsCounter>d__5$$MoveNext
// PDB: U3CFpsCounterU3Ed__5_MoveNext_mFE438D97152E2EEB2C62D9F5A2EEADF88C5A60B4
// Body: [[109c5230, 109c52c1]]
// Direct callees:
// 10069090 bankers_roundf
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84

bool __cdecl
U3CFpsCounterU3Ed__5_MoveNext_mFE438D97152E2EEB2C62D9F5A2EEADF88C5A60B4
          (U3CFpsCounterU3Ed__5_t1AA93DFC96E56AFEC7A068DC0C9E5ABCA7BAF289 *param_1,
          MethodInfo *param_2)

{
  TextFps_t2E68405F76B6D147E838580426F41D0245F129A0 *pTVar1;
  float fVar2;

  pTVar1 = param_1->___U3CU3E4__this_2;
  if ((param_1->___U3CU3E1__state_0 != 0) && (param_1->___U3CU3E1__state_0 != 1)) {
    return false;
  }
  param_1->___U3CU3E1__state_0 = -1;
  fVar2 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  if (pTVar1 != (TextFps_t2E68405F76B6D147E838580426F41D0245F129A0 *)0x0) {
    fVar2 = __real_3f800000 / fVar2;
    pTVar1->___currentFps_6 = fVar2;
    fVar2 = bankers_roundf(fVar2 * __real_42c80000);
    fVar2 = bankers_roundf(fVar2 / __real_42c80000);
    pTVar1->___currentFps_6 = fVar2;
    param_1->___U3CU3E2__current_1 = (Il2CppObject *)pTVar1->___wait_5;
    param_1->___U3CU3E1__state_0 = 1;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
