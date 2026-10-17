// RVA 0x9a21d0 | FuryStudios.FurySDK.Internal.CallbackAsyncRequest<bool>$$.ctor
// PDB: CallbackAsyncRequest_1__ctor_m2E06E9FC7D938F49258B20DF729DC4D0AEEE52BD_gshared
// Body: [[109a21d0, 109a21f9]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1052d6c0 Comparer__ctor_m8606A9229E243F0863D5256ABDE7DD145F43D87E

void __cdecl
CallbackAsyncRequest_1__ctor_m2E06E9FC7D938F49258B20DF729DC4D0AEEE52BD_gshared
          (CallbackAsyncRequest_1_t61B6B21D13AE37C9A3ED6C3014F91FB5FD1DCB05 *param_1,
          AsyncRequestCallback_1_t681CB56DB736B714A38B3C8939A302D6A797F386 *param_2,
          Il2CppObject *param_3,MethodInfo *param_4)

{
  if (param_1 != (CallbackAsyncRequest_1_t61B6B21D13AE37C9A3ED6C3014F91FB5FD1DCB05 *)0x0) {
    Comparer__ctor_m8606A9229E243F0863D5256ABDE7DD145F43D87E
              ((Comparer_tEDD9ACE3DE237FE0628C183D9DD66A8BE3182A57 *)param_1,(MethodInfo *)0x0);
    param_1->___callback_6 = param_2;
    param_1->___parent_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
