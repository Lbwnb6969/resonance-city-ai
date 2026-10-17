// RVA 0x1db6f0 | Placemaker.FastCoroutines.<FastCoroutine>d__9$$MoveNext
// PDB: U3CFastCoroutineU3Ed__9_MoveNext_mCB829180C9F39E9A6F2F9CC707777F8D822A145D
// Body: [[101db6f0, 101db80c]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 10837b70 FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD

bool __cdecl
U3CFastCoroutineU3Ed__9_MoveNext_mCB829180C9F39E9A6F2F9CC707777F8D822A145D
          (U3CFastCoroutineU3Ed__9_tBC25476FF1A321395E01428E559C83413AFC0B5C *param_1,
          MethodInfo *param_2)

{
  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *pSVar1;
  bool bVar2;
  int iVar3;

  if (DAT_1151afaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    DAT_1151afaf = '\x01';
  }
  if ((param_1->___U3CU3E1__state_0 != 0) && (param_1->___U3CU3E1__state_0 != 1)) {
    return false;
  }
  param_1->___U3CU3E1__state_0 = -1;
  do {
    if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
    }
    pSVar1 = *(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
              ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                    static_fields + 4);
    if (pSVar1 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
LAB_101db808:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B(pSVar1,(MethodInfo *)0x0);
    *(int *)((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                  static_fields + 8) = param_1->___milliseconds_2;
    if (param_1->___enumerator_3 == (Il2CppObject *)0x0) goto LAB_101db808;
    iVar3 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___enumerator_3);
    if ((char)iVar3 == '\0') {
      return false;
    }
    if (param_1->___enumerator_3 == (Il2CppObject *)0x0) goto LAB_101db808;
    iVar3 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0_il2cpp_TypeInfo_var
                       ,param_1->___enumerator_3);
    if ((char)iVar3 == '\0') break;
    if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
    }
    bVar2 = FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD((MethodInfo *)0x0);
  } while (bVar2);
  param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
  param_1->___U3CU3E1__state_0 = 1;
  return true;
}
