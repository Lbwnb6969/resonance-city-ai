// RVA 0x110bbb0 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$add_OnConstrained
// PDB: BasePlatformSDK_add_OnConstrained_mF464FE3F370A2DE310C51F617501FAD7AA758D60
// Body: [[1110bbb0, 1110bc23]]
// Direct callees:
// 10187600 CompareExchange
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
BasePlatformSDK_add_OnConstrained_mF464FE3F370A2DE310C51F617501FAD7AA758D60
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_2,MethodInfo *param_3)

{
  Delegate_t *pDVar1;
  Delegate_t *pDVar2;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar3;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar4;
  bool bVar5;

  if (DAT_11523e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    DAT_11523e84 = '\x01';
  }
  pAVar4 = param_1->___OnConstrained_9;
  do {
    pDVar1 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
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
                       ((int *)&param_1->___OnConstrained_9,(int)pDVar2,(int)pAVar4);
    bVar5 = pAVar3 == pAVar4;
    pAVar4 = pAVar3;
    if (bVar5) {
      return;
    }
  } while( true );
}
