// RVA 0x110bee0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$remove_OnSuspended
// PDB: BasePlatformSDK_remove_OnSuspended_m2E75A10A257E212A0BDF20A922303238D66DC183
// Body: [[1110bee0, 1110bf53]]
// Direct callees:
// 10187600 CompareExchange
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10b17b90 Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4

void __cdecl
BasePlatformSDK_remove_OnSuspended_m2E75A10A257E212A0BDF20A922303238D66DC183
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_2,MethodInfo *param_3)

{
  Delegate_t *pDVar1;
  Delegate_t *pDVar2;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar3;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar4;
  bool bVar5;

  if (DAT_11523e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    DAT_11523e81 = '\x01';
  }
  pAVar4 = param_1->___OnSuspended_7;
  do {
    pDVar1 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4
                       ((Delegate_t *)pAVar4,(Delegate_t *)param_2,(MethodInfo *)0x0);
    pDVar2 = (Delegate_t *)0x0;
    if (pDVar1 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar1->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  ((Il2CppObject *)pDVar1,
                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      }
    }
    pAVar3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             il2cpp::icalls::mscorlib::System::Threading::Interlocked::CompareExchange
                       ((int *)&param_1->___OnSuspended_7,(int)pDVar2,(int)pAVar4);
    bVar5 = pAVar3 == pAVar4;
    pAVar4 = pAVar3;
    if (bVar5) {
      return;
    }
  } while( true );
}
